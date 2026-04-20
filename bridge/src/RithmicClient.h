#pragma once

#include <string>
#include <atomic>
#include <thread>
#include "RApiPlus.h"
#include "BridgeConfig.h"

class Translator;
class RithmicClient;

class MyAdmCallbacks : public RApi::AdmCallbacks {
public:
    MyAdmCallbacks(RithmicClient* client) : m_client(client) {}
    virtual int Alert(RApi::AlertInfo* pInfo, void* pContext, int* aiCode);
private:
    RithmicClient* m_client;
};

class MyCallbacks : public RApi::RCallbacks {
public:
    MyCallbacks(RithmicClient* client) : m_client(client) {}
    
    virtual int Alert(RApi::AlertInfo* pInfo, void* pContext, int* aiCode);
    
    // Market Data
    virtual int AskQuote(RApi::AskInfo* pInfo, void* pContext, int* aiCode);
    virtual int BidQuote(RApi::BidInfo* pInfo, void* pContext, int* aiCode);
    virtual int TradePrint(RApi::TradeInfo* pInfo, void* pContext, int* aiCode);
    virtual int BestAskQuote(RApi::AskInfo* pInfo, void* pContext, int* aiCode);
    virtual int BestBidQuote(RApi::BidInfo* pInfo, void* pContext, int* aiCode);
    virtual int Dbo(RApi::DboInfo* pInfo, void* pContext, int* aiCode); // MBO
    
    // Historical Data
    virtual int Bar(RApi::BarInfo* pInfo, void* pContext, int* aiCode);
    virtual int BarReplay(RApi::BarReplayInfo* pInfo, void* pContext, int* aiCode);

    // Orders
    virtual int OrderReport(RApi::OrderReport* pInfo, void* pContext, int* aiCode);
    virtual int OrderFillReport(RApi::OrderFillReport* pInfo, void* pContext, int* aiCode);

private:
    RithmicClient* m_client;
};

class RithmicClient {
public:
    RithmicClient();
    ~RithmicClient();

    bool init(const BridgeConfig& config);
    bool login();
    void logout();
    void shutdown();

    void setTranslator(Translator* translator) { m_translator = translator; }
    Translator* getTranslator() const { return m_translator; }

    // Service methods that Translator will call
    void subscribeMarketData(const std::string& exchange, const std::string& ticker);
    void unsubscribeMarketData(const std::string& exchange, const std::string& ticker);
    void subscribeMBO(const std::string& exchange, const std::string& ticker);
    void requestSecurityDefinition(const std::string& exchange, const std::string& ticker);
    
    void requestHistoricalBars(const std::string& exchange, const std::string& ticker, int startSsboe, int endSsboe, int barType, int period);
    void requestHistoricalTicks(const std::string& exchange, const std::string& ticker, int startSsboe, int endSsboe);

    void sendOrder(const RApi::OrderParams& params);
    void cancelOrder(const std::string& orderNum, const std::string& accountId);
    // ... OCO, Brackets ...

private:
    RApi::REngine* m_engine;
    MyAdmCallbacks* m_admCallbacks;
    MyCallbacks* m_callbacks;
    Translator* m_translator;

    std::atomic<bool> m_loggedIn;
};
