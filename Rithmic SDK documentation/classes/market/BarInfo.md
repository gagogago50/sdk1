> **Namespace:** `RApi`

# RApi::BarInfo

Public Member Functions | Public Attributes | List of all members  RApi::BarInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | BarInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~BarInfo () |
|  |

| Public Attributes |
| --- |
| double * | adProfilePrices |
|  |
| int * | aiProfileBuyerAsAggressorNumTrades |
|  |
| int * | aiProfileNoAggressorNumTrades |
|  |
| int * | aiProfileSellerAsAggressorNumTrades |
|  |
| long long * | allProfileBuyerAsAggressorVolumes |
|  |
| long long * | allProfileNoAggressorVolumes |
|  |
| long long * | allProfileSellerAsAggressorVolumes |
|  |
| bool | bBuyerAsAggressorVolume |
|  |
| bool | bCustomSession |
|  |
| bool | bSellerAsAggressorVolume |
|  |
| bool | bSettlementPrice |
|  |
| bool | bVwap |
|  |
| bool | bVwapLong |
|  |
| double | dClosePrice |
|  |
| double | dHighPrice |
|  |
| double | dLowPrice |
|  |
| double | dOpenPrice |
|  |
| double | dSettlementPrice |
|  |
| double | dSpecifiedRange |
|  |
| double | dVwap |
|  |
| double | dVwapLong |
|  |
| int | iCloseSsm |
|  |
| int | iEndSsboe |
|  |
| int | iEndUsecs |
|  |
| int | iNumTrades |
|  |
| int | iOpenSsm |
|  |
| int | iProfileArrayLen |
|  |
| int | iSpecifiedMinutes |
|  |
| int | iSpecifiedSeconds |
|  |
| int | iSpecifiedTicks |
|  |
| int | iStartSsboe |
|  |
| int | iStartUsecs |
|  |
| int | iType |
|  |
| long long | llBuyerAsAggressorVolume |
|  |
| long long | llSellerAsAggressorVolume |
|  |
| long long | llSpecifiedVolume |
|  |
| long long | llVolume |
|  |
| void * | pContext |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sSpecifiedDate |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

An instance of this class represents bar/candlestick data.

The BarInfo class holds bar/candlestick data, consisting mainly of open/high/low/close trade prices over a given set of market data trades. There are different types of bars (different ways of aggregating the set of trades), including by time period, price range, volume traded, and number of trades.

One can subscribe to bars from the real-time stream using REngine::subscribeBar(), or replay bars from a historical database, using REngine::replayBars().
**See also**
  REngine::replayBars()     REngine::subscribeBar()
## Constructor & Destructor Documentation

## BarInfo()

| BarInfo::BarInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~BarInfo()

| BarInfo::~BarInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| BarInfo::~BarInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int BarInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## adProfilePrices

| BarInfo::adProfilePrices |
| --- |

Array containing each of the price levels present in this bar.
**See also**
  BarInfo::iProfileArrayLen

## aiProfileBuyerAsAggressorNumTrades

| BarInfo::aiProfileBuyerAsAggressorNumTrades |
| --- |

Array containing the number of trades at each of the price levels in BarInfo::adProfilePrices, where there the buyer was the aggressor on the trade.
**See also**
  BarInfo::iProfileArrayLen
     BarInfo::adProfilePrices
## aiProfileNoAggressorNumTrades

| BarInfo::aiProfileNoAggressorNumTrades |
| --- |

Array containing the number of trades at each of the price levels in BarInfo::adProfilePrices, where there was no aggressor on the trade.
**See also**
  BarInfo::iProfileArrayLen
     BarInfo::adProfilePrices
## aiProfileSellerAsAggressorNumTrades

| BarInfo::aiProfileSellerAsAggressorNumTrades |
| --- |

Array containing the number of trades at each of the price levels in BarInfo::adProfilePrices, where there the seller was the aggressor on the trade.
**See also**
  BarInfo::iProfileArrayLen
     BarInfo::adProfilePrices
