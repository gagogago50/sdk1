> **Namespace:** `RApi`

# RApi::UserDefinedSpreadCreateInfo

Public Member Functions | Public Attributes | List of all members  RApi::UserDefinedSpreadCreateInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | UserDefinedSpreadCreateInfo () |
|  |
| virtual | ~UserDefinedSpreadCreateInfo () |
|  |

| Public Attributes |
| --- |
| int | iRpCode |
|  |
| void * | pContext |
|  |
| tsNCharcb | sText |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

An instance of this class returns the result returned by the infrastructure of a call to REngine::createUserDefinedSpread().

A non-zero value of the response code iRpCode indicates some error condition.
**See also**
  REngine::createUserDefinedSpread()     RCallbacks::UserDefinedSpreadCreate()
## Constructor & Destructor Documentation

## UserDefinedSpreadCreateInfo()

| UserDefinedSpreadCreateInfo::UserDefinedSpreadCreateInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~UserDefinedSpreadCreateInfo()

| UserDefinedSpreadCreateInfo::~UserDefinedSpreadCreateInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| UserDefinedSpreadCreateInfo::~UserDefinedSpreadCreateInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int UserDefinedSpreadCreateInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the UserDefinedSpreadCreateInfo object to stdout. If a tsNCharcb is empty, then the string "<empty>" will be printed.
## Member Data Documentation

## iRpCode

| UserDefinedSpreadCreateInfo::iRpCode |
| --- |

The response code returned by the infrastructure. A non-zero response code can be interpreted as an error.
## pContext

| UserDefinedSpreadCreateInfo::pContext |
| --- |

The context initially sent with REngine::createUserDefinedSpread().
## sText

| UserDefinedSpreadCreateInfo::sText |
| --- |

Text returned from the infrastructure, usually an error message.
## sTicker

| UserDefinedSpreadCreateInfo::sTicker |
| --- |

Ticker symbol of the newly created instrument, or of the identical instrument that already exists.
