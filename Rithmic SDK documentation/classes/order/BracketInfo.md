> **Namespace:** `RApi`

# RApi::BracketInfo

Public Member Functions | Public Attributes | List of all members  RApi::BracketInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | BracketInfo () |
|  |
| virtual int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~BracketInfo () |
|  |

| Public Attributes |
| --- |
| BracketTier * | asStopArray |
|  |
| BracketTier * | asTargetArray |
|  |
| bool | bStopsToMarketAt |
|  |
| bool | bTargetsToMarketAfterPartialFillInSeconds |
|  |
| bool | bTargetsToMarketAt |
|  |
| bool | bTrailingStop |
|  |
| bool | bTrailingStopTriggerTicks |
|  |
| int | iStopArrayLen |
|  |
| int | iStopsToMarketAtSsboe |
|  |
| int | iStopsToMarketAtUsecs |
|  |
| int | iTargetArrayLen |
|  |
| int | iTargetsToMarketAfterPartialFillInSeconds |
|  |
| int | iTargetsToMarketAtSsboe |
|  |
| int | iTargetsToMarketAtUsecs |
|  |
| int | iTrailByPriceId |
|  |
| int | iTrailingStopTriggerTicks |
|  |
| AccountInfo | oAccount |
|  |
| tsNCharcb | sOrderNum |
|  |
| tsNCharcb | sStopsToMarketOnReject |
|  |
| tsNCharcb | sTargetsToMarketWhenTouched |
|  |

## Detailed Description

This class conveys bracket-specific information aboout a bracket order.
**See also**
  REngine::replayBrackets()     REngine::subscribeBracket()     RCallbacks::BracketReplay()     RCallbacks::BracketUpdate()
## Constructor & Destructor Documentation

## BracketInfo()

| BracketInfo::BracketInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~BracketInfo()

| BracketInfo::~BracketInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| BracketInfo::~BracketInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int BracketInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int BracketInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will clear all internal pointers and values. It will not deallocate any memory associated with them before clearing the values.
## dump()
    **
| int BracketInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision. Empty tsNCharcbs will be displayed with a value of "<empty>".
## Member Data Documentation

## asStopArray

| BracketInfo::asStopArray |
| --- |

Array of BracketTier objects representing the set of stop loss orders.

When the callback is RCallbacks::BracketReplay() all of the tiers will be represented in the array. When the callback is RCallbacks::BracketUpdate(), only a single tier will be represented in the array. Also, updates may indicate that the tier has been removed when the BracketTier::llQty is zero.
**See also**
  BracketTier
## asTargetArray

| BracketInfo::asTargetArray |
| --- |

Array of BracketTier objects representing the set of target/profit orders.
**See also**
  BracketTier
## bStopsToMarketAt

| BracketInfo::bStopsToMarketAt |
| --- |

Indicates whether the stop orders of this bracket have a timestamp at which they will be converted to market orders.
**See also**
  BracketInfo::bStopsToMarketAt     BracketInfo::iStopsToMarketAtSsboe     BracketInfo::iStopsToMarketAtUsecs
## bTargetsToMarketAfterPartialFillInSeconds

| BracketInfo::bTargetsToMarketAfterPartialFillInSeconds |
| --- |

Indicates whether the target orders of this bracket have a timer where after being partially filled, which they will be converted to market orders.
**See also**
  BracketInfo::bTargetsToMarketAfterPartialFillInSeconds     BracketInfo::iTargetsToMarketAfterPartialFillInSeconds
## bTargetsToMarketAt

| BracketInfo::bTargetsToMarketAt |
| --- |

Indicates whether the target orders of this bracket have a timestamp at which they will be converted to market orders.
**See also**
  BracketInfo::iTargetsToMarketAtSsboe     BracketInfo::iTargetsToMarketAtUsecs
## bTrailingStop

| BracketInfo::bTrailingStop |
| --- |

Indicates whether the stop orders of this bracket are trailing stops.
## bTrailingStopTriggerTicks

| BracketInfo::bTrailingStopTriggerTicks |
| --- |

Indicates whether the trailing functionality of the stops will be triggered at a certain number of ticks.
**See also**
  BracketInfo::bTrailingStopTriggerTicks     BracketInfo::iTrailingStopTriggerTicks
## iStopArrayLen

| BracketInfo::iStopArrayLen |
| --- |

Number of elements in the array BracketInfo::asStopArray.
## iStopsToMarketAtSsboe

| BracketInfo::iStopsToMarketAtSsboe |
| --- |

Seconds portion of the timestamp at which to convert the stop orders to market orders. The seconds is specified as the number of seconds since the beginning of the epoch.
**See also**
  BracketInfo::bStopsToMarketAt     BracketInfo::iStopsToMarketAtSsboe     BracketInfo::iStopsToMarketAtUsecs
## iStopsToMarketAtUsecs

| BracketInfo::iStopsToMarketAtUsecs |
| --- |

Microseconds portion of the timestamp at which to convert the stop orders to market orders.
**See also**
  BracketInfo::bStopsToMarketAt     BracketInfo::iStopsToMarketAtSsboe     BracketInfo::iStopsToMarketAtUsecs
## iTargetArrayLen

| BracketInfo::iTargetArrayLen |
| --- |

Number of elements in the array BracketInfo::asTargetArray.
## iTargetsToMarketAfterPartialFillInSeconds

| BracketInfo::iTargetsToMarketAfterPartialFillInSeconds |
| --- |

Number of seconds after a partial fill where the target order will be converted to a market order.
**See also**
  BracketInfo::bTargetsToMarketAfterPartialFillInSeconds     BracketInfo::iTargetsToMarketAfterPartialFillInSeconds
## iTargetsToMarketAtSsboe

| BracketInfo::iTargetsToMarketAtSsboe |
| --- |

Seconds portion of the timestamp at which to convert the target orders to market orders. The seconds is specified as the number of seconds since the beginning of the epoch.
**See also**
  BracketInfo::bTargetsToMarketAt     BracketInfo::iTargetsToMarketAtSsboe     BracketInfo::iTargetsToMarketAtUsecs
## iTargetsToMarketAtUsecs

| BracketInfo::iTargetsToMarketAtUsecs |
| --- |

Microseconds portion of the timestamp at which to convert the target orders to market orders.
**See also**
  BracketInfo::bTargetsToMarketAt     BracketInfo::iTargetsToMarketAtSsboe     BracketInfo::iTargetsToMarketAtUsecs
## iTrailByPriceId

| BracketInfo::iTrailByPriceId |
| --- |

Indicates the price type used by the trailing stop.
**See also**
  RApi::BEST_ASK_PRICE     RApi::BEST_BID_PRICE     RApi::TRADE_PRICE
## iTrailingStopTriggerTicks

| BracketInfo::iTrailingStopTriggerTicks |
| --- |

Number of ticks which triggers the trailing stop functionality.
**See also**
  BracketInfo::bTrailingStopTriggerTicks     BracketInfo::iTrailingStopTriggerTicks
## oAccount

| BracketInfo::oAccount |
| --- |

Account on which this bracket order was placed.
## sOrderNum

| BracketInfo::sOrderNum |
| --- |

Order number of the bracket (entry) order
## sStopsToMarketOnReject

| BracketInfo::sStopsToMarketOnReject |
| --- |

A value of "yes" indicates that stop orders will be converted to market orders if rejected.
## sTargetsToMarketWhenTouched

| BracketInfo::sTargetsToMarketWhenTouched |
| --- |

A value of "yes" indicates that target orders will be converted to market orders when the limit price of the order is touched.
