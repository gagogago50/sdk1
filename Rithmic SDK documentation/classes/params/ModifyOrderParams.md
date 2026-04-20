> **Namespace:** `RApi`

# RApi::ModifyOrderParams

Public Member Functions | Public Attributes | List of all members  RApi::ModifyOrderParams Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
|  | ModifyOrderParams () |
|  |
|  | ModifyOrderParams (ModifyLimitOrderParams *pParamsIn) |
|  |
|  | ModifyOrderParams (ModifyStopLimitOrderParams *pParamsIn) |
|  |
|  | ModifyOrderParams (ModifyStopMarketOrderParams *pParamsIn) |
|  |
| virtual | ~ModifyOrderParams () |
|  |

| Public Attributes |
| --- |
| bool | bMinQty |
|  |
| bool | bPrice |
|  |
| bool | bQty |
|  |
| bool | bTrailByTicks |
|  |
| bool | bTriggerPrice |
|  |
| double | dPrice |
|  |
| double | dTriggerPrice |
|  |
| int | iTrailByTicks |
|  |
| long long | llMinQty |
|  |
| long long | llQty |
|  |
| AccountInfo * | pAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb | sDuration |
|  |
| tsNCharcb | sEntryType |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sOrderNum |
|  |
| tsNCharcb | sOrderType |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sTradingAlgorithm |
|  |
| tsNCharcb | sTriggerExchange |
|  |
| tsNCharcb | sTriggerTicker |
|  |
| tsNCharcb | sUserMsg |
|  |
| tsNCharcb | sWindowName |
|  |

## Detailed Description

This class encapsulates information needed to modify an order.

If a trigger price is specified and the order type is MIT/LIT, then the trigger exchange and trigger ticker must be specified as well. The trigger price will be assumed to be a price for the trigger exch/ticker.

If a trigger price is specified and the order type is not MIT/LIT, then the trigger price is assumed to be a price for the exchange and ticker.

Changing other parameters of MIT/LIT orders is not supported. In these cases, the recommendation is to cancel and replace the MIT/LIT order.
## Constructor & Destructor Documentation

## ModifyOrderParams() [1/4]

| ModifyOrderParams::ModifyOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members using ModifyOrderParams::clearHandles().
## ModifyOrderParams() [2/4]
     **
| ModifyOrderParams::ModifyOrderParams | ( | ModifyLimitOrderParams * | pParamsIn | ) |  |
| --- | --- | --- | --- | --- | --- |

This constructor initializes all of the members using the values from ModifyLimitOrderParams. Memory referenced by pParamsIn will not be copied.
## ModifyOrderParams() [3/4]
     **
| ModifyOrderParams::ModifyOrderParams | ( | ModifyStopLimitOrderParams * | pParamsIn | ) |  |
| --- | --- | --- | --- | --- | --- |

This constructor initializes all of the members using the values from ModifyStopLimitOrderParams. Memory referenced by pParamsIn will not be copied.
## ModifyOrderParams() [4/4]
     **
| ModifyOrderParams::ModifyOrderParams | ( | ModifyStopMarketOrderParams * | pParamsIn | ) |  |
| --- | --- | --- | --- | --- | --- |

This constructor initializes all of the members using the values from ModifyStopMarketOrderParams. Memory referenced by pParamsIn will not be copied.
## ~ModifyOrderParams()

| ModifyOrderParams::~ModifyOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| ModifyOrderParams::~ModifyOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int ModifyOrderParams::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine clears all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. This method is used internally by the constructor.
## Member Data Documentation

## bMinQty

| bool RApi::ModifyOrderParams::bMinQty |
| --- |

## bPrice

| RApi::ModifyOrderParams::bPrice |
| --- |

This flag should be set to true when specifying a value for RApi::ModifyOrderParams::dPrice. If this flag is false, the value of RApi::ModifyOrderParams::dPrice will be ignored.
## bQty

| bool RApi::ModifyOrderParams::bQty |
| --- |

## bTrailByTicks

| RApi::ModifyOrderParams::bTrailByTicks |
| --- |

If this is a stop or stop limit order, it is possible to have the stop price 'trail' the market. This variable specifies that the number of ticks to trail by should be changed. A stop order for which trailing stops is disabled cannot have the trailing functionality enabled by setting this flag to true.
**See also**
  RApi::ModifyOrderParams::iTrailByTicks
## bTriggerPrice

| RApi::ModifyOrderParams::bTriggerPrice |
| --- |

This flag should be set to true when specifying a value for RApi::ModifyOrderParams::dTriggerPrice. If this flag is false, the value of RApi::ModifyOrderParams::dTriggerPrice will be ignored.
## dPrice

| RApi::ModifyOrderParams::dPrice |
| --- |

This member variable indicates the desired price of the order to be modified. Not all order types require a price, such as variations of market orders.
**See also**
  RApi::sORDER_TYPE_MARKET     RApi::sORDER_TYPE_STOP_MARKET     RApi::sORDER_TYPE_MKT_IF_TOUCHED
## dTriggerPrice

| RApi::ModifyOrderParams::dTriggerPrice |
| --- |

This member variable indicates the desired price at which the order is to be triggered. This price is also used when evaluating the trigger condition associated with 'market if touched' and 'limit if touched' orders.
**See also**
  RApi::sORDER_TYPE_STOP_LIMIT     RApi::sORDER_TYPE_STOP_MARKET     RApi::sORDER_TYPE_LMT_IF_TOUCHED     RApi::sORDER_TYPE_MKT_IF_TOUCHED
