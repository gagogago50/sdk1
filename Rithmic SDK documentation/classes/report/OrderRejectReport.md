> **Namespace:** `RApi`

# RApi::OrderRejectReport

Public Member Functions | Public Attributes | List of all members  RApi::OrderRejectReport Class Reference

`#include <RApiPlus.h>`  Inheritance diagram for RApi::OrderRejectReport:

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | OrderRejectReport () |
|  |
| virtual | ~OrderRejectReport () |
|  |
| Public Member Functions inherited from RApi::OrderReport |
| virtual int | clearHandles (int *aiCode) |
|  |
| virtual int | dump (int *aiCode) |
|  |
|  | OrderReport () |
|  |
| virtual | ~OrderReport () |
|  |

| Public Attributes |
| --- |
| bool | bReplacementOrderToFollow |
|  |
| long long | llRejectedSize |
|  |
| Public Attributes inherited from RApi::OrderReport |
| bool | bAvgFillPriceFlag |
|  |
| bool | bFillPriceFlag |
|  |
| bool | bPriceToFillFlag |
|  |
| bool | bTriggerPriceFlag |
|  |
| double | dAvgFillPrice |
|  |
| double | dFillPrice |
|  |
| double | dPriceToFill |
|  |
| double | dTriggerPrice |
|  |
| int | iConnId |
|  |
| int | iGatewayBufferBytesBehind |
|  |
| int | iGatewaySsboe |
|  |
| int | iGatewayUsecs |
|  |
| int | iSourceNsecs |
|  |
| int | iSourceSsboe |
|  |
| int | iSsboe |
|  |
| int | iTriggerCmpOperator |
|  |
| int | iTriggerPriceId |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| long long | llFillSize |
|  |
| long long | llTotalFilled |
|  |
| long long | llTotalUnfilled |
|  |
| AccountInfo | oAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb | sBuySellType |
|  |
| tsNCharcb | sCurrentSequenceNumber |
|  |
| tsNCharcb | sEntryType |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sExchOrdId |
|  |
| tsNCharcb | sInitialSequenceNumber |
|  |
| tsNCharcb | sLinkedOrderNums |
|  |
| tsNCharcb | sOmnibusAccount |
|  |
| tsNCharcb | sOrderDuration |
|  |
| tsNCharcb | sOrderNum |
|  |
| tsNCharcb | sOrderType |
|  |
| tsNCharcb | sOriginalOrderNum |
|  |
| tsNCharcb | sOriginalOrderType |
|  |
| tsNCharcb | sOriginatorWindowName |
|  |
| tsNCharcb | sPositionDisposition |
|  |
| tsNCharcb | sReportId |
|  |
| tsNCharcb | sReportType |
|  |
| tsNCharcb | sTag |
|  |
| tsNCharcb | sText |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sTickerPlantExchOrdId |
|  |
| tsNCharcb | sTriggerExchange |
|  |
| tsNCharcb | sTriggerTicker |
|  |
| tsNCharcb | sUser |
|  |
| tsNCharcb | sUserMsg |
|  |
| tsNCharcb | sUserTag |
|  |
| tsNCharcb | sWindowName |
|  |

## Detailed Description

The OrderRejectReport represents the rejection of a request to place an order and is passed in RCallbacks::RejectReport().

The OrderRejectReport class conveys information about the rejection.
**See also**
  REngine::modifyOrder     REngine::sendOrder     REngine::sendOrderList
## Constructor & Destructor Documentation

## OrderRejectReport()

| OrderRejectReport::OrderRejectReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~OrderRejectReport()

| OrderRejectReport::~OrderRejectReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OrderRejectReport::~OrderRejectReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
     **
| int OrderRejectReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int OrderRejectReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.

It also calls the OrderReport::dump routine.

Reimplemented from RApi::OrderReport.
## Member Data Documentation

## bReplacementOrderToFollow

| bool OrderRejectReport::bReplacementOrderToFollow |
| --- |

Indicates if there is a replacement order to follow this order's rejection.
**See also**
  OrderParams::sToMarketOnReject     LineInfo::sToMarketOnReject
## llRejectedSize

| OrderRejectReport::llRejectedSize |
| --- |

Quantity that was rejected
