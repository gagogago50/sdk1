> **Source:** https://www.sierrachart.com/index.php?page=doc/RelayServer.php

# Relay Server -  Sierra Chart

#### [Home](https://www.sierrachart.com/) >> [Getting Started](https://www.sierrachart.com/index.php?page=doc/RelayServer.php)

# Relay Server

- Introduction
- Usage
- Supported Messages

- DTC::SECURITY_DEFINITION_RESPONSE
- DTC::MARKET_DATA_UPDATE_TRADE_COMPACT
- DTC::MARKET_DATA_UPDATE_BID_ASK_COMPACT
- DTC::MARKET_DATA_UPDATE_DAILY_SETTLEMENT
- DTC::MARKET_DATA_UPDATE_DAILY_HIGH
- DTC::MARKET_DATA_UPDATE_DAILY_LOW
- DTC::MARKET_DATA_UPDATE_DAILY_OPEN
- DTC::MARKET_DATA_UPDATE_DAILY_VOLUME
- DTC::MARKET_DATA_FEED_STATUS
- DTC::MARKET_DATA_SNAPSHOT
- DTC::MARKET_DEPTH_SNAPSHOT_LEVEL
- DTC::MARKET_DEPTH_UPDATE_LEVEL_FLOAT_WITH_MILLISECONDS
- DTC::HEARTBEAT

---

## Introduction

[Link] - [Top]

Sierra Chart provides a  *Relay Server*, which relays all of the market data that is received from the connected Data or Trading services.  This is a TCP/IP socket based server.

The only data relayed is the streaming real-time data. Historical data is not relayed.

By default the data uses the DTC Binary Encoding data structure format. Refer to the **/DTC/DTCProtocol.h** header file in the folder that Sierra Chart is installed to for these data structures.  Other encodings are available  and can be selected. Refer to the documentation below.

Only the data for the symbols that Sierra Chart is currently tracking based upon symbols used in Quote Boards, Charts, Trade DOMs,  and symbols listed in the   **Global Settings >> Intraday File Update List**, will be relayed.

The protocol does not support a Relay Server Client making market data requests.

Market depth data is only relayed if it is supported by the connected Data or Trading service and if Sierra Chart has subscribed to that data for a particular symbol. Sierra Chart will only subscribe to market depth data, if it is used by market depth features currently active for a particular symbol.

It is possible to cause market depth data to be subscribed for a symbol if you have appended **|MDD** to the symbol in the  **Global Settings >> Intraday File Update List**.

## Usage

[Link] - [Top]

Follow the instructions below to use the Sierra Chart Relay Server.

