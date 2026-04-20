> **Namespace:** `RApi`

# RApi::AlertInfo

Public Member Functions | Public Attributes | List of all members  RApi::AlertInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AlertInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AlertInfo () |
|  |

| Public Attributes |
| --- |
| int | iAlertType |
|  |
| int | iConnectionId |
|  |
| int | iRpCode |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sMessage |
|  |
| tsNCharcb | sRpCode |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

This class represents a system alert.

The AlertInfo class is used to pass alert information via
 RCallbacks::Alert(). Alerts typically convey information about the system infrastructure, rather than data content. It is possible that one or more of members of AlertInfo may not be populated.
## Constructor & Destructor Documentation

## AlertInfo()

| AlertInfo::AlertInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Pointers to arrays are initialized to NULL, and their lengths are set to zero.
## ~AlertInfo()

| AlertInfo::~AlertInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AlertInfo::~AlertInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

The destructor does not deallocate any memory pointed to by member tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int AlertInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the value of each public member to stdout. If a tsNCharcb has an iDataLen value of MNM_EMPTY_DATA_ITEM_LEN and pData of MNM_EMPTY_DATA_ITEM, the string "<empty>" will be printed.
## Member Data Documentation

## iAlertType

| RApi::AlertInfo::iAlertType |
| --- |

A numeric type of the alert. The possible values are defined in RApi.h and begin with the ALERT_ prefix. Possible values are listed below.
**See also**
  ALERT_CONNECTION_OPENED     ALERT_CONNECTION_CLOSED     ALERT_CONNECTION_BROKEN     ALERT_LOGIN_COMPLETE     ALERT_LOGIN_FAILED     ALERT_SERVICE_ERROR     ALERT_FORCED_LOGOUT     ALERT_QUIET_HEARTBEAT     ALERT_TRADING_DISABLED     ALERT_TRADING_ENABLED     ALERT_SHUTDOWN_SIGNAL
## iConnectionId

| RApi::AlertInfo::iConnectionId |
| --- |

The connection id, if available, associated with the alert.
**See also**
  MARKET_DATA_CONNECTION_ID     TRADING_SYSTEM_CONNECTION_ID     PNL_CONNECTION_ID     INTRADAY_HISTORY_CONNECTION_ID
## iRpCode

| RApi::AlertInfo::iRpCode |
| --- |

The response code, if available, associated with the alert. A non-zero response code can be interpreted as an error.
## sExchange

| RApi::AlertInfo::sExchange |
| --- |

The exchange abbreviation, if available, pertaining to this Alert.
## sMessage

| RApi::AlertInfo::sMessage |
| --- |

A description of the alert condition.
## sRpCode

| RApi::AlertInfo::sRpCode |
| --- |

The is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
## sTicker

| RApi::AlertInfo::sTicker |
| --- |

The ticker symbol, if available, pertaining to this Alert.
