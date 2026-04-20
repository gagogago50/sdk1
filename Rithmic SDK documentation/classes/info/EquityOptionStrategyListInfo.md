> **Namespace:** `RApi`

# RApi::EquityOptionStrategyListInfo

Public Member Functions | Public Attributes | List of all members  RApi::EquityOptionStrategyListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| virtual int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | EquityOptionStrategyListInfo () |
|  |
| virtual | ~EquityOptionStrategyListInfo () |
|  |

| Public Attributes |
| --- |
| int | iExchangeArrayLen |
|  |
| int | iExpirationArrayLen |
|  |
| int | iRpCode |
|  |
| int | iStrategyTypeArrayLen |
|  |
| int | iTickerArrayLen |
|  |
| int | iUnderlyingArrayLen |
|  |
| void * | pContext |
|  |
| tsNCharcb * | pExchangeArray |
|  |
| tsNCharcb * | pExpirationArray |
|  |
| tsNCharcb * | pStrategyTypeArray |
|  |
| tsNCharcb * | pTickerArray |
|  |
| tsNCharcb * | pUnderlyingArray |
|  |

## Detailed Description

An instance of this class is the response to a call to REngine::getEquityOptionStrategyList().

An EquityOptionStrategyListInfo object is used to pass :
- a list of exchanges,
- a list of underlying instruments within an exchange,
- a list of strategy types within an underlying (within an exchange),
- a list of expiration dates within a strategy type (within an underlying/exchange), or
- a list of tickers representing strategies within an expiration date

What is returned depends upon what was initially passed into REngine::getEquityOptionStrategyList().
## Constructor & Destructor Documentation

## EquityOptionStrategyListInfo()

| EquityOptionStrategyListInfo::EquityOptionStrategyListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~EquityOptionStrategyListInfo()

| EquityOptionStrategyListInfo::~EquityOptionStrategyListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| EquityOptionStrategyListInfo::~EquityOptionStrategyListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int EquityOptionStrategyListInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int EquityOptionStrategyListInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## dump()
    **
| int EquityOptionStrategyListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## iExchangeArrayLen

| EquityOptionStrategyListInfo::iExchangeArrayLen |
| --- |

The length of EquityOptionStrategyListInfo::pExchangeArray.
## iExpirationArrayLen

| EquityOptionStrategyListInfo::iExpirationArrayLen |
| --- |

The length of EquityOptionStrategyListInfo::pExpirationArray.
## iRpCode

| EquityOptionStrategyListInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::getEquityOptionStrategyList(). A non-zero response code can be interpreted as an error.
## iStrategyTypeArrayLen

| EquityOptionStrategyListInfo::iStrategyTypeArrayLen |
| --- |

The length of EquityOptionStrategyListInfo::pStrategyTypeArray.
## iTickerArrayLen

| EquityOptionStrategyListInfo::iTickerArrayLen |
| --- |

This variable specifies the ticker array length.
## iUnderlyingArrayLen

| EquityOptionStrategyListInfo::iUnderlyingArrayLen |
| --- |

The length of EquityOptionStrategyListInfo::pUnderlyingArray.
## pContext

| EquityOptionStrategyListInfo::pContext |
| --- |

The context initially sent with REngine::getEquityOptionStrategyList().
## pExchangeArray

| EquityOptionStrategyListInfo::pExchangeArray |
| --- |

This is an array of tsNCharcbs indicating a list of exchanges or a single exchange for which the array of underlyings (EquityOptionStrategyListInfo::pUnderlyingArray) applies. The array length is specified by EquityOptionStrategyListInfo::iExchangeArrayLen.
## pExpirationArray

| EquityOptionStrategyListInfo::pExpirationArray |
| --- |

This is an array of tsNCharcbs indicating a list of expirations or a single expiration for which the array of instruments conveyed in EquityOptionStrategyListInfo::asRefDataInfoArray applies. The array length is specified by EquityOptionStrategyListInfo::iExpirationArrayLen.
## pStrategyTypeArray

| EquityOptionStrategyListInfo::pStrategyTypeArray |
| --- |

This is an array of tsNCharcbs indicating a list of strategy types or a single strategy type for which the array of expirations (EquityOptionStrategyListInfo::pExpirationArray) applies. The array length is specified by EquityOptionStrategyListInfo::iStrategyTypeArrayLen.
## pTickerArray

| EquityOptionStrategyListInfo::pTickerArray |
| --- |

This is an array of tickers. The array length is specified by EquityOptionStrategyListInfo::iTickerArrayLen.
## pUnderlyingArray

| EquityOptionStrategyListInfo::pUnderlyingArray |
| --- |

This is an array of tsNCharcbs indicating a list of underlying instruments or a single underlying instrument for which the array of strategy types (EquityOptionStrategyListInfo::pStrategyTypeArray) applies. The array length is specified by EquityOptionStrategyListInfo::iUnderlyingArrayLen.
