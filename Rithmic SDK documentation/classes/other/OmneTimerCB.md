> **Namespace:** `OmneEngineSpace / global`

# OmneEngineSpace::OmneTimerCB

Public Member Functions | List of all members  OmneEngineSpace::OmneTimerCB Class Referenceabstract

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| virtual int | call (tsNCharcb *pTimerName, void *pContext, int *aiCode)=0 |
|  |
| virtual | ~OmneTimerCB () |
|  |

## Detailed Description

Timer routine class used by the RApi.

An OmneTimerCB is a callback routine fired for RApi timer events.
**See also**
  REngine::addTimer     REngine::removeTimer     REngine::startTimer     REngine::stopTimer
## Constructor & Destructor Documentation

## ~OmneTimerCB()

| virtual OmneEngineSpace::OmneTimerCB::~OmneTimerCB | ( |  | ) |  |
| --- | --- | --- | --- | --- |

   inlinevirtual
| virtual OmneEngineSpace::OmneTimerCB::~OmneTimerCB | ( |  | ) |  |
| --- | --- | --- | --- | --- |

## Member Function Documentation

## call()

| int OmneEngineSpace::OmneTimerCB::call | ( | tsNCharcb * | pTimerName, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   pure virtual
| int OmneEngineSpace::OmneTimerCB::call | ( | tsNCharcb * | pTimerName, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

The timer name is the one returned from REngine::addTimer(). The pContext is the one passed to REngine::addTimer(). The return value and aiCode is ignored.
**See also**
  REngine::addTimer
