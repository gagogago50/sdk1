> **Namespace:** `RApi`

# RApi::RCallbacks

Public Member Functions | List of all members  RApi::RCallbacks Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| virtual int | AccountList (AccountListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | AccountUpdate (AccountUpdateInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | Aggregator (AggregatorInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | AgreementList (AgreementListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | Alert (AlertInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | AskQuote (AskInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | AssignedUserList (AssignedUserListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | AutoLiquidate (AutoLiquidateInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | AuxRefData (AuxRefDataInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | Bar (BarInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | BarReplay (BarReplayInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | BestAskQuote (AskInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | BestBidAskQuote (BidInfo *pBid, AskInfo *pAsk, void *pContext, int *aiCode) |
|  |
| virtual int | BestBidQuote (BidInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | BidQuote (BidInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | BinaryContractList (BinaryContractListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | BracketReplay (BracketReplayInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | BracketTierModify (BracketTierModifyInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | BracketUpdate (BracketInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | BustReport (OrderBustReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | CancelReport (OrderCancelReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | CloseMidPrice (CloseMidPriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | ClosePrice (ClosePriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | ClosingIndicator (ClosingIndicatorInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | Dbo (DboInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | DboBookRebuild (DboBookRebuildInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | EasyToBorrow (EasyToBorrowInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | EasyToBorrowList (EasyToBorrowListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | EndQuote (EndQuoteInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | EquityOptionStrategyList (EquityOptionStrategyListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | ExchangeList (ExchangeListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | ExecutionReplay (ExecutionReplayInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | FailureReport (OrderFailureReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | FillReport (OrderFillReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | HighBidPrice (HighBidPriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | HighPrice (HighPriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | HighPriceLimit (HighPriceLimitInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | IbList (IbListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | InstrumentByUnderlying (InstrumentByUnderlyingInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | InstrumentSearch (InstrumentSearchInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | LimitOrderBook (LimitOrderBookInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | LineUpdate (LineInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | LowAskPrice (LowAskPriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | LowPrice (LowPriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | LowPriceLimit (LowPriceLimitInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | MarketMode (MarketModeInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | MidPrice (MidPriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | ModifyReport (OrderModifyReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | NotCancelledReport (OrderNotCancelledReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | NotModifiedReport (OrderNotModifiedReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | OpeningIndicator (OpeningIndicatorInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | OpenInterest (OpenInterestInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | OpenOrderReplay (OrderReplayInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | OpenPrice (OpenPriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | OptionList (OptionListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | OrderHistoryDates (OrderHistoryDatesInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | OrderReplay (OrderReplayInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | OtherReport (OrderReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | PasswordChange (PasswordChangeInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | Ping (PingInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | PnlReplay (PnlReplayInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | PnlUpdate (PnlInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | PositionExit (PositionExitInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | PriceIncrUpdate (PriceIncrInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | ProductRmsList (ProductRmsListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | ProjectedSettlementPrice (ProjectedSettlementPriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | Quote (QuoteInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | Quote (QuoteReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | QuoteReplay (QuoteReplayInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | RefData (RefDataInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | RejectReport (OrderRejectReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | SettlementPrice (SettlementPriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | SingleOrderReplay (SingleOrderReplayInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | SodUpdate (SodReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | StatusReport (OrderStatusReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | Strategy (StrategyInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | StrategyList (StrategyListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | TradeCondition (TradeInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | TradeCorrectReport (OrderTradeCorrectReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | TradePrint (TradeInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | TradeReplay (TradeReplayInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | TradeRoute (TradeRouteInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | TradeRouteList (TradeRouteListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | TradeVolume (TradeVolumeInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | TriggerPulledReport (OrderTriggerPulledReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | TriggerReport (OrderTriggerReport *pReport, void *pContext, int *aiCode) |
|  |
| virtual int | User (UserInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | UserDefinedSpreadCreate (UserDefinedSpreadCreateInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | UserList (UserListInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | UserProfile (UserProfileInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual int | VolumeAtPrice (VolumeAtPriceInfo *pInfo, void *pContext, int *aiCode) |
|  |
| virtual | ~RCallbacks () |
|  |

## Detailed Description

This class contains all the user-defined callbacks for RApi.

A subclass of RCallbacks must be defined, instantiated and passed via LoginParams::pCallbacks when logging into the infrastructure. While the session is active, the instance referenced by LoginParams::pCallbacks must not be destroyed.
## Constructor & Destructor Documentation

## ~RCallbacks()

| RCallbacks::~RCallbacks | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| RCallbacks::~RCallbacks | ( |  | ) |  |
| --- | --- | --- | --- | --- |

## Member Function Documentation

## AccountList()

| int RCallbacks::AccountList | ( | AccountListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::AccountList | ( | AccountListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a list of accounts associated with the current login id.
**Parameters**

| pInfo | the AccountListInfo object that contains an array of AccountInfo objects. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  AccountInfo
## AccountUpdate()

| int RCallbacks::AccountUpdate | ( | AccountUpdateInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::AccountUpdate | ( | AccountUpdateInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives an update to an account associated with the current login id. A subscription is not necessary, but one must be currently logged in to the Trading System connection.
**Parameters**

| pInfo | the AccountUpdateInfo object that contains the update information |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  AccountUpdateInfo     LoginParams::sTsCnnctPt
## Aggregator()

| int RCallbacks::Aggregator | ( | AggregatorInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::Aggregator | ( | AggregatorInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a a response to REngine::isThereAnAggregator() query.
**Parameters**

| pInfo | AggregatorInfo object conveying the infrastruture's response |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::isThereAnAggregator()     AggregatorInfo
## AgreementList()

| virtual int RApi::RCallbacks::AgreementList | ( | AgreementListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| virtual int RApi::RCallbacks::AgreementList | ( | AgreementListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

## Alert()

| int RCallbacks::Alert | ( | AlertInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::Alert | ( | AlertInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine detects an alert condition.
**Parameters**

| pInfo | the AlertInfo object that contains information about the alert. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  AlertInfo
## AskQuote()

| int RCallbacks::AskQuote | ( | AskInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::AskQuote | ( | AskInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives an ask quote from the market data feed.
**Parameters**

| pInfo | the AskInfo object representing the quote. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  AskInfo
## AssignedUserList()

| int RCallbacks::AssignedUserList | ( | AssignedUserListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::AssignedUserList | ( | AssignedUserListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure to REngine::listAssignedUsers().
**Parameters**

| pInfo | AssignedUserListInfo object representing the response. |
| --- | --- |
| pContext | global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | error code to be set by the user-defined method in case of failure. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::listAssignedUsers()     AssignedUserListInfo
## AutoLiquidate()

| int RCallbacks::AutoLiquidate | ( | AutoLiquidateInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::AutoLiquidate | ( | AutoLiquidateInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives an update to the auto-liquidate threshold (current) value.
**Parameters**

| pInfo | AutoLiquidateInfo instance conveying most recent values. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  AutoLiquidateInfo     REngine::subscribeAutoLiquidate()     REngine::unsubscribeAutoLiquidate()
## AuxRefData()

| virtual int RApi::RCallbacks::AuxRefData | ( | AuxRefDataInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| virtual int RApi::RCallbacks::AuxRefData | ( | AuxRefDataInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

## Bar()

| int RCallbacks::Bar | ( | BarInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::Bar | ( | BarInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a data bar from the infrastructure.
**Parameters**

| pInfo | the BarInfo object representing the bar data. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  BarInfo     REngine::replayBars     REngine::subscribeBar
## BarReplay()

| int RCallbacks::BarReplay | ( | BarReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::BarReplay | ( | BarReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method indicates the completion of replayed bar data.
**Parameters**

| pInfo | BarReplayInfo object conveying information about what parameters were passed into REngine::replayBars() |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::replayBars     BarReplayInfo
## BestAskQuote()

| int RCallbacks::BestAskQuote | ( | AskInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::BestAskQuote | ( | AskInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives the best ask quote from the ticker plant.
**Parameters**

| pInfo | the AskInfo object representing the quote. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  AskInfo     RCallbacks::BestBidQuote()     RCallbacks::BestBidAskQuote()
## BestBidAskQuote()

| int RCallbacks::BestBidAskQuote | ( | BidInfo * | pBid, |
| --- | --- | --- | --- |
|  |  | AskInfo * | pAsk, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::BestBidAskQuote | ( | BidInfo * | pBid, |
| --- | --- | --- | --- |
|  |  | AskInfo * | pAsk, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a message containg both a best bid quote and best ask quote from the ticker plant.
**Parameters**

| pBid | the BidInfo object representing the best bid quote. |
| --- | --- |
| pAsk | the AskInfo object representing the best ask quote. |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  AskInfo     BidInfo     RCallbacks::BestAskQuote()     RCallbacks::BestBidQuote()
## BestBidQuote()

| int RCallbacks::BestBidQuote | ( | BidInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::BestBidQuote | ( | BidInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives the best bid quote from the ticker plant.
**Parameters**

| pInfo | the BidInfo object representing the quote. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  BidInfo     RCallbacks::BestAskQuote()     RCallbacks::BestBidAskQuote()
## BidQuote()

| int RCallbacks::BidQuote | ( | BidInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::BidQuote | ( | BidInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives an bid quote from the market data feed.
**Parameters**

| pInfo | the BidInfo object representing the quote. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  BidInfo
## BinaryContractList()

| int RCallbacks::BinaryContractList | ( | BinaryContractListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::BinaryContractList | ( | BinaryContractListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response to REngine::listBinaryContracts().
**Parameters**

| pInfo | the BinaryContractListInfo representing the returned results. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  BinaryContractListInfo     REngine::listBinaryContracts
## BracketReplay()

| int RCallbacks::BracketReplay | ( | BracketReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::BracketReplay | ( | BracketReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method returns the results of a call to REngine::replayBrackets();
**Parameters**

| pInfo | BracketReplayInfo object conveying information about what parameters were passed into REngine::replayBrackets() as well as the returned brackets, if any. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::replayBrackets     BracketReplayInfo
## BracketTierModify()

| int RCallbacks::BracketTierModify | ( | BracketTierModifyInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::BracketTierModify | ( | BracketTierModifyInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method returns the results of a call to REngine::modifyBracketTier();
**Parameters**

| pInfo | BracketTierModifyInfo conveys the initial parameters passed to REngine, as well as a response code. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::modifyBracketTier     BracketTierModifyInfo
## BracketUpdate()

| int RCallbacks::BracketUpdate | ( | BracketInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::BracketUpdate | ( | BracketInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method returns the results of a call to REngine::subscribeBracket();
**Parameters**

| pInfo | BracketInfo object conveys updates to bracket-specific information on orders. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::subscribeBracket     REngine::unsubscribeBracket     BracketInfo
## BustReport()

| int RCallbacks::BustReport | ( | OrderBustReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::BustReport | ( | OrderBustReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a bust report from the infrastructure.
**Parameters**

| pReport | the OrderBustReport instance representing the bust. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderBustReport
## CancelReport()

| int RCallbacks::CancelReport | ( | OrderCancelReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::CancelReport | ( | OrderCancelReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a cancel report from the infrastructure.
**Parameters**

| pReport | the OrderCancelReport instance representing the cancellation. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderCancelReport
## CloseMidPrice()

| int RCallbacks::CloseMidPrice | ( | CloseMidPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::CloseMidPrice | ( | CloseMidPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a close mid price from the infrastructure.
**Parameters**

| pInfo | the CloseMidPriceInfo representing the closing mid price. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  CloseMidPriceInfo     REngine::subscribe     RApi::MD_MID_PRICE
## ClosePrice()

| int RCallbacks::ClosePrice | ( | ClosePriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::ClosePrice | ( | ClosePriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a close price from the infrastructure.
**Parameters**

| pInfo | the ClosePriceInfo representing the closing price. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  ClosePriceInfo
## ClosingIndicator()

| int RCallbacks::ClosingIndicator | ( | ClosingIndicatorInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::ClosingIndicator | ( | ClosingIndicatorInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a closing indicator price from the infrastructure.
**Parameters**

| pInfo | the ClosingIndicatorInfo representing the closing indicator price. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  ClosingIndicatorInfo
## Dbo()

| int RCallbacks::Dbo | ( | DboInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::Dbo | ( | DboInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the REngine receives depth-by-order (dbo) market data from the infrastructure.
**Parameters**

| pInfo | Contains the dbo information |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  DboInfo     DboBookRebuildInfo     REngine::rebuildDboBook     REngine::subscribeDbo
## DboBookRebuild()

| int RCallbacks::DboBookRebuild | ( | DboBookRebuildInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::DboBookRebuild | ( | DboBookRebuildInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method marks the end of the stream of dbo orders resulting from a call to REngine::rebuildDboBook(). The status (response code) of the request will be DboBookRebuildInfo::iRpCode.

The actual dbo data will be returned via RCallbacks::Dbo().
**Parameters**

| pInfo | Contains parameters passed into REngine::rebuildDboBook() as well as error/response code information. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  DboBookRebuildInfo     REngine::rebuildDboBook
## EasyToBorrow()

| int RCallbacks::EasyToBorrow | ( | EasyToBorrowInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::EasyToBorrow | ( | EasyToBorrowInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when easy-to-borrow information is received from the infrastructure.
**Parameters**

| pInfo | EasyToBorrowInfo instance representing the easy-to-borrow information. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::getEasyToBorrowList()     REngine::subscribeEasyToBorrow()     REngine::unsubscribeEasyToBorrow()     RCallbacks::EasyToBorrowList()     EasyToBorrowInfo     EasyToBorrowListInfo
## EasyToBorrowList()

| int RCallbacks::EasyToBorrowList | ( | EasyToBorrowListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::EasyToBorrowList | ( | EasyToBorrowListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure for a request to REngine::getEasyToBorrowList().
**Parameters**

| pInfo | EasyToBorrowListInfo instance representing the response information. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::getEasyToBorrowList()     REngine::subscribeEasyToBorrow()     REngine::unsubscribeEasyToBorrow()     RCallbacks::EasyToBorrow()     EasyToBorrowInfo     EasyToBorrowListInfo
## EndQuote()

| int RCallbacks::EndQuote | ( | EndQuoteInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::EndQuote | ( | EndQuoteInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked to indicate the end of a group of quote updates. There is no price level associated with this callback.
**Parameters**

| pInfo | the EndQuote representing the end of the group. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  EndQuoteInfo
## EquityOptionStrategyList()

| int RCallbacks::EquityOptionStrategyList | ( | EquityOptionStrategyListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::EquityOptionStrategyList | ( | EquityOptionStrategyListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response to REngine::getEquityOptionStrategyList().
**Parameters**

| pInfo | the EquityOptionStrategyListInfo representing the returned results. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  EquityOptionStrategyListInfo     REngine::getEquityOptionStrategyList
## ExchangeList()

| int RCallbacks::ExchangeList | ( | ExchangeListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::ExchangeList | ( | ExchangeListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure for a request to REngine::listExchanges.
**Parameters**

| pInfo | the ExchangeListInfo instance representing a list of exchanges. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  ExchangeListInfo     REngine::listExchanges
## ExecutionReplay()

| int RCallbacks::ExecutionReplay | ( | ExecutionReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::ExecutionReplay | ( | ExecutionReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure for a request to REngine::replayExecutions.
**Parameters**

| pInfo | the ExecutionReplayInfo instance representing a list of executions. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  ExecutionReplayInfo     REngine::replayExecutions
## FailureReport()

| int RCallbacks::FailureReport | ( | OrderFailureReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::FailureReport | ( | OrderFailureReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a failure report from the infrastructure. A failure indicates that the order could not be placed with the exchange.
**Parameters**

| pReport | the OrderFailureReport instance providing information about the failed order. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderFailureReport
## FillReport()

| int RCallbacks::FillReport | ( | OrderFillReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::FillReport | ( | OrderFillReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a fill report from the infrastructure. The fill report does not provide cumulative fill information for the order, but fill information pertaining to a single fill event. RCallbacks::LineUpdate will be invoked to provide cumulative fill information.
**Parameters**

| pReport | the OrderFillReport instance providing information about the fill. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderFillReport
## HighBidPrice()

| int RCallbacks::HighBidPrice | ( | HighBidPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::HighBidPrice | ( | HighBidPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a highest bid price from the infrastructure.
**Parameters**

| pInfo | the HighBidPriceInfo representing the highest bid price. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  HighBidPriceInfo
## HighPrice()

| int RCallbacks::HighPrice | ( | HighPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::HighPrice | ( | HighPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a high price from the infrastructure.
**Parameters**

| pInfo | the HighPriceInfo representing the high price. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  HighPriceInfo
## HighPriceLimit()

| int RCallbacks::HighPriceLimit | ( | HighPriceLimitInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::HighPriceLimit | ( | HighPriceLimitInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when high price limit information is received from the infrastructure.
**Parameters**

| pInfo | the HighPriceLimitInfo object that represents the most recent high price limit of the instrument. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::subscribe     REngine::subscribeByUnderlying     RApi::MD_PRICE_LIMIT
## IbList()

| int RCallbacks::IbList | ( | IbListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::IbList | ( | IbListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked to convey the infrastructure's response resulting from a call to REngine::listIbs().
**Parameters**

| pInfo | IbListInfo object containing the user context and list of IBs. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | An error code to be set by the callback implementation if the callback failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` should be populated with the error code.
**See also**
  REngine::listIbs()     IbListInfo
## InstrumentByUnderlying()

| int RCallbacks::InstrumentByUnderlying | ( | InstrumentByUnderlyingInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::InstrumentByUnderlying | ( | InstrumentByUnderlyingInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response to REngine::getInstrumentByUnderlying().
**Parameters**

| pInfo | the InstrumentByUnderlyingInfo representing the returned results. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  InstrumentByUnderlyingInfo     REngine::getInstrumentByUnderlying
## InstrumentSearch()

| int RCallbacks::InstrumentSearch | ( | InstrumentSearchInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::InstrumentSearch | ( | InstrumentSearchInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked upon receipt of results from a call to REngine::searchInstrument().
**Parameters**

| pInfo | the InstrumentSearchInfo representing the initial parameters passed to REngine::searchInstrument() and the search results. |
| --- | --- |
| pContext | the global context pointer provided by either; REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  InstrumentSearchInfo     REngine::searchInstrument
## LimitOrderBook()

| int RCallbacks::LimitOrderBook | ( | LimitOrderBookInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::LimitOrderBook | ( | LimitOrderBookInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a limit order book. The limit order book may be the result of a subscription to MD_QUOTES or a call to REngine::rebuildBook.

If the limit order book is due to a subscription to MD_QUOTES, the callback represents a snapshot of the order book against which subsequent quotes can be applied. In other words, the RCallbacks::LimitOrderBook method provides an initial order book state, and RCallbacks::AskQuote and RCallbacks::BidQuote provide updates to that initial book.

It is also possible to receive an order book update which clears out one or both sides of the order book.
**Parameters**

| pInfo | the LimitOrderBookInfo object that contains information about the order book. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  LimitOrderBookInfo     REngine::rebuildBook     REngine::subscribe     RApi::MD_QUOTES
## LineUpdate()

| int RCallbacks::LineUpdate | ( | LineInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::LineUpdate | ( | LineInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a LineInfo update from the infrastructure about an order.
**Parameters**

| pInfo | the LineInfo instance representing the order. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  LineInfo     OrderBustReport     OrderCancelReport     OrderFailureReport     OrderFillReport     OrderModifyReport     OrderNotCancelledReport     OrderNotModifiedReport     OrderRejectReport     OrderReport     OrderStatusReport
## LowAskPrice()

| int RCallbacks::LowAskPrice | ( | LowAskPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::LowAskPrice | ( | LowAskPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a lowest ask price from the infrastructure.
**Parameters**

| pInfo | the LowAskPriceInfo representing the lowest ask price. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  LowAskPriceInfo
## LowPrice()

| int RCallbacks::LowPrice | ( | LowPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::LowPrice | ( | LowPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a low price from the infrastructure.
**Parameters**

| pInfo | the LowPriceInfo representing the low price. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  LowPriceInfo
## LowPriceLimit()

| int RCallbacks::LowPriceLimit | ( | LowPriceLimitInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::LowPriceLimit | ( | LowPriceLimitInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when low price limit information is received from the infrastructure.
**Parameters**

| pInfo | the LowPriceLimitInfo object that represents the most recent low price limit of the instrument. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::subscribe     REngine::subscribeByUnderlying     RApi::MD_PRICE_LIMIT
## MarketMode()

| int RCallbacks::MarketMode | ( | MarketModeInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::MarketMode | ( | MarketModeInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when market mode information is received from the infrastructure.
**Parameters**

| pInfo | the MarketModeInfo object that represents the most recent market mode of the instrument. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::subscribe     RApi::MD_MARKET_MODE
## MidPrice()

| int RCallbacks::MidPrice | ( | MidPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::MidPrice | ( | MidPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a mid price from the infrastructure.
**Parameters**

| pInfo | the MidPriceInfo representing the mid price. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  MidPriceInfo     REngine::subscribe     RApi::MD_MID_PRICE
## ModifyReport()

| int RCallbacks::ModifyReport | ( | OrderModifyReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::ModifyReport | ( | OrderModifyReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a modify report from the infrastructure. The modify report indicates that a request to modify the order has been successfully processed.
**Parameters**

| pReport | the OrderModifyReport instance providing information about the order after the modification has been applied. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderModifyReport
## NotCancelledReport()

| int RCallbacks::NotCancelledReport | ( | OrderNotCancelledReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::NotCancelledReport | ( | OrderNotCancelledReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a report from the infrastructure indicating that a request to cancel an order has failed.
**Parameters**

| pReport | the OrderNotCancelledReport instance providing information about the order and the failure to cancel it. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderNotCancelledReport
## NotModifiedReport()

| int RCallbacks::NotModifiedReport | ( | OrderNotModifiedReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::NotModifiedReport | ( | OrderNotModifiedReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a report from the infrastructure indicating that a request to modify an order has failed.
**Parameters**

| pReport | the OrderNotModifiedReport instance providing information about the order and the failure to modify it. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderNotModifiedReport
## OpeningIndicator()

| int RCallbacks::OpeningIndicator | ( | OpeningIndicatorInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::OpeningIndicator | ( | OpeningIndicatorInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a opening indicator price from the infrastructure.
**Parameters**

| pInfo | the OpeningIndicatorInfo representing the opening indicator price. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OpeningIndicatorInfo
## OpenInterest()

| int RCallbacks::OpenInterest | ( | OpenInterestInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::OpenInterest | ( | OpenInterestInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives open interest data from the infrastructure.
**Parameters**

| pInfo | OpenInterestInfo representing the open interest. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OpenInterestInfo     REngine::subscribe     RApi::MD_OPEN_INTEREST
## OpenOrderReplay()

| int RCallbacks::OpenOrderReplay | ( | OrderReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::OpenOrderReplay | ( | OrderReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure for a request to REngine::replayOpenOrders.
**Parameters**

| pInfo | the OrderReplayInfo instance representing a list of currently open orders. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  LineInfo     OrderReplayInfo     REngine::replayOpenOrders
## OpenPrice()

| int RCallbacks::OpenPrice | ( | OpenPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::OpenPrice | ( | OpenPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when open price information is received from the infrastructure.
**Parameters**

| pInfo | the OpenPriceInfo object that represents the most recent open price of the instrument. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::subscribe     RApi::MD_OPEN
## OptionList()

| virtual int RApi::RCallbacks::OptionList | ( | OptionListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| virtual int RApi::RCallbacks::OptionList | ( | OptionListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

## OrderHistoryDates()

| int RCallbacks::OrderHistoryDates | ( | OrderHistoryDatesInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::OrderHistoryDates | ( | OrderHistoryDatesInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure for a request to REngine::listOrderHistoryDates.
**Parameters**

| pInfo | the OrderHistoryDatesInfo instance representing a list of order history dates. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderHistoryDatesInfo     REngine::listOrderHistoryDates
## OrderReplay()

| int RCallbacks::OrderReplay | ( | OrderReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::OrderReplay | ( | OrderReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure for a request to REngine::replayAllOrders.
**Parameters**

| pInfo | the OrderReplayInfo instance representing a list of orders. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  LineInfo     OrderReplayInfo     REngine::replayAllOrders
## OtherReport()

| int RCallbacks::OtherReport | ( | OrderReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::OtherReport | ( | OrderReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a report from the infrastructure that does not have a corresponding pre-defined report type associated in RApi.
**Parameters**

| pReport | the OrderOtherReport instance providing basic information about the order and the associated event. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderOtherReport
## PasswordChange()

| int RCallbacks::PasswordChange | ( | PasswordChangeInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::PasswordChange | ( | PasswordChangeInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure for a request to REngine::changePassword.
**Parameters**

| pInfo | the PasswordChangeInfo instance will convey the response code of the request to change the password. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  PasswordChangeInfo     REngine::changePassword
## Ping()

| int RCallbacks::Ping | ( | PingInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::Ping | ( | PingInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure from a ping request (REngine::ping()).
**Parameters**

| pInfo | PingInfo instance conveying the send and receipt times, as well as the optional context pointer. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  PingInfo     REngine::ping
## PnlReplay()

| int RCallbacks::PnlReplay | ( | PnlReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::PnlReplay | ( | PnlReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure for a request to REngine::replayPnl.
**Parameters**

| pInfo | the PnlReplayInfo instance representing a list of instruments and their associated PnlInfo. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  PnlReplayInfo     REngine::replayPnl
## PnlUpdate()

| int RCallbacks::PnlUpdate | ( | PnlInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::PnlUpdate | ( | PnlInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives an update from the infrastructure on the pnl of an instrument or Account.
**Parameters**

| pInfo | the PnlInfo instance representing the pnl. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  PnlInfo     REngine::subscribePnl     REngine::unsubscribePnl
## PositionExit()

| int RCallbacks::PositionExit | ( | PositionExitInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::PositionExit | ( | PositionExitInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response to REngine::exitPosition() from the infrastructure.
**Parameters**

| pInfo | Contains the response code returned by the infrastructure, along with the account, instrument, and other parameters initially passed into REngine::exitPosition() |
| --- | --- |
| pContext | Global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | Error code set by the user-defined method in the event of an error condition. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` should be populated with an appropriate error code.
**See also**
  PositionExitInfo     REngine::exitPosition
## PriceIncrUpdate()

| int RCallbacks::PriceIncrUpdate | ( | PriceIncrInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::PriceIncrUpdate | ( | PriceIncrInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives price reference data from the infrastructure. This reference data is requested automatically when invoking REngine::subscribe or can be manually retrieved by calling REngine::getPriceIncrInfo.
**Parameters**

| pInfo | the PriceInfo instance representing the price reference data. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  PriceIncrInfo
## ProductRmsList()

| int RCallbacks::ProductRmsList | ( | ProductRmsListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::ProductRmsList | ( | ProductRmsListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure for a request to REngine::getProductRms.
**Parameters**

| pInfo | the ProductRmsListInfo instance conveys the procuct level rms settings, along with any response code of the associated request. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  ProductRmsListInfo     REngine::getProductRms
## ProjectedSettlementPrice()

| int RCallbacks::ProjectedSettlementPrice | ( | ProjectedSettlementPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::ProjectedSettlementPrice | ( | ProjectedSettlementPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when projected settlement price information is received from the infrastructure.
**Parameters**

| pInfo | the ProjectedSettlementPriceInfo object that represents the most recent projected settlement price of the instrument. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::subscribe     REngine::subscribeByUnderlying     RApi::MD_PROJECTED_SETTLEMENT
## Quote() [1/2]

| int RCallbacks::Quote | ( | QuoteInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::Quote | ( | QuoteInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the a quote message is received from the infrastructure.
**Parameters**

| pInfo | the QuoteInfo object that representing the quote |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  QuoteInfo     QuoteReport     REngine::submitQuoteList     REngine::cancelQuoteList
## Quote() [2/2]

| int RCallbacks::Quote | ( | QuoteReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::Quote | ( | QuoteReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the a quote report message is received from the infrastructure.
**Parameters**

| pReport | the QuoteReport object that representing the report |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  QuoteInfo     QuoteReport     REngine::submitQuoteList     REngine::cancelQuoteList
## QuoteReplay()

| int RCallbacks::QuoteReplay | ( | QuoteReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::QuoteReplay | ( | QuoteReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure for a request to REngine::replayQuotes.
**Parameters**

| pInfo | the QuoteReplayInfo instance representing a list of quotes. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  QuoteInfo     QuoteReplayInfo     REngine::replayQuotes
## RefData()

| int RCallbacks::RefData | ( | RefDataInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::RefData | ( | RefDataInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives reference data from the infrastructure. This reference data is requested when invoking REngine::getRefData() or when subscribing to reference data from the real time stream.
**Parameters**

| pInfo | the RefDataInfo instance representing the reference data. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  RefDataInfo     REngine::subscribe     REngine::subscribeByUnderlying     RApi::MD_REF_DATA
## RejectReport()

| int RCallbacks::RejectReport | ( | OrderRejectReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::RejectReport | ( | OrderRejectReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a reject report from the infrastructure. The reject report indicates that a request to place an order has been rejected by the infrastructure (often by the exchange).
**Parameters**

| pReport | the OrderRejectReport instance providing basic information about the order and the associated event. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderRejectReport
## SettlementPrice()

| int RCallbacks::SettlementPrice | ( | SettlementPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::SettlementPrice | ( | SettlementPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when settlement price information is received from the infrastructure.
**Parameters**

| pInfo | the SettlementPriceInfo object that represents the most recent settlement price of the instrument. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::subscribe     RApi::MD_SETTLEMENT
## SingleOrderReplay()

| int RCallbacks::SingleOrderReplay | ( | SingleOrderReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::SingleOrderReplay | ( | SingleOrderReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the results from a call to REngine::replaySingleOrder() are done.
**Parameters**

| pInfo | This object returns the parameters initially passed to REngine::replaySingleOrder(), as well as the response code. |
| --- | --- |
| pContext | The global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | The error code to be set by the user-defined method if this callback fails. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::replaySingleOrder     SingleOrderReplayInfo
## SodUpdate()

| int RCallbacks::SodUpdate | ( | SodReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::SodUpdate | ( | SodReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a start-of-day report from the infrastructure indicating that a position has been held from one trading session to another.
**Parameters**

| pReport | the SodReport instance providing basic information about the order and the associated event. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  SodReport     REngine::subscribeOrder
## StatusReport()

| int RCallbacks::StatusReport | ( | OrderStatusReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::StatusReport | ( | OrderStatusReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a report from the infrastructure indicating that a request to place an order has been accepted by the exchange.
**Parameters**

| pReport | the OrderStatusReport instance providing basic information about the order and the associated event. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderStatusReport
## Strategy()

| int RCallbacks::Strategy | ( | StrategyInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::Strategy | ( | StrategyInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when strategy (definition) information is received from the infrastructure.
**Parameters**

| pInfo | the StrategyInfo object that representing the strategy. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  StrategyInfo     REngine::getStrategyInfo
## StrategyList()

| int RCallbacks::StrategyList | ( | StrategyListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::StrategyList | ( | StrategyListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the response to a call to REngine::getStrategyList is received from the infrastructure.
**Parameters**

| pInfo | the StrategyListInfo object that representing the available strategy information. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  StrategyListInfo     REngine::getStrategyList
## TradeCondition()

| int RCallbacks::TradeCondition | ( | TradeInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::TradeCondition | ( | TradeInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a conditional trade print from the market data feed.
**Parameters**

| pInfo | the TradeInfo object representing the trade information. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  TradeInfo
## TradeCorrectReport()

| int RCallbacks::TradeCorrectReport | ( | OrderTradeCorrectReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::TradeCorrectReport | ( | OrderTradeCorrectReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a report from the infrastructure indicating that a trade correction has occurred.
**Parameters**

| pReport | the OrderTradeCorrectReport instance providing basic information about the order and the associated event. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderTradeCorrectReport     REngine::subscribeOrder
## TradePrint()

| int RCallbacks::TradePrint | ( | TradeInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::TradePrint | ( | TradeInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a trade print from the market data feed.
**Parameters**

| pInfo | the TradeInfo object representing the trade information. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  TradeInfo
## TradeReplay()

| int RCallbacks::TradeReplay | ( | TradeReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::TradeReplay | ( | TradeReplayInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method marks the end of the stream of historical trade data. If an error is encountered, or if there were no trades, this will be the first callback invoked as a result of a prior call to REngine::replayTrades(). If no error is encountered, a number of RCallbacks::TradePrint() invocations will occur prior to this callback.
**Parameters**

| pInfo | the TradeReplayInfo object representing the initial parameters and any error codes. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::replayTrades     TradeReplayInfo     TradeInfo
## TradeRoute()

| int RCallbacks::TradeRoute | ( | TradeRouteInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::TradeRoute | ( | TradeRouteInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives an update to a trade route.
**Parameters**

| pInfo | TradeRouteInfo instance containing the update |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::subscribeTradeRoute()     REngine::unsubscribeTradeRoute()     TradeRouteInfo     What are trade routes and how do I use them?
## TradeRouteList()

| int RCallbacks::TradeRouteList | ( | TradeRouteListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::TradeRouteList | ( | TradeRouteListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure to REngine::listTradeRoutes().
**Parameters**

| pInfo | the TradeRouteListInfo object representing the collection of trade routes and/or any error condition associated with the request. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::listTradeRoutes()     TradeRouteListInfo     What are trade routes and how do I use them?
## TradeVolume()

| int RCallbacks::TradeVolume | ( | TradeVolumeInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::TradeVolume | ( | TradeVolumeInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives trade volume data from market data feed.
**Parameters**

| pInfo | the TradeVolumeInfo object representing the trade volume. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  TradeVolumeInfo
## TriggerPulledReport()

| int RCallbacks::TriggerPulledReport | ( | OrderTriggerPulledReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::TriggerPulledReport | ( | OrderTriggerPulledReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a report from the infrastructure indicating that an order has been placed by the order release manager. Typically this will occur for "if touched" and/or stop orders handled by the order release manager.
**Parameters**

| pReport | the OrderTriggerPulledReport instance providing basic information about the order and the associated event. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderTriggerPulledReport
## TriggerReport()

| int RCallbacks::TriggerReport | ( | OrderTriggerReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::TriggerReport | ( | OrderTriggerReport * | pReport, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a report from the infrastructure indicating that the exchange has acknowledges the triggered order. It can be regarded as an exchange confirmation that this triggered order is "live".
**Parameters**

| pReport | the OrderTriggerReport instance providing basic information bout the order and the associated event. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  OrderTriggerReport
## User()

| int RCallbacks::User | ( | UserInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::User | ( | UserInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives user information from the infrastructure. Snapshots of user information can be requested using REngine::listUsers() while updates can be subscribed to using REngine::subscribeUser().
**Parameters**

| pInfo | UserInfo object conveying the user information. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::listUsers()     REngine::subscribeUser()     REngine::unsubscribeUser()     UserInfo
## UserDefinedSpreadCreate()

| int RCallbacks::UserDefinedSpreadCreate | ( | UserDefinedSpreadCreateInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::UserDefinedSpreadCreate | ( | UserDefinedSpreadCreateInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure to a request to create a user defined spread.
**Parameters**

| pInfo | UserDefinedSpreadCreateInfo object representing the response. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::createUserDefinedSpread     UserDefinedSpreadCreateInfo
## UserList()

| int RCallbacks::UserList | ( | UserListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::UserList | ( | UserListInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method indicates the completion of the user list retrieval. The UserListInfo object will contain the parameters initially sent with REngine::listUsers(), as well as a response code indicating any error condition, if applicable.
**Parameters**

| pInfo | UserListInfo object conveying parameter and error information |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | error code optionally set by the user-defined method |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::listUsers()     UserListInfo
## UserProfile()

| int RCallbacks::UserProfile | ( | UserProfileInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::UserProfile | ( | UserProfileInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a response from the infrastructure to a request for user profile information.
**Parameters**

| pInfo | UserProfileInfo object representing the response. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  REngine::getUserProfile     UserProfileInfo
## VolumeAtPrice()

| int RCallbacks::VolumeAtPrice | ( | VolumeAtPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

   inlinevirtual
| int RCallbacks::VolumeAtPrice | ( | VolumeAtPriceInfo * | pInfo, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is invoked when the engine receives a volume at price snapshot.
**Parameters**

| pInfo | the VolumeAtPriceInfo object representing the trade volumes and prices. |
| --- | --- |
| pContext | the global context pointer provided by either REngineParams::pContext or set via REngine::setContext. If this value has not been set, its value will be NULL. |
| aiCode | the error code set by the user-defined method if it failed. |

**Returns**
  OK if the method was successful, NOT_OK otherwise. In the latter case `aiCode` is populated with the error code.
**See also**
  VolumeAtPriceInfo     REngine::getVolumeAtPrice
