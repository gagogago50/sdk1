> **Namespace:** `RApi`

# RApi::REngine

Public Member Functions | Static Public Member Functions | List of all members  RApi::REngine Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | addTimer (tsNCharcb *const pTimerName, const OmneEngineSpace::OmneTimerCB *pTimerCB, long lFreq, void *pContext, int *aiCode) |
|  |
| int | cancelAllOrders (AccountInfo *pAccount, tsNCharcb *pEntryType, tsNCharcb *pTradingAlgorithm, tsNCharcb *pWindowName, int *aiCode) |
|  |
| int | cancelOrder (AccountInfo *pAccount, tsNCharcb *pOrderNum, tsNCharcb *pEntryType, tsNCharcb *pTradingAlgorithm, tsNCharcb *pUserMsg, void *pContext, tsNCharcb *pWindowName, int *aiCode) |
|  |
| int | cancelOrderList (AccountInfo *aoAccountArray, tsNCharcb *asOrderNumArray, tsNCharcb *asEntryTypeArray, tsNCharcb *asTradingAlgorithmArray, tsNCharcb *asUserMsgArray, void **apContextArray, int iArrayLen, tsNCharcb *pWindowName, int *aiCode) |
|  |
| int | cancelQuoteList (QuoteCancelParams *pParams, int iArrayLen, int *aiCode) |
|  |
| int | changePassword (tsNCharcb *pOldPassword, tsNCharcb *pNewPassword, int *aiCode) |
|  |
| int | createUserDefinedSpread (AccountInfo *pAccount, tsNCharcb *pExchange, tsNCharcb *pTradeRoute, tsNCharcb *pEntryType, tsNCharcb *pStrategyType, int iNumLegs, tsNCharcb *asLegTickers, int *aiLegRatios, void *pContext, int *aiCode) |
|  |
| int | exitPosition (AccountInfo *pAccount, tsNCharcb *pExchange, tsNCharcb *pTicker, tsNCharcb *pEntryType, tsNCharcb *pTag, tsNCharcb *pTradingAlgorithm, tsNCharcb *pUserMsg, tsNCharcb *pWindowName, void *pContext, int *aiCode) |
|  |
| int | getAccounts (tsNCharcb *pStatus, int *aiCode) |
|  |
| int | getAdmCallbacks (AdmCallbacks **apCallbacks, int *aiCode) |
|  |
| int | getAdminName (tsNCharcb *pAdminName, int *aiCode) |
|  |
| int | getAppName (tsNCharcb *pAppName, int *aiCode) |
|  |
| int | getAppVersion (tsNCharcb *pAppVersion, int *aiCode) |
|  |
| int | getAuxRefData (tsNCharcb *pExchange, tsNCharcb *pTicker, int *aiCode) |
|  |
| int | getCallbacks (RCallbacks **apCallbacks, int *aiCode) |
|  |
| int | getContext (void **apContext, int *aiCode) |
|  |
| int | getEasyToBorrowList (void *pContext, int *aiCode) |
|  |
| int | getEnvironment (tsNCharcb *pKey, void *pContext, int *aiCode) |
|  |
| int | getEquityOptionStrategyList (tsNCharcb *pExchange, tsNCharcb *pUnderlying, tsNCharcb *pStrategyType, tsNCharcb *pExpiration, void *pContext, int *aiCode) |
|  |
| int | getIhCnnctPt (tsNCharcb *pIhCnnctPt, int *aiCode) |
|  |
| int | getInstrumentByUnderlying (tsNCharcb *pUnderlying, tsNCharcb *pExchange, tsNCharcb *pExpiration, void *pContext, int *aiCode) |
|  |
| int | getMdCnnctPt (tsNCharcb *pMdCnnctPt, int *aiCode) |
|  |
| int | getOmne (void **apOmne, int *aiCode) |
|  |
| int | getOptionList (tsNCharcb *pExchange, tsNCharcb *pProductCode, tsNCharcb *pExpirationCCYYMM, void *pContext, int *aiCode) |
|  |
| int | getOrderContext (tsNCharcb *pOrderNum, void **apContext, int *aiCode) |
|  |
| int | getPassword (tsNCharcb *pPassword, int *aiCode) |
|  |
| int | getPendingInputSize (int iConnId, unsigned long int *aulPendingBytes, int *aiCode) |
|  |
| int | getPnlCnnctPt (tsNCharcb *pPnlCnnctPt, int *aiCode) |
|  |
| int | getPriceIncrInfo (tsNCharcb *pExchange, tsNCharcb *pTicker, int *aiCode) |
|  |
| int | getProductRmsInfo (AccountInfo *pAccount, int *aiCode) |
|  |
| int | getRefData (tsNCharcb *pExchange, tsNCharcb *pTicker, int *aiCode) |
|  |
| int | getStrategyInfo (tsNCharcb *pExchange, tsNCharcb *pTicker, void *pContext, int *aiCode) |
|  |
| int | getStrategyList (tsNCharcb *pExchange, tsNCharcb *pProductCode, tsNCharcb *pStrategyType, tsNCharcb *pExpirationCCYYMM, void *pContext, int *aiCode) |
|  |
| int | getTsCnnctPt (tsNCharcb *pTsCnnctPt, int *aiCode) |
|  |
| int | getUser (tsNCharcb *pUser, int *aiCode) |
|  |
| int | getUserProfile (int iConnId, void *pContext, int *aiCode) |
|  |
| int | getVolumeAtPrice (tsNCharcb *pExchange, tsNCharcb *pTicker, void *pContext, int *aiCode) |
|  |
| int | isThereAnAggregator (int *aiCode) |
|  |
| int | linkOrders (AccountInfo *aoAccountArray, tsNCharcb *asOrderNumArray, int iArrayLen, int *aiCode) |
|  |
| int | listAgreements (bool bAccepted, void *pContext, int *aiCode) |
|  |
| int | listAssignedUsers (AccountInfo *pAccount, void *pContext, int *aiCode) |
|  |
| int | listBinaryContracts (tsNCharcb *pExchange, tsNCharcb *pProductCode, void *pContext, int *aiCode) |
|  |
| int | listEnvironments (void *pContext, int *aiCode) |
|  |
| int | listExchanges (void *pContext, int *aiCode) |
|  |
| int | listIbs (void *pContext, int *aiCode) |
|  |
| int | listOrderHistoryDates (void *pContext, int *aiCode) |
|  |
| int | listTradeRoutes (void *pContext, int *aiCode) |
|  |
| int | listUsers (tsNCharcb *pIbId, tsNCharcb *pUserType, void *pContext, int *aiCode) |
|  |
| int | lock (int *aiCode) |
|  |
| int | login (LoginParams *pParams, int *aiCode) |
|  |
| int | loginRepository (tsNCharcb *pEnvKey, tsNCharcb *pUser, tsNCharcb *pPassword, tsNCharcb *pCnnctPt, RCallbacks *pCallbacks, int *aiCode) |
|  |
| int | logout (int *aiCode) |
|  |
| int | logoutRepository (int *aiCode) |
|  |
| int | modifyBracketTier (AccountInfo *pAccount, tsNCharcb *pOrderNum, bool bTarget, int iOldTickOffset, int iNewTickOffset, void *pContext, int *aiCode) |
|  |
| int | modifyOrder (ModifyLimitOrderParams *pParams, int *aiCode) |
|  |
| int | modifyOrder (ModifyOrderParams *pParams, int *aiCode) |
|  |
| int | modifyOrder (ModifyStopLimitOrderParams *pParams, int *aiCode) |
|  |
| int | modifyOrder (ModifyStopMarketOrderParams *pParams, int *aiCode) |
|  |
| int | modifyOrderList (ModifyOrderParams *pParams, int iArrayLen, int *aiCode) |
|  |
| int | modifyOrderRefData (AccountInfo *pAccount, tsNCharcb *pOrderNum, tsNCharcb *pUserMsg, tsNCharcb *pUserTag, int *aiCode) |
|  |
| int | ping (int iConnId, void *pContext, int *aiCode) |
|  |
| int | rebuildBook (tsNCharcb *pExchange, tsNCharcb *pTicker, int *aiCode) |
|  |
| int | rebuildDboBook (tsNCharcb *pExchange, tsNCharcb *pTicker, bool bPrice, double dPrice, void *pContext, int *aiCode) |
|  |
| int | removeTimer (tsNCharcb *const pTimerName, int *aiCode) |
|  |
|  | REngine (REngineParams *pParams) |
|  |
| int | replayAllOrders (AccountInfo *pAccount, int iStartSsboe, int iEndSsboe, int *aiCode) |
|  |
| int | replayBars (ReplayBarParams *pParams, int *aiCode) |
|  |
| int | replayBrackets (AccountInfo *pAccount, int *aiCode) |
|  |
| int | replayExecutions (AccountInfo *pAccount, int iStartSsboe, int iEndSsboe, int *aiCode) |
|  |
| int | replayHistoricalOrders (AccountInfo *pAccount, tsNCharcb *pDate, int *aiCode) |
|  |
| int | replayOpenOrders (AccountInfo *pAccount, int *aiCode) |
|  |
| int | replayPnl (AccountInfo *pAccount, int *aiCode) |
|  |
| int | replayQuotes (AccountInfo *pAccount, void *pContext, int *aiCode) |
|  |
| int | replaySingleHistoricalOrder (AccountInfo *pAccount, tsNCharcb *pOrderNum, tsNCharcb *pDate, void *pContext, int *aiCode) |
|  |
| int | replaySingleOrder (AccountInfo *pAccount, tsNCharcb *pOrderNum, void *pContext, int *aiCode) |
|  |
| int | replayTrades (tsNCharcb *pExchange, tsNCharcb *pTicker, int iStartSsboe, int iEndSsboe, int *aiCode) |
|  |
| int | resumeInput (int *aiCode) |
|  |
| int | searchInstrument (tsNCharcb *pExchange, SearchTerm *asTerms, int iNumTerms, void *pContext, int *aiCode) |
|  |
| int | sendBracketOrder (OrderParams *pEntry, BracketParams *pBracketParams, int *aiCode) |
|  |
| int | sendBracketOrder (OrderParams *pEntry, tsNCharcb *pBracketType, tsNCharcb *pOrderOperationType, bool bTrailingStop, int iTrailByPriceId, int iTargetArrayLen, int *pTargetQty, int *pTargetTicks, int iStopArrayLen, int *pStopQty, int *pStopTicks, int *aiCode) |
|  |
| int | sendOcaList (tsNCharcb *pOcaType, OrderParams *pParamsArray, int iArrayLen, int *aiCode) |
|  |
| int | sendOrder (LimitOrderParams *pParams, int *aiCode) |
|  |
| int | sendOrder (MarketOrderParams *pParams, int *aiCode) |
|  |
| int | sendOrder (StopLimitOrderParams *pParams, int *aiCode) |
|  |
| int | sendOrder (StopMarketOrderParams *pParams, int *aiCode) |
|  |
| int | sendOrderList (OrderParams *pParamsArray, int iArrayLen, int *aiCode) |
|  |
| int | setContext (void *pContext, int *aiCode) |
|  |
| int | setEnvironmentVariable (tsNCharcb *pKey, tsNCharcb *pVariable, tsNCharcb *pValue, int *aiCode) |
|  |
| int | setOrderContext (tsNCharcb *pOrderNum, void *pContext, int *aiCode) |
|  |
| int | startTimer (tsNCharcb *const pTimerName, int *aiCode) |
|  |
| int | stopTimer (tsNCharcb *const pTimerName, int *aiCode) |
|  |
| int | submitQuoteList (QuoteParams *pParams, int iArrayLen, int *aiCode) |
|  |
| int | subscribe (tsNCharcb *pExchange, tsNCharcb *pTicker, int iFlags, int *aiCode) |
|  |
| int | subscribeAutoLiquidate (AccountInfo *pAccount, int *aiCode) |
|  |
| int | subscribeBar (BarParams *pParams, int *aiCode) |
|  |
| int | subscribeBracket (AccountInfo *pAccount, int *aiCode) |
|  |
| int | subscribeByUnderlying (tsNCharcb *pUnderlying, tsNCharcb *pExchange, tsNCharcb *pExpiration, int iFlags, void *pContext, int *aiCode) |
|  |
| int | subscribeDbo (tsNCharcb *pExchange, tsNCharcb *pTicker, bool bPrice, double dPrice, void *pContext, int *aiCode) |
|  |
| int | subscribeEasyToBorrow (void *pContext, int *aiCode) |
|  |
| int | subscribeOrder (AccountInfo *pAccount, int *aiCode) |
|  |
| int | subscribePnl (AccountInfo *pAccount, int *aiCode) |
|  |
| int | subscribeTradeRoute (tsNCharcb *pFcmId, tsNCharcb *pIbId, void *pContext, int *aiCode) |
|  |
| int | subscribeUser (tsNCharcb *pIbId, void *pContext, int *aiCode) |
|  |
| int | suspendInput (int *aiCode) |
|  |
| int | tryLock (int *aiCode) |
|  |
| int | unlock (int *aiCode) |
|  |
| int | unsetEnvironmentVariable (tsNCharcb *pKey, tsNCharcb *pVariable, int *aiCode) |
|  |
| int | unsubscribe (tsNCharcb *pExchange, tsNCharcb *pTicker, int *aiCode) |
|  |
| int | unsubscribeAutoLiquidate (AccountInfo *pAccount, int *aiCode) |
|  |
| int | unsubscribeBar (BarParams *pParams, int *aiCode) |
|  |
| int | unsubscribeBracket (AccountInfo *pAccount, int *aiCode) |
|  |
| int | unsubscribeByUnderlying (tsNCharcb *pUnderlying, tsNCharcb *pExchange, tsNCharcb *pExpiration, int *aiCode) |
|  |
| int | unsubscribeDbo (tsNCharcb *pExchange, tsNCharcb *pTicker, bool bPrice, double dPrice, void *pContext, int *aiCode) |
|  |
| int | unsubscribeEasyToBorrow (int *aiCode) |
|  |
| int | unsubscribeOrder (AccountInfo *pAccount, int *aiCode) |
|  |
| int | unsubscribePnl (AccountInfo *pAccount, int *aiCode) |
|  |
| int | unsubscribeTradeRoute (tsNCharcb *pFcmId, tsNCharcb *pIbId, int *aiCode) |
|  |
| int | unsubscribeUser (tsNCharcb *pIbId, int *aiCode) |
|  |
| virtual | ~REngine () |
|  |

