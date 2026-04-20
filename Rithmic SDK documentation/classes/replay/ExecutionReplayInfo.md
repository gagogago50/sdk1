> **Namespace:** `RApi`

# RApi::ExecutionReplayInfo

Public Member Functions | Public Attributes | List of all members  RApi::ExecutionReplayInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | ExecutionReplayInfo () |
|  |
| virtual | ~ExecutionReplayInfo () |
|  |

| Public Attributes |
| --- |
| OrderFillReport * | asFillReportArray |
|  |
| int | iArrayLen |
|  |
| int | iRpCode |
|  |
| AccountInfo | oAccount |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class represents a collection of fills. Each execution will be represented by a OrderFillReport instance.

The ExecutionReplayInfo class is used to pass a list of executions via the RCallbacks::ExecutionReplay callback resulting from a call to REngine::replayExecutions().
## Constructor & Destructor Documentation

## ExecutionReplayInfo()

| ExecutionReplayInfo::ExecutionReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~ExecutionReplayInfo()

| ExecutionReplayInfo::~ExecutionReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| ExecutionReplayInfo::~ExecutionReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int ExecutionReplayInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## asFillReportArray

| ExecutionReplayInfo::asFillReportArray |
| --- |

An array of OrderFillReport objects representing the set of fills. If a position was carried over from a prior trading session, it will appear as a fill report with a type/report id of "sod". The size and price of the sod fill reflect the position carried over and the effective price at which the position was carried over or "filled".
**See also**
  SodReport
## iArrayLen

| ExecutionReplayInfo::iArrayLen |
| --- |

The number of elements in the array ExecutionReplayInfo::asFillReportArray.
## iRpCode

| ExecutionReplayInfo::iRpCode |
| --- |

The response code associated with the response to REngine::replayExecutions().
## oAccount

| ExecutionReplayInfo::oAccount |
| --- |

The Account used when calling REngine::replayExecutions().
## sRpCode

| ExecutionReplayInfo::sRpCode |
| --- |

The string equivalent of the response code ExecutionReplayInfo::iRpCode. If ExecutionReplayInfo::iRpCode equals API_OK, this string may be empty.
