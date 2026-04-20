> **Namespace:** `RApi`

# RApi::IbListInfo

Public Member Functions | Public Attributes | List of all members  RApi::IbListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | IbListInfo () |
|  |
| virtual | ~IbListInfo () |
|  |

| Public Attributes |
| --- |
| int | iIbIdArrayLen |
|  |
| int | iRpCode |
|  |
| void * | pContext |
|  |
| tsNCharcb * | pIbIdArray |
|  |

## Detailed Description

This class contains a list of IBs, and represents the response resulting from a call to REngine::listIbs().
**See also**
  REngine::listIbs()     RCallbacks::IbList()
## Constructor & Destructor Documentation

## IbListInfo()

| IbListInfo::IbListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~IbListInfo()

| IbListInfo::~IbListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| IbListInfo::~IbListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int IbListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## iIbIdArrayLen

| IbListInfo::iIbIdArrayLen |
| --- |

Length of IbListInfo::pIbIdArray.
## iRpCode

| IbListInfo::iRpCode |
| --- |

Response code, if available, associated with the request REngine::listIbs(). A non-zero response code can be interpreted as an error.
## pContext

| IbListInfo::pContext |
| --- |

User-providec context object, if passed in when the corresponding REngine::listIbs() was called
## pIbIdArray

| IbListInfo::pIbIdArray |
| --- |

Array of tsNCharcbs, where each tsNCharcb is an IB identifier. The array length is specified by IbListInfo::iIbIdArrayLen.
