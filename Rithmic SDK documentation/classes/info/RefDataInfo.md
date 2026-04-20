> **Namespace:** `RApi`

# RApi::RefDataInfo

Public Member Functions | Public Attributes | List of all members  RApi::RefDataInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | RefDataInfo () |
|  |
| virtual | ~RefDataInfo () |
|  |

| Public Attributes |
| --- |
| bool | bCapPrice |
|  |
| bool | bFloorPrice |
|  |
| bool | bMaxPriceVariation |
|  |
| bool | bMinSizeIncrement |
|  |
| bool | bSinglePointValue |
|  |
| bool | bSizeMultiplier |
|  |
| bool | bStrikePrice |
|  |
| double | dCapPrice |
|  |
| double | dFloorPrice |
|  |
| double | dMaxPriceVariation |
|  |
| double | dSinglePointValue |
|  |
| double | dSizeMultiplier |
|  |
| double | dStrikePrice |
|  |
| int | iRpCode |
|  |
| int | iSizeMultiplierPrecision |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| long long | llMinSizeIncrement |
|  |
| tsNCharcb | sBinaryContractType |
|  |
| tsNCharcb | sCurrency |
|  |
| tsNCharcb | sDescription |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sExpiration |
|  |
| tsNCharcb | sExpirationTime |
|  |
| tsNCharcb | sInstrumentType |
|  |
| tsNCharcb | sIsTradable |
|  |
| tsNCharcb | sOpenTime |
|  |
| tsNCharcb | sPeriodCode |
|  |
| tsNCharcb | sProductCode |
|  |
| tsNCharcb | sPutCallIndicator |
|  |
| tsNCharcb | sRpCode |
|  |
| tsNCharcb | sStrikeOperator |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sTradingExchange |
|  |
| tsNCharcb | sTradingTicker |
|  |
| tsNCharcb | sUnderlying |
|  |

## Detailed Description

This class represents reference data for an instrument.

The RefDataInfo class is used to pass reference data received based on resulting from calls to REngine::getRefData() via the RCallbacks::RefData() callback.
## Constructor & Destructor Documentation

## RefDataInfo()

| RefDataInfo::RefDataInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~RefDataInfo()

| RefDataInfo::~RefDataInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| RefDataInfo::~RefDataInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int RefDataInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bCapPrice

| RefDataInfo::bCapPrice |
| --- |

This member variable indicates if the RefDataInfo::dCapPrice value is defined.
## bFloorPrice

| RefDataInfo::bFloorPrice |
| --- |

This member variable indicates if the RefDataInfo::dFloorPrice value is defined.
## bMaxPriceVariation

| RefDataInfo::bMaxPriceVariation |
| --- |

This member variable indicates if the RefDataInfo::dMaxPriceVariation value is defined.
## bMinSizeIncrement

| RefDataInfo::bMinSizeIncrement |
| --- |

If true, indicates that this instrument has a minimum size increment specified in RefDataInfo::llMinSizeIncrement.
**See also**
  RefDataInfo::llMinSizeIncrement
## bSinglePointValue

| RefDataInfo::bSinglePointValue |
| --- |

This member variable indicates if the RefDataInfo::dSinglePointValue value is defined.
## bSizeMultiplier

| RefDataInfo::bSizeMultiplier |
| --- |

When true, indicates that there is a size multiplier specified.
**See also**
  RefDataInfo::dSizeMultiplier     RefDataInfo::iSizeMultiplierPrecision
## bStrikePrice

| RefDataInfo::bStrikePrice |
| --- |

This member variable indicates if the RefDataInfo::dStrikePrice value is defined.
## dCapPrice

| RefDataInfo::dCapPrice |
| --- |

This member variable, if populated, contains the cap price.
## dFloorPrice

| RefDataInfo::dFloorPrice |
| --- |

This member variable, if populated, contains the floor price.
## dMaxPriceVariation

| RefDataInfo::dMaxPriceVariation |
| --- |

This member variable, if populated, contains the differential static value for price banding.
## dSinglePointValue

| RefDataInfo::dSinglePointValue |
| --- |

This member variable, if populated, contains a the value of a single point.
## dSizeMultiplier

| RefDataInfo::dSizeMultiplier |
| --- |

When RefDataInfo::bSizeMultiplier is true, this value can be used to multiply sizes/quantities/volumes associated with this instrument for display purposes. This value is intended to be used for instruments which trade in fractional quantities.
**See also**
  RefDataInfo::bSizeMultiplier     RefDataInfo::iSizeMultiplierPrecision
