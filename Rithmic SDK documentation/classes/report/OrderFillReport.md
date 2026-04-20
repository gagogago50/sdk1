> **Namespace:** `RApi`

# RApi::OrderFillReport

Public Member Functions | Public Attributes | List of all members  RApi::OrderFillReport Class Reference

`#include <RApiPlus.h>`  Inheritance diagram for RApi::OrderFillReport:

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | OrderFillReport () |
|  |
| virtual | ~OrderFillReport () |
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
| int | iRpCode |
|  |
| tsNCharcb | sFillType |
|  |
| tsNCharcb | sLiquidityIndicator |
|  |
| tsNCharcb | sQuoteId |
|  |
| tsNCharcb | sQuoteMsgId |
|  |
| tsNCharcb | sRpCode |
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

The OrderFillReport represents a fill for an order and is passed in RCallbacks::FillReport().

The OrderFillReport class conveys non-cumulative information about a full or partial fill for an order.

A fill report for a strategy (an instrument with multiple components like a calendar spread) will be followed by fill reports for each of the legs. The aggregate of these leg fill reports is equivalent to the fill report of the strategy. If price reference data is missing for any of these leg instruments, it is possible that the fill report callback for that leg instrument will not be invoked.
**See also**
  REngine::modifyOrder     REngine::sendOrder     REngine::sendOrderList
## Constructor & Destructor Documentation

## OrderFillReport()

| OrderFillReport::OrderFillReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~OrderFillReport()

| OrderFillReport::~OrderFillReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OrderFillReport::~OrderFillReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int OrderFillReport::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int OrderFillReport::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will clear the current values of the object.

Reimplemented from RApi::OrderReport.
## dump()
     **
| int OrderFillReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int OrderFillReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.

It also calls the OrderReport::dump routine.

Reimplemented from RApi::OrderReport.
## Member Data Documentation

## iRpCode

| int OrderFillReport::iRpCode |
| --- |

Response code, if applicable, from the REngine::replayExecutions response.
## sFillType

| tsNCharcb OrderFillReport::sFillType |
| --- |

If available, the fill type of this fill. It is typically populated when the fill represents one leg of a spread. If this value is empty, this report pertains to a "regular" fill.
## sLiquidityIndicator

| tsNCharcb OrderFillReport::sLiquidityIndicator |
| --- |

If available, an indicator of whether this fill added or removed liquidity, or was routed.
## sQuoteId

| tsNCharcb OrderFillReport::sQuoteId |
| --- |

If available, the quote id associated with this fill. If/when quoting, fills can occur on the quotes. When replaying fills, those fills from quotes will be returned in the form of an OrderFillReport.
**See also**
  REngine::replayQuotes()     REngine::replayExecutions()     RCallbacks::executionReplay()     ExecutionReplayInfo
## sQuoteMsgId

| tsNCharcb OrderFillReport::sQuoteMsgId |
| --- |

If available, the quote msg id associated with this fill. If/when quoting, fills can occur on the quotes. When replaying fills, those fills from quotes will be returned in the fmorm of an OrderFillReport.
**See also**
  REngine::replayQuotes
## sRpCode

| tsNCharcb OrderFillReport::sRpCode |
| --- |

String equivalent of OrderFillReport::iRpCode.
## sSettlementCurrency

| tsNCharcb OrderFillReport::sSettlementCurrency |
| --- |

If available, the settlement currency associated with this fill.
## sSettlementDate

| tsNCharcb OrderFillReport::sSettlementDate |
| --- |

If available, the settlement date associated with this fill.
## sTradeDate

| tsNCharcb OrderFillReport::sTradeDate |
| --- |

If available, the trade date associated with this fill.
