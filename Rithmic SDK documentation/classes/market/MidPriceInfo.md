> **Namespace:** `RApi`

# RApi::MidPriceInfo

Public Member Functions | Public Attributes | List of all members  RApi::MidPriceInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | MidPriceInfo () |
|  |
| virtual | ~MidPriceInfo () |
|  |

| Public Attributes |
| --- |
| bool | bHighPrice |
|  |
| bool | bLastPrice |
|  |
| bool | bLowPrice |
|  |
| bool | bNetChange |
|  |
| bool | bOpenPrice |
|  |
| bool | bPercentChange |
|  |
| double | dHighPrice |
|  |
| double | dLastPrice |
|  |
| double | dLowPrice |
|  |
| double | dNetChange |
|  |
| double | dOpenPrice |
|  |
| double | dPercentChange |
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

This class represents mid price information.

If trade market data is unavailable, mid price information may be published in its stead. The mid price is the average of the best bid and best ask, i.e. (best bid price + best ask)/2. Some additional statistics on the mid price are calculated, such as the open, high, low and close mid prices.

To express interest in mid price data, one can specify the MD_MID_PRICE subscription flag when subscribing. The MidPriceInfo class is used to pass mid price info via RCallbacks::MidPrice() and the CloseMidPriceInfo class is used to convey close mid prices via RCallbacks::CloseMidPrice().
**See also**
  REngine::subscribe     RApi::MD_MID_PRICE     MidPriceInfo     RCallbacks::MidPrice     CloseMidPriceInfo     RCallbacks::CloseMidPrice
## Constructor & Destructor Documentation

## MidPriceInfo()

| MidPriceInfo::MidPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~MidPriceInfo()

| MidPriceInfo::~MidPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| MidPriceInfo::~MidPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int MidPriceInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bHighPrice

| MidPriceInfo::bHighPrice |
| --- |

Indicates whether MidPriceInfo::dHighPrice is populated and valid. If this flag is false, it means that there is no high mid price.
## bLastPrice

| MidPriceInfo::bLastPrice |
| --- |

Indicates whether MidPriceInfo::dLastPrice is populated and valid. If this flag is false, it means that there is no last mid price.
## bLowPrice

| MidPriceInfo::bLowPrice |
| --- |

Indicates whether MidPriceInfo::dLowPrice is populated and valid. If this flag is false, it means that there is no low mid price.
## bNetChange

| MidPriceInfo::bNetChange |
| --- |

Indicates whether MidPriceInfo::dNetChange is populated and valid. If this flag is false, the net change is undefined or unavailable.
## bOpenPrice

| MidPriceInfo::bOpenPrice |
| --- |

Indicates whether MidPriceInfo::dOpenPrice is populated and valid. If this flag is false, it means that there is no open mid price.
## bPercentChange

| MidPriceInfo::bPercentChange |
| --- |

Indicates whether MidPriceInfo::dPercentChange is populated and valid. If this flag is false, the percent change is undefined or unavailable.
## dHighPrice

| MidPriceInfo::dHighPrice |
| --- |

Specifies the high mid price of the current trading session.
## dLastPrice

| MidPriceInfo::dLastPrice |
| --- |

Specifies the last/most recent mid price.
## dLowPrice

| MidPriceInfo::dLowPrice |
| --- |

Specifies the low mid price of the current trading session.
## dNetChange

| MidPriceInfo::dNetChange |
| --- |

Specifies the net change of the mid price over the current trading session, if available.
## dOpenPrice

| MidPriceInfo::dOpenPrice |
| --- |

Specifies the open mid price of the current trading session.
## dPercentChange

| MidPriceInfo::dPercentChange |
| --- |

Specifies the percent change of the mid price over the current trading session, if available.
## iSsboe

| MidPriceInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| MidPriceInfo::iType |
| --- |

Indicates if the trade is from a cache, the real-time data stream or from the historical database.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB     MD_HISTORY_CB
## iUsecs

| MidPriceInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| MidPriceInfo::sExchange |
| --- |

Exchange of this instrument.
## sTicker

| MidPriceInfo::sTicker |
| --- |

Ticker symbol of this instrument.
