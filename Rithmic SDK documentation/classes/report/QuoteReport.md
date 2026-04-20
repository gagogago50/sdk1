> **Namespace:** `RApi`

# RApi::QuoteReport

Public Member Functions | Public Attributes | List of all members  RApi::QuoteReport Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| virtual int | clearHandles (int *aiCode) |
|  |
| virtual int | dump (int *aiCode) |
|  |
|  | QuoteReport () |
|  |
| virtual | ~QuoteReport () |
|  |

| Public Attributes |
| --- |
| bool | bAsk |
|  |
| bool | bBid |
|  |
| bool | bFill |
|  |
| double | dAskPriceToFill |
|  |
| double | dBidPriceToFill |
|  |
| double | dFillPrice |
|  |
| int | iConnId |
|  |
| int | iSourceNsecs |
|  |
| int | iSourceSsboe |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| long long | llAskQuantityToFill |
|  |
| long long | llBidQuantityToFill |
|  |
| long long | llFillSize |
|  |
| AccountInfo | oAccount |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sFillSide |
|  |
| tsNCharcb | sQuoteId |
|  |
| tsNCharcb | sQuoteMsgId |
|  |
| tsNCharcb | sRemarks |
|  |
| tsNCharcb | sReportId |
|  |
| tsNCharcb | sReportType |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sUser |
|  |
| tsNCharcb | sUserMsg |
|  |

## Detailed Description

The QuoteReport represents an update to a quote related request.

To receive quote reports, one must subscribe to quotes. Upon receipt of an update, the quote report callback will be invoked, passing an instance of QuoteReport, conveying the update.
**See also**
  REngine::subscribeOrder()     REngine::submitQuoteList()     REngine::cancelQuoteList()     RCallbacks::Quote()
## Constructor & Destructor Documentation

## QuoteReport()

| QuoteReport::QuoteReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~QuoteReport()

| QuoteReport::~QuoteReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| QuoteReport::~QuoteReport | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int QuoteReport::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int QuoteReport::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will clear the current values of the object.
## dump()
     **
| int QuoteReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int QuoteReport::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## bAsk

| bool QuoteReport::bAsk |
| --- |

Indicates whether the dAskPriceToFill and llAskQuantityToFill contain values. It may be possible to receive updates on a quote which do not specify (i.e. reiterate) the bid/ask prices and sizes. In these cases, this flag may be false even though the quote is open.
## bBid

| bool QuoteReport::bBid |
| --- |

Indicates whether the dBidPriceToFill and llBidQuantityToFill contain values. It may be possible to receive updates on a quote which do not specify (i.e. reiterate) the bid/ask prices and sizes. In these cases, this flag may be false even though the quote is open.
## bFill

| bool QuoteReport::bFill |
| --- |

Indicates if this report is for a fill. Please note that when retrieving prior fills from the current trading session, fills from quotes will also be returned.
**See also**
  REngine::replayExecutions()     RCallbacks::executionReplay()     ExecutionReplayInfo     OrderFillReport::sQuoteId     OrderFillReport::sQuoteMsgId
## dAskPriceToFill

| int QuoteReport::dAskPriceToFill |
| --- |

Ask price, if present.
**See also**
  QuoteReport::bAsk
## dBidPriceToFill

| int QuoteReport::dBidPriceToFill |
| --- |

Bid price, if present.
**See also**
  QuoteReport::bBid
## dFillPrice

| double QuoteReport::dFillPrice |
| --- |

Fill price, if applicable.
**See also**
  QuoteReport::bFill
## iConnId

| int QuoteReport::iConnId |
| --- |

Identifies the connection on which this report was received. When using R | Diamond API, it is possible to receive the same report on both the trading system connect point as well as a Diamond Cutter connect point. This indicator provides a mechanism to distinguish between the two.
## iSourceNsecs

| int QuoteReport::iSourceNsecs |
| --- |

Nanosecond component of the iSourceSsboe timestamp
## iSourceSsboe

| int QuoteReport::iSourceSsboe |
| --- |

Exchange-provided timestamp, if available, in seconds since the beginning of epoch (Jan. 1, 1970).
## iSsboe

| int QuoteReport::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970) of the infrastructure's receipt of the exchange's message.
## iType

| int QuoteReport::iType |
| --- |

Indicates if this data is from a cache, the real-time data stream, or a historical database.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB     MD_HISTORY_CB
## iUsecs

| int QuoteReport::iUsecs |
| --- |

Microsecond portion of the receipt timestamp.
**See also**
  QuoteInfo::iSsboe
## llAskQuantityToFill

| int QuoteReport::llAskQuantityToFill |
| --- |

Ask quantity, if present.
**See also**
  QuoteReport::bAsk
## llBidQuantityToFill

| int QuoteReport::llBidQuantityToFill |
| --- |

Bid quantity, if present.
**See also**
  QuoteReport::bBid
## llFillSize

| int QuoteReport::llFillSize |
| --- |

Fill size, if applicable
**See also**
  QuoteReport::bFill
## oAccount

| AccountInfo QuoteReport::oAccount |
| --- |

Account associated with this quote.
## sExchange

| tsNCharcb QuoteReport::sExchange |
| --- |

Exchange associated with the instrument of the quote.
## sFillSide

| tsNCharcb QuoteReport::sFillSide |
| --- |

Side of the quote the fill occurred on, if applicable.
**See also**
  QuoteReport::bFill
## sQuoteId

| tsNCharcb QuoteReport::sQuoteId |
| --- |

The value assigned by the infrastructure to identify this quote.
## sQuoteMsgId

| tsNCharcb QuoteReport::sQuoteMsgId |
| --- |

The quote message id assigned by the handler to identify the update message of this quote.
## sRemarks

| tsNCharcb QuoteReport::sRemarks |
| --- |

If present, any remarks associated with this update.
## sReportId

| tsNCharcb QuoteReport::sReportId |
| --- |

Report id of this report.
## sReportType

| tsNCharcb QuoteReport::sReportType |
| --- |

Report type of this report.
## sTicker

| tsNCharcb QuoteReport::sTicker |
| --- |

Symbol associated with the instrument of the quote.
## sUser

| tsNCharcb QuoteReport::sUser |
| --- |

If available, the user who most recently operated on this quote.
## sUserMsg

| tsNCharcb QuoteReport::sUserMsg |
| --- |

If a value for the context string was passed when placing or operating on the quote, it will appear in here.
**See also**
  QuoteParams::sUserMsg     QuoteCancelParams::sUserMsg
