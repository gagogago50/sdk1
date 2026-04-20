> **Namespace:** `RApi`

# RApi::LoginParams

Public Member Functions | Public Attributes | List of all members  RApi::LoginParams Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | LoginParams () |
|  |
| virtual | ~LoginParams () |
|  |

| Public Attributes |
| --- |
| RCallbacks * | pCallbacks |
|  |
| tsNCharcb | sIhCnnctPt |
|  |
| tsNCharcb | sIhEnvKey |
|  |
| tsNCharcb | sIhPassword |
|  |
| tsNCharcb | sIhUser |
|  |
| tsNCharcb | sMdCnnctPt |
|  |
| tsNCharcb | sMdEnvKey |
|  |
| tsNCharcb | sMdPassword |
|  |
| tsNCharcb | sMdUser |
|  |
| tsNCharcb | sPnlCnnctPt |
|  |
| tsNCharcb | sTsCnnctPt |
|  |
| tsNCharcb | sTsEnvKey |
|  |
| tsNCharcb | sTsPassword |
|  |
| tsNCharcb | sTsUser |
|  |

## Detailed Description

This class encapsulates information needed to login. The information includes authentication credentials, connect points for accessing services, as well as callbacks for receiving notifications from the login session.

Connect point values are typically provided by the Rithmic operations team in 'connection_params.txt' files downloaded from your Rithmic download directory.
**See also**
  REngine::login
## Constructor & Destructor Documentation

## LoginParams()

| LoginParams::LoginParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integers and doubles are initialized to zero. Boolean values are set to false. Pointer values are set to NULL. Pointers to arrays are set to NULL and their lengths are set to zero.
## ~LoginParams()

| LoginParams::~LoginParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| LoginParams::~LoginParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Data Documentation

## pCallbacks

| RApi::LoginParams::pCallbacks |
| --- |

This points to an instance of a user-defined subclass of RApi::RCallbacks. This instance defines all of the callback routines used for this login session.
## sIhCnnctPt

| RApi::LoginParams::sIhCnnctPt |
| --- |

Optional. Name of the history plant connect point. Specify this value for to access non-real-time data such as bars/candlestick data and intra-day tick data.
**See also**
  REngine::replayBars()     REngine::replayTrades()     REngine::subscribeBar()     REngine::unsubscribeBar()
## sIhEnvKey

| RApi::LoginParams::sIhEnvKey |
| --- |

Optional. Environment key used when establishing connections to the history plant/historical data connection. This parameter is used only when the history plant connect point is specified. If this parameter is empty, the default environment will be used. Using the default environment results in the same behavior as prior versions where this parameter was not available.
**See also**
  Connecting to Multiple Rithmic Systems Simultaneously Using Environments
## sIhPassword

| RApi::LoginParams::sIhPassword |
| --- |

Password used for authentication with the history plant/historical data connection. This parameter is required when specifying the LoginParams::sIhCnnctPt.
## sIhUser

| RApi::LoginParams::sIhUser |
| --- |

User id used for authentication with the history plant/historical data connection. This parameter is required when specifying the LoginParams::sIhCnnctPt.
## sMdCnnctPt

| RApi::LoginParams::sMdCnnctPt |
| --- |

Optional. Logical name of the ticker plant/market data connection. This parameter is required to retrieve streaming market data.
## sMdEnvKey

| RApi::LoginParams::sMdEnvKey |
| --- |

Optional. Environment key used when establishing connections to the ticker plant/market data connection. This parameter is used only when the market data connect point is specified. If this parameter is empty, the default environment will be used. Using the default environment results in the same behavior as prior versions where this parameter was not available.
**See also**
  Connecting to Multiple Rithmic Systems Simultaneously Using Environments
## sMdPassword

| RApi::LoginParams::sMdPassword |
| --- |

Optional. Password used for authentication with the ticker plant/market data connection. This parameter is required if the market data connect point is specified.
## sMdUser

| RApi::LoginParams::sMdUser |
| --- |

Optional. User id used for authentication with the ticker plant/market data connection. This parameter is required if the market data connect point is specified.
## sPnlCnnctPt

| RApi::LoginParams::sPnlCnnctPt |
| --- |

Optional. Name of the profit-and-loss system connect point. Specify this value for pnl services such as pnl/postion status and updates. This connect point depends on the trading system connect point, so if parameter is specified, LoginParams::sTsCnnctPt must also be specified, otherwise REngine::login() will return with an error code of API_BAD_INPUT (6). This connection also uses the LoginParams::sTsEnvKey as the environment key and LoginParams::sTsUser and LoginParams::sTsPassword for authentication credentials.
**See also**
  REngine::subscribePnl()     REngine::unsubscribePnl()     REngine::replayPnl()
## sTsCnnctPt

| RApi::LoginParams::sTsCnnctPt |
| --- |

Optional. Name of the order plant/trading system connection. Specify this value to connect to the trading system for order services such as placing, modifying and cancelling orders, and getting order updates.
## sTsEnvKey

| RApi::LoginParams::sTsEnvKey |
| --- |

Optional. Environment key used when establishing connections to the order plant/trading system connection as well as the profit/loss connect point. This parameter is used when the order plant connect point is specified and also if the profit/loss connect point is also specified. If this parameter is empty, the default environment will be used. Using the default environment results in the same behavior as prior versions where this parameter was not available.
**See also**
  Connecting to Multiple Rithmic Systems Simultaneously Using Environments
## sTsPassword

| RApi::LoginParams::sTsPassword |
| --- |

Optional. Password used for authentication with the order plant/trading system connection (sTsCnnctPt) and the pnl connect point (sPnlCnnctPt). This value is required when specifying either of those connect points.
## sTsUser

| RApi::LoginParams::sTsUser |
| --- |

Optional. User id used for authentication with the order plant/trading system connection (sTsCnnctPt) and the pnl connect point (sPnlCnnctPt). This value is required when specifying either of those connect points.
