> **Namespace:** `RApi`

# RApi::OrderHistoryDatesInfo

Public Member Functions | Public Attributes | List of all members  RApi::OrderHistoryDatesInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | OrderHistoryDatesInfo () |
|  |
| virtual | ~OrderHistoryDatesInfo () |
|  |

| Public Attributes |
| --- |
| tsNCharcb * | asDateArray |
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

An instance of this class represents the dates in which order history is available.

An OrderHistoryDatesInfo object is used to pass an array of tsNCharcbs via RCallbacks::OrderHistoryDates().
## Constructor & Destructor Documentation

## OrderHistoryDatesInfo()

| OrderHistoryDatesInfo::OrderHistoryDatesInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~OrderHistoryDatesInfo()

| OrderHistoryDatesInfo::~OrderHistoryDatesInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OrderHistoryDatesInfo::~OrderHistoryDatesInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int OrderHistoryDatesInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the OrderHistoryDatesInfo object to stdout. If a tsNCharcb has an iDataLen value of zero, then the string "<empty>" will be printed.
## Member Data Documentation

## asDateArray

| OrderHistoryDatesInfo::asDateArray |
| --- |

This is an array of tsNCharcb strings, each representing a date. The array length is specified by OrderHistoryDatesInfo::iArrayLen.
## iArrayLen

| OrderHistoryDatesInfo::iArrayLen |
| --- |

This variable specifies the array length.
## iRpCode

| OrderHistoryDatesInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::listOrderHistoryDates(). A non-zero response code can be interpreted as an error.
## pContext

| OrderHistoryDatesInfo::pContext |
| --- |

The context initially sent with REngine::listOrderHistoryDates().
## sRpCode

| OrderHistoryDatesInfo::sRpCode |
| --- |

The is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
