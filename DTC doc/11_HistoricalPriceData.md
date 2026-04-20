> **Source:** https://www.sierrachart.com/index.php?page=doc/DTCMessages_HistoricalPriceDataMessages.php

# Historical Price Data Messages -  Sierra Chart

#### [Home](https://www.sierrachart.com/) >> [Getting Started](https://www.sierrachart.com/index.php?page=doc/DTCMessages_HistoricalPriceDataMessages.php)

# Historical Price Data Messages

- HISTORICAL_PRICE_DATA_REQUEST
- HISTORICAL_PRICE_DATA_RESPONSE_HEADER
- HISTORICAL_PRICE_DATA_REJECT
- HISTORICAL_PRICE_DATA_RECORD_RESPONSE
- HISTORICAL_PRICE_DATA_TICK_RECORD_RESPONSE
- Providing Bid Volume and Ask Volume in Historical Data

---

It is important to be aware of [Market Data Restrictions](https://www.sierrachart.com/index.php?page=doc/DTCServer.php#Restrictions), before implementing the use of these messages.

---

### HISTORICAL_PRICE_DATA_REQUEST [s_HistoricalPriceDataRequest structure] Client >> Server

[Link] - [Top]

This is a message from the Client to the Server for requesting historical price data.

This request  can be on the same or a separate network socket connection compared to the streaming market data. This is going to be specified by the Server.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | Unique integer identifier to identify this request. The historical price data response messages from the Server will contain this identifier so they can be matched up with the request from the Client. This identifier only needs to be unique to the historical price data messages.  It can conflict with identifiers used with other classes of messages. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Symbol** | The Symbol historical price data is requested for. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | Optional: The exchange for the Symbol. |
| [[HistoricalDataIntervalEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#HistoricalDataIntervalEnum) **RecordInterval** | The interval/timeframe of each record for the time range of the historical data requested. Can be any of:    - **INTERVAL_TICK** = 0 - **INTERVAL_1_SECOND** = 1 - **INTERVAL_1_MINUTE** = 60 - **INTERVAL_1_DAY** = 86400 - **INTERVAL_1_WEEK** = 604800 |
| [[t_DateTime]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTime) **StartDateTime** | The starting Date-Time for the historical price data returned, if available for the specified Symbol.     If it is not set or set to 0, then this is a request to the Server to return data starting at the earliest data available for the Symbol. |
| [[t_DateTime]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTime) **EndDateTime** | The ending Date-Time for the historical price data returned.     If it is not set or set to 0, then this is a request to the Server to return data  ending at the very latest data available for the symbol. |
| [[unsigned int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int32) **MaxDaysToReturn** | **MaxDaysToReturn** specifies the maximum number of days of data the Server needs to return, if available, counting back from the latest Date-Time of data available for the symbol,  or counting back from **EndDateTime** if it is set to a value other than  0.     If **MaxDaysToReturn** is set to 0, then it is ignored by the Server. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **UseZLibCompression** | Set this to 1, to request the Server use [ZLib](http://zlib.net/) compression in the response when returning data. The Server can optionally ignore this if it does not support compression or does not want to use compression for any reason.     The HISTORICAL_PRICE_DATA_RESPONSE_HEADER will not be compressed. Only the historical price data records themselves.     When receiving a batch of data on the network socket, give it to ZLib. It will respond with some uncompressed data and you put that into a buffer and then process as many complete historical data messages out of it that you can. Continue with this process until finished. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **RequestDividendAdjustedStockData** | In the case of a stock symbol, setting this to a value of 1 will request dividend adjusted data from the Server, if available.   It is optional for the Server to support this. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint16) **Integer_1** | A general purpose 2 byte flag field from the Client to the Server which can be used for any special purpose the Client and Server require. |

### HISTORICAL_PRICE_DATA_RESPONSE_HEADER [s_HistoricalPriceDataResponseHeader structure] Server >> Client

[Link] - [Top]

When a historical price data request is not rejected,  this message header will begin the historical price data response from the Server.  There will be one **HISTORICAL_PRICE_DATA_RESPONSE_HEADER** message sent ahead of the HISTORICAL_PRICE_DATA_RECORD_RESPONSE / HISTORICAL_PRICE_DATA_TICK_RECORD_RESPONSE messages. If the **NoRecordsToReturn** field is nonzero, then there are no further records that will be sent by the Server in response to the request by the Client.

This message is never compressed.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The numeric identifier from the historical price data request that this response is in response to. |
| [[HistoricalDataIntervalEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#HistoricalDataIntervalEnum) **RecordInterval** | The data interval of type HistoricalDataIntervalEnum requested by the Client. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **UseZLibCompression** | 1 = All subsequent messages are using standard ZLib compression.  0 = no compression. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **NoRecordsToReturn** | If there are no records to return in response to the request and there was no error, this will be set to 1. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **IntToFloatPriceDivisor** | This field is no longer used. |

### HISTORICAL_PRICE_DATA_REJECT [s_HistoricalPriceDataReject structure] Server >> Client

[Link] - [Top]

When the Server rejects a historical price data request from the Client, a  **HISTORICAL_PRICE_DATA_REJECT** message will be sent.

This message is never compressed.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The numeric identifier from the historical price data request that this response is in response to. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **RejectText** | Text reason for rejection. |
| [[HistoricalPriceDataRejectReasonCodeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#HistoricalPriceDataRejectReasonCodeEnum) **RejectReasonCode** | Integer identifier identifying the reason for the rejection.  For the text reason, refer  to the  **RejectText** field. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **RetryTimeInSeconds** | This is an optional field from the Server. This field will normally be zero.     If a retry is intended to be performed, the server may give an  indication of how long to wait  in seconds. This field indicates that.     This field is not recommended to be used.    If it is used,  it is really an indication of a substandard  Server. |

### HISTORICAL_PRICE_DATA_RECORD_RESPONSE [s_HistoricalPriceDataRecordResponse structure] Server >> Client

[Link] - [Top]

The  **HISTORICAL_PRICE_DATA_TICK_RECORD_RESPONSE**  message is used when the **RecordInterval** field in a historical data request  message is set to a value greater than  **INTERVAL_TICK**. For example, if the **RecordInterval** is  **INTERVAL_1_MINUTE**, then a message of this type will contain data for a 1 minute timeframe with a start time specified by the **StartDateTime** field.

Even when  **RecordInterval** is  **INTERVAL_TICK**,   the **HISTORICAL_PRICE_DATA_TICK_RECORD_RESPONSE** message can still be used instead of HISTORICAL_PRICE_DATA_TICK_RECORD_RESPONSE.

This message can be part of a compressed series of messages of this same type, if the Client requested compression be used.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The numeric identifier from the historical price data request that this response is in response to. |
| [[t_DateTime]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTime) **StartDateTime** | The starting Date-Time  in UTC of the data record in this message.     It is part of the DTC Protocol specification that this must be the *starting* Date-Time of the data record. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **OpenPrice** | The Open price of the data record in this message. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **HighPrice** | The High price of the data record in this message.     In the case where NumTrades is 1, the HighPrice  field can be the Ask/Offer   price at the time of the trade. In this case the OpenPrice  field needs to be 0 in this case. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **LowPrice** | The Low price of the data record in this message.     In the case where NumTrades is 1, the LowPrice  field can be the Bid  price at the time of the trade. In this case the OpenPrice  field needs to be 0 in this case. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **LastPrice** | The Last price of the data record in this message. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Volume** | The Volume of this data record of this message. |
| **(union)**     [[unsigned int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int32) **OpenInterest**     [[unsigned int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int32) **NumTrades** | The Open Interest or Number of Trades of this data record in this message. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **BidVolume** | The volume of trades at the bid price or lower of the data record in this message.     In the case where this message consists of a single trade,  if the trade was at the Ask, then BidVolume must be zero.     This is the volume of the trades, where the aggressor of the trade was the seller. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **AskVolume** | The volume of trades at the ask price or higher of the data record in this message.     In the case where this message consists of a single trade,  if the trade was at the Bid, then AskVolume must be zero.     This is the volume of the trades, where the aggressor of the trade was the buyer. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **IsFinalRecord** | Set to 1 to indicate  final record in response to the historical price data request.     The default is 0 meaning there are more records to follow. |

### HISTORICAL_PRICE_DATA_TICK_RECORD_RESPONSE [s_HistoricalPriceDataTickRecordResponse structure] Server >> Client

[Link] - [Top]

This is the response message when the **RecordInterval** field in a historical data request  message is set to **INTERVAL_TICK**.

If the Server does not support 1 Tick historical data or does not have 1 Tick historical data for the specified time period, it can respond with  HISTORICAL_PRICE_DATA_RECORD_RESPONSE messages instead. The Server must only respond with messages of one type in response to a particular historical price data request.

This message can be part of a compressed series of messages of this same type, if the Client requested compression be used.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The numeric identifier from the historical price data request that this response is in response to. |
| [[t_DateTimeWithMilliseconds]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTimeWithMilliseconds) **DateTime** | The Date-Time of the trade. |
| [[AtBidOrAskEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#AtBidOrAskEnum) **AtBidOrAsk** | This indicates whether the trade occurred at the Bid price or lower or at the Ask price or higher. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Price** | The price of the trade. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Volume** | The volume of the trade. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **IsFinalRecord** | Set to 1 to indicate  final record in response to the historical price data request.     The default is 0 meaning there are more records to follow. |

## Providing Bid Volume and Ask Volume in Historical Data

[Link] - [Top]

There are different ways of providing  volume of trades that have occurred at the Bid price, and volume of the trades that have occurred at the Ask price, in the historical price data response messages.

One way of doing this, is to use the  HISTORICAL_PRICE_DATA_RECORD_RESPONSE  message to provide tick by tick data.  Follow the instructions below.

- Set HISTORICAL_PRICE_DATA_RECORD_RESPONSE::OpenPrice to 0.
- Set HISTORICAL_PRICE_DATA_RECORD_RESPONSE::HighPrice  to the Ask/Offer   price at the time of the trade.
- Set HISTORICAL_PRICE_DATA_RECORD_RESPONSE::LowPrice  to the  Bid  price at the time of the trade.
- Set HISTORICAL_PRICE_DATA_RECORD_RESPONSE::LastPrice  to the trade price.
- Set HISTORICAL_PRICE_DATA_RECORD_RESPONSE::NumTrades to 1.
- Set HISTORICAL_PRICE_DATA_RECORD_RESPONSE::Volume  to the volume or quantity of the trade.
- Set HISTORICAL_PRICE_DATA_RECORD_RESPONSE::BidVolume to the volume of the trade, if it occurred at the Bid.   If you want to let the Client make this determination of whether the trade occurred at the bid or ask, then set this to 0.
- Set HISTORICAL_PRICE_DATA_RECORD_RESPONSE::AskVolume to the volume of the trade, if it occurred at the Ask.  If you want to let the Client make this determination of whether the trade occurred at the bid or ask, then set this to 0.

Example of how fields need to be set in the HISTORICAL_PRICE_DATA_RECORD_RESPONSE message.

- DTC::t_DateTimeWithMicrosecondsInt StartDateTime = 1640995200000000 (2022-1-1 00:00:00UTC)
- double OpenPrice = 0
- double HighPrice = 101.8
- double LowPrice = 101.7
- double LastPrice = 101.8
- double Volume = 10
- uint32_t NumTrades = 1
- double BidVolume = 0
- double AskVolume = 0
- uint8_t IsFinalRecord = 0

The above  will mean the DTC client will set the AskVolume  to 10.

---

*Last modified Sunday, 08th June, 2025.

---

[Service Terms and Refund Policy](https://www.sierrachart.com/index.php?page=doc/PurchaseInformation.php)
