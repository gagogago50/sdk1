> **Namespace:** `RApi`

# RApi::DboInfo

Public Member Functions | Public Attributes | List of all members  RApi::DboInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | DboInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~DboInfo () |
|  |

| Public Attributes |
| --- |
| bool | bPreviousPrice |
|  |
| bool | bPrice |
|  |
| bool | bSize |
|  |
| double | dPreviousPrice |
|  |
| double | dPrice |
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
| long long | llSize |
|  |
| void * | pContext |
|  |
| tsNCharcb | sDboUpdateType |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sExchOrdId |
|  |
| tsNCharcb | sPriority |
|  |
| tsNCharcb | sSide |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents depth-by-order (DBO) market data.

What is DBO data and how might I use it?
**See also**
  REngine::subscribeDbo     REngine::rebuildDboBook     RCallbacks::Dbo
## Constructor & Destructor Documentation

## DboInfo()

| DboInfo::DboInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~DboInfo()

| DboInfo::~DboInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| DboInfo::~DboInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int DboInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision. Empty tsNCharcbs will be displayed with a value of "<empty>".
## Member Data Documentation

## bPreviousPrice

| DboInfo::bPreviousPrice |
| --- |

Indicates whether a previous price was on this message.
## bPrice

| DboInfo::bPrice |
| --- |

Indicates whether DboInfo::dPrice contains a value. Some exchanges may not publish a price when removing an order from the order book.
## bSize

| DboInfo::bSize |
| --- |

Indicates whether DboInfo::llSize contains a valid value. For example, some exchanges may not publish a size when removing an order from the order book.
## dPreviousPrice

| DboInfo::dPreviousPrice |
| --- |

If present, the previous price of this order.
## dPrice

| DboInfo::dPrice |
| --- |

Price associated with this order. Check that DboInfo::bPrice is true before using this value.
## iJopNsecs

| DboInfo::iJopNsecs |
| --- |

If available, the nanosecond component of the jump-off-point timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iJopSsboe

| DboInfo::iJopSsboe |
| --- |

If available, the jump-off-point timestamp in seconds since the beginning of epoch (Jan. 1, 1970). This usually represents the transmit timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iSourceNsecs

| DboInfo::iSourceNsecs |
| --- |

If available, the nanosecond component of the source timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iSourceSsboe

| DboInfo::iSourceSsboe |
| --- |

If available, the timestamp in seconds since the beginning of epoch (Jan. 1, 1970) as presented by the exchange/market data source. Generally this timestamp correlates to the event time, rather than a transmission (JOP) or receipt timestamp.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iSourceUsecs

| DboInfo::iSourceUsecs |
| --- |

If available, the microsecond component of the source timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iSsboe

| DboInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| DboInfo::iType |
| --- |

Indicates if the data from a cache (MD_IMAGE_CB), the real-time data stream (MD_UPDATE_CB) or from a historical database (MD_HISTORY_CB).

For this class, expected values are MD_IMAGE_CB if the DboInfo data is in response to REngine::rebuildDboBook(), or MD_UPDATE_CB if the DboInfo from a subscription (REngine::subscribeDbo()).
**See also**
  REngine::rebuildDboBook     REngine::subscribeDbo     RCallbacks::Dbo     MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| DboInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## llSize

| DboInfo::llSize |
| --- |

Size associated with this order. Check that DboInfo::bSize is true before using this value.
## pContext

| void* RApi::DboInfo::pContext |
| --- |

## sDboUpdateType

| DboInfo::sDboUpdateType |
| --- |

Type of depth-by-order update. The update types indicate whether the order specified by this instance is a new order ("N"), a modified/changed order ("C"), or a deleted order ("D").
## sExchange

| DboInfo::sExchange |
| --- |

Exchange of the instrument
## sExchOrdId

| DboInfo::sExchOrdId |
| --- |

Exchange order id of this order.
## sPriority

| DboInfo::sPriority |
| --- |

Priority of this order in the exchange's matching engine queue. This value may have different usage conventions at different exchanges. At the time of this writing, on Globex/CME, a lower priority means being closer to the front of the queue.
## sSide

| DboInfo::sSide |
| --- |

Side of the order
## sTicker

| DboInfo::sTicker |
| --- |

Ticker symbol of the instrument
