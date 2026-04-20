> **Namespace:** `RApi`

# RApi::QuoteParams

Public Member Functions | Public Attributes | List of all members  RApi::QuoteParams Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
|  | QuoteParams () |
|  |
| virtual | ~QuoteParams () |
|  |

| Public Attributes |
| --- |
| bool | bBid |
|  |
| double | dAskPrice |
|  |
| double | dBidPrice |
|  |
| long long | llAskQty |
|  |
| long long | llBidQty |
|  |
| AccountInfo * | pAccount |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sUserMsg |
|  |

## Detailed Description

This class encapsulates information needed to submit a quote for a single instrument.

Quotes must be placed on the ask/offer side, and can optionally be placed on the bid side.
**See also**
  REngine::submitQuoteList
## Constructor & Destructor Documentation

## QuoteParams()

| QuoteParams::QuoteParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~QuoteParams()

| QuoteParams::~QuoteParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| QuoteParams::~QuoteParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int QuoteParams::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine clears all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. (Internally used by the constructor.)
## Member Data Documentation

## bBid

| RApi::QuoteParams::bBid |
| --- |

Indicates whether this quote has a bid component.
## dAskPrice

| RApi::QuoteParams::dAskPrice |
| --- |

Ask price.
## dBidPrice

| RApi::QuoteParams::dBidPrice |
| --- |

Bid price. It is ignored if QuoteParams::bBid is false.
## llAskQty

| RApi::QuoteParams::llAskQty |
| --- |

Ask size.
## llBidQty

| RApi::QuoteParams::llBidQty |
| --- |

Bid size. It is ignored if QuoteParams::bBid is false.
## pAccount

| RApi::QuoteParams::pAccount |
| --- |

Account on which to place the quote.
## sExchange

| RApi::QuoteParams::sExchange |
| --- |

Exchange of the instrument on which to place the quote.
## sTicker

| RApi::QuoteParams::sTicker |
| --- |

Symbol of the instrument on which to place the quote.
## sUserMsg

| RApi::QuoteParams::sUserMsg |
| --- |

This optional value specifies a user message that is persisted with the resultant quote by the infrastructure. If specified, this value will be present on subsequent quote updates published by the infrastructure.

If this value is empty (tsNCharcb::pData is NULL and tsNCharcb::iDataLen is zero), no user msg will be set.

Note : The value can be updated with any subsequent operation on the quote, including other instances of R | API and R | Trader.
**See also**
  QuoteInfo::sUserMsg     QuoteReport::sUserMsg     QuoteCancelParams::sUserMsg     REngine::submitQuoteList()     REngine::cancelQuoteList()
