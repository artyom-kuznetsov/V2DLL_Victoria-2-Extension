# Report: modding documentation and prior art — 2026-10-12

Why: U-2's first run (TGCX + "TGC v2.5.2 (stable)") loaded none of TGCX's
files. Before guessing, look for what is documented about how Victoria II
loads mods, and for anyone who already built what TGCX plans.

Reddit could not be searched: both the search tool and the in-app browser
refuse `reddit.com`. That part is still open (§5).

## 1. How Victoria II loads a mod — what is documented

| Rule | Source | Agrees with what we saw |
|---|---|---|
| `dependencies = { "<name>" }` loads the named mod **before** this one. It names the other mod's `name`, not its path or file | [Vic2 wiki, .mod file](https://vic2.paradoxwikis.com/.mod_file); [CK2 wiki, Modding](https://ck2.paradoxwikis.com/Modding) (same launcher family): "the other mod will be loaded first, allowing the 2nd mod to override some files" | yes: the dependency named v2.3.4's `name`, not v2.5.2's, and v2.5.2 ended up loaded after TGCX (P19) |
| A dependency is not a hard requirement: a mod whose dependency is missing still loads | CK2 wiki | yes: the launcher took TGCX with v2.5.2 and said nothing |
| `replace_path` makes the launcher load **only** the mod's own files in that folder (not recursive into subfolders) | Vic2 wiki (".. base game files in that directory"), CK2 wiki ("load ONLY from the specified paths inside the mod") | yes: TGC's `replace_path` on `decisions` dropped `tgcx_loadtest.txt` (`setup.log`: 105 TGC files, none of ours) |
| `user_dir` of all active mods is **concatenated**; the CK2 wiki says not to set one on submods | CK2 wiki | yes: the folder was `TGCX_TGC252`, in load order. The name tells the order of a run |
| Localisation: when a key is in several files, the **file that sorts first** wins. To override a key, name the file so it sorts before the one that defines it (`0anyname.csv` works) | [Vic2 wiki, Localisation](https://vic2.paradoxwikis.com/Localisation); CK2 wiki ("first file loaded wins"; same file: last line wins); Project Alice reads the `.csv` files Z→A with last-wins "to conform with modding expectations" (`src/gamestate/system_state.cpp`, `load_locale_strings`) | Denmark: TGC defines `DEN` in `00_countries-names.csv`; ours was `tgcx_loadtest_override.csv`, which sorts after it, so TGC wins **whatever the mod order** (P20) |
| Files of all mods are merged by name; a file with the same path and name as an earlier one replaces it | Vic2 wiki, Modding; Project Alice `docs/file_system_wrapper.md` (Vic2 uses PhysicsFS; later roots shadow earlier ones) | consistent with R3/R4: our files have our own names |
| Encoding cp1252; columns English, French, German, Polish, Spanish, Italian, Swedish, Czech, Hungarian, Dutch, Portuguese, Russian, Finnish; an empty line shifts columns | Vic2 wiki, Localisation | what SUB-0 already does |

Note on Project Alice: its `replace_path` only hides the **base game**
folder (`list_roots(fs)[0]`), not earlier mods. Our measurement says Vic2
itself hid TGCX's earlier files too, so Alice is not a reliable model on that
point; it is on localisation order.

### What changed because of this (2026-10-12)

- `submod/TGCX.mod`: `dependencies = { "TGC - The Grand Combination" "TGC v2.5.2 (stable)" }` (P19). Whether the launcher accepts a list with a name it does not have installed is still to be seen in U-2.
- `tgcx_loadtest_override.csv` renamed to `000_tgcx_loadtest_override.csv`: `0` sorts before `_`, so it comes before every `00_*.csv` of TGC (P20). `report-sub-0-1012.md` still names the old file; this report supersedes it on that line.
- `tools/install_submod.py` accepts a leading sort prefix of digits and underscores before `tgcx_`.
- Reinstalled in `E:\...\mod`.

Consequence for later cards: **any key we override (laws, ideologies, a
country name) goes in a `000_tgcx_*.csv`**. New keys of our own can stay in
`tgcx_*.csv`.

## 2. Prior art by mechanic

| TGCX mechanic | Closest thing found | What it means for us |
|---|---|---|
| 1. Negotiate laws | HPM's "Absolute Power" decision: an absolute monarch dissolves the upper house and appoints it for a year, for prestige, every 3 years ([ModDB](https://www.moddb.com/mods/historical-project-mod/news/absolute-power)). [HPM submod "Radicalism and Parliamentarism"](https://www.moddb.com/mods/hpm-submod-radicalism-and-parliamentarism-mod) (page blocked, not read). Players describe the vanilla problem: a reform passes and the next election hands the house back ([Steam](https://steamcommunity.com/app/42960/discussions/0/1741104717710448688)) | nobody found doing favours/affinity/vote-buying. "Absolute Power" is the script precedent for changing the upper house by decision; worth reading before LAW-0 |
| 2. Economy charts | Out-of-game save analysers: [vic2tools/vic2saveanalyzer](https://github.com/vic2tools/vic2saveanalyzer) (HTML report from a folder of saves), [Vic2SGEA](https://github.com/karyogamy/Vic2SGEA) (watches saves, writes economic history to JSON), [PMFU/Vic2-Save-Analyzer](https://github.com/PMFU/Vic2-Save-Analyzer), [aekrylov/vic2_economy_analyzer](https://github.com/aekrylov/vic2_economy_analyzer) | nothing in game. These are the ECO-A fallback ready-made, and a reference for the save format |
| 3. Hemicycle | nothing for Vic2. "BPM-ParliamentGraph" on the Workshop is Victoria 3 | new |
| 4. Rulers with portraits | leader-portrait swaps (all generals by culture); portraits are assigned by culture's graphical group ([Vic2 wiki, Culture modding](https://vic2.paradoxwikis.com/Culture_modding)); events that create leaders get a random portrait ([Steam](https://steamcommunity.com/app/42960/discussions/0/2569816492278750212)) | nobody does heads of state. The random-portrait note matters for GOV-0 |
| 5. Army templates | none: players say there are none in Vic2 ([Steam](https://steamcommunity.com/app/42960/discussions/0/3109143950432802368/)); the "Universal Army Templates (HPM)" Steam guide is a written composition, not a mod. Closest vanilla tool: rally-point checkboxes + "build unit" builds one unit per province in a region | new |
| DLL / engine | [maxioten/Victoria2-Reverse-Engineering](https://github.com/maxioten/Victoria2-Reverse-Engineering) (already in `E:\v2re\refs`) and **"Victoria 2 Unofficial Patch 3.05"** ([Nexus](https://www.nexusmods.com/victoria2/mods/26), [ModDB](https://www.moddb.com/downloads/victoria-2-unofficial-patch-305-062)), built on that RE work and V2DLL: installs as a mod, `v2dll_settings.ini` toggles each patch, all MP players need the same settings, performance/music/factory/frontline patches, a checksum-error workaround (0.6.1) | the V2DLL route is proven in players' hands; no UI additions found in it. Read its checksum fix before DLL-0 |
| Open engine | [Project Alice](https://github.com/schombert/Project-Alice) (GPL-3.0), a reimplementation of Vic2 that reads Vic2 mods | documents the loading rules in code; not a target, and its code cannot enter this repo without GPL |

## 3. Wiki pages worth keeping at hand

[Decision modding](https://vic2.paradoxwikis.com/Decision_modding),
[Event modding](https://vic2.paradoxwikis.com/Event_modding),
[IF Emulation](https://vic2.paradoxwikis.com/IF_Emulation) (P16),
[Dynamic localisation](https://vic2.paradoxwikis.com/Dynamic_localisation),
[List of conditions](https://vic2.paradoxwikis.com/List_of_conditions),
[List of effects](https://vic2.paradoxwikis.com/List_of_effects),
[Government modding](https://vic2.paradoxwikis.com/Government_modding).
The wiki has no pages for Interface, Issues/Reform or Units modding (red
links): for the GUI there is no documentation, only TGC's files and RE.

## 4. What U-2 should now show

With v2.5.2: settings folder `TGC252_TGCX` (TGC first), `setup.log` lists
`decisions/tgcx_loadtest.txt`, the decision exists, one event fires, Denmark
reads "[TGCX] Denmark". With v2.3.4: the same, folder `TGC_TGCX`.

## 5. Open

- Reddit (r/victoria2): the user searches, or pastes links.
- Paradox forum Victoria II modding subforum: not reached by search; likely
  the richest source for `dependencies` edge cases.
- HPM "Radicalism and Parliamentarism" and the Unofficial Patch pages
  answered 403 to the fetch tool.
