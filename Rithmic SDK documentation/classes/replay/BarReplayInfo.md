> **Namespace:** `RApi`

# RApi::BarReplayInfo

Public Member Functions | Public Attributes | List of all members  RApi::BarReplayInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | BarReplayInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~BarReplayInfo () |
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
| int | iEndSsboe |
|  |
| int | iEndUsecs |
|  |
| int | iOpenSsm |
|  |
| int | iRpCode |
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
| long long | llSpecifiedVolume |
|  |
| void * | pContext |
|  |
| tsNCharcb | sEndDate |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sRpCode |
|  |
| tsNCharcb | sStartDate |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class demarcates the end of a stream of historical bar data.

The BarReplayInfo class is used to convey the conclusion of the data stream and the response code associated with a call to REngine::replayBars(). When the data stream concludes, RCallbacks::BarReplay() is invoked, passing a BarReplayInfo instance containing the parameter values initially passed into the corresponding call to REngine::replayBars().

If the returned bars does not include data for the entire requested time period, and/or if the number of returned bars is a round number (such as 10000), then it is possible that the request was truncated. One can request the missing bars by shifting the time period of the original request to cover the truncated data. This truncation can occur when large amounts of data are requested.
**See also**
  REngine::replayBars()     RCallbacks::Bar()     RCallbacks::BarReplay()
## Constructor & Destructor Documentation

## BarReplayInfo()

| BarReplayInfo::BarReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~BarReplayInfo()

| BarReplayInfo::~BarReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| BarReplayInfo::~BarReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int BarReplayInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## bCustomSession

| BarReplayInfo::bCustomSession |
| --- |

The custom session flag passed in the initial call.
## bProfile

| BarReplayInfo::bProfile |
| --- |

The volume/data profile flag passed in the initial call.
## dSpecifiedRange

| BarReplayInfo::dSpecifiedRange |
| --- |

The range passed in the initial call.
## iCloseSsm

| BarReplayInfo::iCloseSsm |
| --- |

The close session time, expressed as seconds since midnight, passed in the initial call.
## iEndSsboe

| BarReplayInfo::iEndSsboe |
| --- |

The end ssboe passed in the initial call.
## iEndUsecs

| BarReplayInfo::iEndUsecs |
| --- |

The end usecs passed in the initial call.
## iOpenSsm

| BarReplayInfo::iOpenSsm |
| --- |

The open session time, expressed as seconds since midnight, passed in the initial call.
## iRpCode

| BarReplayInfo::iRpCode |
| --- |

The response code associated with the response to REngine::replayBars().
## iSpecifiedMinutes

| BarReplayInfo::iSpecifiedMinutes |
| --- |

The period (in minutes) passed in the initial call.
## iSpecifiedSeconds

| BarReplayInfo::iSpecifiedSeconds |
| --- |

The period (in seconds) initially requested via REngine::replayBars().
## iSpecifiedTicks

| BarReplayInfo::iSpecifiedTicks |
| --- |

The ticks passed in the initial call.
## iStartSsboe

| BarReplayInfo::iStartSsboe |
| --- |

The start ssboe passed in the initial call.
## iStartUsecs

| BarReplayInfo::iStartUsecs |
| --- |

The start usecs passed in the initial call.
## iType

| BarReplayInfo::iType |
| --- |

The bar type passed in the initial call.
## llSpecifiedVolume

| BarReplayInfo::llSpecifiedVolume |
| --- |

The volume passed in the initial call.
## pContext

| BarReplayInfo::pContext |
| --- |

If a context pointer was passed into REngine::replayBars() via BarParams::pContext, it will be returned here. The callback must be associated with the same instance of REngine on which REngine::replayBars() was called. In other words, the context pointer is only supported within an instance of REngine.
**See also**
  BarParams::pContext
## sEndDate

| BarReplayInfo::sEndDate |
| --- |

The end date passed in the initial call.
## sExchange

| BarReplayInfo::sExchange |
| --- |

The exchange passed in the initial call.
## sRpCode

| BarReplayInfo::sRpCode |
| --- |

The string equivalent of the response code BarReplayInfo::iRpCode. If BarReplayInfo::iRpCode equals API_OK, this string may be empty.
## sStartDate

| BarReplayInfo::sStartDate |
| --- |

The start date passed in the initial call.
## sTicker

| BarReplayInfo::sTicker |
| --- |

The ticker passed in the initial call.
