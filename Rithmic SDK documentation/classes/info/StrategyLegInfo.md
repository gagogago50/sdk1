> **Namespace:** `RApi`

# RApi::StrategyLegInfo

Public Member Functions | Public Attributes | List of all members  RApi::StrategyLegInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | StrategyLegInfo () |
|  |
| virtual | ~StrategyLegInfo () |
|  |

| Public Attributes |
| --- |
| int | iRatio |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sInstrumentType |
|  |
| tsNCharcb | sProductCode |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents the definition of one leg of a strategy.

The StrategyLegInfo class is used to pass information about one leg of a multi-leg strategy (StrategyInfo).
**See also**
  StrategyInfo     StrategyListInfo     REngine::getStrategyList()     REngine::getStrategyInfo()     RCallbacks::Strategy()     RCallbacks::StrategyList()
## Constructor & Destructor Documentation

## StrategyLegInfo()

| StrategyLegInfo::StrategyLegInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~StrategyLegInfo()

| StrategyLegInfo::~StrategyLegInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| StrategyLegInfo::~StrategyLegInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int StrategyLegInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## dump()
     **
| int StrategyLegInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## iRatio

| StrategyLegInfo::iRatio |
| --- |

The ratio of this leg as a component of the overall strategy.
## sExchange

| StrategyLegInfo::sExchange |
| --- |

The exchange of the leg instrument.
## sInstrumentType

| StrategyLegInfo::sInstrumentType |
| --- |

Instrument type of the leg instrument.
## sProductCode

| StrategyLegInfo::sProductCode |
| --- |

The product code of the leg instrument.
## sTicker

| StrategyLegInfo::sTicker |
| --- |

The symbol of the leg instrument.
