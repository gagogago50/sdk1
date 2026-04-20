> **R | API+ — Version 13.7.0.0** | Quick Start

# Quick Start

Quick Start
#  Table Of Contents

-  Rithmic Systems, Agreements, and Conformance
-  Verify Connectivity, Credentials, And Configuration Using R | Trader
  -  Download And Install R | Trader
  -  Log In Using R | Trader
  -  Sign Agreements
  -  Market Data Permissions
  -  Risk Management Settings

-  Download And Install
-  Configure Sample Code
-  Build Sample Code
-  Running Sample Applications
-  Verify Market Data Functionality With SampleMD
-  Verify Order Functionality With SampleOrder
-  Next Steps

---

#  Rithmic Systems, Agreements, and Conformance

When we release the R | API dev kit, we create a user id in the Rithmic Test System. The Rithmic Test System is different than Rithmic 01 (live trading) and Rithmic Paper Trading (live market data executing against a simulator).

Whenever you use the R | API you MUST login with R | Trader (or R | Trader Pro) first and accept the agreements. You cannot accept the agreements with the R | API and you cannot login to any System without first accepting the agreements. You MUST test in Rithmic Test with the dev kit before we provide you parameters you will need to login with Rithmic 01 or Rithmic Paper Trading. Once you think you have finished your testing (i.e. your code runs) you can then contact rapi@rithmic.com to arrange for conformance testing which will be necessary to progress to Rithmic 01 and Rithmic Paper Trading.
#  Verify Connectivity, Credentials, And Configuration Using R | Trader

Using R | Trader is the easiest way to verify connectivity, credentials and configuration. However, it requires that you run on Windows, which may not be the case for your R | API application.
##  Download And Install R | Trader

The Rithmic Operations Team should have emailed you information about accessing your download directory. In the download directory will be files for R | API. You can download R | Trader from the Rithmic website.
##  Log In Using R | Trader

With the dev kit, you will receive login credentials (user id and password) to access a test installation of R | Trade Execution Platform. This test installation is the Rithmic Test system.

The first screen when running R | Trader is the Login screen. Enter a User ID and Password, and select the Rithmic Test system from the drop down box. Successfully logging in confirms network connectivity from the machine (and network) hosting R | Trader as well as the login credentials.
##  Sign Agreements

The first time you log in, you will be required to digitally sign some agreements. In this case, a window entitled "Unsigned Agreements" will appear. To sign an agreement, one clicks on the document name in the Document column. Another window displaying the document will appear. After reading the document, choose the appropriate button to click, perhaps "I Agree". You may need to scroll to the bottom of the document to enable the button. You can also print these agreements from these screens.
##  Market Data Permissions

Open a Quote Board window. You can do this by selecting Quote Board from the File menu. Search for symbols by right clicking on the Symbol column in the Quote Board window. If you can see market data for this instrument, you have confirmed that your User ID has permissions to view that instrument's market data. If you need permissions for market data that you do not have, contact your broker/FCM to provide market data permsissions as needed.
##  Risk Management Settings

Try placing an order on that instrument. First open a Recent Orders window to (prepare to) view the order updates as they appear. Next access a Place Order window from the Trade menu. Place an order on the instrument from the previous step. If you can place an order, you confirm that you have risk limits set for your test trading account on that instrument. Your broker/FCM manages your risk settings for your Accounts, so contact them if you need risk settings configured for an Account on an instrument.

---

#  Download And Install

The R | API+ dev kit zip file should be in your download directory. There is no formal installation program. Just unzip the files to the location of your choice. The root directory of the zip file is the version number of the API. There is a subdirectory called "samples" which contains code for sample applications.

---

#  Configure Sample Code

##  Configure SSL File(s)

The Rithmic API ships with one SSL file which is required to connect to any Rithmic system. The file is located in the ./etc sub-directory of the API package. The location of this file is specified through an environment variable. See RApi::REngineParams::envp for more information.

