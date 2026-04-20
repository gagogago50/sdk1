> **Namespace:** `RApi`

# RApi::AccountListInfo

Public Member Functions | Public Attributes | List of all members  RApi::AccountListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AccountListInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AccountListInfo () |
|  |

| Public Attributes |
| --- |
| AccountInfo * | asAccountInfoArray |
|  |
| int | iArrayLen |
|  |
| int | iRpCode |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class represents a list of accounts.

An AccountListInfo object is used to pass an array of AccountInfo via RCallbacks::AccountList().
**See also**
  REngine::getAccounts()
## Constructor & Destructor Documentation

## AccountListInfo()

| AccountListInfo::AccountListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~AccountListInfo()

| AccountListInfo::~AccountListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AccountListInfo::~AccountListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int AccountListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the AccountListInfo object to stdout. If a tsNCharcb has an iDataLen value of zero, then the string "<empty>" will be printed.
## Member Data Documentation

## asAccountInfoArray

| AccountListInfo::asAccountInfoArray |
| --- |

This is an array of AccountInfo objects. The array length is specified by AccountListInfo::iArrayLen.
## iArrayLen

| AccountListInfo::iArrayLen |
| --- |

This variable specifies the array length.
## iRpCode

| AccountListInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::getAccounts(). A non-zero response code can be interpreted as an error.
## sRpCode

| AccountListInfo::sRpCode |
| --- |

This is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
