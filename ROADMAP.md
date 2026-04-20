# PROJET: Bridge Sierra Chart (DTC) <-> Rithmic RApiPlus (Plug-in Mode)

## CONTEXTE ABSOLU
Tu codes un bridge C++ natif connectant:
- Sierra Chart (client DTC Protocol, port défaut 11099)
- R Trader Pro (serveur RApiPlus Plug-in mode Host: MD=127.0.0.1:3010, Orders=127.0.0.1:3012)

## RÈGLE CRITIQUE
Ne jamais inventer de code API. Si tu as besoin de documentation,
demande-la explicitement. Tout doit être basé sur les fichiers fournis:
- Il faut que la connexion entre le bridge et R Trader Pro soit strictement en Plug-in Mode.
- RApiPlus.h H:\DORIAN\13.7.0.0 - Copie\include
- DTCProtocol.h / DTCProtocol.cpp H:\DORIAN\13.7.0.0 - Copie\include
- SampleMD.cpp / SampleOrder.cpp / SampleBar.cpp H:\DORIAN\13.7.0.0 - Copie\samples
- rithmic_sdk_manual H:\DORIAN\13.7.0.0 - Copie\Rithmic sdk doc
- DTCProtocol markdown guides H:\DORIAN\13.7.0.0 - Copie\DTC doc

## ARCHITECTURE 3 MODULES

### Module 1: RithmicClient
- Hérite: RApi::RCallbacks + RApi::AdmCallbacks
- Plug-in mode Host MD: 127.0.0.1:3010
- Plug-in mode Host Orders/IH: 127.0.0.1:3012
- Connexion asynchrone avec states: LoginComplete, ConnectionBroken
- searchInstrument() + getPriceIncrInfo() après login
- listTradeRoutes() maintenu en cache
- Reconnexion automatique

### Module 2: DTCServer  
- TCP server port défaut: 11099 (configurable GUI)
- Historical data port: défaut 11098 (configurable GUI)
- Framing: [uint16 Size][uint16 Type][Payload]
- TCP_NODELAY activé obligatoirement
- Multi-connexions simultanées optimisées
- Thread-safe

### Module 3: Translator (cœur logique)
- Mapping bidirectionnel DTC <-> Rithmic
- MBP par défaut / MBO optionnel (configurable GUI)
- XXH3 hash: sExchOrdId(string) -> OrderID(uint64_t DTC)
- Iceberg detection avec MBO
- OCO/Bracket order management
- Position proactive update on OrderFillReport

## TYPES DE DONNÉES

### Market Data
- MBP: AskQuote/BidQuote -> MARKET_DEPTH_UPDATE_LEVEL
- MBO: DboInfo -> MARKET_ORDERS_ADD/MODIFY/REMOVE
- Iceberg tracking via MBO order ID hashing

### Historical Data (Phase 1 inclus)
- OHLC data: obligatoire
- Volume data: obligatoire  
- Tick by tick: optionnel (pour replay/backtesting, activable GUI)

### Orders
- Simple orders: sendOrder()
- OCO: sendOcoList()
- Bracket: sendBracketOrder()
- Cancel: cancelOrder()
- Modify: modifyOrder()
- Persistence: ClientOrderID(DTC) <-> sOrderNum(Rithmic)

### Order Reports Mapping
- OrderFillReport -> position update proactive
- OrderBustReport -> décrémenter FilledQuantity
- OrderTriggerReport -> maintenir ORDER_STATUS_OPEN
- OrderTradeCorrectReport -> update AverageFillPrice + FilledQuantity
- OrderRejectReport::sText -> DTC::s_OrderUpdate::InfoText

## GUI REQUIREMENTS (obligatoire)
Interface graphique avec:
1. Login panel: username, password, gateway Rithmic
2. Ports configurables: DTC MD port, DTC Historical port, Rithmic MD port, Rithmic Orders port
3. Toggle MBO/MBP depth mode
4. Iceberg tracking ON/OFF
5. Tick data ON/OFF
6. Log window temps réel (niveau: INFO/DEBUG/ERROR)
7. Connection status indicators
8. Toutes autres options suggérées

## PERFORMANCE
- XXH3 pour hashing IDs (le plus rapide disponible)
- TCP_NODELAY sur tous les sockets DTC
- Multi-connexions DTC simultanées
- Zero-copy où possible
- Lock-free structures pour market data haute fréquence

## CONFIG FILE (YAML)
Tous les paramètres persistants sauvegardés en YAML

## LANGAGE ET STACK
- C++ natif (C++17 minimum)
- GUI: suggère le meilleur framework cross-platform léger
- Build: CMake
- OS: Windows prioritaire, Linux/macOS en option

## QUESTIONS À POSER
Si documentation manquante pour un callback ou message spécifique,
demande le fichier source avant de générer du code approximatif.
