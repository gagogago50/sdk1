> **Namespace:** `RApi`

# RApi::StrategyListInfo

Public Member Functions | Public Attributes | List of all members  RApi::StrategyListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| virtual int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | StrategyListInfo () |
|  |
| virtual | ~StrategyListInfo () |
|  |

| Public Attributes |
| --- |
| int | iExchangeArrayLen |
|  |
| int | iExpirationCCYYMMArrayLen |
|  |
| int | iProductCodeArrayLen |
|  |
| int | iRpCode |
|  |
| int | iStrategyTypeArrayLen |
|  |
| int | iTickerArrayLen |
|  |
| void * | pContext |
|  |
| tsNCharcb * | pExchangeArray |
|  |
| tsNCharcb * | pExpirationCCYYMMArray |
|  |
| tsNCharcb * | pProductCodeArray |
|  |
| tsNCharcb * | pStrategyTypeArray |
|  |
| tsNCharcb * | pTickerArray |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class is the response to a call to REngine::getStrategyList().

An StrategyListInfo object is used to pass :
- a list of exchanges,
- a list of product codes within an exchange,
- a list of strategy types within a product code (within an exchange),
- a list of expiration dates within a strategy type (within a product code/exchange), or
- a list of tickers representing strategies within an expiration date

What is returned depends upon what was initially passed into REngine::getStrategyList().
## Constructor & Destructor Documentation

## StrategyListInfo()

| StrategyListInfo::StrategyListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~StrategyListInfo()

| StrategyListInfo::~StrategyListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| StrategyListInfo::~StrategyListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int StrategyListInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int StrategyListInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## dump()
    **
| int StrategyListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## iExchangeArrayLen

| StrategyListInfo::iExchangeArrayLen |
| --- |

The length of StrategyListInfo::pExchangeArray.
## iExpirationCCYYMMArrayLen

| StrategyListInfo::iExpirationCCYYMMArrayLen |
| --- |

The length of StrategyListInfo::pExpirationCCYYMMArray.
## iProductCodeArrayLen

| StrategyListInfo::iProductCodeArrayLen |
| --- |

The length of StrategyListInfo::pProductCodeArray.
## iRpCode

| StrategyListInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::getStrategyList(). A non-zero response code can be interpreted as an error.
## iStrategyTypeArrayLen

| StrategyListInfo::iStrategyTypeArrayLen |
| --- |

The length of StrategyListInfo::pStrategyTypeArray.
## iTickerArrayLen

| StrategyListInfo::iTickerArrayLen |
| --- |

This variable specifies the ticker array length.
## pContext

| StrategyListInfo::pContext |
| --- |

The context initially sent with REngine::getStrategyList().
## pExchangeArray

| StrategyListInfo::pExchangeArray |
| --- |

This is an array of tsNCharcbs indicating a list of exchanges or a single exchange for which the array of product codes (StrategyListInfo::pProductCodeArray) applies. The array length is specified by StrategyListInfo::iExchangeArrayLen.
## pExpirationCCYYMMArray

| StrategyListInfo::pExpirationCCYYMMArray |
| --- |

This is an array of tsNCharcbs indicating a list of expirations or a single expiration for which the array of instruments conveyed in StrategyListInfo::asRefDataInfoArray applies. The array length is specified by StrategyListInfo::iExpirationCCYYMMArrayLen.
## pProductCodeArray

| StrategyListInfo::pProductCodeArray |
| --- |

This is an array of tsNCharcbs indicating a list of product codes or a single product code for which the array of strategy types (StrategyListInfo::pStrategyTypeArray) applies. The array length is specified by StrategyListInfo::iProductCodeArrayLen.
## pStrategyTypeArray

| StrategyListInfo::pStrategyTypeArray |
| --- |

This is an array of tsNCharcbs indicating a list of strategy types or a single strategy type for which the array of expirations (StrategyListInfo::pExpirationCCYYMMArray) applies. The array length is specified by StrategyListInfo::iStrategyTypeArrayLen.
## pTickerArray

| StrategyListInfo::pTickerArray |
| --- |

This is an array of tickers. The array length is specified by StrategyListInfo::iTickerArrayLen.
## sRpCode

| StrategyListInfo::sRpCode |
| --- |

The is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
