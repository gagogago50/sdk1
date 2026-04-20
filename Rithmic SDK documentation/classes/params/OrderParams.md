> **Namespace:** `RApi`

# RApi::OrderParams

Public Member Functions | Public Attributes | List of all members  RApi::OrderParams Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
|  | OrderParams () |
|  |
|  | OrderParams (LimitOrderParams *pParamsIn) |
|  |
|  | OrderParams (MarketOrderParams *pParamsIn) |
|  |
|  | OrderParams (StopLimitOrderParams *pParamsIn) |
|  |
|  | OrderParams (StopMarketOrderParams *pParamsIn) |
|  |
| virtual | ~OrderParams () |
|  |

| Public Attributes |
| --- |
| bool | bCancelAfter |
|  |
| bool | bCancelSsboe |
|  |
| bool | bCancelUsecs |
|  |
| bool | bMaxShowQty |
|  |
| bool | bMinQty |
|  |
| bool | bReleaseCondition |
|  |
| bool | bReleaseSsboe |
|  |
| bool | bReleaseUsecs |
|  |
| bool | bToMarketAfterPartialFillInSeconds |
|  |
| bool | bToMarketAt |
|  |
| bool | bTrailingStop |
|  |
| double | dPrice |
|  |
| double | dReleaseConditionPrice |
|  |
| double | dTriggerPrice |
|  |
| int | iCancelAfter |
|  |
| int | iCancelSsboe |
|  |
| int | iCancelUsecs |
|  |
| int | iReleaseConditionPriceCmpOperator |
|  |
| int | iReleaseConditionPriceId |
|  |
| int | iReleaseConditionSizeCmpOperator |
|  |
| int | iReleaseConditionSizeId |
|  |
| int | iReleaseSsboe |
|  |
| int | iReleaseUsecs |
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
| long long | llMaxShowQty |
|  |
| long long | llMinQty |
|  |
| long long | llQty |
|  |
| long long | llReleaseConditionSize |
|  |
| AccountInfo * | pAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb | sBuySellType |
|  |
| tsNCharcb | sDuration |
|  |
| tsNCharcb | sEntryType |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sOrderType |
|  |
| tsNCharcb | sReleaseCommand |
|  |
| tsNCharcb | sRoutingInstructions |
|  |
| tsNCharcb | sTag |
|  |
| tsNCharcb | sTicker |
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
| tsNCharcb | sUserMsg |
|  |
| tsNCharcb | sUserTag |
|  |
| tsNCharcb | sWindowName |
|  |

## Detailed Description

This class encapsulates information needed to submit an order.
## Constructor & Destructor Documentation

## OrderParams() [1/5]

| OrderParams::OrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members using OrderParams::clearHandles().
## OrderParams() [2/5]
     **
| OrderParams::OrderParams | ( | LimitOrderParams * | pParamsIn | ) |  |
| --- | --- | --- | --- | --- | --- |

## OrderParams() [3/5]
     **
| OrderParams::OrderParams | ( | MarketOrderParams * | pParamsIn | ) |  |
| --- | --- | --- | --- | --- | --- |

## OrderParams() [4/5]
     **
| OrderParams::OrderParams | ( | StopLimitOrderParams * | pParamsIn | ) |  |
| --- | --- | --- | --- | --- | --- |

## OrderParams() [5/5]
     **
| OrderParams::OrderParams | ( | StopMarketOrderParams * | pParamsIn | ) |  |
| --- | --- | --- | --- | --- | --- |

## ~OrderParams()

| OrderParams::~OrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OrderParams::~OrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int OrderParams::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine clears all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. This method is used internally by the constructor.
## Member Data Documentation

## bCancelAfter

| RApi::OrderParams::bCancelAfter |
| --- |

This member variable specifies whether OrderParams::iCancelAfter should be specified when placing an order.
## bCancelSsboe

| RApi::OrderParams::bCancelSsboe |
| --- |

Indicates whether the seconds portion of a 'cancel at' timestamp (in seconds since the beginning of epoch) is specified when placing an order.
**See also**
  RApi::OrderParams::bCancelSsboe     RApi::OrderParams::bCancelUsecs     RApi::OrderParams::iCancelSsboe     RApi::OrderParams::iCancelSsboe
