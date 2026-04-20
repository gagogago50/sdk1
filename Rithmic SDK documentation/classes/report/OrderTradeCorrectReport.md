> **Namespace:** `RApi`

# RApi::OrderTradeCorrectReport

Public Member Functions | Public Attributes | List of all members  RApi::OrderTradeCorrectReport Class Reference

`#include <RApiPlus.h>`  Inheritance diagram for RApi::OrderTradeCorrectReport:

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | OrderTradeCorrectReport () |
|  |
| virtual | ~OrderTradeCorrectReport () |
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
| tsNCharcb | sFillType |
|  |
| tsNCharcb | sSettlementCurrency |
|  |
| tsNCharcb | sSettlementDate |
|  |
| tsNCharcb | sTradeDate |
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

The OrderTradeCorrectReport represents a trade which is under investigation and is passed in RCallbacks::TradeCorrectReport().

The OrderTradeCorrectReport class conveys information about a possible trade correction.
**See also**
  REngine::modifyOrder     REngine::sendOrder     REngine::sendOrderList
## Constructor & Destructor Documentation

## OrderTradeCorrectReport()

| OrderTradeCorrectReport::OrderTradeCorrectReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~OrderTradeCorrectReport()

| OrderTradeCorrectReport::~OrderTradeCorrectReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OrderTradeCorrectReport::~OrderTradeCorrectReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
     **
| int OrderTradeCorrectReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int OrderTradeCorrectReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.

It also calls the OrderReport::dump routine.

Reimplemented from RApi::OrderReport.
## Member Data Documentation

## sFillType

| tsNCharcb OrderTradeCorrectReport::sFillType |
| --- |

If available, contains the fill type of this report. It is typically populated when the correction represents one leg of a spread. If this value is empty, this report pertains to a "regular" fill.
## sSettlementCurrency

| tsNCharcb OrderTradeCorrectReport::sSettlementCurrency |
| --- |

If available, contains the settlement currency associated with this trade correction.
## sSettlementDate

| tsNCharcb OrderTradeCorrectReport::sSettlementDate |
| --- |

If available, contains the settlement date associated with this trade correction.
## sTradeDate

| tsNCharcb OrderTradeCorrectReport::sTradeDate |
| --- |

If available, the trade date associated with this report.
