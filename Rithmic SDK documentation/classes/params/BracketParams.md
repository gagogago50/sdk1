> **Namespace:** `RApi`

# RApi::BracketParams

Public Member Functions | Public Attributes | List of all members  RApi::BracketParams Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | BracketParams () |
|  |
| virtual int | clearHandles (int *aiCode) |
|  |
| virtual | ~BracketParams () |
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
| tsNCharcb | sBracketType |
|  |
| tsNCharcb | sOrderOperationType |
|  |
| tsNCharcb | sStopsToMarketOnReject |
|  |
| tsNCharcb | sTargetsToMarketWhenTouched |
|  |

## Detailed Description

This class conveys bracket-specific information when placing bracket orders.
**See also**
  REngine::sendBracketOrder()
## Constructor & Destructor Documentation

## BracketParams()

| BracketParams::BracketParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~BracketParams()

| BracketParams::~BracketParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| BracketParams::~BracketParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int BracketParams::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int BracketParams::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

Initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## Member Data Documentation

## asStopArray

| BracketParams::asStopArray |
| --- |

Array of BracketTier objects representing the set of stop loss orders. For each of these tiers, the BracketTier::llQtyReleased will be ignored.
**See also**
  BracketTier
## asTargetArray

| BracketParams::asTargetArray |
| --- |

Array of BracketTier objects representing the set of target/profit orders. For each of these tiers, the BracketTier::llQtyReleased will be ignored.
**See also**
  BracketTier
## bStopsToMarketAt

| BracketParams::bStopsToMarketAt |
| --- |

Indicates whether the stop orders of this bracket should have a time at which they will be converted to market orders.
**See also**
  BracketParams::bStopsToMarketAt     BracketParams::iStopsToMarketAtSsboe     BracketParams::iStopsToMarketAtUsecs
## bTargetsToMarketAfterPartialFillInSeconds

| BracketParams::bTargetsToMarketAfterPartialFillInSeconds |
| --- |

Indicates whether the target orders of this bracket should have a timer where after being partially filled, which they are converted to market orders.
**See also**
  BracketParams::bTargetsToMarketAfterPartialFillInSeconds     BracketParams::iTargetsToMarketAfterPartialFillInSeconds
## bTargetsToMarketAt

| BracketParams::bTargetsToMarketAt |
| --- |

Indicates whether the target orders of this bracket have a time at which they should be converted to market orders.
**See also**
  BracketParams::iTargetsToMarketAtSsboe     BracketParams::iTargetsToMarketAtUsecs
## bTrailingStop

| BracketParams::bTrailingStop |
| --- |

Indicates whether the stop orders of this bracket should be trailing stops. When enabling trailing stops by setting this value to true, one must also specify the trail by price id, which specifies which price to trail.
**See also**
  BracketParams::iTrailByPriceId
## bTrailingStopTriggerTicks

| BracketParams::bTrailingStopTriggerTicks |
| --- |

Indicates whether the trailing functionality of the stops should be triggered at a certain number of ticks. This functionality can only be enabled if trailing stop are also enabled.
**See also**
  BracketParams::bTrailingStop     BracketParams::bTrailingStopTriggerTicks     BracketParams::iTrailingStopTriggerTicks
## iStopArrayLen

| BracketParams::iStopArrayLen |
| --- |

Number of elements in the array BracketParams::asStopArray.
## iStopsToMarketAtSsboe

| BracketParams::iStopsToMarketAtSsboe |
| --- |

Seconds portion of the time at which to convert the stop orders to market orders. The seconds is specified as the number of seconds since the beginning of the epoch.
**See also**
  BracketParams::bStopsToMarketAt     BracketParams::iStopsToMarketAtSsboe     BracketParams::iStopsToMarketAtUsecs
## iStopsToMarketAtUsecs

| BracketParams::iStopsToMarketAtUsecs |
| --- |

Microseconds portion of the time at which to convert the stop orders to market orders.
**See also**
  BracketParams::bStopsToMarketAt     BracketParams::iStopsToMarketAtSsboe     BracketParams::iStopsToMarketAtUsecs
## iTargetArrayLen

| BracketParams::iTargetArrayLen |
| --- |

Number of elements in the array BracketParams::asTargetArray.
## iTargetsToMarketAfterPartialFillInSeconds

| BracketParams::iTargetsToMarketAfterPartialFillInSeconds |
| --- |

Number of seconds after a partial fill where the target order will be converted to a market order.
**See also**
  BracketParams::bTargetsToMarketAfterPartialFillInSeconds     BracketParams::iTargetsToMarketAfterPartialFillInSeconds
## iTargetsToMarketAtSsboe

| BracketParams::iTargetsToMarketAtSsboe |
| --- |

Seconds portion of the time at which to convert the target orders to market orders. The seconds is specified as the number of seconds since the beginning of the epoch.
**See also**
  BracketParams::bTargetsToMarketAt     BracketParams::iTargetsToMarketAtSsboe     BracketParams::iTargetsToMarketAtUsecs
## iTargetsToMarketAtUsecs

| BracketParams::iTargetsToMarketAtUsecs |
| --- |

Microseconds portion of the timestamp at which to convert the target orders to market orders.
**See also**
  BracketParams::bTargetsToMarketAt     BracketParams::iTargetsToMarketAtSsboe     BracketParams::iTargetsToMarketAtUsecs
## iTrailByPriceId

| BracketParams::iTrailByPriceId |
| --- |

Indicates the price type used by the trailing stop. This setting is used in conjunction with BracketParams::bTrailingStop.

For example, specifying trade price will cause the trailing stop to follow the most recent trade price.
**See also**
  BracketParams::bTrailingStop     RApi::BEST_ASK_PRICE     RApi::BEST_BID_PRICE     RApi::TRADE_PRICE
## iTrailingStopTriggerTicks

| BracketParams::iTrailingStopTriggerTicks |
| --- |

Number of ticks which triggers the trailing stop functionality.
**See also**
  BracketParams::bTrailingStopTriggerTicks     BracketParams::iTrailingStopTriggerTicks
## sBracketType

| BracketParams::sBracketType |
| --- |

Bracket type of the order, specifying whether targets and/or stops are to be released, and from where the tick offset of each are calculated. Required.
**See also**
  sBRACKET_TYPE_TARGET_AND_STOP     sBRACKET_TYPE_TARGET_ONLY     sBRACKET_TYPE_STOP_ONLY     sBRACKET_TYPE_TARGET_AND_STOP_STATIC     sBRACKET_TYPE_TARGET_ONLY_STATIC     sBRACKET_TYPE_STOP_ONLY_STATIC
## sOrderOperationType

| BracketParams::sOrderOperationType |
| --- |

Order operation type of the order, specifying cancellation behavior of the exit orders. This is required when placing target and stop orders.
**See also**
  sORDER_OPERATION_TYPE_AFOCCA     sORDER_OPERATION_TYPE_FOCCA     sORDER_OPERATION_TYPE_FCA     sORDER_OPERATION_TYPE_CCA
## sStopsToMarketOnReject

| BracketParams::sStopsToMarketOnReject |
| --- |

A value of "yes" indicates that stop orders should be converted to market orders if rejected. Otherwise set to null or empty.
## sTargetsToMarketWhenTouched

| BracketParams::sTargetsToMarketWhenTouched |
| --- |

A value of "yes" indicates that target orders should be converted to market orders when the limit price of the order is touched. Otherwise set to null or empty.
