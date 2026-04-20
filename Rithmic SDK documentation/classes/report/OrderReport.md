> **Namespace:** `RApi`

# RApi::OrderReport

Public Member Functions | Public Attributes | List of all members  RApi::OrderReport Class Reference

`#include <RApiPlus.h>`  Inheritance diagram for RApi::OrderReport:

| Public Member Functions |
| --- |
| virtual int | clearHandles (int *aiCode) |
|  |
| virtual int | dump (int *aiCode) |
|  |
|  | OrderReport () |
|  |
| virtual | ~OrderReport () |
|  |

| Public Attributes |
| --- |
| bool | bAvgFillPriceFlag |
|  |
| bool | bFillPriceFlag |
|  |
| bool | bPriceToFillFlag |
|  |
| bool | bTriggerPriceFlag |
|  |
| double | dAvgFillPrice |
|  |
| double | dFillPrice |
|  |
| double | dPriceToFill |
|  |
| double | dTriggerPrice |
|  |
| int | iConnId |
|  |
| int | iGatewayBufferBytesBehind |
|  |
| int | iGatewaySsboe |
|  |
| int | iGatewayUsecs |
|  |
| int | iSourceNsecs |
|  |
| int | iSourceSsboe |
|  |
| int | iSsboe |
|  |
| int | iTriggerCmpOperator |
|  |
| int | iTriggerPriceId |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| long long | llFillSize |
|  |
| long long | llTotalFilled |
|  |
| long long | llTotalUnfilled |
|  |
| AccountInfo | oAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb | sBuySellType |
|  |
| tsNCharcb | sCurrentSequenceNumber |
|  |
| tsNCharcb | sEntryType |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sExchOrdId |
|  |
| tsNCharcb | sInitialSequenceNumber |
|  |
| tsNCharcb | sLinkedOrderNums |
|  |
| tsNCharcb | sOmnibusAccount |
|  |
| tsNCharcb | sOrderDuration |
|  |
| tsNCharcb | sOrderNum |
|  |
| tsNCharcb | sOrderType |
|  |
| tsNCharcb | sOriginalOrderNum |
|  |
| tsNCharcb | sOriginalOrderType |
|  |
| tsNCharcb | sOriginatorWindowName |
|  |
| tsNCharcb | sPositionDisposition |
|  |
| tsNCharcb | sReportId |
|  |
| tsNCharcb | sReportType |
|  |
| tsNCharcb | sTag |
|  |
| tsNCharcb | sText |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sTickerPlantExchOrdId |
|  |
| tsNCharcb | sTriggerExchange |
|  |
| tsNCharcb | sTriggerTicker |
|  |
| tsNCharcb | sUser |
|  |
| tsNCharcb | sUserMsg |
|  |
| tsNCharcb | sUserTag |
|  |
| tsNCharcb | sWindowName |
|  |

## Detailed Description

The OrderReport represents basic information about an order.

The OrderReport class is the base class for other Order*Report classes, It is passed in RCallbacks::OrderOtherReport().
## Constructor & Destructor Documentation

## OrderReport()

| OrderReport::OrderReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~OrderReport()

| OrderReport::~OrderReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OrderReport::~OrderReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int OrderReport::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int OrderReport::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will clear the current values of the object.

Reimplemented in RApi::OrderFillReport.
## dump()
     **
| int OrderReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int OrderReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.

Reimplemented in RApi::OrderBustReport, RApi::OrderCancelReport, RApi::OrderFailureReport, RApi::OrderFillReport, RApi::OrderModifyReport, RApi::OrderNotCancelledReport, RApi::OrderNotModifiedReport, RApi::OrderRejectReport, RApi::OrderStatusReport, RApi::OrderTradeCorrectReport, RApi::OrderTriggerPulledReport, and RApi::OrderTriggerReport.
## Member Data Documentation

## bAvgFillPriceFlag

| bool OrderReport::bAvgFillPriceFlag |
| --- |

