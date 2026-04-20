> **Namespace:** `RApi`

# RApi::LineInfo

Public Member Functions | Public Attributes | List of all members  RApi::LineInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | LineInfo () |
|  |
| virtual | ~LineInfo () |
|  |

| Public Attributes |
| --- |
| bool | bAvgFillPriceFlag |
|  |
| bool | bCancelAfter |
|  |
| bool | bCancelSsboe |
|  |
| bool | bCancelUsecs |
|  |
| bool | bPriceToFillFlag |
|  |
| bool | bReleaseSsboe |
|  |
| bool | bReleaseUsecs |
|  |
| bool | bToMarketAfterPartialFillInSeconds |
|  |
| bool | bToMarketAt |
|  |
| bool | bTriggerPriceFlag |
|  |
| double | dAvgFillPrice |
|  |
| double | dPriceToFill |
|  |
| double | dTriggerPrice |
|  |
| int | iCancelAfter |
|  |
| int | iCancelSsboe |
|  |
| int | iCancelUsecs |
|  |
| int | iGatewayBufferBytesBehind |
|  |
| int | iGatewaySsboe |
|  |
| int | iGatewayUsecs |
|  |
| int | iReleaseSsboe |
|  |
| int | iReleaseUsecs |
|  |
| int | iRpCode |
|  |
| int | iSsboe |
|  |
| int | iToMarketAfterPartialFillInSeconds |
|  |
| int | iToMarketAtSsboe |
|  |
| int | iToMarketAtUsecs |
|  |
| int | iTrailByPriceId |
|  |
| int | iTrailByTicks |
|  |
| int | iTriggerCmpOperator |
|  |
| int | iTriggerPriceId |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| long long | llCancelled |
|  |
| long long | llCancelPendingSize |
|  |
| long long | llFilled |
|  |
| long long | llMaxShowQty |
|  |
| long long | llMinQty |
|  |
| long long | llModifyPendingSize |
|  |
| long long | llQuantityToFill |
|  |
| long long | llReleasePendingSize |
|  |
| long long | llUnfilled |
|  |
| AccountInfo | oAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb | sBracketType |
|  |
| tsNCharcb | sBuySellType |
|  |
| tsNCharcb | sCompletionReason |
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
| tsNCharcb | sOrderOperationType |
|  |
| tsNCharcb | sOrderType |
|  |
| tsNCharcb | sOriginalOrderNum |
|  |
| tsNCharcb | sOriginalOrderType |
|  |
| tsNCharcb | sOriginatorWindowName |
|  |
| tsNCharcb | sReleaseCommand |
|  |
| tsNCharcb | sRemarks |
|  |
| tsNCharcb | sRoutingInstructions |
|  |
| tsNCharcb | sRpCode |
|  |
| tsNCharcb | sStatus |
|  |
| tsNCharcb | sTag |
|  |
| tsNCharcb | sText |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sTickerPlantExchOrdId |
|  |
| tsNCharcb | sToMarketOnReject |
|  |
| tsNCharcb | sToMarketWhenLimitPriceTouched |
|  |
| tsNCharcb | sTradeRoute |
|  |
| tsNCharcb | sTradingAlgorithm |
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

This class represents a cumulative view of orders.

The LineInfo class is used to pass order information (including various states of the order) via RCallbacks::LineUpdate, RCallbacks::OrderReplay or RCallbacks::OpenOrderReplay.
**See also**
  REngine::cancelOrder     REngine::cancelAllOrders     REngine::modifyOrder
     REngine::replayOpenOrders     REngine::sendOrder     REngine::sendOrderList
## Constructor & Destructor Documentation

## LineInfo()

| LineInfo::LineInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members using LineInfo::clearHandles().
## ~LineInfo()

| LineInfo::~LineInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| LineInfo::~LineInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int LineInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine clears all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. This method is used internally by the constructor.
## dump()
     **
| int LineInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## bAvgFillPriceFlag

| bool LineInfo::bAvgFillPriceFlag |
| --- |

