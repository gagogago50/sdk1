> **Namespace:** `RApi`

# RApi::SingleOrderReplayInfo

Public Member Functions | Public Attributes | List of all members  RApi::SingleOrderReplayInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | SingleOrderReplayInfo () |
|  |
| virtual | ~SingleOrderReplayInfo () |
|  |

| Public Attributes |
| --- |
| int | iRpCode |
|  |
| AccountInfo | oAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb | sDate |
|  |
| tsNCharcb | sOrderNum |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class represents the conclusion of results from a prior call to REngine::replaySingleOrder().

The SingleOrderReplayInfo class is used to convey the conclusion and response code associated with a call to REngine::replaySingleOrder().
**See also**
  REngine::replaySingleOrder     RCallbacks::SingleOrderReplay
## Constructor & Destructor Documentation

## SingleOrderReplayInfo()

| SingleOrderReplayInfo::SingleOrderReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~SingleOrderReplayInfo()

| SingleOrderReplayInfo::~SingleOrderReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| SingleOrderReplayInfo::~SingleOrderReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int SingleOrderReplayInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## iRpCode

| SingleOrderReplayInfo::iRpCode |
| --- |

The response code associated with the response to REngine::replaySingleOrder().
## oAccount

| SingleOrderReplayInfo::oAccount |
| --- |

An equivalent AccountInfo passed in the initial call.
## pContext

| SingleOrderReplayInfo::pContext |
| --- |

The context pointer passed in the initial call.
## sDate

| SingleOrderReplayInfo::sDate |
| --- |

If applicable, the date passed in the initial call.
## sOrderNum

| SingleOrderReplayInfo::sOrderNum |
| --- |

The order number passed in the initial call.
## sRpCode

| SingleOrderReplayInfo::sRpCode |
| --- |

The string equivalent of the response code SingleOrderReplayInfo::iRpCode. If SingleOrderReplayInfo::iRpCode equals API_OK, this string may be empty.
