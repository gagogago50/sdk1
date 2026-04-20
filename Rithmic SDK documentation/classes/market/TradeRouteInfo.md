> **Namespace:** `RApi`

# RApi::TradeRouteInfo

Public Member Functions | Public Attributes | List of all members  RApi::TradeRouteInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | TradeRouteInfo () |
|  |
| virtual | ~TradeRouteInfo () |
|  |

| Public Attributes |
| --- |
| int | iType |
|  |
| void * | pContext |
|  |
| tsNCharcb | sDefault |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sFcmId |
|  |
| tsNCharcb | sIbId |
|  |
| tsNCharcb | sStatus |
|  |
| tsNCharcb | sTradeRoute |
|  |

## Detailed Description

Trade route for an fcm/ib to an exchange.

The TradeRouteInfo class conveys information about trade routes for an fcm/ib to an exchange. Information includes the trade route's status as well as whether it is the default trade route. A trade route must be specified when placing orders.
**See also**
  REngine::listTradeRoutes()     REngine::subscribeTradeRoute()     REngine::unsubscribeTradeRoute()     What are trade routes and how do I use them?
## Constructor & Destructor Documentation

## TradeRouteInfo()

| TradeRouteInfo::TradeRouteInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members using TradeRouteInfo::clearHandles().
## ~TradeRouteInfo()

| TradeRouteInfo::~TradeRouteInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| TradeRouteInfo::~TradeRouteInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

The destructor does not deallocate any memory pointed to by member tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int TradeRouteInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. (Internally used by the constructor.)
## dump()
     **
| int TradeRouteInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the value of each public member to stdout. If a tsNCharcb is empty, the string "<empty>" will be printed.
## Member Data Documentation

## iType

| RApi::TradeRouteInfo::iType |
| --- |

Indicates if the trade route information is from a cache or the real-time data stream. If it is from a cache, the type will be MD_IMAGE_CB, and be part of a response to REngine::listTradeRoutes(). If it is from the real- time data stream, the value will be MD_UPDATE_CB, and be due to an active subscription to trade route updates (see REngine::subscribeTradeRoute()).

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## pContext

| RApi::TradeRouteInfo::pContext |
| --- |

The context initially sent with either REngine::listTradeRoutes() or REngine::subscribeTradeRoute(), depending on which call resulted in this TradeRouteInfo..
## sDefault

| RApi::TradeRouteInfo::sDefault |
| --- |

Indicates whether this trade route is the default. Possible values may include an empty string, "Y", or "N".
## sExchange

| RApi::TradeRouteInfo::sExchange |
| --- |

Exchange on which this trade route is valid.
## sFcmId

| RApi::TradeRouteInfo::sFcmId |
| --- |

FCM (futures commission merchant) associated with this trade route.
## sIbId

| RApi::TradeRouteInfo::sIbId |
| --- |

IB (introducing broker) associated with this trade route.
## sStatus

| RApi::TradeRouteInfo::sStatus |
| --- |

Status of this trade route.
**See also**
  RApi::sTRADE_ROUTE_STATUS_UP     RApi::sTRADE_ROUTE_STATUS_DOWN
## sTradeRoute

| RApi::TradeRouteInfo::sTradeRoute |
| --- |

Trade route name
**See also**
  MarketOrderParams::sTradeRoute     LimitOrderParams::sTradeRoute
