> **Namespace:** `RApi`

# RApi::ModifyStopMarketOrderParams

Public Member Functions | Public Attributes | List of all members  RApi::ModifyStopMarketOrderParams Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
|  | ModifyStopMarketOrderParams () |
|  |
| virtual | ~ModifyStopMarketOrderParams () |
|  |

| Public Attributes |
| --- |
| double | dTriggerPrice |
|  |
| long long | llQty |
|  |
| AccountInfo * | pAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb | sEntryType |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sOrderNum |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sTradingAlgorithm |
|  |
| tsNCharcb | sUserMsg |
|  |

## Detailed Description

This class encapsulates information needed to modify a stop limit order.
## Constructor & Destructor Documentation

## ModifyStopMarketOrderParams()

| ModifyStopMarketOrderParams::ModifyStopMarketOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members using ModifyStopMarketOrderParams::clearHandles().
## ~ModifyStopMarketOrderParams()

| ModifyStopMarketOrderParams::~ModifyStopMarketOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| ModifyStopMarketOrderParams::~ModifyStopMarketOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int ModifyStopMarketOrderParams::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine clears all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. This method is used internally by the constructor.
## Member Data Documentation

## dTriggerPrice

| RApi::ModifyStopMarketOrderParams::dTriggerPrice |
| --- |

This member variable indicates the desired trigger price of the order to be modifid.
## llQty

| RApi::ModifyStopMarketOrderParams::llQty |
| --- |

This member variable specifies the desired total quantity for the order, including fills that have already occurred for this order.
 If the quantity specified is less than or equal to the current quantity filled, then the remaining quantity of the order is cancelled. The completion reason for the order will be Partially Filled, Balance Canceled (PFBC). If the quantity specified is greater than the quantity already filled, then the difference between the filled quantity and the quantity specified by ModifyStopMarketOrderParams::llQty will be the quantity working at the exchange.
**See also**
  RApi::sCOMPLETION_REASON_PFBC
## pAccount

| RApi::ModifyStopMarketOrderParams::pAccount |
| --- |

This member variable specifies the account used to modify the order.
## pContext

| RApi::ModifyStopMarketOrderParams::pContext |
| --- |

This member variable specifies a user-defined context that will be passed with each order callback pertaining to this order. If this is not specified, any existing context associated with this order, if any, will be kept.
## sEntryType

| RApi::ModifyStopMarketOrderParams::sEntryType |
| --- |

This member variable indicates whether this method is being called manually or automatically.
**See also**
  RApi::sORDER_ENTRY_TYPE_AUTO     RApi::sORDER_ENTRY_TYPE_MANUAL
## sExchange

| RApi::ModifyStopMarketOrderParams::sExchange |
| --- |

This member variable specifies the exchange of the original order to modify.
## sOrderNum

| RApi::ModifyStopMarketOrderParams::sOrderNum |
| --- |

This member variable specifies the order number of the order to be modifid.
## sTicker

| RApi::ModifyStopMarketOrderParams::sTicker |
| --- |

This member variable specifies the symbol of the original order to modify.
## sTradingAlgorithm

| RApi::ModifyStopMarketOrderParams::sTradingAlgorithm |
| --- |

Some exchanges may require identification of which algorithm is submitting a particular order/cancel/modify request. This property provides a field for that purpose. In other words, it is an informational field for the exchange.
**See also**
  OrderParams::sTradingAlgorithm     LimitOrderParams::sTradingAlgorithm     MarketOrderParams::sTradingAlgorithm     ModifyOrderParams::sTradingAlgorithm     ModifyLimitOrderParams::sTradingAlgorithm     ModifyStopMarketOrderParams::sTradingAlgorithm     ModifyStopLimitOrderParams::sTradingAlgorithm     REngine::cancelOrder     REngine::cancelOrderList     LineInfo::sTradingAlgorithm
## sUserMsg

| RApi::ModifyStopMarketOrderParams::sUserMsg |
| --- |

This optional variable specifies a user message that is persisted with the order request in the infrastructure. Unlike MarketOrderParams::pContext, this context string is not specific to an instance of the REngine. If this value is empty (sUserMsg.pData is NULL and sUserMsg.iDataLen is zero), then any existing user message (MarketOrderParams::sUserMsg or
 LimitOrderParams::sUserMsg, or ModifyStopMarketOrderParams::sUserMsg) will remain unmodified.