Flag indicating whether OrderReport::dAvgFillPrice contains a valid value. This flag should be checked for a value of true before using OrderReport::dAvgFillPrice.
## bFillPriceFlag

| bool OrderReport::bFillPriceFlag |
| --- |

Flag indicating whether OrderReport::dFillPrice contains a valid value. This flag should be checked for a value of true before using the value of OrderReport::dFillPrice.
## bPriceToFillFlag

| bool OrderReport::bPriceToFillFlag |
| --- |

Flag indicating whether OrderReport::dPriceToFill contains a valid value. This flag should be checked for a value of true before using the value of OrderReport::dPriceToFill.
## bTriggerPriceFlag

| bool OrderReport::bTriggerPriceFlag |
| --- |

Flag indicating whether OrderReport::dTriggerPrice contains a valid value. This flag should be checked for a value of true before using the value of OrderReport::dTriggerPrice.
## dAvgFillPrice

| double OrderReport::dAvgFillPrice |
| --- |

Average price at which fills have occurred for this order.
## dFillPrice

| double OrderReport::dFillPrice |
| --- |

Fill price associated with this order report. The order report may be for a fill (OrderFillReport), but it may not.
## dPriceToFill

| double OrderReport::dPriceToFill |
| --- |

Price associated with the order that has been placed.
## dTriggerPrice

| double OrderReport::dTriggerPrice |
| --- |

Trigger price associated with the order that has been placed.
## iConnId

| int OrderReport::iConnId |
| --- |

This identifies the connection on which this report was received. It is possible when using the R | Diamond Cutter connect point, certain order report callbacks will be invoked twice, once on the trading system connect point, and once on the R | Diamond Cutter connect point. This indicator provides a mechanism to distinguish between the two.
## iGatewayBufferBytesBehind

| int OrderReport::iGatewayBufferBytesBehind |
| --- |

The size (in bytes) of the gateway's output buffer to the client, taken at the time this message left the infrastructure.

A non-zero value implies that the gateway is trying to send data to the client, but the client is not consuming the data quickly enough. This situation might be caused by insufficient network bandwidth between the gateway and the R | API client, or insufficient resources to process the data stream within the client process.

A value of zero means there is no output buffered, or the data is unavailable.

It will not be populated for historical/replayed data.

NOTE : This data is experimental and may not be available in future releases.
## iGatewaySsboe

| int OrderReport::iGatewaySsboe |
| --- |

If not zero, the time at the gateway as the OrderReport leaves the infrastructure. This value is in seconds since the beginning of epoch (Jan. 1, 1970). It will not be populated for historical/replayed data.

NOTE : This data is experimental and may not be available in future releases.
## iGatewayUsecs

| int OrderReport::iGatewayUsecs |
| --- |

If not zero, the microsecond portion of the gateway timestamp. It will not be populated for historical/replayed data.

NOTE : This data is experimental and may not be available in future releases.
## iSourceNsecs

| int OrderReport::iSourceNsecs |
| --- |

Nanosecond portion of the source timestamp
**See also**
  OrderReport::iSourceSsboe
## iSourceSsboe

| int OrderReport::iSourceSsboe |
| --- |

Timestamp, as provided by the exchange, in seconds since the beginning of epoch (Jan. 1, 1970)
## iSsboe

| int OrderReport::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970)
## iTriggerCmpOperator

| RApi::OrderReport::iTriggerCmpOperator |
| --- |

This value indicates the operator to be used when evaluating the the trigger condition.
**See also**
  RApi::OP_NONE    RApi::OP_EQUAL_TO     RApi::OP_LESS_THAN     RApi::OP_GREATER_THAN     RApi::OP_LESS_THAN_OR_EQUAL_TO     RApi::OP_GREATER_THAN_OR_EQUAL_TO     RApi::OP_NOT_EQUAL_TO    RApi::OP_NOT_GREATER_THAN     RApi::OP_NOT_LESS_THAN
