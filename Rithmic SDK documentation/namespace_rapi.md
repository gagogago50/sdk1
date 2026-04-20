> **R | API+ — Version 13.7.0.0**

# RApi Namespace Reference

Classes | Enumerations | Variables  RApi Namespace Reference

| Classes |
| --- |
| class | AccountInfo |
|  |
| class | AccountListInfo |
|  |
| class | AccountUpdateInfo |
|  |
| class | AdmCallbacks |
|  |
| class | AggregatorInfo |
|  |
| class | AgreementInfo |
|  |
| class | AgreementListInfo |
|  |
| class | AlertInfo |
|  |
| class | AskInfo |
|  |
| class | AssignedUserListInfo |
|  |
| class | AutoLiquidateInfo |
|  |
| class | AuxRefDataInfo |
|  |
| class | BarInfo |
|  |
| class | BarParams |
|  |
| class | BarReplayInfo |
|  |
| class | BidInfo |
|  |
| class | BinaryContractListInfo |
|  |
| class | BracketInfo |
|  |
| class | BracketParams |
|  |
| class | BracketReplayInfo |
|  |
| class | BracketTier |
|  |
| class | BracketTierModifyInfo |
|  |
| class | CloseMidPriceInfo |
|  |
| class | ClosePriceInfo |
|  |
| class | ClosingIndicatorInfo |
|  |
| class | DboBookRebuildInfo |
|  |
| class | DboInfo |
|  |
| class | EasyToBorrowInfo |
|  |
| class | EasyToBorrowListInfo |
|  |
| class | EndQuoteInfo |
|  |
| class | EnvironmentInfo |
|  |
| class | EnvironmentListInfo |
|  |
| class | EnvironmentVariable |
|  |
| class | EquityOptionStrategyListInfo |
|  |
| class | ExchangeListInfo |
|  |
| class | ExecutionReplayInfo |
|  |
| class | HighBidPriceInfo |
|  |
| class | HighPriceInfo |
|  |
| class | HighPriceLimitInfo |
|  |
| class | IbListInfo |
|  |
| class | InstrumentByUnderlyingInfo |
|  |
| class | InstrumentSearchInfo |
|  |
| class | LimitOrderBookInfo |
|  |
| class | LimitOrderParams |
|  |
| class | LineInfo |
|  |
| class | LoginParams |
|  |
| class | LowAskPriceInfo |
|  |
| class | LowPriceInfo |
|  |
| class | LowPriceLimitInfo |
|  |
| class | MarketModeInfo |
|  |
| class | MarketOrderParams |
|  |
| class | MidPriceInfo |
|  |
| class | ModifyLimitOrderParams |
|  |
| class | ModifyOrderParams |
|  |
| class | ModifyStopLimitOrderParams |
|  |
| class | ModifyStopMarketOrderParams |
|  |
| class | OpeningIndicatorInfo |
|  |
| class | OpenInterestInfo |
|  |
| class | OpenPriceInfo |
|  |
| class | OptionListInfo |
|  |
| class | OrderBustReport |
|  |
| class | OrderCancelReport |
|  |
| class | OrderFailureReport |
|  |
| class | OrderFillReport |
|  |
| class | OrderHistoryDatesInfo |
|  |
| class | OrderModifyReport |
|  |
| class | OrderNotCancelledReport |
|  |
| class | OrderNotModifiedReport |
|  |
| class | OrderParams |
|  |
| class | OrderRejectReport |
|  |
| class | OrderReplayInfo |
|  |
| class | OrderReport |
|  |
| class | OrderStatusReport |
|  |
| class | OrderTradeCorrectReport |
|  |
| class | OrderTriggerPulledReport |
|  |
| class | OrderTriggerReport |
|  |
| class | PasswordChangeInfo |
|  |
| class | PingInfo |
|  |
| class | PnlInfo |
|  |
| class | PnlReplayInfo |
|  |
| class | PositionExitInfo |
|  |
| class | PriceIncrInfo |
|  |
| class | PriceIncrRow |
|  |
| class | ProductRmsInfo |
|  |
| class | ProductRmsListInfo |
|  |
| class | ProjectedSettlementPriceInfo |
|  |
| class | QuoteCancelParams |
|  |
| class | QuoteInfo |
|  |
| class | QuoteParams |
|  |
| class | QuoteReplayInfo |
|  |
| class | QuoteReport |
|  |
| class | RCallbacks |
|  |
| class | RefDataInfo |
|  |
| class | REngine |
|  |
| class | REngineParams |
|  |
| class | ReplayBarParams |
|  |
| class | RmsInfo |
|  |
| class | SearchTerm |
|  |
| class | SettlementPriceInfo |
|  |
| class | SingleOrderReplayInfo |
|  |
| class | SodReport |
|  |
| class | StopLimitOrderParams |
|  |
| class | StopMarketOrderParams |
|  |
| class | StrategyInfo |
|  |
| class | StrategyLegInfo |
|  |
| class | StrategyListInfo |
|  |
| class | TradeInfo |
|  |
| class | TradeReplayInfo |
|  |
| class | TradeRouteInfo |
|  |
| class | TradeRouteListInfo |
|  |
| class | TradeVolumeInfo |
|  |
| class | UserDefinedSpreadCreateInfo |
|  |
| class | UserInfo |
|  |
| class | UserListInfo |
|  |
| class | UserProfileInfo |
|  |
| class | VolumeAtPriceInfo |
|  |

| Enumerations |
| --- |
| enum | SearchField {    Any , Exchange , ProductCode , InstrumentType ,    Ticker , Description , ExpirationDate   } |
|  |
| enum | SearchOperator { Equals , Contains , StartsWith , EndsWith  } |
|  |

