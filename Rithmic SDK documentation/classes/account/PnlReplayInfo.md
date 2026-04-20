> **Namespace:** `RApi`

# RApi::PnlReplayInfo

Public Member Functions | Public Attributes | List of all members  RApi::PnlReplayInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | PnlReplayInfo () |
|  |
| virtual | ~PnlReplayInfo () |
|  |

| Public Attributes |
| --- |
| PnlInfo * | asPnlInfoArray |
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

An instance of this class represents the p/l of an Account.

A PnlReplayInfo object is used to pass an array of PnlInfo instances returned via RCallbacks::PnlReplay() resulting from a call to REngine::replayPnls().
## Constructor & Destructor Documentation

## PnlReplayInfo()

| PnlReplayInfo::PnlReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~PnlReplayInfo()

| PnlReplayInfo::~PnlReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| PnlReplayInfo::~PnlReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int PnlReplayInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the PnlReplayInfo object to stdout. If a tsNCharcb has an iDataLen value of MNM_EMPTY_DATA_ITEM_LEN, then the string "<empty>" will be printed.
## Member Data Documentation

## asPnlInfoArray

| PnlReplayInfo::asPnlInfoArray |
| --- |

This is an array of PnlInfo objects. The array length is specified by PnlReplayInfo::iArrayLen.
## iArrayLen

| PnlReplayInfo::iArrayLen |
| --- |

This variable specifies the array length.
## iRpCode

| PnlReplayInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::replayPnls(). A non-zero response code can be interpreted as an error.
## oAccount

| PnlReplayInfo::oAccount |
| --- |

This member variable respresents the account used when requesting the pnl replay.
## sRpCode

| PnlReplayInfo::sRpCode |
| --- |

The is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