## bCancelUsecs

| RApi::OrderParams::bCancelUsecs |
| --- |

Indicates whether the microseconds portion of a 'cancel at' timestamp is specified when placing an order.
**See also**
  RApi::OrderParams::bCancelSsboe     RApi::OrderParams::bCancelUsecs     RApi::OrderParams::iCancelSsboe     RApi::OrderParams::iCancelSsboe
## bMaxShowQty

| RApi::OrderParams::bMaxShowQty |
| --- |

This member variable specifies whether a max show quantity should be specified when placing an order.
## bMinQty

| RApi::OrderParams::bMinQty |
| --- |

This member variable specifies whether a minimum quantity should be specified when placing an order.
## bReleaseCondition

| RApi::OrderParams::bReleaseCondition |
| --- |

Setting this flag to true enables the server-side release condition mechanism for this order. When the specified market condition is met, the order is released. The market condition has a price component as well as a size component.
**See also**
  RApi::OrderParams::iReleaseConditionPriceId     RApi::OrderParams::iReleaseConditionPriceCmpOperator     RApi::OrderParams::dReleaseConditionPrice     RApi::OrderParams::iReleaseConditionSizeId     RApi::OrderParams::iReleaseConditionSizeCmpOperator     RApi::OrderParams::llReleaseConditionSize
## bReleaseSsboe

| RApi::OrderParams::bReleaseSsboe |
| --- |

This member variable specifies whether a release timestamp (in seconds since the beginning of epoch) should be specified when placing an order.
## bReleaseUsecs

| RApi::OrderParams::bReleaseUsecs |
| --- |

This member variable specifies whether the microseconds portion of a release timestamp should be specified when placing an order.
## bToMarketAfterPartialFillInSeconds

| bool OrderParams::bToMarketAfterPartialFillInSeconds |
| --- |

Flag indicating whether OrderParams::iToMarketAfterPartialFillInSeconds should be used. If this value is false, the value in OrderParams::iToMarketAfterPartialFillInSeconds will be ignored.
**See also**
  OrderParams::iToMarketAfterPartialFillInSeconds     LineInfo::bToMarketAfterPartialFillInSeconds     LineInfo::iToMarketAfterPartialFillInSeconds
## bToMarketAt

| bool OrderParams::bToMarketAt |
| --- |

Flag indicating whether OrderParams::iToMarketAtSsboe and OrderParams::iToMarketAtUsecs should be used. If this value is false, OrderParams::iToMarketAtSsboe and OrderParams::iToMarketAtUsecs will be ignored.

Using this setting configures this order to be converted to a market order at the specified time. Market-if-touched, limit-if-touched, and market orders cannot make use of this feature and will be regarded as 'bad input'.
**See also**
  OrderParams::sOrderType     OrderParams::bToMarketAt     OrderParams::iToMarketAtSsboe     OrderParams::iToMarketAtUsecs     LineInfo::bToMarketAt     LineInfo::iToMarketAtSsboe     LineInfo::iToMarketAtUsecs
## bTrailingStop

| RApi::OrderParams::bTrailingStop |
| --- |

If this is a stop or stop limit order, it is possible to have the stop price 'trail' the market. This variable specifies whether to enable trailing stops for the order. It is ignored for other order types.
**See also**
  RApi::BEST_ASK_PRICE     RApi::BEST_BID_PRICE     RApi::TRADE_PRICE     RApi::OrderParams::iTrailByPriceId     RApi::OrderParams::iTrailByTicks     RApi::OrderParams::sOrderType     RApi::sORDER_TYPE_STOP_LIMIT     RApi::sORDER_TYPE_STOP_MARKET
## dPrice

| RApi::OrderParams::dPrice |
| --- |

This member variable indicates the limit price of the order to be placed. It is ignored for market, stop market and market if touched orders.
## dReleaseConditionPrice

| RApi::OrderParams::dReleaseConditionPrice |
| --- |

Specifies the price to compare, if the release condition is enabled.
**See also**
  RApi::OrderParams::bReleaseCondition
## dTriggerPrice

| RApi::OrderParams::dTriggerPrice |
| --- |

