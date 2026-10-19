# Report: splitting TGCX into parts and supporting more bases (2026-10-18)

> Read-only scoping. No code, data, install, `NEXT.md`, `ROADMAP.md` or
> `AGENTS.md` was changed, nothing was written into the game's `mod\`
> folder (R1) and nothing was committed. Every measurement below ran on
> copies in the session scratchpad. **Most of what this report ends with is
> a [user] decision (R9); several of them revise D1.**

## 1. Question and method

The user asked whether TGCX should be split into parts (quality of life,
cosmetic, mechanic) and made to work on as many bases as possible: TGC,
vanilla 3.04, other mods such as HPM/HFM, and next to V2DLL.

| Source | How it was used |
|---|---|
| `tools/tgcx_bill_gui.py`, `tgcx_templates_gui.py`, `tgcx_conform_gui.py`, `gen_laws.py`, `gen_law_catalog.py`, `tgcx_law_support.py`, `install_submod.py`, `tgc_scan.py` | read; then imported and run by a harness (below) |
| `dll/tgcx/tgcx_dllmain.cpp`, `tgcx_renderer.h`, `tgcx_reforms.h`, `tgcx_signatures.h`, generated `tgcx_*_catalog.h` | read: what the DLL bakes in from TGC and how it gates its hooks |
| `docs/pitfalls.md` P4, P10, P19, P20; `docs/scripting-reference.md` §3; `docs/report-research-1012.md` §1; `docs/report-sub-0-1012.md` | launcher behaviour already measured here |
| `docs/report-v2dll-mod-slot-1018.md` | V2DLL coexistence, not re-derived |
| `E:\Victoria.II.v3.04.Inclu.ALL.DLC` (vanilla), `mod\HPM`, `mod\TGC` (v2.3.4), `mod\TGC_v2.5.2\TGC`, `mod\Divergences of Darkness Fan Fork` (DoDFF) | read only; their `.mod` files read for `replace_path` |
| `Documents\Paradox Interactive\Victoria II\` folder names | which mod combinations have been run on this machine |

**Harness (not kept, scratchpad `bases.py`).** For each base it built an
"effective" copy of `common\`, `units\`, `events\` and `interface\`: vanilla
first, then the mod's files on top, except folders the mod's `.mod` names in
`replace_path` (TGC: `common`, `units`, `events`; HPM: none of these;
DoDFF: `events`). It then called, in memory or into scratch folders:
`tgc_scan.scan()` (anchors, event range, ideologies), the three `inject()`
functions on the effective `country_politics.gui`, `buildunit.gui` and
`unitpanel.gui`, `tgcx_templates_gui.units()`, `gen_laws.generate()`
(in-memory, it returns the files), `gen_law_catalog.catalog_data()`, the
three staging `generate()` functions into a scratch copy of `submod\`, and
`install_submod.generate()` into a scratch destination. Textures were looked
up in the mod's folder, then vanilla's.

**HFM is not installed** (only `TGCHFMMap`, a TGC map-colour submod), so it
was not measured.

## 2. What each feature is and what it depends on

Kinds: **mechanic** changes the rules of the game; **QoL** does something
the player can already do by hand, faster; **cosmetic** shows information
the game already has, differently.

| Feature | Kind | DLL hooks / engine use | Generated `.gui` (anchor) | Script | Base data it bakes in |
|---|---|---|---|---|---|
| Law negotiation: Bill window, favours, purchases, promises, Crown, vote | **mechanic** | renderer + ordered GUI pass (`0x599F22`), Bill controls, decision command `0x2DCE10`, monthly favour tick | `country_politics.gui`, inserted at the end of `windowType "country_politics"` (`# >>> tgcx_bill`) | `decisions/events/localisation tgcx_laws.*` from `gen_laws.py`; `common\event_modifiers.txt` generated (TGC's file + our block) | issue groups and options (23 approved groups in `data/tgcx_law_catalog.txt`), 9 ideologies, TGC governments, TGC support rules; `tgcx_bill_catalog.h` compiles them into the DLL |
| Reforms tab (bill rows inside Politics) | mechanic (the entry point of the laws) | `0x2DC990`, `0x2DB22D` | none of its own (uses the Bill GUI) | the bill decisions | the bill catalogue |
| Decisions filter and suppressed popups | QoL glue for laws only | `0x2DB52A`, `0x2DB5E8`, `0x506691` | — | hides `tgcx_` decisions | — |
| Hemicycle (upper house as seats, seat hover) | **cosmetic** | renderer, `CPoliticsView` slots 1/2/4, pie hit-test `0xA3BDA8`, slice call `0x2D52C6` | none: draws over the native `chart_upper_house` | none | the 9 ideology names in `tgcx_ideology_candidates` (`tgcx_signatures.h:156`) |
| Army templates (Military build panel) | **QoL** | `CBuildUnitView` slots 0/1, `CConstructUnitCommand`; local `tgcx_templates.txt` | `buildunit.gui`, at `windowType "build_unit_view_large"` (`# >>> tgcx_templates`) | none | the exact set of 11 land units and their `unit_folder_N` ids (`tgcx_templates_catalog.h`) |
| Conform to template | **QoL** | `CUnitView` slots 0/8, move/merge/build commands | `unitpanel.gui`, at `windowType "unitpanel"` (`# >>> tgcx_conform`) | none | reuses the templates unit catalogue (needs Templates) |
| Charts (ECO-A/ECO-B, planned) | cosmetic | read-only fields + renderer | probably none (draw) or own window | none | none known |
| Rulers (GOV, planned) | mechanic (rulers, traits) + cosmetic (portraits) | portraits drawn by the DLL | likely `country_politics.gui` or topbar | ruler events/modifiers | TGC history and portraits (GOV-0 data) |