## dStrikePrice

| RefDataInfo::dStrikePrice |
| --- |

This member variable, if populated, contains the strike price.
## iRpCode

| RefDataInfo::iRpCode |
| --- |

```
   The response code, if available, associated with the request
   REngine::getRefData().  A non-zero response code can be interpreted
   as an error.

```

## iSizeMultiplierPrecision

| RefDataInfo::iSizeMultiplierPrecision |
| --- |

When RefDataInfo::bSizeMultiplier is true, this value can be used to format decimal sizes/quantities/volumes in displays after they have been multiplied by RefDataInfo::dSizeMultiplier. This value contains the precision to which the product of the multiplied quantity should be displayed.
**See also**
  RefDataInfo::bSizeMultiplier     RefDataInfo::dSizeMultiplier
## iSsboe

| RefDataInfo::iSsboe |
| --- |

```
   Timestamp in seconds since the beginning of epoch (Jan. 1, 1970).
   The timestamp indicates that the data is current "as of" that time.

```

## iType

| RefDataInfo::iType |
| --- |

This member variable indicates if the reference data is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## llMinSizeIncrement

| RefDataInfo::llMinSizeIncrement |
| --- |

Minimum size increment for this instrument when RefDataInfo::bMinSizeIncrement is true
**See also**
  RefDataInfo::bMinSizeIncrement
## sBinaryContractType

| RefDataInfo::sBinaryContractType |
| --- |

For binary contracts, this member variable contains the type of binary contract.
## sCurrency

| RefDataInfo::sCurrency |
| --- |

This member variable, if populated, contains the currency associated with RefDataInfo::dSinglePointValue.
## sDescription

| RefDataInfo::sDescription |
| --- |

This member variable contains the description of the instrument.
## sExchange

| RefDataInfo::sExchange |
| --- |

This member variable contains the exchange of the instrument.
## sExpiration

| RefDataInfo::sExpiration |
| --- |

When available, this member variable contains the expiration month and year of the instrument in the form CCYYMMDD. If the day is not available from the exchange, the DD portion will be presented as "00", as in "20090600".
## sExpirationTime

| RefDataInfo::sExpirationTime |
| --- |

When available, this member variable contains the expiration time expressed in seconds since the beginning of the epoch (Jan 1, 1970 GMT).
## sInstrumentType

| RefDataInfo::sInstrumentType |
| --- |

This member variable contains the instrument type of the instrument.
## sIsTradable

| RefDataInfo::sIsTradable |
| --- |

Sometimes an instrument exists but is not tradable. For example, there is a case where an option's underlying does not actually exist as a tradable instrument. If this value is available, it will be in this variable. We expect it to be "Y", "N", or empty (unspecified). In general, if the value is empty, the instrument is tradable.
## sOpenTime

| RefDataInfo::sOpenTime |
| --- |

When available, the time at which this instrument opens.
## sPeriodCode

| RefDataInfo::sPeriodCode |
| --- |

This member variable contains the period code of the instrument.
## sProductCode

| RefDataInfo::sProductCode |
| --- |

This member variable contains the product code of the instrument.
## sPutCallIndicator

| RefDataInfo::sPutCallIndicator |
| --- |

This member variable, if populated, contains an indication of whether the instrument is a put or call.
## sRpCode

| RefDataInfo::sRpCode |
| --- |

```
   The is a string equivalent of the response code.  It may not be
   populated if the value of iRpCode is zero.

```

## sStrikeOperator

| RefDataInfo::sStrikeOperator |
| --- |

If applicable, the operator used with the floor/cap price or strike price.
## sTicker

| RefDataInfo::sTicker |
| --- |

This member variable contains the symbol of the instrument.
## sTradingExchange

| RefDataInfo::sTradingExchange |
| --- |

If the instrument specified by RefDataInfo::sTicker and RefDataInfo::sExchange is a continuous contract, this member variable will contain the actual tradable exchange of the continuous contract.

FAQ - Continuous Contracts
## sTradingTicker

| RefDataInfo::sTradingTicker |
| --- |

If the instrument specified by RefDataInfo::sTicker and RefDataInfo::sExchange is a continuous contract, this member variable will contain the actual tradable ticker symbol of the continuous contract.

FAQ - Continuous Contracts
## sUnderlying

| RefDataInfo::sUnderlying |
| --- |

If applicable, the underlying symbol of the instrument.
