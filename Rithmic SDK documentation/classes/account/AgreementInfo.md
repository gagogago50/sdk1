> **Namespace:** `RApi`

# RApi::AgreementInfo

Public Member Functions | Public Attributes | List of all members  RApi::AgreementInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AgreementInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AgreementInfo () |
|  |

| Public Attributes |
| --- |
| bool | bMandatory |
|  |
| int | iEndUserAcceptanceSsboe |
|  |
| int | iInForceSsboe |
|  |
| int | iPublicationSsboe |
|  |
| tsNCharcb | sEndUserAcceptanceStatus |
|  |
| tsNCharcb | sMarketDataUsageCapacity |
|  |
| tsNCharcb | sStatus |
|  |
| tsNCharcb | sTitle |
|  |

## Detailed Description

This class represents an agreement.

The AgreementInfo class is used to convey agreement meta-data. One can request agreement information by calling REngine::listAgreements().

Please read the FAQ on agreements for more information : FAQ - Agreements
**See also**
  REngine::listAgreements     RCallbacks::AgreementList     AgreementListInfo     AgreementInfo
## Constructor & Destructor Documentation

## AgreementInfo()

| AgreementInfo::AgreementInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~AgreementInfo()

| AgreementInfo::~AgreementInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AgreementInfo::~AgreementInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int AgreementInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bMandatory

| AgreementInfo::bMandatory |
| --- |

Indicates whether acceptance of this agreement is mandatory for access to the trading platform.
## iEndUserAcceptanceSsboe

| AgreementInfo::iEndUserAcceptanceSsboe |
| --- |

Time, in seconds since the beginning of the epoch, of when the agreement was accepted by the end user.
## iInForceSsboe

| AgreementInfo::iInForceSsboe |
| --- |

Time, in seconds since the beginning of the epoch, by when the agreement must be accepted.
## iPublicationSsboe

| AgreementInfo::iPublicationSsboe |
| --- |

Time, in seconds since the beginning of the epoch, of the publication date of the agreement.
## sEndUserAcceptanceStatus

| AgreementInfo::sEndUserAcceptanceStatus |
| --- |

Status of the end user's acceptance.
## sMarketDataUsageCapacity

| AgreementInfo::sMarketDataUsageCapacity |
| --- |

If available, the market data usage capacity indicated by the end user when the agreement was submitted or accepted.
## sStatus

| AgreementInfo::sStatus |
| --- |

Status of the agreement itself. Currently this property will have values of either "active" or "inactive". Agreements with inactive statuses are retained for historical purposes. Please note that this agreement status is separate and distinct from the status of the end user's acceptance (AgreementInfo::sEndUserAcceptanceStatus).
## sTitle

| AgreementInfo::sTitle |
| --- |

Title of the agreement document.
