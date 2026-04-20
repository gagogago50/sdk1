> **Namespace:** `RApi`

# RApi::CloseMidPriceInfo

Public Member Functions | Public Attributes | List of all members  RApi::CloseMidPriceInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | CloseMidPriceInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~CloseMidPriceInfo () |
|  |

| Public Attributes |
| --- |
| bool | bClosePrice |
|  |
| double | dClosePrice |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| tsNCharcb | sClosePriceDate |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents close mid price information.

The CloseMidPriceInfo class is used to convey the close mid price for a trading session.

To express interest in mid price data, one can specify the MD_MID_PRICE subscription flag when subscribing. The MidPriceInfo class is used to pass mid price info via RCallbacks::MidPrice() and the CloseMidPriceInfo class is used to convey close mid prices via RCallbacks::CloseMidPrice().
**See also**
  REngine::subscribe     RApi::MD_MID_PRICE     MidPriceInfo     RCallbacks::MidPrice     CloseMidPriceInfo     RCallbacks::CloseMidPrice
## Constructor & Destructor Documentation

## CloseMidPriceInfo()

| CloseMidPriceInfo::CloseMidPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~CloseMidPriceInfo()

| CloseMidPriceInfo::~CloseMidPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| CloseMidPriceInfo::~CloseMidPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int CloseMidPriceInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bClosePrice

| CloseMidPriceInfo::bClosePrice |
| --- |

Indicates whether MidPriceInfo::dClosePrice is populated and valid. If this flag is false, it means that there is no close mid price.
## dClosePrice

| CloseMidPriceInfo::dClosePrice |
| --- |

Specifies the close mid price of the current trading session.
## iSsboe

| CloseMidPriceInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| CloseMidPriceInfo::iType |
| --- |

Indicates if the trade is from a cache, the real-time data stream or from the historical database.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB     MD_HISTORY_CB
## iUsecs

| CloseMidPriceInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sClosePriceDate

| CloseMidPriceInfo::sClosePriceDate |
| --- |

Specifies the date of the trading session for which the close mid price applies.
## sExchange

| CloseMidPriceInfo::sExchange |
| --- |

Exchange of this instrument.
## sTicker

| CloseMidPriceInfo::sTicker |
| --- |

Ticker symbol of this instrument.
