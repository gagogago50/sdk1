> **R | API+ — Version 13.7.0.0** | F.A.Q. Rithmic Trade

# F.A.Q. - R | Trade Execution Platform(tm)

F.A.Q. - R | Trade Execution Platform(tm)
#  Table Of Contents

-  Agreements
-  Market Data Permissions
-  Risk Limits
-  What Values Should I Use For Symbol/Ticker and Exchange?
-  How do I maintain order state?
-  I submitted a stop market (or stop limit) order. Now I am receiving callbacks for this order number, but now the order type is different. What happened?
-  Why are there so many ways to place or modify orders?
-  I place an order and get the following error. What happened?
-  Why are my orders behaving strangely in Rithmic Test?
-  What are trade routes and how do I use them?
-  What is this message about cancelling orders only after 30 seconds?
-  Is it possible to instantiate multiple instances of REngine in a single process space?
-  Why does my market data callback only fire once?
-  In the test environment, I place an order but I don't see the order appear in the market data stream. What happened?
-  When I specify a limit price, the order is rejected due to the price being invalid or out of range. The market data stream indicates that the price should be okay. What happened?
-  What are MIT and LIT orders?
-  Do I have to copy the AccountInfo instances that are given to me in RCallbacks::AccountList()?
-  Why are there boolean flags associated with prices and sizes? What do they mean?
-  Why are there enums associated with values in certain classes?
-  How do I maintain an order book? (Or, how do I use update types with AskInfo, BidInfo and EndQuoteInfo?)
-  What is DBO data and how might I use it?
-  How do I find queue position for my order using DBO data?
-  What is a binary contract?
-  What is the meaning of AskInfo::bPriceFlag, AskInfo::bSizeFlag, BidInfo::bPriceFlag and BidInfo::bSizeFlag?

---

#  Agreements

There may be usage/license agreements (from exchanges, data providers, etc.) which must be accepted/signed by Rithmic users. These agreements are specific to each Rithmic system. If a mandatory agreement exists, but has not been accepted by a user, that user's login attempts to the trading platform (see RCallbacks::Alert()) will fail, even with correct credentials.

However, one can discover which agreements exist, if they are mandatory, and if they have been accepted. First, one must log in successfully to the repository connect point using REngine::loginRepository(). To do so, one uses one's normal login credentials to the trading platform. However, the authentication for logging into the respository connect point does not rely on any acceptance of agreements. Alerts (RCallbacks::Alert()) will convey the status of the login attempt to the repository connect point.

After logging in to the repository connect point, one can request agreements from the repository sub-system using REngine::listAgreements(). One can request accepted or unaccepted agreements. The results are returned via RCallbacks::AgreementList().

The AgreementInfo class has a flag indicating whether the agreement is mandatory or not. If there are mandatory agreements which have not been accepted, one must log in to that system (e.g. Rithmic Test) using R | Trader or R | Trader Pro, and accept those agreements. After doing so, the user will be able to log in to the trading platform normally. Because these agreements are specific to each Rithmic system, it is possible that one must accept agreements for multiple systems as they are accessed (i.e. Rithmic Test, Rithmic Paper Trading, etc.)

It is not possible to accept agreements or view their contents using R | API.
 For these tasks one must use R | Trader or R | Trader Pro.
**See also**
  REngine::loginRepository     REngine::logoutRepository     REngine::listAgreements     AgreementListInfo     AgreementInfo

---

#  Market Data Permissions

If you find that you cannot subscribe for market data, your User ID may not have permissions on those instruments. Contact the organization that provided you with your User ID and ask them for market data entitlements to that instrument.

---

#  Risk Limits

If you find that when you place an order and get an error message about risk limits not being set, the Account under which you are placing the order may not have risk settings configured for that instrument. Contact the organization that provided you with your Account and ask them to set risk limits for that instrument.

It is also possible that the risk management algorithm used for your Account does not apply to the instrument you are trying to trade. As above, contact the orgranization which provided the Account to get the appropriate risk configuration set up.

---

#  What Values Should I Use For Symbol/Ticker and Exchange?

