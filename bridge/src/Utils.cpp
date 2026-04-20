#include "Utils.h"
#include "BridgeConfig.h"

#include "BridgeConfig.h"
#include <fstream>
#include <sstream>

namespace Utils {
    std::vector<std::string> Logger::m_logs;
    std::mutex Logger::m_mutex;

    void ConfigManager::LoadConfig(const std::string& filepath) {
        std::ifstream file(filepath);
        if (!file.is_open()) return;

        std::string line;
        while (std::getline(file, line)) {
            size_t eqPos = line.find('=');
            if (eqPos != std::string::npos) {
                std::string key = line.substr(0, eqPos);
                std::string val = line.substr(eqPos + 1);
                
                if (key == "RithmicUser") g_Config.rithmicUser = val;
                else if (key == "RithmicPassword") g_Config.rithmicPassword = val;
                else if (key == "SslCertPath") g_Config.sslCertPath = val;
                else if (key == "DtcPort") g_Config.dtcPort = (uint16_t)std::stoi(val);
                else if (key == "DtcHistoricalPort") g_Config.dtcHistoricalPort = (uint16_t)std::stoi(val);
                else if (key == "SeparateHistoricalPort") g_Config.separateHistoricalPort = (val == "1");
                else if (key == "UseMBO") g_Config.useMBO = (val == "1");
                else if (key == "EnableTickReplay") g_Config.enableTickReplay = (val == "1");
                else if (key == "SaveLogin") g_Config.saveLogin = (val == "1");
            }
        }
        
        if (!g_Config.saveLogin) {
            g_Config.rithmicUser = "";
            g_Config.rithmicPassword = "";
        }
    }

    void ConfigManager::SaveConfig(const std::string& filepath) {
        std::ofstream file(filepath);
        if (!file.is_open()) return;

        file << "RithmicUser=" << (g_Config.saveLogin ? g_Config.rithmicUser : "") << "\n";
        file << "RithmicPassword=" << (g_Config.saveLogin ? g_Config.rithmicPassword : "") << "\n";
        file << "SslCertPath=" << g_Config.sslCertPath << "\n";
        file << "DtcPort=" << g_Config.dtcPort << "\n";
        file << "DtcHistoricalPort=" << g_Config.dtcHistoricalPort << "\n";
        file << "SeparateHistoricalPort=" << (g_Config.separateHistoricalPort ? "1" : "0") << "\n";
        file << "UseMBO=" << (g_Config.useMBO ? "1" : "0") << "\n";
        file << "EnableTickReplay=" << (g_Config.enableTickReplay ? "1" : "0") << "\n";
        file << "SaveLogin=" << (g_Config.saveLogin ? "1" : "0") << "\n";
    }
}

BridgeConfig g_Config;
