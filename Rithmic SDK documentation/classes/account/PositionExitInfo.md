> **Namespace:** `RApi`

# RApi::PositionExitInfo

Public Member Functions | Public Attributes | List of all members  RApi::PositionExitInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | PositionExitInfo () |
|  |
| virtual | ~PositionExitInfo () |
|  |

| Public Attributes |
| --- |
| int | iRpCode |
|  |
| AccountInfo | oAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb | sEntryType |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTag |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sTradingAlgorithm |
|  |
| tsNCharcb | sUserMsg |
|  |
| tsNCharcb | sWindowName |
|  |

## Detailed Description

An instance of this class returns the result returned by the infrastructure of a call to REngine::exitPosition().

The PositionExitInfo object will have the parameters passed into REngine::exitPosition() as well as the response code for the exit position request from the infrastructure.

A non-zero value of the response code iRpCode indicates some error condition.
**See also**
  REngine::exitPosition()
## Constructor & Destructor Documentation

## PositionExitInfo()

| PositionExitInfo::PositionExitInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~PositionExitInfo()

| PositionExitInfo::~PositionExitInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| PositionExitInfo::~PositionExitInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int PositionExitInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the PositionExitInfo object to stdout. If a tsNCharcb is empty, then the string "<empty>" will be printed.
## Member Data Documentation

## iRpCode

| PositionExitInfo::iRpCode |
| --- |

The response code returned by the infrastructure. A non-zero response code can be interpreted as an error.
## oAccount

| PositionExitInfo::oAccount |
| --- |

Represents the account for which the exit position request was made.
## pContext

| PositionExitInfo::pContext |
| --- |

The context initially sent with REngine::exitPosition().
## sEntryType

| PositionExitInfo::sEntryType |
| --- |

Entry type (manual or auto) passed into REngine::exitPosition().
## sExchange

| PositionExitInfo::sExchange |
| --- |

Exchange of the instrument passed into REngine::exitPosition().
## sTag

| PositionExitInfo::sTag |
| --- |

Tag passed into REngine::exitPosition().
## sTicker

| PositionExitInfo::sTicker |
| --- |

Ticker symbol of the instrument passed into REngine::exitPosition().
## sTradingAlgorithm

| PositionExitInfo::sTradingAlgorithm |
| --- |

Trading algorithm passed into REngine::exitPosition().
## sUserMsg

| PositionExitInfo::sUserMsg |
| --- |

User msg passed into REngine::exitPosition().
## sWindowName

| PositionExitInfo::sWindowName |
| --- |

Window name passed into REngine::exitPosition().
