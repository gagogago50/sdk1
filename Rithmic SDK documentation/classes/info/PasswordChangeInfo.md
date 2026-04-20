> **Namespace:** `RApi`

# RApi::PasswordChangeInfo

Public Member Functions | Public Attributes | List of all members  RApi::PasswordChangeInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | PasswordChangeInfo () |
|  |
| virtual | ~PasswordChangeInfo () |
|  |

| Public Attributes |
| --- |
| int | iRpCode |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class represents the outcome of an attempt to change a password.
## Constructor & Destructor Documentation

## PasswordChangeInfo()

| PasswordChangeInfo::PasswordChangeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~PasswordChangeInfo()

| PasswordChangeInfo::~PasswordChangeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| PasswordChangeInfo::~PasswordChangeInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int PasswordChangeInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints instance information to stdout. If a tsNCharcb has an iDataLen value of MNM_EMPTY_DATA_ITEM_LEN, then the string "<empty>" will be printed.
## Member Data Documentation

## iRpCode

| int PasswordChangeInfo::iRpCode |
| --- |

Response code resulting from a call to REngine::changePassword().
## sRpCode

| tsNCharcb PasswordChangeInfo::sRpCode |
| --- |

String equivalent of PasswordChangeInfo::iRpCode.
