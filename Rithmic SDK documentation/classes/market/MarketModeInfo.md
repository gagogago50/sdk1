> **Namespace:** `RApi`

# RApi::MarketModeInfo

Public Member Functions | Public Attributes | List of all members  RApi::MarketModeInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | MarketModeInfo () |
|  |
| virtual | ~MarketModeInfo () |
|  |

| Public Attributes |
| --- |
| int | iJopNsecs |
|  |
| int | iJopSsboe |
|  |
| int | iSourceNsecs |
|  |
| int | iSourceSsboe |
|  |
| int | iSourceUsecs |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| tsNCharcb | sEvent |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sMarketMode |
|  |
| tsNCharcb | sReason |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents the trading status of an instrument.

The MarketModeInfo class is used to pass the trading status (market mode) of an instrument.
## Constructor & Destructor Documentation

## MarketModeInfo()

| MarketModeInfo::MarketModeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~MarketModeInfo()

| MarketModeInfo::~MarketModeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| MarketModeInfo::~MarketModeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int MarketModeInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## iJopNsecs

| MarketModeInfo::iJopNsecs |
| --- |

If available, the nanosecond component of the jump-off-point timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iJopSsboe

| MarketModeInfo::iJopSsboe |
| --- |

If available, the jump-off-point timestamp in seconds since the beginning of epoch (Jan. 1, 1970). This usually represents the transmit timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iSourceNsecs

| MarketModeInfo::iSourceNsecs |
| --- |

If available, the nanosecond component of the source timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iSourceSsboe

| MarketModeInfo::iSourceSsboe |
| --- |

If available, the timestamp in seconds since the beginning of epoch (Jan. 1, 1970) as presented by the exchange/market data source. Generally this timestamp correlates to the event time, rather than a transmission (JOP) or receipt timestamp.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iSourceUsecs

| MarketModeInfo::iSourceUsecs |
| --- |

If available, the microsecond component of the source timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iSsboe

| MarketModeInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| MarketModeInfo::iType |
| --- |

This member variable indicates if this message is from a cache or the real-time data stream (the callback type).

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| MarketModeInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## sEvent

| MarketModeInfo::sEvent |
| --- |

If available, this contains the event causing the market mode.
## sExchange

| MarketModeInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the market mode.
## sMarketMode

| MarketModeInfo::sMarketMode |
| --- |

This member variable indicates the market mode.
## sReason

| MarketModeInfo::sReason |
| --- |

If available, this contains the reason provided for the market mode.
## sTicker

| MarketModeInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the market mode.
