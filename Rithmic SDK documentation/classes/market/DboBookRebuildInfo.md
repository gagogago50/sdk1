> **Namespace:** `RApi`

# RApi::DboBookRebuildInfo

Public Member Functions | Public Attributes | List of all members  RApi::DboBookRebuildInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | DboBookRebuildInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~DboBookRebuildInfo () |
|  |

| Public Attributes |
| --- |
| bool | bPrice |
|  |
| double | dPrice |
|  |
| int | iRpCode |
|  |
| void * | pContext |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sRpCode |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents status information related to requesting an dbo order book image.

DboBookRebuildInfo conveys the conclusion and/or response code associated with a call to REngine::rebuildDboBook(). The individual orders comprising the order book image will be conveyed via RCallbacks::Dbo().
**See also**
  REngine::rebuildDboBook()     RCallbacks::Dbo()     RCallbacks::DboBookRebuild()
## Constructor & Destructor Documentation

## DboBookRebuildInfo()

| DboBookRebuildInfo::DboBookRebuildInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~DboBookRebuildInfo()

| DboBookRebuildInfo::~DboBookRebuildInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| DboBookRebuildInfo::~DboBookRebuildInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int DboBookRebuildInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPrice

| DboBookRebuildInfo::bPrice |
| --- |

Indicates if a price was specified when requesting the dbo order book image.
## dPrice

| DboBookRebuildInfo::dPrice |
| --- |

Price specified when requesting the dbo order book image, if DboBookRebuildInfo::bPrice is true.
## iRpCode

| DboBookRebuildInfo::iRpCode |
| --- |

Response code associated with the rebuild dbo book request.
 Most non-zero values can be interpreted as errors, although some can be expected, such as receiving API_NO_DATA (7) if there is no dbo data for a given price level.
## pContext

| DboBookRebuildInfo::pContext |
| --- |

If a context pointer was passed into REngine::rebuildDboBook(), it will be returned here. The callback must be associated With the same instance of REngine on which REngine::rebuildDboBook() was called. In other words, the context pointer is only supported within an instance of REngine. If a context pointer was not passed when calling REngine::rebuildDboBook(), this will be null.
## sExchange

| DboBookRebuildInfo::sExchange |
| --- |

Exchange for which the dbo order book image was requested.
## sRpCode

| DboBookRebuildInfo::sRpCode |
| --- |

The string equivalent of the response code DboBookRebuildInfo::iRpCode. If DboBookRebuildInfo::iRpCode equals API_OK, this string may be empty.
## sTicker

| DboBookRebuildInfo::sTicker |
| --- |

Ticker for which the dbo order book image was requested.
