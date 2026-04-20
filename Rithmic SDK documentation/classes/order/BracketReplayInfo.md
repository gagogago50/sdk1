> **Namespace:** `RApi`

# RApi::BracketReplayInfo

Public Member Functions | Public Attributes | List of all members  RApi::BracketReplayInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | BracketReplayInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~BracketReplayInfo () |
|  |

| Public Attributes |
| --- |
| BracketInfo * | asBracketArray |
|  |
| int | iArrayLen |
|  |
| int | iRpCode |
|  |
| AccountInfo | oAccount |
|  |

## Detailed Description

This class conveys the results from a call to REngine::replayBrackets(). If the request was handled without error, the iRpCode will be zero.

Each bracket is represented by a BracketInfo instance. This bracket information will not provide all order details, but the bracket-specific order details.
**See also**
  REngine::replayBrackets     RCallbacks::BracketReplay
## Constructor & Destructor Documentation

## BracketReplayInfo()

| BracketReplayInfo::BracketReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~BracketReplayInfo()

| BracketReplayInfo::~BracketReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| BracketReplayInfo::~BracketReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int BracketReplayInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## asBracketArray

| BracketReplayInfo::asBracketArray |
| --- |

Array of BracketInfo objects representing the set of bracket orders.
**See also**
  BracketInfo
## iArrayLen

| BracketReplayInfo::iArrayLen |
| --- |

Number of elements in the array BracketReplayInfo::asBracketArray.
## iRpCode

| BracketReplayInfo::iRpCode |
| --- |

Response code associated with the replay brackets request.
 A non-zero value can be interpreted as an error.
## oAccount

| BracketReplayInfo::oAccount |
| --- |

Account specified when calling REngine::replayBrackets().
