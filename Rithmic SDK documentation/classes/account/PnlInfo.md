> **Namespace:** `RApi`

# RApi::PnlInfo

Public Member Functions | Public Attributes | List of all members  RApi::PnlInfo Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | clearHandles (int *aiCode) |
|  |
| int | dump (int *aiCode) |
|  |
|  | PnlInfo () |
|  |
| virtual | ~PnlInfo () |
|  |

| Public Attributes |
| --- |
| bool | bPossOutOfOrder |
|  |
| double | dAccountBalance |
|  |
| double | dAvailableBuyingPower |
|  |
| double | dAvgOpenFillPrice |
|  |
| double | dCashOnHand |
|  |
| double | dClosedPnl |
|  |
| double | dImpliedMarginReserved |
|  |
| double | dMarginBalance |
|  |
| double | dOpenPnl |
|  |
| double | dReservedBuyingPower |
|  |
| double | dReservedMargin |
|  |
| double | dUsedBuyingPower |
|  |
| int | eAccountBalance |
|  |
| int | eAvailableBuyingPower |
|  |
| int | eAvgOpenFillPrice |
|  |
| int | eBuyQty |
|  |
| int | eBuyWorkingQty |
|  |
| int | eCashOnHand |
|  |
| int | eClosedPnl |
|  |
| int | eImpliedMarginReserved |
|  |
| int | eImpliedNetQty |
|  |
| int | eLongExposure |
|  |
| int | eMarginBalance |
|  |
| int | eOpenPnl |
|  |
| int | ePosition |
|  |
| int | eReservedBuyingPower |
|  |
| int | eReservedMargin |
|  |
| int | eSellQty |
|  |
| int | eSellWorkingQty |
|  |
| int | eShortExposure |
|  |
| int | eUsedBuyingPower |
|  |
| int | iSsboe |
|  |
| int | iUsecs |
|  |
| long long | llBuyQty |
|  |
| long long | llBuyWorkingQty |
|  |
| long long | llImpliedNetQty |
|  |
| long long | llLongExposure |
|  |
| long long | llPosition |
|  |
| long long | llSellQty |
|  |
| long long | llSellWorkingQty |
|  |
| long long | llShortExposure |
|  |
| AccountInfo | oAccount |
|  |
| tsNCharcb | sExchange |
|  |
| tsNCharcb | sTicker |
|  |

## Detailed Description

An instance of this class represents the pnl of an Account at the Account level or for an instrument.
## Constructor & Destructor Documentation

## PnlInfo()

| PnlInfo::PnlInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~PnlInfo()

| PnlInfo::~PnlInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| PnlInfo::~PnlInfo | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs or array elements.
## Member Function Documentation

## clearHandles()
    **
| int PnlInfo::clearHandles | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## dump()
     **
| int PnlInfo::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine prints the pnl information to stdout. If a tsNCharcb has an iDataLen value of MNM_EMPTY_DATA_ITEM_LEN, then the string "<empty>" will be printed.
## Member Data Documentation

## bPossOutOfOrder

| bool PnlInfo::bPossOutOfOrder |
| --- |

When true, this value indicates that this PnlInfo instance may be occurring out of order. This value will be true if the PnlInfo instance has been cached, either because this is historical PnlInfo (from PnlReplayInfo) or if the instance was cached locally while additional asynchronous processing required for the PnlInfo was performed.
## dAccountBalance

| PnlInfo::dAccountBalance |
| --- |

This member variable represents the account balance of the account. This value is not always set, so one must check PnlInfo::eAccountBalance first.
## dAvailableBuyingPower

| double RApi::PnlInfo::dAvailableBuyingPower |
| --- |

## dAvgOpenFillPrice

| PnlInfo::dAvgOpenFillPrice |
| --- |

The average open fill price is the average fill price for an open position on an instrument. The oldest fills on the buy side are matched with the oldest fills on the sell side. If there are unmatched fills, the average fill price for these fills are put in this variable.
## dCashOnHand

| PnlInfo::dCashOnHand |
| --- |

This member variable represents the cash on hand associated with this account.
## dClosedPnl

| PnlInfo::dClosedPnl |
| --- |

This member variable represents the closed p/l for this instrument. If the ticker and symbol are not specified, this value represents the closed p/l for the Account.
## dImpliedMarginReserved

| PnlInfo::dImpliedMarginReserved |
| --- |

If applicable and available, the implied margin reserved.
## dMarginBalance

| PnlInfo::dMarginBalance |
| --- |

This member variable represents the margin balance on the account. This value is not always set, so one must check PnlInfo::eMarginBalance first.
## dOpenPnl

| PnlInfo::dOpenPnl |
| --- |

This member variable represents the open p/l for this instrument. If the ticker and symbol are not specified, this value represents the open p/l for the Account.
## dReservedBuyingPower

| double RApi::PnlInfo::dReservedBuyingPower |
| --- |

## dReservedMargin

| PnlInfo::dReservedMargin |
| --- |

This member variable represents the reserved margin of the account. This value is not always set, so one must check PnlInfo::eReservedMargin first.
## dUsedBuyingPower

| double RApi::PnlInfo::dUsedBuyingPower |
| --- |

## eAccountBalance

| PnlInfo::eAccountBalance |
| --- |