This member variable indicates the trigger price of the order to be placed. It is ignored for market and limit orders.
**See also**
  RApi::sORDER_TYPE_LMT_IF_TOUCHED     RApi::sORDER_TYPE_MKT_IF_TOUCHED     RApi::sORDER_TYPE_STOP_LIMIT     RApi::sORDER_TYPE_STOP_MARKET
## iCancelAfter

| RApi::OrderParams::iCancelAfter |
| --- |

This member variable specifies the whole number of seconds when the order is to be canceled after the order is open. This value is only used if OrderParams::bCancelAfter is true. Otherwise it is ignored.
## iCancelSsboe

| RApi::OrderParams::iCancelSsboe |
| --- |

Specifies the seconds portion of a 'cancel at' timestamp for when the infrastructure should send a cancel request for the order. It is only used if OrderParams::bCancelSsboe is true. Otherwise this value is ignored.

**See also**
  RApi::OrderParams::bCancelSsboe     RApi::OrderParams::bCancelUsecs     RApi::OrderParams::iCancelSsboe     RApi::OrderParams::iCancelSsboe
## iCancelUsecs

| RApi::OrderParams::iCancelUsecs |
| --- |

Specifies the microseconds portion of the 'cancel at' timestamp. It is only submited if OrderParams::bCancelUsecs is true. Otherwise this value is ignored.
**See also**
  RApi::OrderParams::bCancelSsboe     RApi::OrderParams::bCancelUsecs     RApi::OrderParams::iCancelSsboe     RApi::OrderParams::iCancelSsboe
## iReleaseConditionPriceCmpOperator

| RApi::OrderParams::iReleaseConditionPriceCmpOperator |
| --- |

Specifies the comparison operator to use for the release condition on price, if the release condition is enabled.
**See also**
  RApi::OP_NONE     RApi::OP_EQUAL_TO     RApi::OP_LESS_THAN     RApi::OP_GREATER_THAN     RApi::OP_LESS_THAN_OR_EQUAL_TO     RApi::OP_GREATER_THAN_OR_EQUAL_TO     RApi::OP_NOT_EQUAL_TO     RApi::OP_NOT_GREATER_THAN     RApi::OP_NOT_LESS_THAN    RApi::OrderParams::bReleaseCondition
## iReleaseConditionPriceId

| RApi::OrderParams::iReleaseConditionPriceId |
| --- |

Identifies which price in the market data stream to be used for the release condition comparison, if the release condition is enabled.
**See also**
  BEST_BID_PRICE     BEST_ASK_PRICE     RApi::OrderParams::bReleaseCondition
## iReleaseConditionSizeCmpOperator

| RApi::OrderParams::iReleaseConditionSizeCmpOperator |
| --- |

Specifies the comparison operator to use for the release condition on size, if the release condition is enabled.
**See also**
  RApi::OP_NONE     RApi::OP_EQUAL_TO     RApi::OP_LESS_THAN     RApi::OP_GREATER_THAN     RApi::OP_LESS_THAN_OR_EQUAL_TO     RApi::OP_GREATER_THAN_OR_EQUAL_TO     RApi::OP_NOT_EQUAL_TO     RApi::OP_NOT_GREATER_THAN     RApi::OP_NOT_LESS_THAN    RApi::OrderParams::bReleaseCondition
## iReleaseConditionSizeId

| RApi::OrderParams::iReleaseConditionSizeId |
| --- |

Identifies which size in the market data stream to be used for comparison, if the release condition is enabled.
**See also**
  BEST_BID_SIZE     BEST_ASK_SIZE     RApi::OrderParams::bReleaseCondition
## iReleaseSsboe

| RApi::OrderParams::iReleaseSsboe |
| --- |

This member variable specifies the release timestamp that is submited if OrderParams::bReleaseSsboe is true. Otherwise this value is ignored. If this value is specified, the order manager within the infrastructure will wait until the specified time before sending the order to the exchange. This parameter cannot be used in conjunction with OrderParams::sReleaseCommand.
## iReleaseUsecs

| RApi::OrderParams::iReleaseUsecs |
| --- |

This member variable specifies the microseconds portion of the release timestamp that is submited if OrderParams::bReleaseUsecs is true.
 Otherwise this value is ignored.