Flag indicating whether LineInfo::dAvgFillPrice contains a valid value. This flag should be checked for a value of true before using LineInfo::dAvgFillPrice.
## bCancelAfter

| bool LineInfo::bCancelAfter |
| --- |

Flag indicating whether LineInfo::iCancelAfter contains a valid value. This flag should be checked for a value of true before using the value of LineInfo::iCancelAfter.
## bCancelSsboe

| bool LineInfo::bCancelSsboe |
| --- |

Flag indicating whether LineInfo::iCancelSsboe contains a valid value. This flag should be checked for a value of true before using the value of LineInfo::iCancelSsboe.
## bCancelUsecs

| bool LineInfo::bCancelUsecs |
| --- |

Flag indicating whether LineInfo::iCancelUsecs contains a valid value. This flag should be checked for a value of true before using the value of LineInfo::iCancelUsecs.
## bPriceToFillFlag

| bool LineInfo::bPriceToFillFlag |
| --- |

Flag indicating whether LineInfo::dPriceToFill contains a valid value. This flag should be checked for a value of true before using the value of LineInfo::dPriceToFill.
## bReleaseSsboe

| bool LineInfo::bReleaseSsboe |
| --- |

Flag indicating whether LineInfo::iReleaseSsboe contains a valid value. This flag should be checked for a value of true before using the value of LineInfo::iReleaseSsboe.
## bReleaseUsecs

| bool LineInfo::bReleaseUsecs |
| --- |

Flag indicating whether LineInfo::iReleaseUsecs contains a valid value. This flag should be checked for a value of true before using the value of LineInfo::iReleaseUsecs.
## bToMarketAfterPartialFillInSeconds

| bool LineInfo::bToMarketAfterPartialFillInSeconds |
| --- |

Flag indicating whether LineInfo::iToMarketAfterPartialFillInSeconds contains a valid value. This flag should be checked for a value of true before using LineInfo::iToMarketAfterPartialFillInSeconds.
**See also**
  LineInfo::iToMarketAfterPartialFillInSeconds     OrderParams::bToMarketAfterPartialFillInSeconds     OrderParams::iToMarketAfterPartialFillInSeconds
## bToMarketAt

| bool LineInfo::bToMarketAt |
| --- |

Flag indicating whether LineInfo::iToMarketAtSsboe and LineInfo::iToMarketAtUsecs contains valid values. This flag should be checked for a value of true before using the value of LineInfo::iToMarketAtSsboe and LineInfo::iToMarketAtUsecs.
**See also**
  LineInfo::iToMarketAtSsboe     LineInfo::iToMarketAtUsecs     OrderParams::bToMarketAt     OrderParams::iToMarketAtSsboe     OrderParams::iToMarketAtUsecs
## bTriggerPriceFlag

| bool LineInfo::bTriggerPriceFlag |
| --- |

Flag indicating whether LineInfo::dTriggerPrice contains a valid value. This flag should be checked for a value of true before using LineInfo::dTriggerPrice.
## dAvgFillPrice

| double LineInfo::dAvgFillPrice |
| --- |

Average price at which fills have occurred for this order.
## dPriceToFill

| double LineInfo::dPriceToFill |
| --- |

Price associated with the order.
## dTriggerPrice

| double LineInfo::dTriggerPrice |
| --- |

Trigger price of the stop or if touched condition.
## iCancelAfter

| int LineInfo::iCancelAfter |
| --- |

Time in seconds after the order is open that the order will be canceled. This value corresponds to OrderParams::iCancelAfter.
## iCancelSsboe

| int LineInfo::iCancelSsboe |
| --- |

The seconds portion of the time at which the order is configured to be canceled, expressed in seconds since the beginning of the epoch. This value corresponds to OrderParams::iCancelSsboe.
## iCancelUsecs

| int LineInfo::iCancelUsecs |
| --- |

The microsecond portion of time at which the order is configured to be canceled. This value corresponds to OrderParams::iCancelUsecs.
## iGatewayBufferBytesBehind

| int LineInfo::iGatewayBufferBytesBehind |
| --- |

