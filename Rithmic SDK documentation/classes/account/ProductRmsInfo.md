> **Namespace:** `RApi`

# RApi::ProductRmsInfo

Public Member Functions | Public Attributes | List of all members  RApi::ProductRmsInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | ProductRmsInfo () |
|  |
| virtual | ~ProductRmsInfo () |
|  |

| Public Attributes |
| --- |
| bool | bBuyLimit |
|  |
| bool | bBuyLongMarginRate |
|  |
| bool | bCommissionFillRate |
|  |
| bool | bLossLimit |
|  |
| bool | bMaxOrderQty |
|  |
| bool | bSellLimit |
|  |
| bool | bSellShortMarginRate |
|  |
| double | dBuyLongMarginRate |
|  |
| double | dCommissionFillRate |
|  |
| double | dLossLimit |
|  |
| double | dSellShortMarginRate |
|  |
| long long | llBuyLimit |
|  |
| long long | llMaxOrderQty |
|  |
| long long | llSellLimit |
|  |
| AccountInfo | oAccount |
|  |
| tsNCharcb | sProductCode |
|  |

## Detailed Description

An instance of this class represents the product level risk management settings.
## Constructor & Destructor Documentation

## ProductRmsInfo()

| ProductRmsInfo::ProductRmsInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~ProductRmsInfo()

| ProductRmsInfo::~ProductRmsInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| ProductRmsInfo::~ProductRmsInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## clearHandles()
    **
| int ProductRmsInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. The lSize member variable is initialized to zero.
## dump()
     **
| int ProductRmsInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the pnl information to stdout. If a tsNCharcb has an iDataLen value of MNM_EMPTY_DATA_ITEM_LEN, then the string "<empty>" will be printed.
## Member Data Documentation

## bBuyLimit

| ProductRmsInfo::bBuyLimit |
| --- |

This flag indicates whether ProductRmsInfo::llBuyLimit has a value.
## bBuyLongMarginRate

| ProductRmsInfo::bBuyLongMarginRate |
| --- |

This flag indicates if ProductRmsInfo::dBuyLongMarginRate has a value.
## bCommissionFillRate

| ProductRmsInfo::bCommissionFillRate |
| --- |

This flag indicates whether ProductRmsInfo::dCommissionFillRate has a value.
## bLossLimit

| ProductRmsInfo::bLossLimit |
| --- |

This flag indicates whether ProductRmsInfo::dLossLimit has a value.
## bMaxOrderQty

| ProductRmsInfo::bMaxOrderQty |
| --- |

This flag indicates whether ProductRmsInfo::llMaxOrderQty has a value.
## bSellLimit

| ProductRmsInfo::bSellLimit |
| --- |

This flag indicates whether ProductRmsInfo::llSellLimit has a value.
## bSellShortMarginRate

| ProductRmsInfo::bSellShortMarginRate |
| --- |

This flag indicates if ProductRmsInfo::dSellShortMarginRate has a value.
## dBuyLongMarginRate

| ProductRmsInfo::dBuyLongMarginRate |
| --- |

This member variable represents the margin rate for long positions.
## dCommissionFillRate

| ProductRmsInfo::dCommissionFillRate |
| --- |

This member variable represents the commission fill rate.
## dLossLimit

| ProductRmsInfo::dLossLimit |
| --- |

This member variable represents the loss limit.
## dSellShortMarginRate

| ProductRmsInfo::dSellShortMarginRate |
| --- |

This member variable represents the margin rate for short positions.
## llBuyLimit

| ProductRmsInfo::llBuyLimit |
| --- |

This member variable indicates the buy quantity limit.
## llMaxOrderQty

| ProductRmsInfo::llMaxOrderQty |
| --- |

This member variable represents the maximum order quantity.
## llSellLimit

| ProductRmsInfo::llSellLimit |
| --- |

This member variable indicates the sell quantity limit.
## oAccount

| ProductRmsInfo::oAccount |
| --- |

This member variable respresents the account for which the risk settings apply.
## sProductCode

| ProductRmsInfo::sProductCode |
| --- |

This member variable is the product for which the risk settings apply.