## iToMarketAfterPartialFillInSeconds

| int OrderParams::iToMarketAfterPartialFillInSeconds |
| --- |

Number of seconds after a partial fill of this order in which this order is configured to be converted to a market order.
**See also**
  OrderParams::bToMarketAfterPartialFillInSeconds     LineInfo::bToMarketAfterPartialFillInSeconds     LineInfo::iToMarketAfterPartialFillInSeconds
## iToMarketAtSsboe

| int OrderParams::iToMarketAtSsboe |
| --- |

Seconds since the beginning of epoch of the timestamp for when this order is to be converted to a market order.
**See also**
  OrderParams::bToMarketAt     OrderParams::iToMarketAtSsboe     OrderParams::iToMarketAtUsecs     LineInfo::bToMarketAt     LineInfo::iToMarketAtSsboe     LineInfo::iToMarketAtUsecs
## iToMarketAtUsecs

| int OrderParams::iToMarketAtUsecs |
| --- |

Microsecond portion of the timestamp for when this order is to be converted to a market order.
**See also**
  OrderParams::bToMarketAt     OrderParams::iToMarketAtSsboe     OrderParams::iToMarketAtUsecs     LineInfo::bToMarketAt     LineInfo::iToMarketAtSsboe     LineInfo::iToMarketAtUsecs
## iTrailByPriceId

| RApi::OrderParams::iTrailByPriceId |
| --- |

If this is a stop or stop limit order, it is possible to have the stop price 'trail' the market. If trailing stops are enabled, this variable specifies which price to trail (last trade, best bid or best ask). It is ignored for other order types.
**See also**
  RApi::BEST_ASK_PRICE     RApi::BEST_BID_PRICE     RApi::TRADE_PRICE     RApi::OrderParams::bTrailingStop     RApi::OrderParams::iTrailByTicks     RApi::OrderParams::sOrderType     RApi::sORDER_TYPE_STOP_LIMIT     RApi::sORDER_TYPE_STOP_MARKET
## iTrailByTicks

| RApi::OrderParams::iTrailByTicks |
| --- |

If this is a stop or stop limit order, it is possible to have the stop price 'trail' the market. If trailing stops are enabled, this variable specifies the number of ticks to trail by. It is ignored for other order types.
**See also**
  RApi::OrderParams::bTrailingStop     RApi::OrderParams::iTrailByPriceId     RApi::OrderParams::sOrderType     RApi::sORDER_TYPE_STOP_LIMIT     RApi::sORDER_TYPE_STOP_MARKET
## iTriggerCmpOperator

| RApi::OrderParams::iTriggerCmpOperator |
| --- |

This value indicates the operator to be used when evaluating the the trigger condition of a market if touched or limit if touched order. It is only used for market if touched and limit if touched orders.
**See also**
  RApi::OP_NONE    RApi::OP_EQUAL_TO     RApi::OP_LESS_THAN     RApi::OP_GREATER_THAN     RApi::OP_LESS_THAN_OR_EQUAL_TO     RApi::OP_GREATER_THAN_OR_EQUAL_TO     RApi::OP_NOT_EQUAL_TO    RApi::OP_NOT_GREATER_THAN     RApi::OP_NOT_LESS_THAN    RApi::sORDER_TYPE_LMT_IF_TOUCHED     RApi::sORDER_TYPE_MKT_IF_TOUCHED
## iTriggerPriceId

| RApi::OrderParams::iTriggerPriceId |
| --- |

This value indicates the type of price to be used when evaluating the the trigger condition. It is only used for market if touched and limit if touched orders.
**See also**
  RApi::BEST_ASK_PRICE     RApi::BEST_BID_PRICE     RApi::TRADE_PRICE    RApi::sORDER_TYPE_LMT_IF_TOUCHED     RApi::sORDER_TYPE_MKT_IF_TOUCHED
## llMaxShowQty

| RApi::OrderParams::llMaxShowQty |
| --- |

This member variable specifies the max show quantity that is submited if OrderParams::bMaxShowQty is true. Otherwise this value is ignored.
## llMinQty

| RApi::OrderParams::llMinQty |
| --- |

