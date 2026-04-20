> **Namespace:** `RApi`

# RApi::PriceIncrInfo

Public Member Functions | Public Attributes | List of all members  RApi::PriceIncrInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | PriceIncrInfo () |
|  |
| virtual | ~PriceIncrInfo () |
|  |

| Public Attributes |
| --- |
| PriceIncrRow * | asPriceIncrArray |
|  |
| int | iArrayLen |
|  |
| int | iRpCode |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sRpCode |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

An instance of this class represents the minimum price increment of an instrument.

It is possible that the minimum price increment changes based on the current price of the instrument. A PriceIncrInfo object is used to pass an array of PriceIncrRow instances. Each row indicates a minimum price increment for a range of prices. If the minimum price increment is constant, there will only be one row in the array. The PriceIncrInfo for an instrument can be requested by calling REngine::getPriceIncrInfo();
## Constructor & Destructor Documentation

## PriceIncrInfo()

| PriceIncrInfo::PriceIncrInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~PriceIncrInfo()

| PriceIncrInfo::~PriceIncrInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| PriceIncrInfo::~PriceIncrInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will deallocate the array of PriceIncrRows.
## Member Function Documentation

## dump()
    **
| int PriceIncrInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## asPriceIncrArray

| PriceIncrInfo::asPriceIncrArray |
| --- |

This is an array of PriceIncrRow objects. The array length is specified by PriceIncrInfo::iArrayLen.
## iArrayLen

| PriceIncrInfo::iArrayLen |
| --- |

This variable specifies the number of rows in the array (the array length).
## iRpCode

| PriceIncrInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::getPriceIncrInfo(). A non-zero response code can be interpreted as an error.
## sExchange

| PriceIncrInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the quote information.
## sRpCode

| PriceIncrInfo::sRpCode |
| --- |

The is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
## sTicker

| PriceIncrInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the quote information.
