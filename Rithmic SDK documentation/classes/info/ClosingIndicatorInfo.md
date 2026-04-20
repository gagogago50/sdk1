> **Namespace:** `RApi`

# RApi::ClosingIndicatorInfo

Public Member Functions | Public Attributes | List of all members  RApi::ClosingIndicatorInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | ClosingIndicatorInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~ClosingIndicatorInfo () |
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

This class represents closing indicators.

The ClosingIndicatorInfo class is used to pass closing indicator price information received as a result of calls to REngine::subscribe() requests via the RCallbacks::ClosingIndicator() callback. Not all exchanges or instruments make use of closing indicators.
## Constructor & Destructor Documentation

## ClosingIndicatorInfo()

| ClosingIndicatorInfo::ClosingIndicatorInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~ClosingIndicatorInfo()

| ClosingIndicatorInfo::~ClosingIndicatorInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| ClosingIndicatorInfo::~ClosingIndicatorInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int ClosingIndicatorInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPriceFlag

| ClosingIndicatorInfo::bPriceFlag |
| --- |

This member variable specifies if ClosingIndicatorInfo::dPrice is defined or not. If the value is true, then the price is defined. If the value is false, the price is undefined.
## dPrice

| ClosingIndicatorInfo::dPrice |
| --- |

This member variable specifies the closing indicator price.
## iSsboe

| ClosingIndicatorInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| ClosingIndicatorInfo::iType |
| --- |

This member variable indicates if the close is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| ClosingIndicatorInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| ClosingIndicatorInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the closing indicator.
## sTicker

| ClosingIndicatorInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the closing indicator.
