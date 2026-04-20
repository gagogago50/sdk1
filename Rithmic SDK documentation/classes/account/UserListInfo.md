> **Namespace:** `RApi`

# RApi::UserListInfo

Public Member Functions | Public Attributes | List of all members  RApi::UserListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | UserListInfo () |
|  |
| virtual | ~UserListInfo () |
|  |

| Public Attributes |
| --- |
| int | iRpCode |
|  |
| void * | pContext |
|  |
| tsNCharcb | sIbId |
|  |
| tsNCharcb | sUserType |
|  |

## Detailed Description

An instance of this class represents the end of a list of users.

After all of the users returned from a call to REngine::listUsers(), an instance of this class will be returned via RCallbacks::UserList(). This class indicates an end to the list of users, as well as conveying any error that may have occurred.
**See also**
  REngine::listUsers     RCallbacks::User     RCallbacks::UserList     UserInfo     UserListInfo
## Constructor & Destructor Documentation

## UserListInfo()

| UserListInfo::UserListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~UserListInfo()

| UserListInfo::~UserListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| UserListInfo::~UserListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int UserListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the value of each public member to stdout. If a tsNCharcb is empty, the string "<empty>" will be printed.
## Member Data Documentation

## iRpCode

| UserListInfo::iRpCode |
| --- |

Response code, if available, associated with the request REngine::listUsers(). A non-zero response code can be interpreted as an error.
## pContext

| UserListInfo::pContext |
| --- |

Context pointer, if specified when requesting the list of users.
## sIbId

| UserListInfo::sIbId |
| --- |

IB specified when requesting the list of users.
## sUserType

| UserListInfo::sUserType |
| --- |

User type specified when requesting the list of users.