| Variables |
| --- |
| const int | ALERT_CONNECTION_BROKEN = 3 |
|  |
| const int | ALERT_CONNECTION_CLOSED = 2 |
|  |
| const int | ALERT_CONNECTION_OPENED = 1 |
|  |
| const int | ALERT_FORCED_LOGOUT = 7 |
|  |
| const int | ALERT_LOGIN_COMPLETE = 4 |
|  |
| const int | ALERT_LOGIN_FAILED = 5 |
|  |
| const int | ALERT_QUIET_HEARTBEAT = 8 |
|  |
| const int | ALERT_SERVICE_ERROR = 6 |
|  |
| const int | ALERT_SHUTDOWN_SIGNAL = 11 |
|  |
| const int | ALERT_TRADING_DISABLED = 9 |
|  |
| const int | ALERT_TRADING_ENABLED = 10 |
|  |
| const int | BAR_TYPE_DAILY = 5 |
|  |
| const int | BAR_TYPE_MINUTE = 4 |
|  |
| const int | BAR_TYPE_NONE = 0 |
|  |
| const int | BAR_TYPE_RANGE = 1 |
|  |
| const int | BAR_TYPE_SECOND = 7 |
|  |
| const int | BAR_TYPE_TICK = 2 |
|  |
| const int | BAR_TYPE_VOLUME = 3 |
|  |
| const int | BAR_TYPE_WEEKLY = 6 |
|  |
| const int | BEST_ASK_PRICE = 25 |
|  |
| const int | BEST_ASK_SIZE = 31 |
|  |
| const int | BEST_BID_PRICE = 22 |
|  |
| const int | BEST_BID_SIZE = 30 |
|  |
| const int | INTRADAY_HISTORY_CONNECTION_ID = 4 |
|  |
| const int | LEAN_PRICE = 54909 |
|  |
| const int | MARKET_DATA_CONNECTION_ID = 1 |
|  |
| const int | MD_ALL |
|  |
| const int | MD_BEST = 0x04 |
|  |
| const int | MD_CLOSE = 0x08 |
|  |
| const int | MD_CLOSING_INDICATOR = 0x400 |
|  |
| const int | MD_HIGH_BID_LOW_ASK = 0x8000 |
|  |
| const int | MD_HIGH_LOW = 0x100 |
|  |
| const int | MD_HISTORY_CB = 3 |
|  |
| const int | MD_IMAGE_CB = 1 |
|  |
| const int | MD_MARKET_MODE = 0x80 |
|  |
| const int | MD_MID_PRICE = 0x4000 |
|  |
| const int | MD_NONE = 0x00 |
|  |
| const int | MD_OPEN = 0x40 |
|  |
| const int | MD_OPEN_INTEREST = 0x1000 |
|  |
| const int | MD_OPENING_INDICATOR = 0x800 |
|  |
| const int | MD_PRICE_LIMIT = 0x10000 |
|  |
| const int | MD_PRINTS = 0x01 |
|  |
| const int | MD_PRINTS_COND = 0x10 |
|  |
| const int | MD_PROJECTED_SETTLEMENT = 0x20000 |
|  |
| const int | MD_QUOTES = 0x02 |
|  |
| const int | MD_REF_DATA = 0x2000 |
|  |
| const int | MD_SETTLEMENT = 0x20 |
|  |
| const int | MD_TRADE_VOLUME = 0x200 |
|  |
| const int | MD_UPDATE_CB = 2 |
|  |
| const int | OP_EQUAL_TO = (1) |
|  |
| const int | OP_GREATER_THAN = (3) |
|  |
| const int | OP_GREATER_THAN_OR_EQUAL_TO = (5) |
|  |
| const int | OP_LESS_THAN = (2) |
|  |
| const int | OP_LESS_THAN_OR_EQUAL_TO = (4) |
|  |
| const int | OP_NONE = (0) |
|  |
| const int | OP_NOT_EQUAL_TO = (6) |
|  |
| const int | OP_NOT_GREATER_THAN = (7) |
|  |
| const int | OP_NOT_LESS_THAN = (8) |
|  |
| const int | PNL_CONNECTION_ID = 3 |
|  |
| const int | REPOSITORY_CONNECTION_ID = 5 |
|  |
| const tsNCharcb | sACCOUNT_STATUS_ACTIVE = {(char *)"active", 6} |
|  |
| const tsNCharcb | sACCOUNT_STATUS_ADMIN_ONLY = {(char *)"admin only", 10} |
|  |
| const tsNCharcb | sACCOUNT_STATUS_DONE_FOR_DAY = {(char *)"done for day", 12} |
|  |
| const tsNCharcb | sACCOUNT_STATUS_INACTIVE = {(char *)"inactive", 8} |
|  |
| const tsNCharcb | sADD_ACCOUNT = {(char *)"add_account", 11} |
|  |
| const tsNCharcb | sADD_USER = {(char *)"add_user", 8} |
|  |
| const tsNCharcb | sASSIGN_ACCOUNT_TO_USER = {(char *)"assign_account_to_user", 22} |
|  |
| const tsNCharcb | sBRACKET_TYPE_STOP_ONLY = {(char *)"stop only", 9} |
|  |
| const tsNCharcb | sBRACKET_TYPE_STOP_ONLY_STATIC = {(char *)"stop only static", 16} |
|  |
| const tsNCharcb | sBRACKET_TYPE_TARGET_AND_STOP = {(char *)"target and stop", 15} |
|  |
| const tsNCharcb | sBRACKET_TYPE_TARGET_AND_STOP_STATIC = {(char *)"target and stop static", 22} |
|  |
| const tsNCharcb | sBRACKET_TYPE_TARGET_ONLY = {(char *)"target only", 11} |
|  |
| const tsNCharcb | sBRACKET_TYPE_TARGET_ONLY_STATIC = {(char *)"target only static", 18} |
|  |
| const tsNCharcb | sBUY_SELL_TYPE_BUY = {(char *)"B", 1} |
|  |
| const tsNCharcb | sBUY_SELL_TYPE_SELL = {(char *)"S", 1} |
|  |
| const tsNCharcb | sBUY_SELL_TYPE_SELL_SHORT = {(char *)"SS", 2} |
|  |
| const tsNCharcb | sBUY_SELL_TYPE_SELL_SHORT_EXEMPT = {(char *)"SSE", 3} |
|  |
| const tsNCharcb | sCOMPLETION_REASON_CANCEL = {(char *)"C", 1} |
|  |
| const tsNCharcb | sCOMPLETION_REASON_FAILURE = {(char *)"FA", 2} |
|  |
| const tsNCharcb | sCOMPLETION_REASON_FILL = {(char *)"F", 1} |
|  |
| const tsNCharcb | sCOMPLETION_REASON_PFBC = {(char *)"PFBC", 4} |
|  |
| const tsNCharcb | sCOMPLETION_REASON_REJECT = {(char *)"R", 1} |
|  |
| const tsNCharcb | sCOMPLETION_REASON_UNKNOWN = {(char *)"U", 1} |
|  |
| const tsNCharcb | sDEFAULT_ENVIRONMENT_KEY = {(char *)"system", 6} |
|  |
| const tsNCharcb | sLINE_STATUS_CANCEL_FAILED = {(char *)"Cancellation Failed", 19} |
|  |
| const tsNCharcb | sLINE_STATUS_CANCEL_PENDING = {(char *)"cancel pending", 14} |
|  |
| const tsNCharcb | sLINE_STATUS_CANCEL_RCVD_BY_EXCH_GWAY = {(char *)"cancel received by exch gateway", 31} |
|  |
| const tsNCharcb | sLINE_STATUS_CANCEL_RECEIVED = {(char *)"Cancel received from client", 27} |
|  |
| const tsNCharcb | sLINE_STATUS_CANCEL_SENT_TO_EXCH = {(char *)"cancel sent to exch", 19} |
|  |
| const tsNCharcb | sLINE_STATUS_COMPLETE = {(char *)"complete", 8} |
|  |
| const tsNCharcb | sLINE_STATUS_MOD_TRIGGER_PENDING = {(char *)"modified, trigger pending", 25} |
|  |
| const tsNCharcb | sLINE_STATUS_MODIFIED = {(char *)"modified", 8} |
|  |
| const tsNCharcb | sLINE_STATUS_MODIFY_FAILED = {(char *)"Modification Failed", 19} |
|  |
| const tsNCharcb | sLINE_STATUS_MODIFY_PENDING = {(char *)"modify pending", 14} |
|  |
| const tsNCharcb | sLINE_STATUS_MODIFY_RCVD_BY_EXCH_GWAY = {(char *)"modify received by exch gateway", 31} |
|  |
| const tsNCharcb | sLINE_STATUS_MODIFY_RECEIVED = {(char *)"Modify received from client", 27} |
|  |
| const tsNCharcb | sLINE_STATUS_MODIFY_SENT_TO_EXCH = {(char *)"modify sent to exch", 19} |
|  |
| const tsNCharcb | sLINE_STATUS_OPEN = {(char *)"open", 4} |
|  |
| const tsNCharcb | sLINE_STATUS_OPEN_PENDING = {(char *)"open pending", 12} |
|  |
| const tsNCharcb | sLINE_STATUS_ORDER_RCVD_BY_EXCH_GWAY = {(char *)"order received by exch gateway", 30} |
|  |
| const tsNCharcb | sLINE_STATUS_ORDER_RECEIVED = {(char *)"Order received from client", 26} |
|  |
| const tsNCharcb | sLINE_STATUS_ORDER_SENT_TO_EXCH = {(char *)"order sent to exch", 18} |
|  |
| const tsNCharcb | sLINE_STATUS_PARTIAL = {(char *)"partial", 7} |
|  |
| const tsNCharcb | sLINE_STATUS_TRIGGER_PENDING = {(char *)"trigger pending", 15} |
|  |
| const tsNCharcb | sMODIFY_ACCOUNT = {(char *)"modify_account", 14} |
|  |
| const tsNCharcb | sMODIFY_USER = {(char *)"modify_user", 11} |
|  |
| const tsNCharcb | sORDER_DURATION_DAY = {(char *)"DAY", 3} |
|  |
| const tsNCharcb | sORDER_DURATION_FOK = {(char *)"FOK", 3} |
|  |
| const tsNCharcb | sORDER_DURATION_GTC = {(char *)"GTC", 3} |
|  |
| const tsNCharcb | sORDER_DURATION_IOC = {(char *)"OC", 2} |
|  |
| const tsNCharcb | sORDER_ENTRY_TYPE_AUTO = {(char *)"A", 1} |
|  |
| const tsNCharcb | sORDER_ENTRY_TYPE_MANUAL = {(char *)"M", 1} |
|  |
| const tsNCharcb | sORDER_OPERATION_TYPE_AFOCCA = {(char *)"AFOCCA", 6} |
|  |
| const tsNCharcb | sORDER_OPERATION_TYPE_CCA = {(char *)"CCA", 3} |
|  |
| const tsNCharcb | sORDER_OPERATION_TYPE_FCA = {(char *)"FCA", 3} |
|  |
| const tsNCharcb | sORDER_OPERATION_TYPE_FOCCA = {(char *)"FOCCA", 5} |
|  |
| const tsNCharcb | sORDER_TYPE_EXTERNAL = {(char *)"E", 1} |
|  |
| const tsNCharcb | sORDER_TYPE_LIMIT = {(char *)"L", 1} |
|  |
| const tsNCharcb | sORDER_TYPE_LMT_IF_TOUCHED = {(char *)"LIT", 3} |
|  |
| const tsNCharcb | sORDER_TYPE_MARKET = {(char *)"M", 1} |
|  |
| const tsNCharcb | sORDER_TYPE_MKT_IF_TOUCHED = {(char *)"MIT", 3} |
|  |
| const tsNCharcb | sORDER_TYPE_STOP_LIMIT = {(char *)"SLMT", 4} |
|  |
| const tsNCharcb | sORDER_TYPE_STOP_MARKET = {(char *)"STP", 3} |
|  |
| const tsNCharcb | sRELEASE_CMD_HOLD_ORDER = {(char *)"hold_order", 10} |
|  |
| const tsNCharcb | sREMOVE_ACCOUNT_FROM_USER = {(char *)"remove_account_from_user", 24} |
|  |
| const tsNCharcb | sTRADE_ROUTE_STATUS_DOWN = {(char *)"DOWN", 4} |
|  |
| const tsNCharcb | sTRADE_ROUTE_STATUS_UP = {(char *)"UP", 2} |
|  |
| const tsNCharcb | sUSER_STATUS_DISABLED = {(char *)"disabled", 8} |
|  |
| const tsNCharcb | sUSER_STATUS_ENABLED = {(char *)"enabled", 7} |
|  |
| const tsNCharcb | sUSER_TYPE_FCM = {(char *)"1", 1} |
|  |
| const tsNCharcb | sUSER_TYPE_IB = {(char *)"2", 1} |
|  |
| const tsNCharcb | sUSER_TYPE_TRADER = {(char *)"3", 1} |
|  |
| const int | TRADE_PRICE = 6 |
|  |
| const int | TRADING_SYSTEM_CONNECTION_ID = 2 |
|  |
| const int | UPDATE_TYPE_AGGREGATED = 6 |
|  |
| const int | UPDATE_TYPE_BEGIN = 2 |
|  |
| const int | UPDATE_TYPE_CLEAR = 5 |
|  |
| const int | UPDATE_TYPE_END = 4 |
|  |
| const int | UPDATE_TYPE_MIDDLE = 3 |
|  |
| const int | UPDATE_TYPE_SOLO = 1 |
|  |
| const int | UPDATE_TYPE_UNDEFINED = 0 |
|  |
| const int | VALUE_STATE_CLEAR = 1 |
|  |
| const int | VALUE_STATE_IGNORE = 0 |
|  |
| const int | VALUE_STATE_USE = 2 |
|  |