## allProfileBuyerAsAggressorVolumes

| BarInfo::allProfileBuyerAsAggressorVolumes |
| --- |

Array containing the volumes traded at each of the price levels in BarInfo::adProfilePrices, where there the buyer was the aggressor on the trade.
**See also**
  BarInfo::iProfileArrayLen
     BarInfo::adProfilePrices
## allProfileNoAggressorVolumes

| BarInfo::allProfileNoAggressorVolumes |
| --- |

Array containing the volumes traded at each of the price levels in BarInfo::adProfilePrices, where there was no aggressor on the trade.
**See also**
  BarInfo::iProfileArrayLen
     BarInfo::adProfilePrices
## allProfileSellerAsAggressorVolumes

| BarInfo::allProfileSellerAsAggressorVolumes |
| --- |

Array containing the volumes traded at each of the price levels in BarInfo::adProfilePrices, where there the seller was the aggressor on the trade.
**See also**
  BarInfo::iProfileArrayLen
     BarInfo::adProfilePrices
## bBuyerAsAggressorVolume

| BarInfo::bBuyerAsAggressorVolume |
| --- |

Indicates if BarInfo::llBuyerAsAggressorVolume is specified or not.
 If this value is false, the buyer as aggressor volume is not available and/or specified.
## bCustomSession

| BarInfo::bCustomSession |
| --- |

Indicates whether this bar uses a custom session.
## bSellerAsAggressorVolume

| BarInfo::bSellerAsAggressorVolume |
| --- |

Indicates if BarInfo::llSellerAsAggressorVolume is specified or not.
 If this value is false, the seller as aggressor volume is not available and/or specified.
## bSettlementPrice

| BarInfo::bSettlementPrice |
| --- |

Indicates if BarInfo::dSettlementPrice is specified or not. If this value is false, the settlement price is not specified.
## bVwap

| BarInfo::bVwap |
| --- |

Indicates whether the BarInfo::dVwap is populated and valid. If this flag has a value of false, it means that VWAP value in BarInfo::dVwap is undefined or unavailable.
## bVwapLong

| BarInfo::bVwapLong |
| --- |

Indicates whether the BarInfo::dVwapLong is populated and valid.
 If this flag has a value of false, it means that VWAP value in BarInfo::dVwapLong is undefined or unavailable.
## dClosePrice

| BarInfo::dClosePrice |
| --- |

This represents the price of the last trade occurring in this set of trades.
## dHighPrice

| BarInfo::dHighPrice |
| --- |

This represents the highest trade price occurring in this set of trades.
## dLowPrice

| BarInfo::dLowPrice |
| --- |

This represents the lowest trade price occurring in this set of trades.
## dOpenPrice

| BarInfo::dOpenPrice |
| --- |

This represents the price of the first trade occurring in this set of trades.
## dSettlementPrice

| BarInfo::dSettlementPrice |
| --- |

If available for daily bars, the settlement price for the day.
## dSpecifiedRange

| BarInfo::dSpecifiedRange |
| --- |

Price range of range (type) bars.
**See also**
  RApi::BAR_TYPE_RANGE
## dVwap

| BarInfo::dVwap |
| --- |

VWAP, if available. If it is available, it is either provided by the exchange or calculated by the infrastructure. This VWAP value will be rounded to the nearest price increment. The time period over which the VWAP is calculated is from the beginning of the trading session.
## dVwapLong

| BarInfo::dVwapLong |
| --- |

'long form of VWAP, if available. If it is available, it is either provided by the exchange or calculated by the infrastructure. This VWAP value will not be rounded to the nearest tick. The time period over which the VWAP is calculated is from the beginning of the trading session.
## iCloseSsm

| BarInfo::iCloseSsm |
| --- |

For custom sessions, the session close time, expressed as seconds since midnight.
## iEndSsboe

| BarInfo::iEndSsboe |
| --- |

