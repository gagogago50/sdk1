> **Source:** https://www.sierrachart.com/index.php?page=doc/DTCMessages_LoggingMessages.php

# Logging Messages -  Sierra Chart

#### [Home](https://www.sierrachart.com/) >> [Getting Started](https://www.sierrachart.com/index.php?page=doc/DTCMessages_LoggingMessages.php)

# Logging Messages

- USER_MESSAGE
- GENERAL_LOG_MESSAGE

---

### USER_MESSAGE [s_UserMessage structure] Server >> Client

[Link] - [Top]

This message from the Server to the Client is for providing a message to the user.

This message can be sent even before a [LOGON_RESPONSE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-LOGON_RESPONSE).

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **UserMessage** | General message to present to user in the Client. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **IsPopupMessage** | The default for this is 1 which signifies that the Server would like the Client to present the message to the user in a way which will get their attention. Otherwise, set this to 0 to give the message lower priority (just add to a log). |

### GENERAL_LOG_MESSAGE [s_GeneralLogMessage structure] Server >> Client

[Link] - [Top]

This message from the Server to the Client is a message which is to be added to a log file indicating information from the server.   For example, if there are informational messages to provide during the process of a logon, this can be used to send those messages to a Client. A Client should never implement this message as a pop-up type message. Instead, it should be treated as a lower-level log type message.

This message can be sent even before a [LOGON_RESPONSE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php#Messages-LOGON_RESPONSE) is given.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **MessageText** | The message text to the Client which it should add to its log. |

---

*Last modified Monday, 07th January, 2019.

---

[Service Terms and Refund Policy](https://www.sierrachart.com/index.php?page=doc/PurchaseInformation.php)