## Detailed Description

This namespace contains all of the definitions needed for RApi.
## Enumeration Type Documentation

## SearchField

| enum RApi::SearchField |
| --- |

The SearchField enumerator controls which fields are examined when searching for an instrument. These fields match the fields of the same name in RefDataInfo.
**See also**
  RefDataInfo     REngine::searchInstrument()     RApi::InstrumentSearchInfo     RApi::SearchTerm

| Enumerator |
| --- |
| Any | Indicates that SearchTerm::sTerm should match against any available field. See alsoREngine::searchInstrument()   RApi::SearchTerm |
| Exchange | Indicates that SearchTerm::sTerm should match against the exchange field's value. See alsoREngine::searchInstrument()   RApi::SearchTerm |
| ProductCode | Indicates that SearchTerm::sTerm should match against the product code field's value. See alsoREngine::searchInstrument()   RApi::SearchTerm |
| InstrumentType | Indicates that SearchTerm::sTerm should match against the instrument type field's value. See alsoREngine::searchInstrument()   RApi::SearchTerm |
| Ticker | Indicates that SearchTerm::sTerm should match against the ticker field's value. See alsoREngine::searchInstrument()   RApi::SearchTerm |
| Description | Indicates that SearchTerm::sTerm should match against the description field's value. See alsoREngine::searchInstrument()   RApi::SearchTerm |
| ExpirationDate | Indicates that SearchTerm::sTerm should match against the expiration date field's value. See alsoREngine::searchInstrument()   RApi::SearchTerm |

## SearchOperator

| enum RApi::SearchOperator |
| --- |

The SearchOperator enumerator controls the string matching behavior when searching for an instrument. Whether the match is case sensitive is controlled using SearchTerm::bCaseSensitive.
**See also**
  REngine::searchInstrument()     RApi::InstrumentSearchInfo     RApi::SearchTerm

| Enumerator |
| --- |
| Equals | Indicates that SearchTerm::sTerm should match the target field's value exactly (as opposed to matching as a substring of some sort). |
| Contains | Indicates that SearchTerm::sTerm should match if it is a substring of the target field's value. |
| StartsWith | Indicates that SearchTerm::sTerm should match if the target field's value starts with the seach term. |
| EndsWith | Indicates that SearchTerm::sTerm should match if the target field's value ends with the seach term. |

## Variable Documentation

## ALERT_CONNECTION_BROKEN

| const int RApi::ALERT_CONNECTION_BROKEN = 3 |
| --- |

Indicates that a connection has been broken. Returning NOT_OK from any callback defined in RCallbacks will cause the REngine to disconnect from the infrastructure. The REngine will attempt to recover broken connections until the connection is re-established. Upon recovery, authentication credentials and any subscriptions on the broken connection will be resubmitted.
## ALERT_CONNECTION_CLOSED

| const int RApi::ALERT_CONNECTION_CLOSED = 2 |
| --- |

Indicates that a connection has been closed. A connection will be closed when destroying an instance of the REngine or when successfully invoking REngine::logout.
## ALERT_CONNECTION_OPENED

| const int RApi::ALERT_CONNECTION_OPENED = 1 |
| --- |

Indicates that a connection has been opened, which can be initiated by the user (via REngine::login() for instance) or when a broken connection has been recovered. If a connection requires authentication, the authentication credentials will be (re)sent upon connecting. For recovered connections, any subscriptions that were active on that connection will be resent automatically.
## ALERT_FORCED_LOGOUT

| const int RApi::ALERT_FORCED_LOGOUT = 7 |
| --- |

Indicates that the infrastructure has sent a message to REngine forcing it to log out. The user will have time to clean up in the Alert callback, but will be logged out of the infrastructure after the callback returns. The user does not need to call REngine::logout() inside the callback of this Alert.
## ALERT_LOGIN_COMPLETE

| const int RApi::ALERT_LOGIN_COMPLETE = 4 |
| --- |

Indicates that a login to the infrastructure was accepted.
## ALERT_LOGIN_FAILED

| const int RApi::ALERT_LOGIN_FAILED = 5 |
| --- |

