> **Namespace:** `RApi`

# RApi::HighBidPriceInfo

Public Member Functions | Public Attributes | List of all members  RApi::HighBidPriceInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | HighBidPriceInfo () |
|  |
| virtual | ~HighBidPriceInfo () |
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

This class represents high bid price information.

The HighBidPriceInfo class is used to pass the current trading session's highest bid price. One can subscribe to highest bid price data by calling REngine::subscribe() with the MD_HIGH_BID_LOW_ASK flag enabled. Instances of this class will be passed via RCallbacks::HighBidPrice().
## Constructor & Destructor Documentation

## HighBidPriceInfo()

| HighBidPriceInfo::HighBidPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~HighBidPriceInfo()

| HighBidPriceInfo::~HighBidPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| HighBidPriceInfo::~HighBidPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int HighBidPriceInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPriceFlag

| HighBidPriceInfo::bPriceFlag |
| --- |

This member variable specifies if HighBidPriceInfo::dPrice is defined or not. If the value is true, then the price is defined. If the value is false, the price is undefined. A price may be undefined if the trading session is closed, or if the exchange does not publish this information.
## dPrice

| HighBidPriceInfo::dPrice |
| --- |

Highest bid price.
## iSsboe

| HighBidPriceInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| HighBidPriceInfo::iType |
| --- |

This member variable indicates if the high is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| HighBidPriceInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| HighBidPriceInfo::sExchange |
| --- |

Exchange of the instrument corresponding to this high bid price.
## sTicker

| HighBidPriceInfo::sTicker |
| --- |

Symbol of the instrument corresponding to this high bid price.