The R | API typically uses the same symbology as the exchange's data feed. Exchange names tend to be all upper case letters. A quick way to get positive confirmation is to call REngine::getRefData() for the instrument. If you get back data, the values were good. If you get back an error code of 7, or 'no data', the instrument may not exist. (The infrastructure has no data on the instrument specified.) This test should work whether or not your User ID has market data permissions on that instrument.

If you have R | Trader, you can use the Search/Add Symbol window to find the instrument.

---

#  How do I maintain order state?

One maintains order state by applying updates to the set of existing or known orders.

To get updates for orders placed under an account, one calls REngine::subscribeOrder(). There are a number of callbacks that will be invoked as order updates are published by the infrastructure. These callbacks will use the OrderReport and LineInfo classes to convey order information. In general, the OrderReport callbacks indicate some event has occurred.

To get a snapshot of orders placed under an account, one should call REngine::replayAllOrders() or REngine::replayOpenOrders(), depending on whether one wants all orders from the current trading session, or just the open orders at that moment. The orders will be returned via RCallbacks::OrderReplay() or RCallbacks::OpenOrderReplay() in an OrderReplayInfo instance which will contain an array of LineInfo objects. These LineInfo objects represent the order snapshots.

In order not to miss any updates, it is important to call REngine::subscribeOrder() prior to calling REngine::replayAllOrders() or REngine::replayOpenOrders(). If an update is published after the replay orders request is handled, but before the subscribe call is made, that update will be lost.

If one is considering migrating to R | Diamond Cutter, it may be prudent to rely only on OrderReport callbacks to maintain state, as the R | Diamond Cutter system does not publish as much convenience information and updates in the form of LineInfo instances via RCallbacks::LineUpdate.

---

#  I submitted a stop market (or stop limit) order. Now I am receiving callbacks for this order number, but now the order type is different. What happened?

R | API generally forwards order information as it is provided by the exchanges. It is possible that the exchange will change the order type of an order during its life cycle.

For example, when a CME stop market order is triggered, it becomes a limit order. The reason this happens is because the CME does not support a 'true' market order, but instead what they call a 'market order (with protection)'. When a stop market order is triggered, the exchange converts the order type to a limit order.

---

#  Why are there so many ways to place or modify orders?

There are four convenience routines to provide a more simple interface for placing common types of orders :
-  REngine::sendOrder(LimitOrderParams)
-  REngine::sendOrder(MarketOrderParams)
-  REngine::sendOrder(StopLimitOrderParams)
-  REngine::sendOrder(StopMarketOrderParams)

These methods are provided for users who do not need the complete set of parameters associated with a placing an order. The more generalized method for placing an order is REngine::sendOrderList(). This method allows users to place multiple orders simultaneously, with more parameters for each order. It is also more complex. It is called internally by the simpler sendOrder() methods.

The same idea applies to REngine::modifyOrder(), except that you can't modify a list of orders with one call.

---

#  I place an order and get the following error. What happened?

An error of 6 (API_BAD_INPUT or 'bad input') usually means that some required parameter is missing, or the account being specified is not tied to the user who is logged in. Beginning with version 6.1.0.0, the trade route of an order is required, so if you are migrating from a version before that, you will have to provide a valid route.

An error of 11 (API_NO_HANDLE or 'no handle') when placing an order may mean that you are not currently logged in to the trading system (there is no handle representing the trading system connection). When you log in, do you specify a value for LoginParams::sTsCnnctPt? (See SampleOrder.cpp for an example.) Also, do you get an Alert callback indicating that the login is complete (AlertInfo::iAlertType equals ALERT_LOGIN_COMPLETE)? It is also possible that the login handshake is not yet done or the connection is in recovery.

An error of 23 (API_MINOR_ERROR or 'minor error') means that the R | API does not have instrument-specific data that is used internally. This internally used data is typically retrieved automatically when subscribing to the market data of a particular instrument. When placing orders in C++, this data is not retrieved automatically, as it requires a round trip to the infrastructure before actually sending the order request. However, you can get the reference data explicitly by doing the following :
```
Call REngine::getPriceIncrInfo(), which will cause RCallbacks::PriceIncrUpdate() to fire.
Check the value of PriceIncrInfo::iRpCode in the callback. If the value of iRpCode is API_OK (0), then you have this reference data necessary for placing orders.

```

 The reason this extra step is not done automatically is to allow latency sensitive users to retrieve this data manually before any orders need to be placed.

