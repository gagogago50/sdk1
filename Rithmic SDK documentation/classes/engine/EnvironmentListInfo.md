> **Namespace:** `RApi`

# RApi::EnvironmentListInfo

Public Member Functions | Public Attributes | List of all members  RApi::EnvironmentListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | EnvironmentListInfo () |
|  |
| virtual | ~EnvironmentListInfo () |
|  |

| Public Attributes |
| --- |
| tsNCharcb * | asKeyArray |
|  |
| int | iArrayLen |
|  |
| void * | pContext |
|  |

## Detailed Description

List of environment keys.

An EnvironmentListInfo object is used to pass an array of environment keys.
**See also**
  REngine::listEnvironments()     AdmCallbacks::EnvironmentList()
## Constructor & Destructor Documentation

## EnvironmentListInfo()

| EnvironmentListInfo::EnvironmentListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~EnvironmentListInfo()

| EnvironmentListInfo::~EnvironmentListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| EnvironmentListInfo::~EnvironmentListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int EnvironmentListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the EnvironmentListInfo object to stdout. If a tsNCharcb is not set, then the string "<empty>" will be printed.
## Member Data Documentation

## asKeyArray

| EnvironmentListInfo::asKeyArray |
| --- |

Array of tsNCharcb strings, where each string is a key uniquely identifying an environment. The array length is specified by EnvironmentListInfo::iArrayLen.
## iArrayLen

| EnvironmentListInfo::iArrayLen |
| --- |

Array length of EnvironmentListInfo::asKeyArray.
## pContext

| EnvironmentListInfo::pContext |
| --- |

Returned context pointer from REngine::listEnvironments().