This member variable indicates the minimum quantity of the order to be placed. Different exchanges may treat this value differently.

For CME orders, the minimum quantity is only considered for orders using a duration of RApi::sORDER_DURATION_IOC. In this case, setting the minimum quantity equal to the order quantity simulates a FAK-style order.

For EUREX orders, the minimum quantity is not considered.
## llQty

| RApi::OrderParams::llQty |
| --- |

This member variable indicates the quantity of the order to be placed.
## llReleaseConditionSize

| RApi::OrderParams::llReleaseConditionSize |
| --- |

Specifies the size to compare, if the release condition is enabled.
**See also**
  RApi::OrderParams::bReleaseCondition
## pAccount

| RApi::OrderParams::pAccount |
| --- |

This member variable specifies the account on which to place the order. When placing orders AccountInfo::RmsInfo can be NULL.
 **NOTE :** If there are multiple orders being sent via REngine::sendOrderList(), the value of OrderParams::pAccount of the first element in the array will be used for all orders.
## pContext

| RApi::OrderParams::pContext |
| --- |

This member variable specifies a user-defined context that will be passed with each order callback pertaining to this order. This pointer is specific to each instance of REngine.
## sBuySellType

| RApi::OrderParams::sBuySellType |
| --- |

This member variable specifies whether the order to be placed is a buy or sell. Valid values are :
**See also**
  RApi::sBUY_SELL_TYPE_BUY     RApi::sBUY_SELL_TYPE_SELL     RApi::sBUY_SELL_TYPE_SELL_SHORT     RApi::sBUY_SELL_TYPE_SELL_SHORT_EXEMPT
## sDuration

| RApi::OrderParams::sDuration |
| --- |

This member variable indicates the duration of the order to be placed. Valid values are :
**See also**
  RApi::sORDER_DURATION_DAY     RApi::sORDER_DURATION_FOK     RApi::sORDER_DURATION_IOC     RApi::sORDER_DURATION_GTC
## sEntryType

| RApi::OrderParams::sEntryType |
| --- |

This member variable indicates whether this method is being called manually or automatically.
**See also**
  RApi::sORDER_ENTRY_TYPE_AUTO     RApi::sORDER_ENTRY_TYPE_MANUAL
## sExchange

| RApi::OrderParams::sExchange |
| --- |

This member variable specifies the exchange of the instrument on which to place the order.
## sOrderType

| RApi::OrderParams::sOrderType |
| --- |

This member variable specifies the type of order. Valid values are :
**See also**
  RApi::sORDER_TYPE_LIMIT     RApi::sORDER_TYPE_LMT_IF_TOUCHED     RApi::sORDER_TYPE_MARKET     RApi::sORDER_TYPE_MKT_IF_TOUCHED     RApi::sORDER_TYPE_STOP_LIMIT     RApi::sORDER_TYPE_STOP_MARKET
## sReleaseCommand

| RApi::OrderParams::sReleaseCommand |
| --- |

This member variable specifies an optional release command to be associated with this order.
**See also**
  RApi::sRELEASE_CMD_HOLD_ORDER
## sRoutingInstructions

| RApi::OrderParams::sRoutingInstructions |
| --- |

This member variable specifies the routing instructions.
## sTag

| RApi::OrderParams::sTag |
| --- |

This optional value specifies a tag that is persisted with the resultant order by the infrastructure. If specified, this value will be present on subsequent order updates published by the infrastructure.

If this value is empty (tsNCharcb::pData is NULL and tsNCharcb::iDataLen is zero), no tag will be set.

This value differs from OrderParams::sUserMsg in that it cannot be updated with subsequent order operations.

This value differs from OrderParams::sUserTag in that this value is used by R | Trader.
**See also**
  LineInfo::sTag     OrderReport::sTag     LimitOrderParams::sTag     MarketOrderParams::sTag
## sTicker

| RApi::OrderParams::sTicker |
| --- |

This member variable specifies the symbol of the instrument on which to place the order.
## sToMarketOnReject

| RApi::OrderParams::sToMarketOnReject |
| --- |

Indicates that this order should be converted to a market order if rejected by the exchange.

A value of "yes" enables this feature; otherwise leave empty.

