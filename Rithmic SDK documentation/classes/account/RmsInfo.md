> **Namespace:** `RApi`

# RApi::RmsInfo

Public Member Functions | Public Attributes | List of all members  RApi::RmsInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | RmsInfo () |
|  |
| virtual | ~RmsInfo () |
|  |

| Public Attributes |
| --- |
| bool | bAutoLiquidateAtSsm |
|  |
| bool | bAutoLiquidateMaxMinAccountBalance |
|  |
| bool | bAutoLiquidateThreshold |
|  |
| bool | bCheckMinAccountBalance |
|  |
| bool | bDefaultCommission |
|  |
| bool | bMinMarginBalance |
|  |
| double | dAutoLiquidateMaxMinAccountBalance |
|  |
| double | dAutoLiquidateThreshold |
|  |
| double | dDefaultCommission |
|  |
| double | dLossLimit |
|  |
| double | dMinAccountBalance |
|  |
| double | dMinMarginBalance |
|  |
| int | iAutoLiquidateAtSsm |
|  |
| long long | llBuyLimit |
|  |
| long long | llMaxOrderQty |
|  |
| long long | llSellLimit |
|  |
| tsNCharcb | sAlgorithm |
|  |
| tsNCharcb | sAutoLiquidate |
|  |
| tsNCharcb | sAutoLiquidateCriteria |
|  |
| tsNCharcb | sAutoLiquidateIgnoreOpenPnlWhenTrailing |
|  |
| tsNCharcb | sCurrency |
|  |
| tsNCharcb | sDisableOnAutoLiquidate |
|  |
| tsNCharcb | sStatus |
|  |

## Detailed Description

This class represents the risk management settings for an account.

The RmsInfo class is used to convey risk parameters for an account to a user of the RApi.

The account balance (see PnlInfo::dAccountBalance) is calculated by summing the open PnL and closed PnL (see PnlInfo::dOpenPnl and PnlInfo::dClosedPnl), subtracting the total commission, and adding the cash on hand.

The total commission is calculated by multiplying the commission fill rate by the quantity filled for all orders.
## Constructor & Destructor Documentation

## RmsInfo()

| RmsInfo::RmsInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Pointers to arrays are initialized to NULL, and their lengths are set to zero.
## ~RmsInfo()

| RmsInfo::~RmsInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| RmsInfo::~RmsInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

The destructor does not deallocate any memory pointed to by member tsNCharcbs.
## Member Function Documentation

## clearHandles()
    **
| int RmsInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL. (Internally used by the constructor.)
## dump()
     **
| int RmsInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the value of each public member to stdout. If a tsNCharcb has an iDataLen value of zero and pData of NULL, the string "<empty>" will be printed.
## Member Data Documentation

## bAutoLiquidateAtSsm

| RmsInfo::bAutoLiquidateAtSsm |
| --- |

Indicates whether the value of RmsInfo::iAutoLiquidateAtSsm is valid.
## bAutoLiquidateMaxMinAccountBalance

| RmsInfo::bAutoLiquidateMaxMinAccountBalance |
| --- |

Indicates whether the value of RmsInfo::dAutoLiquidateMaxMinAccountBalance is valid.
## bAutoLiquidateThreshold

| RmsInfo::bAutoLiquidateThreshold |
| --- |

Indicates whether the value of RmsInfo::dAutoLiquidateThreshold is valid.
## bCheckMinAccountBalance

| RmsInfo::bCheckMinAccountBalance |
| --- |

This member variable indicates whether the minimum account balance is checked by the infrastructure before orders can be sent.
## bDefaultCommission

| RmsInfo::bDefaultCommission |
| --- |

Indicates whether the value of RmsInfo::dDefaultCommission has been specified and is valid.
## bMinMarginBalance

| RmsInfo::bMinMarginBalance |
| --- |

Indicates whether the value of RmsInfo::dMinMarginBalance is valid.
## dAutoLiquidateMaxMinAccountBalance

| RmsInfo::dAutoLiquidateMaxMinAccountBalance |
| --- |

If applicable, the maximum of the auto-liquidate minimum account balance.
## dAutoLiquidateThreshold

| RmsInfo::dAutoLiquidateThreshold |
| --- |

If applicable, indicates the auto-liquidate threshold. The meaning of this value may depend on the auto-liquidate criteria.
**See also**
  RmsInfo::sAutoLiquidateCriteria
## dDefaultCommission

| RmsInfo::dDefaultCommission |
| --- |

If specified, the default commission associated with the account for any fills.
## dLossLimit

| RmsInfo::dLossLimit |
| --- |

This member variable indicates the maximum allowable loss before the risk manager service prevents orders from being sent.
## dMinAccountBalance

| RmsInfo::dMinAccountBalance |
| --- |

This member variable indicates the minimum account balance before the risk manager service prevents orders from being sent.
## dMinMarginBalance

| RmsInfo::dMinMarginBalance |
| --- |

Indicates the minimum margin balance before the risk manager service prevents orders from being sent.
## iAutoLiquidateAtSsm

| RmsInfo::iAutoLiquidateAtSsm |
| --- |

If applicable, indicates the seconds-since-midnight (ssm, GMT) at which auto-liquidation is configured.
## llBuyLimit

| RmsInfo::llBuyLimit |
| --- |

This member variable indicates the maximum quantity the risk manager service will allow for buy orders.
## llMaxOrderQty

| RmsInfo::llMaxOrderQty |
| --- |

Maximum quantity the risk manager service will allow for any orders.
## llSellLimit

| RmsInfo::llSellLimit |
| --- |

This member variable indicates the maximum quantity the risk manager service will allow for sell orders.
## sAlgorithm

| RmsInfo::sAlgorithm |
| --- |

This member variable identifies the risk management algorithm used for this account.
## sAutoLiquidate

| RmsInfo::sAutoLiquidate |
| --- |

Indicates whether auto-liquidate functionality applies to this account. Possible values include an empty string, "enabled", or "disabled".
## sAutoLiquidateCriteria

| RmsInfo::sAutoLiquidateCriteria |
| --- |

Indicates the auto-liquidate criteria, or algorithm, used to determine when to auto-liquidate.
## sAutoLiquidateIgnoreOpenPnlWhenTrailing

| RmsInfo::sAutoLiquidateIgnoreOpenPnlWhenTrailing |
| --- |

Indicates whether the trailing auto-liqudate criteria will ignore open pnl when adjusting the auto-liquidate threshold. If the value is empty, the default value is disabled, and the open pnl will always be evaluted for trailing auto-liquidate thresholds.
## sCurrency

| RmsInfo::sCurrency |
| --- |

This member variable identifies the currency associated with this account.
## sDisableOnAutoLiquidate

| RmsInfo::sDisableOnAutoLiquidate |
| --- |

Indicates whether the account wil be disabled upon auto-liquidation. Values can include the empty string, "enabled", or "disabled".
## sStatus

| RmsInfo::sStatus |
| --- |

This member variable indicates the status of the Account.
 Typically the values will be either "active" or "inactive".