The size (in bytes) of the gateway's output buffer to the client, taken at the time this message left the infrastructure.

A non-zero value implies that the gateway is trying to send data to the client, but the client is not consuming the data quickly enough. This situation might be caused by insufficient network bandwidth between the gateway and the R | API client, or insufficient resources to process the data stream within the client process.

A value of zero means there is no output buffered, or the data is unavailable.

It will not be populated for historical/replayed data.

NOTE : This data is experimental and may not be available in future releases.
## iGatewaySsboe

| int LineInfo::iGatewaySsboe |
| --- |

If not zero, the time at the gateway as this message leaves the infrastructure. This value is in seconds since the beginning of epoch (Jan. 1, 1970). It will not be populated for historical/replayed data.

NOTE : This data is experimental and may not be available in future releases.
## iGatewayUsecs

| int LineInfo::iGatewayUsecs |
| --- |

The microsecond portion of the gateway timestamp. It will not be populated for historical/replayed data.

NOTE : This data is experimental and may not be available in future releases.
## iReleaseSsboe

| int LineInfo::iReleaseSsboe |
| --- |

The seconds portion of the time at which the order is configured to be released, expressed in seconds since the beginning of the epoch. This value corresponds to OrderParams::iReleaseSsboe.
## iReleaseUsecs

| int LineInfo::iReleaseUsecs |
| --- |

The millisecond portion of time at which the order was configured to be released. This value corresponds to OrderParams::iReleaseUsecs.
## iRpCode

| int LineInfo::iRpCode |
| --- |

Response code, if applicable, from the REngine::replayOpenOrders response.

An iRpCode with a value of API_STATE_ERROR (31) indicates that the RApi could not process the price values. Under normal circumstances this should never occur.
## iSsboe

| int LineInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970)
## iToMarketAfterPartialFillInSeconds

| int LineInfo::iToMarketAfterPartialFillInSeconds |
| --- |

Number of seconds after a partial fill of this order in which this order is configured to be converted to a market order.
**See also**
  LineInfo::bToMarketAfterPartialFillInSeconds     OrderParams::bToMarketAfterPartialFillInSeconds     OrderParams::iToMarketAfterPartialFillInSeconds
## iToMarketAtSsboe

| int LineInfo::iToMarketAtSsboe |
| --- |

Seconds since the beginning of epoch of the timestamp for when this order will be converted to a market order.
**See also**
  LineInfo::bToMarketAt     LineInfo::iToMarketAtSsboe     LineInfo::iToMarketAtUsecs     OrderParams::bToMarketAt     OrderParams::iToMarketAtSsboe     OrderParams::iToMarketAtUsecs
## iToMarketAtUsecs

| int LineInfo::iToMarketAtUsecs |
| --- |

Microsecond portion of the timestamp for when this order will be converted to a market order.
**See also**
  LineInfo::bToMarketAt     LineInfo::iToMarketAtSsboe     LineInfo::iToMarketAtUsecs     OrderParams::bToMarketAt     OrderParams::iToMarketAtSsboe     OrderParams::iToMarketAtUsecs
## iTrailByPriceId

| tsNCharcb LineInfo::iTrailByPriceId |
| --- |

If applicable, this value indicates the type of price to be used when evaluating the LineInfo::iTrailByTicks condition.
## iTrailByTicks

| tsNCharcb LineInfo::iTrailByTicks |
| --- |

If applicable, this value indicates the number of ticks to trail by.
## iTriggerCmpOperator

| int LineInfo::iTriggerCmpOperator |
| --- |

This value indicates the operator to be used when evaluating the the trigger condition.
**See also**
  RApi::OP_NONE     RApi::OP_EQUAL_TO     RApi::OP_LESS_THAN     RApi::OP_GREATER_THAN     RApi::OP_LESS_THAN_OR_EQUAL_TO     RApi::OP_GREATER_THAN_OR_EQUAL_TO     RApi::OP_NOT_EQUAL_TO     RApi::OP_NOT_GREATER_THAN     RApi::OP_NOT_LESS_THAN
## iTriggerPriceId

