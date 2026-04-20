> **Namespace:** `RApi`

# RApi::EasyToBorrowListInfo

Public Member Functions | Public Attributes | List of all members  RApi::EasyToBorrowListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | EasyToBorrowListInfo () |
|  |
| virtual | ~EasyToBorrowListInfo () |
|  |

| Public Attributes |
| --- |
| int | iRpCode |
|  |
| void * | pContext |
|  |

## Detailed Description

This class represents the status of a request to get the easy-to-borrow list.

The EasyToBorrowListInfo class represents the status of a request to get the easy-to-borrow list from the infrastructure.
**See also**
  REngine::getEasyToBorrowList()     RCallbacks::EasyToBorrowList()
## Constructor & Destructor Documentation

## EasyToBorrowListInfo()

| EasyToBorrowListInfo::EasyToBorrowListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~EasyToBorrowListInfo()

| EasyToBorrowListInfo::~EasyToBorrowListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| EasyToBorrowListInfo::~EasyToBorrowListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int EasyToBorrowListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## iRpCode

| EasyToBorrowListInfo::iRpCode |
| --- |

Response code associated with the request REngine::getEasyToBorrowList(). A non-zero response code can be interpreted as an error. The errors are defined in the header file.
## pContext

| EasyToBorrowListInfo::pContext |
| --- |

Context pointer, if specified when calling REngine::getEasyToBorrowList().
