> **Source:** https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php

# Symbol Discovery and Security Definitions Messages -  Sierra Chart

#### [Home](https://www.sierrachart.com/) >> [Getting Started](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php)

# Symbol Discovery and Security Definitions Messages

- EXCHANGE_LIST_REQUEST
- EXCHANGE_LIST_RESPONSE
- SYMBOLS_FOR_EXCHANGE_REQUEST
- UNDERLYING_SYMBOLS_FOR_EXCHANGE_REQUEST
- SYMBOLS_FOR_UNDERLYING_REQUEST
- SYMBOL_SEARCH_REQUEST
- SECURITY_DEFINITION_FOR_SYMBOL_REQUEST
- SECURITY_DEFINITION_REJECT
- SECURITY_DEFINITION_RESPONSE

---

### EXCHANGE_LIST_REQUEST [s_ExchangeListRequest structure] Client >> Server

[Link] - [Top]

This is a message from the Client to the Server to request a list of all available exchanges from the Server.

The server will respond with a separate EXCHANGE_LIST_RESPONSE message for each exchange.

In the case where the Server does not specify an exchange with its symbols, then the Server should provide a single response with an empty Exchange.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The unique identifier for this request.  This same identifier will be returned in the EXCHANGE_LIST_RESPONSE message. |

### EXCHANGE_LIST_RESPONSE [s_ExchangeListResponse structure] Server >> Client

[Link] - [Top]

The server will return this message for each supported exchange.

If there are no exchanges to return in response to a request, send through one of these messages with the RequestID set and IsFinalMessage = 1. Leave all other members in the default state and the Client will recognize there are no Exchanges.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The RequestID sent in the request by the Client. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | The exchange identifier that the Server uses to identify a particular exchange. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **IsFinalMessage** | 1 = final message in batch. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Description** | The complete exchange description. |

### SYMBOLS_FOR_EXCHANGE_REQUEST [s_SymbolsForExchangeRequest structure] Client >> Server

[Link] - [Top]

This is a message from the Client to the Server to request all of the Symbols for a particular Exchange.

The server will return a  SECURITY_DEFINITION_RESPONSE message to the Client for each Symbol returned.

