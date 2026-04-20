> **Source:** https://www.sierrachart.com/index.php?page=doc/NewInstance.php#UsingDTCServerForDataAndTradingInAnotherSCInstance

# Using DTC Server for Data and Trading in Another Sierra Chart Instance (New Instances) -  Sierra Chart

#### [Home](https://www.sierrachart.com/) >> [Getting Started](https://www.sierrachart.com/index.php?page=doc/NewInstance.php)

# Using DTC Server for Data and Trading in Another Sierra Chart Instance

- Using DTC Server for Data and Trading in Another Sierra Chart Instance

- Instructions For Sharing Data Using Sub Instances (Easiest And Recommended Method)
- Historical Data and Missing Historical Data
- Simulated Trading in a Sub Instance

- First Method
- Second Method
- Viewing Trading Data in Sub instance from Main Instance
- Differences with Order Handling Between  Main/Server and Sub Instance
- Using the Correct Trade Account (Rejections Related to Simulation Mode)
- Resolving DTC Protocol Server Port Number Conflicts
- Using Same Symbol Settings  in New Instances
- Deleting Sub Instances
- Source of Data for Sub Instances
- Each Sub Instance is Independent
- Copying Files Between Instances

- Automatically  Copying  Files from  the Main Instance to Sub Instance
- Performance When Using Sub Instances

## Using DTC Server for Data and Trading in Another Sierra Chart Instance

[Link] - [Top]

The DTC Protocol Server in Sierra Chart can be used by another instance of Sierra Chart either on the same computer or across a network. *Although market data is only allowed to be used on the same computer*.

The DTC Protocol Server allows the sharing of the market data and trading functionality of the server instance of Sierra Chart to other instances of Sierra Chart. These other instances are referred to as the *client* instances. This DTC Server supports both market data and trading.

Although the sharing of market data across a network is prohibited  in order to maintain compliance with market data rules.

The instructions on this page are for sharing the market data and trading functionality from one instance of Sierra Chart with another instance.