If an order fails due to something other than rejection by the exchange (i.e. risk validation failure), the conversion will not happen.
**See also**
  LineInfo::sToMarketOnReject     OrderRejectReport::bReplacementOrderToFollow
## sToMarketWhenLimitPriceTouched

| RApi::OrderParams::sToMarketWhenLimitPriceTouched |
| --- |

Indicates that this order should be converted to a market order when the instrument's trade price touches this order's limit price.

A value of "yes" enables this feature; otherwise leave empty.
**See also**
  LineInfo::sToMarketWhenLimitPriceTouched
## sTradeRoute

| RApi::OrderParams::sTradeRoute |
| --- |

Specifies the trade route. Beginning with version 6.1.0.0 this parameter is required.

What are trade routes and how do I use them?
## sTradingAlgorithm

| RApi::OrderParams::sTradingAlgorithm |
| --- |

Some exchanges may require identification of which algorithm is submitting a particular order/cancel/modify request. This property provides a field for that purpose. In other words, it is an informational field for the exchange.
**See also**
  OrderParams::sTradingAlgorithm     LimitOrderParams::sTradingAlgorithm     MarketOrderParams::sTradingAlgorithm     ModifyOrderParams::sTradingAlgorithm     ModifyLimitOrderParams::sTradingAlgorithm     ModifyStopMarketOrderParams::sTradingAlgorithm     ModifyStopLimitOrderParams::sTradingAlgorithm     REngine::cancelOrder     REngine::cancelOrderList     LineInfo::sTradingAlgorithm
## sTriggerExchange

| RApi::OrderParams::sTriggerExchange |
| --- |

This member variable specifies the exchange of associated with the trigger condition. It is only used for market if touched and limit if touched orders.
**See also**
  RApi::sORDER_TYPE_LMT_IF_TOUCHED     RApi::sORDER_TYPE_MKT_IF_TOUCHED
## sTriggerTicker

| RApi::OrderParams::sTriggerTicker |
| --- |

This member variable specifies the symbol of associated with the trigger condition. It is only used for market if touched and limit if touched orders.
**See also**
  RApi::sORDER_TYPE_LMT_IF_TOUCHED     RApi::sORDER_TYPE_MKT_IF_TOUCHED
## sUserMsg

| RApi::OrderParams::sUserMsg |
| --- |

This optional value specifies a user message that is persisted with the resultant order by the infrastructure. If specified, this value will be present on subsequent order updates published by the infrastructure.

If this value is empty (tsNCharcb::pData is NULL and tsNCharcb::iDataLen is zero), no user msg will be set.

Note : The value can be updated with any subsequent order operation including other instances of R | API and R | Trader.
**See also**
  LineInfo::sUserMsg     OrderReport::sUserMsg     LimitOrderParams::sUserMsg     MarketOrderParams::sUserMsg     ModifyOrderParams::sUserMsg     REngine::cancelOrder()     REngine::cancelOrderList()
## sUserTag

| RApi::OrderParams::sUserTag |
| --- |

This optional value specifies a user tag that is persisted with the resultant order by the infrastructure. If specified, this value will be present on subsequent order updates published by the infrastructure.

If this value is empty (tsNCharcb::pData is NULL and tsNCharcb::iDataLen is zero), no user tag will be set.

This value differs from OrderParams::sUserMsg in that it cannot be updated with subsequent order operations. It can, however, be updated by calling REngine::modifyOrderRefData().

This value differs from OrderParams::sTag in that it is not used by R | Trader. The intent of OrderParams::sUserTag is to allow an end user of R | Trader (or perhaps an application written on top of R | API) to specify a tag that is visible to other clients of the trading platform.
**See also**
  LineInfo::sUserTag     OrderReport::sUserTag     REngine::modifyOrderRefData
## sWindowName

| RApi::OrderParams::sWindowName |
| --- |

This optional value specifies the window or widget name from which this new order request originated. If specified, this value can appear on subsequent order updates in either the WindowName or OriginatorWindowName field. When placing a list of orders, only the first value of WindowName will be used for all orders in the list.
**See also**
  LineInfo::sOriginatorWindowName     LineInfo::sWindowName     OrderReport::sOriginatorWindowName     OrderReport::sWindowName
