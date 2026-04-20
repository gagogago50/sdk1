#include "RithmicClient.h"
#include "Translator.h"
#include "Utils.h"

// --- Callbacks ---

int MyAdmCallbacks::Alert(RApi::AlertInfo* pInfo, void* pContext, int* aiCode) {
    if (pInfo && pInfo->sMessage.pData) {
        Utils::Logger::Log("Rithmic ADM Alert: " + Utils::tsToString(pInfo->sMessage));
    }
    *aiCode = API_OK;
    return OK;
}

int MyCallbacks::Alert(RApi::AlertInfo* pInfo, void* pContext, int* aiCode) {
    if (pInfo && pInfo->sMessage.pData) {
        Utils::Logger::Log("Rithmic Alert: " + Utils::tsToString(pInfo->sMessage));
    }
    *aiCode = API_OK;
    return OK;
}

int MyCallbacks::AskQuote(RApi::AskInfo* pInfo, void* pContext, int* aiCode) { if (m_client->getTranslator()) m_client->getTranslator()->onRithmicAskQuote(pInfo); *aiCode = API_OK; return OK; }
int MyCallbacks::BidQuote(RApi::BidInfo* pInfo, void* pContext, int* aiCode) { if (m_client->getTranslator()) m_client->getTranslator()->onRithmicBidQuote(pInfo); *aiCode = API_OK; return OK; }
int MyCallbacks::TradePrint(RApi::TradeInfo* pInfo, void* pContext, int* aiCode) { if (m_client->getTranslator()) m_client->getTranslator()->onRithmicTradePrint(pInfo); *aiCode = API_OK; return OK; }
int MyCallbacks::BestAskQuote(RApi::AskInfo* pInfo, void* pContext, int* aiCode) { if (m_client->getTranslator()) m_client->getTranslator()->onRithmicBestAskQuote(pInfo); *aiCode = API_OK; return OK; }
int MyCallbacks::BestBidQuote(RApi::BidInfo* pInfo, void* pContext, int* aiCode) { if (m_client->getTranslator()) m_client->getTranslator()->onRithmicBestBidQuote(pInfo); *aiCode = API_OK; return OK; }
int MyCallbacks::Dbo(RApi::DboInfo* pInfo, void* pContext, int* aiCode) { if (m_client->getTranslator()) m_client->getTranslator()->onRithmicDbo(pInfo); *aiCode = API_OK; return OK; }
int MyCallbacks::Bar(RApi::BarInfo* pInfo, void* pContext, int* aiCode) { if (m_client->getTranslator()) m_client->getTranslator()->onRithmicBar(pInfo); *aiCode = API_OK; return OK; }
int MyCallbacks::BarReplay(RApi::BarReplayInfo* pInfo, void* pContext, int* aiCode) { *aiCode = API_OK; return OK; }
int MyCallbacks::OrderReport(RApi::OrderReport* pInfo, void* pContext, int* aiCode) { if (m_client->getTranslator()) m_client->getTranslator()->onRithmicOrderReport(pInfo); *aiCode = API_OK; return OK; }
int MyCallbacks::OrderFillReport(RApi::OrderFillReport* pInfo, void* pContext, int* aiCode) { if (m_client->getTranslator()) m_client->getTranslator()->onRithmicOrderFillReport(pInfo); *aiCode = API_OK; return OK; }

// --- RithmicClient ---

RithmicClient::RithmicClient() : m_engine(nullptr), m_admCallbacks(nullptr), m_callbacks(nullptr), m_translator(nullptr), m_loggedIn(false) {}

RithmicClient::~RithmicClient() {
    shutdown();
}

