> **Source:** https://www.sierrachart.com/index.php?page=doc/DTCMessages_OrderEntryModificationMessages.php

# Order Entry and Modification Messages -  Sierra Chart

#### [Home](https://www.sierrachart.com/) >> [Getting Started](https://www.sierrachart.com/index.php?page=doc/DTCMessages_OrderEntryModificationMessages.php)

# Order Entry and Modification Messages

- SUBMIT_NEW_SINGLE_ORDER
- SUBMIT_NEW_OCO_ORDER
- SUBMIT_FLATTEN_POSITION_ORDER
- CANCEL_REPLACE_ORDER
- CANCEL_ORDER
- Price Formatting Notes

---

### SUBMIT_NEW_SINGLE_ORDER [s_SubmitNewSingleOrder structure] Client >> Server

[Link] - [Top]

This message is used to submit a new single order into the market from the Client to the Server.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Symbol** | The symbol for the order. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | The optional exchange for the symbol. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ClientOrderID** | This is the Client supplied order identifier. The Server will maintain this order identifier throughout  the life of the order and always provide it back through the  **ClientOrderID** field in the [ORDER_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE)  messages for the order.     This identifier cannot be an identifier used for a currently  *open* order and it cannot be an identifier previously  used in the current trading session. The trading session typically will be a 24-hour period defined by the Server. The Server shall reject an order  with a client order identifier that is for a currently open order or which has already been used during the current trading session. |
| [[OrderTypeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OrderTypeEnum) **OrderType** | The order type. For list of order types, refer to [OrderTypeEnum](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OrderTypeEnum). |
| [[BuySellEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#BuySellEnum) **BuySell** | The side of the order. Either Buy or Sell. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Price1** | This is the price of the order. This is the limit price for a  **Limit** order, the stop price for a **Stop** order, or the trigger price for a Market if Touched order.     For more information, refer to Price Formatting Notes. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Price2** | For a  **Stop-Limit** order, this is the limit price. This only applies to **Stop-Limit** orders.     For more information, refer to Price Formatting Notes. |
| [[TimeInForceEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#TimeInForceEnum) **TimeInForce** | The Time in Force for the order or orders (in the case of an OCO order).     For more information, refer to [TimeInForceEnum](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#TimeInForceEnum). |
| [[t_DateTime]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTime) **GoodTillDateTime** | In the case of when the **TimeInForce** is **TIF_GOOD_TILL_DATE_TIME**, this specifies the expiration  Date-Time of the order. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Quantity** | The quantity of the order. The exact meaning of this will be specified by the Server implementation. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **TradeAccount** | This is the trade account as a text string that the order belongs to. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **IsAutomatedOrder** | This is set 1 to signify the order has been submitted by an automated trading process. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **IsParentOrder** | The Client will set this to 1 when the order is part of a bracket order. This indicates that this is the parent order. A bracket order will consist of a SUBMIT_NEW_SINGLE_ORDER   message followed by a SUBMIT_NEW_OCO_ORDER  message. The Server will use **IsParentOrder** as a flag to know that this message is a parent order. The Server will hold onto this order until it  receives the subsequent SUBMIT_NEW_OCO_ORDER  message  and then process all of the orders as one complete set. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **FreeFormText** | Optional: This is an optional text string which can be set by the Client to associate text with the order. The Server is not under any obligation to use this text and it may place a limitation on the length of this text. |
| [[OpenCloseTradeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OpenCloseTradeEnum) **OpenOrClose** | For the description for this field, refer to [OpenCloseTradeEnum](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OpenCloseTradeEnum). |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **MaxShowQuantity** | This is an optional field. This field is provided to the exchange and represents the maximum quantity to show in the Limit order book for the order. By default this is set to 0 which means it is not used. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Price1AsString** | This is an optional field which may be used by the Server.     This field is the order price 1 as a string. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Price2AsString** | This is an optional field which may be used by the Server.     This field is the order price 2 as a string. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **IntendedPositionQuantity** | This is an optional field which may be used by the Server. A trading account on the server has to be enabled to use this field.     This field indicates the intended  Position Quantity that needs to  result from this new order. When this is set, then the  Quantity member is not used. |

### SUBMIT_NEW_OCO_ORDER [s_SubmitNewOCOOrder structure] Client >> Server

[Link] - [Top]

This is a message from the Client to the Server for submitting an order cancels order (OCO) pair into the market. What this means is when one of the orders is filled or canceled, the other order will be canceled. If one order partially fills, the other order will be reduced in quantity by the fill amount  of the order that partially filled.

A service provider must implement OCO orders on the server so that they can independently be modified (Cancel/Replace) and canceled independently using each order's distinct **ServerOrderID**.  Although, if one of the orders is canceled by the Client, the other order will be canceled as well unless they have a parent order, as specified through the  **ParentTriggerClientOrderID** field, in which case the other order should remain open.

If the OCO order pair is rejected, this must be communicated through two separate [ORDER_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE) messages, 1 for each order, with the OrderUpdateReason  set to **NEW_ORDER_REJECTED**.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Symbol** | The symbol for the order. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | The optional exchange for the symbol. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ClientOrderID_1** | The Client supplied order identifier for the first order. The Server will remember this for the life of the order. |
| [[OrderTypeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OrderTypeEnum) **OrderType_1** | The order type for the first order. For list of order types, refer to [OrderTypeEnum](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OrderTypeEnum). |
| [[BuySellEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#BuySellEnum) **BuySell_1** | The side for the first order. Either Buy or Sell. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Price1_1** | This is the price of the first order. This is the limit price for a  **Limit** order, the stop price for a **Stop** order, or the trigger price for a Market if Touched order. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Price2_1** | This is the second price for the first order. For a  **Stop-Limit** order, this is the limit price.  **Price2_1**  only applies to **Stop-Limit** orders. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Quantity_1** | The quantity for the first order. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ClientOrderID_2** | The Client supplied order identifier for the second order. The Server will remember this for the life of the order. |
| [[OrderTypeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OrderTypeEnum) **OrderType_2** | The order type for the second order. For list of order types, refer to [OrderTypeEnum](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OrderTypeEnum). |
| [[BuySellEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#BuySellEnum) **BuySell_2** | The side for the second order. Either Buy or Sell. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Price1_2** | This is the price of the second order. This is the limit price for a  **Limit** order, the stop price for a **Stop** order, or the trigger price for a Market if Touched order. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Price2_2** | This is the second price for the second order. For a  **Stop-Limit** order, this is the limit price.  **Price2_2** only applies to **Stop-Limit** orders. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Quantity_2** | The quantity for the second order. |
| [[TimeInForceEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#TimeInForceEnum) **TimeInForce** | The Time in Force for the order or orders (in the case of an OCO order).     For more information, refer to [TimeInForceEnum](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#TimeInForceEnum). |
| [[t_DateTime]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTime) **GoodTillDateTime** | In the case of when the **TimeInForce** is **TIF_GOOD_TILL_DATE_TIME**, this specifies the expiration Date-Time of the order. This applies to both of the orders in the OCO pair. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **IsAutomatedOrder** | Set to 1 for an order submitted by an automated trading system. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **TradeAccount** | This is the trade account as a text string that the orders belong to. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ParentTriggerClientOrderID** | Optional: This field supports the submission of an OCO order pair which has a parent. This is known as a Bracket order.     For complete documentation for bracket orders, refer to [Bracket Order Procedures](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#BracketOrderProcedures). |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **FreeFormText** | Optional: This is an optional text string which can be set by the Client to associate text  with each of the  OCO orders. The Server is not under any obligation to use this text and it may place a limitation on the length of this text. |
| [[OpenCloseTradeEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OpenCloseTradeEnum) **OpenOrClose** | For the description for this field, refer to [OpenCloseTradeEnum](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#OpenCloseTradeEnum). |
| [[PartialFillHandlingEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#PartialFillHandlingEnum) **PartialFillHandling** | Specifies how partial fills should be handled when when one of the orders  in the OCO  order set partially fills.     For the possible values, refer to [PartialFillHandlingEnum](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#PartialFillHandlingEnum). |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **UseOffsets** | This field is only relevant to a  Bracket order which is the case  when the **ParentTriggerClientOrderID** field is set.     **UseOffsets**  can be set to 1 and indicates  that the **OffsetFromParent1** and   **OffsetFromParent2**  fields  specify the two OCO order prices  as a price offset from the parent order   **Price1**  field, rather than an absolute price.  In this case  **Price1_1** and   **Price1_2** are not used.     When **UseOffsets**  is set to 0, the default,  then the OCO order prices are specified with **Price1_1** and   **Price1_2**.     When  **UseOffsets** is set to 1 and the **OffsetFromParent1** and  **OffsetFromParent2**  fields  are set, it is necessary that   the parent order   **Price1**  field be set even in the case of a  Market order type. In the case of a Market order type use the current order price. This is so that the server has a reference price for the offsets in case it needs to translate them to actual prices.     When the parent order fills,  it is expected the  Server will maintain the specified offsets to the parent order fill price for the Target and Stop orders.     A Server is not required to support this field. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **OffsetFromParent1** | When **UseOffsets** is set to  1,  then this field specifies the **Price1_1**  price as an offset from the parent order. In this case    **Price1_1**  will not be set in the message. Instead the Server calculates that price from this offset and parent order price.     This needs to always be set to a positive price value which is an offset from the parent order price.   The  Server will make the correct calculation based upon the Side and  Order Type.     A Server is not required to support this field. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **OffsetFromParent2** | When **UseOffsets** is set to  1,  then this field specifies the **Price1_2**  price as an offset from the parent order. In this case    **Price1_2**  will not be set in the message. Instead the Server calculates that price from this offset and parent order price.     This needs to always be set to a positive price value which is an offset from the parent order price.   The  Server will make the correct calculation based upon the Side and  Order Type.     A Server is not required to support this field. |

### SUBMIT_FLATTEN_POSITION_ORDER [s_SubmitFlattenPositionOrder structure] Client >> Server

[Link] - [Top]

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Symbol** | The symbol of the  Trade Position to flatten. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **Exchange** | The optional exchange for the Symbol. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **TradeAccount** | The trade account as a text string of the  Trade Position to flatten. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ClientOrderID** | The Client supplied order identifier for the order which will be created to flatten the Trade Position.     The Server will remember this for the life of the order. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **FreeFormText** | Optional: This is an optional text string which can be set by the Client to associate text with the order which will be created to flatten the Trade Position.     The Server is not under any obligation to use this text and it may place a limitation on the length of this text. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **IsAutomatedOrder** | Set to 1 for an order submitted by an automated trading system. |

### CANCEL_REPLACE_ORDER [s_CancelReplaceOrder structure] Client >> Server

[Link] - [Top]

This message is sent by the Client to the Server to cancel and replace an existing order. This is also known as an order modification.

When the cancel and replace operation is completed, an  [OrderUpdate](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE) message is sent by the Server with the   **OrderUpdateReason**field set to  **ORDER_CANCEL_REPLACE_COMPLETE**. If the cancel and replace operation cannot be completed, an OrderUpdate message is sent by the Server with the **OrderUpdateReason** set to  **ORDER_CANCEL_REPLACE_REJECTED**.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ServerOrderID** | This is the order identifier for the order to  modify. The Client needs to set this to the  **ServerOrderID** field received back  in the most recent [ORDER_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE)  message for the order.     The Server will rely upon this **ServerOrderID**  and only this order identifier to identify the order to be canceled and replaced. Although the given **ClientOrderID**  by the Client must not change. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ClientOrderID** | This is the Client's own order identifier for the order.     This must be the same throughout the life of the order.  If the Server sees that this order identifier has changed in relation to the **ServerOrderID**, then it should reject this  message  with a [ORDER_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE) message with the **OrderUpdateReason**  set to **ORDER_CANCEL_REPLACE_REJECTED**     In the case where the order modification cannot be performed because the **ServerOrderID** does not exist, the Server will send a [ORDER_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE) message with the OrderUpdateReason set to **ORDER_CANCEL_REPLACE_REJECTED** and **ClientOrderID** set to the given ClientOrderID in this message. **ServerOrderID** will be unset because an invalid server order identifier was given. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Price1** | For orders that require a price, this is the new order price.     This value can be left unset indicating to the Server that Price1 must not change and only the Quantity. In this case it is necessary to set **Price1IsSet** to a 0 value. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Price2** | For Stop-Limit orders this is the new Limit price. For other order types it is not used.     This value can be left unset indicating to the Server that Price2 must not change and only the Quantity. In this case it is necessary to set **Price2IsSet** to a 0 value. |
| [[double]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#double) **Quantity** | This is the new order quantity.  It this is 0, then this means the order quantity must not be changed by the Server.     If the order has partially filled, then this is going to be the order quantity which also includes the amount which has partially filled.     For example, if the original quantity was 10  and there has been a partial fill of 3, the Client wants a fill of 2 more making a total of 5, then the Client will set this to 5. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **Price1IsSet** | When this field is set to a nonzero value, it indicates that **Price1** is set and the server should use the value, if it applies to the order type.     The default value is 1. |
| [[unsigned int8]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsignedint8) **Price2IsSet** | When this field is set to a nonzero value, it indicates that **Price2** is set and the server should use the value, if it applies to the order type.     The default value is 1. |
| [[TimeInForceEnum]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#TimeInForceEnum) **TimeInForce** | The Time in Force for the order. For a list of Time in Force values, refer to [TimeInForceEnum](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#TimeInForceEnum).     The default value is **TIF_UNSET**.     When this field is set to a value other than **TIF_UNSET**, it indicates that the **TimeInForce** is being changed.     If the server does not support changing  the Time in Force of the order, it needs to reject this **CANCEL_REPLACE_ORDER** message and send an [ORDER_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE) message with the OrderUpdateReason set to **ORDER_CANCEL_REPLACE_REJECTED**.     The server is under no obligation to support changing the Time in Force. |
| [[t_DateTime]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTime) **GoodTillDateTime** | In the case of when the **TimeInForce** field is **TIF_GOOD_TILL_DATE_TIME**, this specifies the expiration Date-Time of the order. |
| [[uint8_t]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#t_DateTime) **UpdatePrice1OffsetToParent** | This is an optional field.  If modifying a child order which is part of a Server managed bracket order, then  when this variable is set to 1 it provides an indication to the Server to update the internal server managed price offset to the parent order that this child order has to the parent.     This will ensure the Server  will maintain the proper offset of the child order to the fill price of the parent order when the parent order fills. |

### CANCEL_ORDER [s_CancelOrder structure] Client >> Server

[Link] - [Top]

This is a message from the Client  to the Server requesting a previously sent order to be canceled.

| Field Name | Field Description |
| --- | --- |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Size** | The standard message size field. Automatically set by constructor. |
| [[unsigned int16]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#unsigned_int16) **Type** | The standard message type field. Automatically set by constructor. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ServerOrderID** | This is the order identifier for the order to  cancel. The Client needs to set this to the  **ServerOrderID** field received back  in the most recent [ORDER_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE)  message for the order. The only case in which a **ServerOrderID** would change is in the case of a successful order Cancel and Replace operation.     The Server will rely upon this **ServerOrderID**  and only this order identifier to identify the order to be canceled. Although the given **ClientOrderID** from the Client must not change. |
| [[char]](https://www.sierrachart.com/index.php?page=doc/DTCMessageDocumentation.php#char) **ClientOrderID** | This is the Client's own order identifier for the order.     This must be the same throughout the life of the order.  If the Server sees that this order identifier has changed in relation to the **ServerOrderID** , then it should reject this  message  with a [ORDER_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE) message with the **OrderUpdateReason**  set to **ORDER_CANCEL_REJECTED**.     In the case where the order   cancellation cannot be performed because the **ServerOrderID** does not exist, the Server will send a [ORDER_UPDATE](https://www.sierrachart.com/index.php?page=doc/DTCMessages_TradingRelatedMessages.php#Messages-ORDER_UPDATE) message with the OrderUpdateReason set to **ORDER_CANCEL_REJECTED** and **ClientOrderID** set to the given ClientOrderID in this message. **ServerOrderID** will be unset because an invalid server order identifier was given. |

### Price Formatting Notes

[Link] - [Top]

The format of DTC Protocol order message Price fields needs to follow the format for the symbol and required by the particular Trading service being used.  There is not a consistent price formatting between trading services for a particular symbol.

For example, for CME ES (Mini S&P 500) futures,  the native price format from the exchange has no decimal places. For example, the normal display format of 4000.50 for a  Trading service that is using native exchange price formatting needs to be sent as 400050.

The general rule is to obtain a [Security Definition](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-SECURITY_DEFINITION_FOR_SYMBOL_REQUEST) for the Symbol before submitting an order.   This only needs to be done once per connection.

In the [Security Definition Response](https://www.sierrachart.com/index.php?page=doc/DTCMessages_SymbolDiscoverySecurityDefinitionsMessages.php#Messages-SECURITY_DEFINITION_RESPONSE) message, check the  **DisplayPriceMultiplier**. If this field is other than 1, then you need to divide  the display price, by the **DisplayPriceMultiplier** value.

For example, for CME ES futures,  if the display price is 4000.50  and **DisplayPriceMultiplier**  is .01, then 4000.50 ÷ .01 = *400050*.

In the DTC protocol order messages, you would set the Price related field in this particular example to *400050*.

---

*Last modified Tuesday, 17th June, 2025.

---

[Service Terms and Refund Policy](https://www.sierrachart.com/index.php?page=doc/PurchaseInformation.php)
