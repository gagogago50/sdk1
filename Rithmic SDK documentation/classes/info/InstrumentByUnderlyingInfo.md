> **Namespace:** `RApi`

# RApi::InstrumentByUnderlyingInfo

Public Member Functions | Public Attributes | List of all members  RApi::InstrumentByUnderlyingInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| virtual int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | InstrumentByUnderlyingInfo () |
|  |
| virtual | ~InstrumentByUnderlyingInfo () |
|  |

| Public Attributes |
| --- |
| RefDataInfo * | asRefDataInfoArray |
|  |
| int | iArrayLen |
|  |
| int | iExchangeArrayLen |
|  |
| int | iExpirationArrayLen |
|  |
| int | iRpCode |
|  |
| int | iUnderlyingArrayLen |
|  |
| void * | pContext |
|  |
| tsNCharcb * | pExchangeArray |
|  |
| tsNCharcb * | pExpirationArray |
|  |
| tsNCharcb * | pUnderlyingArray |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class is the response to a call to REngine::getInstrumentByUnderlying().

An InstrumentByUnderlyingInfo object is used to pass :
- a list of underlyings,
- a list of expiration dates within an underlying, or
- a list of RefDataInfo objects representing options with an expiration date within an underlying

What is returned depends upon what was initially passed into REngine::getInstrumentByUnderlying().
## Constructor & Destructor Documentation

## InstrumentByUnderlyingInfo()

| InstrumentByUnderlyingInfo::InstrumentByUnderlyingInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~InstrumentByUnderlyingInfo()

| InstrumentByUnderlyingInfo::~InstrumentByUnderlyingInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| InstrumentByUnderlyingInfo::~InstrumentByUnderlyingInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int InstrumentByUnderlyingInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int InstrumentByUnderlyingInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## dump()
    **
| int InstrumentByUnderlyingInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## asRefDataInfoArray

| InstrumentByUnderlyingInfo::asRefDataInfoArray |
| --- |

If non-empty values for pUnderlying, pExchange and pExpiration were passed to REngine::getInstrumentByUnderlying(), InstrumentByUnderlyingInfo::asRefDataInfoArray will return a list of RefDataInfo objects for supported instruments having the specified underlying on the specified exchange with the specified expiration.

Otherwise, the array will be empty.
## iArrayLen

| InstrumentByUnderlyingInfo::iArrayLen |
| --- |

This variable specifies the array length.
## iExchangeArrayLen

| InstrumentByUnderlyingInfo::iExchangeArrayLen |
| --- |

The length of InstrumentByUnderlyingInfo::pExchangeArray.
## iExpirationArrayLen

| InstrumentByUnderlyingInfo::iExpirationArrayLen |
| --- |

The length of InstrumentByUnderlyingInfo::pExpirationArray.
## iRpCode

| InstrumentByUnderlyingInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::getInstrumentByUnderlying(). A non-zero response code can be interpreted as an error.
## iUnderlyingArrayLen

| InstrumentByUnderlyingInfo::iUnderlyingArrayLen |
| --- |

The length of InstrumentByUnderlyingInfo::pUnderlyingArray.
## pContext

| InstrumentByUnderlyingInfo::pContext |
| --- |

The context initially sent with REngine::getOptionList().
## pExchangeArray

| InstrumentByUnderlyingInfo::pExchangeArray |
| --- |

If a non-empty value for pUnderlying and empty values for pExchange and pExpiration were passed in REngine::getInstrumentByUnderlying(), InstrumentByUnderlyingInfo::pExchangeArray will return a list of supported exchanges for the underlying specified when calling REngine::getInstrumentByUnderlying().

If non-empty values for pUnderlying and pExchange were passed to REngine::getInstrumentByUnderlying(), InstrumentByUnderlyingInfo::pExchangeArray will return the value passed in initially.

The array length is specified by InstrumentByUnderlyingInfo::iExchangeArrayLen.
## pExpirationArray

| InstrumentByUnderlyingInfo::pExpirationArray |
| --- |

If a non-empty value for pUnderlying and pExchange and an empty value for pExpiration was passed to REngine::getInstrumentByUnderlying(), InstrumentByUnderlyingInfo::pExpirationArray will return a list of supported expirations for the underlying and exchange specified when calling REngine::getInstrumentByUnderlying().

If non-empty values for Underlying, pExchange and pExpiration were passed to REngine::getInstrumentByUnderlying(), InstrumentByUnderlyingInfo::pExpirationArray will return the value passed in initially.

The array length is specified by InstrumentByUnderlyingInfo::iExpirationArrayLen.
## pUnderlyingArray

| InstrumentByUnderlyingInfo::pUnderlyingArray |
| --- |

InstrumentByUnderlyingInfo::pUnderlyingArray is an array of supported underlyings if empty values for pUnderlying, pExchange, pExpiration were passed to REngine::getInstrumentByUnderlying().

If a non-empty value for pUnderlying and empty values for pExchange and pExpiration were passed in REngine::getInstrumentByUnderlying(), only the initial value of pUnderlying will be returned in this array.

The array length is specified by InstrumentByUnderlyingInfo::iUnderlyingArrayLen.
## sRpCode

| InstrumentByUnderlyingInfo::sRpCode |
| --- |

The is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