Indicates that a login to the infrastructure was not accepted. The most common reasons for a login failure are listed below :
-  Password is incorrect - Can you log in to the same Rithmic system using the same login id and password but a different application (such as R | Trader)?
-  Rithmic system is temporarily unavailable - There are regularly scheduled maintenance windows every evening and on weekends. Sometimes it is not possible to log in during thse maintance windows.
-  User name does not exist - Are the credentials appropriate for this Rithmic system? Users will often log into their paper trading environment using credentials from the test or live Rithmic systems.
-  Login id disabled - Is the trial period for the login id over? Has your broker disabled the user id for some reason (closed account, credit reasons, etc.)?
-  Invalid application - Are you using one of the sample applications? The sample applications will not be able to connect to live Rithmic systems or the paper trading system.

In general, the escalation path for a login failure should be as follows:
-  Customer calls broker;
-  Broker investigates and escalates as necessary to Rithmic.
 If it turns out that there is a technical error and not an administrative issue, then it is appropriate for the error to be escalated to Rithmic, but not otherwise.

## ALERT_QUIET_HEARTBEAT

| const int RApi::ALERT_QUIET_HEARTBEAT = 8 |
| --- |

Indicates that a heartbeat has not been heard on the connection specified.

If you receive a quiet heartbeat alert, it is possible that the connection is no longer good, but the operating system does not think so yet. This can happen if the operating system's timeout threshold for a connection exceeds the timeout of the R | API heartbeat (about 1 minute usually).
 Quiet heartbeats can also be caused by CPU or network resource constraints while the connection is still good.

It is possible for the user to call REngine::logout() followed by REngine::login() to re-establish an REngine instance's connections with the infrastructure if one or more of those connections are 'quiet'.

However, it is also possible to take no action. If a connection ends up being marked as broken by the operating system, a connection broken alert will fire, and associated recovery processing will occur at that time.
 Subsequent quiet heartbeat alerts will fire if the silence continues but the connection is (still) not regarded as broken.
## ALERT_SERVICE_ERROR

| const int RApi::ALERT_SERVICE_ERROR = 6 |
| --- |

Indicates that an infrastructure service has responded to a request with an error condition.
## ALERT_SHUTDOWN_SIGNAL

| const int RApi::ALERT_SHUTDOWN_SIGNAL = 11 |
| --- |

Indicates that the infrastructure has signaled the REngine to shutdown. Immediately after this callback fires, the instance of REngine is effectively made inert. Consequently, callbacks will no longer fire, and methods on REngine will return an error of API_NO_HANDLE (11).
## ALERT_TRADING_DISABLED

| const int RApi::ALERT_TRADING_DISABLED = 9 |
| --- |

Indicates that trading for this instance of the REngine has been disabled by a system administrator. All order related methods except for REngine::subscribeAccount() and REngine::unsubscribeAccount() will return an error of 31 (API_STATE_ERROR). Market data methods and all subscriptions are unaffected when trading is disabled.
## ALERT_TRADING_ENABLED

| const int RApi::ALERT_TRADING_ENABLED = 10 |
| --- |

Indicates that trading for this instance of the REngine has been enabled by a system administrator. This alert will only be invoked if the REngine was previously in a state where trading was disabled.
## BAR_TYPE_DAILY

| const int RApi::BAR_TYPE_DAILY = 5 |
| --- |

Represents the daily bar type. BarInfo indicates the date of the daily bar with BarInfo::sSpecifiedDate.

This value can be used when requesting historical bars using REngine::replayBars(), or subscribing to bars in real-time using REngine::subscribeBar().
**See also**
  BarParams
## BAR_TYPE_MINUTE

| const int RApi::BAR_TYPE_MINUTE = 4 |
| --- |

Represents the minute bar type. BarInfo indicates the number of minutes in each minute bar using BarInfo::iSpecifiedMinutes.

This value can be used when requesting historical bars using REngine::replayBars(), or subscribing to bars in real-time using REngine::subscribeBar().
**See also**
  BarParams
## BAR_TYPE_NONE

| const int RApi::BAR_TYPE_NONE = 0 |
| --- |

Indicates that the bar type has not been set.
## BAR_TYPE_RANGE

| const int RApi::BAR_TYPE_RANGE = 1 |
| --- |

Represents the (price) range bar type. BarInfo indicates the price range of each range bar using BarInfo::dSpecifiedRange.

This value can be used when requesting historical bars using REngine::replayBars(), or subscribing to bars in real-time using REngine::subscribeBar().
**See also**
  BarParams
## BAR_TYPE_SECOND

| const int RApi::BAR_TYPE_SECOND = 7 |
| --- |

## BAR_TYPE_TICK

| const int RApi::BAR_TYPE_TICK = 2 |
| --- |

Represents the tick bar type. BarInfo indicates the number of ticks (trades) in each tick bar with BarInfo::iSpecifiedTicks.

This value can be used when requesting historical bars using REngine::replayBars(), or subscribing to bars in real-time using REngine::subscribeBar().
**See also**
  BarParams
## BAR_TYPE_VOLUME

| const int RApi::BAR_TYPE_VOLUME = 3 |
| --- |

Represents the volume bar type. BarInfo indicates the trade volume of each volume bar with BarInfo::iSpecifiedVolume.

This value can be used when requesting historical bars using REngine::replayBars(), or subscribing to bars in real-time using REngine::subscribeBar().
**See also**
  BarParams
## BAR_TYPE_WEEKLY

| const int RApi::BAR_TYPE_WEEKLY = 6 |
| --- |

Represents the weekly bar type. BarInfo indicates the end date of the week with BarInfo::sSpecifiedDate.

This value can be used when requesting historical bars using REngine::replayBars(), but not subscribing to bars in real-time.
**See also**
  BarParams
## BEST_ASK_PRICE

| const int RApi::BEST_ASK_PRICE = 25 |
| --- |

Specifies the use of the best ask price for certain operations, such as if-touched orders.
## BEST_ASK_SIZE

| const int RApi::BEST_ASK_SIZE = 31 |
| --- |

Specifies the use of the best ask size for certain conditions, such as release conditions on orders.
## BEST_BID_PRICE

| const int RApi::BEST_BID_PRICE = 22 |
| --- |

Specifies the use of the best bid price for certain operations, such as if-touched orders.
## BEST_BID_SIZE

| const int RApi::BEST_BID_SIZE = 30 |
| --- |

Specifies the use of the best bid size for certain conditions, such as release conditions on orders.
## INTRADAY_HISTORY_CONNECTION_ID

| const int RApi::INTRADAY_HISTORY_CONNECTION_ID = 4 |
| --- |

Specifies the historical market data connection.
## LEAN_PRICE

| const int RApi::LEAN_PRICE = 54909 |
| --- |

Specifies the use of the lean price for certain operations, such as if-touched orders.
## MARKET_DATA_CONNECTION_ID

| const int RApi::MARKET_DATA_CONNECTION_ID = 1 |
| --- |

Specifies the market data connection (ticker plant).
## MD_ALL

| const int RApi::MD_ALL |
| --- |

  **Initial value:**= MD_PRINTS |  MD_QUOTES |  MD_BEST |  MD_CLOSE |  MD_PRINTS_COND |  MD_SETTLEMENT |  MD_OPEN |  MD_MARKET_MODE |  MD_HIGH_LOW |  MD_TRADE_VOLUME |  MD_CLOSING_INDICATOR |  MD_OPENING_INDICATOR |  MD_OPEN_INTEREST |  MD_REF_DATA |  MD_MID_PRICE |  MD_HIGH_BID_LOW_ASK |  MD_PRICE_LIMIT |  MD_PROJECTED_SETTLEMENT const int MD_SETTLEMENT**Definition:** RApiPlus.h:179 const int MD_HIGH_BID_LOW_ASK**Definition:** RApiPlus.h:189 const int MD_REF_DATA**Definition:** RApiPlus.h:187 const int MD_CLOSING_INDICATOR**Definition:** RApiPlus.h:184 const int MD_OPEN_INTEREST**Definition:** RApiPlus.h:186 const int MD_PRINTS_COND**Definition:** RApiPlus.h:178 const int MD_PROJECTED_SETTLEMENT**Definition:** RApiPlus.h:191 const int MD_OPEN**Definition:** RApiPlus.h:180 const int MD_HIGH_LOW**Definition:** RApiPlus.h:182 const int MD_MID_PRICE**Definition:** RApiPlus.h:188 const int MD_TRADE_VOLUME**Definition:** RApiPlus.h:183 const int MD_BEST**Definition:** RApiPlus.h:176 const int MD_PRINTS**Definition:** RApiPlus.h:174 const int MD_MARKET_MODE**Definition:** RApiPlus.h:181 const int MD_OPENING_INDICATOR**Definition:** RApiPlus.h:185 const int MD_QUOTES**Definition:** RApiPlus.h:175 const int MD_CLOSE**Definition:** RApiPlus.h:177 const int MD_PRICE_LIMIT**Definition:** RApiPlus.h:190