Two couplings matter for any split:

1. **The DLL is one gate today.** `DllMain` checks all 140 signatures at
   once and stops on one mismatch, and Reforms, Templates and Conform are
   only installed if the renderer installs
   (`tgcx_dllmain.cpp`: `if (!tgcx_InstallRenderer()) … else { …
   tgcx_InstallReforms(); tgcx_InstallTemplatesGui(); tgcx_InstallConform(); }`).
   Per-mechanic signature lists already exist (`tgcx_RequireSignatures`).
2. **Each generated `.gui` is a whole-file override.** The three files
   happen to belong to three different features (Bill → `country_politics`,
   Templates → `buildunit`, Conform → `unitpanel`), so they split cleanly
   today. Two packages that both need the same file (e.g. Bill and a
   future ruler panel in `country_politics.gui`) cannot be separate mods:
   the one loaded last wins and the other's fragment silently disappears.
   The same holds against third-party submods: `BigSquareFrameHPM`
   overrides `unitpanel.gui`, DoDFF overrides all three.

## 3. Per base: do the generators work?

| Check | vanilla 3.04 | HPM (`mod\HPM`) | TGC v2.3.4 | **TGC v2.5.2** | DoDFF |
|---|---|---|---|---|---|
| `tgc_scan` GUI anchors (`chart_upper_house`, `upper_house`, `reforms_tab`) | present | present | present | present | present |
| Events in 420 000 000-420 999 999 | none | none | none | none | none |
| Bill inject (`country_politics`) | ok | ok | ok | ok | ok |
| Templates inject (`build_unit_view_large`) | ok | ok | ok | ok | ok |
| Conform inject (`unitpanel`) | ok | ok | ok | ok | ok |
| Templates unit catalogue (11 land units) | ok | ok (HPM merges with vanilla's units) | ok | ok | **fails** (extra units) |
| `gen_laws.py` | runs, but **silently emits TGC names**: governments `democracy2`, `dominion`, `dominion2`, `dominion3`, `hms_government2`, `prussian_constitutionalism2`, `trade_unions_congress`, ideology `anarchist` | same as vanilla | ok | ok | runs (not inspected) |
| `gen_law_catalog.py` (and so the Bill stage) | **fails**: 8 catalogue groups unknown (`border_policy`, `centralization`, `child_labor`, `citizens_rights`, `colonial_policy`, `conscription`, `debt_law`, `penal_system`) | **fails**: `centralization`, `colonial_policy` unknown | ok | ok | **fails**: base has `police_reform`, `recruitment_reform` not in the catalogue |
| DLL ideology names (hemicycle, Bill blocs) | **missing** `tribalist`, `anarchist` | missing the same | all 9 | all 9 | missing the same two; 4 extra (`paternal`, `market_liberal`, `social_liberal`, `separatist`) |
| Templates and Conform art staging | ok | ok | ok | ok | ok |
| `install_submod.generate()` (event modifiers + 3 GUIs) | ok | ok | ok | ok | ok |

Effective files: `buildunit.gui` is byte-identical on every base (vanilla's;
no base overrides it except DoDFF). `unitpanel.gui` differs between vanilla
/HPM and TGC (27 461 vs 26 182 bytes); `country_politics.gui` differs on all
four. `chart_upper_house` is at the same position (`x=95 y=104`) in all.

What it means:

- **QoL (Templates, Conform) is already base-independent at the script/GUI
  level** on vanilla, HPM and both TGCs. On a mod with a different land
  unit set (DoDFF) the fixed 11-unit catalogue stops it; that needs the
  catalogue read from the engine at run time (as the DLL already does for
  ideologies) instead of a header baked from TGC.
- **The hemicycle** fails closed on vanilla/HPM: the snapshot returns
  `false` when any of the 9 names is missing (`tgcx_dllmain.cpp`,
  `if (!ideology || …) return false`), so nothing is drawn and the native
  pie stays. Making absent ideologies optional is a small DLL change; an
  extra ideology (DoDFF) also needs a larger seat table.
- **Laws are TGC-specific by design**: the 23 groups and their affinities
  were reviewed by the user against TGC (D7, 2026-10-12). Another base
  needs its own catalogue and its own affinity review, and `gen_laws.py`
  needs a check that rejects names the base does not have (today it
  produces script that refers to TGC-only governments; Vic2 ignores those
  silently, `AGENTS.md` §11).
- The generators are not fully atomic: on vanilla/HPM/DoDFF the Bill
  staging wrote its layout and then failed on the catalogue, yet
  `install_submod.generate()` still succeeded on that half-staged folder.
  A modular installer has to stop at the first failing part.
- **HPM cannot be loaded as installed**: `HPM4.5.mod` points to
  `mod/HPM4.5` but the folder is `mod\HPM` (P4). Fixing that means a new
  descriptor (as was done for `TGC_v2.5.2.mod`), never editing HPM's (R1):
  a user call.

## 4. Can the 3.04 launcher load several submods, and in what order?

| Fact | Status | Evidence |
|---|---|---|
| Two mods ticked at once load together | **measured** | settings folders `TGC252_TGCX`, `TGC_TGCX`, `HPM_arabia` in `Documents\Paradox Interactive\Victoria II\` |
| `dependencies` puts the named mod first; it matches the other mod's `name` | **measured** | P19, U-2 runs 1 and 2 |
| A `dependencies` list naming a mod that is not installed is accepted | **measured** | `docs/scripting-reference.md` §3, U-2 run 2 |
| `replace_path` in a later mod drops every earlier mod's files in that folder (not only vanilla's) | **measured** | P19: TGC loaded after TGCX dropped `tgcx_loadtest.txt` |
| `user_dir` of every active mod is concatenated in load order; that names the settings and **save** folder | **measured** | `TGC252_TGCX` vs `TGCX_TGC252` |
| Three or more mods at once (e.g. TGC + TGCX QoL + TGCX Laws) | **unverified** | — |
| Order of two submods that both depend on TGC but not on each other | **unverified** (CK2 wiki suggests list order; not checked here) | — |
| A dependency that is installed but not ticked: loaded anyway, warned, or ignored | **unverified** | — |
| What the launcher passes to `v2game.exe` (one `-mod=` per mod? in which order?) | **unverified**; matters for V2DLL's slot | `docs/report-v2dll-mod-slot-1018.md` §2.1 |

Consequences for a split:

- Every part must name every base it supports in `dependencies` (the
  names are exact strings; extra uninstalled names are harmless), or it can
  load before the base and be wiped by its `replace_path`.
- Parts with only `interface\`, `gfx\` and `localisation\tgcx_*` files are
  safe from `replace_path` on any base measured here (no base replaces
  `interface`); TGC replaces `localisation`, so localisation of a part that
  loads before TGC would be lost.
- **Saves move with `user_dir`.** Today's games live in `TGC252_TGCX`.
  Splitting TGCX into parts with their own `user_dir` gives each
  combination a new folder (`TGC252_TGCX_TGCXQOL`…), and existing saves do
  not appear there. The CK2 advice is no `user_dir` on submods; dropping it
  from every part except one keeps a single folder, but which one is the
  user's call.
- A generated file is generated **against one base**. A QoL folder made
  from TGC's `unitpanel.gui` replaces vanilla's panel with TGC's when the
  same folder is used on vanilla. So either one installed folder per base
  (`TGCX_QoL_TGC252`, `TGCX_QoL_vanilla`…, each with its own `name`) or a
  reinstall when switching base.

## 5. DLL side

### 5.1 One proxy with modules, or several DLLs

| | One `lua51.dll` with per-module gates | Several DLLs |
|---|---|---|
| Proxy slot | one slot, as today | still one `lua51.dll`; the others must be loaded by it (a plugin loader of our own) or by V2DLL's single `v2dll_mod.dll` slot |
| Shared hooks (D3D9 `Present`/`Reset`/`CreateDevice`, ordered GUI pass) | installed once | each DLL would chain its own: the latch issue already seen with V2DLL (`report-v2dll-mod-slot-1018.md` §3.2) |
| Tests | today's `test_dll.ps1` | one build and fixture set per DLL |
| Turning parts off | per-module gate + presence detection | by not installing a file |

**Recommendation: one DLL with modules.** Needed changes, all useful on
their own:

1. Replace the all-or-nothing signature check with per-module checks
   (lists exist), keeping the exe SHA-256 check global (R2).
2. Stop making Templates, Conform and Reforms wait on the renderer; only
   the drawing modules (Bill, hemicycle, charts) need it.
3. Activate a module only when its part is loaded: the DLL already probes
   for our own GUI elements by name (the off-screen `tgcx_bill_open`
   marker, P44); each part ships one such marker, and a missing marker
   means "part not installed", logged and skipped (R6). An optional
   `tgcx.ini` can switch modules off by hand.
4. Resolve base data at run time where possible (ideologies are already
   resolved by name; make missing ones optional; read land units from the
   engine instead of the baked 11-entry header). The law catalogue stays
   generated per base, so its header can only be per-base or loaded from a
   data file the installer writes.

### 5.2 V2DLL

Summarised from `docs/report-v2dll-mod-slot-1018.md`: with V2DLL loaded,
today's TGCX installs nothing, because five default-on V2DLL patches and
its unconditional `CPoliticsView` slot-10 patch fail TGCX's global gate,
and the `Direct3DCreate9` IAT check fails on its own. No V2DLL write was
found at TGCX's own patch sites. Points 1 and 2 above are exactly the
first step of that report's option (b): with per-module gates, Templates,
Conform and Reforms touch nothing V2DLL patches; the drawing modules also
need D3D chaining. Where `v2dll_mod.dll` would live is still open (only the
first `-mod=` folder is searched; if that is TGC's folder, R1 forbids it),
and the read-only command-line check in that report's §2.1 settles it.

## 6. Recommended structure and order of work

### 6.1 Structure

The user's three-way split maps onto what exists like this:

| Part | Contents | Bases it can reach | Files |
|---|---|---|---|
| **TGCX QoL** | Templates + Conform | vanilla, HPM, TGC v2.3.4/v2.5.2 measured ok; mods with other land units after the run-time unit catalogue | generated `buildunit.gui`, `unitpanel.gui`, art, localisation |
| **TGCX Cosmetic** | hemicycle now; charts and portraits later | TGC now; vanilla/HPM after optional ideologies | none today: the hemicycle is DLL-only, so this "part" is a DLL module with no submod until charts or portraits need GUI |
| **TGCX Laws** (mechanic) | Bill, favours, Reforms tab, Decisions filter; rulers later | **TGC v2.5.2 only** (and v2.3.4, which measured identical for laws) | decisions/events/localisation, generated `event_modifiers.txt` and `country_politics.gui` |

Plus **one DLL** with modules (§5.1), and an installer that takes the base
folder, resolves the effective files across vanilla + base (respecting
`replace_path`), generates each selected part into its own folder named
for that base, and stops at the first failing part.

Rules that stay: R1, R3 (still generated from the installed base, now any
base), R4 (`tgcx_` everywhere; parts can use `tgcx_qol_`… or keep one
prefix), R6 (each part works without the DLL, or does nothing harmful),
R10 (no mockup changes: none of this changes a mechanic).

### 6.2 Order of work (proposed cards)

| # | Card | What | Gate |
|---|---|---|---|
| 0 | — | Finish **LAW-3** first, on TGC v2.5.2 as now (laws stay TGC-only in every option) | unchanged |
| 1 | **MOD-0** (user, read-only) | In game: tick TGC v2.5.2 + TGCX + one other submod (e.g. `TGCOrganizedStacks`); record the settings folder name, `setup.log`, and the `v2game.exe` command line (`Get-CimInstance Win32_Process -Filter "Name='v2game.exe'" \| Select-Object CommandLine`) | §4's four unverified rows answered |
| 2 | **MOD-1** DLL modules | per-module signature gates, Templates/Conform/Reforms independent of the renderer, presence markers, optional ideologies | `test_dll.ps1`; 0.6.3 behaviour unchanged on TGC v2.5.2 in game |
| 3 | **MOD-2** installer | base profiles (effective files, `replace_path`), part selection, per-base folder names, atomic staging, `gen_laws` name check | new tests; TGC v2.5.2 output byte-identical to today's |
| 4 | **MOD-3** QoL on vanilla | install TGCX QoL on vanilla 3.04; Templates, Conform and save/reload in game | in game (V3) |
| 5 | **MOD-4** QoL on HPM | needs a working HPM descriptor first (P4, user's call) | in game |
| 6 | **MOD-5** run-time unit catalogue | QoL on mods with other land units (DoDFF as the test case) | in game |
| 7 | later | V2DLL option (b) on top of MOD-1 (chosen, D16, 2026-10-18); laws on another base (new catalogue and affinity review) | per their own reports |

### 6.3 Decisions for the user (R9)

1. **Revise D1?** Which bases become targets, and for which parts. The
   evidence supports QoL on vanilla, HPM and TGC; hemicycle on TGC now and
   vanilla/HPM after a small change; laws on TGC only.
2. **Split now or after LAW-3?** Recommended: after LAW-3, so the open law
   card is not reworked mid-flight.
3. **Package names and prefixes** (D3 is still open): one `TGCX` with
   parts (`TGCX QoL`, `TGCX Laws`) or new names.
4. **Save folder**: which part keeps `user_dir`, knowing that a change
   hides saves in `TGC252_TGCX` from the new combination.
5. **Per-base installs**: one installed folder per base, or reinstall when
   switching.
6. **HPM descriptor**: allow a new `.mod` file for HPM in `mod\` (as was
   done for TGC v2.5.2), or leave HPM out.
7. **V2DLL**: stays the separate decision in
   `docs/report-v2dll-mod-slot-1018.md`; MOD-1 makes option (b) cheaper.
8. **HFM**: not installed here; if wanted, the user installs it and the
   same harness measures it.