## iTriggerPriceId

| RApi::OrderReport::iTriggerPriceId |
| --- |

This value indicates the type of price to be used when evaluating the the trigger condition.
**See also**
  RApi::BEST_ASK_PRICE     RApi::BEST_BID_PRICE     RApi::TRADE_PRICE
## iType

| int OrderReport::iType |
| --- |

This member variable indicates if the instance data is from a cache, the real-time data stream or a historical database.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB     MD_HISTORY_CB
## iUsecs

| int OrderReport::iUsecs |
| --- |

Microsecond portion of the timestamp
## llFillSize

| OrderReport::llFillSize |
| --- |

Fill quantity associated with this order report.
## llTotalFilled

| OrderReport::llTotalFilled |
| --- |

The total quantity filled for this order as of the timestamp. This value reflects the Rithmic order manager's state of this order.
## llTotalUnfilled

| OrderReport::llTotalUnfilled |
| --- |

The total quantity still unfilled for this order as of the timestamp. This value reflects the Rithmic order manager's state of this order.
## oAccount

| AccountInfo OrderReport::oAccount |
| --- |

Account associated with this order.
## pContext

| int OrderReport::pContext |
| --- |

A pointer that was passed when sending or updating this order. This context is order specific.
**See also**
  REngine::modifyOrder     REngine::sendOrder     REngine::sendOrderList     LimitOrderParams::pContext     MarketOrderParams::pContext     ModifyOrderParams::pContext
## sBuySellType

| tsNCharcb OrderReport::sBuySellType |
| --- |

String indicating whether the order is a buy or a sell, including some variations.
**See also**
  sBUY_SELL_TYPE_BUY     sBUY_SELL_TYPE_SELL     sBUY_SELL_TYPE_SELL_SHORT     sBUY_SELL_TYPE_SELL_SHORT_EXEMPT
## sCurrentSequenceNumber

| tsNCharcb OrderReport::sCurrentSequenceNumber |
| --- |

This is the sequence number assigned to this order by the infrastructure.
 This value may change over the life of the order. Also, it is possible that this value is used in conjuction with, or in place of the OrderReport::sExchOrdId, by the exchange to identify the order.
## sEntryType

| tsNCharcb OrderReport::sEntryType |
| --- |

The entry type indicates whether the most recent order operation was initiated automatically or manually.
**See also**
  sORDER_ENTRY_TYPE_AUTO     sORDER_ENTRY_TYPE_MANUAL
## sExchange

| tsNCharcb OrderReport::sExchange |
| --- |

The exchange of the instrument associated with this order.
## sExchOrdId

| tsNCharcb OrderReport::sExchOrdId |
| --- |

This is the order id assigned by the exchange for this order.
## sInitialSequenceNumber

| tsNCharcb OrderReport::sInitialSequenceNumber |
| --- |

This is the (correlation) sequence number assigned to this order by the infrastructure when the order is placed. It typically will not change over the life of the order. It is possible that an exchange will need this value, and perhaps other values (such as OrderReport::sCurrentSequenceNumber or OrderReport::sExchOrdId) to identify an order.
## sLinkedOrderNums

| tsNCharcb OrderReport::sLinkedOrderNums |
| --- |

Contains a comma-delimited list of order numbers representing the set of linked orders of which this order is a member. Linked orders are often profit/stop pairs for exiting a position.
**See also**
  REngine::linkOrders()     REngine::sendOcaList()     REngine::sendBracketOrder()     LineInfo::sLinkedOrderNums
## sOmnibusAccount

| tsNCharcb OrderReport::sOmnibusAccount |
| --- |

If available, this value contains the exchange account pertaining to the order.
## sOrderDuration

| tsNCharcb OrderReport::sOrderDuration |
| --- |

String indicating the order duration of this order.
**See also**
  sORDER_DURATION_IOC     sORDER_DURATION_FOK     sORDER_DURATION_DAY     sORDER_DURATION_GTC