This value is an aggregate of all the available subsription flags.
## MD_BEST

| const int RApi::MD_BEST = 0x04 |
| --- |

This subscription flag represents best bid and best ask quote messages. Data matching this subscription is a subset of RApi::MD_QUOTES, but fires on different callbacks. Subscriptions using this flag will cause RCallbacks::BestAskQuote(), RCallbacks::BestBidAskQuote(), and/or RCallbacks::BestBidQuote() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::BestAskQuote()     RCallbacks::BestBidAskQuote()     RCallbacks::BestBidQuote()
## MD_CLOSE

| const int RApi::MD_CLOSE = 0x08 |
| --- |

This subscription flag represents close price messages. Subscriptions using this flag will cause RCallbacks::ClosePrice() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::ClosePrice()
## MD_CLOSING_INDICATOR

| const int RApi::MD_CLOSING_INDICATOR = 0x400 |
| --- |

This subscription flag represents closing indicators. Subscriptions using this flag will cause RCallbacks::ClosingIndicator() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::ClosingIndicator()
## MD_HIGH_BID_LOW_ASK

| const int RApi::MD_HIGH_BID_LOW_ASK = 0x8000 |
| --- |

This subscription flag represents highest bid/lowest ask prices. Subscriptions using this flag will cause RCallbacks::HighBidPrice() and/or RCallbacks::LowAskPrice() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::HighBidPrice()     RCallbacks::LowAskPrice()
## MD_HIGH_LOW

| const int RApi::MD_HIGH_LOW = 0x100 |
| --- |

This subscription flag represents daily high/low trade prices. Subscriptions using this flag will cause RCallbacks::HighPrice() and/or RCallbacks::LowPrice() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::HighPrice()     RCallbacks::LowPrice()
## MD_HISTORY_CB

| const int RApi::MD_HISTORY_CB = 3 |
| --- |

Indicates historical data. Although there are cases where a history callback may convey up-to-date data, this callback type does not make any claims about being current.
**See also**
  RApi::MD_UPDATE_CB     RApi::MD_HISTORY_CB     RApi::MD_IMAGE_CB
## MD_IMAGE_CB

| const int RApi::MD_IMAGE_CB = 1 |
| --- |

Indicates data has been retrieved from a cache. The cache may be within the infrastructure or within the client process.
**See also**
  RApi::MD_UPDATE_CB     RApi::MD_HISTORY_CB     RApi::MD_IMAGE_CB
## MD_MARKET_MODE

| const int RApi::MD_MARKET_MODE = 0x80 |
| --- |

This subscription flag represents market mode messages. Subscriptions using this flag will cause RCallbacks::MarketMode() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::MarketMode()
## MD_MID_PRICE

| const int RApi::MD_MID_PRICE = 0x4000 |
| --- |

This subscription flag represents mid price data. Subscriptions using this flag will cause RCallbacks::CloseMidPrice() and/or RCallbacks::MidPrice() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::CloseMidPrice()     RCallbacks::MidPrice()
## MD_NONE

| const int RApi::MD_NONE = 0x00 |
| --- |

This subscription flag indicates that there are no subscriptions. Specifying this value as a subscription flag will result in an error code of API_BAD_INPUT. This symbolic constant is provided as an initialization convenience.
## MD_OPEN

| const int RApi::MD_OPEN = 0x40 |
| --- |

This subscription flag represents open price messages. Subscriptions using this flag will cause RCallbacks::OpenPrice() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::OpenPrice()
## MD_OPEN_INTEREST

| const int RApi::MD_OPEN_INTEREST = 0x1000 |
| --- |

This subscription flag represents open interest messages. Subscriptions using this flag will cause RCallbacks::OpenInterest() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::OpenInterest()
## MD_OPENING_INDICATOR

| const int RApi::MD_OPENING_INDICATOR = 0x800 |
| --- |

This subscription flag represents opening indicators. Subscriptions using this flag will cause RCallbacks::OpeningIndicator() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::OpeningIndicator()
## MD_PRICE_LIMIT

| const int RApi::MD_PRICE_LIMIT = 0x10000 |
| --- |

This subscription flag represents price limit messages. Subscriptions using this flag will receive price limit messages as they are published by the infrastructure. When this information is received RCallbacks::HighPriceLimit() or RCallbacks::LowPriceLimit() will be invoked.
**See also**
  HighPriceLimitInfo     LowPriceLimitInfo     REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::HighPriceLimit()     RCallbacks::LowPriceLimit()
## MD_PRINTS

| const int RApi::MD_PRINTS = 0x01 |
| --- |

This subscription flag represents trade messages. Subscriptions using this flag will cause RCallbacks::TradePrint() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::TradePrint()
## MD_PRINTS_COND

| const int RApi::MD_PRINTS_COND = 0x10 |
| --- |

This subscription flag represents conditional trade messages. Subscriptions using this flag will cause RCallbacks::TradeCondition() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::TradeCondition()
## MD_PROJECTED_SETTLEMENT

| const int RApi::MD_PROJECTED_SETTLEMENT = 0x20000 |
| --- |

This subscription flag represents projected settlement price messages. Subscriptions using this flag will receive projected settlement prices as they are published by the infrastructure. When this information is received RCallbacks::ProjectedSettlementPrice() will be invoked.
**See also**
  ProjectedSettlementPriceInfo     REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::ProjectedSettlementPrice()
## MD_QUOTES

| const int RApi::MD_QUOTES = 0x02 |
| --- |

This subscription flag represents quote, or depth of market, messages. The quotes may or may not appear at the top of the order book.
 Subscriptions using this flag will cause RCallbacks::AskQuote(), RCallbacks::BidQuote(), RCallbacks::EndQuote(), and/or RCallbacks::LimitOrderBook() to be invoked when data is received from the infrastructure.

The end user must have permissions for market depth data for this flag to work.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::AskQuote()     RCallbacks::BidQuote()     RCallbacks::EndQuote()     RCallbacks::LimitOrderBook()     How do I maintain an order book? (Or, how do I use update types with AskInfo, BidInfo and EndQuoteInfo?)
## MD_REF_DATA

| const int RApi::MD_REF_DATA = 0x2000 |
| --- |

This subscription flag represents reference data (security definition) messages. Subscriptions using this flag will cause RCallbacks::RefData() to be invoked when data is received from the infrastructure. When subscribing to individual instruments using REngine::subscribe(), this flag will also subscribe to AuxRefDataInfo, with the corresponding callback RCallbacks::AuxRefData() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::AuxRefData()     RCallbacks::RefData()
## MD_SETTLEMENT

| const int RApi::MD_SETTLEMENT = 0x20 |
| --- |

This subscription flag represents settlement price messages. Subscriptions using this flag will cause RCallbacks::SettlementPrice() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::SettlementPrice()
## MD_TRADE_VOLUME

| const int RApi::MD_TRADE_VOLUME = 0x200 |
| --- |

This subscription flag represents daily trade volume. Subscriptions using this flag will cause RCallbacks::TradeVolume() to be invoked when data is received from the infrastructure.
**See also**
  REngine::subscribe()     REngine::subscribeByUnderlying()     RCallbacks::TradeVolume()
## MD_UPDATE_CB

| const int RApi::MD_UPDATE_CB = 2 |
| --- |