In the sample source code, the location of the SSL file is specified and assumed to be the current directory. You may need to update this value with the actual path to the SSL file on your system, or copy the file into the same directory as the binary to get the samples up and running quickly.

NOTE : If the path is incorrect, your REngine constructor can fail, or your attempt to connect can fail. In the case you cannot connect, you will receive one or more Alert callbacks indicating a connection is broken.
##  Configure For A Rithmic Installation

You may not need to change anything if you are going to connect to the "Rithmic Test" installation of the R | Trade Execution Platform. All the sample source code is "pre-configured" for this installation.

If you do need to connect to a different Rithmic system, you will need to go through conformance as well has have valid credentials for the system you wish to use. To begin the conformance process, email the RAPI support team at rapi@rithmic.com.

The sample code makes use of a fake envp (see FAQ - fake envp) to control the environment variables programmatically. You can change those values to match your connection_params.txt document.

---

#  Build Sample Code

R | API ships with a number of sample applications, including a market data sample and an order placement sample. There is a Visual Studio 2010 solution containing all the sample projects in the samples/Samples.cpp directory. There is also a Visual Studio 2015 solution in the samples/Samples.cpp.vs2015 directory. If you are using a later version of Visual Studio, you can open the provided Visual Studio 2015 solution, and convert it to your version. If you are using linux or darwin (MacOS), compile and link lines are included in the source after the copyright header. Each of these samples are console applications, and they do take command line arguments, including a login id and password.

The Programmers' Guide has more detailed information about building applications using the API. See Building A C++ Rithmic API Application, or go directly to your platform of choice :
-  Building C++ On Windows Using Visual Studio,
-  Building C++ On Linux Using GCC/g++, or
-  Building C++ On Darwin Using GCC/g++.

---

#  Running Sample Applications

Once you have built the sample applications, you can run them from a command prompt (or shell) or perhaps from within a development IDE such as Visual Studio or Emacs.

---

#  Verify Market Data Functionality With SampleMD

SampleMD is a console application. It does not use a GUI; it runs from a command (or shell) prompt. If you built it without changing the source code, you should open a command prompt and change your working directory to be the same as the EXE binary. If you run it without any parameters, it will display its usage. The parameters it takes are :
-  user : This is your User ID, and is passed into REngine::login()
-  password : This is your Password, and is passed into REngine::login()
-  exchange : This is the instrument exchange, going to REngine::subscribe(). Try "CME".
-  symbol : This is the instrument symbol, also going to REngine::subscribe(). Try "ESZ7". You may need to modify the month code (Z) and year (7) if the December 2027 contract has already expired. You might try month codes of H, M, U or Z. You can also try year codes from 0 to 9.

Once it is running, compare data showing in SampleMD and R | Trader (connecting to the Rithmic Test system). They should match.

---

#  Verify Order Functionality With SampleOrder

SampleOrder is also a console application. It will place a market order on the instrument and side of your choice. If you built it without changing the source code, you should open a command prompt and change your working directory to be the same as the EXE binary. If you run it without any parameters, it will display its usage. The parameters it takes are :
-  user : This is your User ID, and is passed into REngine::login()
-  password : This is your Password, and is passed into REngine::login()
-  exchange : This is the instrument exchange, going to REngine::sendOrder(). Try "CME".
-  symbol : This is the instrument symbol, also going to REngine::sendOrder(). Try "ESM1". You may need to modify the month code and year if the June 2021 contract has already expired.
-  side : This is the side of the order, also going to REngine::sendOrder(). Try "B" or "S".

When running SampleOrder, watch for the order updates to appear in R | Trader's Recent Orders window. Verify that the data between the two applications match. They should.

---

#  Next Steps

You might want to either begin using the R | API immediately and reference the documentation as necessary, or read more documentation at this point. The F.A.Q. and Programmers' Guide contains more general information about how to use the R | API, while the class/method documentation contains more targeted information.

---
