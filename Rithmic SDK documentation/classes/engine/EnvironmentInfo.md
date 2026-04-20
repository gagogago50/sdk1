> **Namespace:** `RApi`

# RApi::EnvironmentInfo

Public Member Functions | Public Attributes | List of all members  RApi::EnvironmentInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | EnvironmentInfo () |
|  |
| virtual | ~EnvironmentInfo () |
|  |

| Public Attributes |
| --- |
| EnvironmentVariable * | asVariableArray |
|  |
| int | iArrayLen |
|  |
| void * | pContext |
|  |
| tsNCharcb | sKey |
|  |

## Detailed Description

List of environment variables in a given environment.

An EnvironmentInfo object conveys the list of environment variables comprising an environment.
**See also**
  REngine::getEnvironment()     AdmCallbacks::Environment()     EnvironmentVariable
## Constructor & Destructor Documentation

## EnvironmentInfo()

| EnvironmentInfo::EnvironmentInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~EnvironmentInfo()

| EnvironmentInfo::~EnvironmentInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| EnvironmentInfo::~EnvironmentInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## dump()
    **
| int EnvironmentInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the values of the EnvironmentInfo object to stdout. If a tsNCharcb is not set, then the string "<empty>" will be printed.
## Member Data Documentation

## asVariableArray

| EnvironmentInfo::asVariableArray |
| --- |

Array of EnvironmentVariable instances, where each EnvironmentVariable represents a variable's name-value pair in the environment. The array length is specified by EnvironmentInfo::iArrayLen.
## iArrayLen

| EnvironmentInfo::iArrayLen |
| --- |

Array length of EnvironmentInfo::asVariableArray.
## pContext

| EnvironmentInfo::pContext |
| --- |

Returned context pointer from REngine::getEnvironment().
## sKey

| EnvironmentInfo::sKey |
| --- |

Unique string key identifying the environment.
