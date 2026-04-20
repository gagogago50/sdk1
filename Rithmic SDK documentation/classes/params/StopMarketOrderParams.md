> **Namespace:** `RApi`

# RApi::StopMarketOrderParams

Public Member Functions | Public Attributes | List of all members  RApi::StopMarketOrderParams Class Reference

`#include <RApiPlus.h>`  Inheritance diagram for RApi::StopMarketOrderParams:

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
|  | StopMarketOrderParams () |
|  |
| virtual | ~StopMarketOrderParams () |
|  |
| Public Member Functions inherited from RApi::MarketOrderParams |
| int | clearHandles (int *aiCode) |
|  |
|  | MarketOrderParams () |
|  |
| virtual | ~MarketOrderParams () |
|  |

| Public Attributes |
| --- |
| double | dTriggerPrice |
|  |
| Public Attributes inherited from RApi::MarketOrderParams |
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

This class encapsulates information needed to submit a stop limit order.
## Constructor & Destructor Documentation

## StopMarketOrderParams()

| StopMarketOrderParams::StopMarketOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~StopMarketOrderParams()

| StopMarketOrderParams::~StopMarketOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| StopMarketOrderParams::~StopMarketOrderParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int StopMarketOrderParams::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine clears all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. (Internally used by the constructor.)
## Member Data Documentation

## dTriggerPrice

| RApi::StopMarketOrderParams::dTriggerPrice |
| --- |

This member variable indicates the trigger price at which to place the market order.
