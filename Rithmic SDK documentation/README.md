> **R | API+ — Version 13.7.0.0**

# R | API+ Documentation

Documentation extraite de la référence Doxygen, restructurée en Markdown.

## Table des matières

| Fichier | Description |
|---|---|
| [overview.md](overview.md) | Vue d'ensemble et introduction |
| [quick_start.md](quick_start.md) | Démarrage rapide |
| [programmers_guide.md](programmers_guide.md) | Guide du programmeur (complet) |
| [faq.md](faq.md) | Foire aux questions |
| [faq_rithmic.md](faq_rithmic.md) | FAQ Rithmic Trade Platform |
| [namespace_rapi.md](namespace_rapi.md) | Namespace RApi (enums, constantes) |
| [classes/index.md](classes/index.md) | Index de toutes les classes |

## Organisation des classes

Les classes sont regroupées dans `classes/` par domaine fonctionnel :

| Dossier | Contenu |
|---|---|
| `classes/engine/` | REngine, RCallbacks, AdmCallbacks, LoginParams, REngineParams |
| `classes/params/` | Paramètres d'ordres (LimitOrderParams, MarketOrderParams…) |
| `classes/order/` | OrderParams, BracketParams, QuoteParams… |
| `classes/report/` | Rapports d'ordres (OrderFillReport, OrderCancelReport…) |
| `classes/account/` | AccountInfo, UserInfo, PnlInfo, RmsInfo… |
| `classes/market/` | TradeInfo, BarInfo, LineInfo, BidInfo, AskInfo… |
| `classes/replay/` | Replay/historique : BarReplayInfo, PnlReplayInfo… |
| `classes/info/` | Autres classes Info |
| `classes/other/` | Structures globales (tsNCharcb) |

---

*Généré le 2026-04-17 depuis la documentation Doxygen 1.9.3 de R | API+ v13.7.0.0*