---

#  Why are my orders behaving strangely in Rithmic Test?

Rithmic Test connects to exchanges' test matching engines and market data distribution systems. The market represented by this test system is generally different from what one might see in a production environment, as it represents the market activity of other testers. The test environment might have very little order flow, and consequently, very little market data. The market data that is published may be drastically different than live market data. Furthermore, sometimes the exchange's test matching engine and test market data can be out-of-sync.

An exchange may have matching algorithms and features which, combined with a sparse market as one might find in the test system, yield unexpected order behavior. Examples of such features are market orders with protection (market orders cannot be filled outside of a particular price range) and price banding (orders cannot be placed outside of a particular price range).

For example, a market order (with protection) might be converted to a limit order if there are no matching orders within the allowable price range. However, automatically generated limit price of this market order might fall outside of the trading session's price band. In this case, it may appear that the market order should have been filled, but is instead rejected. Sometimes the exchange's error text (found in OrderRejectReport) can be used to figure out what happened.

---

#  What are trade routes and how do I use them?

Some accounts have access to multiple gateways that support orders on the same instrument. A trade route specifies such a gateway. As such, a number of order requests require the trade route to be specified as a parameter. Even when an account/instrument has only a single trade route, the trade route must still be specified.

Available trade routes can be retrieved from the infrastructure and monitored. To do so, the engine must be connected and logged in to the trading system connect point (LoginParams::sTsCnnctPt). Some order snapshots and updates will convey the trade route associated with the order.

Retrieving and maintaining state for trade routes follows the Snapshot-Update Pattern (Establishing And Maintaining State With The Snapshot-Update Pattern), with REngine::listTradeRoutes() providing the snapshot and REngine::subscribeTradeRoute() providing updates.

For more information see the following :
-  REngine::listTradeRoutes()
-  REngine::subscribeTradeRoute()
-  REngine::unsubscribeTradeRoute()
-  TradeRouteInfo
-  OrderParams::sTradeRoute
-  LimitOrderParams::sTradeRoute
-  MarketOrderParams::sTradeRoute
-  LineInfo::sTradeRoute

---

#  What is this message about cancelling orders only after 30 seconds?

The reason for the "Send cancels only after 30 secs. More cancels within this period will lead to logoff/disable of this user." message is because you probably sent a cancel request for an order that was already complete and so the cancellation request failed.

The Rithmic platform expects clients to refrain from requesting order cancellations if the order is already complete, and also expects users to not send more than once cancel request per order. If a cancel request is rejected, generally it is usually not a good idea to automatically send a subsequent cancel.

Usually this scenario indicates a race condition where the order was complete but the client app didn't know it yet. Other times it indicates something awry with the client order state management. However, sometimes this behavior indicates a program that has gone out of control.

We have automated sentinels which will logoff/disable such programs. Currently the threshold for such sentinels is if 10 cancels received in a 30 second period for an order where a cancel has been rejected. Sending less than 10 cancels in a 30 second period will not trigger the sentinels, and waiting an additional 30 seconds will also not trigger these sentinels.

---

#  Is it possible to instantiate multiple instances of REngine in a single process space?

Using multiple instances of the REngine within a single process space is not intended or tested. The REngine can be regarded as something of a singleton, even though the singleton pattern is not enforced by the interface. Having said that, there have been reports from the field where an application does instantiate multiple REngines successfully.

---

#  Why does my market data callback only fire once?

When subscribing to market data, the first callback invocation is usually the image callback. The image callback represents the most recent value, or snapshot, of the data. As new/updated data becomes available and is published, the callback will be invoked again. (If there are no updates, the callback will not be invoked.)

