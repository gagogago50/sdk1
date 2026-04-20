> **Namespace:** `RApi`

# RApi::VolumeAtPriceInfo

Public Member Functions | Public Attributes | List of all members  RApi::VolumeAtPriceInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | VolumeAtPriceInfo () |
|  |
| virtual | ~VolumeAtPriceInfo () |
|  |

| Public Attributes |
| --- |
| double * | adPriceArray |
|  |
| long long * | allVolumeArray |
|  |
| int | iArrayLen |
|  |
| int | iRpCode |
|  |
| int | iSsboe |
|  |
| int | iUsecs |
|  |
| void * | pContext |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class contains the results of a request to get volume-at-price information.

A VolumeAtPriceInfo object is used to present the results of a request to get volumes traded at each price level since the beginning of the trading session for a given instrument (REngine::getVolumeAtPrice())
**See also**
  REngine::getVolumeAtPrice()     RCallbacks::VolumeAtPrice()
## Constructor & Destructor Documentation

## VolumeAtPriceInfo()

| VolumeAtPriceInfo::VolumeAtPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~VolumeAtPriceInfo()

| VolumeAtPriceInfo::~VolumeAtPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| VolumeAtPriceInfo::~VolumeAtPriceInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int VolumeAtPriceInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## adPriceArray

| VolumeAtPriceInfo::adPriceArray |
| --- |

Array of prices. The Nth element of this array corresponds to the Nth element of allVolumeArray
## allVolumeArray

| VolumeAtPriceInfo::allVolumeArray |
| --- |

Array of volumes, each representing the volume traded at a particular price. The Nth element of this array corresponds to the Nth element of adPriceArray
## iArrayLen

| VolumeAtPriceInfo::iArrayLen |
| --- |

Length of the price and volume arrays
## iRpCode

| VolumeAtPriceInfo::iRpCode |
| --- |

Response code associated with the response to REngine::getVolumeAtPriceInfo(). A value of zero (API_OK) indicates success, and a non-zero value indicates some error.
## iSsboe

| VolumeAtPriceInfo::iSsboe |
| --- |

Seconds portion of the timestamp (in seconds since the beginning of epoch) of the most recent trade aggregated into these volumes at prices.
## iUsecs

| VolumeAtPriceInfo::iUsecs |
| --- |

Microecond portion of the timestamp of the most recent trade aggregated into these volumes at prices.
## pContext

| VolumeAtPriceInfo::pContext |
| --- |

Context value passed when calling REngine::getVolumeAtPrice()
## sExchange

| VolumeAtPriceInfo::sExchange |
| --- |

Exchange of the instrument
## sTicker

| VolumeAtPriceInfo::sTicker |
| --- |

Ticker symbol of the instrument
