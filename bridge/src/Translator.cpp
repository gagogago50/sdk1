#include "Translator.h"
#include "Utils.h"
#include "DTCServer.h"

void Translator::onDtcSecurityDefinitionRequest(SOCKET client, const DTC::s_SecurityDefinitionForSymbolRequest* req) {
    Utils::Logger::Log("Translator: Security Definition Request for " + std::string(req->Symbol));
    // Send basic response back
    DTC::s_SecurityDefinitionResponse resp;
    resp.RequestID = req->RequestID;
    strncpy_s(resp.Symbol, req->Symbol, sizeof(resp.Symbol));
    strncpy_s(resp.Exchange, req->Exchange, sizeof(resp.Exchange));
    resp.SecurityType = DTC::SECURITY_TYPE_FUTURES; // default for now
    resp.PriceDisplayFormat = DTC::PRICE_DISPLAY_FORMAT_DECIMAL_2;
    resp.MinPriceIncrement = 0.25; // Dummy
    m_dtc->sendMessage(client, &resp, resp.Size);
}

void Translator::onDtcMarketDataRequest(SOCKET client, const DTC::s_MarketDataRequest* req) {
    Utils::Logger::Log("Translator: Market Data Request for " + std::string(req->Symbol));
    if (req->RequestAction == DTC::SUBSCRIBE) {
        {
            std::lock_guard<std::mutex> lock(m_translatorMutex);
            m_tickerToSymbolId[std::string(req->Symbol)] = req->SymbolID;
            m_symbolIdToTicker[req->SymbolID] = std::string(req->Symbol);
        }
        
        m_rithmic->subscribeMarketData(req->Exchange, req->Symbol);
        
        // Send snapshot immediately (just empty base for SC to accept)
        DTC::s_MarketDataSnapshot snap;
        snap.SymbolID = req->SymbolID;
        m_dtc->sendMessage(client, &snap, snap.Size);
    } else if (req->RequestAction == DTC::UNSUBSCRIBE) {
        m_rithmic->unsubscribeMarketData(req->Exchange, req->Symbol);
    }
}

void Translator::onDtcMarketDepthRequest(SOCKET client, const DTC::s_MarketDepthRequest* req) {
    Utils::Logger::Log("Translator: Market Depth Request for " + std::string(req->Symbol));
    if (req->RequestAction == DTC::SUBSCRIBE) {
        m_rithmic->subscribeMBO(req->Exchange, req->Symbol);
    }
}

void Translator::onDtcSubmitNewSingleOrder(SOCKET client, const DTC::s_SubmitNewSingleOrder* req) {
    Utils::Logger::Log("Translator: New Order " + std::string(req->ClientOrderID));
    // Translate to RApi::OrderParams
}

void Translator::onDtcCancelOrder(SOCKET client, const DTC::s_CancelOrder* req) {
    Utils::Logger::Log("Translator: Cancel Order " + std::string(req->ClientOrderID));
}

void Translator::onDtcCancelReplaceOrder(SOCKET client, const DTC::s_CancelReplaceOrder* req) {
    Utils::Logger::Log("Translator: Cancel Replace Order " + std::string(req->ClientOrderID));
}

// -------------------------------------------------------------------
// Rithmic -> DTC Translation
// -------------------------------------------------------------------

void Translator::onRithmicAskQuote(const RApi::AskInfo* pInfo) {
    // Basic Ask update could be mapped to MarketDataUpdateAsk
}

void Translator::onRithmicBidQuote(const RApi::BidInfo* pInfo) {
    // Basic Bid update could be mapped to MarketDataUpdateBid
}