For some subscriptions, the callback may not fire so frequently because the updates are infrequent. Subscribing to market mode updates is an example. Sometimes, callbacks will not fire because there are no updates, even though one normally expects many updates. An example might be subscriptions to trades on highly traded instruments, but in the Rithmic Test environment. The lack of updates can occur because the market data in that environment is driven from the exchanges' test environments and can be very, very sparse.

---

#  In the test environment, I place an order but I don't see the order appear in the market data stream. What happened?

This scenario shouldn't happen in a production environment. However, in test environments, the matching engine producing the market data feed and the order matching engine handling orders may not be the same. It may depend on which connect points you used to log in, or how the exchange is configuring their test environment at the time.

---

#  When I specify a limit price, the order is rejected due to the price being invalid or out of range. The market data stream indicates that the price should be okay. What happened?

As above, this can happen if order matching engine is not producing the market data stream.

---

#  What are MIT and LIT orders?

Market-If-Touched and Limit-If-Touched orders are market or limit orders which are held within the infrastructure, and then placed by the infrastructure if and when a pre-defined market data condition is met (or "touched"). One can specify the instrument, the price type (trade, best bid, or best ask), and an operator. The following parameters are used :
```
     <ul>
     <li>
     OrderParams::sTriggerTicker - the instrument name
     </li>
     <li>
     OrderParams::sTriggerExchange - the instrument's exchange
     </li>
     <li>
     OrderParams::dTriggerPrice - the price to evaluate
     </li>
     <li>
     OrderParams::iTriggerCmpOperator - the comparison operator to use
     </li>
     <li>
     OrderParams::iTriggerPriceId - the type of price to use
     </li>
     </ul>

```

 For example, one can place a limit order when CME's ESM0 trades at a price greater than 1200. The following values would be used :
-  OrderParams::sOrderType - RApi::sORDER_TYPE_LMT_IF_TOUCHED
-  OrderParams::sTriggerTicker - ESH0
-  OrderParams::sTriggerExchange - CME
-  OrderParams::dTriggerPrice - 1200.00
-  OrderParams::iTriggerCmpOperator - RApi::OP_GREATER_THAN
-  OrderParams::iTriggerPriceId - RApi::TRADE_PRICE

The MIT/LIT orders can only be placed using REngine::sendOrderList(). It is possible that the order is sent immediately if the condition is currently true. Finally, the instrument of the underlying market or limit order does not have to be the same instrument used in the trigger condition.
```
 <hr>

```

#  Do I have to copy the AccountInfo instances that are given to me in RCallbacks::AccountList()?

Yes, you should retain your own copies of the AccountInfo instances. When placing orders, or making other method calls which require a pointer to an AccountInfo instance, you can leave the AccountInfo::pRmsInfo value nulled.

---

#  Why are there boolean flags associated with prices and sizes? What do they mean?

It is sometimes possible that the value of something becomes undefined. In C++, when an undefined value is passed to a callback, the value of the flag indicates whether the value of the typed data (usually a double for prices and an integer for sizes) is undefined or not. Therefore, when using callbacks where such flags are available, the value of the flag must be checked prior to using the value of the associated data. In the .NET compilation, flags are not used. However, the .NET compilation does use NaN to indicate an undefined value.

---

#  Why are there enums associated with values in certain classes?

In R | API, there are member variables which change over time, not just in value, but between states of being well-defined or not defined.

One example is the average open fill price for a position. Until a position is opened, there is no average open fill price. It does not exist. While the position is held, however, there is a well-defined average open fill price. Finally, when the position is closed, the average open fill price ceases to exist.

The enums sent for the above example would be RApi::VALUE_STATE_CLEAR prior to when the position is opened, RApi::VALUE_STATE_USE while there is a position and average open fill price, and then finally RApi::VALUE_STATE_CLEAR when the position is closed.

Another example is margin balance for an account using the minimum account balance algorithm. The risk manager does not calculate the margin balance for such an account as it is not used to allow or deny order operations. So any pnl updates would indicate RApi::VALUE_STATE_CLEAR for the margin balance value.
 This instruction indicates that the margin balance does not exist, or does not apply.

