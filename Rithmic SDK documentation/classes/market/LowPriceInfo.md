> **Namespace:** `RApi`

# RApi::LowPriceInfo

Public Member Functions | Public Attributes | List of all members  RApi::LowPriceInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | LowPriceInfo () |
|  |
| virtual | ~LowPriceInfo () |
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

This class represents low information.

The LowPriceInfo class is used to pass the daily low price received as a result of calls to REngine::subscribe() requests via the RCallbacks::LowPrice() callback.
## Constructor & Destructor Documentation

## LowPriceInfo()

| LowPriceInfo::LowPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~LowPriceInfo()

| LowPriceInfo::~LowPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| LowPriceInfo::~LowPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int LowPriceInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPriceFlag

| LowPriceInfo::bPriceFlag |
| --- |

This member variable specifies if LowPriceInfo::dPrice is defined or not. If the value is true, then the price is defined. If the value is false, the price is undefined. A low price may be undefined if the trading session is closed, or if the exchange does not publish this information.
## dPrice

| LowPriceInfo::dPrice |
| --- |

This member variable specifies the low price.
## iSsboe

| LowPriceInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| LowPriceInfo::iType |
| --- |

This member variable indicates if the low is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| LowPriceInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| LowPriceInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the low price.
## sTicker

| LowPriceInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the low price.
