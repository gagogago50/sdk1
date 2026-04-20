> **Namespace:** `RApi`

# RApi::ProductRmsListInfo

Public Member Functions | Public Attributes | List of all members  RApi::ProductRmsListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | ProductRmsListInfo () |
|  |
| virtual | ~ProductRmsListInfo () |
|  |

| Public Attributes |
| --- |
| ProductRmsInfo * | asProductRmsInfoArray |
|  |
| int | iArrayLen |
|  |
| int | iRpCode |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class represents a list of ProductRmsInfo instances.

An ProductRmsListInfo object is used to pass an array of ProductRmsInfo via RCallbacks::ProductRmsList().
## Constructor & Destructor Documentation

## ProductRmsListInfo()

| ProductRmsListInfo::ProductRmsListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~ProductRmsListInfo()

| ProductRmsListInfo::~ProductRmsListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| ProductRmsListInfo::~ProductRmsListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int ProductRmsListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the ProductRmsListInfo object to stdout. If a tsNCharcb has an iDataLen value of MNM_EMPTY_DATA_ITEM_LEN, then the string "<empty>" will be printed.
## Member Data Documentation

## asProductRmsInfoArray

| ProductRmsListInfo::asProductRmsInfoArray |
| --- |

This is an array of ProductRmsInfo objects. The array length is specified by ProductRmsListInfo::iArrayLen.
## iArrayLen

| ProductRmsListInfo::iArrayLen |
| --- |

This variable specifies the array length.
## iRpCode

| ProductRmsListInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::getProductRmsInfo(). A non-zero response code can be interpreted as an error.
## sRpCode

| ProductRmsListInfo::sRpCode |
| --- |

The is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
