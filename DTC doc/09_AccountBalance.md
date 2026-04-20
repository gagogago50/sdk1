> **Source:** https://www.sierrachart.com/index.php?page=doc/DTCMessages_AccountBalanceDataMessages.php

# Account Balance Data Messages -  Sierra Chart

#### [Home](https://www.sierrachart.com/) >> [Getting Started](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AccountBalanceDataMessages.php)

# Account Balance Data Messages

- ACCOUNT_BALANCE_REQUEST
- ACCOUNT_BALANCE_REJECT
- ACCOUNT_BALANCE_UPDATE
- HISTORICAL_ACCOUNT_BALANCES_REQUEST
- HISTORICAL_ACCOUNT_BALANCES_REJECT
- HISTORICAL_ACCOUNT_BALANCE_RESPONSE

---

### ACCOUNT_BALANCE_REQUEST [s_AccountBalanceRequest structure] Client >> Server

[Link] - [Top]

This is a message from the Client to the Server to request Trade Account Balance data.

The Server will respond with an ACCOUNT_BALANCE_UPDATE or reject the request.

The Server will set the **RequestID** in the  ACCOUNT_BALANCE_UPDATE message to match the **RequestID**  in the **ACCOUNT_BALANCE_REQUEST**.

The Server will periodically send ACCOUNT_BALANCE_UPDATE messages as the Account Balance data changes. The frequency of the updates is determined by the Server. Account Balance updates are considered automatically subscribed to. When unsolicited ACCOUNT_BALANCE_UPDATE messages are sent by the Server, the **RequestID** will be 0.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | A unique request identifier for this request. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **TradeAccount** | This is an optional field. Leave this  empty to request the Server to return Account Balance data for all Trade Accounts on the logged in Username. Otherwise, specify a particular Trade Account to request Account Balance data for. |

### ACCOUNT_BALANCE_REJECT [s_AccountBalanceReject structure] Server >> Client

[Link] - [Top]

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The unique request identifier sent in the corresponding request. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **RejectText** | The text reason the ACCOUNT_BALANCE_REQUEST message was rejected. |

### ACCOUNT_BALANCE_UPDATE [s_AccountBalanceUpdate structure] Server >> Client

[Link] - [Top]

This is an optional message from the Server to Client to provide Account Balance information for a particular Trade Account. The server needs to provide a separate message for each Trade Account associated with the logged in username if it supports Account Balance updates.

The Server will respond with an **ACCOUNT_BALANCE_UPDATE** in response to a ACCOUNT_BALANCE_REQUEST message. The Server will set the **RequestID** in the **ACCOUNT_BALANCE_UPDATE** message to match the RequestID  in the  ACCOUNT_BALANCE_REQUEST message.

The Server will periodically send **ACCOUNT_BALANCE_UPDATE** messages as the Account Balance data changes. The frequency of the updates is determined by the Server. Account Balance updates are considered automatically subscribed to. When an unsolicited **ACCOUNT_BALANCE_UPDATE** message is sent, the **RequestID** field will be 0.

