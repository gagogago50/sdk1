> **Source:** https://www.sierrachart.com/index.php?page=doc/DTCMessages_All.php

# All DTC Messages -  Sierra Chart

#### [Home](https://www.sierrachart.com/) >> [Getting Started](https://www.sierrachart.com/index.php?page=doc/DTCMessages_All.php)

# All DTC Messages

Below are the links to each message which includes the documentation for the message and the fields within  the message.

The documentation for each message is not meant to be specific to any particular encoding,  whether binary, JSON, or Google protocol buffers.

### Authentication and Connection Monitoring Messages

[Link] - [Top]

- [ENCODING_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-ENCODING_REQUEST)
- [ENCODING_RESPONSE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-ENCODING_RESPONSE)
- [LOGON_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-LOGON_REQUEST)
- [LOGON_RESPONSE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-LOGON_RESPONSE)
- [LOGOFF](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-LOGOFF)
- [HEARTBEAT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-HEARTBEAT)

### Market Data Messages

[Link] - [Top]

- [MARKET_DATA_FEED_STATUS](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_FEED_STATUS)
- [MARKET_DATA_FEED_SYMBOL_STATUS](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_FEED_SYMBOL_STATUS)
- [MARKET_DATA_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_REQUEST)
- [MARKET_DEPTH_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DEPTH_REQUEST)
- [MARKET_DATA_REJECT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_REJECT)
- [MARKET_DEPTH_REJECT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DEPTH_REJECT)
- [MARKET_DATA_SNAPSHOT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_SNAPSHOT)
- [MARKET_DEPTH_SNAPSHOT_LEVEL](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DEPTH_SNAPSHOT_LEVEL)
- [MARKET_DEPTH_UPDATE_LEVEL](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DEPTH_UPDATE_LEVEL)
- [MARKET_DATA_UPDATE_TRADE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_TRADE)
- [MARKET_DATA_UPDATE_BID_ASK](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_BID_ASK)
- [MARKET_DATA_UPDATE_LAST_TRADE_SNAPSHOT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_LAST_TRADE_SNAPSHOT)
- [MARKET_DATA_UPDATE_TRADE_COMPACT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_TRADE_COMPACT)
- [MARKET_DATA_UPDATE_SESSION_VOLUME](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_SESSION_VOLUME)
- [MARKET_DATA_UPDATE_OPEN_INTEREST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_OPEN_INTEREST)
- [MARKET_DATA_UPDATE_SESSION_SETTLEMENT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_SESSION_SETTLEMENT)
- [MARKET_DATA_UPDATE_SESSION_HIGH](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_SESSION_HIGH)
- [MARKET_DATA_UPDATE_SESSION_LOW](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_SESSION_LOW)
- [MARKET_DATA_UPDATE_SESSION_OPEN](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_SESSION_OPEN)

### Order Entry and Modification Messages

[Link] - [Top]