void Translator::onRithmicBestAskQuote(const RApi::AskInfo* pInfo) {
    if (!pInfo->sTicker.pData) return;
    std::string ticker = Utils::tsToString(pInfo->sTicker);
    uint32_t symbolID = 0;
    bool found = false;
    {
        std::lock_guard<std::mutex> lock(m_translatorMutex);
        auto it = m_tickerToSymbolId.find(ticker);
        if (it != m_tickerToSymbolId.end()) {
            symbolID = it->second;
            found = true;
        }
    }
    if (found) {
        DTC::s_MarketDataUpdateBidAsk msg;
        msg.SymbolID = symbolID;
        msg.AskPrice = pInfo->dPrice;
        msg.AskQuantity = (float)pInfo->llSize;
        msg.BidPrice = DBL_MAX; // ignore
        msg.BidQuantity = 0;
        msg.DateTime = (uint32_t)pInfo->iSsboe;
        m_dtc->sendMessage(0, &msg, msg.Size); // broadcast
    }
}

void Translator::onRithmicBestBidQuote(const RApi::BidInfo* pInfo) {
    if (!pInfo->sTicker.pData) return;
    std::string ticker = Utils::tsToString(pInfo->sTicker);
    uint32_t symbolID = 0;
    bool found = false;
    {
        std::lock_guard<std::mutex> lock(m_translatorMutex);
        auto it = m_tickerToSymbolId.find(ticker);
        if (it != m_tickerToSymbolId.end()) {
            symbolID = it->second;
            found = true;
        }
    }
    if (found) {
        DTC::s_MarketDataUpdateBidAsk msg;
        msg.SymbolID = symbolID;
        msg.BidPrice = pInfo->dPrice;
        msg.BidQuantity = (float)pInfo->llSize;
        msg.AskPrice = DBL_MAX; // ignore
        msg.AskQuantity = 0;
        msg.DateTime = (uint32_t)pInfo->iSsboe;
        m_dtc->sendMessage(0, &msg, msg.Size); // broadcast
    }
}

void Translator::onRithmicTradePrint(const RApi::TradeInfo* pInfo) {
    if (!pInfo->sTicker.pData) return;
    std::string ticker = Utils::tsToString(pInfo->sTicker);
    uint32_t symbolID = 0;
    bool found = false;
    {
        std::lock_guard<std::mutex> lock(m_translatorMutex);
        auto it = m_tickerToSymbolId.find(ticker);
        if (it != m_tickerToSymbolId.end()) {
            symbolID = it->second;
            found = true;
        }
    }
    if (found) {
        DTC::s_MarketDataUpdateTrade msg;
        msg.SymbolID = symbolID;
        msg.Price = pInfo->dPrice;
        msg.Volume = (float)pInfo->llSize;
        msg.DateTime = (uint32_t)pInfo->iSsboe;
        msg.AtBidOrAsk = DTC::AT_ASK; // needs proper mapping based on sAggressorSide
        m_dtc->sendMessage(0, &msg, msg.Size); // broadcast
    }
}

void Translator::onRithmicDbo(const RApi::DboInfo* pInfo) {
    if (!pInfo->sTicker.pData) return;
    std::string ticker = Utils::tsToString(pInfo->sTicker);
    uint32_t symbolID = 0;
    bool found = false;
    {
        std::lock_guard<std::mutex> lock(m_translatorMutex);
        auto it = m_tickerToSymbolId.find(ticker);
        if (it != m_tickerToSymbolId.end()) {
            symbolID = it->second;
            found = true;
        }
    }
    if (found) {
        DTC::s_MarketDepthUpdateLevel msg;
        msg.SymbolID = symbolID;
        msg.Price = pInfo->dPrice;
        msg.Quantity = (float)pInfo->llSize;
        msg.UpdateType = (pInfo->sDboUpdateType.pData && pInfo->sDboUpdateType.pData[0] == 'D') ? DTC::MARKET_DEPTH_DELETE_LEVEL : DTC::MARKET_DEPTH_INSERT_UPDATE_LEVEL;
        msg.Side = (pInfo->sSide.pData && pInfo->sSide.pData[0] == 'B') ? DTC::AT_BID : DTC::AT_ASK;
        m_dtc->sendMessage(0, &msg, msg.Size); // broadcast
    }
}

void Translator::onRithmicBar(const RApi::BarInfo* pInfo) {}
void Translator::onRithmicOrderReport(const RApi::OrderReport* pInfo) {}
void Translator::onRithmicOrderFillReport(const RApi::OrderFillReport* pInfo) {}

