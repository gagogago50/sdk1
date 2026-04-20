> **Namespace:** `RApi`

# RApi::AccountInfo

Public Member Functions | Public Attributes | List of all members  RApi::AccountInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AccountInfo () |
|  |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~AccountInfo () |
|  |

| Public Attributes |
| --- |
| int | iCreationSsboe |
|  |
| int | iCreationUsecs |
|  |
| AutoLiquidateInfo * | pAutoLiquidateInfo |
|  |
| RmsInfo * | pRmsInfo |
|  |
| tsNCharcb | sAccountId |
|  |
| tsNCharcb | sAccountName |
|  |
| tsNCharcb | sFcmId |
|  |
| tsNCharcb | sIbId |
|  |

## Detailed Description

This class represents an account.

The AccountInfo class is used to pass account information to/from RApi. The strings in the class represent a unique account on which a logged in user can trade.
## Constructor & Destructor Documentation

## AccountInfo()

| AccountInfo::AccountInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Pointers to arrays are initialized to NULL, and their lengths are set to zero.
## ~AccountInfo()

| AccountInfo::~AccountInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AccountInfo::~AccountInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

The destructor does not deallocate any memory pointed to by member tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int AccountInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. (Internally used by the constructor.)
## dump()
     **
| int AccountInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the value of each public member to stdout. If a tsNCharcb has an iDataLen value of zero and pData of NULL, the string "<empty>" will be printed.
## Member Data Documentation

## iCreationSsboe

| RApi::AccountInfo::iCreationSsboe |
| --- |

Creation time of this account, expressed in whole seconds since the beginning of the epoch (unix time).
## iCreationUsecs

| RApi::AccountInfo::iCreationUsecs |
| --- |

Microsecond portion of the creation time of this account.
## pAutoLiquidateInfo

| RApi::AccountInfo::pAutoLiquidateInfo |
| --- |

```
 Auto-Liquidate current values associated with this Account.  This
 value will only be non-null in RCallbacks::AccountList().  For other
 callbacks, such as order or pnl related callbacks, this value will
 be null.  When specifying an AccountInfo instance to the REngine as a
 parameter, this value does not need to be set.

```

## pRmsInfo

| RApi::AccountInfo::pRmsInfo |
| --- |

Risk management settings associated with this Account. This pointer will only be non-null in RCallbacks::AccountList(). Typically, for order-related callbacks, this pointer will be null. When specifying an AccountInfo instance to the REngine as a parameter, this value does not need to be set.
## sAccountId

| RApi::AccountInfo::sAccountId |
| --- |

The account id.
## sAccountName

| RApi::AccountInfo::sAccountName |
| --- |

The account name. This value may be empty unless the AccountInfo instance is from RCallbacks::AccountList(). When specifying an AccountInfo to the REngine for order or pnl related methods, this property can be empty.
## sFcmId

| RApi::AccountInfo::sFcmId |
| --- |

The FCM (futures commission merchant) associated with this account.
## sIbId

| RApi::AccountInfo::sIbId |
| --- |

The IB (introducing broker) associated with this account.
