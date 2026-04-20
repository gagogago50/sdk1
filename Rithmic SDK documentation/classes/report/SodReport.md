> **Namespace:** `RApi`

# RApi::SodReport

Public Member Functions | Public Attributes | List of all members  RApi::SodReport Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | SodReport () |
|  |
| virtual | ~SodReport () |
|  |

| Public Attributes |
| --- |
| double | dPrevClosePrice |
|  |
| int | iSsboe |
|  |
| long long | llCarriedSize |
|  |
| AccountInfo | oAccount |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sReportType |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

An instance of this class represents a position and close price of an instrument when the trading day has ended. It is possible that different instruments on the same exchange have different ending times for a given trading day.
## Constructor & Destructor Documentation

## SodReport()

| SodReport::SodReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~SodReport()

| SodReport::~SodReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| SodReport::~SodReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## clearHandles()
    **
| int SodReport::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. The lSize member variable is initialized to zero.
## dump()
     **
| int SodReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the position information to stdout. If a tsNCharcb has an iDataLen value of MNM_EMPTY_DATA_ITEM_LEN, then the string "<empty>" will be printed.
## Member Data Documentation

## dPrevClosePrice

| SodReport::dPrevClosePrice |
| --- |

This member variable represents the close price from the previous trading day, and pertains to the llCarriedSize.
## iSsboe

| SodReport::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970)
## llCarriedSize

| SodReport::llCarriedSize |
| --- |

This member variable represents the position held since the previous trading day's session for the indicated instrument. A negative value indicates a short position, a positive value indicates a long position, and a value of zero indicates a flat position.
## oAccount

| SodReport::oAccount |
| --- |

This member variable respresents the account associated with this position.
## sExchange

| SodReport::sExchange |
| --- |

This member variable contains the exchange corresponding to the position information.
## sReportType

| SodReport::sReportType |
| --- |

String indicating the report type.
## sTicker

| SodReport::sTicker |
| --- |

This member variable contains the symbol corresponding to the position information.
