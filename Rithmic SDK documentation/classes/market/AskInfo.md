> **Namespace:** `RApi`

# RApi::AskInfo

Public Member Functions | Public Attributes | List of all members  RApi::AskInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AskInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AskInfo () |
|  |

| Public Attributes |
| --- |
| bool | bLeanPriceFlag |
|  |
| bool | bPriceFlag |
|  |
| bool | bSizeFlag |
|  |
| double | dLeanPrice |
|  |
| double | dPrice |
|  |
| int | iConnId |
|  |
| int | iNumOrders |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| int | iUpdateType |
|  |
| int | iUsecs |
|  |
| long long | llImpliedSize |
|  |
| long long | llSize |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents an ask quote.

The AskInfo class is used to pass quote information received based on REngine::subscribe() requests via the RCallbacks::AskQuote() and RCallbacks::BestAskQuote callbacks.
## Constructor & Destructor Documentation

## AskInfo()

| AskInfo::AskInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~AskInfo()

| AskInfo::~AskInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AskInfo::~AskInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int AskInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bLeanPriceFlag

| AskInfo::bLeanPriceFlag |
| --- |

Indicates whether dLeanPrice is defined.
## bPriceFlag

| AskInfo::bPriceFlag |
| --- |

This member variable specifies if AskInfo::dPrice is undefined. If the value is true, then the price is defined. If the value is false, the price is undefined. It is possible that a price is undefined if an order book becomes corrupt or invalid.
## bSizeFlag

| AskInfo::bSizeFlag |
| --- |

This member variable specifies if AskInfo::llSize is undefined. A value of true indicates that the value is defined. A value of false indicates that the value is undefined.
## dLeanPrice

| AskInfo::dLeanPrice |
| --- |

If available, specifies the lean price of the inside of the book. The lean price applies to best bid/ask updates, and indicates where the price is 'leaning' within the spread.
## dPrice

| AskInfo::dPrice |
| --- |

This member variable specifies the price for the quote.
## iConnId

| AskInfo::iConnId |
| --- |

Identifies the connection on which this data was received. It is possible when using the R | Diamond Cutter API, that certain data can be received twice, once from the regular infrastructure, and once from the R | Diamond Cutter infrastructure. This indicator provides a mechanism to distinguish between the two.
**See also**
  MARKET_DATA_CONNECTION_ID     DIAMOND_CUTTER_MARKET_DATA_CONNECTION_ID
## iNumOrders

| AskInfo::iNumOrders |
| --- |

This member variable specifies the number of orders associated with the price/quantity of this quote.
## iSsboe

| AskInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| AskInfo::iType |
| --- |

This member variable indicates if the quote is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUpdateType

| AskInfo::iUpdateType |
| --- |

This member variable indicates if this update is part of a set of updates to the order book. It should be examined if the callback is RCallbacks::AskQuote() but not for RCallbacks::BestAskQuote().

Possible values for this variable are :
**See also**
  UPDATE_TYPE_UNDEFINED     UPDATE_TYPE_SOLO     UPDATE_TYPE_BEGIN     UPDATE_TYPE_MIDDLE     UPDATE_TYPE_END     UPDATE_TYPE_AGGREGATED
## iUsecs

| AskInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## llImpliedSize

| AskInfo::llImpliedSize |
| --- |

If available, this member variable specifies the implied quantity associated with the price for the quote. Subtracting this amount from AskInfo::llSize yields the outright quantity for the price level. A value of zero indicates that the implied size is not available/defined or that it is actually zero.
## llSize

| AskInfo::llSize |
| --- |

This member variable specifies the quantity associated with the price for the quote.
## sExchange

| AskInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the quote information.
## sTicker

| AskInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the quote information.
