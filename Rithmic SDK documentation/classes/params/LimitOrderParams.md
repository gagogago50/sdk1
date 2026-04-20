> **Namespace:** `RApi`

# RApi::LimitOrderParams

Public Member Functions | Public Attributes | List of all members  RApi::LimitOrderParams Class Reference

`#include <RApiPlus.h>`  Inheritance diagram for RApi::LimitOrderParams:

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
|  | LimitOrderParams () |
|  |
| virtual | ~LimitOrderParams () |
|  |

| Public Attributes |
| --- |
| double | dPrice |
|  |
| long long | llQty |
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
| tsNCharcb | sRoutingInstructions |
|  |
| tsNCharcb | sTag |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sTradeRoute |
|  |
| tsNCharcb | sTradingAlgorithm |
|  |
| tsNCharcb | sUserMsg |
|  |

## Detailed Description

This class encapsulates information needed to submit a limit order.
## Constructor & Destructor Documentation

## LimitOrderParams()

| LimitOrderParams::LimitOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members using LimitOrderParams::clearHandles().
## ~LimitOrderParams()

| LimitOrderParams::~LimitOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| LimitOrderParams::~LimitOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int LimitOrderParams::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine clears all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. This method is used internally by the constructor.
## Member Data Documentation

## dPrice

| RApi::LimitOrderParams::dPrice |
| --- |

This member variable indicates the price of the order to be placed.
## llQty

| RApi::LimitOrderParams::llQty |
| --- |

This member variable indicates the quantity of the order to be placed.
## pAccount

| RApi::LimitOrderParams::pAccount |
| --- |

This member variable specifies the account on which to place the order. When placing orders AccountInfo::RmsInfo can be NULL.
## pContext

| RApi::LimitOrderParams::pContext |
| --- |

This member variable specifies a user-defined context that will be passed with each order callback pertaining to this order. This pointer is specific to each instance of REngine.
## sBuySellType

| RApi::LimitOrderParams::sBuySellType |
| --- |

This member variable specifies whether the order to be placed is a buy or sell. Not all values are supported by all exchanges, and new values may be introduced which are not part of this list.
**See also**
  RApi::sBUY_SELL_TYPE_BUY     RApi::sBUY_SELL_TYPE_SELL     RApi::sBUY_SELL_TYPE_SELL_SHORT     RApi::sBUY_SELL_TYPE_SELL_SHORT_EXEMPT
## sDuration

| RApi::LimitOrderParams::sDuration |
| --- |

This member variable indicates the duration of the order to be placed. Not all values are supported by all exchanges, and new values may be introduced which are not part of this list.
**See also**
  RApi::sORDER_DURATION_DAY     RApi::sORDER_DURATION_FOK     RApi::sORDER_DURATION_IOC     RApi::sORDER_DURATION_GTC
## sEntryType

| RApi::LimitOrderParams::sEntryType |
| --- |

This member variable indicates whether this method is being called manually or automatically.
**See also**
  RApi::sORDER_ENTRY_TYPE_AUTO     RApi::sORDER_ENTRY_TYPE_MANUAL
## sExchange

| RApi::LimitOrderParams::sExchange |
| --- |

This member variable specifies the exchange of the instrument on which to place the order.
## sRoutingInstructions

| RApi::LimitOrderParams::sRoutingInstructions |
| --- |

This member variable specifies the routing instructions.
## sTag

| RApi::LimitOrderParams::sTag |
| --- |

This optional value specifies a tag that is persisted with the resultant order by the infrastructure. If specified, this value will be present on subsequent order updates published by the infrastructure.

If this value is empty (tsNCharcb::pData is NULL and tsNCharcb::iDataLen is zero), no tag will be set.

This value differs from OrderParams::sUserMsg in that it cannot be updated with subsequent order operations.

This value differs from OrderParams::sUserTag in that this value is used by R | Trader.
**See also**
  LineInfo::sTag     OrderReport::sTag     OrderParams::sTag     MarketOrderParams::sTag
## sTicker

| RApi::LimitOrderParams::sTicker |
| --- |

This member variable specifies the symbol of the instrument on which to place the order.
## sTradeRoute

| RApi::LimitOrderParams::sTradeRoute |
| --- |

Specifies the trade route. Beginning with version 6.1.0.0 this parameter is required.

What are trade routes and how do I use them?
## sTradingAlgorithm

| RApi::LimitOrderParams::sTradingAlgorithm |
| --- |

Some exchanges may require identification of which algorithm is submitting a particular order/cancel/modify request. This property provides a field for that purpose. In other words, it is an informational field for the exchange.
**See also**
  OrderParams::sTradingAlgorithm     LimitOrderParams::sTradingAlgorithm     MarketOrderParams::sTradingAlgorithm     ModifyOrderParams::sTradingAlgorithm     ModifyLimitOrderParams::sTradingAlgorithm     ModifyStopMarketOrderParams::sTradingAlgorithm     ModifyStopLimitOrderParams::sTradingAlgorithm     REngine::cancelOrder     REngine::cancelOrderList     LineInfo::sTradingAlgorithm
## sUserMsg

| RApi::LimitOrderParams::sUserMsg |
| --- |

This optional variable specifies a user message that is persisted with the order request in the infrastructure. Unlike LimitOrderParams::pContext, this context string is not specific to an instance of the REngine. If this value is empty (sUserMsg.pData is NULL and sUserMsg.iDataLen is zero), then any existing user message (MarketOrderParams::sUserMsg or ModifyOrderParams::sUserMsg) will remain unmodified.
