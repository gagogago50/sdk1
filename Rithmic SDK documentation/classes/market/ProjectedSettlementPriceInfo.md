> **Namespace:** `RApi`

# RApi::ProjectedSettlementPriceInfo

Public Member Functions | Public Attributes | List of all members  RApi::ProjectedSettlementPriceInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | ProjectedSettlementPriceInfo () |
|  |
| virtual | ~ProjectedSettlementPriceInfo () |
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

This class represents projected settlement price information.

The projected settlement price is what the expected settlment price might be for an instrument. The calculation of this price is based on the settlement procedure as documented by an exchange.

For example, some exchanges might base the settlement price on the VWAP for some time period (settlement period) leading up to the trading session close.

This value is not available for all instruments.

To subsribe for this data, the RApi::MD_PROJECTED_SETTLEMENT flag must be enabled when calling REngine::subscribe() or REngine::subscribeByUnderlying().

The callback used to convey projected settlement prices is RCallbacks::ProjectedSettlementPrice().
## Constructor & Destructor Documentation

## ProjectedSettlementPriceInfo()

| ProjectedSettlementPriceInfo::ProjectedSettlementPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~ProjectedSettlementPriceInfo()

| ProjectedSettlementPriceInfo::~ProjectedSettlementPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| ProjectedSettlementPriceInfo::~ProjectedSettlementPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int ProjectedSettlementPriceInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPriceFlag

| ProjectedSettlementPriceInfo::bPriceFlag |
| --- |

Indicator that specifies whether ProjectedSettlementPriceInfo::dPrice is defined or not. If the value is true, then the price is well-defined. If the value is false, the price is undefined. It is possible that th es
## dPrice

| ProjectedSettlementPriceInfo::dPrice |
| --- |

Projected settlement price.
## iSsboe

| ProjectedSettlementPriceInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| ProjectedSettlementPriceInfo::iType |
| --- |

Indicates if the price is from a cache or the real-time data stream.

Possible values for this variable are :
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| ProjectedSettlementPriceInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| ProjectedSettlementPriceInfo::sExchange |
| --- |

Exchange of the instrument
## sTicker

| ProjectedSettlementPriceInfo::sTicker |
| --- |

Symbol of the instrument
