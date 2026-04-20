#pragma once

#include <string>
#include <cstdint>

struct BridgeConfig {
    // Rithmic Settings
    std::string rithmicUser;
    std::string rithmicPassword;
    std::string rithmicMdConnectPoint = "127.0.0.1:3010"; // Plugin Host MD
    std::string rithmicIhConnectPoint = "127.0.0.1:3012"; // Plugin Host IH/TS

    // DTC Settings
    uint16_t dtcPort = 11099;
    bool separateHistoricalPort = false;
    uint16_t dtcHistoricalPort = 11098;
    
    // Bridge Options
    bool useMBO = false; // MBO (Depth by Order) via DboInfo, else MBP via Ask/BidQuote
    bool enableTickReplay = false; // Send tick-by-tick for historical data
    std::string sslCertPath = "H:\\DORIAN\\13.7.0.0\\etc\\rithmic_ssl_cert_auth_params";
    bool saveLogin = false;
};

// Global instance for config
extern BridgeConfig g_Config;