## iTrailByTicks

| RApi::ModifyOrderParams::iTrailByTicks |
| --- |

If this is a stop or stop limit order, it is possible to have the stop price 'trail' the market. This variable specifies the number of ticks to trail by. This value is ignored if the ModifyOrderParams::bTrailByTicks is false.
**See also**
  RApi::ModifyOrderParams::iTrailByTicks
## llMinQty

| RApi::ModifyOrderParams::llMinQty |
| --- |

This member variable indicates the desired minimum quantity of the order to be modified.
## llQty

| RApi::ModifyOrderParams::llQty |
| --- |

This member variable specifies the desired total quantity for the order, including fills that have already occurred for this order.
 If the quantity specified is less than or equal to the current quantity filled, then the remaining quantity of the order is cancelled. The completion reason for the order will be Partially Filled, Balance Canceled (PFBC). If the quantity specified is greater than the quantity already filled, then the difference between the filled quantity and the quantity specified by ModifyOrderParams::llQty will be the quantity working at the exchange.
**See also**
  RApi::sCOMPLETION_REASON_PFBC
## pAccount

| RApi::ModifyOrderParams::pAccount |
| --- |

This member variable specifies the account used to modify the order.
## pContext

| RApi::ModifyOrderParams::pContext |
| --- |

This member variable specifies a user-defined context that will be passed with each order callback pertaining to this order. If this is not specified, any existing context associated with this order, if any, will be kept.
## sDuration

| RApi::ModifyOrderParams::sDuration |
| --- |

This member variable specifies the desired duration of the order to modify.
**See also**
  RApi::sORDER_DURATION_DAY     RApi::sORDER_DURATION_FOK     RApi::sORDER_DURATION_IOC     RApi::sORDER_DURATION_GTC
## sEntryType

| RApi::ModifyOrderParams::sEntryType |
| --- |

This member variable indicates whether this method is being called manually or automatically. If a value is not specified, REngine::modifyOrder() will return 'bad input' (6).
**See also**
  RApi::sORDER_ENTRY_TYPE_AUTO     RApi::sORDER_ENTRY_TYPE_MANUAL
## sExchange

| RApi::ModifyOrderParams::sExchange |
| --- |

This member variable specifies the exchange of the original order to modify.
## sOrderNum

| RApi::ModifyOrderParams::sOrderNum |
| --- |

This member variable specifies the order number of the order to be modified.
## sOrderType

| RApi::ModifyOrderParams::sOrderType |
| --- |

This member variable specifies the desired order type for this order.
**See also**
  RApi::sORDER_TYPE_LIMIT     RApi::sORDER_TYPE_MARKET     RApi::sORDER_TYPE_STOP_LIMIT     RApi::sORDER_TYPE_STOP_MARKET     RApi::sORDER_TYPE_LMT_IF_TOUCHED     RApi::sORDER_TYPE_MKT_IF_TOUCHED
## sTicker

| RApi::ModifyOrderParams::sTicker |
| --- |

This member variable specifies the symbol of the original order to modify.
## sTradingAlgorithm

| RApi::ModifyOrderParams::sTradingAlgorithm |
| --- |

Some exchanges may require identification of which algorithm is submitting a particular order/cancel/modify request. This property provides a field for that purpose. In other words, it is an informational field for the exchange.
**See also**
  OrderParams::sTradingAlgorithm     LimitOrderParams::sTradingAlgorithm     MarketOrderParams::sTradingAlgorithm     ModifyOrderParams::sTradingAlgorithm     ModifyLimitOrderParams::sTradingAlgorithm     ModifyStopMarketOrderParams::sTradingAlgorithm     ModifyStopLimitOrderParams::sTradingAlgorithm     REngine::cancelOrder     REngine::cancelOrderList     LineInfo::sTradingAlgorithm
## sTriggerExchange

| RApi::ModifyOrderParams::sTriggerExchange |
| --- |

This member variable specifies the exchange of associated with the trigger condition. It should be set to empty (null, zero) if the value is not being used. It is required for if touched orders.
**See also**
  RApi::sORDER_TYPE_LMT_IF_TOUCHED     RApi::sORDER_TYPE_MKT_IF_TOUCHED
## sTriggerTicker

| RApi::ModifyOrderParams::sTriggerTicker |
| --- |

This member variable specifies the symbol of associated with the trigger condition. It should be set to empty (null, zero) if the value is not being used. It is required for if touched orders.
**See also**
  RApi::sORDER_TYPE_LMT_IF_TOUCHED     RApi::sORDER_TYPE_MKT_IF_TOUCHED
## sUserMsg

| RApi::ModifyOrderParams::sUserMsg |
| --- |

This optional variable specifies a user message that is persisted with the order request in the infrastructure. Unlike MarketOrderParams::pContext, this context string is not specific to an instance of the REngine. If this value is empty (sUserMsg.pData is NULL and sUserMsg.iDataLen is zero), then any existing user message (MarketOrderParams::sUserMsg or
 LimitOrderParams::sUserMsg, or ModifyOrderParams::sUserMsg) will remain unmodified.
## sWindowName

| RApi::ModifyOrderParams::sWindowName |
| --- |

This optional value specifies the window or widget name from which this modify order request originated.
**See also**
  LineInfo::sWindowName     OrderReport::sWindowName
