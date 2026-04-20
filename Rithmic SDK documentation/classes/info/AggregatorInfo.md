> **Namespace:** `RApi`

# RApi::AggregatorInfo

Public Member Functions | Public Attributes | List of all members  RApi::AggregatorInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AggregatorInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AggregatorInfo () |
|  |

| Public Attributes |
| --- |
| int | iRpCode |
|  |

## Detailed Description

Returns information about whether the market data connection is to an aggregated ticker plant.
**See also**
  REngine::isThereAnAggregator()     RCallbacks::Aggregator()
## Constructor & Destructor Documentation

## AggregatorInfo()

| AggregatorInfo::AggregatorInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~AggregatorInfo()

| AggregatorInfo::~AggregatorInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AggregatorInfo::~AggregatorInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int AggregatorInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints instance information to stdout. If a tsNCharcb has an iDataLen value of zero, then the string "<empty>" will be printed.
## Member Data Documentation

## iRpCode

| int AggregatorInfo::iRpCode |
| --- |

Response code resulting from a call to REngine::isThereAnAggregator(). A response code of zero (API_OK) indicates that there is an aggregator. A response code of 14 (API_UNKNOWN_REQUEST) indicates that there is no aggregator. A response code of 6 (API_BAD_INPUT) indicates that the market data connect point does not actually connect to a ticker plant. Any other response code reflects an unexpected error condition.
