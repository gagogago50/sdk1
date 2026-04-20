> **Namespace:** `RApi`

# RApi::AssignedUserListInfo

Public Member Functions | Public Attributes | List of all members  RApi::AssignedUserListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AssignedUserListInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AssignedUserListInfo () |
|  |

| Public Attributes |
| --- |
| int | iRpCode |
|  |
| int | iUserArrayLen |
|  |
| AccountInfo | oAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb * | pUserArray |
|  |

## Detailed Description

This class contains a list of user ids, and represents the response resulting from a call to REngine::listAssignedUsers().
**See also**
  REngine::listAssignedUsers()     RCallbacks::AssignedUserList()
## Constructor & Destructor Documentation

## AssignedUserListInfo()

| AssignedUserListInfo::AssignedUserListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~AssignedUserListInfo()

| AssignedUserListInfo::~AssignedUserListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AssignedUserListInfo::~AssignedUserListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int AssignedUserListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## iRpCode

| AssignedUserListInfo::iRpCode |
| --- |

Response code, if available, associated with the request REngine::listAssignedUsers(). A non-zero response code can be interpreted as an error.
## iUserArrayLen

| AssignedUserListInfo::iUserArrayLen |
| --- |

Length of AssignedUserListInfo::pUserArray.
## oAccount

| AssignedUserListInfo::oAccount |
| --- |

AccountInfo containing the sFcmId, sIbId and sAccountId strings passed into REngine::listAssignedUsers()
## pContext

| AssignedUserListInfo::pContext |
| --- |

User-provided context object, if passed in when the corresponding REngine::listAssignedUsers() was called
## pUserArray

| AssignedUserListInfo::pUserArray |
| --- |

Array of tsNCharcbs, where each tsNCharcb is a user id. The array length is specified by AssignedUserListInfo::iUserArrayLen.
