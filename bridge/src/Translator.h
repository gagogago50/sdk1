#pragma once

#include <string>
#include <unordered_map>
#include <mutex>
#include <winsock2.h>
#include "DTCProtocol.h"
#include "RithmicClient.h"

class DTCServer;

class Translator {
public:
    Translator(RithmicClient* rithmic, DTCServer* dtc) 
        : m_rithmic(rithmic), m_dtc(dtc) {}

    // ----------------------------------------------------
    // DTC -> Rithmic (called by DTCServer session threads)
    // ----------------------------------------------------
    void onDtcSecurityDefinitionRequest(SOCKET client, const DTC::s_SecurityDefinitionForSymbolRequest* req);
    void onDtcMarketDataRequest(SOCKET client, const DTC::s_MarketDataRequest* req);
    void onDtcMarketDepthRequest(SOCKET client, const DTC::s_MarketDepthRequest* req);
    void onDtcSubmitNewSingleOrder(SOCKET client, const DTC::s_SubmitNewSingleOrder* req);
    void onDtcCancelOrder(SOCKET client, const DTC::s_CancelOrder* req);
    void onDtcCancelReplaceOrder(SOCKET client, const DTC::s_CancelReplaceOrder* req);

    // ----------------------------------------------------
    // Rithmic -> DTC (called by Rithmic callbacks)
    // ----------------------------------------------------
    void onRithmicAskQuote(const RApi::AskInfo* pInfo);
    void onRithmicBidQuote(const RApi::BidInfo* pInfo);
    void onRithmicBestAskQuote(const RApi::AskInfo* pInfo);
    void onRithmicBestBidQuote(const RApi::BidInfo* pInfo);
    void onRithmicTradePrint(const RApi::TradeInfo* pInfo);
    void onRithmicDbo(const RApi::DboInfo* pInfo); // MBO
    
    void onRithmicBar(const RApi::BarInfo* pInfo);
    void onRithmicOrderReport(const RApi::OrderReport* pInfo);
    void onRithmicOrderFillReport(const RApi::OrderFillReport* pInfo);

private:
    RithmicClient* m_rithmic;
    DTCServer* m_dtc;
    
    // Simple mappings for POC
    std::mutex m_translatorMutex;
    std::unordered_map<std::string, uint32_t> m_tickerToSymbolId;
    std::unordered_map<uint32_t, std::string> m_symbolIdToTicker;
};
