> **Namespace:** `RApi`

# RApi::TradeVolumeInfo

Public Member Functions | Public Attributes | List of all members  RApi::TradeVolumeInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | TradeVolumeInfo () |
|  |
| virtual | ~TradeVolumeInfo () |
|  |

| Public Attributes |
| --- |
| bool | bTotalVolumeFlag |
|  |
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
| long long | llTotalVolume |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents trade volume information.

The TradeVolumeInfo class is used to pass trade volume information received as a result of calls to REngine::subscribe() requests via the RCallbacks::TradeVolume() callback.
## Constructor & Destructor Documentation

## TradeVolumeInfo()

| TradeVolumeInfo::TradeVolumeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~TradeVolumeInfo()

| TradeVolumeInfo::~TradeVolumeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| TradeVolumeInfo::~TradeVolumeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int TradeVolumeInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bTotalVolumeFlag

| TradeVolumeInfo::bTotalVolumeFlag |
| --- |

This member variable indicates whether the TradeVolumeInfo::llTotalVolume is populated and valid. If this flag has a value of false, it means that there is no trade volume. This may occur in between trading sessions.
## iJopNsecs

| TradeVolumeInfo::iJopNsecs |
| --- |

If available, the nanosecond component of the jump-off-point timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iJopSsboe

| TradeVolumeInfo::iJopSsboe |
| --- |

If available, the jump-off-point timestamp in seconds since the beginning of epoch (Jan. 1, 1970). This usually represents the transmit timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iSourceNsecs

| TradeVolumeInfo::iSourceNsecs |
| --- |

If available, the nanosecond component of the source timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iSourceSsboe

| TradeVolumeInfo::iSourceSsboe |
| --- |

If available, the timestamp in seconds since the beginning of epoch (Jan. 1, 1970) as presented by the exchange/market data source. Generally this timestamp correlates to the event time, rather than a transmission (JOP) or receipt timestamp.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iSourceUsecs

| TradeVolumeInfo::iSourceUsecs |
| --- |

If available, the microsecond component of the source timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iSsboe

| TradeVolumeInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| TradeVolumeInfo::iType |
| --- |

This member variable indicates if the trade is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| TradeVolumeInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## llTotalVolume

| TradeVolumeInfo::llTotalVolume |
| --- |

This member variable specifies the total daily volume traded for this instrument. It is possible that the daily volume is reset at different times, even within the same exchange.
## sExchange

| TradeVolumeInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the trade volume.
## sTicker

| TradeVolumeInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the trade volume.
