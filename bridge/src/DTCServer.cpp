#include "DTCServer.h"
#include "Translator.h"
#include "Utils.h"
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

DTCServer::DTCServer() : m_running(false), m_translator(nullptr), m_listenSocket(INVALID_SOCKET) {
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);
}

DTCServer::~DTCServer() {
    stop();
    WSACleanup();
}

bool DTCServer::start(uint16_t port) {
    m_listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (m_listenSocket == INVALID_SOCKET) {
        Utils::Logger::Log("DTCServer: Failed to create socket.");
        return false;
    }

    // Set TCP_NODELAY
    int flag = 1;
    setsockopt(m_listenSocket, IPPROTO_TCP, TCP_NODELAY, (char*)&flag, sizeof(int));

    sockaddr_in serverAddr = {};
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(port);

    if (bind(m_listenSocket, (sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        Utils::Logger::Log("DTCServer: Bind failed.");
        closesocket(m_listenSocket);
        return false;
    }

    if (listen(m_listenSocket, SOMAXCONN) == SOCKET_ERROR) {
        Utils::Logger::Log("DTCServer: Listen failed.");
        closesocket(m_listenSocket);
        return false;
    }

    m_running = true;
    m_acceptThread = std::thread(&DTCServer::acceptLoop, this);
    return true;
}

void DTCServer::stop() {
    m_running = false;
    if (m_listenSocket != INVALID_SOCKET) {
        closesocket(m_listenSocket);
        m_listenSocket = INVALID_SOCKET;
    }
    if (m_acceptThread.joinable()) {
        m_acceptThread.join();
    }
    
    std::lock_guard<std::mutex> lock(m_clientsMutex);
    for (auto& pair : m_clientThreads) {
        closesocket(pair.first);
        if (pair.second.joinable()) {
            pair.second.join();
        }
    }
    m_clientThreads.clear();
}

void DTCServer::sendMessage(SOCKET sessionID, const void* msg, uint16_t size) {
    if (sessionID == 0) {
        std::lock_guard<std::mutex> lock(m_clientsMutex);
        for (const auto& pair : m_clientThreads) {
            send(pair.first, (const char*)msg, size, 0);
        }
    } else {
        send(sessionID, (const char*)msg, size, 0);
    }
}

void DTCServer::acceptLoop() {
    while (m_running) {
        sockaddr_in clientAddr;
        int clientLen = sizeof(clientAddr);
        SOCKET clientSocket = accept(m_listenSocket, (sockaddr*)&clientAddr, &clientLen);

        if (clientSocket == INVALID_SOCKET) {
            if (m_running) Utils::Logger::Log("DTCServer: Accept failed.");
            continue;
        }

        // Set TCP_NODELAY for client
        int flag = 1;
        setsockopt(clientSocket, IPPROTO_TCP, TCP_NODELAY, (char*)&flag, sizeof(int));

        Utils::Logger::Log("DTCServer: Client connected.");

        std::lock_guard<std::mutex> lock(m_clientsMutex);
        m_clientThreads[clientSocket] = std::thread(&DTCServer::clientLoop, this, clientSocket);
    }
}

void DTCServer::clientLoop(SOCKET clientSocket) {
    char buffer[4096];
    int recvPos = 0;

    while (m_running) {
        int bytesReceived = recv(clientSocket, buffer + recvPos, sizeof(buffer) - recvPos, 0);
        if (bytesReceived <= 0) {
            Utils::Logger::Log("DTCServer: Client disconnected.");
            break;
        }

        recvPos += bytesReceived;

        // Process all complete messages in buffer
        int processPos = 0;
        while (processPos + 4 <= recvPos) {
            DTC::s_MessageHeader* header = (DTC::s_MessageHeader*)(buffer + processPos);
            if (header->Size < 4 || header->Size > sizeof(buffer)) {
                Utils::Logger::Log("DTCServer: Invalid message size.");
                break; // Should disconnect
            }

            if (processPos + header->Size <= recvPos) {
                // We have a full message
                handleMessage(clientSocket, header);
                processPos += header->Size;
            } else {
                // Incomplete message
                break;
            }
        }

        if (processPos > 0) {
            memmove(buffer, buffer + processPos, recvPos - processPos);
            recvPos -= processPos;
        }
    }

    closesocket(clientSocket);
}

void DTCServer::handleMessage(SOCKET clientSocket, const DTC::s_MessageHeader* header) {
    switch (header->Type) {
        case DTC::ENCODING_REQUEST: {
            Utils::Logger::Log("DTCServer: Received ENCODING_REQUEST");
            DTC::s_EncodingResponse response;
            response.Encoding = DTC::BINARY_ENCODING;
            sendMessage(clientSocket, &response, response.Size);
            break;
        }
        case DTC::LOGON_REQUEST: {
            Utils::Logger::Log("DTCServer: Received LOGON_REQUEST");
            // Pass to translator later. For now auto-accept.
            DTC::s_LogonResponse response;
            response.Result = DTC::LOGON_SUCCESS;
            strcpy_s(response.ResultText, "Connected to Bridge");
            strcpy_s(response.ServerName, "Rithmic-DTC-Bridge");
            response.MarketDepthUpdatesBestBidAndAsk = 1;
            response.TradingIsSupported = 1;
            response.HistoricalPriceDataSupported = 1;
            response.MarketDepthIsSupported = 1;
            response.SecurityDefinitionsSupported = 1;
            response.OCOOrdersSupported = 1;
            response.OrderCancelReplaceSupported = 1;
            response.BracketOrdersSupported = 1;
            strcpy_s(response.SymbolExchangeDelimiter, "-");
            sendMessage(clientSocket, &response, response.Size);
            break;
        }
        case DTC::HEARTBEAT: {
            DTC::s_Heartbeat heartbeat;
            sendMessage(clientSocket, &heartbeat, heartbeat.Size);
            break;
        }
        case DTC::SECURITY_DEFINITION_FOR_SYMBOL_REQUEST: {
            if (m_translator) m_translator->onDtcSecurityDefinitionRequest(clientSocket, (const DTC::s_SecurityDefinitionForSymbolRequest*)header);
            break;
        }
        case DTC::MARKET_DATA_REQUEST: {
            if (m_translator) m_translator->onDtcMarketDataRequest(clientSocket, (const DTC::s_MarketDataRequest*)header);
            break;
        }
        case DTC::MARKET_DEPTH_REQUEST: {
            if (m_translator) m_translator->onDtcMarketDepthRequest(clientSocket, (const DTC::s_MarketDepthRequest*)header);
            break;
        }
        case DTC::SUBMIT_NEW_SINGLE_ORDER: {
            if (m_translator) m_translator->onDtcSubmitNewSingleOrder(clientSocket, (const DTC::s_SubmitNewSingleOrder*)header);
            break;
        }
        case DTC::CANCEL_ORDER: {
            if (m_translator) m_translator->onDtcCancelOrder(clientSocket, (const DTC::s_CancelOrder*)header);
            break;
        }
        case DTC::CANCEL_REPLACE_ORDER: {
            if (m_translator) m_translator->onDtcCancelReplaceOrder(clientSocket, (const DTC::s_CancelReplaceOrder*)header);
            break;
        }
        default:
            // Utils::Logger::Log("DTCServer: Received unhandled message type " + std::to_string(header->Type));
            break;
    }
}