Indicates data has been received from a real time stream. Update callbacks can be regarded as current information.
**See also**
  RApi::MD_UPDATE_CB     RApi::MD_HISTORY_CB     RApi::MD_IMAGE_CB
## OP_EQUAL_TO

| const int RApi::OP_EQUAL_TO = (1) |
| --- |

Indicates the equal to (=) operator.
## OP_GREATER_THAN

| const int RApi::OP_GREATER_THAN = (3) |
| --- |

Indicates the greater than (>) operator.
## OP_GREATER_THAN_OR_EQUAL_TO

| const int RApi::OP_GREATER_THAN_OR_EQUAL_TO = (5) |
| --- |

Indicates the greater than or equal to (>=) operator.
## OP_LESS_THAN

| const int RApi::OP_LESS_THAN = (2) |
| --- |

Indicates the less than (<) operator.
## OP_LESS_THAN_OR_EQUAL_TO

| const int RApi::OP_LESS_THAN_OR_EQUAL_TO = (4) |
| --- |

Indicates the less than or equal to (<=) operator.
## OP_NONE

| const int RApi::OP_NONE = (0) |
| --- |

Indicates the absence of an operator.
## OP_NOT_EQUAL_TO

| const int RApi::OP_NOT_EQUAL_TO = (6) |
| --- |

Indicates the not equal to (!=) operator.
## OP_NOT_GREATER_THAN

| const int RApi::OP_NOT_GREATER_THAN = (7) |
| --- |

Indicates the not less than (!>) operator.
## OP_NOT_LESS_THAN

| const int RApi::OP_NOT_LESS_THAN = (8) |
| --- |

Indicates the not less than (!<) operator.
## PNL_CONNECTION_ID

| const int RApi::PNL_CONNECTION_ID = 3 |
| --- |

## REPOSITORY_CONNECTION_ID

| const int RApi::REPOSITORY_CONNECTION_ID = 5 |
| --- |

## sACCOUNT_STATUS_ACTIVE

| const tsNCharcb RApi::sACCOUNT_STATUS_ACTIVE = {(char *)"active", 6} |
| --- |

Indicates that an account is active.
**See also**
  REngine::getAccounts()     RmsInfo::sStatus
## sACCOUNT_STATUS_ADMIN_ONLY

| const tsNCharcb RApi::sACCOUNT_STATUS_ADMIN_ONLY = {(char *)"admin only", 10} |
| --- |

Indicates that only administrators can place or manage orders on the account.
**See also**
  REngine::getAccounts()     RmsInfo::sStatus
## sACCOUNT_STATUS_DONE_FOR_DAY

| const tsNCharcb RApi::sACCOUNT_STATUS_DONE_FOR_DAY = {(char *)"done for day", 12} |
| --- |

Indicates that an account is for done for the trading session, and no more order requests can be made on the account.
**See also**
  REngine::getAccounts()     RmsInfo::sStatus
## sACCOUNT_STATUS_INACTIVE

| const tsNCharcb RApi::sACCOUNT_STATUS_INACTIVE = {(char *)"inactive", 8} |
| --- |

Indicates that an account is inactive.
**See also**
  REngine::getAccounts()     RmsInfo::sStatus
## sADD_ACCOUNT

| const tsNCharcb RApi::sADD_ACCOUNT = {(char *)"add_account", 11} |
| --- |

Indicates that a new account has been added, if the currently logged in user is an administrator for that FCM or IB.
**See also**
  AccountUpdateInfo::sAction
## sADD_USER

| const tsNCharcb RApi::sADD_USER = {(char *)"add_user", 8} |
| --- |

Indicates that a new user has been added.
**See also**
  UserInfo::sAction
## sASSIGN_ACCOUNT_TO_USER

| const tsNCharcb RApi::sASSIGN_ACCOUNT_TO_USER = {(char *)"assign_account_to_user", 22} |
| --- |

Indicates that an account has been assigned to a user.
**See also**
  AccountUpdateInfo::sAction
## sBRACKET_TYPE_STOP_ONLY

| const tsNCharcb RApi::sBRACKET_TYPE_STOP_ONLY = {(char *)"stop only", 9} |
| --- |

This bracket type indicates a stop exit order only. The exit order's price will be determined by the fill price of the entry order.
## sBRACKET_TYPE_STOP_ONLY_STATIC

| vconst tsNCharcb RApi::sBRACKET_TYPE_STOP_ONLY_STATIC = {(char *)"stop only static", 16} |
| --- |

This bracket type indicates a stop exit order only. The exit order's price will be determined by the limit price of the entry order, if available. Otherwise the exit order's price will be determined by the fill price.
## sBRACKET_TYPE_TARGET_AND_STOP

| const tsNCharcb RApi::sBRACKET_TYPE_TARGET_AND_STOP = {(char *)"target and stop", 15} |
| --- |

This bracket type indicates both a target and stop for the exit orders. The exit orders' prices will be determined by the fill price of the entry order.
## sBRACKET_TYPE_TARGET_AND_STOP_STATIC

| const tsNCharcb RApi::sBRACKET_TYPE_TARGET_AND_STOP_STATIC = {(char *)"target and stop static", 22} |
| --- |

This bracket type indicates both a target and stop for the exit orders. The exit orders' prices will be determined by the limit price of the entry order, if available. Otherwise the exit orders' prices will be determined by the fill price.
## sBRACKET_TYPE_TARGET_ONLY

| const tsNCharcb RApi::sBRACKET_TYPE_TARGET_ONLY = {(char *)"target only", 11} |
| --- |

This bracket type indicates a target exit order only. The exit order's price will be determined by the fill price of the entry order.
## sBRACKET_TYPE_TARGET_ONLY_STATIC

| const tsNCharcb RApi::sBRACKET_TYPE_TARGET_ONLY_STATIC = {(char *)"target only static", 18} |
| --- |

This bracket type indicates a target exit order only. The exit order's price will be determined by the limit price of the entry order, if available. Otherwise the exit order's price will be determined by the fill price.
## sBUY_SELL_TYPE_BUY

| const tsNCharcb RApi::sBUY_SELL_TYPE_BUY = {(char *)"B", 1} |
| --- |

This type indicates a buy.
## sBUY_SELL_TYPE_SELL

| const tsNCharcb RApi::sBUY_SELL_TYPE_SELL = {(char *)"S", 1} |
| --- |

This type indicates a sell.
## sBUY_SELL_TYPE_SELL_SHORT

| const tsNCharcb RApi::sBUY_SELL_TYPE_SELL_SHORT = {(char *)"SS", 2} |
| --- |

The sell short type may not be supported by all exchanges.
## sBUY_SELL_TYPE_SELL_SHORT_EXEMPT

| const tsNCharcb RApi::sBUY_SELL_TYPE_SELL_SHORT_EXEMPT = {(char *)"SSE", 3} |
| --- |

The sell short exempt type may not be supported by all exchanges.
## sCOMPLETION_REASON_CANCEL

| const tsNCharcb RApi::sCOMPLETION_REASON_CANCEL = {(char *)"C", 1} |
| --- |

Indicates that the order is complete because of a cancellation of the order.
## sCOMPLETION_REASON_FAILURE

| const tsNCharcb RApi::sCOMPLETION_REASON_FAILURE = {(char *)"FA", 2} |
| --- |

Indicates that the order is complete because of a failure to place the order.
## sCOMPLETION_REASON_FILL

| const tsNCharcb RApi::sCOMPLETION_REASON_FILL = {(char *)"F", 1} |
| --- |

Indicates that the order is complete because of it was completely filled.
## sCOMPLETION_REASON_PFBC

| const tsNCharcb RApi::sCOMPLETION_REASON_PFBC = {(char *)"PFBC", 4} |
| --- |

Indicates that the order is complete due to cancellation after being partially filled (partially filled, balance canceled). Typically this situation occurs when a partially filled order's quantity has been modified at or below the amount that it has already been filled. For example, if an order has 2 of 5 filled, and it is modified with a new quantity of 2, then the order's remaining quantity of 3 will be canceled and the order will be complete.
## sCOMPLETION_REASON_REJECT

