#pragma once

#include <string>
#include <cstdint>
#include <iostream>
#include <vector>
#include <mutex>
#include "RApiPlus.h"

// DTC datetime is standard unix time in seconds since epoch for t_DateTime
// and unix time in microseconds or milliseconds depending on the field.

namespace Utils {

    // Converts Rithmic tsNCharcb to std::string safely
    inline std::string tsToString(const tsNCharcb& ts) {
        if (!ts.pData || ts.iDataLen <= 0) return "";
        return std::string(ts.pData, ts.iDataLen);
    }

    // XXH3 Hashing placeholder (could pull in actual xxh3 header, but for simplicity using std::hash or a simple 64-bit hash for now)
    // Rithmic sExchOrdId -> DTC OrderID (uint64)
    inline uint64_t hashString64(const std::string& str) {
        // Fast FNV-1a 64-bit hash
        uint64_t hash = 14695981039346656037ULL;
        for (char c : str) {
            hash ^= static_cast<uint64_t>(c);
            hash *= 1099511628211ULL;
        }
        return hash;
    }

    // Thread-safe log queue for GUI
    class Logger {
    public:
        static void Log(const std::string& msg) {
            std::lock_guard<std::mutex> lock(m_mutex);
            m_logs.push_back(msg);
            // In a real ImGui implementation, this would feed an ImGui scrolling buffer
            std::cout << "[LOG] " << msg << std::endl;
        }

        static std::vector<std::string> GetLogs() {
            std::lock_guard<std::mutex> lock(m_mutex);
            return m_logs;
        }

    private:
        static std::vector<std::string> m_logs;
        static std::mutex m_mutex;
    };

    class ConfigManager {
    public:
        static void LoadConfig(const std::string& filepath);
        static void SaveConfig(const std::string& filepath);
    };
}