Identifies the second (in ssboe format) of the end time of the bar.
## iEndUsecs

| BarInfo::iEndUsecs |
| --- |

Identifies the microseconds portion of the time of the end time of the bar.
## iNumTrades

| BarInfo::iNumTrades |
| --- |

The number of trades aggregated in this bar.
## iOpenSsm

| BarInfo::iOpenSsm |
| --- |

For custom sessions, the session open time, expressed as seconds since midnight.
## iProfileArrayLen

| BarInfo::iProfileArrayLen |
| --- |

Indicates the number of elements in each of the profile arrays. The Nth elements of each array correspond to each other.
**See also**
  BarInfo::iProfileArrayLen
     BarInfo::adProfilePrices     BarInfo::allProfileNoAggressorVolumes     BarInfo::allProfileBuyerAsAggressorVolumes     BarInfo::allProfileSellerAsAggressorVolumes     BarInfo::aiProfileNoAggressorNumTrades     BarInfo::aiProfileBuyerAsAggressorNumTrades     BarInfo::aiProfileSellerAsAggressorNumTrades
## iSpecifiedMinutes

| BarInfo::iSpecifiedMinutes |
| --- |

Number of minutes in a time bar period for minute (type) bars.
**See also**
  RApi::BAR_TYPE_MINUTE
## iSpecifiedSeconds

| BarInfo::iSpecifiedSeconds |
| --- |

Number of seconds in a time bar period for second (type) bars.
**See also**
  RApi::BAR_TYPE_SECOND
## iSpecifiedTicks

| BarInfo::iSpecifiedTicks |
| --- |

Number of ticks for tick (type) bars.
**See also**
  RApi::BAR_TYPE_TICK
## iStartSsboe

| BarInfo::iStartSsboe |
| --- |

Identifies the second (in ssboe format) of the start time of the bar.
## iStartUsecs

| BarInfo::iStartUsecs |
| --- |

Identifies the microseconds portion of the time of the start time of the bar.
## iType

| BarInfo::iType |
| --- |

Indicates the type of bar (what metric was used to aggregate the trade data). There are a number of different types of bars, including minute bars, price range bars, daily bars, etc.
**See also**
  RApi::BAR_TYPE_DAILY     RApi::BAR_TYPE_MINUTE     RApi::BAR_TYPE_NONE     RApi::BAR_TYPE_RANGE     RApi::BAR_TYPE_TICK     RApi::BAR_TYPE_VOLUME     RApi::BAR_TYPE_WEEKLY
## llBuyerAsAggressorVolume

| BarInfo::llBuyerAsAggressorVolume |
| --- |

If available, specifies the volume where the buyer was the aggressor.
## llSellerAsAggressorVolume

| BarInfo::llSellerAsAggressorVolume |
| --- |

If available, specifies the volume where the seller was the aggressor.
## llSpecifiedVolume

| BarInfo::llSpecifiedVolume |
| --- |

Trade volume for volume (type) bars.
**See also**
  RApi::BAR_TYPE_VOLUME
## llVolume

| BarInfo::llVolume |
| --- |

The total volume of all the trades aggregated in this bar.
## pContext

| BarInfo::pContext |
| --- |

If a context pointer was passed into REngine::subscribeBar() or REngine::replayBars() via BarParams::pContext, it will be returned here. The callback must be associated With the same instance of REngine on which REngine::subscribeBar() or REngine::replayBars() was called. In other words, the context pointer is only supported within an instance of REngine.
**See also**
  BarParams::pContext
## sExchange

| BarInfo::sExchange |
| --- |

The exchange corresponding to the bar.
## sSpecifiedDate

| BarInfo::sSpecifiedDate |
| --- |

Identifies the date associated with this bar. For weekly bars, the specified date is the end date of the week.
**See also**
  RApi::BAR_TYPE_DAILY     RApi::BAR_TYPE_WEEKLY
## sTicker

| BarInfo::sTicker |
| --- |

The symbol corresponding to the bar.
