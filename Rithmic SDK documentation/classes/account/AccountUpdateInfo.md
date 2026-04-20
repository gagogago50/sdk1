> **Namespace:** `RApi`

# RApi::AccountUpdateInfo

Public Member Functions | Public Attributes | List of all members  RApi::AccountUpdateInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AccountUpdateInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AccountUpdateInfo () |
|  |

| Public Attributes |
| --- |
| AccountInfo | oAccount |
|  |
| tsNCharcb | sAction |
|  |
| tsNCharcb | sUser |
|  |

## Detailed Description

An instance of this class represents a change to an account.

The AccountUpdateInfo class conveys that some update has happened to the account specified by AccountUpdateInfo::oAccount. The nature of the update is indicated by what action (AccountUpdateInfo::sAction) has occurred.
**See also**
  RCallbacks::AccountUpdate()
## Constructor & Destructor Documentation

## AccountUpdateInfo()

| AccountUpdateInfo::AccountUpdateInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~AccountUpdateInfo()

| AccountUpdateInfo::~AccountUpdateInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AccountUpdateInfo::~AccountUpdateInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int AccountUpdateInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the AccountUpdateInfo object to stdout. If a tsNCharcb has an iDataLen value of zero or a pData of NULL, then the string "<empty>" will be printed.
## Member Data Documentation

## oAccount

| AccountUpdateInfo::oAccount |
| --- |

Account on which the action occurred.
## sAction

| AccountUpdateInfo::sAction |
| --- |

Action representing the nature of the change. See below for the list of possible actions. Notification of adding and modifying accounts is only supported when the currently logged in user is an FCM or IB administrator.
**See also**
  RApi::sADD_ACCOUNT     RApi::sMODIFY_ACCOUNT     RApi::sASSIGN_ACCOUNT_TO_USER     RApi::sREMOVE_ACCOUNT_FROM_USER
## sUser

| AccountUpdateInfo::sUser |
| --- |

User to which this update pertains, if specified/applicable. Normally this will be when accounts are assigned to or removed from a user.
**See also**
  RApi::sASSIGN_ACCOUNT_TO_USER     RApi::sREMOVE_ACCOUNT_FROM_USER