| const tsNCharcb RApi::sCOMPLETION_REASON_REJECT = {(char *)"R", 1} |
| --- |

Indicates that the order is complete because of it was rejected.
## sCOMPLETION_REASON_UNKNOWN

| const tsNCharcb RApi::sCOMPLETION_REASON_UNKNOWN = {(char *)"U", 1} |
| --- |

Indicates that the order is complete because of an unknown or unhandled reason.
## sDEFAULT_ENVIRONMENT_KEY

| const tsNCharcb RApi::sDEFAULT_ENVIRONMENT_KEY = {(char *)"system", 6} |
| --- |

Default environment key which is automatically created.
**See also**
  Connecting to Multiple Rithmic Systems Simultaneously Using Environments
## sLINE_STATUS_CANCEL_FAILED

| const tsNCharcb RApi::sLINE_STATUS_CANCEL_FAILED = {(char *)"Cancellation Failed", 19} |
| --- |

Indicates that the cancellation request has failed.
## sLINE_STATUS_CANCEL_PENDING

| const tsNCharcb RApi::sLINE_STATUS_CANCEL_PENDING = {(char *)"cancel pending", 14} |
| --- |

Indicates that a cancellation request has been received by the infrastructure, and is pending.
## sLINE_STATUS_CANCEL_RCVD_BY_EXCH_GWAY

| const tsNCharcb RApi::sLINE_STATUS_CANCEL_RCVD_BY_EXCH_GWAY = {(char *)"cancel received by exch gateway", 31} |
| --- |

## sLINE_STATUS_CANCEL_RECEIVED

| const tsNCharcb RApi::sLINE_STATUS_CANCEL_RECEIVED = {(char *)"Cancel received from client", 27} |
| --- |

Indicates that the cancellation request has been received from the RApi.
## sLINE_STATUS_CANCEL_SENT_TO_EXCH

| const tsNCharcb RApi::sLINE_STATUS_CANCEL_SENT_TO_EXCH = {(char *)"cancel sent to exch", 19} |
| --- |

## sLINE_STATUS_COMPLETE

| const tsNCharcb RApi::sLINE_STATUS_COMPLETE = {(char *)"complete", 8} |
| --- |

Indicates that the order is complete.
## sLINE_STATUS_MOD_TRIGGER_PENDING

| const tsNCharcb RApi::sLINE_STATUS_MOD_TRIGGER_PENDING = {(char *)"modified, trigger pending", 25} |
| --- |

Indicates that the order has been modified, and is awaiting its trigger condition.
## sLINE_STATUS_MODIFIED

| const tsNCharcb RApi::sLINE_STATUS_MODIFIED = {(char *)"modified", 8} |
| --- |

Indicates that a modification has successfully been made.
## sLINE_STATUS_MODIFY_FAILED

| const tsNCharcb RApi::sLINE_STATUS_MODIFY_FAILED = {(char *)"Modification Failed", 19} |
| --- |

Indicates that the modification request has failed.
## sLINE_STATUS_MODIFY_PENDING

| const tsNCharcb RApi::sLINE_STATUS_MODIFY_PENDING = {(char *)"modify pending", 14} |
| --- |

Indicates that a modification request has been received by the infrastructure, and is pending.
## sLINE_STATUS_MODIFY_RCVD_BY_EXCH_GWAY

| const tsNCharcb RApi::sLINE_STATUS_MODIFY_RCVD_BY_EXCH_GWAY = {(char *)"modify received by exch gateway", 31} |
| --- |

## sLINE_STATUS_MODIFY_RECEIVED

| const tsNCharcb RApi::sLINE_STATUS_MODIFY_RECEIVED = {(char *)"Modify received from client", 27} |
| --- |

Indicates that the modification request has been received from the RApi.
## sLINE_STATUS_MODIFY_SENT_TO_EXCH

| const tsNCharcb RApi::sLINE_STATUS_MODIFY_SENT_TO_EXCH = {(char *)"modify sent to exch", 19} |
| --- |

## sLINE_STATUS_OPEN

| const tsNCharcb RApi::sLINE_STATUS_OPEN = {(char *)"open", 4} |
| --- |

Indicates that the order is open.
## sLINE_STATUS_OPEN_PENDING

| const tsNCharcb RApi::sLINE_STATUS_OPEN_PENDING = {(char *)"open pending", 12} |
| --- |

Indicates that the order has been received by the infrastructure, and is pending.
## sLINE_STATUS_ORDER_RCVD_BY_EXCH_GWAY

| const tsNCharcb RApi::sLINE_STATUS_ORDER_RCVD_BY_EXCH_GWAY = {(char *)"order received by exch gateway", 30} |
| --- |

## sLINE_STATUS_ORDER_RECEIVED

| const tsNCharcb RApi::sLINE_STATUS_ORDER_RECEIVED = {(char *)"Order received from client", 26} |
| --- |

Indicates that the order has been received from the RApi.
## sLINE_STATUS_ORDER_SENT_TO_EXCH

| const tsNCharcb RApi::sLINE_STATUS_ORDER_SENT_TO_EXCH = {(char *)"order sent to exch", 18} |
| --- |

## sLINE_STATUS_PARTIAL

| const tsNCharcb RApi::sLINE_STATUS_PARTIAL = {(char *)"partial", 7} |
| --- |

Indicates that the order is partially filled.
## sLINE_STATUS_TRIGGER_PENDING

| const tsNCharcb RApi::sLINE_STATUS_TRIGGER_PENDING = {(char *)"trigger pending", 15} |
| --- |

Indicates that the order has been submitted successfully, and is awaiting its trigger condition.
## sMODIFY_ACCOUNT

| const tsNCharcb RApi::sMODIFY_ACCOUNT = {(char *)"modify_account", 14} |
| --- |

Indicates that an account has been modified.
**See also**
  AccountUpdateInfo::sAction
## sMODIFY_USER

| const tsNCharcb RApi::sMODIFY_USER = {(char *)"modify_user", 11} |
| --- |

Indicates that a user's information has been modified.
**See also**
  UserInfo::sAction
## sORDER_DURATION_DAY

| const tsNCharcb RApi::sORDER_DURATION_DAY = {(char *)"DAY", 3} |
| --- |

This duration indicates that an order is to be valid for the rest of the trading day.
## sORDER_DURATION_FOK

| const tsNCharcb RApi::sORDER_DURATION_FOK = {(char *)"FOK", 3} |
| --- |

This duration indicates that an immediate-or-cancel order which must be filled completely or canceled immediately. In other words, this is an IOC with a minimum quantity equal to the order quantity.
## sORDER_DURATION_GTC

| const tsNCharcb RApi::sORDER_DURATION_GTC = {(char *)"GTC", 3} |
| --- |

This duration indicates that an order is to be good until canceled.
## sORDER_DURATION_IOC

| const tsNCharcb RApi::sORDER_DURATION_IOC = {(char *)"OC", 2} |
| --- |

This duration indicates that an order is to be filled to the extent possible and then cancelled immediately thereafter.
## sORDER_ENTRY_TYPE_AUTO

| const tsNCharcb RApi::sORDER_ENTRY_TYPE_AUTO = {(char *)"A", 1} |
| --- |

This order entry type represents order operations initiated by trading algorithms or programs.
## sORDER_ENTRY_TYPE_MANUAL

| const tsNCharcb RApi::sORDER_ENTRY_TYPE_MANUAL = {(char *)"M", 1} |
| --- |

This order entry type represents order operations initiated by humans manually.
## sORDER_OPERATION_TYPE_AFOCCA

| const tsNCharcb RApi::sORDER_OPERATION_TYPE_AFOCCA = {(char *)"AFOCCA", 6} |
| --- |

Used with OCA orders. Any Fill Or Cancel Cancels All. Any fill (partial or complete) or cancel will cancel all of the other related orders. Note that the order on which the initial fill occurred will not be explicitly canceled. In other words, one might think of this setting as "any fill or cancel cancels all others".
**See also**
  REngine::sendOcaList     BracketParams::sOrderOperationType