Finally, there is the instruction to ignore a value. One of the optimizations used by the infrastructure is to minimize the size and frequency of messages. The impact of these optimizations on R | API interface is that sometimes updates can be 'sparse'. R | API classes are designed to group related data and bundle them up into classes. However, it is possible that only a subset of member variables within a class instance has changed. In this case, the infrastructure may not transmit a complete set of data corresponding to the class. Instead, it will send only the data which has changed. The member variables which are NOT being updated will be marked with RApi::VALUE_STATE_IGNORE. This indicates that any previously transmitted value for that variable should not be updated or discarded.

An example of this might be when the open pnl (which depends on current market conditions) updates, while the average open fill price (which depends on fill events) does not. In this case, the infrastructure may send an update which only includes the open pnl value.

This convention is not designed to replace the boolean flag convention used elsewhere in R | API. However, it is used where the boolean flag convention is not sufficient to convey the state of affairs accurately.
**See also**
  RApi::VALUE_STATE_IGNORE     RApi::VALUE_STATE_CLEAR     RApi::VALUE_STATE_USE

---

#  How do I maintain an order book? (Or, how do I use update types with AskInfo, BidInfo and EndQuoteInfo?)

To get a snapshot of depth of market data for an order book, one can call REngine::rebuildBook(), which causes RCallbacks::LimitOrderBook() to fire.
 Although it may seem easy to continually call REngine::rebuildBook() whenever one wishes to see the current order book, it can be quite resource intensive and slow compared to getting continual updates using subscriptions.

To get continual updates to depth of market data, one should call REngine::subscribe() or REngine::subscribeByUnderlying(), and specify the RApi::MD_QUOTES subscription flag. The first callback to fire is RCallbacks::LimitOrderBook(), which provides a snapshot of the entire order book. This order book snapshot should be saved by the application. Subsequent updates will arrive via RCallbacks::AskQuote(), RCallbacks::BidQuote(), RCallbacks::EndQuote() and/or RCallbacks::LimitOrderBook(). These updates should be applied to the previously saved order book.

Sometimes atomic updates to an order book span multiple price levels, and/or both sides of the order book. In the R | API, there is one callback per side and price level, so these updates can span multiple callback invocations. For example, if an update to the order book spans two bid price levels, the R | API will invoke RCallbacks::BidQuote() twice. However, the order book should only be evaluated after the second update.

The update type provides the additional information to determine when the order book can be evaluated. If the update is a solitary update, the type will be RApi::UPDATE_TYPE_SOLO and the order book can be evaluated immediately. If the update is part of a set of updates, the set will begin with an update type of RApi::UPDATE_TYPE_BEGIN and end with an update type of RApi::UPDATE_TYPE_END. There may be additional RApi::UPDATE_TYPE_MIDDLE updates in between. Although there is price level information with types RApi::UPDATE_TYPE_BEGIN and RApi::UPDATE_TYPE_MIDDLE, it is possible for RApi::UPDATE_TYPE_END to have no price information. When this occurs the update type will be conveyed via RCallbacks::EndQuote().

If a user subscribes to RApi::MD_BEST, the RApi::BidInfo or RApi::AskInfo objects passed via RCallbacks::BestBidQuote(), RCallbacks::BestBidAskQuote(), and/or RCallbacks::BestAskQuote() will have their update types set to RApi::UPDATE_TYPE_UNDEFINED.

Finally, RApi::UPDATE_TYPE_CLEAR is only used internally.

---

#  What is DBO data and how might I use it?

Some exchanges provide market depth data in the form of individual orders comprising the order book. Rithmic calls this order-centric approach to disseminating market depth data "depth-by-order", or DBO (see DboInfo).
 Similar data is sometimes called market-by-order (mbo) data or order-by-order data. Each order might have a side, price and quantity. It might also have an exchange order id, as well as some indication of where in the matching queue this order rests. This indication of queue position is sometimes called order priority or time-price-priority. Rithmic calls this priority (see DboInfo::sPriority).

Dbo data is in contrast to price-centric market depth data, which associates an available (visible) quantity with a given price. This price-centric approach is sometimes referred to as market-by-price data.

