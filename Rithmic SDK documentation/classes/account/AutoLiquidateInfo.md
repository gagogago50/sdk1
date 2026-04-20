> **Namespace:** `RApi`

# RApi::AutoLiquidateInfo

Public Member Functions | Public Attributes | List of all members  RApi::AutoLiquidateInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AutoLiquidateInfo () |
|  |
| virtual int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AutoLiquidateInfo () |
|  |

| Public Attributes |
| --- |
| double | dAutoLiquidateThresholdCurrentValue |
|  |
| int | eAutoLiquidateThresholdCurrentValue |
|  |
| int | eAutoLiquidateThresholdCurrentValueSsboe |
|  |
| int | iAutoLiquidateThresholdCurrentValueSsboe |
|  |
| int | iCallbackType |
|  |
| AccountInfo | oAccount |
|  |

## Detailed Description

An instance of this class represents the state of an Account's auto-liquidate threshold (current) value, along with the time of that value.
**See also**
  REngine::subscribeAutoLiquidate()     REngine::unsubscribeAutoLiquidate()     RCallbacks::AutoLiquidate()
## Constructor & Destructor Documentation

## AutoLiquidateInfo()

| AutoLiquidateInfo::AutoLiquidateInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~AutoLiquidateInfo()

| AutoLiquidateInfo::~AutoLiquidateInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AutoLiquidateInfo::~AutoLiquidateInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## clearHandles()
     **
| int AutoLiquidateInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int AutoLiquidateInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## dump()
    **
| int AutoLiquidateInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the information to stdout.
## Member Data Documentation

## dAutoLiquidateThresholdCurrentValue

| AutoLiquidateInfo::dAutoLiquidateThresholdCurrentValue |
| --- |

Auto-liquidate threshold value.
## eAutoLiquidateThresholdCurrentValue

| AutoLiquidateInfo::eAutoLiquidateThresholdCurrentValue |
| --- |

Indicates how to interpret the value in AutoLiquidateInfo::dAutoLiquidateThresholdCurrentValue.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eAutoLiquidateThresholdCurrentValueSsboe

| AutoLiquidateInfo::eAutoLiquidateThresholdCurrentValueSsboe |
| --- |

Indicates how to interpret the value in AutoLiquidateInfo::iAutoLiquidateThresholdCurrentValueSsboe
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## iAutoLiquidateThresholdCurrentValueSsboe

| AutoLiquidateInfo::iAutoLiquidateThresholdCurrentValueSsboe |
| --- |

Seconds-since-the-beginning-of-epoch (sometimes referred to as unix time) timestamp of when the auto-liquidate threshold value was calculated.
## iCallbackType

| AutoLiquidateInfo::iCallbackType |
| --- |

Indicates if the info is from a cache (image/snapshot) or the real-time data stream (update).

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## oAccount

| AutoLiquidateInfo::oAccount |
| --- |

Account associated with these values.
