> **Namespace:** `RApi`

# RApi::OpenInterestInfo

Public Member Functions | Public Attributes | List of all members  RApi::OpenInterestInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | OpenInterestInfo () |
|  |
| virtual | ~OpenInterestInfo () |
|  |

| Public Attributes |
| --- |
| bool | bQuantityFlag |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| int | iUsecs |
|  |
| long long | llQuantity |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents the open interest for an instrument..

The OpenInterestInfo class is used to pass open interest information received based on REngine::subscribe() requests via the RCallbacks::OpenInterest() callback.
## Constructor & Destructor Documentation

## OpenInterestInfo()

| OpenInterestInfo::OpenInterestInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero (0). Integer members and double members are initialized to zero. Boolean members are set to false.
## ~OpenInterestInfo()

| OpenInterestInfo::~OpenInterestInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OpenInterestInfo::~OpenInterestInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int OpenInterestInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bQuantityFlag

| OpenInterestInfo::bQuantityFlag |
| --- |

This member variable specifies if OpenInterestInfo::llQuantity is defined. A value of true indicates that the value is defined. A value of false indicates that the value is undefined.
## iSsboe

| OpenInterestInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970). If the callback type is MD_UPDATE_CB, this timestamp indicates the receipt time of this message from the market data provider.

If the image type is MD_IMAGE_CB, the timestamp indicates that the data is current "as of" that time.
## iType

| OpenInterestInfo::iType |
| --- |

This member variable indicates if the data is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iUsecs

| OpenInterestInfo::iUsecs |
| --- |

Microsecond component of the iSsboe timestamp
## llQuantity

| OpenInterestInfo::llQuantity |
| --- |

Open interest quantity.
## sExchange

| OpenInterestInfo::sExchange |
| --- |

Exchange of the instrument.
## sTicker

| OpenInterestInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the quote information.