- [SUBMIT_NEW_SINGLE_ORDER](https://www.sierrachart.com/index.php?page=doc/DTCMessages_OrderEntryModificationMessages.php#Messages-SUBMIT_NEW_SINGLE_ORDER)
- [SUBMIT_NEW_OCO_ORDER](https://www.sierrachart.com/index.php?page=doc/DTCMessages_OrderEntryModificationMessages.php#Messages-SUBMIT_NEW_OCO_ORDER)
- [SUBMIT_FLATTEN_POSITION_ORDER](https://www.sierrachart.com/index.php?page=doc/DTCMessages_OrderEntryModificationMessages.php#Messages-SUBMIT_FLATTEN_POSITION_ORDER)
- [CANCEL_REPLACE_ORDER](https://www.sierrachart.com/index.php?page=doc/DTCMessages_OrderEntryModificationMessages.php#Messages-CANCEL_REPLACE_ORDER)
- [CANCEL_ORDER](https://www.sierrachart.com/index.php?page=doc/DTCMessages_OrderEntryModificationMessages.php#Messages-CANCEL_ORDER)

### Trading Related Messages

[Link] - [Top]

- [OPEN_ORDERS_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-OPEN_ORDERS_REQUEST)
- [ORDER_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE)
- [OPEN_ORDERS_REJECT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-OPEN_ORDERS_REJECT)
- [HISTORICAL_ORDER_FILLS_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-HISTORICAL_ORDER_FILLS_REQUEST)
- [HISTORICAL_ORDER_FILL_RESPONSE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-HISTORICAL_ORDER_FILL_RESPONSE)
- [HISTORICAL_ORDER_FILLS_REJECT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-HISTORICAL_ORDER_FILLS_REJECT)
- [CURRENT_POSITIONS_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-CURRENT_POSITIONS_REQUEST)
- [POSITION_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-POSITION_UPDATE)
- [CURRENT_POSITIONS_REJECT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-CURRENT_POSITIONS_REJECT)

### Account List Messages

[Link] - [Top]

- [TRADE_ACCOUNTS_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AccountListMessages.php#Messages-TRADE_ACCOUNTS_REQUEST)
- [TRADE_ACCOUNT_RESPONSE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AccountListMessages.php#Messages-TRADE_ACCOUNT_RESPONSE)

### Symbol Discovery and Security Definitions Messages

[Link] - [Top]

- [EXCHANGE_LIST_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-EXCHANGE_LIST_REQUEST)
- [EXCHANGE_LIST_RESPONSE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-EXCHANGE_LIST_RESPONSE)
- [SYMBOLS_FOR_EXCHANGE_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-SYMBOLS_FOR_EXCHANGE_REQUEST)
- [UNDERLYING_SYMBOLS_FOR_EXCHANGE_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-UNDERLYING_SYMBOLS_FOR_EXCHANGE_REQUEST)
- [SYMBOLS_FOR_UNDERLYING_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-SYMBOLS_FOR_UNDERLYING_REQUEST)
- [SYMBOL_SEARCH_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-SYMBOL_SEARCH_REQUEST)
- [SECURITY_DEFINITION_FOR_SYMBOL_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-SECURITY_DEFINITION_FOR_SYMBOL_REQUEST)
- [SECURITY_DEFINITION_REJECT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-SECURITY_DEFINITION_REJECT)
- [SECURITY_DEFINITION_RESPONSE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-SECURITY_DEFINITION_RESPONSE)

### Account Balance Data Messages

[Link] - [Top]

- [ACCOUNT_BALANCE_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AccountBalanceDataMessages.php#Messages-ACCOUNT_BALANCE_REQUEST)
- [ACCOUNT_BALANCE_REJECT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AccountBalanceDataMessages.php#Messages-ACCOUNT_BALANCE_REJECT)
- [ACCOUNT_BALANCE_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AccountBalanceDataMessages.php#Messages-ACCOUNT_BALANCE_UPDATE)

### Logging Messages

[Link] - [Top]

- [USER_MESSAGE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_LoggingMessages.php#Messages-USER_MESSAGE)
- [GENERAL_LOG_MESSAGE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_LoggingMessages.php#Messages-GENERAL_LOG_MESSAGE)

### Historical Price Data Messages

[Link] - [Top]

- [HISTORICAL_PRICE_DATA_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_HistoricalPriceDataMessages.php#Messages-HISTORICAL_PRICE_DATA_REQUEST)
- HISTORICAL_PRICE_DATA_RESPONSE_HEADER
- [HISTORICAL_PRICE_DATA_REJECT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_HistoricalPriceDataMessages.php#Messages-HISTORICAL_PRICE_DATA_REJECT)
- [HISTORICAL_PRICE_DATA_RECORD_RESPONSE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_HistoricalPriceDataMessages.php#Messages-HISTORICAL_PRICE_DATA_RECORD_RESPONSE)
- [HISTORICAL_PRICE_DATA_TICK_RECORD_RESPONSE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_HistoricalPriceDataMessages.php#Messages-HISTORICAL_PRICE_DATA_TICK_RECORD_RESPONSE)

---

*Last modified Tuesday, 31st October, 2023.

---

[Service Terms and Refund Policy](https://www.sierrachart.com/index.php?page=doc/PurchaseInformation.php)
