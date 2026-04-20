> **R | API+ — Version 13.7.0.0** | F.A.Q.

# F.A.Q.

F.A.Q.
#  Table Of Contents

-  What is R | Trade Execution Platform(tm)?
-  What is R | API(tm)?
-  What is the relationship between R | Trader and R | API?
-  Where can I find my User ID and Password to log in?
-  Can I login to both R | Trader and R | API with the same credentials?
-  When I log in to both R | Trader and R | API, one of the applications always gets logged out. What happened?
-  What is the relationship between R | API and R | API.NET?
-  What is a connect point?
-  I am ready to connect to the infrastructure. Where do I get login credentials and connect points?
-  I am unable to connect. What happened?
-  My login credentials used to work but now they don't. What happened?
-  How do I create a log file?
-  Where is the sample code?
-  I am not using a command line application. How do I get around not having an environment (envp) passed to me via main()? It is required for the constructor of REngine. (C++ only)
-  What is your application conformance procedure?
-  What information should I provide when getting technical support?
-  Do you support feature XYZ? If not, can you add support?
-  Who do I contact for development support?

---

#  What is R | Trade Execution Platform(tm)?

See the Programmers' Guide section on What is R | Trade Execution Platform?

---

#  What is R | API(tm)?

See the Programmers' Guide section on What is R | API+?

---

#  What is the relationship between R | Trader and R | API?

R | Trader (Rithmic Trader) is a front end screen to the R | Trade Execution Platform. R | API is a programmatic interface to that same platform.
 However, R | Trader does not use R | API internally.

You can think of R | Trader as a reference application for your development with R | API. We have provided you with two user ids, so you can be logged in concurrently with your R|API application and R | Trader. Each of these logins can see the same accounts, orders and positions. We think this might be useful to you while you are developing.

---

#  Where can I find my User ID and Password to log in?

The FCM, broker or data provider typically creates the login credentials you will use. The credentials will be valid for a particular instance of the R | Trade Execution Platform.

---

#  Can I login to both R | Trader and R | API with the same credentials?

Yes, but you must be logging into the same environment. There are many instances of the R | Trade Execution Platform, and each has their own user database.

See the Programmers' Guide section on What is R | Trade Execution Platform? for related information.

---

#  When I log in to both R | Trader and R | API, one of the applications always gets logged out. What happened?

Each User ID has a configurable number of concurrent sessions. If you exceed the number of concurrent sessions your User ID has, the oldest session will be automatically logged off. If you need more concurrent sessions, you must contact the person/organization who gave you the User ID.

See the Programmers' Guide section on What is R | Trade Execution Platform? for related information.

---

#  What is the relationship between R | API and R | API.NET?

See the Programmers' Guide section on C++ vs. .NET

---

#  What is a connect point?

See the Programmers' Guide section on Connect Points

---

#  I am ready to connect to the infrastructure. Where do I get login credentials and connect points?

The connect points used in testing environments are available in your download directory. The login credentials will be emailed to you.

For production connect points, you must contact your broker or FCM and have them authorize the Rithmic Operations Team to distribute the connect points to you.

---

#  I am unable to connect. What happened?

There are a number of things which may be preventing your application from connecting and logging in. These are some of the most common :

The Rithmic trading platform (and the exchanges) require you to complete agreements before you can login. If you have never logged in with R | Trader (Pro) and signed these agreements your R | API program will be unable to login. See Sign Agreements in the Quick Start.

The R | Trader Network Connectivity Test - If you cannot connect from a .NET machine, you can try running R | Trader. If you can run R | Trader and login in successfully to the infrastructure, it is not a network connectivity or credentials issue. If R | Trader also fails, you may want to check your network infrastructure and/or firewall settings. You can also telnet to the hosts:ports appearing in the connection parameters document to verify you can get to those addresses.

Network Connectivity Test - Assuming your environment variables (C++) and various parameters are correct, you may want to check your network infrastructure and/or firewall settings. A way you can test connectivity is to telnet to the hosts:ports appearing in the connection parameters document to verify you can get to those addresses.