| int LineInfo::iTriggerPriceId |
| --- |

If applicable, this value indicates the type of price to be used when evaluating the trigger condition.
**See also**
  RApi::BEST_ASK_PRICE     RApi::BEST_BID_PRICE     RApi::TRADE_PRICE
## iType

| int LineInfo::iType |
| --- |

This member variable indicates if the instance data is from a cache, the real-time data stream or a historical database.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB     MD_HISTORY_CB
## iUsecs

| int LineInfo::iUsecs |
| --- |

Microsecond portion of the timestamp
## llCancelled

| LineInfo::llCancelled |
| --- |

Quantity of this order that has been cancelled.
## llCancelPendingSize

| LineInfo::llCancelPendingSize |
| --- |

Quantity of this order that is pending cancellation.
## llFilled

| LineInfo::llFilled |
| --- |

Quantity of this order that has been filled.
## llMaxShowQty

| LineInfo::llMaxShowQty |
| --- |

Maximum quantity to show.
## llMinQty

| LineInfo::llMinQty |
| --- |

Minimum quantity of the order..
## llModifyPendingSize

| LineInfo::llModifyPendingSize |
| --- |

Quantity of this order that is pending modification.
## llQuantityToFill

| LineInfo::llQuantityToFill |
| --- |

Confirmed quantity of this order.
## llReleasePendingSize

| LineInfo::llReleasePendingSize |
| --- |

Quantity of an order that is unconfirmed by the exchange.

Typically the value will be the quantity of a new order prior to confirmation of that order by an exchange.
 Afterwards, this will go to zero and the LineInfo::llQuantityToFill will hold the (now confirmed) value.

If the order is a 'synthetic' stop order (a stop order whose trigger functionality is not implemented by the exchange) that has not been triggered yet, then the quantity of the stop order will be contained in this value. In this case, the exchange has not yet received the order, and consequently has not confirmed the order quantity.
## llUnfilled

| LineInfo::llUnfilled |
| --- |

Quantity of this order that has not been filled or cancelled.
## oAccount

| AccountInfo LineInfo::oAccount |
| --- |

Account associated with this order.
## pContext

| int LineInfo::pContext |
| --- |

A pointer that was passed when sending or updating this order. This context is order specific.
**See also**
  REngine::getOrderContext     REngine::setOrderContext     REngine::sendOrder     REngine::modifyOrder     LimitOrderParams::pContext     MarketOrderParams::pContext     ModifyOrderParams::pContext
## sBracketType

| tsNCharcb LineInfo::sBracketType |
| --- |

String indicating the type of bracket order. If this is not a bracket order the string will be empty.
**See also**
  sBRACKET_TYPE_TARGET_AND_STOP     sBRACKET_TYPE_TARGET_ONLY     sBRACKET_TYPE_STOP_ONLY     sBRACKET_TYPE_TARGET_AND_STOP_STATIC     sBRACKET_TYPE_TARGET_ONLY_STATIC     sBRACKET_TYPE_STOP_ONLY_STATIC
## sBuySellType

| tsNCharcb LineInfo::sBuySellType |
| --- |

String indicating whether the order is a buy or a sell, including some variations.
**See also**
  sBUY_SELL_TYPE_BUY     sBUY_SELL_TYPE_SELL     sBUY_SELL_TYPE_SELL_SHORT     sBUY_SELL_TYPE_SELL_SHORT_EXEMPT
## sCompletionReason

| tsNCharcb LineInfo::sCompletionReason |
| --- |

String code indicating why the order is now complete. Possible values are listed below. Note that the list may not be complete as support for new exchanges (and possible more completion reasons) are added on a schedule independent of this api.
**See also**
  sCOMPLETION_REASON_CANCEL     sCOMPLETION_REASON_FAILURE     sCOMPLETION_REASON_FILL     sCOMPLETION_REASON_PFBC     sCOMPLETION_REASON_REJECT     sCOMPLETION_REASON_UNKNOWN
## sCurrentSequenceNumber

| tsNCharcb LineInfo::sCurrentSequenceNumber |
| --- |

