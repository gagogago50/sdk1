> **Namespace:** `RApi`

# RApi::OrderModifyReport

Public Member Functions | Public Attributes | List of all members  RApi::OrderModifyReport Class Reference

`#include <RApiPlus.h>`  Inheritance diagram for RApi::OrderModifyReport:

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | OrderModifyReport () |
|  |
| virtual | ~OrderModifyReport () |
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
| long long | llNewSize |
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

The OrderModifyReport represents the successful modification of an existing order and is passed in RCallbacks::ModifyReport().

The OrderModifyReport class conveys information about an order as it stands after a successful modification.
**See also**
  REngine::modifyOrder     REngine::sendOrder     REngine::sendOrderList
## Constructor & Destructor Documentation

## OrderModifyReport()

| OrderModifyReport::OrderModifyReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~OrderModifyReport()

| OrderModifyReport::~OrderModifyReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OrderModifyReport::~OrderModifyReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
     **
| int OrderModifyReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int OrderModifyReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.

It also calls the OrderReport::dump routine.

Reimplemented from RApi::OrderReport.
## Member Data Documentation

## llNewSize

| OrderModifyReport::llNewSize |
| --- |

This quantity is the value as provided by the exchange upon a successful modification of an order. Because exchange conventions may differ regarding quantities already filled against this order (remaining working quantity vs. total quantity of the order), it may be useful to inspect OrderReport::llTotalFilled and OrderReport::llTotalUnfilled.
**See also**
  OrderReport::llTotalFilled     OrderReport::llTotalUnfilled
