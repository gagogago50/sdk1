> **Namespace:** `RApi`

# RApi::TradeRouteListInfo

Public Member Functions | Public Attributes | List of all members  RApi::TradeRouteListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | TradeRouteListInfo () |
|  |
| virtual | ~TradeRouteListInfo () |
|  |

| Public Attributes |
| --- |
| TradeRouteInfo * | asTradeRouteInfoArray |
|  |
| int | iArrayLen |
|  |
| int | iRpCode |
|  |
| void * | pContext |
|  |

## Detailed Description

List of trade routes.

The TradeRouteListInfo class conveys a list of trade routes retrieved from the infrastructure, or the error condition encountered when doing so.
**See also**
  REngine::listTradeRoutes()     RCallbacks::TradeRouteList     What are trade routes and how do I use them?
## Constructor & Destructor Documentation

## TradeRouteListInfo()

| TradeRouteListInfo::TradeRouteListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~TradeRouteListInfo()

| TradeRouteListInfo::~TradeRouteListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| TradeRouteListInfo::~TradeRouteListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int TradeRouteListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the value of each public member to stdout. If a tsNCharcb is empty, the string "<empty>" will be printed.
## Member Data Documentation

## asTradeRouteInfoArray

| TradeRouteListInfo::asTradeRouteInfoArray |
| --- |

Array of TradeRouteInfo objects. The array length is specified by TradeRouteListInfo::iArrayLen.
## iArrayLen

| TradeRouteListInfo::iArrayLen |
| --- |

Array length of TradeRouteListInfo::asTradeRouteInfoArray.
## iRpCode

| TradeRouteListInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::listTradeRoutes(). A non-zero response code can be interpreted as an error.
## pContext

| void* RApi::TradeRouteListInfo::pContext |
| --- |
