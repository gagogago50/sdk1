> **Namespace:** `RApi`

# RApi::EndQuoteInfo

Public Member Functions | Public Attributes | List of all members  RApi::EndQuoteInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | EndQuoteInfo () |
|  |
| virtual | ~EndQuoteInfo () |
|  |

| Public Attributes |
| --- |
| int | iConnId |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| int | iUpdateType |
|  |
| int | iUsecs |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents the end to a set of updates to an order book.

The EndQuoteInfo class conveys that a set of quote updates to the instrument's order book is over, and the order book can be evaluated. This class is similar to the AskInfo or BidInfo classes where iUpdateType is UPDATE_TYPE_END, except that this class does not include price level information.
## Constructor & Destructor Documentation

## EndQuoteInfo()

| EndQuoteInfo::EndQuoteInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~EndQuoteInfo()

| EndQuoteInfo::~EndQuoteInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| EndQuoteInfo::~EndQuoteInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int EndQuoteInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## iConnId

| EndQuoteInfo::iConnId |
| --- |

Identifies the connection on which this data was received. It is possible when using the R | Diamond Cutter API, that certain data can be received twice, once from the regular infrastructure, and once from the R | Diamond Cutter infrastructure. This indicator provides a mechanism to distinguish between the two.
**See also**
  MARKET_DATA_CONNECTION_ID     DIAMOND_CUTTER_MARKET_DATA_CONNECTION_ID
## iSsboe

| EndQuoteInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| EndQuoteInfo::iType |
| --- |

This member variable indicates if the quote is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUpdateType

| EndQuoteInfo::iUpdateType |
| --- |

This member variable indicates if this update is part of a set of updates to the order book. This class should only have the value UPDATE_TYPE_END.

Possible values for this variable are :
**See also**
  UPDATE_TYPE_END
## iUsecs

| EndQuoteInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| EndQuoteInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the quote information.
## sTicker

| EndQuoteInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the quote information.
