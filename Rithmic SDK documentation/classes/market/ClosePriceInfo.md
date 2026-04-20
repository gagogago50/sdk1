> **Namespace:** `RApi`

# RApi::ClosePriceInfo

Public Member Functions | Public Attributes | List of all members  RApi::ClosePriceInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | ClosePriceInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~ClosePriceInfo () |
|  |

| Public Attributes |
| --- |
| bool | bPriceFlag |
|  |
| double | dPrice |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents close information.

The ClosePriceInfo class is used to pass close price information received as a result of calls to REngine::subscribe() via RCallbacks::ClosePrice().
## Constructor & Destructor Documentation

## ClosePriceInfo()

| ClosePriceInfo::ClosePriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~ClosePriceInfo()

| ClosePriceInfo::~ClosePriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| ClosePriceInfo::~ClosePriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int ClosePriceInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPriceFlag

| ClosePriceInfo::bPriceFlag |
| --- |

This member variable specifies if ClosePriceInfo::dPrice is defined or not. If the value is true, then the price is defined. If the value is false, the price is undefined. It is possible that a price is undefined if the exchange does not publish this information.
## dPrice

| ClosePriceInfo::dPrice |
| --- |

This member variable specifies the close price.
## iSsboe

| ClosePriceInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| ClosePriceInfo::iType |
| --- |

This member variable indicates if the close is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| ClosePriceInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| ClosePriceInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the close.
## sTicker

| ClosePriceInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the close.
