> **Namespace:** `RApi`

# RApi::PingInfo

Public Member Functions | Public Attributes | List of all members  RApi::PingInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | PingInfo () |
|  |
| virtual | ~PingInfo () |
|  |

| Public Attributes |
| --- |
| double | dElapsedSeconds |
|  |
| int | iConnId |
|  |
| void * | pContext |
|  |

## Detailed Description

This class returns round trip transit information.
**See also**
  REngine::ping()     RCallbacks::Ping()
## Constructor & Destructor Documentation

## PingInfo()

| PingInfo::PingInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~PingInfo()

| PingInfo::~PingInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| PingInfo::~PingInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int PingInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints instance information to stdout. As a courtesy, it includes a calculation of the elapsed time. If a tsNCharcb is empty, then the string "<empty>" will be printed.
## Member Data Documentation

## dElapsedSeconds

| double PingInfo::dElapsedSeconds |
| --- |

Number of whole seconds elapsed during the round-trip-time
## iConnId

| int PingInfo::iConnId |
| --- |

Id of the connection which was pinged.
**See also**
  MARKET_DATA_CONNECTION_ID     TRADING_SYSTEM_CONNECTION_ID     PNL_CONNECTION_ID     INTRADAY_HISTORY_CONNECTION_ID
## pContext

| void * PingInfo::pContext |
| --- |

Returns the value of pContext passed into REngine::Ping().