bool RithmicClient::init(const BridgeConfig& config) {
    if (m_engine) return true; // already init

    int iCode;
    m_admCallbacks = new MyAdmCallbacks(this);

    // Provide a default environment to initialize the engine, even though we use Plugin mode
    static std::string userEnv = "USER=" + config.rithmicUser;
    static std::string sslEnv = "MML_SSL_CLNT_AUTH_FILE=" + config.sslCertPath;
    
    static char* envp[] = {
        (char*)"MML_DMN_SRVR_ADDR=rituz00100.00.rithmic.com:65000~rituz00100.00.rithmic.net:65000~rituz00100.00.theomne.net:65000~rituz00100.00.theomne.com:65000",
        (char*)"MML_DOMAIN_NAME=rithmic_uat_dmz_domain",
        (char*)"MML_LIC_SRVR_ADDR=rituz00100.00.rithmic.com:56000~rituz00100.00.rithmic.net:56000~rituz00100.00.theomne.net:56000~rituz00100.00.theomne.com:56000",
        (char*)"MML_LOC_BROK_ADDR=rituz00100.00.rithmic.com:64100",
        (char*)"MML_LOGGER_ADDR=rituz00100.00.rithmic.com:45454~rituz00100.00.rithmic.net:45454~rituz00100.00.theomne.com:45454~rituz00100.00.theomne.net:45454",
        (char*)"MML_LOG_TYPE=log_net",
        (char*)sslEnv.c_str(),
        (char*)"RAPI_MD_ENCODING=4",
        (char*)"RAPI_IH_ENCODING=4",
        (char*)userEnv.c_str(),
        nullptr
    };

    RApi::REngineParams reParams = {};
    reParams.sAppName.pData = (char*)"RithmicDTCBridge";
    reParams.sAppName.iDataLen = (int)strlen(reParams.sAppName.pData);
    reParams.sAppVersion.pData = (char*)"1.0";
    reParams.sAppVersion.iDataLen = (int)strlen(reParams.sAppVersion.pData);
    reParams.envp = envp;
    reParams.pAdmCallbacks = m_admCallbacks;
    reParams.sLogFilePath.pData = (char*)"bridge_rithmic.log";
    reParams.sLogFilePath.iDataLen = (int)strlen(reParams.sLogFilePath.pData);

    try {
        m_engine = new RApi::REngine(&reParams);
        m_callbacks = new MyCallbacks(this);
    } catch (OmneException& e) {
        Utils::Logger::Log("Rithmic Engine init failed: " + std::to_string(e.getErrorCode()));
        return false;
    }

    return true;
}

bool RithmicClient::login() {
    if (!m_engine || m_loggedIn) return false;

    RApi::LoginParams lp = {};
    lp.pCallbacks = m_callbacks;

    lp.sMdCnnctPt.pData = const_cast<char*>(g_Config.rithmicMdConnectPoint.c_str());
    lp.sMdCnnctPt.iDataLen = (int)g_Config.rithmicMdConnectPoint.length();
    
    lp.sTsCnnctPt.pData = const_cast<char*>(g_Config.rithmicIhConnectPoint.c_str());
    lp.sTsCnnctPt.iDataLen = (int)g_Config.rithmicIhConnectPoint.length();
    
    lp.sIhCnnctPt = lp.sTsCnnctPt; // Usually IH is on the same port in plugin mode or not required separately if combined

    lp.sMdUser.pData = const_cast<char*>(g_Config.rithmicUser.c_str());
    lp.sMdUser.iDataLen = (int)g_Config.rithmicUser.length();
    lp.sMdPassword.pData = const_cast<char*>(g_Config.rithmicPassword.c_str());
    lp.sMdPassword.iDataLen = (int)g_Config.rithmicPassword.length();
    
    lp.sTsUser = lp.sMdUser;
    lp.sTsPassword = lp.sMdPassword;
    lp.sIhUser = lp.sMdUser;
    lp.sIhPassword = lp.sMdPassword;

    int iCode = 0;
    if (!m_engine->login(&lp, &iCode)) {
        Utils::Logger::Log("Rithmic login() call failed with code: " + std::to_string(iCode));
        return false;
    }

    Utils::Logger::Log("Rithmic login initiated in Plugin Host Mode.");
    m_loggedIn = true;
    return true;
}