SSL Version Mismatch - C++ only - Sometimes linking against a different version of OpenSSL will prevent connections from being established. The C++ Rithmic APIs ship with compiled versions of OpenSSL that are compatible.

SSL File Not Found - If the location of the SSL certificate file(s) (specified as environment variables in C++ and as a property of REngineParams in .NET) is not correct, you won't be able to log in.

SSL Authority Not Trusted - In .NET, the operating system must be configured to trust the certificate authority that issued the Rithmic SSL certificate, "AddTrust External CA Root". If the certificate authority is not trusted, you will see a message about the remote certificate being invalid. Sometimes if your Dnscache service is not running, you might get this error message too.

/etc/hosts file - On linux, in the C++ compilation, if the hostname resolves to the loopback device (127.0.0.1), the REngine constructor will fail with an error code of 1, 'os error'. Fixing this can usually be done by adding a line to /etc/hosts to resolve the hostname to the eth0 device.

If none of these work, please let us know whether the REngine constructor failed and which what error, or if the login() method failed, and with what error. If possible, an R | API log file would help too.

---

#  My login credentials used to work but now they don't. What happened?

If you are no longer able to log into a system, and your network, application, etc. has not changed, it may be that your User ID has expired. If this is the case, you should contact the organization that issued the User ID to see about re-enabling the User ID.

---

#  How do I create a log file?

When instantiating an REngine instance, you can specify a log file path with REngineParams. See REngineParams::sLogFilePath in C++ or REngineParams.LogFilePath in .NET for more details.

---

#  Where is the sample code?

The sample code is in ./samples. There are also sample solutions/projects for Visual Studio 2010 in that subdirectory tree. The source code contains sample compile/build lines for GCC/g++ users on linux and darwin.

---

#  I am not using a command line application. How do I get around not having an environment (envp) passed to me via main()? It is required for the constructor of REngine. (C++ only)

You can construct a fake envp, since it is just an array of c strings, terminated with a null pointer. char * fake_envp[9];   fake_envp[0] = "MML_DOMAIN_NAME=a_rithmic_domain"; fake_envp[1] = "MML_LIC_SRVR_ADDR=server1.rithmic.com:56000"; fake_envp[2] = "MML_LOC_BROK_ADDR=server1.rithmic.com:64100"; fake_envp[3] = "MML_DMN_SRVR_ADDR=server1.rithmic.com:65000"; fake_envp[4] = "MML_LOGGER_ADDR=server1.rithmic.com:45454"; fake_envp[5] = "MML_LOG_TYPE=log_net"; fake_envp[6] = "MML_SSL_CLNT_AUTH_FILE=rithmic_ssl_cert_auth_params"; fake_envp[7] = "USER=my_user_name"; fake_envp[8] = NULL;

---

#  What is your application conformance procedure?

Applications making use of R | API must pass Rithmic conformance. As you approach the release date of your application, please inform your contact at Rithmic that you which wish to verify your application conformance and the conformance requirements will be sent to you.

---

#  What information should I provide when getting technical support?

The R | API log file (see REngineParams and How do I create a log file?) is one of the first things we ask for. The log file contains information such as :
- Which instance of the R | Trade Execution Platform
- Which version/platform of the R | API
- Timestamps and Thread IDs
- Which method returned NOT_OK
- Error code value

Other information is also encouraged, such as :
- Is the User ID new? Is the machine new? (In other words, has this User ID or machine ever worked?)
- Is this error specific to a particular machine?
- Is this error recreateable? What are the steps?
- If there is an order involved, what is the order number?
- If there is an instrument involved, what is the symbol and exchange?

---

#  Do you support feature XYZ? If not, can you add support?

If there is functionality you need and it not available in the API, please let us know. Where possible we will add it to the interface.

---

#  Who do I contact for development support?

Emailing rapi@rithmic.com is usually best. If you wish to speak to someone, you can call Rithmic at (845)735-5000.

---