When the server is responding with one or more **ACCOUNT_BALANCE_UPDATE** messages in response to a ACCOUNT_BALANCE_REQUEST message,  it must not send any unsolicited   **ACCOUNT_BALANCE_UPDATE** messages interleaved with the solicited  **ACCOUNT_BALANCE_UPDATE**  messages in response to the ACCOUNT_BALANCE_REQUEST message.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | This is the  RequestID which was set in the ACCOUNT_BALANCE_REQUEST that this message is in response to.     In the case when this is a periodic unsolicited Account Balance update,  RequestID must be set to 0, the default. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **CashBalance** | The current cash balance for the account in the currency specified by the AccountCurrency field. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **BalanceAvailableForNewPositions** | The **CashBalance**  minus the cash required to maintain securities on margin the Trade Account currently has. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **AccountCurrency** | ISO Currency Code for the cash values in this message. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **TradeAccount** | The trade account identifier for the Account Balance information. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **SecuritiesValue** | This is the value of all cash and securities as a cash value. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **MarginRequirement** | This is the current cash requirement to maintain securities on margin the Trade Account currently has. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **TotalNumberMessages** | This indicates the total number of Account Balance Update messages when a batch of messages is being sent. If there is only one Account Balance Update message being sent, this will be 1. Use a value of 1 for an unsolicited message.     A Client should not rely on this field for an unsolicited message. This is required to be set. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **MessageNumber** | This indicates the 1-based index of the Account Balance Update message when a batch of  messages is being sent. If there is only one Account Balance Update message being sent, this will be 1. Use a value of 1 for an unsolicited message.     A Client should not rely on this field for an unsolicited message. This is required to be set. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int8) **NoAccountBalances** | Set to an integer value of 1 to indicate there are no Account Balances in response to an ACCOUNT_BALANCE_REQUEST message.     Otherwise, the Server must leave this at the default of 0.     The Server is always expected to respond with a single  ACCOUNT_BALANCE_UPDATE message when there is no ACCOUNT_BALANCE_UPDATE message for any Trade Account when the Account Balances have been requested  by the Client with an  ACCOUNT_BALANCE_REQUEST message.     When the Server is sending an ACCOUNT_BALANCE_UPDATE message to the Client and it is indicating that the balance related fields are all zero, then  the **NoAccountBalances** field must be left at the default of 0. It is not used indicate the balance related fields are all zero.     This is always set to the default of 0 for an unsolicited ACCOUNT_BALANCE_UPDATE . |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int8) **Unsolicited** | Set to 1 to indicate this is an unsolicited Account Balance Update message.  In other words, it is a real-time  Account Balance Update message which is not an initial response to an ACCOUNT_BALANCE_REQUEST message. |

### HISTORICAL_ACCOUNT_BALANCES_REQUEST [ structure] Client >> Server

[Link] - [Top]

This is a message from the Client to the Server to request a history of  Cash Balance changes for the specified Trade Account.

The Server will respond  with multiple HISTORICAL_ACCOUNT_BALANCE_RESPONSE  messages or reject he request with a  message.

The Server will set the **RequestID** in the  HISTORICAL_ACCOUNT_BALANCE_RESPONSE message to match the **RequestID**  in the **HISTORICAL_ACCOUNT_BALANCES_REQUEST**.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | A unique request identifier for this request. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **TradeAccount** | This is a required field.  Set to the particular Trade Account for which to request historical Account Balance data. |
| [[t_DateTime]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTime) **StartDateTime** | Set this to the Date-Time that the server is to send historical cash balance updates starting with. |

### HISTORICAL_ACCOUNT_BALANCES_REJECT [ structure] Server >> Client

[Link] - [Top]

This is a message from the  Server to the Client to reject a HISTORICAL_ACCOUNT_BALANCES_REQUEST request.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The unique request identifier sent in the corresponding request message. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **RejectText** | The text reason the HISTORICAL_ACCOUNT_BALANCES_REQUEST message was rejected. |

### HISTORICAL_ACCOUNT_BALANCE_RESPONSE [ structure] Server >> Client

[Link] - [Top]

This is a message from the  Server to the Client  in response to a HISTORICAL_ACCOUNT_BALANCES_REQUEST  message.

There is a separate message for each Cash Balance update.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The same **RequestID**  set in the  HISTORICAL_ACCOUNT_BALANCES_REQUEST message. |
| [[t_DateTimeWithMilliseconds]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **DateTime** | The timestamp of the Cash Balance update. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **CashBalance** | The Cash Balance in the currency of the account. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **AccountCurrency** | The account currency. This is the standard   [ISO  Currency Code](https://www.iso.org/iso-4217-currency-codes.html) for the  currency. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **TradeAccount** | The  Trade Account identifier of the  Cash Balance update. |
| [[unsigned uint8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int8) **IsFinalResponse** | Set to 1 to indicate if this is the final response. Otherwise, the value is zero. |
| [[unsigned uint8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int8) **NoAccountBalances** | Set to 1 to indicate if there are no historical Cash Balance updates to return in response to a HISTORICAL_ACCOUNT_BALANCES_REQUEST. Otherwise, the value is zero. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **InfoText** | Any related information text for the Cash Balance update. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **TransactionId** | The transaction identifier for the Cash Balance update. |

---

*Last modified Wednesday, 05th July, 2023.

---

[Service Terms and Refund Policy](https://www.sierrachart.com/index.php?page=doc/PurchaseInformation.php)