If the Server is rejecting this request, then it needs to send a SECURITY_DEFINITION_REJECT message to the Client.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The unique identifier for this request.  This same identifier will be returned in the SECURITY_DEFINITION_RESPONSE message. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | The Exchange to return the available symbols  listed on that Exchange. |
| [[SecurityTypeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#SecurityTypeEnum) **SecurityType** | The optional Security Type. |

### UNDERLYING_SYMBOLS_FOR_EXCHANGE_REQUEST [s_UnderlyingSymbolsForExchangeRequest structure] Client >> Server

[Link] - [Top]

This is a message from the Client to the Server to request all of the underlying symbols on a particular Exchange.  For example, all of the underlying futures  symbols on a particular Exchange.

The server will return a  SECURITY_DEFINITION_RESPONSE message to the Client for each Symbol returned.

If the Server is rejecting this request, then it needs to send a SECURITY_DEFINITION_REJECT message to the Client.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The unique identifier for this request.  This same identifier will be returned in the SECURITY_DEFINITION_RESPONSE message. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | . |
| [[SecurityTypeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#SecurityTypeEnum) **SecurityType** | . |

### SYMBOLS_FOR_UNDERLYING_REQUEST [s_SymbolsForUnderlyingRequest structure] Client >> Server

[Link] - [Top]

This is a message from the Client to the Server for requesting all of the symbols for a particular underlying symbol.

For example, all of the futures contracts for a particular underlying futures symbol or all of the option symbols for a specific futures or stock symbol.

The server will return a  SECURITY_DEFINITION_RESPONSE message to the Client for each Symbol returned.

If the Server is rejecting this request, then it needs to send a SECURITY_DEFINITION_REJECT message to the Client.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The unique identifier for this request.  This same identifier will be returned in the SECURITY_DEFINITION_RESPONSE message. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **UnderlyingSymbol** | The underlying symbol. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | The exchange of the symbols to search for. |
| [[SecurityTypeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#SecurityTypeEnum) **SecurityType** | The security type of the symbols to search for. |

### SYMBOL_SEARCH_REQUEST [s_SymbolSearchRequest structure] Client >> Server

[Link] - [Top]

The **SYMBOL_SEARCH_REQUEST**   message is sent by the Client to the Server to return  Security Definitions matching the specified **SecurityType** and **Exchange**  and where the Symbol or Description contains the specified  **SearchText**.

The **SearchText** can search either the Symbol or the Description field in the SECURITY_DEFINITION_RESPONSE message.

In either case there does not need to be an exact match. The **SearchText** only needs to be contained within the Symbol or the Description depending upon which field is being searched.

The Server returns SECURITY_DEFINITION_RESPONSE messages for all Symbols which match.

If there are no matches, the Server needs to send a SECURITY_DEFINITION_RESPONSE  message to the Client with with all fields at their default values except for the **RequestID** and **IsFinalMessage** fields set. This will be a clear indication to the Client that the request returned no matches.

If the Server is rejecting this request, then it needs to send a SECURITY_DEFINITION_REJECT message to the Client.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The unique identifier for this request.  This same identifier will be returned in the SECURITY_DEFINITION_RESPONSE message. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **SearchText** | The search text to search the Symbol or the Description for.     If the **SearchText** field is an empty text string, then the server should reject the request  with a SECURITY_DEFINITION_REJECT  message. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | The Exchange of the Symbol to search for. |
| [[SecurityTypeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#SecurityTypeEnum) **SecurityType** | The Security Type of the Symbol to search for. |
| [[SearchTypeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OrderTypeEnum) **SearchType** | This field is the search type. Can be one of two possible values. Can specify to search the Symbol or the Description. |

### SECURITY_DEFINITION_FOR_SYMBOL_REQUEST [s_SecurityDefinitionForSymbolRequest structure] Client >> Server

[Link] - [Top]

This is a message from the Client to the Server for requesting Security Definition data for a specific symbol.

The Server will return a single SECURITY_DEFINITION_RESPONSE  message in response to this request.

The Client must always send a **SECURITY_DEFINITION_FOR_SYMBOL_REQUEST** message to the Server in order to obtain the **IntegerToFloatPriceDivisor**  value in case the Server uses the integer market data messages.

If the Server is rejecting this request, then it needs to send a SECURITY_DEFINITION_REJECT message to the Client.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The unique identifier for this request.  This same identifier will be returned in the SECURITY_DEFINITION_RESPONSE message. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Symbol** | The symbol to return a security definition for. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | The optional exchange for the Symbol. |

### SECURITY_DEFINITION_REJECT [s_SecurityDefinitionReject structure] Server >> Client

[Link] - [Top]

This is a message from the Server to the Client indicating the Server is rejecting one of the following messages: SYMBOLS_FOR_EXCHANGE_REQUEST, UNDERLYING_SYMBOLS_FOR_EXCHANGE_REQUEST, SYMBOLS_FOR_UNDERLYING_REQUEST, SECURITY_DEFINITION_FOR_SYMBOL_REQUEST, SYMBOL_SEARCH_REQUEST.

If there are no symbols to send in response to one of these messages above, then the Server should not send a SECURITY_DEFINITION_REJECT message and instead send a SECURITY_DEFINITION_RESPONSE with only the  RequestID and IsFinalMessage fields set. This will be a clear indication to the Client that the request  returned no Symbols.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | This is the same RequestID that this message is in response to and was given in the original request message. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **RejectText** | Text reason for rejection. |

### SECURITY_DEFINITION_RESPONSE [s_SecurityDefinitionResponse structure] Server >> Client

[Link] - [Top]

This is a response from the Server in response to a SYMBOLS_FOR_EXCHANGE_REQUEST, UNDERLYING_SYMBOLS_FOR_EXCHANGE_REQUEST, SYMBOLS_FOR_UNDERLYING_REQUEST, SECURITY_DEFINITION_FOR_SYMBOL_REQUEST,   SYMBOL_SEARCH_REQUEST message.

If there are no symbols to return in response to a request, the Server needs to send through one of these messages with the  **RequestID** set to the same RequestID value that the request message set it to, and **IsFinalMessage** = 1. Leave all other member fields in the default state and the Client will recognize there are no symbols.

The Client must always send a  SECURITY_DEFINITION_FOR_SYMBOL_REQUEST message to the Server to obtain the **IntegerToFloatPriceDivisor** and **FloatToIntPriceMultiplier** values in the Security Definition Response  message when the Server uses the integer market data and order messages.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | This is the same RequestID that this message is in response to and was given in the original Security Definition request message. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Symbol** | This is the Symbol the Security Definition is for.     When the Server responds with a single SECURITY_DEFINITION_RESPONSE message and there are no security definitions to return for the original request, this will be empty.     This field should be empty when this Security Definition message is in response to UNDERLYING_SYMBOLS_FOR_EXCHANGE_REQUEST. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | This is the Exchange for the Symbol. This field is optional. |
| [[SecurityTypeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#SecurityTypeEnum) **SecurityType** | The Security Type for the symbol. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Description** | The text description for the Symbol. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **MinPriceIncrement** | The minimum amount that prices can change by for the Symbol and minimum amount that prices are quoted in. |
| [[PriceDisplayFormatEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#PriceDisplayFormatEnum) **PriceDisplayFormat** | This field specifies the price formatting for display purposes. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **CurrencyValuePerIncrement** | This field is the currency value per MinPriceIncrement in the Symbols currency. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **IsFinalMessage** | Set to a integer value of 1 to indicate this is the final message in batch of Security Definition Response messages. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **FloatToIntPriceMultiplier** | With the integer order entry messages discontinued  as of August 2020, this field is no longer relevant. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **IntegerToFloatPriceDivisor** | With the integer market data messages discontinued  as of August 2020, this field is no longer relevant. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **UnderlyingSymbol** | This is the underlying symbol for the Symbol field if the Symbol has an underlying symbol.     The Server must set this  when the SECURITY_DEFINITION_RESPONSE message in response to UNDERLYING_SYMBOLS_FOR_EXCHANGE_REQUEST, SYMBOLS_FOR_UNDERLYING_REQUEST.     This is typically used with futures. A futures symbol for a specific contract year and month will have an underlying symbol equivalent to the Symbol without the year and month characters. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **UpdatesBidAskOnly** | This is set to 1 when the Symbol does not provide [MARKET_DATA_UPDATE_TRADE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_TRADE) messages and only provides [MARKET_DATA_UPDATE_BID_ASK](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_BID_ASK) messages when there is market activity for the Symbol.     Otherwise, when this is set to 0, [MARKET_DATA_UPDATE_TRADE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_MarketDataMessages.php#Messages-MARKET_DATA_UPDATE_TRADE)  messages will be received after subscribing to market data, when there is trading activity. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **StrikePrice** | The strike price when the Security Type is an option type. |
| [[PutCallEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#PutCallEnum) **PutOrCall** | When the Security Type is an option, this indicates if it is a put or call. |
| [[unsigned int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int32) **ShortInterest** | The short interest when the Security Type is a stock. |
| [[t_DateTime4Byte]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTime4Byte) **SecurityExpirationDate** | The expiration date for the Symbol for symbols which have an expiration date. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **BuyRolloverInterest** | The daily interest amount which is deducted for a Buy position. This only applies for Forex trading. It is in the quote currency of the symbol. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **SellRolloverInterest** | The daily interest amount which is deducted for a Sell position.  This only applies for Forex trading. It is in the quote currency of the symbol. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **EarningsPerShare** | The earnings per share as a currency value when the Security Type is a stock. |
| [[unsigned int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int32) **SharesOutstanding** | This is the number of shares outstanding for stocks. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **IntToFloatQuantityDivisor** | With the integer order entry  and market data messages discontinued  as of August 2020, this field is no longer relevant. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **HasMarketDepthData** | When  **HasMarketDepthData** is set to 1, it indicates the Symbol has market depth data available for it. When this is set to 0, market depth data is not supported for the Symbol. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **DisplayPriceMultiplier** | This is an optional field for the Server to set.     The default for this is 1.0.     This sets the multiplier to use in the case where the Client should multiply the values in market data messages by some number other than 1.0 before displaying them to the user.     It is recommended that a Server does not use this and instead transmit to the Client values as the actual floating-point values.     This should not be confused with the integer market data messages and the **IntToFloatPriceDivisor** field used with those messages.  **DisplayPriceMultiplier** is for when the  Server transmits market data values using floating-point types and where those  values may have a fractional component, but where it is necessary to still multiply the original value by this multiplier to get the final value to display to the user.     When this is set to a value other than 1.0, then the  **MinPriceIncrement** and the **PriceDisplayFormat** fields are relative to the market data values after the **DisplayPriceMultiplier** is applied. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ExchangeSymbol** | This is an optional field. This is the  exchange symbol which corresponds with the **Symbol** field.     This field should be empty when this Security Definition message is in response to UNDERLYING_SYMBOLS_FOR_EXCHANGE_REQUEST. |
| [[t_DateTime4Byte]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTime4Byte) **RolloverDate** | This field applies to the Futures  Security Type.     This is the  rollover date  for the symbol according to the typical time where trading transitions from one contract month to the next. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **InitialMarginRequirement** | This field applies to the Futures  Security Type.     This is the initial margin requirement as specified by the exchange, if available. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **MaintenanceMarginRequirement** | This field applies to the Futures  Security Type.     This is the maintenance margin requirement as specified by the exchange, if available. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Currency** | This is the currency that  the  Symbol trades in or is priced in. |
| [[float]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#float) **ContractSize** | In the case of when a Symbol is a contract type, this variable indicates the size of the contract.     This is going to be an exchange specific specification. |
| [[unsigned int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int32) **OpenInterest** | In the case of when a Symbol is a contract type,  this field is  the number of outstanding contracts. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **IsDelayed** | This field will be 1  if the market data for the  Symbol  is intentionally delayed by a certain amount of time. Otherwise, this will be 0. |

---

*Last modified Friday, 28th May, 2021.

---

[Service Terms and Refund Policy](https://www.sierrachart.com/index.php?page=doc/PurchaseInformation.php)
