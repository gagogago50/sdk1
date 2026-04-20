> **Namespace:** `RApi`

# RApi::SettlementPriceInfo

Public Member Functions | Public Attributes | List of all members  RApi::SettlementPriceInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | SettlementPriceInfo () |
|  |
| virtual | ~SettlementPriceInfo () |
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
| tsNCharcb | sDate |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sPriceType |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents settlement price information as published by an exchange.

The SettlementPriceInfo class is used to present settlement price information. The method REngine::subscribe() with MD_SETTLEMENT in the subscription flags is used to express interest in receiving settlement prices. The callback used to pass that information is RCallbacks::SettlementPrice().
## Constructor & Destructor Documentation

## SettlementPriceInfo()

| SettlementPriceInfo::SettlementPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~SettlementPriceInfo()

| SettlementPriceInfo::~SettlementPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| SettlementPriceInfo::~SettlementPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int SettlementPriceInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPriceFlag

| SettlementPriceInfo::bPriceFlag |
| --- |

This member variable specifies if SettlementPriceInfo::dPrice is defined or not. If the value is true, then the price is defined. If the value is false, the price is undefined. It is possible that a price is undefined if the exchange does not publish this information.
## dPrice

| SettlementPriceInfo::dPrice |
| --- |

This member variable specifies the settlement price.
## iSsboe

| SettlementPriceInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| SettlementPriceInfo::iType |
| --- |

This member variable indicates if the settlement price is from a cache or the real-time data stream.

It is possible for exchanges to publish settlement prices intraday. Because of this, it is possible to receive a settlement price intraday, with an iType value of MD_UPDATE_CB.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| SettlementPriceInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sDate

| SettlementPriceInfo::sDate |
| --- |

This member variable contains the settlement date of the price.
## sExchange

| SettlementPriceInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the settlement price.
## sPriceType

| SettlementPriceInfo::sPriceType |
| --- |

This member variable contains the settlement price type, if available. Values may include 'prelim off tick' or 'prelim on tick' for preliminary settlement prices. Other values may be 'theoretical' or 'final'. As exchanges are brought on-line, or as existing exchanges change their data feed, different values may appear.
## sTicker

| SettlementPriceInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the settlement price.
