> **Namespace:** `RApi`

# RApi::BinaryContractListInfo

Public Member Functions | Public Attributes | List of all members  RApi::BinaryContractListInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | BinaryContractListInfo () |
|  |
| virtual int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
| virtual | ~BinaryContractListInfo () |
|  |

| Public Attributes |
| --- |
| RefDataInfo * | asRefDataInfoArray |
|  |
| int | iArrayLen |
|  |
| int | iBinaryContractTypeArrayLen |
|  |
| int | iExchangeArrayLen |
|  |
| int | iExpirationTimeArrayLen |
|  |
| int | iPeriodCodeArrayLen |
|  |
| int | iProductCodeArrayLen |
|  |
| int | iRpCode |
|  |
| tsNCharcb * | pBinaryContractTypeArray |
|  |
| void * | pContext |
|  |
| tsNCharcb * | pExchangeArray |
|  |
| tsNCharcb * | pExpirationTimeArray |
|  |
| tsNCharcb * | pPeriodCodeArray |
|  |
| tsNCharcb * | pProductCodeArray |
|  |

## Detailed Description

An instance of this class is the response to a call to REngine::listBinaryContracts().

An BinaryContractListInfo object is used to pass :
- a list of exchanges,
- a list of product codes within an exchange,
- a list of binary contract types within that product code,
- a list of period codes within that binary contract type,
- a list of expiration times within that period code, or
- a list of RefDataInfo objects representing binary contracts with the particular features of exchange, product code, binary contract type, period code and expiration time.

What is returned depends upon what was initially passed into REngine::listBinaryContracts().
**See also**
  REngine::listBinaryContracts()     RCallbacks::BinaryContractList()
## Constructor & Destructor Documentation

## BinaryContractListInfo()

| BinaryContractListInfo::BinaryContractListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~BinaryContractListInfo()

| BinaryContractListInfo::~BinaryContractListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| BinaryContractListInfo::~BinaryContractListInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## clearHandles()
     **
| int BinaryContractListInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

| int BinaryContractListInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## dump()
    **
| int BinaryContractListInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## asRefDataInfoArray

| BinaryContractListInfo::asRefDataInfoArray |
| --- |

This array contains all of the instruments matching the filter criteria of exchange, product code, binary contract type, period code and expiration time passed into REngine::listBinaryContracts().

This array may be empty in the event of an error.

The array length is specified by BinaryContractListInfo::iArrayLen.
## iArrayLen

| BinaryContractListInfo::iArrayLen |
| --- |

This variable specifies the array length.
## iBinaryContractTypeArrayLen

| BinaryContractListInfo::iBinaryContractTypeArrayLen |
| --- |

The length of BinaryContractListInfo::pBinaryContractTypeArray.
## iExchangeArrayLen

| BinaryContractListInfo::iExchangeArrayLen |
| --- |

The length of BinaryContractListInfo::pExchangeArray.
## iExpirationTimeArrayLen

| BinaryContractListInfo::iExpirationTimeArrayLen |
| --- |

The length of BinaryContractListInfo::pExpirationTimeArray.
## iPeriodCodeArrayLen

| BinaryContractListInfo::iPeriodCodeArrayLen |
| --- |

The length of BinaryContractListInfo::pPeriodCodeArray.
## iProductCodeArrayLen

| BinaryContractListInfo::iProductCodeArrayLen |
| --- |

The length of BinaryContractListInfo::pProductCodeArray.
## iRpCode

| BinaryContractListInfo::iRpCode |
| --- |

The response code, if available, associated with the request REngine::listBinaryContracts(). A non-zero response code can be interpreted as an error.
## pBinaryContractTypeArray

| BinaryContractListInfo::pBinaryContractTypeArray |
| --- |

If no binary contract type was specified when calling REngine::listBinaryContracts(), the array will contain all binary contract types within the specified exchange and product which have binary contracts. If a binary contract type was specified when calling REngine::listBinaryContracts(), that binary contract type will be returned here.

This array may be empty in the event of an error.

The array length is specified by BinaryContractListInfo::iBinaryContractTypeArrayLen.
## pContext

| BinaryContractListInfo::pContext |
| --- |

The context initially sent with REngine::listBinaryContracts().
## pExchangeArray

| BinaryContractListInfo::pExchangeArray |
| --- |

If no exchange was specified when calling REngine::listBinaryContracts(), the array will contain all exchanges which have binary contracts. If an exchange was specified when calling REngine::listBinaryContracts(), that exchange will be returned here.

This array may be empty in the event of an error.

The array length is specified by BinaryContractListInfo::iExchangeArrayLen.
## pExpirationTimeArray

| BinaryContractListInfo::pExpirationTimeArray |
| --- |

If no expiration time was specified when calling REngine::listBinaryContracts(), the array will contain all expiration times within the specified exchange, product, binary contract type and period code which have binary contracts. If an expiration time was specified when calling REngine::listBinaryContracts(), that expiration time will be returned here.

This array may be empty in the event of an error.

The array length is specified by BinaryContractListInfo::iExpirationTimeArrayLen.
## pPeriodCodeArray

| BinaryContractListInfo::pPeriodCodeArray |
| --- |

If no period code was specified when calling REngine::listBinaryContracts(), the array will contain all period codes within the specified exchange, product and binary contract type which have binary contracts. If a period code was specified when calling REngine::listBinaryContracts(), that period code will be returned here.

This array may be empty in the event of an error.

The array length is specified by BinaryContractListInfo::iPeriodCodeArrayLen.
## pProductCodeArray

| BinaryContractListInfo::pProductCodeArray |
| --- |

If no product code was specified when calling REngine::listBinaryContracts(), the array will contain all product codes within the specified exchange which have binary contracts. If a product code was specified when calling REngine::listBinaryContracts(), that product code will be returned here.

This array may be empty in the event of an error.

The array length is specified by BinaryContractListInfo::iProductCodeArrayLen.
