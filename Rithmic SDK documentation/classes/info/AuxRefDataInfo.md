> **Namespace:** `RApi`

# RApi::AuxRefDataInfo

Public Member Functions | Public Attributes | List of all members  RApi::AuxRefDataInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AuxRefDataInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AuxRefDataInfo () |
|  |

| Public Attributes |
| --- |
| bool | bUnitOfMeasureQty |
|  |
| double | dUnitOfMeasureQty |
|  |
| int | iRpCode |
|  |
| int | iSsboe |
|  |
| int | iType |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sFirstDeliveryDate |
|  |
| tsNCharcb | sFirstNoticeDate |
|  |
| tsNCharcb | sFirstPositionDate |
|  |
| tsNCharcb | sFirstTradingDate |
|  |
| tsNCharcb | sLastDeliveryDate |
|  |
| tsNCharcb | sLastNoticeDate |
|  |
| tsNCharcb | sLastPositionDate |
|  |
| tsNCharcb | sLastTradingDate |
|  |
| tsNCharcb | sSettlementMethod |
|  |
| tsNCharcb | sTicker |
|  |
| tsNCharcb | sUnitOfMeasure |
|  |

## Detailed Description

This class represents auxiliary reference data for an instrument.

The AuxRefDataInfo class is used to pass auxiliary reference data resulting from calls to REngine::getAuxRefData() or REngine::subscribe() where the flags include RApi::MD_REF_DATA. The data is passed via the callback RCallbacks::AuxRefData(). Please note that this auxiliary reference data is seperate and distinct from RefDataInfo and PriceIncrInfo.
## Constructor & Destructor Documentation

## AuxRefDataInfo()

| AuxRefDataInfo::AuxRefDataInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~AuxRefDataInfo()

| AuxRefDataInfo::~AuxRefDataInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AuxRefDataInfo::~AuxRefDataInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int AuxRefDataInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bUnitOfMeasureQty

| AuxRefDataInfo::bUnitOfMeasureQty |
| --- |

Indicates whether dUnitOfMeasureQty is defined and can be used.
## dUnitOfMeasureQty

| AuxRefDataInfo::dUnitOfMeasureQty |
| --- |

Contract size for each instrument, and works in combination with AuxRefDataInfo::sUnitOfMeasure.
## iRpCode

| AuxRefDataInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::getAuxRefData(). A non-zero response code can be interpreted as an error. The error codes are in the header file.
## iSsboe

| AuxRefDataInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970 GMT). The timestamp indicates that the data is current "as of" that time.
## iType

| AuxRefDataInfo::iType |
| --- |

Indicates if this reference data is from a cache or the real-time data stream.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## sExchange

| AuxRefDataInfo::sExchange |
| --- |

Indicates the exchange of the instrument.
## sFirstDeliveryDate

| AuxRefDataInfo::sFirstDeliveryDate |
| --- |

First date that users will complete delivery.
## sFirstNoticeDate

| AuxRefDataInfo::sFirstNoticeDate |
| --- |

First date that users will get notified that they have been assigned a delivery.
## sFirstPositionDate

| AuxRefDataInfo::sFirstPositionDate |
| --- |

First date on which the exchange will accept intents and run assignments for deliverable contracts.
## sFirstTradingDate

| AuxRefDataInfo::sFirstTradingDate |
| --- |

Date on which the contract will start trading.
## sLastDeliveryDate

| AuxRefDataInfo::sLastDeliveryDate |
| --- |

Last date that users will complete delivery.
## sLastNoticeDate

| AuxRefDataInfo::sLastNoticeDate |
| --- |

Last date that users will get notified that they have been assigned a delivery.
## sLastPositionDate

| AuxRefDataInfo::sLastPositionDate |
| --- |

Last date on which the exchange will accept intents and run assignments for deliverable contracts.
## sLastTradingDate

| AuxRefDataInfo::sLastTradingDate |
| --- |

Date on which the contract will cease trading.
## sSettlementMethod

| AuxRefDataInfo::sSettlementMethod |
| --- |

Settlement method of this instrument.
## sTicker

| AuxRefDataInfo::sTicker |
| --- |

Indicates the symbol of the instrument.
## sUnitOfMeasure

| AuxRefDataInfo::sUnitOfMeasure |
| --- |

Unit of measure for the instrument's contract size. USD unit of measure can be in U.S. dollars or cents.