## sORDER_OPERATION_TYPE_CCA

| const tsNCharcb RApi::sORDER_OPERATION_TYPE_CCA = {(char *)"CCA", 3} |
| --- |

Used with OCA orders. Cancel Cancels All. If any of the orders cannot be placed, or are canceled, the remaining orders are canceled.
**See also**
  REngine::sendOcaList     BracketParams::sOrderOperationType
## sORDER_OPERATION_TYPE_FCA

| const tsNCharcb RApi::sORDER_OPERATION_TYPE_FCA = {(char *)"FCA", 3} |
| --- |

Used with OCA orders. Fill Cancels All. If any of the orders are filled, the remaining orders are canceled.
**See also**
  REngine::sendOcaList     BracketParams::sOrderOperationType
## sORDER_OPERATION_TYPE_FOCCA

| const tsNCharcb RApi::sORDER_OPERATION_TYPE_FOCCA = {(char *)"FOCCA", 5} |
| --- |

Used with OCA orders. Fill Or Cancel Cancels All. Any order completion causes the remaining orders to be canceled.
**See also**
  REngine::sendOcaList     BracketParams::sOrderOperationType
## sORDER_TYPE_EXTERNAL

| const tsNCharcb RApi::sORDER_TYPE_EXTERNAL = {(char *)"E", 1} |
| --- |

This order type is the default order type for manual fills. Manual fills are logical fills that are not from the exchange, but issued from within the infrastructure to reconcile the internal state of an order within the infrastructure.
## sORDER_TYPE_LIMIT

| const tsNCharcb RApi::sORDER_TYPE_LIMIT = {(char *)"L", 1} |
| --- |

This order type represents limit orders.
## sORDER_TYPE_LMT_IF_TOUCHED

| const tsNCharcb RApi::sORDER_TYPE_LMT_IF_TOUCHED = {(char *)"LIT", 3} |
| --- |

## sORDER_TYPE_MARKET

| const tsNCharcb RApi::sORDER_TYPE_MARKET = {(char *)"M", 1} |
| --- |

This order type represents market orders.
## sORDER_TYPE_MKT_IF_TOUCHED

| const tsNCharcb RApi::sORDER_TYPE_MKT_IF_TOUCHED = {(char *)"MIT", 3} |
| --- |

## sORDER_TYPE_STOP_LIMIT

| const tsNCharcb RApi::sORDER_TYPE_STOP_LIMIT = {(char *)"SLMT", 4} |
| --- |

This order type represents stop limit orders.
## sORDER_TYPE_STOP_MARKET

| const tsNCharcb RApi::sORDER_TYPE_STOP_MARKET = {(char *)"STP", 3} |
| --- |

This order type represents market orders.
## sRELEASE_CMD_HOLD_ORDER

| const tsNCharcb RApi::sRELEASE_CMD_HOLD_ORDER = {(char *)"hold_order", 10} |
| --- |

Indicates that this order is to be 'held' until explicitly released.
**See also**
  RApi::OrderParams::sReleaseCommand     RApi::LineInfo::sReleaseCommand
## sREMOVE_ACCOUNT_FROM_USER

| const tsNCharcb RApi::sREMOVE_ACCOUNT_FROM_USER = {(char *)"remove_account_from_user", 24} |
| --- |

Indicates that an account has been removed from a user.
**See also**
  AccountUpdateInfo::sAction
## sTRADE_ROUTE_STATUS_DOWN

| const tsNCharcb RApi::sTRADE_ROUTE_STATUS_DOWN = {(char *)"DOWN", 4} |
| --- |

This status indicates that the trade route is not available for use.
## sTRADE_ROUTE_STATUS_UP

| const tsNCharcb RApi::sTRADE_ROUTE_STATUS_UP = {(char *)"UP", 2} |
| --- |

This status indicates that the trade route is available for use.
## sUSER_STATUS_DISABLED

| const tsNCharcb RApi::sUSER_STATUS_DISABLED = {(char *)"disabled", 8} |
| --- |

Indicates that a user is disabled.
**See also**
  UserInfo::sStatus
## sUSER_STATUS_ENABLED

| const tsNCharcb RApi::sUSER_STATUS_ENABLED = {(char *)"enabled", 7} |
| --- |

Indicates that a user is enabled.
**See also**
  UserInfo::sStatus
## sUSER_TYPE_FCM

| const tsNCharcb RApi::sUSER_TYPE_FCM = {(char *)"1", 1} |
| --- |

## sUSER_TYPE_IB

| const tsNCharcb RApi::sUSER_TYPE_IB = {(char *)"2", 1} |
| --- |

## sUSER_TYPE_TRADER

| const tsNCharcb RApi::sUSER_TYPE_TRADER = {(char *)"3", 1} |
| --- |

## TRADE_PRICE

| const int RApi::TRADE_PRICE = 6 |
| --- |

Specifies the use of the most recent trade price for certain operations, such as if-touched orders.
## TRADING_SYSTEM_CONNECTION_ID

| const int RApi::TRADING_SYSTEM_CONNECTION_ID = 2 |
| --- |

Specifies the trading system connection (order plant).
## UPDATE_TYPE_AGGREGATED

| const int RApi::UPDATE_TYPE_AGGREGATED = 6 |
| --- |

Indicates that the market depth updates are being aggregated over a time period. Indicators for solo/begin/middle/end of aggregated data are not supported.
## UPDATE_TYPE_BEGIN

| const int RApi::UPDATE_TYPE_BEGIN = 2 |
| --- |

Indicates the update is the first of a group of updates.
## UPDATE_TYPE_CLEAR

| const int RApi::UPDATE_TYPE_CLEAR = 5 |
| --- |

Reserved for internal use.
## UPDATE_TYPE_END

| const int RApi::UPDATE_TYPE_END = 4 |
| --- |

Indicates the update is part of a group of updates, and is the last update.
## UPDATE_TYPE_MIDDLE

| const int RApi::UPDATE_TYPE_MIDDLE = 3 |
| --- |

Indicates the update is part of a group of updates, and is neither the first update or the last update.
## UPDATE_TYPE_SOLO

| const int RApi::UPDATE_TYPE_SOLO = 1 |
| --- |

Indicates the update is a solitary update.
## UPDATE_TYPE_UNDEFINED

| const int RApi::UPDATE_TYPE_UNDEFINED = 0 |
| --- |

Indicates an undefined value and does not apply.
## VALUE_STATE_CLEAR

| const int RApi::VALUE_STATE_CLEAR = 1 |
| --- |

Indicates that the corresponding value should be cleared. This instruction is typically sent when a value does not apply or no longer applies.

For example, while a position is held, there is an average open fill price. Once that position is closed out, the average open fill price no longer exists, as the pnl is now closed. In this case there would be an update to the average open fill price with an update instruction to clear the value.

FAQ - Instruction Enum
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE     RCallbacks::PnlUpdate     PnlInfo::eAvgOpenFillPrice     PnlInfo::dAvgOpenFillPrice
## VALUE_STATE_IGNORE

| const int RApi::VALUE_STATE_IGNORE = 0 |
| --- |

Indicates that the corresponding value should be ignored. Any existing value, if it exists, should be regarded as current.

FAQ - Instruction Enum
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE
## VALUE_STATE_USE

| const int RApi::VALUE_STATE_USE = 2 |
| --- |

Indicates that the corresponding value should be used.

An example would be if a position is taken on some instrument, the average open fill price (which previously did not apply) would become a well defined value. An update via PnlInfo would reflect that change, with PnlInfo::eAvgOpenFillPrice set with a value of INSTRUCTIOn_USE, indicating that the value in PnlInfo::dAvgOpenFillPrice be used.

FAQ - Instruction Enum
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE    RCallbacks::PnlUpdate     PnlInfo::eAvgOpenFillPrice     PnlInfo::dAvgOpenFillPrice