1. Select **Global Settings >> Sierra Chart Server Settings >> DTC Protocol Server**.
2. Enable **DTC Protocol Server >> Enable  DTC Protocol Server** option.
3. In the **Listening Port** box, specify the port number for the server to listen on.
4. Establish a TCP/IP network connection to **127.0.0.1** using the specified port number.
5. If you want to  change the encoding from the default, then follow the  [Encoding Request Procedure](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#EncodingRequest) procedure.
6. Send a [LOGON_REQUEST](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-LOGON_REQUEST)  message with the  **LOGON_REQUEST::Integer_1** field set to *0x2*. This causes the second bit of the integer to be true. It is this message with this flag which puts the DTC Protocol Server connection into Relay Server mode.
7. Once connected it is necessary to send a [DTC::HEARTBEAT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-LOGOFF#Messages-HEARTBEAT) message at the interval according to the  **LOGON_REQUEST::HeartbeatIntervalInSeconds** field you have set. Otherwise, the connection will be closed after a short period of time by Sierra Chart.
8. The program you write which uses the  Relay Server needs to support DTC Binary Encoding messages (data structures) if you have not changed the encoding from the default.
9. Multiple connections to the DTC Protocol server are supported.
10. After logging on, other than sending a **DTC::HEARTBEAT** message, there are no messages that a client program connected to the server will need to send.
11. The below messages are sent from the Relay Server.   The most important message is the Security Definition Response message.
12. When Sierra Chart reconnects to the external data feed, new security definitions will be sent  for each symbol subscribed.  Therefore, the RequestID  can change for a particular symbol.


        It is  necessary that when a DTC::MARKET_DATA_FEED_AVAILABLE  status is received through a DTC::MARKET_DATA_FEED_STATUS message, that you  clear any stored data related to any prior received security definitions because  the prior received security definition data is out of date.
13. Additional Notes:   There can be market data update messages for a particular SymbolID before a security definition for that SymbolID  has been sent. In this case you need to ignore  those messages until the security definition is received.


        Unless there is an  Intraday chart open for the symbol  or the  symbol is in the  [Intraday File Update List](https://www.sierrachart.com/index.php?page=doc/GlobalSettingsMenu.html#IntradayFileUpdateList), no security definition for the symbol will be sent.

## Supported Messages

[Link] - [Top]

The following are descriptions for the supported messages. For complete documentation for these messages, refer to [DTC Messages and Procedures](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php).

### DTC::SECURITY_DEFINITION_RESPONSE

[Link] - [Top]

When connected to and after logging on to the Relay Server, and data is available for a particular symbol, then this message will be sent to the Client for each symbol available.  It is not necessarily sent at the beginning of the connection.

When connected to the Relay Server and data for a symbol becomes available, at that time this message will be sent for that symbol.

This message is used to identify what Symbol a particular SymbolID is associated with in the MARKET_DATA_* and MARKET_DEPTH* messages.

The relevant fields set in this message are as follows: **RequestID** (equivalent to SymbolID), **Symbol**, **Exchange**.

When Sierra Chart reconnects to the external data feed, new security definitions will be sent  for each symbol subscribed.  Therefore, the RequestID  can change for a particular symbol.

It is  necessary that when a DTC::MARKET_DATA_FEED_AVAILABLE  status is received through a  DTC::MARKET_DATA_FEED_STATUS message, that you  clear any stored data related to any prior received security definitions because  the prior received security definition data is out of date.

### DTC::MARKET_DATA_UPDATE_TRADE_COMPACT

[Link] - [Top]

Refer to [MARKET_DATA_UPDATE_TRADE_COMPACT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_TRADE).

### DTC::MARKET_DATA_UPDATE_BID_ASK_COMPACT

[Link] - [Top]

Refer to [MARKET_DATA_UPDATE_BID_ASK_COMPACT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_BID_ASK).

### DTC::MARKET_DATA_UPDATE_DAILY_SETTLEMENT

[Link] - [Top]

Refer to [MARKET_DATA_UPDATE_DAILY_SETTLEMENT](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#Messages-MARKET_DATA_UPDATE_DAILY_SETTLEMENT).

### DTC::MARKET_DATA_UPDATE_DAILY_HIGH

[Link] - [Top]

Refer to [MARKET_DATA_UPDATE_DAILY_HIGH](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#Messages-MARKET_DATA_UPDATE_DAILY_HIGH).

### DTC::MARKET_DATA_UPDATE_DAILY_LOW

[Link] - [Top]

Refer to [MARKET_DATA_UPDATE_DAILY_LOW](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#Messages-MARKET_DATA_UPDATE_DAILY_LOW).

### DTC::MARKET_DATA_UPDATE_DAILY_OPEN

[Link] - [Top]

Refer to [MARKET_DATA_UPDATE_DAILY_OPEN](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#Messages-MARKET_DATA_UPDATE_DAILY_OPEN).

### DTC::MARKET_DATA_UPDATE_DAILY_VOLUME

[Link] - [Top]

Refer to [MARKET_DATA_UPDATE_DAILY_VOLUME](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#Messages-MARKET_DATA_UPDATE_DAILY_VOLUME).

### DTC::MARKET_DATA_FEED_STATUS

[Link] - [Top]

It is  necessary that when a DTC::MARKET_DATA_FEED_AVAILABLE  status is received through a  DTC::MARKET_DATA_FEED_STATUS message, that you  clear any stored data related to any prior received security definitions because  the prior received security definition data is out of date.

Also refer to [MARKET_DATA_FEED_STATUS](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_FEED_STATUS).

### DTC::MARKET_DATA_SNAPSHOT

[Link] - [Top]

Refer to [MARKET_DATA_SNAPSHOT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_SNAPSHOT).

### DTC::MARKET_DEPTH_SNAPSHOT_LEVEL

[Link] - [Top]

Refer to [MARKET_DEPTH_SNAPSHOT_LEVEL](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DEPTH_SNAPSHOT_LEVEL).

### DTC::MARKET_DEPTH_UPDATE_LEVEL_FLOAT_WITH_MILLISECONDS

[Link] - [Top]

Refer to [MARKET_DEPTH_UPDATE_LEVEL_FLOAT_WITH_MILLISECONDS](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DEPTH_UPDATE_LEVEL).

### DTC::HEARTBEAT

[Link] - [Top]

Refer to [HEARTBEAT](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-LOGOFF#Messages-HEARTBEAT).

---

*Last modified Tuesday, 16th September, 2025.

---

[Service Terms and Refund Policy](https://www.sierrachart.com/index.php?page=doc/PurchaseInformation.php)
