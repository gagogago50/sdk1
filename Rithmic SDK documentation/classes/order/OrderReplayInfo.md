> **Namespace:** `RApi`

# RApi::OrderReplayInfo

Public Member Functions | Public Attributes | List of all members  RApi::OrderReplayInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | OrderReplayInfo () |
|  |
| virtual | ~OrderReplayInfo () |
|  |

| Public Attributes |
| --- |
| LineInfo * | asLineInfoArray |
|  |
| int | iArrayLen |
|  |
| int | iRpCode |
|  |
| AccountInfo | oAccount |
|  |
| tsNCharcb | sDate |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class represents a collection of orders. Each order will be represented by an LineInfo instance.

The OrderReplayInfo class is used to pass a collection of orders via RCallbacks::OrderReplay() or RCallbacks::OpenOrderReplay().
**See also**
  REngine::replayAllOrders()     REngine::replayHistoricalOrders()     REngine::replayOpenOrders()     RCallbacks::OpenOrderReplay()     RCallbacks::OrderReplay()
## Constructor & Destructor Documentation

## OrderReplayInfo()

| OrderReplayInfo::OrderReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~OrderReplayInfo()

| OrderReplayInfo::~OrderReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OrderReplayInfo::~OrderReplayInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int OrderReplayInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## asLineInfoArray

| OrderReplayInfo::asLineInfoArray |
| --- |

An array of LineInfo objects representing the set of orders.
## iArrayLen

| OrderReplayInfo::iArrayLen |
| --- |

The number of elements in the array OrderReplayInfo::asLineInfoArray.
## iRpCode

| OrderReplayInfo::iRpCode |
| --- |

The response code associated with the request generating this callback. The possible requests are REngine::replayAllOrders() and REngine::replayOpenOrders().
## oAccount

| OrderReplayInfo::oAccount |
| --- |

The Account used when requesting the collection of orders.
## sDate

| OrderReplayInfo::sDate |
| --- |

If applicable, the date passed in when requesting the collection of orders.
## sRpCode

| OrderReplayInfo::sRpCode |
| --- |

The string equivalent of the response code OrderReplayInfo::iRpCode. If OrderReplayInfo::iRpCode equals API_OK, this string may be empty.
