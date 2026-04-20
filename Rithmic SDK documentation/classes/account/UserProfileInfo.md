> **Namespace:** `RApi`

# RApi::UserProfileInfo

Public Member Functions | Public Attributes | List of all members  RApi::UserProfileInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | UserProfileInfo () |
|  |
| virtual | ~UserProfileInfo () |
|  |

| Public Attributes |
| --- |
| int | iConnId |
|  |
| int | iCurrentHistorySessionCount |
|  |
| int | iCurrentMarketDataSessionCount |
|  |
| int | iCurrentOrdersSessionCount |
|  |
| int | iCurrentPnlSessionCount |
|  |
| int | iCurrentRepositorySessionCount |
|  |
| int | iMaxHistorySessionCount |
|  |
| int | iMaxMarketDataSessionCount |
|  |
| int | iMaxOrdersSessionCount |
|  |
| int | iMaxPnlSessionCount |
|  |
| int | iMaxRepositorySessionCount |
|  |
| int | iPeakHistorySessionCount |
|  |
| int | iPeakMarketDataSessionCount |
|  |
| int | iPeakOrdersSessionCount |
|  |
| int | iPeakPnlSessionCount |
|  |
| int | iPeakRepositorySessionCount |
|  |
| int | iRpCode |
|  |
| void * | pContext |
|  |
| tsNCharcb | sAddress1 |
|  |
| tsNCharcb | sAddress2 |
|  |
| tsNCharcb | sCity |
|  |
| tsNCharcb | sCountry |
|  |
| tsNCharcb | sEmail |
|  |
| tsNCharcb | sFaxPhone |
|  |
| tsNCharcb | sFirstName |
|  |
| tsNCharcb | sLastName |
|  |
| tsNCharcb | sMobilePhone |
|  |
| tsNCharcb | sPostalCode |
|  |
| tsNCharcb | sResidencePhone |
|  |
| tsNCharcb | sStateProvinceRegion |
|  |
| tsNCharcb | sUser |
|  |
| tsNCharcb | sUserType |
|  |
| tsNCharcb | sWorkPhone |
|  |

## Detailed Description

This class represents a user profile.

The UserProfileInfo class conveys information about a user, including session information.

The session information is divided by connection as well as by current/peak/max session count. When a user is logged in to a Rithmic sub-system, that is considered a current login session. As a user logs in to a particular sub-system multiple times (perhaps with different apps), the session count goes up. The peak session count is the highest number of concurrent sessions recorded by the infrastructure. The max session count is the maximum number of concurrent sessions permitted for this user id.
**See also**
  REngine::getUserProfile()     RCallbacks::UserProfile()
## Constructor & Destructor Documentation

## UserProfileInfo()

| UserProfileInfo::UserProfileInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

## ~UserProfileInfo()

| UserProfileInfo::~UserProfileInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| UserProfileInfo::~UserProfileInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

## Member Function Documentation

## dump()
    **
| int UserProfileInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

## Member Data Documentation

## iConnId

| UserProfileInfo::iConnId |
| --- |

Id of the connection from which this profile information was retrieved. This value corresponds to the iConnId parameter passed into REngine::getUserProfile().
## iCurrentHistorySessionCount

| UserProfileInfo::iCurrentHistorySessionCount |
| --- |

Current session count on the history sub-system for this user.
## iCurrentMarketDataSessionCount

| UserProfileInfo::iCurrentMarketDataSessionCount |
| --- |

Current session count on the market data sub-system for this user.
## iCurrentOrdersSessionCount

| UserProfileInfo::iCurrentOrdersSessionCount |
| --- |

Current session count on the orders sub-system for this user.
## iCurrentPnlSessionCount

| UserProfileInfo::iCurrentPnlSessionCount |
| --- |

Current session count on the pnl sub-system for this user.
## iCurrentRepositorySessionCount

| UserProfileInfo::iCurrentRepositorySessionCount |
| --- |

Current session count on the repository sub-system for this user.
## iMaxHistorySessionCount

| UserProfileInfo::iMaxHistorySessionCount |
| --- |

Max session count on the history sub-system for this user.
## iMaxMarketDataSessionCount

| UserProfileInfo::iMaxMarketDataSessionCount |
| --- |

Max session count on the market data sub-system for this user.
## iMaxOrdersSessionCount

| UserProfileInfo::iMaxOrdersSessionCount |
| --- |

Max session count on the orders sub-system for this user.
## iMaxPnlSessionCount

| UserProfileInfo::iMaxPnlSessionCount |
| --- |

Max session count on the pnl sub-system for this user.
## iMaxRepositorySessionCount

| UserProfileInfo::iMaxRepositorySessionCount |
| --- |

Max session count on the repository sub-system for this user.
## iPeakHistorySessionCount

| UserProfileInfo::iPeakHistorySessionCount |
| --- |

Peak session count on the history sub-system for this user.
## iPeakMarketDataSessionCount

| UserProfileInfo::iPeakMarketDataSessionCount |
| --- |

Peak session count on the market data sub-system for this user.
## iPeakOrdersSessionCount

| UserProfileInfo::iPeakOrdersSessionCount |
| --- |

Peak session count on the orders sub-system for this user.
## iPeakPnlSessionCount

| UserProfileInfo::iPeakPnlSessionCount |
| --- |

Peak session count on the pnl sub-system for this user.
## iPeakRepositorySessionCount

| UserProfileInfo::iPeakRepositorySessionCount |
| --- |

Peak session count on the repository sub-system for this user.
## iRpCode

| UserProfileInfo::iRpCode |
| --- |

Response code returned by the infrastructure. A zero indicates no error.
## pContext

| UserProfileInfo::pContext |
| --- |

Context value passed into REngine::getUserProfile().
## sAddress1

| UserProfileInfo::sAddress1 |
| --- |

Address (first line) of this user.
## sAddress2

| UserProfileInfo::sAddress2 |
| --- |

Address (second line) of this user.
## sCity

| UserProfileInfo::sCity |
| --- |

City of this user.
## sCountry

| UserProfileInfo::sCountry |
| --- |

Country of this user.
## sEmail

| UserProfileInfo::sEmail |
| --- |

Email address of this user.
## sFaxPhone

| UserProfileInfo::sFaxPhone |
| --- |

Fax number of this user.
## sFirstName

| UserProfileInfo::sFirstName |
| --- |

First name of this user.
## sLastName

| UserProfileInfo::sLastName |
| --- |

Last name of this user.
## sMobilePhone

| UserProfileInfo::sMobilePhone |
| --- |

Mobile phone number of this user.
## sPostalCode

| UserProfileInfo::sPostalCode |
| --- |

Postal code of this user.
## sResidencePhone

| UserProfileInfo::sResidencePhone |
| --- |

Residence phone number of this user.
## sStateProvinceRegion

| UserProfileInfo::sStateProvinceRegion |
| --- |

State, province, or region of this user.
## sUser

| UserProfileInfo::sUser |
| --- |

User id of the profile. This user id is the same as the login user specified when logging in to one of the various sub-systems, using LoginParams::sUser, LoginParams::sMdUser, or LoginParams::sIhUser, depending on the connection.
## sUserType

| UserProfileInfo::sUserType |
| --- |

Indicates the type of user. A user can be an FCM administrator, an IB administrator, or a trader.
**See also**
  sUSER_TYPE_FCM     sUSER_TYPE_IB     sUSER_TYPE_TRADER
## sWorkPhone

| UserProfileInfo::sWorkPhone |
| --- |

Work phone number of this user.