Depth-by-order data is supported by R | API+ or above.

Market-by-price data is supported by all versions of R | API.

---

#  How do I find queue position for my order using DBO data?

Depth-by-order data is supported by R | API+ or above. The following example applies to Globex/CME data at the time of writing.

Finding an order's queue position requires the exchange order id as well as all the orders (with their respective order priorities) for that instrument at that price and on that side of the order book.

The exchange assigns a unique exchange order id (which is not the same as the Rithmic order number) when it creates an order. This value is normally in LineInfo::sExchOrdId or OrderReport::sExchOrdId. You must be subscribing to order updates for the account on which the order was placed (see REngine::subscribeOrder()) to get the LineInfo or OrderReport updates on your order.

Next, you need the collection of all resting orders for that instrument at that price and side. Each order in the collection should have an exchange order id (DboInfo::sExchOrdId), including your order of interest. Each order in the collection should also have a matching engine priority (DboInfo::sPriority). This field is a string in the Rithmic interface, although, for Globex, it translates to a numeric value (64-bit unsigned long). The lower the priority, the closer that order is to the front of the queue. By examining all the order priorities and order quantities in the collection, one can determine how many orders and how much quantity is ahead in the exchange queue.

---

#  What is a continuous contract?

Futures contracts generally have some periodic expiration (weekly, monthly, or quarterly, for example). Related to the expiration is when these contracts are available to trade. Contract specifications as published by exchanges normally detail when an expiry of a particular future becomes available to trade, and when it can no longer be traded.

When examining historical data (i.e. candlestick data) for a particular future, some find it convenient to examine data across various expiration dates, enabling time horizons which extend beyond the tradeable time periods of any individual futures contract.

In Rithmic, the 'continuous contract' refers to an alias ticker symbol for a futures contract, used to indicate the highest volume futures contract within a product group. This often is the same as the front month contract, the futures contract which has the nearest expiry date.

Normally one can access a continuous contract's data by specifying the product code instead of the futures ticker symbol. This alias can be used to retrieve reference data, subscribe for most market data, and subscribe for or retrieve candlestick data. However, one cannot subscribe to market depth data using continuous contracts, and one cannot place orders using continuous contracts.

One can discover the actual future of the continuous contract using R | API+. To do this, one can call REngine::getRefData() for the continuous contract, or call REngine::subscribe() with the reference data subscription flag enabled. The actual contract will be specified in the returned RefDataInfo::sTradingTicker and RefDataInfo::sTradingExchange.

---

#  What is a binary contract?

Binary contracts are sometimes called "binary options" or "bull spreads". The binary contract type of "Fixed" is a binary option and binary contract types of "Varible", "Narrow Spread", and "Wide Spread" are bull spreads.

These types may change, as the string values are provided by the exchange. The definition of these contract types are conveyed with RefDataInfo instances and can be retrieved from a database (REngine::getBinaryContractList()) or via subscription (REngine::subscribeByUnderlying()).

Fixed binary contracts (binary options) have a single price (RefDataInfo::dStrikePrice) with an operator (RefDataInfo::sStrikeOperator) which indicates the payout threshold of the option.

Variable/spread binary contracts (bull spreads) have a price range (RefDataInfo::dFloorPrice and RefDataInfo::dCapPrice) which determines the payout range. In this case the RefDataInfo::dStrikePrice indicates the midpoint in the payout price range.

Some binary contracts are intraday, existing only for a time period of an hour or two during a trading session. To subscribe to these instrument definitions, one should use REngine::subscribeByUnderlying() and specify MD_REF_DATA as a subscription flag.

For additional information, one can reference the documentation on NADEX, or contact Rithmic.

---

#  What is the meaning of AskInfo::bPriceFlag, AskInfo::bSizeFlag, BidInfo::bPriceFlag and BidInfo::bSizeFlag?

