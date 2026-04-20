> **Namespace:** `RApi`

# RApi::AgreementListInfo

Public Member Functions | Public Attributes | List of all members  RApi::AgreementListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AgreementListInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AgreementListInfo () |
|  |

| Public Attributes |
| --- |
| AgreementInfo * | asAgreementInfoArray |
|  |
| bool | bAccepted |
|  |
| int | iArrayLen |
|  |
| int | iRpCode |
|  |
| void * | pContext |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class represents a collection of agreements.

An AgreementListInfo object is passed via RCallbacks::AgreementList(), and conveys the results of a call to REngine::listAgreements(). It returns the initial parameters, a response code indicating whether or not an error has occurred, and, if applicable, an array of AgreementInfo instances.

Please read the FAQ on agreements for more information : FAQ - Agreements
**See also**
  REngine::listAgreements     RCallbacks::AgreementList     AgreementListInfo     AgreementInfo
## Constructor & Destructor Documentation

## AgreementListInfo()

| AgreementListInfo::AgreementListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~AgreementListInfo()

| AgreementListInfo::~AgreementListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AgreementListInfo::~AgreementListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int AgreementListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the AgreementListInfo object to stdout. If a tsNCharcb has an iDataLen value of zero, then the string "<empty>" will be printed.
## Member Data Documentation

## asAgreementInfoArray

| AgreementListInfo::asAgreementInfoArray |
| --- |

Array of AgreementInfo objects. The array length is specified by AgreementListInfo::iArrayLen.
## bAccepted

| AgreementListInfo::bAccepted |
| --- |

Returns the value of bAccepted initially passed into REngine::listAgreements(). A value of true indicates that each agreement in the array has been accepted.
## iArrayLen

| AgreementListInfo::iArrayLen |
| --- |

Specifies the array length.
## iRpCode

| AgreementListInfo::iRpCode |
| --- |

Response code, if available, associated with the request REngine::listAgreements(). A non-zero response code can be interpreted as an error.
## pContext

| AgreementListInfo::pContext |
| --- |

Returns the value of pContext passed into REngine::listAgreements().
## sRpCode

| AgreementListInfo::sRpCode |
| --- |

String equivalent of the response code AgreementListInfo::iRpCode. It may not be populated if the value of iRpCode is zero (API_OK).
