> **Namespace:** `RApi`

# RApi::QuoteCancelParams

Public Member Functions | Public Attributes | List of all members  RApi::QuoteCancelParams Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
|  | QuoteCancelParams () |
|  |
| virtual | ~QuoteCancelParams () |
|  |

| Public Attributes |
| --- |
| AccountInfo * | pAccount |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sUserMsg |
|  |

## Detailed Description

This class encapsulates information needed to submit a cancel request for a single instrument's quote.
**See also**
  REngine::cancelQuoteList
## Constructor & Destructor Documentation

## QuoteCancelParams()

| QuoteCancelParams::QuoteCancelParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~QuoteCancelParams()

| QuoteCancelParams::~QuoteCancelParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| QuoteCancelParams::~QuoteCancelParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int QuoteCancelParams::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine clears all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. (Internally used by the constructor.)
## Member Data Documentation

## pAccount

| RApi::QuoteCancelParams::pAccount |
| --- |

Account of the quote to cancel.
## sExchange

| RApi::QuoteCancelParams::sExchange |
| --- |

Exchange of the instrument whose quote to cancel.
## sTicker

| RApi::QuoteCancelParams::sTicker |
| --- |

Symbol of the instrument whose quote to cancel.
## sUserMsg

| RApi::QuoteCancelParams::sUserMsg |
| --- |

Optionally specifies a new user message to associate with this quote. If this value is empty (pUserMsg -> pData is NULL and pUserMsg -> iDataLen is zero), then any existing user message (QuoteParams::sUserMsg) will remain associated with this quote.