void RithmicClient::logout() {
    if (m_engine && m_loggedIn) {
        int iCode = 0;
        m_engine->logout(&iCode);
        m_loggedIn = false;
        Utils::Logger::Log("Rithmic logged out.");
    }
}

void RithmicClient::shutdown() {
    logout();
    if (m_engine) {
        delete m_engine;
        m_engine = nullptr;
    }
    if (m_callbacks) {
        delete m_callbacks;
        m_callbacks = nullptr;
    }
    if (m_admCallbacks) {
        delete m_admCallbacks;
        m_admCallbacks = nullptr;
    }
}

void RithmicClient::subscribeMarketData(const std::string& exchange, const std::string& ticker) {
    if (!m_engine || !m_loggedIn) return;
    int iCode = 0;
    tsNCharcb sExchange = { const_cast<char*>(exchange.c_str()), (int)exchange.length() };
    tsNCharcb sTicker = { const_cast<char*>(ticker.c_str()), (int)ticker.length() };
    int flags = RApi::MD_PRINTS | RApi::MD_BEST | RApi::MD_QUOTES | RApi::MD_TRADE_VOLUME | RApi::MD_CLOSE | RApi::MD_SETTLEMENT | RApi::MD_OPEN_INTEREST;
    m_engine->subscribe(&sExchange, &sTicker, flags, &iCode);
}

void RithmicClient::unsubscribeMarketData(const std::string& exchange, const std::string& ticker) {
    if (!m_engine || !m_loggedIn) return;
    int iCode = 0;
    tsNCharcb sExchange = { const_cast<char*>(exchange.c_str()), (int)exchange.length() };
    tsNCharcb sTicker = { const_cast<char*>(ticker.c_str()), (int)ticker.length() };
    m_engine->unsubscribe(&sExchange, &sTicker, &iCode);
}

void RithmicClient::subscribeMBO(const std::string& exchange, const std::string& ticker) {
    if (!m_engine || !m_loggedIn) return;
    int iCode = 0;
    tsNCharcb sExchange = { const_cast<char*>(exchange.c_str()), (int)exchange.length() };
    tsNCharcb sTicker = { const_cast<char*>(ticker.c_str()), (int)ticker.length() };
    m_engine->subscribeDbo(&sExchange, &sTicker, false, 0.0, nullptr, &iCode);
}

void RithmicClient::requestSecurityDefinition(const std::string& exchange, const std::string& ticker) {
    if (!m_engine || !m_loggedIn) return;
    int iCode = 0;
    tsNCharcb sExchange = { const_cast<char*>(exchange.c_str()), (int)exchange.length() };
    tsNCharcb sTicker = { const_cast<char*>(ticker.c_str()), (int)ticker.length() };
    m_engine->getRefData(&sExchange, &sTicker, &iCode);
}

void RithmicClient::requestHistoricalBars(const std::string& exchange, const std::string& ticker, int startSsboe, int endSsboe, int barType, int period) {
    if (!m_engine || !m_loggedIn) return;
    int iCode = 0;
    // We will need to map DTC barType to Rithmic bar type and use replayBars
}

void RithmicClient::requestHistoricalTicks(const std::string& exchange, const std::string& ticker, int startSsboe, int endSsboe) {
    if (!m_engine || !m_loggedIn) return;
    int iCode = 0;
    tsNCharcb sExchange = { const_cast<char*>(exchange.c_str()), (int)exchange.length() };
    tsNCharcb sTicker = { const_cast<char*>(ticker.c_str()), (int)ticker.length() };
    m_engine->replayTrades(&sExchange, &sTicker, startSsboe, endSsboe, &iCode);
}

void RithmicClient::sendOrder(const RApi::OrderParams& params) {
    // ...
}

void RithmicClient::cancelOrder(const std::string& orderNum, const std::string& accountId) {
    // ...
}