This is the sequence number assigned to this order by the infrastructure. This value may change over the life of the order.
 It is possible that this value is used by the exchange in conjuction with, or in place of, the OrderReport::ExchOrdId, to identify the order.
## sEntryType

| tsNCharcb LineInfo::sEntryType |
| --- |

The entry type indicates whether the most recent order operation was initiated automatically or manually.
**See also**
  sORDER_ENTRY_TYPE_AUTO     sORDER_ENTRY_TYPE_MANUAL
## sExchange

| tsNCharcb LineInfo::sExchange |
| --- |

The exchange of the instrument associated with this order.
## sExchOrdId

| tsNCharcb LineInfo::sExchOrdId |
| --- |

When available, this contains the order id assigned by the exchange for this order.
**See also**
  OrderReport::sExchOrderId
## sInitialSequenceNumber

| tsNCharcb LineInfo::sInitialSequenceNumber |
| --- |

This is the (correlation) sequence number assigned to this order by the infrastructure when the order is placed. It typically will not change over the life of the order. It is possible that an exchange will need this value, and perhaps other values (such as LineInfo::sCurrentSequenceNumber) to identify an order.
## sLinkedOrderNums

| tsNCharcb LineInfo::sLinkedOrderNums |
| --- |

Contains a comma-delimited list of order numbers representing the set of linked orders of which this order is a member. Linked orders are often profit/stop pairs for exiting a position.
**See also**
  REngine::linkOrders()     REngine::sendOcaList()     REngine::sendBracketOrder()     OrderReport::sLinkedOrderNums
## sOmnibusAccount

| tsNCharcb LineInfo::sOmnibusAccount |
| --- |

If available, this value contains the exchange account pertaining to the order.
## sOrderDuration

| tsNCharcb LineInfo::sOrderDuration |
| --- |

String indicating the order duration code.
**See also**
  sORDER_DURATION_DAY     sORDER_DURATION_FOK     sORDER_DURATION_IOC     sORDER_DURATION_GTC
## sOrderNum

| tsNCharcb LineInfo::sOrderNum |
| --- |

The unique number assigned to this order by the infrastructure. Note that this value is not the same as the one used by the exchange to uniquely identify the order.
## sOrderOperationType

| tsNCharcb LineInfo::sOrderOperationType |
| --- |

String indicating the order operation type, if there is one. This field may contain other strings, such as "LIST", if an order was sent as part of a list (REngine::sendOrderList()).
**See also**
  sORDER_OPERATION_TYPE_FOCCA     sORDER_OPERATION_TYPE_FCA     sORDER_OPERATION_TYPE_CCA
## sOrderType

| tsNCharcb LineInfo::sOrderType |
| --- |

String indicating whether the order is a limit order or a market order.
**See also**
  sORDER_TYPE_LIMIT     sORDER_TYPE_MARKET
## sOriginalOrderNum

| tsNCharcb LineInfo::sOriginalOrderNum |
| --- |

The order number of the order causing this order to be placed. This value can be used to correlate a bracket exit order with the entry order.
## sOriginalOrderType

| tsNCharcb LineInfo::sOriginalOrderType |
| --- |

Original order type of this order. Some exchanges modify the order type based on how it changes over time (e.g. a stop limit order converting to a limit order after it is triggered). This value will contain the order type when the order was initially placed.
**See also**
  OrderReport::sOriginalOrderType
## sOriginatorWindowName

| tsNCharcb LineInfo::sOriginatorWindowName |
| --- |

If a window name was specified when this order was created, that value will be retained in this field.
**See also**
  LineInfo::sWindowName     OrderParams::sWindowName
## sReleaseCommand

| tsNCharcb LineInfo::sReleaseCommand |
| --- |

String indicating the order release command.
## sRemarks

| tsNCharcb LineInfo::sRemarks |
| --- |

Remarks, if any, on this order message.
## sRoutingInstructions

| tsNCharcb RApi::LineInfo::sRoutingInstructions |
| --- |

## sRpCode

