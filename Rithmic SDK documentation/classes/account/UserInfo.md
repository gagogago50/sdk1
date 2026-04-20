> **Namespace:** `RApi`

# RApi::UserInfo

Public Member Functions | Public Attributes | List of all members  RApi::UserInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | UserInfo () |
|  |
| virtual | ~UserInfo () |
|  |

| Public Attributes |
| --- |
| int | iCallbackType |
|  |
| int | iCreationSsboe |
|  |
| int | iCreationUsecs |
|  |
| int | iDisableSsboe |
|  |
| int | iFirstLoginSsboe |
|  |
| int | iFirstLoginUsecs |
|  |
| int | iLastLoginSsboe |
|  |
| int | iLastLoginUsecs |
|  |
| int | iSsboe |
|  |
| int | iUsecs |
|  |
| void * | pContext |
|  |
| tsNCharcb | sAction |
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
| tsNCharcb | sFcmId |
|  |
| tsNCharcb | sFirstName |
|  |
| tsNCharcb | sIbId |
|  |
| tsNCharcb | sLastLoginRemarks |
|  |
| tsNCharcb | sLastLoginResult |
|  |
| tsNCharcb | sLastName |
|  |
| tsNCharcb | sPostalCode |
|  |
| tsNCharcb | sStateProvinceRegion |
|  |
| tsNCharcb | sStatus |
|  |
| tsNCharcb | sUser |
|  |
| tsNCharcb | sUserType |
|  |

## Detailed Description

This class conveys information about a user.

The UserInfo class conveys information about a user.
**See also**
  REngine::listUsers()     REngine::subscribeUser()     REngine::unsubscribeUser()     RCallbacks::User()
## Constructor & Destructor Documentation

## UserInfo()

| UserInfo::UserInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members to zero, NULL or empty.
## ~UserInfo()

| UserInfo::~UserInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| UserInfo::~UserInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

The destructor does not deallocate any memory pointed to by member tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int UserInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This convenience routine prints the value of each public member to stdout. If a tsNCharcb is empty, the string "<empty>" will be printed.
## Member Data Documentation

## iCallbackType

| UserInfo::iCallbackType |
| --- |

Callback type (image/update). When the type is image, the information represents a snapshot from a server-side data cache in response to a call to REngine::listUsers(). When the type is update, the information is from the data stream, and a result of a call to REngine::subscribeUser().
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## iCreationSsboe

| UserInfo::iCreationSsboe |
| --- |

Creation time of this user, expressed in whole seconds since the beginning of the epoch (unix time).
## iCreationUsecs

| UserInfo::iCreationUsecs |
| --- |

Microsecond portion of the creation time of this user.
## iDisableSsboe

| UserInfo::iDisableSsboe |
| --- |

Time when this user was most recently disabled, expressed in whole seconds since the beginning of the epoch (unix time).
## iFirstLoginSsboe

| UserInfo::iFirstLoginSsboe |
| --- |

First login time of this user, expressed in whole seconds since the beginning of the epoch (unix time).
## iFirstLoginUsecs

| UserInfo::iFirstLoginUsecs |
| --- |

Microsecond portion of the first login time of this user.
## iLastLoginSsboe

| UserInfo::iLastLoginSsboe |
| --- |

Last login time of this user, expressed in whole seconds since the beginning of the epoch (unix time).
## iLastLoginUsecs

| UserInfo::iLastLoginUsecs |
| --- |

Microsecond portion of the last login time of this user.
## iSsboe

| UserInfo::iSsboe |
| --- |

Update time of this information, expressed in whole seconds since the beginning of the epoch (unix time).
## iUsecs

| UserInfo::iUsecs |
| --- |

Microsecond portion of the update time of this information.
## pContext

| UserInfo::pContext |
| --- |

Context pointer initially sent with either REngine::listUsers() or REngine::subscribeUser().
## sAction

| UserInfo::sAction |
| --- |

Most recent action, usually indicating adding a user or modifying their information. This value may be empty, such as when last login information is updated.
## sAddress1

| UserInfo::sAddress1 |
| --- |

Address (first line) of this user.
## sAddress2

| UserInfo::sAddress2 |
| --- |

Address (second line) of this user.
## sCity

| UserInfo::sCity |
| --- |

City of this user.
## sCountry

| UserInfo::sCountry |
| --- |

Country of this user.
## sEmail

| UserInfo::sEmail |
| --- |

Email address of this user.
## sFcmId

| UserInfo::sFcmId |
| --- |

FCM of the user. All users are associated with one FCM.
## sFirstName

| UserInfo::sFirstName |
| --- |

First name of this user.
## sIbId

| UserInfo::sIbId |
| --- |

IB associated with this user. Users who are IB administrators or traders are associated with one IB.
## sLastLoginRemarks

| UserInfo::sLastLoginRemarks |
| --- |

Remarks pertaining to the last login result, such as "invalid credentials" for a result of "rejected".
## sLastLoginResult

| UserInfo::sLastLoginResult |
| --- |

Result of the last login attempt for this user, "accepted" or "rejected".
## sLastName

| UserInfo::sLastName |
| --- |

Last name of this user.
## sPostalCode

| UserInfo::sPostalCode |
| --- |

Postal code of this user.
## sStateProvinceRegion

| UserInfo::sStateProvinceRegion |
| --- |

State, province, or region of this user.
## sStatus

| UserInfo::sStatus |
| --- |

Status of the user. A user can be enabled or disabled, and cannot log in when disabled.
**See also**
  sUSER_STATUS_ENABLED     sUSER_STATUS_DISABLED
## sUser

| UserInfo::sUser |
| --- |

User id. This user id is the same as the login user specified when logging in to one of the various sub-systems.
## sUserType

| UserInfo::sUserType |
| --- |

Indicates the type of user. A user can be an FCM administrator, an IB administrator, or a trader.
**See also**
  sUSER_TYPE_FCM     sUSER_TYPE_IB     sUSER_TYPE_TRADER
