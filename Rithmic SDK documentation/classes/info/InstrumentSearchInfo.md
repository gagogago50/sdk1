> **Namespace:** `RApi`

# RApi::InstrumentSearchInfo

Public Member Functions | Public Attributes | List of all members  RApi::InstrumentSearchInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | InstrumentSearchInfo () |
|  |
| virtual | ~InstrumentSearchInfo () |
|  |

| Public Attributes |
| --- |
| SearchTerm * | aoTerms |
|  |
| RefDataInfo * | asArray |
|  |
| int | iArrayLen |
|  |
| int | iNumTerms |
|  |
| int | iRpCode |
|  |
| void * | pContext |
|  |
| tsNCharcb | sExchange |
|  |

## Detailed Description

An instance of this class marks the conclusion of the results returned from a call to REngine::searchInstrument().

REngine::searchInstrument() returns zero to many instruments, with each returned instrument being conveyed via RCallbacks::RefData(). When the results are complete, RCallbacks::InstrumentSearch() will be invoked, with this class conveying the initial parameters.
**See also**
  REngine::searchInstrument()     RCallbacks::RefData()     RCallbacks::InstrumentSearch()
## Constructor & Destructor Documentation

## InstrumentSearchInfo()

| InstrumentSearchInfo::InstrumentSearchInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~InstrumentSearchInfo()

| InstrumentSearchInfo::~InstrumentSearchInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| InstrumentSearchInfo::~InstrumentSearchInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int InstrumentSearchInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

## Member Data Documentation

## aoTerms

| InstrumentSearchInfo::aoTerms |
| --- |

Array of SearchTerms initially passed to REngine::searchInstrument().
## asArray

| InstrumentSearchInfo::asArray |
| --- |

This array contains the results of the search. Each element is in instance of RefDataInfo.

This array may be empty in the event of an error.

The array length is specified by InstrumentSearchInfo::iArrayLen.
## iArrayLen

| InstrumentSearchInfo::iArrayLen |
| --- |

This variable specifies the array length of InstrumentSearchInfo::asArray.
## iNumTerms

| InstrumentSearchInfo::iNumTerms |
| --- |

Number of elements in InstrumentSearchInfo::aoTerms.
## iRpCode

| InstrumentSearchInfo::iRpCode |
| --- |

Response/error code of the search.
## pContext

| InstrumentSearchInfo::pContext |
| --- |

User context initially passed to REngine::searchInstrument().
## sExchange

| InstrumentSearchInfo::sExchange |
| --- |

Exchange string initially passed to REngine::searchInstrument().