If you want to use multiple copies of Sierra Chart with *different* Data and Trading services, then refer to the  [Using Multiple Data and Trading services](https://www.sierrachart.com/index.php?page=doc/MultipleServices.html) page *instead* of the instructions on this page below. That page also explains how to share market data between instances of Sierra Chart that use  *different  Trading services*.

One reason to use additional instance of Sierra Chart is to distribute processing load among instances which run as independent processes which can utilize additional CPU cores for study calculations for example.

### Instructions For Sharing Data Using Sub Instances (Easiest And Recommended Method)

[Link] - [Top]

1. Start another instance of Sierra Chart by selecting  **File >> New Instance** in an existing running instance of Sierra Chart. This can only be done from the main instance of Sierra Chart, not a sub-instance.
2. To automatically start new instances of Sierra Chart on startup of the main instance, the instance numbers can be  specified as a comma separated list in **Global Settings >> General Settings >> Instances to Run on Startup**. For example, you can enter a ***2*** in that edit box to automatically start a second instance. Or enter  ***2, 3*** to start a second and third instance automatically.
3. When using **File >> New Instance**, a new instance is automatically updated to the same version as the main instance of Sierra Chart.
4. Each instance of Sierra Chart maintains its own copy of global settings, Chartbooks and  chart data files. The first time a new instance is created,  it receives a copy of the global settings and Chartbooks from the main instance.
5. To open a chart which will be fed by the DTC Server from the  main instance of Sierra Chart,  select **File >> Find Symbol** in the new instance of Sierra Chart.
6. The **Find Symbol** list will initially be *empty* because the Symbol Settings have to be requested. Wait a moment for them to be received and then the list will fill in.

        If this does not occur within about 5 to 20 seconds, then follow the procedure to perform an  [Update of the Symbol  Settings](https://www.sierrachart.com/index.php?page=doc/GlobalSymbolSettings.php#UpdateSettings) to get them. It is necessary to have the proper Symbol Settings in an instance of Sierra Chart which is connected to the DTC Server of another instance.

### Historical Data and Missing Historical Data

[Link] - [Top]

All historical Intraday and Daily data for a Symbol in an instance of Sierra Chart started using New Instance, is downloaded from the existing Intraday or Daily chart data file in the Main Instance if the file exists.

If the file exists, but it is not up to date with the current data, then the current data will be downloaded into the file first before the data is served to client instances of Sierra Chart.

If a chart data file does not exist in the Main Instance, then the data will be first automatically downloaded for that Symbol and chart data type from the connected Data or Trading service the Main Instance is set to use. When this historical data download is done, then the data is served to client instances of Sierra Chart.

If there is any  missing or incorrect Historical Daily or Intraday chart data in the client instance of Sierra Chart which is connected to the Main Instance, then go to the the *main instance* of  where you  selected **File >> New Instance**) and open the same type of chart (Historical or Intraday) for the same Symbol and correct any missing or incorrect data issues there *first*.

Refer to the following sections to solve a missing or incorrect data issue.

- [Missing  or Incomplete Intraday Chart Data](https://www.sierrachart.com/index.php?page=doc/HistoricalIntradayData.html#MissingOrIncompleteIntradayChartData)
- [Missing Historical Chart Data](https://www.sierrachart.com/index.php?page=doc/helpdetails6.html) (Daily, Weekly, Monthly, Quarterly, Yearly Charts)
- [Deleting and Re-downloading Data  (Intraday  Charts)](https://www.sierrachart.com/index.php?page=doc/helpdetails2.html#h2.1.2)
- [Correcting Data Errors by Downloading the Data Again](https://www.sierrachart.com/index.php?page=doc/helpdetails2.html#h2.2.2)  (Historical Daily, Weekly, Monthly, Quarterly, Yearly Charts)
- [Downloading/Viewing More Historical Intraday Data](https://www.sierrachart.com/index.php?page=doc/HistoricalIntradayData.html#DownloadingViewingMoreHistoricalIntradayData)

Once you have corrected the missing or incorrect data issue  in the *Main Instance* of Sierra Chart, then re-download the data in the sub instances of Sierra Chart by re-downloading all of the data in the chart by going to the chart and selecting **Edit >> Delete All Data and Download**. You just need to do this once per symbol and not for each chart.

### Simulated Trading in a Sub Instance

[Link] - [Top]

Simulated trading can be performed two different ways in a sub instance of Sierra Chart.

#### First Method

[Link] - [Top]

Use [Trade Simulation Mode](https://www.sierrachart.com/index.php?page=doc/TradeSimulation.php) by enabling **Trade >> Trade Simulation Mode On**. In this case, all of the trading activity is contained within the sub instance where the trading is performed.

This is the method to use if you want to perform live trading in your main/server instance of Sierra Chart. In this case, the main instance of Sierra Chart needs to have **Trade >> Trade Simulation Mode On** disabled so that live trading is possible.

#### Second Method

[Link] - [Top]

1. Set the main instance of Sierra Chart that the sub instance is connected to, to use [Trade Simulation Mode](https://www.sierrachart.com/index.php?page=doc/TradeSimulation.php).
2. In the sub instance, disable **Trade >> Trade Simulation Mode On**.
3. Ensure that the setting for [Global Settings >> General Trade Settings >> Select Non Sim Trade Account on Entering Non-Sim Mode in Sub Instances](https://www.sierrachart.com/index.php?page=doc/GlobalTradeSettings.html#SelectNonSimTradeAccountOnEnteringNonSimModeInSubInstances) in the  *sub instance* is set to **No**. This needs to be enabled in the *sub instance* and not the main instance of Sierra Chart.
4. From the Chart or Trade DOM you will be trading from in the sub instance, select one of the Simulation (**Sim#**) accounts. Refer to [Selecting Trade Account](https://www.sierrachart.com/index.php?page=doc/TradeWindow.html#SelectingTradeAccount).
5. All trading from the sub instance will then be simulated and be processed in the main instance. Logging of the simulated trading will be in both instances.

### Viewing Trading Data in Sub instance from Main Instance

[Link] - [Top]

To view trading data on a chart in a sub instance, for trading activity occurring in the main instance, it is necessary to disable/uncheck  **Trade >>  Trade Simulation Mode On** on the menu.

The next step is to follow through all of the steps in the [Viewing Simulated and Non-Simulated Working Orders and Trade Position](https://www.sierrachart.com/index.php?page=doc/ChartTrading.html#ViewingSimulatedAndNonSimulatedOrdersAndPosition) section on the Chart Trading page.

### Differences with Order Handling Between  Main and Sub Instance

[Link] - [Top]

When using multiple Target Attached Orders, the parent order is  [split up into  multiple orders](https://www.sierrachart.com/index.php?page=doc/AttachedOrders.html#OCOGroup) to match the quantity of each  Target order.  These multiple parent orders   are linked together. When  you adjust the price of one of them the others will automatically adjust along with it.    There is a link between these paired orders.

If you go to a different instance  of Sierra Chart as compared to where   the orders were submitted from,  the link between these orders does not exist.    If you adjust the price of one of these parent orders,  the others will not adjust.

To avoid this issue only adjust the order from the instance it was initiated in.

Related to this is that since the parent order is split up into multiple orders, when you cancel one of these  parent orders in an instance other  than where  the orders were originally entered from, you will have to cancel each order individually and get multiple order confirmations.

A similar case is true of the  order association lines between Target and Stop  order. You will only see these lines in the instance where the orders  were entered from. You will not see them in other instances.   The information necessary for these lines only exists in the instance where the   orders were submitted from.  However, you will see the order association lines in the   main/server instance of Sierra Chart.  Since it is aware    the Target  and Stop orders are in  an OCO group.

### Using the Correct Trade Account (Rejections Related to Simulation Mode)

[Link] - [Top]

When trading in a sub instance of Sierra Chart and **Trade >> Trade Simulation  Mode On** is *disabled*, it is necessary  to use the Trade Account  in the sub instance which corresponds to the  **Trade >> Trade Simulation  Mode On** setting in the main instance of Sierra Chart.

When **Trade >> Trade Simulation  Mode On**  is *enabled* in the main instance, then you can only use simulated trading accounts in the sub instance (Example:  **Sim1**). Refer to [Selecting Trade Account](https://www.sierrachart.com/index.php?page=doc/TradeWindow.html#SelectingTradeAccount).

When **Trade >> Trade Simulation  Mode On**  is *disabled* in the main instance, then you can only use non-simulated trading accounts in the sub instance. Refer to [Selecting Trade Account](https://www.sierrachart.com/index.php?page=doc/TradeWindow.html#SelectingTradeAccount).

If the incorrect Trade Account is being used in the sub instance, you will see a message like this in **Trade >> Trade Service Log** in the sub instance after submitting an order:

Order update (Order reject). Info: Simulated Trade Account (Sim1) cannot be used when Trade Simulation Mode is disabled. Internal Order ID: #. Service Order ID: (none). Symbol: (symbol)

To trade live from a sub instance, it is necessary that **Trade >> Trade Simulation Mode On** is disabled *both* in the sub instance and in the main instance of Sierra Chart. And that you have selected a non-simulated trading account.  Otherwise, the below rejection message will be given when submitting an order from the sub instance.

Order update (Order reject). Info: Non-simulated Trade Account (TradeAccount) cannot be used with Trade Simulation Mode. Internal Order ID: #. Service Order ID: (none). Symbol: (symbol)

### Resolving DTC Protocol Server Port Number Conflicts

[Link] - [Top]

Normally only *one instance* of Sierra Chart that you are running on the same computer should be set to be a DTC Server and have the   **DTC Protocol Server** enabled.

If other instances of Sierra Chart which are running your computer system  at the same time  also have the  **DTC Protocol Server** enabled  (**Global Settings >> Sierra Chart Server Settings >> DTC Protocol Server >>  Enable DTC Protocol Server = Yes**, you need to make sure there are not port number conflicts. In other words, they need to be using different port numbers.

Client instances of Sierra Chart which connect to a DTC Server instance of Sierra Chart must have the  **Global Settings >>  Sierra Chart Server Settings >> DTC Protocol Server >> Enable DTC Protocol Server** option *disabled* to avoid port number conflicts.

Once you have disabled this option, you should not have to continue with the further instructions.   Unless more than one instance of Sierra Chart is running as a server on the same computer.

Below is an example of what you will see in the Message Log indicating a port number conflict.

DTC Protocol Server failed to start listening on port 11099.

Listening socket (1740), port 0 | Failed to bind socket to 0.0.0.0:11099. Windows error code 10048: Only one usage of each socket address (protocol/network address/port) is normally permitted.

Listening socket (1740), port 0 | Closed.

Follow through the below steps to resolve port number conflicts for each installation of Sierra Chart that you have running.

1. Exit from any sub instances of Sierra Chart, started with  **File >> New Instance**.
2. Go to one of the instances of Sierra Chart you have running on your system and select **Global Settings >>  Sierra Chart Server Settings >> DTC Protocol Server**.
3. Make sure the **Enable DTC Protocol Server** option is enabled and make a note of the **Listening Port** and **Historical Data Port** numbers.
4. Press **OK**.
5. Go to the next instance of Sierra Chart on your system and select    **Global Settings >>  Sierra Chart Server Settings >> DTC Protocol Server**.
6. Either *uncheck* the **Enable DTC Protocol Server**  option or set the  **Listening Port** and **Historical Data Port** numbers to different port numbers than what are currently used in other instances of Sierra Chart. You can use any port numbers. They should be in the range of 10000 through 60000.

            Make sure you are not using a port already in use on your system or used by another instance of Sierra Chart. You can determine what ports are in use through the  **netstat** program. Commandline:  *netstat -a -b*.

            Unless these other instances of Sierra Chart should be functioning as a DTC server,  which is unlikely in most cases, then *uncheck* **Enable DTC Protocol Server**.
7. In the case of an instance of Sierra Chart started with **File >> New Instance** and where the   **Global Settings >> Data/Trade Service Settings** **>> Service** in that instance is set to **DTC - Sub Instance**, then you must uncheck the **Enable DTC Protocol Server** option.
8. Press **OK**.
9. Repeat the steps above starting with step 5 for other instances of Sierra Chart on your system.

## Using Same Symbol Settings in New Instances

[Link] - [Top]

To use the same Symbol Settings as set in  **Global Settings >> Symbol Settings**, in sub instances of Sierra Chart started through   **File >> New Instance**, then enable  **Global Settings >> Symbol Settings** **>>   Use  These Symbol Settings in New Instances When Started** in the  *server instance* of Sierra Chart.

After enabling this option, or after changing the Symbol Settings in the   server instance of Sierra Chart, it is necessary to exit from the sub instance, and start it again with  **File >> New Instance**, to receive the updated Symbol Settings.

## Deleting Sub Instances

[Link] - [Top]

When a  sub   instance is started for the first time, a new Sierra Chart installation is created within a subfolder within the main Sierra Chart installation folder (**C:\SierraChart** by default). The name of the folder is **SierraChartInstance_#** where # is the instance number.  The instance numbers start at 2 and go up depending upon how many sub instances were simultaneously  running.

A complete copy of the main Sierra Chart installation folder is made except for Intraday and Daily chart data files, and the internal order ID file. These do not need to be copied to the sub instance folder.

You are able to completely delete the sub instance folder when the sub instance is not currently running. After you do this a complete copy of the main Sierra Chart installation folder is made except for Intraday and Daily chart data files, and the internal order ID file, when the new instance is started again with **File >> New Instance**.

This lets you fully reinitialize the sub instance completely. However, keep in mind any Chartbook files you previously created  in the sub instance would be lost if you do this. So make a backup of those first.

You also have the ability to manually copy Chartbooks  (**Cht** file extension) from the main instance Data folder to the sub instance Data folder. Do this through the operating system file manager. Refer to Copying Files Between Instances.  This would be  good to do if you want to copy newly created Chartbooks to the sub instance.

If you do not want to use the sub instance any longer or just want to delete all of the files for whatever reason, the entire **SierraChartInstance_#**  subfolder in the Sierra Chart installation folder can be deleted through your operating system file manager. After this, check the [Instances To Open On Startup](https://www.sierrachart.com/index.php?page=doc/GeneralSettings.html#InstancesToOpenOnStartup)  setting to make sure the instance number is not automatically started when you start Sierra Chart.

## Source of Data for Sub Instances

[Link] - [Top]

The source of both continuously updating real-time and historical data in a sub instance of Sierra Chart opened with **File >> New Instance** or another instance of Sierra Chart connected to the DTC Server in a main instance, will always be the main instance of Sierra Chart.

In the sub instance, you will never see the  [[M] designation after a symbol](https://www.sierrachart.com/index.php?page=doc/ChartDataFiles.html#MeaningOfMDesignationAfterSymbol). This is normal.

## Each Sub Instance is Independent

[Link] - [Top]

When starting a new sub instance of Sierra Chart (**File >> New Instance**), and that sub instance was never started before, that sub instance is initialized with the global configuration from the main instance, and all of the Chartbooks  from the main instance of Sierra Chart.

After this initialization as described above, the sub instance  is fully independent from the main instance. Any changes to the Global settings, or Chartbooks are only within that particular instance.  There is no synchronization between instances supported.

It is possible to change the above behavior, by setting [Always Copy Configuration Files to New Instances When Started](https://www.sierrachart.com/index.php?page=doc/GeneralSettings.html#AlwaysCopyConfigurationFilesToNewInstancesWhenStarted), in  **Global Settings  >> General Settings >> General >> New Instances**, to  **Yes**.

The particular sub instance you are working in can be identified by the number after the #  on the title bar of the main window.

After starting a sub instance for the first time, if you later want to copy  Chartbook files between the main instance  and the sub instance this has to be done manually.   Otherwise, there is no synchronization of Chartbooks between instances.

For example, you cannot save a Chartbook in the main instance and have it accessible in the sub instance.   Chartbook files can be copied between   Sierra Chart instances through your operating system file manager. These Chartbook files  (.Cht file extension) are contained within  the  [Data Files Folder](https://www.sierrachart.com/index.php?page=doc/GeneralSettings.html#DataFilesFolder) of each instance of Sierra Chart and can be easily copied between data folders. However,  they should only be copied after they have been  [saved](https://www.sierrachart.com/index.php?page=doc/Chartbooks.html#SaveChartbook) to ensure they have the latest changes made to a Chartbook.

## Copying Files Between Instances

[Link] - [Top]

It is supported to copy  files from the main Sierra Chart instance  to sub instances,  like the main configuration file (Sierra4.config) or Chartbooks. If you are copying the main configuration  file, you will need to exit from the main instance of Sierra Chart  and any sub instances.

It is not necessary to exit when copying Chartbooks, only save them with **File >> Save All**.

Simply copy the files you want from the  main instance  to the corresponding sub  instances.  Overwrite them in the destination if necessary.  You can copy files in either direction. From the main instance to a sub instance or from a sub instance to the main instance.

The  sub instance  installation folders, are located in the main instance folder with the name   ***\SierraChartInstance_#*** where # is the instance number. The main instance folder is usually  ***C:\SierraChart***.

For the instructions to copy files, refer to [Transferring Sierra Chart Settings and Data to a New Installation](https://www.sierrachart.com/index.php?page=doc/helpdetails15.html#TransferringSCSettingsAndDataToNewInstallation).

### Automatically  Copying  Files from  the Main Instance to Sub Instance

[Link] - [Top]

The below procedure will start with a new/fresh copy of a sub instance and then copy all of the main Sierra Chart installation folder  to the sub instance folder except for Intraday and Daily chart data files, and  the current Internal Order ID file. These files  copied include  Chartbook and Spreadsheet files.

Any existing sub instance files will be lost because this procedure explains deleting them.

1. Exit from any sub instances you are currently running. Go to the Sierra Chart installation folder through your operating system file manager. This is usually  **C:\SierraChart**.  You can find this folder through **Window >> Message Log**. Refer to the  **Program path** line near the top of the log. Example:  **Program path: C:\SierraChart\**.
2. Delete the **SierraChartInstance_2** subfolder.  This will be the first, folder for a sub instance. This will be the folder you will usually want to delete.  You may want to make a backup of it first. Other sub instances may exist, and will have this folder format: **SierraChartInstance_#**, where the # represents the instance number.

            The main instances always  Considered instance 1.
3. Start a sub instance through **File >> New Instance**.
4. The sub instance will now have access to the main instance Chartbooks and you can open them in the sub instance in the same way through **File >> Open Chartbook**.
5. Any charts you no longer want to use in the main instance  among the currently open Chartbooks, can be closed by selecting the chart from the   **CW** menu and then selecting  **File >> Close Active Window**.  After this Save the Chartbook with  **File >> Save**.

## Performance When Using Sub Instances

[Link] - [Top]

When using additional  sub instances of Sierra Chart which is connected to a server instance  either through **File >> New Instance** or as an independent instance using the  **DTC-Sub Instance**   Service  in **Global Settings >> Data/Trade Service Settings**, this allows for the distribution of processing  load  from chart updating and study calculations,  among the CPU cores.

This is in addition to the   [multithreaded functionality](https://www.sierrachart.com/index.php?page=doc/Features.php#Performance) Sierra Chart already has in other areas of the program.

There is no additional resource usage, when  using additional  instances, since the basic  core Sierra Chart program  does not itself use any CPU usage and the memory usage is very low. It is only when  Charts, Trading DOMs, Spreadsheets, Quote Boards  are open or other functionality is being used, is where the CPU load comes from.

In the case of when viewing the same symbol within different installed instances of Sierra Chart, there is a separate  chart data storage for each instance of Sierra Chart but this does not add to CPU usage.  It only increases storage space requirements, but the data is compressed and with large storage drives, this usually is of no consequence.  And this also has the advantage of being able to have a sub instance use  a higher  **Intraday  Data Storage Time Unit**.

For more information, refer to [Improving Performance of Loading Chart Data](https://www.sierrachart.com/index.php?page=doc/ChangingPeriodOfBars.php#ImprovingPerformanceOfLoadingChartData).

---

*Last modified Thursday, 18th January, 2024.

---

[Service Terms and Refund Policy](https://www.sierrachart.com/index.php?page=doc/PurchaseInformation.php)
