> **Namespace:** `RApi`

# RApi::ExchangeListInfo

Public Member Functions | Public Attributes | List of all members  RApi::ExchangeListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | ExchangeListInfo () |
|  |
| virtual | ~ExchangeListInfo () |
|  |

| Public Attributes |
| --- |
| tsNCharcb * | asExchangeArray |
|  |
| int | iArrayLen |
|  |
| int | iRpCode |
|  |
| void * | pContext |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class represents a list of exchanges.

An ExchangeListInfo object is used to pass an array of tsNCharcbs via RCallbacks::ExchangeList().
## Constructor & Destructor Documentation

## ExchangeListInfo()

| ExchangeListInfo::ExchangeListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~ExchangeListInfo()

| ExchangeListInfo::~ExchangeListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| ExchangeListInfo::~ExchangeListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int ExchangeListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the ExchangeListInfo object to stdout. If a tsNCharcb has an iDataLen value of MNM_EMPTY_DATA_ITEM_LEN, then the string "<empty>" will be printed.
## Member Data Documentation

## asExchangeArray

| ExchangeListInfo::asExchangeArray |
| --- |

This is an array of tsNCharcb strings. The array length is specified by ExchangeListInfo::iArrayLen.
## iArrayLen

| ExchangeListInfo::iArrayLen |
| --- |

This variable specifies the array length.
## iRpCode

| ExchangeListInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::listExchanges(). A non-zero response code can be interpreted as an error.
## pContext

| ExchangeListInfo::pContext |
| --- |

The context initially sent with REngine::listExchanges().
## sRpCode

| ExchangeListInfo::sRpCode |
| --- |

The is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
