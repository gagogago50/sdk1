> **Namespace:** `RApi`

# RApi::REngineParams

Public Member Functions | Public Attributes | List of all members  RApi::REngineParams Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | REngineParams () |
|  |
| virtual | ~REngineParams () |
|  |

| Public Attributes |
| --- |
| char ** | envp |
|  |
| AdmCallbacks * | pAdmCallbacks |
|  |
| void * | pContext |
|  |
| tsNCharcb | sAppName |
|  |
| tsNCharcb | sAppVersion |
|  |
| tsNCharcb | sLogFilePath |
|  |

## Detailed Description

This class encapsulates information needed to instantiate a REngine object. It contains configuration information specifying which instance of an R | Trade Execution Platform to connect to, as well as identifying information about the application instantiating an REngine. It also passes administrative callbacks to the REngine, which may invoke them to convey alerts coming from the infrastructure.
## Constructor & Destructor Documentation

## REngineParams()

| REngineParams::REngineParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to NULL and the iDataLen of each tsNCharcb is set to zero. Integer members and double members are initialized to zero. Boolean members are set to false. Pointer values are set to NULL.
## ~REngineParams()

| REngineParams::~REngineParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| REngineParams::~REngineParams | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Data Documentation

## envp

| RApi::REngineParams::envp |
| --- |

```
   This is a pointer to the environment the RApi process should
   use when booting.  This pointer is of the same format as the standard
   C environment pointer, which is an array of null-terminated strings,
   with the array also being terminated with a null.  Normally one passes
   the envp inherited from main(), but it is also possible to use a
   \ref faq_envp "fake_envp".  This envp will have a default key of
   "system".

   The following is the list of required environment variables with
   sample values :
   <ul>
   <li>MML_DMN_SRVR_ADDR=rituz01000.01.rithmic.com:65000~rituz01000.01.rithmic.net:65000~rituz01000.01.theomne.net:65000~rituz01000.01.theomne.com:65000
   <li>MML_DOMAIN_NAME=rithmic_uat_01_dmz_domain
   <li>MML_LIC_SRVR_ADDR=rituz01000.01.rithmic.com:56000~rituz01000.01.rithmic.net:56000~rituz01000.01.theomne.net:56000~rituz01000.01.theomne.com:56000
   <li>MML_LOC_BROK_ADDR=rituz01000.01.rithmic.com:64100
   <li>MML_LOGGER_ADDR=rituz01000.01.rithmic.com:45454~rituz01000.01.rithmic.net:45454~rituz01000.01.theomne.com:45454~rituz01000.01.theomne.net:45454
   <li>MML_LOG_TYPE=log_net
   <li>MML_SSL_CLNT_AUTH_FILE=rithmic_ssl_cert_auth_params (full path to file)
   <li>USER=my_user_name (if possible, this should be the same value used when logging in)
   </ul>

   An SSL file is shipped in the ./etc directory of the
   R | API package.  Its location must be specified in the
   environment variable "MML_SSL_CLNT_AUTH_FILE".

   \see REngine::listEnvironments()

```

## pAdmCallbacks

| RApi::REngineParams::pAdmCallbacks |
| --- |

```
   This required parameter is used to specify administrative callbacks.

```

## pContext

| RApi::REngineParams::pContext |
| --- |

```
   This optional parameter is passed back in each callback defined in
   RCallbacks.

```

## sAppName

| RApi::REngineParams::sAppName |
| --- |

```
   This specifies the application name of the process.  This might be
   the project name, for example.

   This value must consist of entirely of printable characters and also
   contain at least one alphanumeric character.

```

## sAppVersion

| RApi::REngineParams::sAppVersion |
| --- |

```
   This specifies the version of the application.

   This value must consist of entirely of printable characters and also
   contain at least one alphanumeric character.

```

## sLogFilePath

| RApi::REngineParams::sLogFilePath |
| --- |

```
   This optional parameter specifies the full path of the log's base
   filename to use when logging internal RApi events.  This setting is
   primarily used for debugging or troubleshooting.  If
   sLogFilePath.pData is set to NULL, logging will be disabled.  The log
   file name will have appended to it a numeric file extension, and when
   the file size reaches it's threshold (approx. 500mb) the log rolls
   over to a new file with an incremented numeric file extension.

```
