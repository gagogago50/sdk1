> **Namespace:** `RApi`

# RApi::BarParams

Public Member Functions | Public Attributes | List of all members  RApi::BarParams Class Reference

`#include <RApiPlus.h>`  Inheritance diagram for RApi::BarParams:

| Public Member Functions |
| --- |
|  | BarParams () |
|  |
| virtual | ~BarParams () |
|  |

| Public Attributes |
| --- |
| bool | bCustomSession |
|  |
| bool | bProfile |
|  |
| double | dSpecifiedRange |
|  |
| int | iCloseSsm |
|  |
| int | iOpenSsm |
|  |
| int | iSpecifiedMinutes |
|  |
| int | iSpecifiedSeconds |
|  |
| int | iSpecifiedTicks |
|  |
| int | iType |
|  |
| long long | llSpecifiedVolume |
|  |
| void * | pContext |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class encapsulates information needed to request data bars.
## Constructor & Destructor Documentation

## BarParams()

| BarParams::BarParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integers and doubles are initialized to zero. Boolean values are set to false. Pointer values are set to NULL. Pointers to arrays are set to NULL and their lengths are set to zero.
## ~BarParams()

| BarParams::~BarParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| BarParams::~BarParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Data Documentation

## bCustomSession

| RApi::BarParams::bCustomSession |
| --- |

Data bars typically use market mode transitions to determine when a trading session begins and ends. These session events can cause bars to be opened or closed. To configure a custom session time, this flag must be set to true. Custom sessions can only be applied to tick, volume and range bars.

Custom sessions may be ignored for tick bars where the tick size is one.
**See also**
  BarParams::bCustomSession     BarParams::iOpenSsm     BarParams::iCloseSsm    BAR_TYPE_RANGE     BAR_TYPE_TICK     BAR_TYPE_VOLUME
## bProfile

| RApi::BarParams::bProfile |
| --- |

This flag indicates whether or not to include volume/data profile information for each bar. Currently, only replayed minute bars and multi-tick tick bars support volume/data profile information. This flag is ignored where there is no support. Retrieving volume profile data is generally slower than not retrieving the data.

Volume profile information is the volume traded at each price level within the bar's price range. The volumes are separated into three categories - volumes where there was no aggressor, volumes where the buyer was the aggressor, and finally volumes where the seller was the aggressor.

The number of trades is also included for each of these categories.
**See also**
  BarInfo::iProfileArrayLen     BarInfo::adProfilePrices     BarInfo::allProfileNoAggressorVolumes     BarInfo::allProfileBuyerAsAggressorVolumes     BarInfo::allProfileSellerAsAggressorVolumes     BarInfo::aiProfileNoAggressorNumTrades     BarInfo::aiProfileBuyerAsAggressorNumTrades     BarInfo::aiProfileSellerAsAggressorNumTrades
## dSpecifiedRange

| RApi::BarParams::dSpecifiedRange |
| --- |

Configured range of the bar. This value only applies when iType is BAR_TYPE_RANGE. If the bar is truncated due to a session close, the range spanned by the high and low prices may not equal this specified range.
**See also**
  BAR_TYPE_RANGE
## iCloseSsm

| RApi::BarParams::iCloseSsm |
| --- |

The custom session close time, expressed as seconds-since-midnight, GMT.
**See also**
  BarParams::bCustomSession     BarParams::iOpenSsm     BarParams::iCloseSsm
## iOpenSsm

| RApi::BarParams::iOpenSsm |
| --- |

The custom session open time, expressed as seconds-since-midnight, GMT.
**See also**
  BarParams::bCustomSession     BarParams::iOpenSsm     BarParams::iCloseSsm
## iSpecifiedMinutes

| RApi::BarParams::iSpecifiedMinutes |
| --- |

Configured period (in minutes) for the bar. This value only applies when iType is BAR_TYPE_MINUTE. If the bar is truncated due to a session close, the actual elapsed time of the trades comprising the bar may not equal the specified period.
**See also**
  BAR_TYPE_MINUTE
## iSpecifiedSeconds

| RApi::BarParams::iSpecifiedSeconds |
| --- |

Configured period (in seconds) for the bar. This value only applies when iType is BAR_TYPE_SECOND. If the bar is truncated due to a session close, the actual elapsed time of the trades comprising the bar may not equal the specified period.
**See also**
  BAR_TYPE_SECOND
## iSpecifiedTicks

| RApi::BarParams::iSpecifiedTicks |
| --- |

Configured number of ticks for the bar. This value only applies when iType is BAR_TYPE_TICK. If the bar is truncated due to a session close, the number of ticks may not equal the number of trades.
**See also**
  BAR_TYPE_TICK
## iType

| RApi::BarParams::iType |
| --- |

```
   Type of bar.  Daily and weekly bars do not support custom sessions or
   specified periods (i.e. N days for daily bars or N weeks for weekly
   bars is not supported).

   Weekly bars are not published in the real time stream, so one cannot
   subscribe to such bars.

   \see BAR_TYPE_DAILY
   \see BAR_TYPE_MINUTE
   \see BAR_TYPE_RANGE
   \see BAR_TYPE_SECOND
   \see BAR_TYPE_TICK
   \see BAR_TYPE_VOLUME
   \see BAR_TYPE_WEEKLY

```

## llSpecifiedVolume

| RApi::BarParams::llSpecifiedVolume |
| --- |

Configured volume for the bar. This value only applies when iType is BAR_TYPE_VOLUME. If the bar is truncated due to a session close, the actual volume of the trades comprising the bar may not equal the specified volume.
**See also**
  BAR_TYPE_VOLUME
## pContext

| RApi::BarParams::pContext |
| --- |

User context pointer. When subscribing to or replaying bars, this context pointer will be returned in the callback.
**See also**
  BarInfo::pContext     BarReplayInfo::pContext
## sExchange

| RApi::BarParams::sExchange |
| --- |

```
   Exchange of the bar's instrument.

```

## sTicker

| RApi::BarParams::sTicker |
| --- |

```
   Symbol of the bar's instrument.

```
