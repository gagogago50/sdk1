> **Namespace:** `RApi`

# RApi::EasyToBorrowInfo

Public Member Functions | Public Attributes | List of all members  RApi::EasyToBorrowInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | EasyToBorrowInfo () |
|  |
| virtual | ~EasyToBorrowInfo () |
|  |

| Public Attributes |
| --- |
| bool | bBorrowable |
|  |
| int | iType |
|  |
| long long | llQtyAvailable |
|  |
| long long | llQtyNeeded |
|  |
| void * | pContext |
|  |
| tsNCharcb | sBrokerDealer |
|  |
| tsNCharcb | sDescription |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

Instrument's easy-to-borrow information.

The EasyToBorrowInfo class is used to convey information about shares of an instrument, and if they can be borrowed. Normally this information is used when short selling equities.
**See also**
  REngine::getEasyToBorrowList()     REngine::subscribeEasyToBorrow()     REngine::unsubscribeEasyToBorrow()     RCallbacks::EasyToBorrow()     RCallbacks::EasyToBorrowList()     EasyToBorrowListInfo
## Constructor & Destructor Documentation

## EasyToBorrowInfo()

| EasyToBorrowInfo::EasyToBorrowInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false.
## ~EasyToBorrowInfo()

| EasyToBorrowInfo::~EasyToBorrowInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| EasyToBorrowInfo::~EasyToBorrowInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int EasyToBorrowInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## bBorrowable

| EasyToBorrowInfo::bBorrowable |
| --- |

Indication of whether shares of this instrument can be borrowed or not.
## iType

| EasyToBorrowInfo::iType |
| --- |

Indicates if this easy-to-borrow information is from a cache or the real-time data stream. If one has both subscribed to easy-to-borrow updates (REngine::subscribeEasyToBorrow()) and requested the list (REngine::getEasyToBorrowList()), and one receives an MD_UPDATE_CB before the MD_IMAGE_CB for a given instrument, one should regard the MD_UPDATE_CB as current, and discard the MD_IMAGE_DB.

Possible values for this variable are
**See also**
  MD_IMAGE_CB     MD_UPDATE_CB
## llQtyAvailable

| EasyToBorrowInfo::llQtyAvailable |
| --- |

Quantity which is available.
## llQtyNeeded

| EasyToBorrowInfo::llQtyNeeded |
| --- |

Quantity which is needed.
## pContext

| EasyToBorrowInfo::pContext |
| --- |

Context pointer, if specified when calling REngine::getEasyToBorrowList() or REngine::subscribeEasyToBorrow().
## sBrokerDealer

| EasyToBorrowInfo::sBrokerDealer |
| --- |

Broker/dealer from whom these shares can be borrowed.
## sDescription

| EasyToBorrowInfo::sDescription |
| --- |

Description of the ticker symbol.
## sTicker

| EasyToBorrowInfo::sTicker |
| --- |

Ticker symbol of the instrument.
