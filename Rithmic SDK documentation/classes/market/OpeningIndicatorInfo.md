> **Namespace:** `RApi`

# RApi::OpeningIndicatorInfo

Public Member Functions | Public Attributes | List of all members  RApi::OpeningIndicatorInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | OpeningIndicatorInfo () |
|  |
| virtual | ~OpeningIndicatorInfo () |
|  |

| Public Attributes |
| --- |
| bool | bPriceFlag |
|  |
| bool | bVolumeFlag |
|  |
| double | dPrice |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| long long | llVolume |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents opening indicators.

The OpeningIndicatorInfo class is used to pass opening indicator price information received as a result of calls to REngine::subscribe() requests via the RCallbacks::OpeningIndicator() callback. Not all exchanges or instruments make use of opening indicators.
## Constructor & Destructor Documentation

## OpeningIndicatorInfo()

| OpeningIndicatorInfo::OpeningIndicatorInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~OpeningIndicatorInfo()

| OpeningIndicatorInfo::~OpeningIndicatorInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OpeningIndicatorInfo::~OpeningIndicatorInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int OpeningIndicatorInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPriceFlag

| OpeningIndicatorInfo::bPriceFlag |
| --- |

This member variable specifies if OpeningIndicatorInfo::dPrice is defined or not. If the value is true, then the price is defined. If the value is false, the price is undefined.
## bVolumeFlag

| OpeningIndicatorInfo::bVolumeFlag |
| --- |

This member variable specifies if OpeningIndicatorInfo::llVolume is defined or not. If the value is true, then the volume is defined. If the value is false, the volume is undefined.
## dPrice

| OpeningIndicatorInfo::dPrice |
| --- |

This member variable specifies the opening indicator price.
## iSsboe

| OpeningIndicatorInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| OpeningIndicatorInfo::iType |
| --- |

This member variable indicates if the open is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| OpeningIndicatorInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## llVolume

| OpeningIndicatorInfo::llVolume |
| --- |

This member variable specifies the opening indicator volume.
## sExchange

| OpeningIndicatorInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the opening indicator.
## sTicker

| OpeningIndicatorInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the opening indicator.