## sOrderNum

| tsNCharcb OrderReport::sOrderNum |
| --- |

The unique number assigned to this order by the infrastructure. Note that this value is not the same as the one used by the exchange to uniquely identify the order.
## sOrderType

| tsNCharcb OrderReport::sOrderType |
| --- |

String indicating whether the order is a limit order or a market order.
**See also**
  sORDER_TYPE_LIMIT     sORDER_TYPE_MARKET
## sOriginalOrderNum

| int OrderReport::sOriginalOrderNum |
| --- |

The order number of the order causing this order to be placed. This value can be used to correlate a bracket exit order with the entry order.
## sOriginalOrderType

| tsNCharcb OrderReport::sOriginalOrderType |
| --- |

Original order type of this order. Some exchanges modify the order type based on how it changes over time (e.g. a stop limit order converting to a limit order after it is triggered). This value will contain the order type when the order was initially placed.
**See also**
  LineInfo::sOriginalOrderType
## sOriginatorWindowName

| tsNCharcb OrderReport::sOriginatorWindowName |
| --- |

If a window name was specified when this order was created, that value will be retained in this field.
**See also**
  OrderReport::sWindowName     LineInfo::sOriginatorWindowName     LineInfo::sWindowName
## sPositionDisposition

| tsNCharcb OrderReport::sPositionDisposition |
| --- |

If available, this value contains the position disposition of the order. The position disposition is the net position on this instrument, for this account taking into consideration this order. It typically has values of opening, closing, or closing then opening.
## sReportId

| tsNCharcb OrderReport::sReportId |
| --- |

String indicating the report identifier. It is possible for this value to be empty. If this report is an sod report, the value will be "sod".
## sReportType

| tsNCharcb OrderReport::sReportType |
| --- |

String indicating the report type. If this report is an sod report, the value will be "sod".
## sTag

| tsNCharcb OrderReport::sTag |
| --- |

If a value for the tag string was passed when placing the order, it will appear in here. It can be regarded as a static user-assigned value associated with the order.
**See also**
  OrderParams::sTag     LimitOrderParams::sTag     MarketOrderParams::sTag
## sText

| tsNCharcb OrderReport::sText |
| --- |

Informational text that may be provided with this order report.
## sTicker

| tsNCharcb OrderReport::sTicker |
| --- |

The symbol of the instrument associated with this order.
## sTickerPlantExchOrdId

| tsNCharcb OrderReport::sTickerPlantExchOrdId |
| --- |

When available/applicable, this contains the exchange order id as it appears in the ticker plant (or market data stream).
**See also**
  DboInfo::sExchOrdId     LineInfo::sTickerPlantExchOrdId
## sTriggerExchange

| RApi::OrderReport::sTriggerExchange |
| --- |

This member variable specifies the exchange of associated with the trigger condition.
## sTriggerTicker

| RApi::OrderReport::sTriggerTicker |
| --- |

This member variable specifies the symbol of associated with the trigger condition.
## sUser

| tsNCharcb OrderReport::sUser |
| --- |

If available, the user who most recently operated on this order.
## sUserMsg

| tsNCharcb OrderReport::sUserMsg |
| --- |

If a value for the context string was passed when placing or operating on the order, it will appear in here.
**See also**
  OrderParams::sUserMsg     LimitOrderParams::sUserMsg     MarketOrderParams::sUserMsg
## sUserTag

| tsNCharcb OrderReport::sUserTag |
| --- |

If a value for the user tag string was passed when placing the order, it will appear in here. It can be regarded as a static user-assigned value associated with the order.
**See also**
  OrderParams::sUserTag
## sWindowName

| tsNCharcb OrderReport::sWindowName |
| --- |

Name of window associated with this order or order request. Some applications will populate this field when submitting order requests to identify which window/widget requested the order operation.
**See also**
  LineInfo::sWindowName     LineInfo::sOriginatorWindowName