| tsNCharcb LineInfo::sRpCode |
| --- |

String equivalent of LineInfo::iRpCode.
## sStatus

| tsNCharcb LineInfo::sStatus |
| --- |

Status of the order. A list of values is defined in the RApi.h file, but it is possible that the list may be incomplete, based on changes to the infrastructure after the publication of the header file.
## sTag

| tsNCharcb LineInfo::sTag |
| --- |

If a value for the tag string was passed when placing the order, it will appear in here. It can be regarded as a static user-assigned value associated with the order.
**See also**
  OrderParams::sTag     LimitOrderParams::sTag     MarketOrderParams::sTag
## sText

| tsNCharcb LineInfo::sText |
| --- |

Informational text that may be provided with this line update.
## sTicker

| tsNCharcb LineInfo::sTicker |
| --- |

The symbol of the instrument associated with this order.
## sTickerPlantExchOrdId

| tsNCharcb LineInfo::sTickerPlantExchOrdId |
| --- |

When available/applicable, this contains the exchange order id as it appears in the ticker plant (or market data stream).
**See also**
  DboInfo::sExchOrdId     OrderReport::sTickerPlantExchOrdId
## sToMarketOnReject

| tsNCharcb LineInfo::sToMarketOnReject |
| --- |

Indication of whether this order is configured to convert to a market order if it is rejected by the exchange.

A value of "yes" indicates market on reject is enabled.
**See also**
  OrderParams::sToMarketOnReject     OrderRejectReport::bReplacementOrderToFollow
## sToMarketWhenLimitPriceTouched

| tsNCharcb LineInfo::sToMarketWhenLimitPriceTouched |
| --- |

Indication of whether this order is configured to convert to a market order when the instrument's trade price touches this order's limit price.

A value of "yes" indicates this feature is enabled.
**See also**
  OrderParams::sToMarketWhenLimitPriceTouched
## sTradeRoute

| tsNCharcb LineInfo::sTradeRoute |
| --- |

Trade route specified when placing the order.
**See also**
  OrderParams::sTradeRoute     LimitOrderParams::sTradeRoute     MarketOrderParams::sTradeRoute
## sTradingAlgorithm

| tsNCharcb LineInfo::sTradingAlgorithm |
| --- |

Current value for trading algorithm associated with this order, if set.
**See also**
  OrderParams::sTradingAlgorithm     LimitOrderParams::sTradingAlgorithm     MarketOrderParams::sTradingAlgorithm     ModifyOrderParams::sTradingAlgorithm     ModifyLimitOrderParams::sTradingAlgorithm     ModifyStopMarketOrderParams::sTradingAlgorithm     ModifyStopLimitOrderParams::sTradingAlgorithm     REngine::cancelOrder     REngine::cancelOrderList     LineInfo::sTradingAlgorithm
## sTriggerExchange

| tsNCharcb LineInfo::sTriggerExchange |
| --- |

This member variable specifies the exchange associated with the trigger condition.
## sTriggerTicker

| tsNCharcb LineInfo::sTriggerTicker |
| --- |

This member variable specifies the symbol associated with the trigger condition.
## sUser

| tsNCharcb LineInfo::sUser |
| --- |

If available, the user who most recently operated on this order.
## sUserMsg

| tsNCharcb LineInfo::sUserMsg |
| --- |

If a value for the context string was passed when placing or operating on the order, it will appear in here.
**See also**
  LimitOrderParams::sUserMsg     MarketOrderParams::sUserMsg     ModifyOrderParams::sUserMsg     REngine::cancelOrder
## sUserTag

| tsNCharcb LineInfo::sUserTag |
| --- |

If a value for the user tag string was passed when placing the order, it will appear in here. It can be regarded as a static user-assigned value associated with the order.
**See also**
  OrderParams::sUserTag
## sWindowName

| tsNCharcb LineInfo::sWindowName |
| --- |

Name of window associated with this order or order request. Some applications will populate this field when submitting order requests to identify which window/widget requested the order operation.
**See also**
  LineInfo::sOriginatorWindowName     OrderParams::sWindowName
