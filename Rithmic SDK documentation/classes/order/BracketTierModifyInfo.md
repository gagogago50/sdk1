> **Namespace:** `RApi`

# RApi::BracketTierModifyInfo

Public Member Functions | Public Attributes | List of all members  RApi::BracketTierModifyInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | BracketTierModifyInfo () |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~BracketTierModifyInfo () |
|  |

| Public Attributes |
| --- |
| bool | bTarget |
|  |
| int | iNewTickOffset |
|  |
| int | iOldTickOffset |
|  |
| int | iRpCode |
|  |
| AccountInfo | oAccount |
|  |
| void * | pContext |
|  |
| tsNCharcb | sOrderNum |
|  |

## Detailed Description

This class conveys the results of a call to REngine::modifyBracketTier(). Except for iRpCode, this class just returns the parameters passed in to REngine::modifyBracketTier()
**See also**
  REngine::modifyBracketTier     RCallbacks::BracketTierModify
## Constructor & Destructor Documentation

## BracketTierModifyInfo()

| BracketTierModifyInfo::BracketTierModifyInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~BracketTierModifyInfo()

| BracketTierModifyInfo::~BracketTierModifyInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| BracketTierModifyInfo::~BracketTierModifyInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int BracketTierModifyInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout. The precision of the output may not reflect the actual precision of the value. For example, doubles may only be printed to six decimal places, even if the value of the double has a greater significant precision.
## Member Data Documentation

## bTarget

| BracketTierModifyInfo::bTarget |
| --- |

A value of true indicates this update is for a target exit tier.
## iNewTickOffset

| BracketTierModifyInfo::iNewTickOffset |
| --- |

New tick offset of the exit tier
## iOldTickOffset

| BracketTierModifyInfo::iOldTickOffset |
| --- |

Old tick offset of the exit tier
## iRpCode

| BracketTierModifyInfo::iRpCode |
| --- |

Response code associated with the call to REngine::modifyBracketTier()
## oAccount

| BracketTierModifyInfo::oAccount |
| --- |

Account passed in to REngine::modifyBracketTier(), and should be the Account under which this bracket order was placed.
## pContext

| BracketTierModifyInfo::pContext |
| --- |

Context pointer to correlate this instance to it's corresonding call to REngine::modifyBracketTier().
## sOrderNum

| BracketTierModifyInfo::sOrderNum |
| --- |

Order number of the bracket (entry) order
