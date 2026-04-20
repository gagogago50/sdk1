> **Namespace:** `RApi`

# RApi::TradeInfo

Public Member Functions | Public Attributes | List of all members  RApi::TradeInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | TradeInfo () |
|  |
| virtual | ~TradeInfo () |
|  |

| Public Attributes |
| --- |
| bool | bNetChangeFlag |
|  |
| bool | bPercentChangeFlag |
|  |
| bool | bPriceFlag |
|  |
| bool | bVolumeBoughtFlag |
|  |
| bool | bVolumeSoldFlag |
|  |
| bool | bVwapFlag |
|  |
| bool | bVwapLongFlag |
|  |
| double | dNetChange |
|  |
| double | dPercentChange |
|  |
| double | dPrice |
|  |
| double | dVwap |
|  |
| double | dVwapLong |
|  |
| int | iConnId |
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
| long long | llVolumeBought |
|  |
| long long | llVolumeSold |
|  |
| tsNCharcb | sAggressorExchOrdId |
|  |
| tsNCharcb | sAggressorSide |
|  |
| tsNCharcb | sCondition |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sExchOrdId |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents trade information.

The TradeInfo class is used to pass trade information received as a result of calls to REngine::subscribe() requests via the RCallbacks::TradePrint() callback.
## Constructor & Destructor Documentation

## TradeInfo()

| TradeInfo::TradeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~TradeInfo()

| TradeInfo::~TradeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| TradeInfo::~TradeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int TradeInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bNetChangeFlag

| TradeInfo::bNetChangeFlag |
| --- |

This member variable indicates whether the TradeInfo::dNetChange is populated and valid. If this flag has a value of false, it means that the net change is undefined or unavailable.
## bPercentChangeFlag

| TradeInfo::bPercentChangeFlag |
| --- |

This member variable indicates whether the TradeInfo::dPercentChange is populated and valid. If this flag has a value of false, it means that the percent change is undefined or unavailable.
## bPriceFlag

| TradeInfo::bPriceFlag |
| --- |

This member variable indicates whether the TradeInfo::dPrice is populated and valid. If this flag has a value of false, it means that there is no trade price.
## bVolumeBoughtFlag

| TradeInfo::bVolumeBoughtFlag |
| --- |

Indicates whether TradeInfo::llVolumeBought is populated and valid. If the value is false, TradeInfo::llVolumeBought should not be inspected.
## bVolumeSoldFlag

| TradeInfo::bVolumeSoldFlag |
| --- |

Indicates whether TradeInfo::llVolumeSold is populated and valid. If the value is false, TradeInfo::llVolumeSold should not be inspected.
## bVwapFlag

| TradeInfo::bVwapFlag |
| --- |

Indicates whether the TradeInfo::dVwap is populated and valid. If this flag has a value of false, it means that VWAP value in TradeInfo::dVwap is undefined or unavailable.
## bVwapLongFlag

| TradeInfo::bVwapLongFlag |
| --- |

Indicates whether the TradeInfo::dVwapLong is populated and valid.
 If this flag has a value of false, it means that VWAP value in TradeInfo::dVwapLong is undefined or unavailable.
## dNetChange

| TradeInfo::dNetChange |
| --- |

This member variable contains the net change, if available. If it is available, it is either provided by the exchange or calculated by the infrastructure.
## dPercentChange

| TradeInfo::dPercentChange |
| --- |

This member variable contains the percent change, if available. If it is available, it is either provided by the exchange or calculated by the infrastructure.
## dPrice

| TradeInfo::dPrice |
| --- |

This member variable specifies the price for the trade.
## dVwap

| TradeInfo::dVwap |
| --- |

VWAP, if available. If it is available, it is either provided by the exchange or calculated by the infrastructure. This VWAP value will be rounded to the nearest price increment.
**See also**
  TradinInfo::dVwapLong
## dVwapLong

| TradeInfo::dVwapLong |
| --- |

'long form of VWAP, if available. If it is available, it is either provided by the exchange or calculated by the infrastructure. This VWAP value will not be rounded to the nearest tick.
**See also**
  TradinInfo::dVwap
## iConnId

| TradeInfo::iConnId |
| --- |

Identifies the connection on which this data was received. It is possible when subscribing to market data through a R | Diamond Cutter connect point, as well as through the regular market data connect point, certain callbacks will be invoked twice, once on the market data connect point, and again on the R | Diamond Cutter connect point. This indicator provides a mechanism to distinguish between the two.
## iJopNsecs

| TradeInfo::iJopNsecs |
| --- |

If available, the nanosecond component of the jump-off-point timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iJopSsboe

| TradeInfo::iJopSsboe |
| --- |

If available, the jump-off-point timestamp in seconds since the beginning of epoch (Jan. 1, 1970). This usually represents the transmit timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iSourceNsecs

| TradeInfo::iSourceNsecs |
| --- |

If available, the nanosecond component of the source timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iSourceSsboe

| TradeInfo::iSourceSsboe |
| --- |

If available, the timestamp in seconds since the beginning of epoch (Jan. 1, 1970) as presented by the exchange/market data source. Generally this timestamp correlates to the event time, rather than a transmission (JOP) or receipt timestamp.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iSourceUsecs

| TradeInfo::iSourceUsecs |
| --- |

If available, the microsecond component of the source timestamp as presented by the exchange/market data source.

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## iSsboe

| TradeInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the callback type (iType) is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| TradeInfo::iType |
| --- |

This member variable indicates if the trade is from a cache, the real-time data stream or from the historical database.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB     MD_HISTORY_CB
## iUsecs

| TradeInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp

If the callback type (iType) is MD_IMAGE_CB, this value may be zero.
## llSize

| TradeInfo::llSize |
| --- |

This member variable specifies the quantity associated with the trade. If the TradeInfo::bPriceFlag is false, it is possible that TradeInfo::llSize will contain a value of zero, when in fact, it's meaning is that there is no trade size.
## llVolumeBought

| TradeInfo::llVolumeBought |
| --- |

Total daily volume where TradeInfo::sAggressorSide is "B".
## llVolumeSold

| TradeInfo::llVolumeSold |
| --- |

Total daily volume where TradeInfo::sAggressorSide is "S".
## sAggressorExchOrdId

| TradeInfo::sAggressorExchOrdId |
| --- |

If available, contains the aggressor order's exchange order id associated with this trade.

If the image type is MD_IMAGE_CB, this value may not be available.
## sAggressorSide

| TradeInfo::sAggressorSide |
| --- |

If available, this member variable indicates which side is the aggressor of the trade.
## sCondition

| TradeInfo::sCondition |
| --- |

This member variable may contain additional information regarding any conditions pertinent to the trade (such as whether it is part of a spread leg). If there is no trade condition specified by the exchange, the value will be empty, where the data pointer is null, and the data length is zero. Typically, this value will be empty in TradeInfo instances passed to RCallbacks::TradePrint() and non-empty in TradeInfo instances passed to RCallbacks::TradeCondition().
## sExchange

| TradeInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the trade.
## sExchOrdId

| TradeInfo::sExchOrdId |
| --- |

If available, contains the resting order's exchange order id associated with this trade.

If the image type is MD_IMAGE_CB, this value may not be available.
## sTicker

| TradeInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the trade.
