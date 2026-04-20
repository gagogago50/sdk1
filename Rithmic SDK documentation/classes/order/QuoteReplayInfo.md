> **Namespace:** `RApi`

# RApi::QuoteReplayInfo

Public Member Functions | Public Attributes | List of all members  RApi::QuoteReplayInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | QuoteReplayInfo () |
|  |
| virtual | ~QuoteReplayInfo () |
|  |

| Public Attributes |
| --- |
| int | iRpCode |
|  |
| AccountInfo | oAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

This class demarcates the end of a stream of historical quote data.

The QuoteReplayInfo class is used to convey the conclusion and/or response code associated with a call to REngine::replayQuotes() via RCallbacks::QuoteReplay().

Information about the actual quotes will be conveyed via RCallbacks::Quote(), with the QuoteInfo instance's callback type set to indicate historical data.
## Constructor & Destructor Documentation

## QuoteReplayInfo()

| QuoteReplayInfo::QuoteReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~QuoteReplayInfo()

| QuoteReplayInfo::~QuoteReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| QuoteReplayInfo::~QuoteReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int QuoteReplayInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## iRpCode

| QuoteReplayInfo::iRpCode |
| --- |

Response code associated with the quote replay request. A non-zero response code can be interpreted as an error.
## oAccount

| QuoteReplayInfo::oAccount |
| --- |

Account used when requesting the quote replay.
## pContext

| QuoteReplayInfo::pContext |
| --- |

Context pointer passed in when calling REngine::replayQuotes().
## sRpCode

| QuoteReplayInfo::sRpCode |
| --- |

The string equivalent of the response code QuoteReplayInfo::iRpCode. If QuoteReplayInfo::iRpCode equals API_OK, this string may be empty.
