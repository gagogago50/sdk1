> **Namespace:** `RApi`

# RApi::LowAskPriceInfo

Public Member Functions | Public Attributes | List of all members  RApi::LowAskPriceInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | LowAskPriceInfo () |
|  |
| virtual | ~LowAskPriceInfo () |
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

This class represents low ask price information.

The LowAskPriceInfo class is used to pass the current trading session's lowest asking price. One can subscribe to lowest asking price data by calling REngine::subscribe() with the MD_HIGH_BID_LOW_ASK flag enabled.
 Instances of this class will be passed via the RCallbacks::LowAskPrice() callback.
## Constructor & Destructor Documentation

## LowAskPriceInfo()

| LowAskPriceInfo::LowAskPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~LowAskPriceInfo()

| LowAskPriceInfo::~LowAskPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| LowAskPriceInfo::~LowAskPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int LowAskPriceInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPriceFlag

| LowAskPriceInfo::bPriceFlag |
| --- |

This member variable specifies if LowAskPriceInfo::dPrice is defined or not. If the value is true, then the price is defined. If the value is false, the price is undefined. A low ask price may be undefined if the trading session is closed, or if the exchange does not publish this information.
## dPrice

| LowAskPriceInfo::dPrice |
| --- |

This member variable specifies the low ask price.
## iSsboe

| LowAskPriceInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| LowAskPriceInfo::iType |
| --- |

This member variable indicates if the low is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| LowAskPriceInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| LowAskPriceInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the low price.
## sTicker

| LowAskPriceInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the low price.
