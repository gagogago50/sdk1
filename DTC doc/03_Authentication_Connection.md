> **Source:** https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php

# Authentication and Connection Monitoring Messages -  Sierra Chart

#### [Home](https://www.sierrachart.com/) >> [Getting Started](https://www.sierrachart.com/index.php?page=doc/DTCMessages_AuthenticationConnectionMonitoringMessages.php)

# Authentication and Connection Monitoring Messages

- ENCODING_REQUEST
- ENCODING_RESPONSE
- LOGON_REQUEST
- LOGON_RESPONSE
- LOGOFF
- HEARTBEAT

---

### ENCODING_REQUEST [s_EncodingRequest structure] Client >> Server

[Link] - [Top]

**Requirements**: Not required for Servers. Required for Clients if the Client needs to discover the encoding  the Server uses.

The  ENCODING_REQUEST message is a message requesting to change the DTC encoding for messages.

For the procedure to work with this message, refer to [Encoding Request Sequence](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#EncodingRequest).

Hexadecimal representation for encoding request message using binary encoding  which is requesting protocol buffer encoding: 0x10000600 0x08000000 0x04000000 0x44544300.

Hexadecimal representation for encoding request message using binary encoding  which is requesting JSON encoding: 0x10000600 0x08000000 0x02000000 0x44544300.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor.     To determine the field number for JSON, refer to this message type constant in the [DTCProtocol.h](https://www.sierrachart.com/DTC_Files/DTCProtocol.h) file. |
| [[int32]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#int32) **ProtocolVersion** | The protocol version supported by the Client.  Automatically set by constructor. |
| [[EncodingEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#EncodingEnum) **Encoding** | The DTC message encoding the Client is requesting the Server to use. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ProtocolType** | The  **ProtocolType** field needs to be set to the text string "DTC".     This field is automatically set with the binary encoding data structures.     This field is used  for the Server to know that it is communicating with a DTC compliant Client. |
