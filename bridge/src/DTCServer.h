#pragma once

#include <string>
#include <vector>
#include <thread>
#include <atomic>
#include <unordered_map>
#include <mutex>
#include <winsock2.h>

#include "DTCProtocol.h"

class Translator;

class DTCServer {
public:
    DTCServer();
    ~DTCServer();

    bool start(uint16_t port);
    void stop();
    
    // Sends a message to a specific client session, or to all if sessionID is 0
    void sendMessage(SOCKET sessionID, const void* msg, uint16_t size);

    void setTranslator(Translator* translator) { m_translator = translator; }

private:
    void acceptLoop();
    void clientLoop(SOCKET clientSocket);
    void handleMessage(SOCKET clientSocket, const DTC::s_MessageHeader* header);

    std::atomic<bool> m_running;
    std::thread m_acceptThread;
    Translator* m_translator;
    
    SOCKET m_listenSocket;
    std::unordered_map<SOCKET, std::thread> m_clientThreads;
    std::mutex m_clientsMutex;
};
