> **Namespace:** `RApi`

# RApi::QuoteInfo

Public Member Functions | Public Attributes | List of all members  RApi::QuoteInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| virtual int | clearHandles (int *aiCode) |
|  |
| virtual int | dump (int *aiCode) |
|  |
|  | QuoteInfo () |
|  |
| virtual | ~QuoteInfo () |
|  |

| Public Attributes |
| --- |
| bool | bAsk |
|  |
| bool | bBid |
|  |
| double | dAskPriceToFill |
|  |
| double | dBidPriceToFill |
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
| AccountInfo | oAccount |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sQuoteId |
|  |
| tsNCharcb | sQuoteMsgId |
|  |
| tsNCharcb | sStatus |
|  |
| tsNCharcb | sText |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sUser |
|  |
| tsNCharcb | sUserMsg |
|  |

## Detailed Description

This class represents information about quotes.

The QuoteInfo class is used to pass quote information (including various states of the quote) via RCallbacks::Quote.
**See also**
  REngine::submitQuoteList     REngine::cancelQuoteList     RCallbacks::Quote
## Constructor & Destructor Documentation

## QuoteInfo()

| QuoteInfo::QuoteInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members using QuoteInfo::clearHandles().
## ~QuoteInfo()

| QuoteInfo::~QuoteInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| QuoteInfo::~QuoteInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int QuoteInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int QuoteInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine clears all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. This method is used internally by the constructor.
## dump()
     **
| int QuoteInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int QuoteInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## bAsk

| bool QuoteInfo::bAsk |
| --- |

Indicates whether the dAskPriceToFill and llAskQuantityToFill contain values. It may be possible to receive updates on a quote which do not specify (i.e. reiterate) the bid/ask prices and sizes. In these cases, this flag may be false even though the quote is open.
## bBid

| bool QuoteInfo::bBid |
| --- |

Indicates whether the dBidPriceToFill and llBidQuantityToFill contain values. It may be possible to receive updates on a quote which do not specify (i.e. reiterate) the bid/ask prices and sizes. In these cases, this flag may be false even though the quote is open.
## dAskPriceToFill

| int QuoteInfo::dAskPriceToFill |
| --- |

Ask price, if present.
**See also**
  QuoteInfo::bAsk
## dBidPriceToFill

| int QuoteInfo::dBidPriceToFill |
| --- |

Bid price, if present.
**See also**
  QuoteInfo::bBid
## iSsboe

| int QuoteInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970) of the infrastructure's receipt of the exchange's message.
## iType

| int QuoteInfo::iType |
| --- |

Indicates if this data is from a cache, the real-time data stream, or a historical database.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB     MD_HISTORY_CB
## iUsecs

| int QuoteInfo::iUsecs |
| --- |

Microsecond portion of the receipt timestamp.
**See also**
  QuoteInfo::iSsboe
## llAskQuantityToFill

| QuoteInfo::llAskQuantityToFill |
| --- |

Ask quantity, if present.
**See also**
  QuoteInfo::bAsk
## llBidQuantityToFill

| QuoteInfo::llBidQuantityToFill |
| --- |

Bid quantity, if present.
**See also**
  QuoteInfo::bBid
## oAccount

| AccountInfo QuoteInfo::oAccount |
| --- |

Account associated with this quote.
## sExchange

| tsNCharcb QuoteInfo::sExchange |
| --- |

Exchange of the instrument associated with this quote.
## sQuoteId

| tsNCharcb QuoteInfo::sQuoteId |
| --- |

Value assigned by the infrastructure to identify this quote.
## sQuoteMsgId

| tsNCharcb QuoteInfo::sQuoteMsgId |
| --- |

Quote message id assigned by the handler to identify the update message of this quote.
## sStatus

| tsNCharcb QuoteInfo::sStatus |
| --- |

Status of the quote. The status will have a similar set of values to those used for orders. A list of values is defined in the RApi.h file, but it is possible that the list may be incomplete, based on changes to the infrastructure after the publication of the API.
## sText

| tsNCharcb QuoteInfo::sText |
| --- |

Informational text that may be provided with this instance.
## sTicker

| tsNCharcb QuoteInfo::sTicker |
| --- |

Symbol of the instrument associated with this quote.
## sUser

| tsNCharcb QuoteInfo::sUser |
| --- |

If available, the user who most recently operated on this quote.
## sUserMsg

| tsNCharcb QuoteInfo::sUserMsg |
| --- |

If a value for the context string was passed when placing or operating on the quote, it will appear in here.
**See also**
  QuoteParams::sUserMsg     QuoteCancelParams::sUserMsg