This member variable indicates how to interpret the value in PnlInfo::dAccountBalance.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eAvailableBuyingPower

| int RApi::PnlInfo::eAvailableBuyingPower |
| --- |

## eAvgOpenFillPrice

| PnlInfo::eAvgOpenFillPrice |
| --- |

This member variable indicates how to interpret the value in PnlInfo::dAvgOpenFillPrice.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eBuyQty

| PnlInfo::eBuyQty |
| --- |

This member variable indicates how to interpret the value in PnlInfo::llBuyQty.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eBuyWorkingQty

| PnlInfo::eBuyWorkingQty |
| --- |

Indicates how to interpret the value in PnlInfo::llBuyWorkingQty.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eCashOnHand

| PnlInfo::eCashOnHand |
| --- |

This member variable indicates how to interpret the value in PnlInfo::dCashOnHand.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eClosedPnl

| PnlInfo::eClosedPnl |
| --- |

This member variable indicates how to interpret the value in PnlInfo::dClosedPnl.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eImpliedMarginReserved

| PnlInfo::eImpliedMarginReserved |
| --- |

This member variable indicates how to interpret the value in PnlInfo::dImpliedMarginReserved.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eImpliedNetQty

| PnlInfo::eImpliedNetQty |
| --- |

This member variable indicates how to interpret the value in PnlInfo::llImpliedNetQty.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eLongExposure

| PnlInfo::eLongExposure |
| --- |

Indicates how to interpret the value in PnlInfo::llLongExposure.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eMarginBalance

| PnlInfo::eMarginBalance |
| --- |

This member variable indicates how to interpret the value in PnlInfo::dMarginBalance.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eOpenPnl

| PnlInfo::eOpenPnl |
| --- |

This member variable indicates how to interpret the value in PnlInfo::dOpenPnl.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## ePosition

| PnlInfo::ePosition |
| --- |

This member variable indicates how to interpret the value in PnlInfo::llPosition.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eReservedBuyingPower

| int RApi::PnlInfo::eReservedBuyingPower |
| --- |

## eReservedMargin

| PnlInfo::eReservedMargin |
| --- |

This member variable indicates how to interpret the value in PnlInfo::dReservedMargin.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eSellQty

| PnlInfo::eSellQty |
| --- |

This member variable indicates how to interpret the value in PnlInfo::llSellQty.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eSellWorkingQty

| PnlInfo::eSellWorkingQty |
| --- |

Indicates how to interpret the value in PnlInfo::lWorkingSellQty.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eShortExposure

| PnlInfo::eShortExposure |
| --- |

Indicates how to interpret the value in PnlInfo::llShortExposure.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## eUsedBuyingPower

| int RApi::PnlInfo::eUsedBuyingPower |
| --- |

## iSsboe

| int PnlInfo::iSsboe |
| --- |

Timestamp in seconds since the beginning of epoch (Jan. 1, 1970)
## iUsecs

| int PnlInfo::iUsecs |
| --- |

Microsecond portion of the timestamp
## llBuyQty

| PnlInfo::llBuyQty |
| --- |

If PnlInfo::eBuyQty is true, this member variable contains the quantity bought contributing to the PnlInfo::llPosition. If PnlInfo::sTicker and PnlInfo::sExchange are empty, this value will reflect the quantity over all instruments.
## llBuyWorkingQty

| PnlInfo::llBuyWorkingQty |
| --- |

Sum of the quantities of working buy orders. This sum will include unfilled quantities of partially filled orders.
## llImpliedNetQty

| PnlInfo::llImpliedNetQty |
| --- |

If available, the implied net quantity of the instrument. Sometimes combining outright positions can result in an implied position, such as when holding positions in a calendar spread's legs, there might be an implied position in the calendar spread itself.
## llLongExposure

| PnlInfo::llLongExposure |
| --- |

Long exposure based on buy fills, sell fills and buy working quantity.
## llPosition

| PnlInfo::llPosition |
| --- |

If PnlInfo::ePosition is true, this member variable contains the position. If PnlInfo::sTicker and PnlInfo::sExchange are empty, this value will reflect the position over all instruments.
## llSellQty

| PnlInfo::llSellQty |
| --- |

If PnlInfo::eSellQty is true, this member variable contains the quantity sold contributing to the PnlInfo::llPosition. If PnlInfo::sTicker and PnlInfo::sExchange are empty, this value will reflect the quantity over all instruments.
## llSellWorkingQty

| PnlInfo::llSellWorkingQty |
| --- |

Sum of the quantities of working sell orders. This sum will include unfilled quantities of partially filled orders.
## llShortExposure

| PnlInfo::llShortExposure |
| --- |

Short exposure based on buy fills, sell fills and sell working quantity.
## oAccount

| PnlInfo::oAccount |
| --- |

This member variable respresents the account associated with this pnl.
## sExchange

| PnlInfo::sExchange |
| --- |

This member variable contains the exchange corresponding to the pnl information. If PnlInfo::sTicker.pData is NULL and PnlInfo::sExchange.pData is also NULL, then the p/l information applies at the Account level.
## sTicker

| PnlInfo::sTicker |
| --- |

This member variable contains the symbol corresponding to the pnl information. If PnlInfo::sTicker.pData is NULL and PnlInfo::sExchange.pData is also NULL, then the p/l information applies at the Account level.
