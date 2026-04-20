> **Namespace:** `RApi`

# RApi::ReplayBarParams

Public Member Functions | Public Attributes | List of all members  RApi::ReplayBarParams Class Reference

`#include <RApiPlus.h>`  Inheritance diagram for RApi::ReplayBarParams:

| Public Member Functions |
| --- |
|  | ReplayBarParams () |
|  |
| virtual | ~ReplayBarParams () |
|  |
| Public Member Functions inherited from RApi::BarParams |
|  | BarParams () |
|  |
| virtual | ~BarParams () |
|  |

| Public Attributes |
| --- |
| int | iEndSsboe |
|  |
| int | iEndUsecs |
|  |
| int | iStartSsboe |
|  |
| int | iStartUsecs |
|  |
| tsNCharcb | sEndDate |
|  |
| tsNCharcb | sStartDate |
|  |
| Public Attributes inherited from RApi::BarParams |
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

This class conveys parameters needed to request historical data bars.

Additional parameters are specified in the base class, BarParams.
**See also**
  BarParams
## Constructor & Destructor Documentation

## ReplayBarParams()

| ReplayBarParams::ReplayBarParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integers and doubles are initialized to zero. Boolean values are set to false. Pointer values are set to NULL. Pointers to arrays are set to NULL and their lengths are set to zero.
## ~ReplayBarParams()

| ReplayBarParams::~ReplayBarParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| ReplayBarParams::~ReplayBarParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Data Documentation

## iEndSsboe

| RApi::ReplayBarParams::iEndSsboe |
| --- |

Seconds portion of the end timestamp. Used for range, tick, volume, second and minute bars.
**See also**
  BAR_TYPE_RANGE     BAR_TYPE_TICK     BAR_TYPE_VOLUME     BAR_TYPE_SECOND     BAR_TYPE_MINUTE
## iEndUsecs

| RApi::ReplayBarParams::iEndUsecs |
| --- |

Microseconds portion of the end timestamp. Used for range, tick and volume bars.
**See also**
  BAR_TYPE_RANGE     BAR_TYPE_TICK     BAR_TYPE_VOLUME
## iStartSsboe

| RApi::ReplayBarParams::iStartSsboe |
| --- |

Seconds portion of the start timestamp. Used for range, tick, volume, second and minute bars.
**See also**
  BAR_TYPE_RANGE     BAR_TYPE_TICK     BAR_TYPE_VOLUME     BAR_TYPE_SECOND     BAR_TYPE_MINUTE
## iStartUsecs

| RApi::ReplayBarParams::iStartUsecs |
| --- |

Microseconds portion of the start timestamp. Used for range, tick and volume bars.
**See also**
  BAR_TYPE_RANGE     BAR_TYPE_TICK     BAR_TYPE_VOLUME
## sEndDate

| RApi::ReplayBarParams::sEndDate |
| --- |

End date for time range of daily or weekly bars, in CCYYMMDD format.
 If an empty date is sent (string of zero length), data up the latest available date will be returned.
**See also**
  BAR_TYPE_DAILY     BAR_TYPE_WEEKLY
## sStartDate

| RApi::ReplayBarParams::sStartDate |
| --- |

Start date for time range of daily or weekly bars, in CCYYMMDD format. If an empty date is sent (string of zero length), data going back to the earliest available date will be returned.
**See also**
  BAR_TYPE_DAILY     BAR_TYPE_WEEKLY
