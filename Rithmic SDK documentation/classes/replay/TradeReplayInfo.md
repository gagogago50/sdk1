> **Namespace:** `RApi`

# RApi::TradeReplayInfo

Public Member Functions | Public Attributes | List of all members  RApi::TradeReplayInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | TradeReplayInfo () |
|  |
| virtual | ~TradeReplayInfo () |
|  |

| Public Attributes |
| --- |
| int | iEndSsboe |
|  |
| int | iRpCode |
|  |
| int | iStartSsboe |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sRpCode |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

An instance of this class represents the result of a prior call to REngine::replayTrades().

The TradeReplayInfo class is used to convey the conclusion and/or response code associated with a call to REngine::replayTrades().
## Constructor & Destructor Documentation

## TradeReplayInfo()

| TradeReplayInfo::TradeReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~TradeReplayInfo()

| TradeReplayInfo::~TradeReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| TradeReplayInfo::~TradeReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int TradeReplayInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## iEndSsboe

| TradeReplayInfo::iEndSsboe |
| --- |

The end ssboe passed in the initial call.
## iRpCode

| TradeReplayInfo::iRpCode |
| --- |

The response code associated with the response to REngine::replayTrades().
## iStartSsboe

| TradeReplayInfo::iStartSsboe |
| --- |

The start ssboe passed in the initial call.
## sExchange

| TradeReplayInfo::sExchange |
| --- |

The exchange passed in the initial call.
## sRpCode

| TradeReplayInfo::sRpCode |
| --- |

The string equivalent of the response code TradeReplayInfo::iRpCode. If TradeReplayInfo::iRpCode equals API_OK, this string may be empty.
## sTicker

| TradeReplayInfo::sTicker |
| --- |

The ticker passed in the initial call.
