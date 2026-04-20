> **Namespace:** `RApi`

# RApi::StrategyInfo

Public Member Functions | Public Attributes | List of all members  RApi::StrategyInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | StrategyInfo () |
|  |
| virtual | ~StrategyInfo () |
|  |

| Public Attributes |
| --- |
| StrategyLegInfo * | asLegArray |
|  |
| int | iLegArrayLen |
|  |
| int | iRpCode |
|  |
| void * | pContext |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sProductCode |
|  |
| tsNCharcb | sRpCode |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sType |
|  |

## Detailed Description

This class represents the definition of a multi-leg strategy (spread).

An StrategyInfo object is used to present a multi-leg spread, with the ratios of each leg. The legs are presented as an array of StrategyLegInfos. This information is retrieved using REngine::getStrategyInfo().
**See also**
  StrategyInfo     StrategyListInfo     REngine::getStrategyList()     REngine::getStrategyInfo()     RCallbacks::Strategy()     RCallbacks::StrategyList()
## Constructor & Destructor Documentation

## StrategyInfo()

| StrategyInfo::StrategyInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~StrategyInfo()

| StrategyInfo::~StrategyInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| StrategyInfo::~StrategyInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int StrategyInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## dump()
     **
| int StrategyInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## asLegArray

| StrategyInfo::asLegArray |
| --- |

An array of StrategyLegInfos, each representing a leg of the strategy.
## iLegArrayLen

| StrategyInfo::iLegArrayLen |
| --- |

The length of the array asLegArray.
## iRpCode

| StrategyInfo::iRpCode |
| --- |

The response code associated with the response to REngine::getStrategyInfo().
## pContext

| StrategyInfo::pContext |
| --- |

The context value passed when calling REngine::getStrategyInfo() is returned in this variable.
## sExchange

| StrategyInfo::sExchange |
| --- |

The exchange of the strategy.
## sProductCode

| StrategyInfo::sProductCode |
| --- |

The product code of the strategy.
## sRpCode

| StrategyInfo::sRpCode |
| --- |

The string equivalent of the response code StrategyInfo::iRpCode. If StrategyInfo::iRpCode equals API_OK, this string may be empty.
## sTicker

| StrategyInfo::sTicker |
| --- |

The symbol of the strategy.
## sType

| StrategyInfo::sType |
| --- |

Strategy type of the strategy.
