> **Namespace:** `RApi`

# RApi::OptionListInfo

Public Member Functions | Public Attributes | List of all members  RApi::OptionListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| virtual int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | OptionListInfo () |
|  |
| virtual | ~OptionListInfo () |
|  |

| Public Attributes |
| --- |
| RefDataInfo * | asRefDataInfoArray |
|  |
| int | iArrayLen |
|  |
| int | iExchangeArrayLen |
|  |
| int | iExpirationCCYYMMArrayLen |
|  |
| int | iProductCodeArrayLen |
|  |
| int | iRpCode |
|  |
| void * | pContext |
|  |
| tsNCharcb * | pExchangeArray |
|  |
| tsNCharcb * | pExpirationCCYYMMArray |
|  |
| tsNCharcb * | pProductCodeArray |
|  |
| tsNCharcb | sRpCode |
|  |

## Detailed Description

An instance of this class is the response to a call to REngine::getOptionList().

An OptionListInfo object is used to pass :
- a list of exchanges,
- a list of product codes within an exchange,
- a list of expiration dates within a product code (within an exchange), or
- a list of RefDataInfo objects representing options within an expiration date

What is returned depends upon what was initially passed into REngine::getOptionList().
## Constructor & Destructor Documentation

## OptionListInfo()

| OptionListInfo::OptionListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~OptionListInfo()

| OptionListInfo::~OptionListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| OptionListInfo::~OptionListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int OptionListInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int OptionListInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## dump()
    **
| int OptionListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## asRefDataInfoArray

| OptionListInfo::asRefDataInfoArray |
| --- |

This is an array of RefDataInfo objects. The array length is specified by OptionListInfo::iArrayLen.
## iArrayLen

| OptionListInfo::iArrayLen |
| --- |

This variable specifies the array length.
## iExchangeArrayLen

| OptionListInfo::iExchangeArrayLen |
| --- |

The length of OptionListInfo::pExchangeArray.
## iExpirationCCYYMMArrayLen

| OptionListInfo::iExpirationCCYYMMArrayLen |
| --- |

The length of OptionListInfo::pExpirationCCYYMMArray.
## iProductCodeArrayLen

| OptionListInfo::iProductCodeArrayLen |
| --- |

The length of OptionListInfo::pProductCodeArray.
## iRpCode

| OptionListInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::getOptionList(). A non-zero response code can be interpreted as an error.
## pContext

| OptionListInfo::pContext |
| --- |

The context initially sent with REngine::getOptionList().
## pExchangeArray

| OptionListInfo::pExchangeArray |
| --- |

This is an array of tsNCharcbs indicating a list of exchanges or a single exchange for which the array of product codes (OptionListInfo::pProductCodeArray) applies. The array length is specified by OptionListInfo::iExchangeArrayLen.
## pExpirationCCYYMMArray

| OptionListInfo::pExpirationCCYYMMArray |
| --- |

This is an array of tsNCharcbs indicating a list of expirations or a single expiration for which the array of options conveyed in OptionListInfo::asRefDataInfoArray applies. The array length is specified by OptionListInfo::iExpirationCCYYMMArrayLen.
## pProductCodeArray

| OptionListInfo::pProductCodeArray |
| --- |

This is an array of tsNCharcbs indicating a list of product codes or a single product code for which the array of expirations (OptionListInfo::pExpirationCCYYMMArray) applies. The array length is specified by OptionListInfo::iProductCodeArrayLen.
## sRpCode

| OptionListInfo::sRpCode |
| --- |

The is a string equivalent of the response code. It may not be populated if the value of iRpCode is zero (API_OK).
