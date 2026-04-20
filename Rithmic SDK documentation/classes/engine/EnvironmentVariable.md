> **Namespace:** `RApi`

# RApi::EnvironmentVariable

Public Member Functions | Public Attributes | List of all members  RApi::EnvironmentVariable Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | EnvironmentVariable () |
|  |
| virtual | ~EnvironmentVariable () |
|  |

| Public Attributes |
| --- |
| tsNCharcb | sName |
|  |
| tsNCharcb | sValue |
|  |

## Detailed Description

Environment variable's name-value pair.

An EnvironmentVariable object is a name-value pair of an environment.
**See also**
  REngine::getEnvironment()     AdmCallbacks::Environment()     EnvironmentInfo
## Constructor & Destructor Documentation

## EnvironmentVariable()

| EnvironmentVariable::EnvironmentVariable | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~EnvironmentVariable()

| EnvironmentVariable::~EnvironmentVariable | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| EnvironmentVariable::~EnvironmentVariable | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Data Documentation

## sName

| EnvironmentVariable::sName |
| --- |

Name of the environment variable.
## sValue

| EnvironmentVariable::sValue |
| --- |

Value of the environment variable.
