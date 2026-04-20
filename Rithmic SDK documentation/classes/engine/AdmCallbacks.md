> **Namespace:** `RApi`

# RApi::AdmCallbacks

Public Member Functions | List of all members  RApi::AdmCallbacks Class Referenceabstract

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | AdmCallbacks () |
|  |
| virtual int | Alert (AlertInfo *pInfo, void *pContext, int *aiCode)=0 |
|  |
| virtual int | Environment (EnvironmentInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | EnvironmentList (EnvironmentListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual | ~AdmCallbacks () |
|  |

## Detailed Description

This abstract class contains all the admin-related callbacks for RApi.

A subclass of AdmCallbacks can be defined, instantiated and passed via REngineParams::pCallbacks when logging into the infrastructure. While the REngine instance is alive, the AdmCallbacks instance referenced by REngineParams::pCallbacks must not be destroyed.
## Constructor & Destructor Documentation

## AdmCallbacks()

| AdmCallbacks::AdmCallbacks | ( |  | ) |  |
| --- | --- | --- | --- | --- |

## ~AdmCallbacks()

| AdmCallbacks::~AdmCallbacks | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| AdmCallbacks::~AdmCallbacks | ( |  | ) |  |
| --- | --- | --- | --- | --- |

## Member Function Documentation

## Alert()

| int AdmCallbacks::Alert | ( | AlertInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   pure virtual
| int AdmCallbacks::Alert | ( | AlertInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine detects an alert condition.
**Parameters**

| pInfo | the AlertInfo object that contains information about the alert. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  AlertInfo
## Environment()

| int AdmCallbacks::Environment | ( | EnvironmentInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int AdmCallbacks::Environment | ( | EnvironmentInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the EnvironmentVariables in the Environment returned by a request via REngine::getEnvironment().
**Parameters**

| pInfo | EnvironmentInfo object listing the EnvironmentVariables in this environment |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  EnvironmentInfo     REngine::getEnvironment()
## EnvironmentList()

| int AdmCallbacks::EnvironmentList | ( | EnvironmentListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int AdmCallbacks::EnvironmentList | ( | EnvironmentListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the list of environments returned by a request via REngine::listEnvironments().
**Parameters**

| pInfo | EnvironmentListInfo object listing the environment keys |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  EnvironmentListInfo     REngine::listEnvironments()