```
 <table>
      <tr>
           <td>
           <b>Callback</b>
           </td>
           <td>
           <b>Condition</b>
           </td>
           <td>
           <b>Meaning</b>
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BestAskQuote()
           </td>
           <td>
           AskInfo::bPriceFlag == true
           AskInfo::bSizeFlag == true
           </td>
           <td>
           This AskInfo represents the current best ask price and size.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BestAskQuote()
           </td>
           <td>
           AskInfo::bPriceFlag == true
           AskInfo::bSizeFlag == false
           </td>
           <td>
           This condition should not occur.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BestAskQuote()
           </td>
           <td>
           AskInfo::bPriceFlag == false
           AskInfo::bSizeFlag == true
           </td>
           <td>
           This condition should not occur, but can be interpreted as
           there is no best ask price.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BestAskQuote()
           </td>
           <td>
           AskInfo::bPriceFlag == false
           AskInfo::bSizeFlag == false
           </td>
           <td>
           There is no best ask price.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BestBidQuote()
           </td>
           <td>
           BidInfo::bPriceFlag == true
           BidInfo::bSizeFlag == true
           </td>
           <td>
           This BidInfo represents the current best bid price and size.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BestBidQuote()
           </td>
           <td>
           BidInfo::bPriceFlag == true
           BidInfo::bSizeFlag == false
           </td>
           <td>
           This condition should not occur.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BestBidQuote()
           </td>
           <td>
           BidInfo::bPriceFlag == false
           BidInfo::bSizeFlag == true
           </td>
           <td>
           This condition should not occur, but can be interpreted as
           there is no best bid price.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BestBidQuote()
           </td>
           <td>
           BidInfo::bPriceFlag == false
           BidInfo::bSizeFlag == false
           </td>
           <td>
           There is no best bid price.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::AskQuote()
           </td>
           <td>
           AskInfo::bPriceFlag == true
           AskInfo::bSizeFlag == true
           </td>
           <td>
           This AskInfo represents a current ask price and size.
           <p>
           If a price level is no longer a part of the 'known' order book,
           the size will have a value of zero.  Some exchanges make
           available only a certain number of price levels.  If a price
           level moves beyond the depth provided by the exchange, the size
           will be zero, indicating that this price is no longer part of
           the 'known' order book.  Note that in this case, one cannot
           categorically assume that the available quantity at this price
           is zero.
           </p>
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::AskQuote()
           </td>
           <td>
           AskInfo::bPriceFlag == true
           AskInfo::bSizeFlag == false
           </td>
           <td>
           This condition should not occur, but can be interpreted as
           a price for which the available size is unknown.
           A size which is unknown is not necessarily zero.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::AskQuote()
           </td>
           <td>
           AskInfo::bPriceFlag == false
           AskInfo::bSizeFlag == true
           </td>
           <td>
           This should not occur.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::AskQuote()
           </td>
           <td>
           AskInfo::bPriceFlag == false
           AskInfo::bSizeFlag == false
           </td>
           <td>
           This should not occur.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BidQuote()
           </td>
           <td>
           BidInfo::bPriceFlag == true
           BidInfo::bSizeFlag == true
           </td>
           <td>
           This BidInfo represents a current bid price and size.
           <p>
           If a price level is no longer a part of the 'known' order book,
           the size will have a value of zero.  Some exchanges make
           available only a certain number of price levels.  If a price
           level moves beyond the depth provided by the exchange, the size
           will be zero, indicating that this price is no longer part of
           the 'known' order book.  Note that in this case, one cannot
           categorically assume that the available quantity at this price
           is zero.
           </p>
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BidQuote()
           </td>
           <td>
           BidInfo::bPriceFlag == true
           BidInfo::bSizeFlag == false
           </td>
           <td>
           This condition should not occur, but can be interpreted as
           a price for which the available size is unknown.
           A size which is unknown is not necessarily zero.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BidQuote()
           </td>
           <td>
           BidInfo::bPriceFlag == false
           BidInfo::bSizeFlag == true
           </td>
           <td>
           This should not occur.
           </td>
      </tr>

      <tr>
           <td>
           RCallbacks::BidQuote()
           </td>
           <td>
           BidInfo::bPriceFlag == false
           BidInfo::bSizeFlag == false
           </td>
           <td>
           This should not occur.
           </td>
      </tr>
 </table>

```

---
