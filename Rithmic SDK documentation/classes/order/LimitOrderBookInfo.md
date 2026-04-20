> **Namespace:** `RApi`

# RApi::LimitOrderBookInfo

Public Member Functions | Public Attributes | List of all members  RApi::LimitOrderBookInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | LimitOrderBookInfo () |
|  |
| virtual | ~LimitOrderBookInfo () |
|  |

| Public Attributes |
| --- |
| double * | adAskPriceArray |
|  |
| double * | adBidPriceArray |
|  |
| int * | aiAskNumOrdersArray |
|  |
| int * | aiAskSsboeArray |
|  |
| int * | aiAskUsecsArray |
|  |
| int * | aiBidNumOrdersArray |
|  |
| int * | aiBidSsboeArray |
|  |
| int * | aiBidUsecsArray |
|  |
| long long * | allAskImpliedSizeArray |
|  |
| long long * | allAskSizeArray |
|  |
| long long * | allBidImpliedSizeArray |
|  |
| long long * | allBidSizeArray |
|  |
| int | iAskArrayLen |
|  |
| int | iBidArrayLen |
|  |
| int | iConnId |
|  |
| int | iRpCode |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sRpCode |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents a limit order book.

This class is used to pass order books received as a result of calls to REngine::rebuildBook() or REngine::subscribe(). The callback for both of these routines is RCallbacks::LimitOrderBook().
## Constructor & Destructor Documentation

## LimitOrderBookInfo()

| LimitOrderBookInfo::LimitOrderBookInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~LimitOrderBookInfo()

| LimitOrderBookInfo::~LimitOrderBookInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| LimitOrderBookInfo::~LimitOrderBookInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## clearHandles()
    **
| int LimitOrderBookInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. (Internally used by the constructor.)
## dump()
     **
| int LimitOrderBookInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints each row of the order book (bid and ask sides) to stdout. If a tsNCharcb is empty, the string "<empty>" will be printed.
 If the flag associated with a price or size is true, the value of the price or size will be followed by "(valid)". If the value of the flag is false, the suffix will be "(invalid)".
## Member Data Documentation

## adAskPriceArray

| LimitOrderBookInfo::adAskPriceArray |
| --- |

This array represents ask prices of the order book. The first element of the array is the top of the order book. The value may be null if this side of the order book is empty.
## adBidPriceArray

| LimitOrderBookInfo::adBidPriceArray |
| --- |

This array represents bid prices of the order book. The first element of the array is the top of the order book. The value may be null if this side of the order book is empty.
## aiAskNumOrdersArray

| LimitOrderBookInfo::aiAskNumOrdersArray |
| --- |

This array contains the number of orders associated with each price in LimitOrderBookInfo::adAskPriceArray.
## aiAskSsboeArray

| LimitOrderBookInfo::aiAskSsboeArray |
| --- |

This array contains the seconds portion of the timestamp of when each price level was most recently updated, expressed as seconds elapsed since Jan. 1, 1970 UTC. A value of zero indicates the timestamp is not available.
## aiAskUsecsArray

| LimitOrderBookInfo::aiAskUsecsArray |
| --- |

This array contains the microseconds portion of the timestamp specified by LimitOrderBookInfo::aiAskSsboeArray.
## aiBidNumOrdersArray

| LimitOrderBookInfo::aiBidNumOrdersArray |
| --- |

This array contains the number of orders associated with each price in LimitOrderBookInfo::adBidPriceArray.
## aiBidSsboeArray

| LimitOrderBookInfo::aiBidSsboeArray |
| --- |

This array contains the seconds portion of the timestamp of when each price level was most recently updated, expressed as seconds elapsed since Jan. 1, 1970 UTC. A value of zero indicates the timestamp is not available.
## aiBidUsecsArray

| LimitOrderBookInfo::aiBidUsecsArray |
| --- |

This array contains the microseconds portion of the timestamp specified by LimitOrderBookInfo::aiBidSsboeArray.
## allAskImpliedSizeArray

| LimitOrderBookInfo::allAskImpliedSizeArray |
| --- |

This array contains the implied quantities associated with each price in LimitOrderBookInfo::adAskPriceArray.
 An array element value of zero indicates that the implied size is not available/defined or that it is actually zero.
## allAskSizeArray

| LimitOrderBookInfo::allAskSizeArray |
| --- |

This array contains the quantities associated with each price in LimitOrderBookInfo::adAskPriceArray.
## allBidImpliedSizeArray

| LimitOrderBookInfo::allBidImpliedSizeArray |
| --- |

This array contains the implied quantities associated with each price in LimitOrderBookInfo::adBidPriceArray. An array element value of zero indicates that the implied size is not available/defined or that it is actually zero.
## allBidSizeArray

| LimitOrderBookInfo::allBidSizeArray |
| --- |

This array contains the quantities associated with each price in LimitOrderBookInfo::adBidPriceArray.
## iAskArrayLen

| LimitOrderBookInfo::iAskArrayLen |
| --- |

This indicates the length of the ask arrays, LimitOrderBookInfo::adAskPriceArray, LimitOrderBookInfo::aiAskSizeArray, LimitOrderBookInfo::aiAskImpliedSizeArray, LimitOrderBookInfo::aiAskNumOrdersArray, LimitOrderBookInfo::aiAskSsboeArray, and LimitOrderBookInfo::aiAskUsecsArray. It may be zero, indicating that this side of the order book is empty.
## iBidArrayLen

| LimitOrderBookInfo::iBidArrayLen |
| --- |

This indicates the length of the bid arrays, LimitOrderBookInfo::adBidPriceArray, LimitOrderBookInfo::aiBidSizeArray, LimitOrderBookInfo::aiBidImpliedSizeArray, LimitOrderBookInfo::aiBidNumOrdersArray, LimitOrderBookInfo::aiBidSsboeArray, and LimitOrderBookInfo::aiBidUsecsArray. It may be zero, indicating that this side of the order book is empty.
## iConnId

| LimitOrderBookInfo::iConnId |
| --- |

Identifies the connection on which this data was received. It is possible when using the R | Diamond Cutter API, that certain data can be received twice, once from the regular infrastructure, and once from the R | Diamond Cutter infrastructure. This indicator provides a mechanism to distinguish between the two.
**See also**
  MARKET_DATA_CONNECTION_ID     DIAMOND_CUTTER_MARKET_DATA_CONNECTION_ID
## iRpCode

| LimitOrderBookInfo::iRpCode |
| --- |

The response code, if available, associated with a call to either REngine::subscribe() or REngine::rebuildBook(). A non-zero response code can be interpreted as an error.
## iSsboe

| LimitOrderBookInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). This timestamp indicates that the data is current "as of" this time.
## iType

| LimitOrderBookInfo::iType |
| --- |

This member variable indicates if the book is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| LimitOrderBookInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| LimitOrderBookInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the quote information.
## sRpCode

| LimitOrderBookInfo::sRpCode |
| --- |

The is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
## sTicker

| LimitOrderBookInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the quote information.
