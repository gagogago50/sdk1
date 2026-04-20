> **Namespace:** `RApi`

# RApi::HighPriceLimitInfo

Public Member Functions | Public Attributes | List of all members  RApi::HighPriceLimitInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | HighPriceLimitInfo () |
|  |
| virtual | ~HighPriceLimitInfo () |
|  |

| Public Attributes |
| --- |
| bool | bPriceFlag |
|  |
| double | dPrice |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents high price limit information.

The HighPriceLimitInfo class is used to convey the upper bound of allowable prices during a trading session.
**See also**
  RApi::MD_PRICE_LIMIT
## Constructor & Destructor Documentation

## HighPriceLimitInfo()

| HighPriceLimitInfo::HighPriceLimitInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~HighPriceLimitInfo()

| HighPriceLimitInfo::~HighPriceLimitInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| HighPriceLimitInfo::~HighPriceLimitInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int HighPriceLimitInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bPriceFlag

| HighPriceLimitInfo::bPriceFlag |
| --- |

This member variable specifies if HighPriceLimitInfo::dPrice is defined or not. If the value is true, then the price is defined. If the value is false, the price is undefined. A high price may be undefined if the trading session is closed, or if the exchange does not publish this information.
## dPrice

| HighPriceLimitInfo::dPrice |
| --- |

This member variable specifies the high price limit.
## iSsboe

| HighPriceLimitInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| HighPriceLimitInfo::iType |
| --- |

This member variable indicates if the high is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| HighPriceLimitInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## sExchange

| HighPriceLimitInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the high price limit.
## sTicker

| HighPriceLimitInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the high price limit.
