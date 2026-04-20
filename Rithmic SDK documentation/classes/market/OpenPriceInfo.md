> **Namespace:** `RApi`

# RApi::OpenPriceInfo

Public Member Functions | Public Attributes | List of all members  RApi::OpenPriceInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | OpenPriceInfo () |
|  |
| virtual | ~OpenPriceInfo () |
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

This class represents open price information as published by an exchange.

The OpenPriceInfo class is used to present open price information. The method REngine::subscribe() with MD_OPEN in the subscription flags is used to express interest in receiving open prices. The callback used to pass that information is RCallbacks::OpenPrice().
## Constructor & Destructor Documentation

## OpenPriceInfo()

| OpenPriceInfo::OpenPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~OpenPriceInfo()

| OpenPriceInfo::~OpenPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OpenPriceInfo::~OpenPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int OpenPriceInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPriceFlag

| OpenPriceInfo::bPriceFlag |
| --- |

This member variable specifies if OpenPriceInfo::dPrice is defined or not. If the value is true, then the price is defined. If the value is false, the price is undefined. It is possible that a price is undefined if the exchange does not publish this information.
## dPrice

| OpenPriceInfo::dPrice |
| --- |

This member variable specifies the open price.
## iSsboe

| OpenPriceInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| OpenPriceInfo::iType |
| --- |

This member variable indicates if the open price is from a cache or the real-time data stream.

It is possible for exchanges to publish open prices intraday. Because of this, it is possible to receive a open price intraday, with an iType value of MD_UPDATE_CB.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| OpenPriceInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| OpenPriceInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the open price.
## sTicker

| OpenPriceInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the open price.