| Static Public Member Functions |
| --- |
| static int | getVersion (tsNCharcb *pVersion, int *aiCode) |
|  |

## Detailed Description

This class initiates all functionality within RApi.

The REngine class is used to connect to the infrastructure, retrieve market data, reference data and manage orders.
## Constructor & Destructor Documentation

## REngine()
     **
| REngine::REngine | ( | REngineParams * | pParams | ) |  |
| --- | --- | --- | --- | --- | --- |

This constructor will initialize its internal data structures, including the creation of an OmneEngine. The data passed via pParams will be copied into the object instance, so pParams does not need to be preserved after the constructor returns.
**Parameters**

| pParams | This instance of the REngineParams contains all of the necessary information to instantiate a REngine object. |
| --- | --- |

**Exceptions**

| An | OmneException with the relevant error code is thrown if this instance could not be instantiated. |
| --- | --- |

## ~REngine()

| REngine::~REngine | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| REngine::~REngine | ( |  | ) |  |
| --- | --- | --- | --- | --- |

All internal data structures are cleaned up and removed. This cleanup includes logging out of the infrastructure.
**Exceptions**

| An | OmneException with the relevant error code is thrown if this instance could not be destroyed. |
| --- | --- |

## Member Function Documentation

## addTimer()

| int REngine::addTimer | ( | tsNCharcb *const | pTimer, |
| --- | --- | --- | --- |
|  |  | const OmneEngineSpace::OmneTimerCB * | pTimerCB, |
|  |  | long | lFreq, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Adds a timer which will invoke the pTimerCB routine at the specified time. The name of the timer will be returned to the caller in pTimer, and should be used to manage the timer in subsequent calls.
 Any timers not removed when logging out of the infrastructure will be removed automatically.
**See also**
  REngine::removeTimer     REngine::startTimer     REngine::stopTimer
## cancelAllOrders()

| int REngine::cancelAllOrders | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pEntryType, |
|  |  | tsNCharcb * | pTradingAlgorithm, |
|  |  | tsNCharcb * | pWindowName, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method will send a request to cancel all existing orders for the specified Rithmic Account.

The return value upon successful submission of the request is OK. If an error occurs, the return value will be NOT_OK, and aiCode will contain the value of the error.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**Parameters**

| pAccount | Specifies the account on which to cancel all orders. |
| --- | --- |
| pEntryType | Specifies whether the method was called manually or automatically. |
| pTradingAlgorithm | Optionally specifies the trading algorithm placing this cancel request. |
| pWindowName | Optionally specifies a window or widget name from which this cancel order request originated. |
| aiCode | This parameter will hold the error code, if applicable. |

**See also**
  RApi::sORDER_ENTRY_TYPE_AUTO     RApi::sORDER_ENTRY_TYPE_MANUAL
## cancelOrder()

| int REngine::cancelOrder | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pOrderNum, |
|  |  | tsNCharcb * | pEntryType, |
|  |  | tsNCharcb * | pTradingAlgorithm, |
|  |  | tsNCharcb * | pUserMsg, |
|  |  | void * | pContext, |
|  |  | tsNCharcb * | pWindowName, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method will send a request to cancel the order whose unique order number is pOrderNum.

The return value upon successful submission of the request is OK. If an error occurs, the return value will be NOT_OK, and aiCode will contain the value of the error.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**Parameters**

| pAccount | This parameter specifies the account used to cancel the order. |
| --- | --- |
| pOrderNum | Identifies the order to be cancelled. |
| pEntryType | Required parameter specifying whether the cancel request was entered manually or automatically. |
| pTradingAlgorithm | Optionally specifies the trading algorithm placing this cancel request. |
| pUserMsg | Optionally specifies a new user message to associate with the order to be cancelled. If this value is NULL or empty (pUserMsg -> pData is NULL and pUserMsg -> iDataLen is zero), then any existing user message (MarketOrderParams::sUserMsg, LimitOrderParams::sUserMsg, or ModifyOrderParams::sUserMsg) will remain unmodified. |
| pContext | Specifies a new order context to associate with the order to be cancelled. If this value is NULL the order context for the order will be set to NULL. |
| pWindowName | Optionally specifies a window or widget name from which this cancel order request originated. |
| aiCode | This parameter will hold the error code, if applicable. |

**See also**
  RApi::sORDER_ENTRY_TYPE_AUTO     RApi::sORDER_ENTRY_TYPE_MANUAL
## cancelOrderList()

| int REngine::cancelOrderList | ( | AccountInfo * | aoAccountArray, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | asOrderNumArray, |
|  |  | tsNCharcb * | asEntryTypeArray, |
|  |  | tsNCharcb * | asTradingAlgorithmArray, |
|  |  | tsNCharcb * | asUserMsgArray, |
|  |  | void ** | apContextArray, |
|  |  | int | iArrayLen, |
|  |  | tsNCharcb * | pWindowName, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method will send a request to cancel a list of orders. The arrays must all contain the same number of elements, specified in iArrayLen.

The return value upon successful submission of the request is OK. If an error occurs, the return value will be NOT_OK, and aiCode will contain the value of the error.

The infrastructure will not treat the list of order cancellations as an all or nothing operation. It is possible that some orders in the list will be canceled, while others are not.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**Parameters**

| aoAccountArray | This parameter specifies an array of AccountInfo instances used to cancel each respective order. |
| --- | --- |
| asOrderNumArray | This parameter specifies an array of order numbers idenfitying the orders to be cancelled. |
| asEntryTypeArray | This parameter specifies an array of pointers to tsNCharcbs, with each string specifying if the order to be cancelled is being cancelled manually or automatically. |
| asTradingAlgorithmArray | This parameter specifies an array of pointers to tsNCharcbs, with each string specifying the trading algorithm invoking the cancel request. If no trading algorithm is specified, set the tsNCharcb::iDataLen to zero. |
| asUserMsgArray | This parameter specifies an array of pointers to tsNCharcbs, with each string being associated with the order to be cancelled. To indicate that one does not wish to update the user message, set the tsNCharcb::iDataLen to zero. |
| apContextArray | Specifies an array of new order contexts to associate with the orders to be cancelled. If this value is NULL the order context for the order will be set to NULL. |
| iArrayLen | This parameter indicates the length of the arrays. All of the array parameters must be this length. |
| pWindowName | Optionally specifies a window or widget name from which this cancel order request originated. |
| aiCode | This parameter will hold the error code, if applicable. |

**See also**
  RApi::sORDER_ENTRY_TYPE_AUTO     RApi::sORDER_ENTRY_TYPE_MANUAL
## cancelQuoteList()

| int REngine::cancelQuoteList | ( | QuoteCancelParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int | iArrayLen, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method will send a request to cancel a list of quotes.

The return value upon successful submission of the request is OK. If an error occurs, the return value will be NOT_OK, and aiCode will contain the value of the error.
**Parameters**

| pParams | This parameter specifies an array of QuoteCancelParams for the quotes to be cancelled. |
| --- | --- |
| iArrayLen | This parameter indicates the length of the QuoteCancelParams array. |
| aiCode | This parameter will hold the error code, if applicable. |

## changePassword()

| int REngine::changePassword | ( | tsNCharcb * | pOldPassword, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pNewPassword, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is for changing the currently logged on user's password. The user must be logged in and connected to the trading system connection (specified by LoginParams::sTsCnnctPt).

The return value upon successful submission of the request is OK. If an error occurs, the return value will be NOT_OK, and aiCode will contain the value of the error.
**Parameters**

| pOldPassword | The old password. |
| --- | --- |
| pNewPassword | The new password. |
| aiCode | This parameter will hold the error code, if applicable. |

## createUserDefinedSpread()

| int REngine::createUserDefinedSpread | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pExchange, |
|  |  | tsNCharcb * | pTradeRoute, |
|  |  | tsNCharcb * | pEntryType, |
|  |  | tsNCharcb * | pStrategyType, |
|  |  | int | iNumLegs, |
|  |  | tsNCharcb * | asLegTickers, |
|  |  | int * | aiLegRatios, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method submits a request to create a user-defined spread into the infrastructure.

The return value upon successful submission of the request is OK. If an error occurs, the return value will be NOT_OK, and aiCode will contain the value of the error.

The infrastructure's response to this request will be conveyed via RCallbacks::UserDefinedSpreadCreate().

When passing in a strategy type of "COMBO", each of the legs must be an option on a future.
**Parameters**

| pAccount | Account associated with the user-defined spread. Only the FCM, IB and AccountID strings need to be set. |
| --- | --- |
| pExchange | Exchange of the user defined spread. |
| pTradeRoute | Trade route to use when routing this request. This trade route must be valid for the exchange and account parameters. |
| pEntryType | Indication of whether the method was called manually (RApi::sORDER_ENTRY_TYPE_MANUAL) or automatically (RApi::sORDER_ENTRY_TYPE_AUTO). |
| pStrategyType | Strategy type of the requested user defined spread. This value must be supported by the infrastructure and exchange. Currently "COMBO" is the only such value. |
| iNumLegs | Number of legs in this user defined spread. |
| asLegTickers | Array of ticker symbols, where each symbol is a leg. The array length must match iNumLegs. |
| aiLegRatios | Array of leg ratios of each leg symbols. The array length must match iNumLegs. The Nth element of this array must match the Nth element of asLegSymbols. |
| pContext | Optionally specifies a context pointer which will be returned with the callback. |
| aiCode | Out parameter to hold the error code, if applicable. |

**See also**
  RCallbacks::UserDefinedSpreadCreate()     UserDefinedSpreadCreateInfo
## exitPosition()

| int REngine::exitPosition | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pExchange, |
|  |  | tsNCharcb * | pTicker, |
|  |  | tsNCharcb * | pEntryType, |
|  |  | tsNCharcb * | pTag, |
|  |  | tsNCharcb * | pTradingAlgorithm, |
|  |  | tsNCharcb * | pUserMsg, |
|  |  | tsNCharcb * | pWindowName, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method will send a request to exit all positions held by an account, or, if an instrument is specified, the position held by the account in that particular instrument.

The return value upon successful submission of the request is OK. If an error occurs, the return value will be NOT_OK, and aiCode will contain the value of the error.

The infrastructure's response to this request will be conveyed via RCallbacks::PositionExit().

Updates to any resultant orders will be returned via the RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called for the appropriate AccountInfo.
**Parameters**

| pAccount | Specifies the account holding the position(s). Only the FCM, IB and AccountID strings need to be set. |
| --- | --- |
| pExchange | Specifies the exchange of the instrument of the position. If the exchange is specified, the ticker must also be specified. This string should be null or empty when exiting all positions of an account. |
| pTicker | Specifies the ticker symbol of the instrument of the position. If the ticker symbol is specified, the exchange must also be specified. This string should be null or empty when exiting all positions of an account. |
| pEntryType | Specifies whether the method was called manually or automatically. |
| pTag | Optionally specifies an order tag which, will be forwarded to as the tag value for any resultant orders. |
| pTradingAlgorithm | Optionally specifies the trading algorithm placing this request. |
| pUserMsg | Optionally specifies a user msg, which will be forwarded to as the user msg value for resultant orders. |
| pWindowName | Optionally specifies a window or widget name from which this exit position request originated. This value will also be forwarded to resultant orders. |
| pContext | Optionally specifies a context pointer which will be returned with the callback. |
| aiCode | Out parameter to hold the error code, if applicable. |

**See also**
  RApi::sORDER_ENTRY_TYPE_AUTO     RApi::sORDER_ENTRY_TYPE_MANUAL     RCallbacks::PositionExit()     PositionExitInfo
## getAccounts()

| int REngine::getAccounts | ( | tsNCharcb * | pStatus, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests from the infrastructure a list of accounts that the currently logged in user can access. The list of accounts is returned in RCallbacks::AccountList(). If the request cannot be sent to the infrastructure, the return value will be NOT_OK, with *aiCode containing the error code.
**Parameters**

| pStatus | If the currently logged in user is an FCM or IB administrative user, one can optionally specify account status values to retrieve only accounts with that status. If one does not specify a status, all accounts will be returned, regardless of status. In this case the pointer value should be NULL, or the string length should be zero. If the user is a (normal) trader user id, this parameter will be ignored. |
| --- | --- |
| aiCode | out parameter to contain an error code / reason when the return value is NOT_OK. |

**See also**
  RCallbacks::AccountList()     AccountInfo     sACCOUNT_STATUS_ACTIVE     sACCOUNT_STATUS_ADMIN_ONLY     sACCOUNT_STATUS_DONE_FOR_DAY     sACCOUNT_STATUS_INACTIVE
## getAdmCallbacks()

| int REngine::getAdmCallbacks | ( | AdmCallbacks ** | apCallbacks, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns a pointer to the AdmCallbacks object passed when instantiating the REngine.
## getAdminName()

| int REngine::getAdminName | ( | tsNCharcb * | pAdminName, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the admin name of the REngine.
## getAppName()

| int REngine::getAppName | ( | tsNCharcb * | pAppName, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the app name passed to the REngine when it was instantiated.
## getAppVersion()

| int REngine::getAppVersion | ( | tsNCharcb * | pAppVersion, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the app version passed to the REngine when it was instantiated.
## getAuxRefData()

| int REngine::getAuxRefData | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests auxiliary reference data (not regular or price reference data) from the infrastructure for the specified instrument. The results of the request will be returned via RCallbacks::AuxRefData.
**See also**
  RCallbacks::AuxRefData     REngine::getPriceIncrInfo     REngine::getRefData
## getCallbacks()

| int REngine::getCallbacks | ( | RCallbacks ** | apCallbacks, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns a pointer to the RCallbacks object passed when logging in.
## getContext()

| int REngine::getContext | ( | void ** | apContext, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the context pointer passed by REngineParams when instantiating a REngine or set by REngine::setContext().
## getEasyToBorrowList()

| int REngine::getEasyToBorrowList | ( | void * | pContext, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a snapshot of the easy-to-borrow list. Normally shares are borrowed when short selling equities. This method will return the instruments on this 'easy-to-borrow' list via RCallbacks::EasyToBorrow(). Upon completion of the list, RCallbacks::EasyToBorrowList() will be invoked.

One must be logged in to the trading system connect point to call this method. Otherwise, this will return an error code of API_NO_HANDLE.
**See also**
  EasyToBorrowInfo     EasyToBorrowListInfo     REngine::subscribeEasyToBorrow()     REngine::unsubscribeEasyToBorrow()
## getEnvironment()

| int REngine::getEnvironment | ( | tsNCharcb * | pKey, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the environment identified by pKey via AdmCallbacks::Environment().
**Parameters**

| pKey | Required. Identifies the environment. If this value is null or empty, API_BAD_INPUT will be returned. If this key doesn't exist, API_NO_DATA will be returned. |
| --- | --- |
| pContext | Optional. Specifies a context pointer that will be returned with the callback conveying the results. |
| aiCode | Required. Address of an integer to contain the return code of this routine. |

**See also**
  AdmCallbacks::Environment()     EnvironmentInfo     REngine::listEnvironments()     REngine::setEnvironmentVariable()     REngine::unsetEnvironmentVariable()     Connecting to Multiple Rithmic Systems Simultaneously Using Environments
## getEquityOptionStrategyList()

| int REngine::getEquityOptionStrategyList | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pUnderlying, |
|  |  | tsNCharcb * | pStrategyType, |
|  |  | tsNCharcb * | pExpiration, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a list of strategies where the underlyings are options on equities.
- If no exchange is passed, the callback will return a list of exchanges for which supported strategies exist.
- If an exchange is passed, the callback will return a list of underlyings.
- For an underlying and exchange, a list of strategy types will be returned.
- For an underlying, exchange and strategy type, a list of expirations will be returned.
- If all the tsNCharcb parameters are passed, a list of symbols will be returned.

The intent of this method is to "drill down" to discover a list of strategies that are available.
## getIhCnnctPt()

| int REngine::getIhCnnctPt | ( | tsNCharcb * | pIhCnnctPt, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the IhCnnctPt string passed when logging in.
## getInstrumentByUnderlying()

| int REngine::getInstrumentByUnderlying | ( | tsNCharcb * | pUnderlying, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pExchange, |
|  |  | tsNCharcb * | pExpiration, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a list of instruments by underlying, exchange and expiration.
- If no underlying is passed, the callback will return a list of underlyings for which supported options exist. (InstrumentByUnderlyingInfo::pUnderlyingArray)
- If an underlying is passed, the callback will return a list of exchanges.
- If an underlying and exchange, a list of expirations will be returned.
- If an underlying, exchange and expiration are passed, the callback will return an array of RefDataInfos for the specified underlying, exchange and expiration. (InstrumentByUnderlyingInfo::asRefDataInfoArray).

The intent of this method is to "drill down" to discover a list of options that are available.
## getMdCnnctPt()

| int REngine::getMdCnnctPt | ( | tsNCharcb * | pMdCnnctPt, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the MdCnnctPt string passed when logging in.
## getOmne()

| int REngine::getOmne | ( | void ** | apOmne, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the Omne for licensees of the OMNE libraries.
## getOptionList()

| int REngine::getOptionList | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pProductCode, |
|  |  | tsNCharcb * | pExpirationCCYYMM, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a list of options.
- If no exchange is passed, the callback will return a list of exchanges for which supported options exist. (OptionListInfo::pExchangeArray)
- If an exchange is passed, the callback will return a list of product codes withing the specified exchange for which supported options exist. (OptionListInfo::pProductCodeArray).
- If an exchange and product code within that exchange is passed, the callback will return a list of expiration dates for which supported options exist. (OptionListInfo::pExpirationCCYYMMArray).
- Finally, if an exchange, a product code, and expiration date are passed, the callback will return an array of RefDataInfos for the specified exchange, product code and expiration. (OptionListInfo::asRefDataInfoArray).

The intent of this method is to "drill down" to discover a list of options that are available.
## getOrderContext()

| int REngine::getOrderContext | ( | tsNCharcb * | pOrderNum, |
| --- | --- | --- | --- |
|  |  | void ** | apContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the context pointer associated with the order specified by pOrderNum. If there is no context pointer associated with that order, the returned pointer will be set with a value of NULL.

This context pointer can be set when sending new orders or when modifying or cancelling existing orders. It can also be set explicitly by calling REngine::setOrderContext().

The context pointer is returned with order updates in LineInfo::pContext or OrderReport::pContext.
**See also**
  REngine::setOrderContext     REngine::cancelOrder     REngine::cancelOrderList     OrderParams::pContext     LimitOrderParams::pContext     MarketOrderParams::pContext     ModifyOrderParams::pContext     ModifyLimitOrderParams::pContext     ModifyStopLimitOrderParams::pContext     ModifyStopMarketOrderParams::pContext     LineInfo::pContext     OrderReport::pContext
## getPassword()

| int REngine::getPassword | ( | tsNCharcb * | pPassword, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the sTsPassword passed in LoginParams when calling REngine::login().
## getPendingInputSize()

| int REngine::getPendingInputSize | ( | int | iConnId, |
| --- | --- | --- | --- |
|  |  | unsigned long int * | aulPendingBytes, |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the number of bytes in the pending input buffer for the connection specified. This metric indicates how much data has been received by the client on this connection but is buffered while awaiting processing.
## getPnlCnnctPt()

| int REngine::getPnlCnnctPt | ( | tsNCharcb * | pPnlCnnctPt, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the PnlCnnctPt string passed when logging in.
## getPriceIncrInfo()

| int REngine::getPriceIncrInfo | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests the price increment (and price reference data) from the infrastructure for the specified instrument. The results of the request will be returned via RCallbacks::PriceIncrUpdate.

This method must be called prior to sending orders if there are no subscriptions for the instrument of interest.
**See also**
  RCallbacks::PriceIncrUpdate     REngine::sendOrder     REngine::sendOrderList
## getProductRmsInfo()

| int REngine::getProductRmsInfo | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests product rms info for an Account.
## getRefData()

| int REngine::getRefData | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests the reference data (but not price reference data) from the infrastructure for the specified instrument. The results of the request will be returned via RCallbacks::RefData.
**See also**
  RCallbacks::RefData     REngine::getPriceIncrInfo
## getStrategyInfo()

| int REngine::getStrategyInfo | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests the strategy definition from the infrastructure for the specified instrument. The results of the request will be returned via RCallbacks::Strategy. If the specified instrument is not a strategy, StrategyInfo::iRpCode will be API_NO_DATA (7) in the callback. This method is designed to work in conjunction with REngine::getStrategyList().
**See also**
  RCallbacks::Strategy     RCallbacks::StrategyList     REngine::getStrategyList
## getStrategyList()

| int REngine::getStrategyList | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pProductCode, |
|  |  | tsNCharcb * | pStrategyType, |
|  |  | tsNCharcb * | pExpirationCCYYMM, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a list of strategies.
- If no exchange is passed, the callback will return a list of exchanges for which supported strategies exist. (StrategyListInfo::pExchangeArray)
- If an exchange is passed, the callback will return a list of product codes withing the specified exchange for which supported strategies exist. (StrategyListInfo::pProductCodeArray).
- If an exchange and product code within that exchange is passed, the callback will return a list of strategy types for which supported strategies exist. (StrategyListInfo::pStrategyTypeArray).
- If an exchange and product code within that exchange and a strategy type within the product code is passed, the callback will return a list of expiration dates for which supported strategys exist. (StrategyListInfo::pExpirationCCYYMMArray).
- Finally, if an exchange, a product code, strategy type and expiration date are passed, the callback will return an array of tsNCharcbs representing the list of strategy instruments for the specified exchange, product code, strategy type and expiration. (StrategyListInfo::pTickerArray).

The intent of this method is to "drill down" to discover a list of strategies that are available. To retrieve the composition of each strategy, one can call REngine::getStrategyInfo() for that instrument.
**See also**
  RCallbacks::Strategy     RCallbacks::StrategyList     REngine::getStrategyInfo
## getTsCnnctPt()

| int REngine::getTsCnnctPt | ( | tsNCharcb * | pTsCnnctPt, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the TsCnnctPt string passed when logging in.
## getUser()

| int REngine::getUser | ( | tsNCharcb * | pUser, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the sTsUser user passed in LoginParams when calling REngine::login().
## getUserProfile()

| int REngine::getUserProfile | ( | int | iConnId, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Retrieves user profile information for the currently logged in user from the infrastructure on the specified connection. The context pointer will be returned with the callback. This call is not supported on the repository connection or on Diamond Cutter connections.
**See also**
  RCallbacks::UserProfile     UserProfileInfo    MARKET_DATA_CONNECTION_ID     TRADING_SYSTEM_CONNECTION_ID     PNL_CONNECTION_ID     INTRADAY_HISTORY_CONNECTION_ID
## getVersion()

| int REngine::getVersion | ( | tsNCharcb * | pVersion, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

   static
| int REngine::getVersion | ( | tsNCharcb * | pVersion, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Returns the version of the R | API.
## getVolumeAtPrice()

| int REngine::getVolumeAtPrice | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests the volumes traded at each price since the beginning of trading session for a given instrument. The results will be returned in RCallbacks::VolumeAtPrice(). The intent of this routine is to provide a snapshot of the volumes at each price. One must be subscribing to trades to maintain the volumes after receiving the snapshot. The context will be returned with the results in VolumeAtPriceInfo::pContext.
**See also**
  RCallbacks::VolumeAtPrice     VolumeAtPriceInfo     REngine::subscribe     MD_PRINTS
## isThereAnAggregator()
     **
| int REngine::isThereAnAggregator | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This method asks the infrastructure if there is a market data aggregator behind the market data connect point.

The return value upon successful submission of the request is OK. If an error occurs, the return value will be NOT_OK, and aiCode will contain the value of the error. An error code of 11 (API_NO_HANDLE) indicates that there is no market data connection to make this query on.
**Parameters**

| aiCode | This parameter will hold the error code, if applicable. |
| --- | --- |

**See also**
  RCallbacks::Aggregator()     AggregatorInfo
## linkOrders()

| int REngine::linkOrders | ( | AccountInfo * | aoAccountArray, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | asOrderNumArray, |
|  |  | int | iArrayLen, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method will send a request to link orders into an OCO group. Orders must have equivalent unfilled quantities in order to be linked. Also, they
 cannot be part of an existing OCO group. After orders are linked, their quantities to fill will be synchronized by servers-side processes. The orders will be linked with FOCCA (fill-or-cancel-cancels-all) and dni (do not increase) specified. The dni quantity condition means that the order quantities cannot be increased.

A common use of linking orders may be to synchronize two exit orders, one for the profit and the other for the stop loss.

There is no mechanism to unlink orders.

The return value of this routine indicates whether this request was sent to the network. If it was successful, the return value is OK. If not, the return value will be NOT_OK, and aiCode will contain an error code.

Updates to these orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**Parameters**

| aoAccountArray | Specifies the accounts of each order to be linked. The nth element of this array corresponds to the nth element of the asOrderNumArray. |
| --- | --- |
| asOrderNumArray | Specifies the order numbers of the orders to be linked. |
| iArrayLen | Specifies the length of the account and order number arrays. |
| aiCode | Specifies the error code, if this routine returns NOT_OK. |

**See also**
  sORDER_OPERATION_TYPE_FOCCA
## listAgreements()

| int REngine::listAgreements | ( | bool | bAccepted, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests the list of agreements for the Rithmic system connected to via REngine::loginRepository(). Please read the FAQ on agreements : FAQ - Agreements
**Parameters**

| bAccepted | true indicates that a list of accepted agreements is being requested |
| --- | --- |
| pContext | a convenience pointer which will be returned in the callback |
| aiCode | an 'out' parameter indicating the error code, if the routine returns NOT_OK |

**Returns**
  OK if the request has been sent successfully.    NOT_OK if the request has not been sent successfully. The 'out' parameter will be set to the error code. If there is no connection to the repository connect point, this routine will return NOT_OK, and the *aiCode will have a value of API_NO_HANDLE. In this case, one must first log into the repository sub-system using REngine::loginRepository().
**See also**
  REngine::loginRepository     REngine::logoutRepository     RCallbacks::AgreementList     AgreementListInfo     AgreementInfo
## listAssignedUsers()

| int REngine::listAssignedUsers | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a list of user ids that have permissions to trade on the specified account. The currently logged in user must be an FCM or IB administrator for the specified account. The AccountInfo just needs to have the FcmId, IbId and AccountId strings set.
**See also**
  RCallbacks::UserList()     UserListInfo
## listBinaryContracts()

| int REngine::listBinaryContracts | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pProductCode, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a list of binary contracts.
- If no exchange is passed, the callback will return a list of exchanges for which supported binary contracts exist. (BinaryContractListInfo::pExchangeArray)
- If an exchange is passed, the callback will return a list of product codes within the specified exchange for which supported binary contracts exist (BinaryContractListInfo::pProductCodeArray).
- If an exchange and product code are passed into the method, the callback will return a list of RefDataInfo objects representing all matching binary contracts in that product code within that exchange. (BinaryContractListInfo::asRefDataInfoArray).

The intent of this method is to "drill down" to discover a list of binary contracts that are available.

FAQ - Binary Contracts
**See also**
  BinaryContractListInfo     RCallbacks::BinaryContractList     REngine::subscribeByUnderlying
## listEnvironments()

| int REngine::listEnvironments | ( | void * | pContext, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Retrieves a list of all available environment keys, including the default environment of "system" from REngineParams::envp. The list will be returned via AdmCallbacks::EnvironmentList().
**Parameters**

| pContext | Optional. Specifies a context pointer that will be returned with the callback conveying the results. |
| --- | --- |
| aiCode | Required. Address of an integer to contain the return code of this routine. |

**See also**
  AdmCallbacks::EnvironmentList()     EnvironmentListInfo     REngine::getEnvironment()     REngine::setEnvironmentVariable()     REngine::unsetEnvironmentVariable()     Connecting to Multiple Rithmic Systems Simultaneously Using Environments
## listExchanges()

| int REngine::listExchanges | ( | void * | pContext, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Retrieves the list of available exchanges.
## listIbs()

| int REngine::listIbs | ( | void * | pContext, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a list of introducing brokers (IBs) associated with the FCM of the currently logged in FCM administrator. If the currently logged in user is not an FCM administrator, or if it cannot be determined if the currently logged in user is an FCM administrator, this method will return NOT_OK.
**See also**
  RCallbacks::IbList()     IbListInfo
## listOrderHistoryDates()

| int REngine::listOrderHistoryDates | ( | void * | pContext, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Retrieves the list of available dates for order history.

Typically one might call REngine::listOrderHistoryDates() to get a list of available dates, followed by REngine::replayHistoricalOrders() to get a snapshot of orders for that date. Afterwards, one might call REngine::replaySingleHistoricalOrder() to get additional detail on any of the snapshots.
## listTradeRoutes()

| int REngine::listTradeRoutes | ( | void * | pContext, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Retrieves the list of available trade routes (snapshot).
**See also**
  RCallbacks::TradeRouteList()     What are trade routes and how do I use them?
## listUsers()

| int REngine::listUsers | ( | tsNCharcb * | pIbId, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pUserType, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Retrieves the list of users within the specified IB and having the specified user type.

This method can only be invoked by FCM administrator, who can retrieve user information of any IB, or an IB administrator, who can only retrieve information of their own users.

This method can be used retrieve user information snapshots to which updates from REngine::subscribeUser() can be applied.
**Parameters**

| pIbId | IB of the users to retrieve |
| --- | --- |
| pUserType | User type of the users to retrieve (traders or IB administrators) |
| pContext | Convenience pointer which is returned in the callbacks |
| aiCode | Out parameter to contain the error code, if applicable. |

**See also**
  RCallbacks::User()     RCallbacks::UserList()     UserInfo     UserListInfo     sUSER_TYPE_IB     sUSER_TYPE_TRADER     REngine::subscribeUser()     REngine::unsubscribeUser()
## lock()
     **
| int REngine::lock | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

Locks the same mutex as used by the REngine internally. This routine will block until the lock can be obtained.

If the lock is obtained, this routine will return OK (1). If the calling thread already has this lock, a lock count will be incremented and the routine will return OK (1).

If the lock cannot be obtained the routine will return NOT_OK (0).

For each successful call to REngine::tryLock() and/or REngine::lock(), a corresponding call to REngine::unlock() must be made to release the lock.
 The lock will be released when the lock count goes to zero.
**See also**
  REngine::lock     REngine::unlock     REngine::tryLock
## login()

| int REngine::login | ( | LoginParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Logs into the system. This routine will return OK with *aiCode equal to API_OK if the authentication credentials were sent successfully. The evaluation of the authentication credentials happens asynchronously, and the results of that evaluation will be made known to the caller via calls to RCallbacks::Alert().
**See also**
  Connections     LoginParams
## loginRepository()

| int REngine::loginRepository | ( | tsNCharcb * | pEnvKey, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pUser, |
|  |  | tsNCharcb * | pPassword, |
|  |  | tsNCharcb * | pCnnctPt, |
|  |  | RCallbacks * | pCallbacks, |
|  |  | int * | aiCode |
|  | ) |  |  |

Logs in to the repository sub-system. This connection is necessary to retrieve information about the status of any digital agreements. Please read the FAQ on agreements : FAQ - Agreements
**Parameters**

| pEnvKey | key identifying the environment to use when establishing this connection. If this is null or empty, RApi::sDEFAULT_ENVIRONMENT_KEY will be used. |
| --- | --- |
| pUser | user id |
| pPassword | password |
| pCnnctPt | connect point to the repository sub-system |
| pCallbacks | RCallbacks instance on which repository callbacks will be invoked |
| aiCode | 'out' parameter indicating the error code, if the routine returns NOT_OK |

**Returns**
  OK if the login request has been sent successfully. (The login can still fail, but the failure will be conveyed via RCallbacks::Alert().)    NOT_OK if the login request has not been sent successfully. The 'out' parameter will be set to the error code.
**See also**
  REngine::loginRepository     REngine::logoutRepository     REngine::listAgreements     RCallbacks::AgreementList     AgreementListInfo     AgreementInfo
## logout()
     **
| int REngine::logout | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

Logs out of the infrastructure. Any internal data structures specific to the session are cleaned up and removed.
## logoutRepository()
     **
| int REngine::logoutRepository | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

Logs out of the repository sub-system. Please read the FAQ on agreements : FAQ - Agreements
**Parameters**

| aiCode | 'out' parameter indicating the error code, if the routine returns NOT_OK |
| --- | --- |

**Returns**
  OK if the logout has been successful.    NOT_OK if the logout has not been successful. The 'out' parameter will be set to the error code.
**See also**
  REngine::loginRepository     REngine::logoutRepository     RCallbacks::AgreementList     AgreementListInfo     AgreementInfo
## modifyBracketTier()

| int REngine::modifyBracketTier | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pOrderNum, |
|  |  | bool | bTarget, |
|  |  | int | iOldTickOffset, |
|  |  | int | iNewTickOffset, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This routine requests a modification to an exit tier of a bracket order. The quantity associated with the old tick offset is moved to the new tick offset. Whether the exit tier is a target profit or stop loss is specified by the flag (bTarget of true meaning modify the target profit tier).

The context pointer (pContext) will be returned in the associated callback in BracketTierModifyInfo::pContext.

Please keep in mind that the quantities represented by the exit tiers must match equal the quantity of the entry order. A reduction of quantity of the entry will cause a similar reduction in the quantity of the exit tiers. The entry order quantity can be modified normally, i.e. with REngine::modifyOrder() or REngine::modifyOrderList().
**See also**
  RCallbacks::BracketTierModify     BracketTierModifyInfo
## modifyOrder() [1/4]

| int REngine::modifyOrder | ( | ModifyLimitOrderParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a modification to an existing limit order. The order is identified by ModifyOrderParams::sOrderNum.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**See also**
  RCallbacks::LineUpdate     RCallbacks::BustReport     RCallbacks::CancelReport     RCallbacks::FailureReport     RCallbacks::FillReport     RCallbacks::ModifyReport     RCallbacks::NotCancelledReport     RCallbacks::NotModifiedReport     RCallbacks::OtherReport     RCallbacks::RejectReport     RCallbacks::StatusReport     REngine::subscribeOrder     REngine::replayOpenOrders
## modifyOrder() [2/4]

| int REngine::modifyOrder | ( | ModifyOrderParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a modification to an existing order. The order is identified by ModifyOrderParams::sOrderNum.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**See also**
  ModifyOrderParams     REngine::modifyOrderList     RCallbacks::LineUpdate     RCallbacks::BustReport     RCallbacks::CancelReport     RCallbacks::FailureReport     RCallbacks::FillReport     RCallbacks::ModifyReport     RCallbacks::NotCancelledReport     RCallbacks::NotModifiedReport     RCallbacks::OtherReport     RCallbacks::RejectReport     RCallbacks::StatusReport     REngine::subscribeOrder     REngine::replayOpenOrders
## modifyOrder() [3/4]

| int REngine::modifyOrder | ( | ModifyStopLimitOrderParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a modification to an existing stop limit order. The order is identified by ModifyOrderParams::sOrderNum.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**See also**
  RCallbacks::LineUpdate     RCallbacks::BustReport     RCallbacks::CancelReport     RCallbacks::FailureReport     RCallbacks::FillReport     RCallbacks::ModifyReport     RCallbacks::NotCancelledReport     RCallbacks::NotModifiedReport     RCallbacks::OtherReport     RCallbacks::RejectReport     RCallbacks::StatusReport     REngine::subscribeOrder     REngine::replayOpenOrders
## modifyOrder() [4/4]

| int REngine::modifyOrder | ( | ModifyStopMarketOrderParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a modification to an existing stop market order. The order is identified by ModifyOrderParams::sOrderNum.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**See also**
  ModifyOrderParams     RCallbacks::LineUpdate     RCallbacks::BustReport     RCallbacks::CancelReport     RCallbacks::FailureReport     RCallbacks::FillReport     RCallbacks::ModifyReport     RCallbacks::NotCancelledReport     RCallbacks::NotModifiedReport     RCallbacks::OtherReport     RCallbacks::RejectReport     RCallbacks::StatusReport     REngine::subscribeOrder     REngine::replayOpenOrders
## modifyOrderList()

| int REngine::modifyOrderList | ( | ModifyOrderParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int | iArrayLen, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a modification to a list of existing orders. The orders are identified by each ModifyOrderParams::sOrderNum in the array of ModifyOrderParams.

Once the modify request is received by the infrastructure, the parameters undergo minimal validation before being forwarded on as a normal modify order request. If any order in the list fails the initial minimal validation, the entire list of modifies will fail. However, if all orders in the list pass the initial minimal validation, the modifies will be handled as individual modify requests, with each order's modify having its own success/failure outcome.

The intent of this routine is to allow groups of time-sensitive order modifications to be requested at once, minimizing threading and network overhead.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**See also**
  RCallbacks::LineUpdate     RCallbacks::BustReport     RCallbacks::CancelReport     RCallbacks::FailureReport     RCallbacks::FillReport     RCallbacks::ModifyReport     RCallbacks::NotCancelledReport     RCallbacks::NotModifiedReport     RCallbacks::OtherReport     RCallbacks::RejectReport     RCallbacks::StatusReport     REngine::subscribeOrder     REngine::replayOpenOrders
## modifyOrderRefData()

| int REngine::modifyOrderRefData | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pOrderNum, |
|  |  | tsNCharcb * | pUserMsg, |
|  |  | tsNCharcb * | pUserTag, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is for changing user strings associated with a particular order.

The return value upon successful submission of the request is OK. If an error occurs, the return value will be NOT_OK, and aiCode will contain the value of the error. Updates to the order will be conveyed through the normal order update mechanisms (OrderReports and/or LineInfo updates).
**Parameters**

| pAccount | Account of the order. Required. |
| --- | --- |
| pOrderNum | Order number identifying the order. Required. |
| pUserMsg | New user message to associate with the order. The value pUserMsg can be NULL or point to an empty tsNCharcb to leave the existing value. However, either this value or pUserTag must be specified, otherwise 'bad input' will be returned. |
| pUserTag | New user tag to associate with the order. The value pUserTag can be NULL or point to and empty tsNCharcb to leave the existing value. However, either this value or pUserTag must be specified, otherwise 'bad input' will be returned. |
| aiCode | This parameter will hold the error code, if applicable. |

## ping()

| int REngine::ping | ( | int | iConnId, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Measures the round-trip time on the specified connection. The start time stamp is taken within the routine, just before the message is sent on the network. The client-facing edge of the infrastructure will return the message. As such, this routine does not measure transit time through the Rithmic infrastructure, only the round-trip time to the edge of the infrastructure and back. The PingInfo provides the send and receipt times in the associated callback RCallbacks::Ping().
**See also**
  RCallbacks::Ping     PingInfo    MARKET_DATA_CONNECTION_ID     TRADING_SYSTEM_CONNECTION_ID     PNL_CONNECTION_ID     INTRADAY_HISTORY_CONNECTION_ID     REPOSITORY_CONNECTION_ID
## rebuildBook()

| int REngine::rebuildBook | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests an order book image for the instrument specified.
 The order book image is fetched dynamically, and is returned to the user via RCallbacks::LimitOrderBook().
## rebuildDboBook()

| int REngine::rebuildDboBook | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | bool | bPrice, |
|  |  | double | dPrice, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests an order book image for the instrument specified. The order book image will be provided using depth-by-order (dbo) data. The individual orders will be returned via RCallbacks::Dbo() and the conclusion of the returned data will be indicated by RCallbacks::DboBookRebuild().

One can optionally specify a price (by setting bPrice to true). When a price is specified, only the orders comprising this price level will be returned (rather than the entire order book, which can be large). This parameter can be useful to conserve resource utilization.

One can optionally specify a context pointer, which will be returned in DboBookRebuildInfo::pContext via RCallbacks::DboBookRebuild().

When maintaining an order book using dbo data, one should subscribe to dbo updates prior to calling this method. As dbo data is returned, one can construct the book. Data returned by the subscription will have an DboInfo::iType of MD_UPDATE_CB, whereas data returned by this method will have an DboInfo::iType of MD_IMAGE_CB. If dbo data for the same exchange order id is received one or more times prior to the conclusion of the dbo order book image (ie. prior to RCallbacks::DboBookRebuild() being invoked), one should prefer callback types of MD_UPDATE_CB as being more current.

As of this writing, dbo order book images for Globex market data feeds do not include implied quantities.

To request an order book image by price, use REngine::rebuildBook() instead.

What is DBO data and how might I use it?
**See also**
  DboInfo     DboBookRebuildInfo     REngine::subscribeDbo()     RCallbacks::Dbo()     RCallbacks::DboBookRebuild()
## removeTimer()

| int REngine::removeTimer | ( | tsNCharcb *const | pTimer, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Removes the timer specified by pTimer.
**See also**
  REngine::addTimer     REngine::startTimer     REngine::stopTimer
## replayAllOrders()

| int REngine::replayAllOrders | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int | iStartSsboe, |
|  |  | int | iEndSsboe, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests snapshots of all orders from the current trading session placed under the specifed account. Within the current trading day, one can specify a time range to filter out orders. The time range is specified with a starting and ending ssboe (seconds since the beginning of epoch, which is Jan 1, 1970 00:00:00). The ssboe is sometimes known as unix time.

If iStartSsboe and iEndSsboe are zero, the time range will not be used and all orders from the current trading session will be returned.

The results of the request will be returned via RCallbacks::OrderReplay.

To retrieve snapshots of orders from prior trading sessions, one should use REngine::replayHistoricalOrders().
**See also**
  RCallbacks::OrderReplay     REngine::replayOpenOrders     REngine::subscribeOrder     How do I maintain order state?
## replayBars()

| int REngine::replayBars | ( | ReplayBarParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

This method requests market data in the form of bars/candlesticks. There are a number of different bar types, including time bars, tick bars, range bars, and volume bars.

As data is received, RCallbacks::Bar() will be invoked, conveying the bar data via BarInfo. When the data is complete, RCallbacks::BarReplay() will be invoked, indicating that the replayed data is complete. BarReplayInfo may indicate an error condition in BarReplayInfo::iRpCode.

If the returned bars does not include data for the entire requested time period, and/or if the number of returned bars is a round number (such as 10000), then it is possible that the request was truncated. One can request the missing bars by shifting the time period of the original request to cover the truncated data. This truncation can occur when large amounts of data are requested.

To use this method, one must log in and be connected to the history plant (LoginParams::sIhCnnctPt), otherwise one will get a response of NOT_OK, where the error code (*aiCode) is API_NO_HANDLE (11).
**See also**
  LoginParams::sIhCnnctPt     ReplayBarParams     RCallbacks::Bar     RCallbacks::BarReplay
## replayBrackets()

| int REngine::replayBrackets | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

This routine requests bracket-specific information for all open bracket orders for an Account from the infrastructure. The results of this request will be returned via RCallbacks::BracketReplay().

Please Note : This routine retrieves bracket-specific information only, so one should call REngine::replayOpenOrders() to get other information about these same bracket orders. (The two routines work in conjunction with each other.)
**See also**
  REngine::replayOpenOrders     RCallbacks::BracketReplay     BracketReplayInfo
## replayExecutions()

| int REngine::replayExecutions | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int | iStartSsboe, |
|  |  | int | iEndSsboe, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a list of all available fills from the infrastructure with a timestamp on or between the range specified by a starting 'second since the begining of the epoch' (ssboe) and an ending ssboe. Only fills from the current trading day are available, regardless of how early the starting ssboe is. The returned set of fills will include fills from quotes.

The beginning of epoch is Jan 1, 1970 00:00:00 GMT.

If iStartSsboe and iEndSsboe are zero, the time range will not be used and all fills for the current trading day will be returned by the infrastructure.

The results of the request will be returned via RCallbacks::ExecutionReplay.
**See also**
  REngine::replayExecutions()     RCallbacks::ExecutionReplay()     ExecutionReplayInfo
## replayHistoricalOrders()

| int REngine::replayHistoricalOrders | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pDate, |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a list of all orders from the infrastructure on the specified date for the specified account.

One first calls REngine::listOrderHistoryDates() to get a list of available dates, followed by REngine::replayHistoricalOrders() to get a snapshot of orders from that date. Afterwards, one can call REngine::replaySingleHistoricalOrder() to get additional detail on any specific order. The date format should be CCYYMMDD.

The results of the request will be returned via RCallbacks::OrderReplay.
**See also**
  RCallbacks::OrderReplay
## replayOpenOrders()

| int REngine::replayOpenOrders | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests a list of all open orders from the infrastructure. The results of the request will be returned via RCallbacks::OpenOrderReplay.

To retrieve snapshots of orders from prior trading sessions, one should use REngine::replayHistoricalOrders().
**See also**
  RCallbacks::OpenOrderReplay     REngine::replayAllOrders     REngine::subscribeOrder     How do I maintain order state?
## replayPnl()

| int REngine::replayPnl | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Requests pnl information from the infrastructure. The results of the request will be returned via RCallbacks::PnlReplay. The AccountInfo::pRmsInfo value is ignored. Connecting to the pnl connect point is required.
**See also**
  LoginParams::sPnlCnnctPt     REngine::subscribePnl     REngine::unsubscribePnl     RCallbacks::PnlReplay     RCallbacks::PnlUpdate     PnlReplayInfo     PnlInfo
## replayQuotes()

| int REngine::replayQuotes | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method requests snapshots of all quotes for an account.
 The snapshots will be conveyed via RCallbacks::Quote(QuoteInfo *, void *, int *) where the callbacks will fire as if the quote were updating from the real time data stream with a couple differences.

First, the callback type of the updates (QuoteInfo::iType) will have a value of RApi::MD_HISTORY_CB, identifying the update as historical. Second, the sequence of the callbacks may not be in the original order.

A call to RCallbacks::QuoteReplay() will be made indicating the response code for the replaying and the conclusion of the callbacks.
**Parameters**

| pAccount | Specifies the account under which the quote was placed |
| --- | --- |
| pContext | Optional context pointer which is returned in QuoteReplayInfo::pContext |
| aiCode | Out parameter holding the error code, if applicable. |

**See also**
  QuoteInfo::iType     RCallbacks::Quote     RCallbacks::QuoteReplay     QuoteReplayInfo
## replaySingleHistoricalOrder()

| int REngine::replaySingleHistoricalOrder | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pOrderNum, |
|  |  | tsNCharcb * | pDate, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method requests the replaying of a specified order. The same callbacks will fire as if the order were updating from the real time data stream with a couple differences. First, the callback type of the updates (LineInfo::iType or OrderReport::iType) will have a value of RApi::MD_HISTORY_CB, identifying the update as historical. Second, the sequence of the callbacks may not be in the original order.

Typically one might call REngine::listOrderHistoryDates() to get a list of available dates, followed by REngine::replayHistoricalOrders() to get a snapshot of orders for that date. Afterwards, one might call REngine::replaySingleHistoricalOrder() to get additional detail on any of the snapshots.

REngine::setOrderContext() can be called prior to calling this method if there is a need to ensure the context pointer associated with the order is returned with each callback.

A call to RCallbacks::SingleOrderReplay() will be made indicating the response code for this request as well as to indicate its conclusion.
**Parameters**

| pAccount | Specifies the account under which the order was placed |
| --- | --- |
| pOrderNum | Specifies the order to be replayed. The order number must match the date. |
| pDate | Specifies the date of the order to be replayed in CCYYMMDD format. |
| pContext | Optional context pointer which is returned in SingelOrderReplayInfo::pContext |
| aiCode | Out parameter holding the error code, if applicable. |

**See also**
  LineInfo::iType     OrderReport::iType     REngine::setOrderContext     RCallbacks::SingleOrderReplay     SingleOrderReplayInfo
## replaySingleOrder()

| int REngine::replaySingleOrder | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pOrderNum, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method requests the replaying of a specified order. The same callbacks will fire as if the order were updating from the real time data stream with a couple differences. First, the callback type of the updates (LineInfo::iType or OrderReport::iType) will have a value of RApi::MD_HISTORY_CB, identifying the update as historical. Second, the sequence of the callbacks may not be in the original order.

REngine::setOrderContext() can be called prior to calling this method if there is a need to ensure the context pointer associated with the order is returned with each callback.

A call to RCallbacks::SingleOrderReplay() will be made indicating the response code for the replaying.
**Parameters**

| pAccount | Specifies the account under which the order was placed |
| --- | --- |
| pOrderNum | Specifies the order to be replayed |
| pContext | Optional context pointer which is returned in SingelOrderReplayInfo::pContext |
| aiCode | Out parameter holding the error code, if applicable. |

**See also**
  LineInfo::iType     OrderReport::iType     REngine::setOrderContext     RCallbacks::SingleOrderReplay     SingleOrderReplayInfo
## replayTrades()

| int REngine::replayTrades | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | int | iStartSsboe, |
|  |  | int | iEndSsboe, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is used to request intraday market data trade history. The history is intraday, going back to the beginning of the trading session.
 An optional time range can be specified by a starting ssboe (seconds since the beginning of epoch, which is Jan 1, 1970 00:00:00) and an ending ssboe. Both of these times will be in the GMT timezone.

If iStartSsboe and iEndSsboe are zero, the time range will not be used and all trades for the current trading day will be returned by the infrastructure.

Trades which are returned as a result of this call will be conveyed by calls to RCallbacks::TradePrint(), where TradeInfo::iType will have a value of RApi::MD_HISTORY_CB. After all of the Trades have been processed (there may be none), RCallbacks::TradeReplay() will be called to indicate that the replaying is done. It will also be used to indicate any error conditions encountered, if any.

This method requires that LoginParams::sIhCnnctPt be specified when logging in. An error code of 'no handle' (11) will be returned if not.
**See also**
  RCallbacks::TradePrint()     RCallbacks::TradeReplay()     LoginParams::sIhCnnctPt
## resumeInput()
     **
| int REngine::resumeInput | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

Resumes input for the market data stream. This routine works in conjunction with the REngine::suspendInput routine.
## searchInstrument()

| int REngine::searchInstrument | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | SearchTerm * | asTerms, |
|  |  | int | iNumTerms, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

This routine is used to search for instruments within an exchange, using at least one search term. The behavior of the search is controlled using the SearchTerm class. This class controls whether the search term is case-insensitive, which fields it matches against, and the type of string comparison operation is used.

Results will be returned via RCallbacks::InstrumentSearch().

Because this call is resource-intensive within the infrastructure, only a single in-flight search will be permitted at a time. If there is already an in-flight search happening, this method will return NOT_OK, with an error code of API_HANDLE_IN_USE. One can make subsequent calls from within RCallbacks::InstrumentSearch() if one needs to conduct more searches.
**Parameters**

| pExchange | Required, specifies the exchange to search within. The value is case sensitive and must match the exchange entirely (SearchOperator::Equals) |
| --- | --- |
| asTerms | Pointer to an array of SearchTerms. There must be at least one search term. Each element of this array is ANDed together when forming the complete search criteria. |
| iNumTerms | Length of the array asTerms. |
| pContext | Context pointer returned with the results. |
| aiCode | Error code (out parameter) |

**See also**
  RCallbacks::InstrumentSearch()     InstrumentSearchInfo     SearchTerm
## sendBracketOrder() [1/2]

| int REngine::sendBracketOrder | ( | OrderParams * | pEntry, |
| --- | --- | --- | --- |
|  |  | BracketParams * | pBracketParams, |
|  |  | int * | aiCode |
|  | ) |  |  |

This routine is used to place bracket orders. A bracket order consists of one entry order and N exit orders. As the entry order gets filled (or partially filled), R | Trade Execution Platform automatically places the configured exit order(s).

The following are types of bracket orders, which govern how many exit orders are placed for each fill, and how the prices of those exit orders are determined.
-  target and stop - Two exit orders, a profit target limit order and stop (loss) market order, bracketing the entry position are placed. This pair of orders will be placed as a pair of One-Cancels-All (OCA) orders. The exit prices are determined by the entry fill price.
-  target only - One target limit order is placed. The exit price is determined by the entry fill price.
-  stop only - One stop (loss) market order is placed. The exit price is determined by the entry fill price.
-  target and stop static - Two exit orders, a profit target limit order and stop (loss) market order, bracketing the entry position are placed. This pair of orders will be placed as a pair of One-Cancels-All orders. The exit prices are determined by the entry limit price, if available.
 Otherwise the exit prices are determined by the entry fill price.
-  target only static - One target limit order is placed. The exit prices are determined by the entry limit price, if available.
 Otherwise the exit prices are determined by the entry fill price.
-  stop only static - One stop (loss) market order is placed. The exit prices are determined by the entry limit price, if available.
 Otherwise the exit prices are determined by the entry fill price.

The exit order prices are determined by tick offsets from the entry price. One can configure different tick offsets for each entry quantity on both the target and stop sides. As the entry order gets filled, the trading platform will place exit orders accordingly.

For example, if an entry order for a buy quantity of 6 is filled, the bracket may be configured to close the position and take profits by placing an order to sell a quantity of 2, 1 tick above the price at which the 6 were filled, a quantity of 2, 2 ticks above the price at which the 6 were filled and a quantity of 2, 3 ticks above the price at which the 6 were filled. Correspondingly, the bracket may be configured to dump 3 at market when the price of the instrument falls 5 ticks below the price at which the 6 were filled and 3 at market when the price of the instrument falls 7 ticks below the price at which the 6 were filled.

NOTE : Once placed, the quantity of bracket entry orders cannot be increased, but can still be decreased. The price of the entry order can be modified as a normal order.

NOTE : When placing bracket orders which include both a target and stop (including target and stop static), the sum of the exit quantities defined must equal the entry quantity.

NOTE : For bracket orders which are not target and stop, if the sum of the exit quantities are less than the entry order, exit orders will not be placed for the undefined entry quantities. If the sum of the exit quantities exceed the entry order quantity, the tiers which don't apply will be ignored.
**Parameters**

| pEntry | OrderParams object which specifies the entry order. |
| --- | --- |
| pBracketParams | BracketParams object which conveys bracket specific functionality. |
| aiCode | Error code (out parameter) |

## sendBracketOrder() [2/2]

| int REngine::sendBracketOrder | ( | OrderParams * | pEntry, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pBracketType, |
|  |  | tsNCharcb * | pOrderOperationType, |
|  |  | bool | bTrailingStop, |
|  |  | int | iTrailByPriceId, |
|  |  | int | iTargetArrayLen, |
|  |  | int * | pTargetQty, |
|  |  | int * | pTargetTicks, |
|  |  | int | iStopArrayLen, |
|  |  | int * | pStopQty, |
|  |  | int * | pStopTicks, |
|  |  | int * | aiCode |
|  | ) |  |  |

This routine has been deprecated. Please use the other REngine::sendBracketOrder() routine which uses BracketParams.
## sendOcaList()

| int REngine::sendOcaList | ( | tsNCharcb * | pOcaType, |
| --- | --- | --- | --- |
|  |  | OrderParams * | pParamsArray, |
|  |  | int | iArrayLen, |
|  |  | int * | aiCode |
|  | ) |  |  |

This routine is used to send sets of One-Cancels-All orders.
 One-Cancels-All means that one order's status causes the cancellation of the remaining orders. There are different types of OCA behaviors. The logic is handled on the server side.
**Parameters**

| pOcaType | Pointer to tsNCharcb which indicates the type of OCA (order operation type) |
| --- | --- |
| pParamsArray | Pointer to an OrderParams array which specifies the set of OCA orders. |
| iArrayLen | Length of the array pParamsArray |
| aiCode | Error code (out parameter) |

**See also**
  OrderParams     sORDER_OPERATION_TYPE_FOCCA     sORDER_OPERATION_TYPE_FCA     sORDER_OPERATION_TYPE_CCA
## sendOrder() [1/4]

| int REngine::sendOrder | ( | LimitOrderParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Sends a limit order to the infrastructure.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**See also**
  RCallbacks::LineUpdate     RCallbacks::BustReport     RCallbacks::CancelReport     RCallbacks::FailureReport     RCallbacks::FillReport     RCallbacks::ModifyReport     RCallbacks::NotCancelledReport     RCallbacks::NotModifiedReport     RCallbacks::OtherReport     RCallbacks::RejectReport     RCallbacks::StatusReport     REngine::subscribeOrder     REngine::replayOpenOrders     REngine::modifyOrder
## sendOrder() [2/4]

| int REngine::sendOrder | ( | MarketOrderParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Sends a market order to the infrastructure.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**See also**
  RCallbacks::LineUpdate     RCallbacks::BustReport     RCallbacks::CancelReport     RCallbacks::FailureReport     RCallbacks::FillReport     RCallbacks::ModifyReport     RCallbacks::NotCancelledReport     RCallbacks::NotModifiedReport     RCallbacks::OtherReport     RCallbacks::RejectReport     RCallbacks::StatusReport     REngine::subscribeOrder     REngine::replayOpenOrders     REngine::modifyOrder
## sendOrder() [3/4]

| int REngine::sendOrder | ( | StopLimitOrderParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Sends a stop limit order to the infrastructure.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**See also**
  RCallbacks::LineUpdate     RCallbacks::BustReport     RCallbacks::CancelReport     RCallbacks::FailureReport     RCallbacks::FillReport     RCallbacks::ModifyReport     RCallbacks::NotCancelledReport     RCallbacks::NotModifiedReport     RCallbacks::OtherReport     RCallbacks::RejectReport     RCallbacks::StatusReport     REngine::subscribeOrder     REngine::replayOpenOrders     REngine::modifyOrder
## sendOrder() [4/4]

| int REngine::sendOrder | ( | StopMarketOrderParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Sends a stop market order to the infrastructure.

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**See also**
  RCallbacks::LineUpdate     RCallbacks::BustReport     RCallbacks::CancelReport     RCallbacks::FailureReport     RCallbacks::FillReport     RCallbacks::ModifyReport     RCallbacks::NotCancelledReport     RCallbacks::NotModifiedReport     RCallbacks::OtherReport     RCallbacks::RejectReport     RCallbacks::StatusReport     REngine::subscribeOrder     REngine::replayOpenOrders     REngine::modifyOrder
## sendOrderList()

| int REngine::sendOrderList | ( | OrderParams * | pParamsArray, |
| --- | --- | --- | --- |
|  |  | int | iArrayLen, |
|  |  | int * | aiCode |
|  | ) |  |  |

Sends a list of orders to the infrastructure. If any of the orders fail validation (such as risk management), none will be sent to the exchange.

Because this method engages in one request/response handshake between the api and the infrastructure for N orders, rather than N handshakes, the performance characteristics of this method may differ (be preferable) to the performance characteristics of REngine::sendOrder().

Updates to orders will be returned via RCallbacks::LineUpdate and the RCallbacks::*Report methods, provided REngine::subscribeOrder() has been called passing the appropriate AccountInfo.
**See also**
  RCallbacks::LineUpdate     RCallbacks::BustReport     RCallbacks::CancelReport     RCallbacks::FailureReport     RCallbacks::FillReport     RCallbacks::ModifyReport     RCallbacks::NotCancelledReport     RCallbacks::NotModifiedReport     RCallbacks::OtherReport     RCallbacks::RejectReport     RCallbacks::StatusReport     REngine::subscribeOrder     REngine::replayOpenOrders     REngine::modifyOrder
## setContext()

| int REngine::setContext | ( | void * | pContext, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Sets the context pointer passed with each RCallbacks callback.
## setEnvironmentVariable()

| int REngine::setEnvironmentVariable | ( | tsNCharcb * | pKey, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pVariable, |
|  |  | tsNCharcb * | pValue, |
|  |  | int * | aiCode |
|  | ) |  |  |

Sets an environment variable in the environment specified by pKey, with pVariable specifing the variable name and pValue specifing the value. If there is no environment with the specified key, the environment will be created. To remove an environment variable, call REngine::unsetEnvironmentVariable().
**Parameters**

| pKey | Required. Identifies the environment. If this key is null or empty, API_BAD_INPUT will be returned. If this key doesn't exist, an environment keyed by this string will be created. |
| --- | --- |
| pVariable | Required. Specifies the environment variable. If this value is null or empty, API_BAD_INPUT will be returned. If this variable already exists, the prior value will be overwritten with the new value. If this variable doesn't exist, a new environment variable with this name will be created. |
| pValue | Required. Specifies the environment variable's value. If this value is null or empty, API_BAD_INPUT will be returned. |
| aiCode | Required. Address of an integer to contain the return code of this routine. |

**See also**
  REngine::listEnvironments()     REngine::getEnvironment()     REngine::setEnvironmentVariable()     REngine::unsetEnvironmentVariable()     Connecting to Multiple Rithmic Systems Simultaneously Using Environments
## setOrderContext()

| int REngine::setOrderContext | ( | tsNCharcb * | pOrderNum, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Explicitly sets the context pointer associated with an order. If the value of the pContext is NULL, the entry for pOrderNum is removed.
**See also**
  REngine::getOrderContext     REngine::cancelOrder     REngine::cancelOrderList     OrderParams::pContext     LimitOrderParams::pContext     MarketOrderParams::pContext     ModifyOrderParams::pContext     ModifyLimitOrderParams::pContext     ModifyStopLimitOrderParams::pContext     ModifyStopMarketOrderParams::pContext     LineInfo::pContext     OrderReport::pContext
## startTimer()

| int REngine::startTimer | ( | tsNCharcb *const | pTimer, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Starts the timer specified by pTimer.
**See also**
  REngine::addTimer     REngine::removeTimer     REngine::stopTimer
## stopTimer()

| int REngine::stopTimer | ( | tsNCharcb *const | pTimer, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Stops the timer specified by pTimer.
**See also**
  REngine::addTimer     REngine::removeTimer     REngine::startTimer
## submitQuoteList()

| int REngine::submitQuoteList | ( | QuoteParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int | iArrayLen, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method will submit quotes on one to many instruments.

The return value upon successful submission to the network of the request is OK. If an error occurs, the return value will be NOT_OK, and aiCode will contain the value of the error.
**Parameters**

| pParams | Array of QuoteParams specifying quote details for each instrument. |
| --- | --- |
| iArrayLen | Array length of pParams. |
| aiCode | Out parameter used to hold the error code, if applicable. |

## subscribe()

| int REngine::subscribe | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | int | iFlags, |
|  |  | int * | aiCode |
|  | ) |  |  |

Subscribes to the instrument identified by the symbol exchange pair. The flags are ANDed to yield the net subscription.
**See also**
  RApi::MD_ALL     RApi::MD_PRINTS     RApi::MD_QUOTES     RApi::MD_BEST     RApi::MD_CLOSE     RApi::MD_PRINTS_COND     RApi::MD_SETTLEMENT     RApi::MD_OPEN     RApi::MD_MARKET_MODE     RApi::MD_HIGH_LOW     RApi::MD_TRADE_VOLUME     RApi::MD_CLOSING_INDICATOR     RApi::MD_OPENING_INDICATOR     RApi::MD_OPEN_INTEREST     RApi::MD_REF_DATA     RApi::MD_MID_PRICE     RApi::MD_HIGH_BID_LOW_ASK     RApi::MD_PRICE_LIMIT     RApi::MD_PROJECTED_SETTLEMENT
## subscribeAutoLiquidate()

| int REngine::subscribeAutoLiquidate | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Subscribes for updates to the auto-liquidate threshold (current) value for the specified account(s).

If the currently logged in user is an FCM administrator, they can leave AccountInfo::sIbId and AccountInfo::sAccountId empty to subscribe for updates across all IBs and account ids within the FCM. Similarly, if the currently logged in user is an IB (or FCM) administrator, they can leave AccountInfo::sAccountId empty to subscribe for updates across all account ids within the specified FCM and IB.
**Parameters**

| pAccount | Specifies the account(s) of interest. The value in AccountInfo::pRmsInfo is ignored. |
| --- | --- |
| aiCode | Out parameter to contain the error code, if applicable. |

**See also**
  REngine::unsubscribeAutoLiquidate()     RCallbacks::AutoLiquidate()     AutoLiquidateInfo
## subscribeBar()

| int REngine::subscribeBar | ( | BarParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is used to subscribe to bar/candlestick data. There are a number of different bar types, including time bars, tick bars, range bars, and volume bars.

As data is received, RCallbacks::Bar() will be invoked, conveying the bar data via BarInfo.

This method requires being connected to the history plant.
 LoginParams::sIhCnnctPt must be specified when calling REngine::login().

To unsubscribe, one calls REngine::unsubscribeBar().

Subscribing to tick bars where the tick size is one is not possible using this method. It will return API_BAD_INPUT. Instead, one should call REngine::subscribe() and specify the MD_PRINTS flags.
**See also**
  BarInfo     BarParams     LoginParams::sIhCnnctPt     RCallbacks::Bar     REngine::unsubscribeBar
## subscribeBracket()

| int REngine::subscribeBracket | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Subscribes for updates to bracket-related information on all orders placed under the specified account. Updates will be conveyed via RCallbacks::BracketUpdate(). The subscription will not retrieve snapshots of any orders or their associated brackets, if applicable.
 To get a snapshot of an account's open orders, one should call REngine::replayOpenOrders(). To get a snapshot of the bracket information of an account's open orders, one should call REngine::replayBrackets().

If the currently logged in user is an FCM or IB administrator, the AccountInfo's FcmId string or IbId string optionally can be empty to widen the scope of the subscription. FCM administrators can leave the IbId and AccountId strings empty to subscribe for all updates across their IBs and the accounts under those respective IBs. Similarly, FCM or IB administrators can leave the AccountId string empty to subscribe for updates across the accounts of the specified IB.

To unsubscribe, one calls REngine::unsubscribeBracket().
**Parameters**

| pAccount | Specifies the account for the bracket orders. The value in AccountInfo::pRmsInfo is ignored. |
| --- | --- |
| aiCode | Out parameter to contain the error code, if applicable. |

**See also**
  REngine::replayOpenOrders()     REngine::replayBrackets()     REngine::unsubscribeBracket()     RCallbacks::BracketUpdate()     BracketInfo
## subscribeByUnderlying()

| int REngine::subscribeByUnderlying | ( | tsNCharcb * | pUnderlying, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pExchange, |
|  |  | tsNCharcb * | pExpiration, |
|  |  | int | iFlags, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Subscribes by underlying instrument. This routine can be used to subscribe to market data described by the underlying symbol, exchange and expiration date. It can be used to subscribe to market data for option chains without subscribing for each individual instrument. The callbacks invoked will be the standard market data callbacks invoked from calls to REngine::subscribe(), with the slight difference that the pContext (second parameter in the market data callbacks) will be the value passed into this method.

One can retrieve available market data chains by calling REngine::getInstrumentByUnderlying(), which will work on available underlying instruments, even if it is not an equity instrument.

One can subscribe to instrument definitions for binary contracts using this method. One must use MD_REF_DATA as the only subscription flag to get the instrument definitions (RefDataInfo) as the exchange publishes them. This approach can be used to receive intraday binary contract definitions as the contracts become valid. To subscribe for binary contract market data, one should call REngine::subscribe() for the instrument of interest. If one subscribes specifying more than the MD_REF_DATA flag, the subscription will be aborted with a 'no data' (7) error.
**Parameters**

| pUnderlying | Underlying symbol of the (option chain) instruments |
| --- | --- |
| pExchange | Exchange of the (option chain) instruments |
| pExpiration | Expiration of the (option chain) instruments |
| iFlags | Usage is the same as REngine::subscribe(), where multiple flags can be OR'd express the desired market data. |
| pContext | If there is overlap between market data from REngine::subscribe() and REngine::subscribeByUnderlying(), the callback will be invoked twice. Users can distiguish between the two using pContext, which will be passed back as the second parameter in the market data callbacks. |
| aiCode | Error code (out parameter) |

**See also**
  REngine::unsubscribeByUnderlying()     REngine::getInstrumentByUnderlying()    RApi::MD_ALL     RApi::MD_PRINTS     RApi::MD_QUOTES     RApi::MD_BEST     RApi::MD_CLOSE     RApi::MD_PRINTS_COND     RApi::MD_SETTLEMENT     RApi::MD_OPEN     RApi::MD_MARKET_MODE     RApi::MD_HIGH_LOW     RApi::MD_TRADE_VOLUME     RApi::MD_CLOSING_INDICATOR     RApi::MD_OPENING_INDICATOR     RApi::MD_OPEN_INTEREST     RApi::MD_REF_DATA     RApi::MD_MID_PRICE     RApi::MD_HIGH_BID_LOW_ASK     RApi::MD_PRICE_LIMIT     RApi::MD_PROJECTED_SETTLEMENT

FAQ - Binary Contracts
## subscribeDbo()

| int REngine::subscribeDbo | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | bool | bPrice, |
|  |  | double | dPrice, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Subscribes to depth-by-order (dbo) data for the instrument specified.
 Subscriptions can optionally be limited to a particular price level by specifying the price parameters. Specifying a price can conserve more resources than not specifying a price. Updates will be conveyed by DboInfo instances via RCallbacks::Dbo.

Subscriptions to dbo data do not automatically retrieve order book images. To retrieve an order book image on which to build/maintain an order book, call REngine::rebuildDboBook(). To avoid race conditions, REngine::subscribeDbo() should be called before REngine::rebuildDboBook(), and the updates received prior to the image should be cached, and then applied to the received image.

At the time of this writing, dbo data for Globex data does not include implied quantities.

If the market data connect point is an aggregated connect point (one which aggregates market data), subscribing to DBO data will not work correctly. One can determine if the connect point is aggregated by calling REngine::isThereAnAggregator().

It is possible to call this method multiple times for the same instrument and price, as long as one of the parameters are different. This allows for multiple, overlapping subscriptions to dbo data differing only by, for example, context.

To unsubscribe, call REngine::unsubscribeDbo.

What is DBO data and how might I use it?
**See also**
  DboInfo     RCallbacks::Dbo     REngine::rebuildDboBook     REngine::unsubscribeDbo
## subscribeEasyToBorrow()

| int REngine::subscribeEasyToBorrow | ( | void * | pContext, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Subscribes for updates to the easy-to-borrow list. To retrieve a snapshot of the list, use REngine::getEasyToBorrowList(). To prevent race conditions between the snapshot and streaming updates, call REngine::subscribeEasyToBorrow() first.

The context pointer will be returned via EasyToBorrowInfo::pContext if/when any updates are received from the infrastructure.

The aiCode will contain the error code if this method returns NOT_OK.
**See also**
  REngine::getEasyToBorrowList()     REngine::unsubscribeEasyToBorrow()     EasyToBorrowInfo
## subscribeOrder()

| int REngine::subscribeOrder | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Subscribes for updates to all orders placed under the specified account.
 The subscription will not retrieve snapshots of any orders. To get a snapshot of an account's orders, one should call REngine::replayAllOrders() or REngine::replayOpenOrders().

If the currently logged in user is an FCM or IB administrator, the AccountInfo's FcmId string or IbId string optionally can be empty to widen the scope of the subscription. FCM administrators can leave the IbId and AccountId strings empty to subscribe for all updates across their IBs and the accounts under those respective IBs. Similarly, FCM or IB administrators can leave the AccountId string empty to subscribe for updates across the accounts of the specified IB.
**Parameters**

| pAccount | Specifies the account for the orders. The value in AccountInfo::pRmsInfo is ignored. |
| --- | --- |
| aiCode | Out parameter to contain the error code, if applicable. |

**See also**
  REngine::replayAllOrders()     REngine::replayOpenOrders()     How do I maintain order state?
## subscribePnl()

| int REngine::subscribePnl | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Subscribes to profit and loss-related information for the specified account. The AccountInfo::pRmsInfo value is ignored. Connecting to the pnl connect point is required.

If the currently logged in user is an FCM or IB administrator, the AccountInfo's FcmId string or IbId string optionally can be empty to widen the scope of the subscription. FCM administrators can leave the IbId and AccountId strings empty to subscribe for all updates across their IBs and the accounts under those respective IBs. Similarly, FCM or IB administrators can leave the AccountId string empty to subscribe for updates across the accounts of the specified IB.
**See also**
  LoginParams::sPnlCnnctPt     REngine::unsubscribePnl     REngine::replayPnl     RCallbacks::PnlUpdate     PnlInfo
## subscribeTradeRoute()

| int REngine::subscribeTradeRoute | ( | tsNCharcb * | pFcmId, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pIbId, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Subscribes to trade route updates for the specified FCM/IB.

This method requires being connected and logged in to the trading system connect point (LoginParams::sTsCnnctPt). An error code of 'no handle' (11) will be returned if not.
**See also**
  RCallbacks::TradeRoute()     REngine::unsubscribeTradeRoute()     What are trade routes and how do I use them?
## subscribeUser()

| int REngine::subscribeUser | ( | tsNCharcb * | pIbId, |
| --- | --- | --- | --- |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Subscribes to updates of user information for the set of users within the specified IB.

This method can only be invoked by FCM administrator, who can subscribe to users of any IB, or an IB administrator, who can only subscribe to their own users.

This method can be used in conjunction with REngine::listUsers() to subscribe for updates to user information that can be applied to snapshots returned by REngine::listUsers().

Unlike the related method REngine::listUsers(), this call does not take a user type as a parameter and is more expansive than REngine::listUsers().
**Parameters**

| pIbId | IB of the users to subscribe to. |
| --- | --- |
| pContext | Convenience pointer which is returned in the callback |
| aiCode | Out parameter to contain the error code, if applicable. |

**See also**
  REngine::listUsers()     REngine::unsubscribeUser()     RCallbacks::User()     UserInfo
## suspendInput()
     **
| int REngine::suspendInput | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

Suspends input for the market data stream. To resume input of the market data stream, call REngine::resumeInput(). Invoking REngine::suspendInput() will not cause a loss of market data. Any market data received while input is suspended is buffered, and processed immediately upon resumption of input. This routine is useful when optimizing large numbers of consecutive market data requests.
 For example, subscriptions to large numbers of instruments can be processed much more quickly when the calls to REngine::subscribe() are preceeded with a call to REngine::suspendInput() and followed by a call to REngine::resumeInput().
## tryLock()
     **
| int REngine::tryLock | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

Attempts to lock the same mutex as used by the REngine internally, and returns immediately if it cannot obtain it.

If the lock is obtained, this routine will return OK (1). If the calling thread already has this lock, a lock count will be incremented and the routine will return OK (1).

If the lock cannot be obtained because it is already held by another thread, this routine will return NOT_OK (0) with the value of *aiCode set to API_HANDLE_IN_USE (9).

For each successful call to REngine::tryLock() and/or REngine::lock(), a corresponding call to REngine::unlock() must be made to release the lock.
 The lock will be released when the lock count goes to zero.
**See also**
  REngine::lock     REngine::unlock     REngine::tryLock
## unlock()
     **
| int REngine::unlock | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

Unlocks the same mutex as used by the REngine internally.

If the lock is released, this routine will return OK (1). For each successful call to REngine::tryLock() and/or REngine::lock(), a corresponding call to REngine::unlock() must be made to release the lock.
 The lock will be released when the lock count goes to zero.
**See also**
  REngine::lock     REngine::unlock     REngine::tryLock
## unsetEnvironmentVariable()

| int REngine::unsetEnvironmentVariable | ( | tsNCharcb * | pKey, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pVariable, |
|  |  | int * | aiCode |
|  | ) |  |  |

Removes an environment variable specified by pVariable in the environment specified by pKey. If the variable being removed is the last variable in the environment, the environment will be removed as well.
**Parameters**

| pKey | Required. Identifies the environment. If this value is null or empty, API_BAD_INPUT will be returned. If this key doesn't exist, API_NO_DATA will be returned. |
| --- | --- |
| pVariable | Required. Specifies the environment variable. If this value is null or empty, API_BAD_INPUT will be returned. If this value doesn't exist, API_NO_DATA will be returned. |
| aiCode | Required. Address of an integer to contain the return code of this routine. |

**See also**
  REngine::listEnvironments()     REngine::getEnvironment()     REngine::setEnvironmentVariable()     REngine::unsetEnvironmentVariable()     Connecting to Multiple Rithmic Systems Simultaneously Using Environments
## unsubscribe()

| int REngine::unsubscribe | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | int * | aiCode |
|  | ) |  |  |

This method will remove subscriptions made using REngine::subscribe().
## unsubscribeAutoLiquidate()

| int REngine::unsubscribeAutoLiquidate | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Unsubscribes from updates to the auto-liquidate threshold (current) value for the specified account(s). The values of AccountInfo::sFcmId, AccountInfo::sIbId and AccountInfo::sAccountId should be the same as what was passed into REngine::subscribeAutoLiquidate().
**Parameters**

| pAccount | Specifies the account(s) to unsubscribe. The value in AccountInfo::pRmsInfo is ignored. |
| --- | --- |
| aiCode | Out parameter to contain the error code, if applicable. |

**See also**
  REngine::subscribeAutoLiquidate()     RCallbacks::AutoLiquidate()     AutoLiquidateInfo
## unsubscribeBar()

| int REngine::unsubscribeBar | ( | BarParams * | pParams, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

This method is used to unsubscribe from bar/candlestick data. This method undoes a corresponding call to REngine::subscribeBar().
**See also**
  BarParams     REngine::subscribeBar
## unsubscribeBracket()

| int REngine::unsubscribeBracket | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Unsubscribes to bracket order-related information for the specified account.

If any of the IbId or AccountId strings were left empty when subscribing they should be left empty when unsubscribing.
## unsubscribeByUnderlying()

| int REngine::unsubscribeByUnderlying | ( | tsNCharcb * | pUnderlying, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pExchange, |
|  |  | tsNCharcb * | pExpiration, |
|  |  | int * | aiCode |
|  | ) |  |  |

Unsubscribes by underlying instrument. This routine is used to unsubscribe to data received due to a prior call to REngine::subscribeByUnderlying().
**See also**
  REngine::subscribeByUnderlying()
## unsubscribeDbo()

| int REngine::unsubscribeDbo | ( | tsNCharcb * | pExchange, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pTicker, |
|  |  | bool | bPrice, |
|  |  | double | dPrice, |
|  |  | void * | pContext, |
|  |  | int * | aiCode |
|  | ) |  |  |

Unsubscribes from depth-by-order data for the instrument specified. If a price was specified when subscribing, the unsubscribe request must also specify that same price. If a context was specified when subscribing, the same context value must be specified as well.

In other words, the parameter values should match the values passed into REngine::subscribeDbo().
**See also**
  REngine::subscribeDbo
## unsubscribeEasyToBorrow()
     **
| int REngine::unsubscribeEasyToBorrow | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

Unsubscribes from updates to the easy-to-borrow list.
**Parameters**

| aiCode | Out parameter to contain the error code, if applicable. |
| --- | --- |

**See also**
  REngine::getEasyToBorrowList()     REngine::subscribeEasyToBorrow()     EasyToBorrowInfo
## unsubscribeOrder()

| int REngine::unsubscribeOrder | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Unsubscribes to order-related information for the specified account.

If any of the IbId or AccountId strings were left empty when subscribing they should be left empty when unsubscribing.
## unsubscribePnl()

| int REngine::unsubscribePnl | ( | AccountInfo * | pAccount, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Unsubscribes to profit and loss-related information for the specified account. Connecting to the pnl connect point is required.

If any of the IbId or AccountId strings were left empty when subscribing they should be left empty when unsubscribing.
**See also**
  LoginParams::sPnlCnnctPt     REngine::subscribePnl     REngine::replayPnl     RCallbacks::PnlUpdate     PnlInfo
## unsubscribeTradeRoute()

| int REngine::unsubscribeTradeRoute | ( | tsNCharcb * | pFcmId, |
| --- | --- | --- | --- |
|  |  | tsNCharcb * | pIbId, |
|  |  | int * | aiCode |
|  | ) |  |  |

Unsubscribes from trade route updates for the specified FCM/IB.

This method requires being connected and logged in to the trading system connect point (LoginParams::sTsCnnctPt). An error code of 'no handle' (11) will be returned if not. An error code of 'already exists' (8) will be returned if there is no such subscription.
**See also**
  REngine::subscribeTradeRoute()     What are trade routes and how do I use them?
## unsubscribeUser()

| int REngine::unsubscribeUser | ( | tsNCharcb * | pIbId, |
| --- | --- | --- | --- |
|  |  | int * | aiCode |
|  | ) |  |  |

Unsubscribes from updates of user information for the users of the specified IB.
**Parameters**

| pIbId | Specifies the IB ID of the users. |
| --- | --- |
| aiCode | Out parameter to contain the error code, if applicable. |

**See also**
  REngine::subscribeUser()     RCallbacks::User()     UserInfo
