> **Source:** https://www.sierrachart.com/index.php?page=doc/DTCMessages_AccountListMessages.php

# Account List Messages -  Sierra Chart

#### [Home](https://www.sierrachart.com/) >> [Getting Started](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AccountListMessages.php)

# Account List Messages

- TRADE_ACCOUNTS_REQUEST
- TRADE_ACCOUNT_RESPONSE

---

### TRADE_ACCOUNTS_REQUEST [s_TradeAccountsRequest structure] Client >> Server

[Link] - [Top]

This is a message from the Client to the Server to request all of the account identifiers for the logged in  Username.

If there are no accounts available, then the Server needs to respond with at least one TRADE_ACCOUNT_RESPONSE message containing an empty Trade Account.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | A unique request identifier for this request. |

### TRADE_ACCOUNT_RESPONSE [s_TradeAccountResponse structure] Server >> Client

[Link] - [Top]

This is a message from the Server to the Client in response to a TRADE_ACCOUNTS_REQUEST message, providing a single trade account. There is one message for each trade account.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **TotalNumberMessages** | This indicates the total number of Account list messages when a batch of messages is being sent. If there is only one message being sent, this will be 1. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **MessageNumber** | This indicates the 1-based index of the Account list message when a batch of messages is being sent. If there is only one message being sent, this will be 1. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **TradeAccount** | The trade account identifier.     In the case when there are no Trade Accounts available for the logged in Username, the Server will send a single TRADE_ACCOUNT_RESPONSE message to the Client and leave this field empty. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **RequestID** | The RequestID sent in the corresponding request by the Client. |

---

*Last modified Monday, 07th January, 2019.

---

[Service Terms and Refund Policy](https://www.sierrachart.com/index.php?page=doc/PurchaseInformation.php)
