# AGENTS.md — Implementation manual for the TGC submod for Victoria II

> This file defines **how to work** on this project. It is the contract
> between whoever implements (a person or an AI agent) and what must not
> break: the user's game, TGC, and the multiplayer game.
>
> **What to do now: `NEXT.md`** — the only place that says it.
>
> **Status, decisions, risks and session close: `ROADMAP.md`.** How each
> mechanic is built: `docs/technical-plan.md`. How it stays compatible with
> other TGC versions (deferred, D1): `docs/tgc-compatibility.md`.
>
> **How to split the work among subagents, and the status of each card:
> `SUBAGENTS.md`.**
>
> **Index of `docs/`: `docs/README.md`.** Superseded material goes verbatim
> to `docs/archive/`; nothing is deleted.
>
> **Closing a session requires writing down what comes next** (`ROADMAP.md`
> §7): archive the completed `NEXT.md` in `docs/archive/sessions.md`,
> rewrite it, **write the step-by-step instructions for every card of the
> next session** (`docs/instructions-<card>.md`) and update the statuses.
>
> **This file replaces `CLAUDE.md`** in this project: none is created. The
> `CLAUDE.md` in `C:\Users\JC\Downloads\` belongs to another project
> (stories260K on Amiga) and **does not apply here**.
>
> **Everything is in English (D10)**: code, comments, docs, commit messages,
> in-game text and chat.

---

## 1. Goal

A **submod of TGC (The Grand Combination)** for Victoria II 3.04 that adds,
in order of increasing difficulty:

1. **Law negotiation**: win support for a reform in exchange for something
   (money, prestige, concessions to a party, militancy).
2. **More economy charts**.
3. **A hemicycle chart** for parliament (the upper house).
4. **Random or historical rulers with portraits** (heads of state or of
   government; generals and admirals with portraits **already exist** in
   TGC).
5. **Army templates** like EU4: define a composition and recruit it in one
   go.

Deliverable: a submod folder + its `.mod`, loaded on top of TGC, and, for
what script cannot reach, a **DLL** loaded as a proxy of `lua51.dll` (the
V2DLL technique).

**Target (D1, revised by the user 2026-10-12): TGC v2.5.2 (stable).**
Other TGC versions are not tested and not designed for; compatibility is
deferred, maybe for good. **D15 (2026-10-18): Templates + Conform become
their own package aimed at almost any base**; that work follows LAW-3. Still, no TGC file is copied into the repository
(R3, R8): whatever has to be overridden is generated from the installed
v2.5.2 at install time (`docs/tgc-compatibility.md` §3).

It is **not** a fork of TGC. It is **not** a full decompilation of the game:
only the subsystem each mechanic needs is studied in Ghidra.

---

## 2. Hard rules (NOT negotiable)

Breaking any of these invalidates the implementation.

| # | Rule | Consequence if broken |
|---|---|---|
| R1 | **Nothing is edited in place**: not `v2game.exe`, not TGC's files, not HPM's. The submod adds; the DLL patches in memory | A TGC update or a reinstall wipes the work, and the user loses their game |
| R2 | **Addresses are valid only for the `v2game.exe` with SHA-256 `62d48c20…6648`** (3.04, the one on `D:\` and `E:\`). Run `python tools/check_exe.py` before using any address | Another build has other addresses: a blind patch hangs the game or corrupts the save (P8) |
| R3 | **Never copy a whole TGC file into the submod.** Whatever must be modified (mostly the `.gui` files) is produced by `tools/` from the installed TGC version, inserting next to named anchors | A copied file freezes that TGC version: it is what breaks TGC submods between versions (P9) |
| R4 | **Every identifier of ours carries the `tgcx_` prefix** (files, localisation keys, flags, variables, modifiers, decisions, sprites). Events in the reserved range **420 000 000 – 420 999 999**. No `replace_path` | Silent clashes with TGC: in Vic2 a repeated name gives no error, one of the two wins |
| R5 | **The DLL does not change game state outside the engine's command system.** What only reads and draws (charts, hemicycle, portraits) can go direct; what creates units, changes laws or moves money goes through an engine command (`C*Command`) or through script | Multiplayer desync (OOS) and a different checksum (P12) |
| R6 | **The script part works without the DLL.** The DLL adds; it is not required to load the submod. If a byte signature does not match, that patch is not installed and the log says so | A user without the DLL, or with another build, is left without a game |
| R7 | **In code, addresses are RVAs** (`base + rva`); the executable has ASLR. Ghidra VAs (`base 0x400000`) only in docs, with the conversion next to them | The game loads at another base (seen at `0x00080000`): a fixed VA lands anywhere (P7) |
| R8 | **No third-party material enters git without a licence that allows it**: not the executable, not the Ghidra project, not TGC files. **V2DLL code may be used** (D6: the project is for personal use), but every file or function taken from V2DLL says so in a `// from V2DLL: <file>` comment so it can be removed if it is ever published | Redistribution without permission (§13) |
| R9 | Decisions marked **[user]** are not taken by the agent: it prepares the data, recommends and asks | That is how everything important was decided (ROADMAP §3) |
| R10 | **The mockups are the interface spec.** Before designing or implementing a mechanic, open its mockup (<https://claude.ai/artifact/Wt2YTaaM6xV8JXsUwapRV4>, boards Main, Bill, Ruler, Economy, Templates; PNG exports in `mockups\`) and replicate it as closely as the engine allows: layout, sprites, texts, numbers shown. Every deviation is written in the card's report with its reason. **If the mechanic itself changes, the mockup changes in the same session** (republish the artifact, re-export the PNGs) | What was agreed with the user is the mockup; an interface that drifts from it, or a mockup that no longer matches the mechanic, means designing twice |

---

Current Conform reference (user, 2026-10-19): `mockups/6-conform-current-1019.png`
is the accepted native army-panel appearance. The older `6-conform.png` and
published Conform board are outdated for this panel; retain them historically.
See `docs/visual-references.md`. Compatibility work preserves the current look.

## 3. Starting material

```
E:\Victoria.II.v3.04.Inclu.ALL.DLC\        <-- the working install (D:\ is an identical copy)
├── v2game.exe            the game (12 MB). victoria2.exe is only the launcher (P5)
├── lua51.dll             the DLL proxy goes here, with the original renamed
└── mod\
    ├── TGC\  TGC.mod                 the user's TGC v2.3.4. DO NOT TOUCH (R1). Has junk in its root (P6)
    ├── TGC_v2.5.2\                   git clone of tag v2.5.2 (stable), core.autocrlf=false (P1)
    │   ├── TGC\                      the mod
    │   ├── TGC*\ *.mod               TGC's official submods (an example of what NOT to do, P9)
    │   └── TGC Niche Submods\
    ├── TGC_v2.5.2.mod                "TGC v2.5.2 (stable)", user_dir TGC252 (created 2026-10-12)
    └── HPM\  HPM4.5.mod              previous base; no longer the base (D2). The .mod points wrong (P4)

E:\v2re\                                   <-- all reverse-engineering material, outside git (R8)
├── bin\v2game.exe        read-only copy of the reference executable
├── ghidra\v2game.gpr     Ghidra project (auto-analysis + the repo's symbols)
├── logs\                 ghidra_analysis.log, ghidra_script.log, ghidra_console.txt
└── refs\
    ├── Victoria2-Reverse-Engineering\   maxioten, commit e299a02 (2026-10-11): notes, Symbols/*.csv, tools/
    └── V2DLL\                           artyom-kuznetsov, commit 5d6f894 (2026-10-11): lua51.dll proxy source

E:\tools\ghidra_12.1.4_PUBLIC\             Ghidra 12.1.4 (zip SHA-256 checked against the release)

C:\Users\JC\Downloads\victoria2template\   <-- THIS PROJECT (git)
├── AGENTS.md  NEXT.md  ROADMAP.md  SUBAGENTS.md
├── docs\                 index in docs\README.md
├── mockups\              PNG exports of the interface mockups (ignored by git: game art, R8)
├── ghidra\               Ghidra scripts (ImportV2Symbols.java, ExportRtti.java, DecompileAt.java)
├── data\                 tgcx_affinity.txt, tgcx_laws.txt: the law mechanic's data (read by tools\gen_laws.py)
├── tools\                check_exe.py, tgc_scan.py, install_submod.py, gen_laws.py, test_gen_laws.py, mockups\export.py
├── submod\               the submod folder (SUB-0)
└── dll\                  Win32 proxy, native/GPU tests and generated signatures
```

**Installed tools:** Java 21 (`C:\Program Files\Java\jdk-21`, the one
Ghidra 12 requires), Python 3.11, git, Visual Studio 2022 Community and
Build Tools 2019 (MSVC x86 for the DLL), MSYS2 in `C:\msys64`.

**Published TGC versions** (git tags, 2026-10-12): from `v0.9-alpha` to
`v2.5.2`; the latest stable is **v2.5.2** (2025-05-29). `master` has commits
up to 2026-10-02 with no release cut.

---

## 4. Map of the executable (what is already known)

Everything with `conf`: **C** confirmed in the code, **I** inferred, **?**
unknown. Source: `refs\Victoria2-Reverse-Engineering\Symbols\*.csv` and
`refs\V2DLL\PATCHES.md`, unless stated otherwise.

```
Image        preferred base 0x00400000, ASLR (DYNAMIC_BASE + relocations)
Conversion   RVA = VA - 0x400000
             file = VA - 0x400C00 (.text) | VA - 0x401A00 (.rdata) | VA - 0x402600 (.data)
RTTI         1 165 named classes (.?AV…@@), measured 2026-10-12
```

| What | Where | conf | For which mechanic |
|---|---|---|---|
| `g_world` (game state) | VA `0x012588E8` | C | all |
| `g_countryManager` (+0 count, +4 `CCountry*[]`) | VA `0x012587E4` | C | all |
| `CCountry+0x1DC` `CVariables` (script variables; `int` value in thousandths at `node+0x1C`) | V2DLL §4.7 | C | script ↔ DLL bridge |
| `CCountry+0xBD4` leader list (daily death-by-age roll; head/tail/count `+0xBD4/+0xBD8/+0xBDC`) | structs.csv; `AddLeader`, `docs/symbols.md` (2026-10-17) | C | rulers |
| `CCountry+0xE78/+0xE7C` treasury (int64, 2¹⁵ fixed point; `+0xE80` start-of-day snapshot) | V2DLL §4.7 | C | charts |
| `CCountry+0x198` industrial score (int64, 15 fraction bits) | V2DLL §4.7 | C | charts |
| `CCountry+0x12E8` total population (adult men) | V2DLL §5.3, §10 | C | charts |
| **`CCountry+0x8B0` upper house** (`CUpperHouse`); at `+0x10` an `int64[]` by ideology index (`CIdeology+0x28`), 2¹⁵ fixed point | `docs/symbols.md`, U-4 (2026-10-12); observed indices Conservative=1, Reactionary=2, Liberal=6; total length still unknown | R (observed data/layout) | hemicycle |
| `CCountry+0x12D0` civilized (byte); province `+0x12C` owner / `+0x134` controller | V2DLL §10 | C | several |
| Game options (singleton) | VA `0x0125B5E0` | C | — |
| `CPoliticsView` vtable | VA `0x00E0E458` (RVA `0xA0E458`) | C | hemicycle, laws, rulers |
| `CBudgetView` / `CProductionView` / `CTechnologyView` vtables | RVA `0xA059F0` / `0xA0FECC` / `0xA17FA4` | C | charts |
| `IDirect3DDevice9::Present` (slot 17) | hooked by V2DLL §7.2 | C | drawing on top (hemicycle, charts) |
| Per-frame message pump `FUN_009DF2B0` | RVA `0x5DF2B0` | C | DLL tick |
| Daily sync check `FUN_00682EC0` | RVA `0x282EC0` | C | OOS logging |
| Custom button from `.gui`: `CButtonObserverGlue` (44 B: +0 vtable, +4 owner, +8 handler) | V2DLL §5.1 | C | every mechanic with buttons |
| Reform click `FUN_006DC990` / reform rows `FUN_006DA930` / decisions list `FUN_006DB2E0` / decision message `FUN_00906F00` | RVA `0x2DC990` / `0x2DB22D` / `0x2DB52A`,`0x2DB5E8` / call `0x506691`; `docs/symbols.md` | C (static; hooks unconfirmed in game) | laws (0.3.5) |
| `CConstructUnitCommand` ctor `FUN_0057D1B0` (size 0x68, id 0x5CA); UI recruit `FUN_00732520` | VA `0x0057D1B0` / `0x00732520`; `docs/symbols.md` | C (static) | templates |
| `CCountry+0x4D8` timed modifiers (node +0 item, +8 next; `CTimedModifier` item +8 modifier, +0xC expiry date); modifier manager VA `0x0125A69C`, name at +0x30 | `docs/symbols.md` (2026-10-17) | C (static) | law timers, automatic favours |

**RTTI classes that anchor each mechanic** (not studied yet; GH-2):

| Mechanic | Classes |
|---|---|
| Templates | `CBuildUnitView`, `CConstructUnitCommand`, `CCreateUnitCommand`, `CCancelUnitConstructionCommand`, `CBuildQueueEntry`, `CArmy`, `CNullSubUnitDefinition` |
| Rulers | `CLeader`, `CNullLeader`, `CCreateLeaderCommand`, `CAssignLeaderCommand`, `CGraphicalCultureType`, `CLeaderChange` |
| Laws | `CIssue`, `CIssueGroup`, `CIssueChange`, `CSetPoliticalReformCommand`, `CSetSocialReformCommand`, `CSetEconomicReformCommand`, `CSetMilitaryReformCommand`, `CSetRulingPartyCommand`, `CParty`, `CIdeology`, `CIsNextReformTrigger`, `CListPartiesWindow` |
| Hemicycle | **`CUpperHouse`**, `CUpperHouseTrigger`, `CUpperHouseEffect`, `CUpperHouseChange`, `CAdditiveForUpperHouseMTTH`, `CPoliticsView` |
| DLL → game bridge (R5) | **`CCommand`** (base of the commands), **`CSetVariableCommand`**, `CSetFlagCommand`, `CExecuteDecisionCommand`, `CSelectEventOptionCommand` |
| Core | `CCountry`, `CState`, `CProvince`, `CMapProvince`, `CPop` |
| Interface | `CGui`, `CGuiObject`, `CGuiType`, `CEU3Gui`, `CEU3DialogGui`, `CButton`, `CButtonType`, `CMaskedSpriteType`, `CGraphicalObject`, `CFixedWindow` |

There are **74 `C*Command` classes**, counting the base `CCommand`
(measured 2026-10-12 with `grep -ao '\.?AVC*Command@@'`). Commands are what
the engine synchronises in multiplayer: if the DLL has to change something,
it does so by creating one of them (R5). **`CSetVariableCommand` is the
bridge's way back:** the DLL can write a country variable through a
synchronised command, and the script reacts.

The full vtable inventory (1 500, with the slots of the mechanics' classes)
is in `docs/rtti-classes.md`, generated by `ghidra/ExportRtti.java`. What
this project has named, with its evidence, is in `docs/symbols.md`.

Complete upper-house mapping/vector bounds and the hemicycle's ordered
GUI drawing are runtime-confirmed (GH-2/U-5, 0.2.4). Visual polish remains
implemented in 0.2.5 and confirmed working in game. HEMI-3 0.2.6 native
seat hover is accepted and retained as the baseline; 0.2.8 aligns its cover
with the native header border, accepted in game. Current status
and next work are in ROADMAP.md and NEXT.md.
What is **not** known and is needed: which function decides whether a
reform can be voted; how a GUI
element (sprite and frame) is created or changed on the fly; the format of
`CConstructUnitCommand`; where the history behind the charts the engine
already draws lives.

---

## 5. The submod: layout and loading

```
mod\TGCX.mod                 name, path, dependencies = { "TGC - The Grand Combination" }
mod\TGCX\
├── decisions\tgcx_*.txt     new files only (R3, R4)
├── events\tgcx_*.txt        ids 420 000 000 – 420 999 999
├── common\                  NOTHING that overrides a TGC file; what cannot be added without overriding
│                            is generated (docs/tgc-compatibility.md §3)
├── interface\               generated by tools\ from the installed TGC version
├── gfx\interface\tgcx_*     our own sprites (portraits, fallback hemicycle)
└── localisation\tgcx_*.csv  cp1252, ; separator, one column per language, ends in x
```

The name `TGCX` and the prefix `tgcx_` are **provisional** (D3 [user]).

**How it loads** (P10, to be checked in game in SUB-0): TGC uses
`replace_path` for `common`, `decisions`, `events`, `history`,
`localisation`, etc. A submod loaded afterwards **adds** files to those
folders; a file with the same name as one of TGC's **overrides** it. That
is why everything of ours has its own name (R4).

---

## 6. Toolchain (the one actually used)

```powershell
# is the executable the reference one?  (R2 gate)
python tools/check_exe.py

# inventory of a TGC version, and the differences between two
python tools/tgc_scan.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC_v2.5.2\TGC
python tools/tgc_scan.py --diff <TGC A> <TGC B>

# re-export the mockup PNGs into mockups\ (R10); boards and assets in E:\v2re\mockups, outside git
python tools/mockups/export.py

# generate the law mechanic (data/ + TGC v2.5.2) and check it
python tools/gen_laws.py
python tools/test_gen_laws.py

# install / remove the submod in the game's mod\ folder (also generates common\event_modifiers.txt)
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod [--remove]
# MOD-2 packages per base (D15): army on any base, politics on TGC v2.5.2 only
python tools/install_submod.py <mod> --base tgc252 --packages army,politics --source <stage> --dll <tgcx.dll> --backup <new dir>
python tools/install_submod.py <mod> --restore <backup> | --remove-packages

# Ghidra: open the project in the GUI
E:\tools\ghidra_12.1.4_PUBLIC\ghidraRun.bat          # File > Open Project > E:\v2re\ghidra\v2game.gpr

# Ghidra headless: re-analyse from scratch (slow; done 2026-10-12)
$env:GHIDRA_HEADLESS_MAXMEM='12G'
E:\tools\ghidra_12.1.4_PUBLIC\support\analyzeHeadless.bat E:\v2re\ghidra v2game `
  -import E:\v2re\bin\v2game.exe -overwrite `
  -scriptPath C:\Users\JC\Downloads\victoria2template\ghidra `
  -postScript ImportV2Symbols.java E:\v2re\refs\Victoria2-Reverse-Engineering\Symbols `
  -log E:\v2re\logs\ghidra_analysis.log -scriptlog E:\v2re\logs\ghidra_script.log

# Ghidra headless on the already analysed project (run a new script)
E:\tools\ghidra_12.1.4_PUBLIC\support\analyzeHeadless.bat E:\v2re\ghidra v2game `
  -process v2game.exe -noanalysis -scriptPath <folder> -postScript <Script>.java
```

V2DLL check (2026-10-19): **Army 0.8.2 with V2DLL 5.82 passed** in the separate fresh-copy test (5/5 extras moved, five recruits queued). `docs/report-v2d-082-passed-1019.md`. Politics/MP/other bases are outside that check.

Installed: **0.8.2 (TPL-4: Create and Transfer commands queued together,
vanished-destination verification)** on E: 2026-10-19 after the user's normal
exit confirmation. **TPL-4 passed in game** 2026-10-19 (Army only, our loader): 3/3, 1/1 and 6/6 extras arrived. V2DLL 0.8.2 and the other U-12
parts remain unconfirmed. Full package backup:
`E:\v2re\logs\tgcx-tpl4-1019\before-082-submod`; stage `stage-082` beside it.
Loader unchanged (0.8.0). See `docs/report-tpl-4-1019.md` and
`docs/instructions-tpl-4-082-check.md`.

Previously installed: **0.8.1 (TPL-3 Ctrl/Alt-click, TPL-4 Conform detach verified and retried)** on E: 2026-10-18, not tested in game (`docs/report-tpl-4-1018.md`; backup `E:\v2re\logs\tgcx-tpl4-1018\before-081-submod`). Before it: **0.8.0 (MOD-2: Army and Politics packages per base, `tgcx.dll` in each package folder found through `-mod=`)**, tested in game 2026-10-18 (`docs/report-mod-2-1018.md`; rollback `before-080-*` in `E:\v2re\logs\tgcx-mod2-1018\`).

Before it: **0.7.0 (MOD-1: per-module signature gates; `tgcx.dll` with all
the logic behind a `lua51.dll` loader; `V2Mod_Init` for V2DLL)**, installed on E:
2026-10-18 and **passed the game check** (rollback 0.6.5 in `before-070-dll`), staged in
`E:\v2re\logs\tgcx-mod1-1018\stage-070\`
(`docs/report-mod-1-1018.md`). Since 0.7.0 `install_dll.py` installs both
files; a single-file build is still accepted as a rollback.

Before it: **0.6.5 (P47: Conform unit-panel slots freed;
`docs/report-tpl-1-slots-1018.md`)**, backup `before-065-dll`. Before it,
**0.6.4 (LAW-3: Reforms rows follow the D14 offer,
top-bar alert filter, load test out of the default install, Bill text
fitted)** in `E:\v2re\logs\tgcx-law3-1018\stage-064\`, **U-11 passed in game
2026-10-18** (`docs/report-u-11-1018.md`; G1 open). Rollback
`before-064-*`.

Before it: **0.6.3 (TPL-1: the Conform window styled like the
native 332px army panel and placed flush beside it, plus lifetime guards)**,
staged in `E:\v2re\logs\tgcx-tpl1-1017\stage-063\`, installed on E:,
**tested and accepted in game** (`docs/report-tpl-1-visual-1017.md`).
Before it: **0.6.2** (`docs/report-tpl-1-window-1017.md` §8; U-10
passed). 0.6.0 did nothing (P44) and 0.6.1 crashed after a Merge (P45).
Rollbacks: `before-063b-submod`, `before-063-*` (0.6.2), `before-062-*`
(0.6.1), `before-061-*` (0.6.0), `before-060-*` (0.5.1).

Before it: **0.4.4 (TPL-0: the Templates tab is hidden in Build
Navy)**, installed on E:, **accepted in game** (`docs/report-tpl-0-visual-1017.md` §10). 0.4.3 is installed and
confirmed in game, including recruitment through the panel (P41, P42). 0.4.1's
owner-chain anchor (P40) is confirmed in game. On 0.4.0 the
user accepted nine-regiment recruitment and save/reload
(`docs/report-tpl-0-runtime-1017.md`); the panel was detached at the upper
left. The 0.4.0 DLL is retained in `E:\v2re\logs\tgcx-tpl-place-1017\`. The complete 0.3.5 DLL/submod rollback
is retained privately.
`NEXT.md` and `docs/instructions-tpl-0.md` give the current steps.

Previous candidate: **0.3.5 (LAW-2 visible buttons, Reforms tab per board 1,
`tgcx_` decisions hidden, DLL popups skipped)** on top of 0.3.4, whose look
the user accepted; installed on E:, automatic gates passed, **done, not
tested in game** (`docs/report-law-2-reforms-1017.md`; U-7 is the check).
The user selected army templates next: `docs/instructions-tpl-0.md`. Before it: **0.3.3 placement/layering repair accepted**. The user's 0.3.0
screenshot failed the visual check; 0.3.1 was off-screen. 0.3.2 live evidence exposed the
render-coordinate and scene-order errors; 0.3.3 corrects those
with reference-engine/GPU regression coverage. See
`docs/report-law-2-live-1016.md`. Accepted DLL 0.2.8
hover/header baseline is retained privately for rollback.
0.2.6 native seat hover works in game and is the retained working baseline.
Remaining extended U-5 coverage is unconfirmed; LAW-2 is now selected.
`docs/report-hemi-3-seam-1012.md` records the latest correction; the header
report records 0.2.6 hover acceptance.
LAW-1's first U-6 run exposed every conditional report option at once.
The correction passed the user's short Present/Count/save-reload check.
All 23 base affinities are approved; 25 catalogue, 3 GUI and 10 script
installer tests pass. Complete prior script/DLL rollbacks retained; default
LAW-0 output remains byte-identical. LAW-2 adds native Bill labels/buttons
and an ordered projected chart; Count uses the engine decision command.
Full controls and automatic favours remain unfinished. Finish laws before
starting another mechanic. See `docs/report-law-2-bill-1013.md`,
`docs/instructions-law-2.md` and `docs/instructions-u-7.md`.
Build with `tools/build_dll.ps1`, check with `tools/test_dll.ps1`, and install
with `tools/install_dll.py` after normal game exit. Keep native tooltip slot
10 untouched and draw in native GUI order; Final Present only samples.

The DLL is built with MSVC **x86** (the game is 32-bit): Visual Studio 2022,
Win32 platform. Its environment is set up in DLL-0.

---

## 7. Conventions

### Victoria II script

- Text files in **Windows-1252**, never UTF-8 with BOM. Localisation:
  `key;English;…;x` with TGC's column order (look at one of its `.csv`
  files). The text goes in the English column (D10).
- One file per mechanic: `tgcx_<mechanic>.txt` / `.csv`.
- **Look it up before writing it** (user, 2026-10-12): every piece of script
  starts from `docs/scripting-reference.md` (the wiki page) and
  `docs/tgc-howto.md` (TGC's own system for the same thing: extend it, don't
  build a parallel one), plus a working TGC example. Only what neither
  covers is designed here.
- Conditions that depend on TGC (names of laws, ideologies, governments)
  come from TGC v2.5.2's files or the `tgc_scan.py` inventory, not from
  memory.

### DLL (C++)

- Every patch declares its expected bytes and is installed only if they
  match (like V2DLL's `InstallExePatches`). If not, a line in the log and
  carry on.
- Hooks with `pushad/popad` around any call into C, and the overwritten
  instructions replicated exactly (V2DLL's rule, `PATCHES.md`).
- Game function names: those from the repo's CSV or from Ghidra
  (`FUN_xxxxxxxx` with its VA), never invented without recording it in
  `docs/symbols.md`.
- Comments in English (D10), matching the density of the surrounding code.

### Documents

- In English (D10). Absolute dates (`2026-10-12`). Numbers with the tool
  that measured them.
- A report (`docs/report-<card>-MMDD.md`) is not rewritten: if something
  supersedes it, write a new one and update `ROADMAP.md` §1.

---

## 8. Known pitfalls

Index, one line per pitfall. **The full text (cause, symptom, fix) is in
`docs/pitfalls.md`.** A new pitfall is added there and here with the next
number (**the next one is P59**).

- **P1** `git clone` with `core.autocrlf=true` converts TGC to CRLF (and can break misdetected binaries)
- **P2** `TGC.mod` at tag v2.5.2 says `current_release = "v2.5.1"`: useless for telling the version
- **P3** The Windows console is not UTF-8: Python prints garbage unless reconfigured
- **P4** `HPM4.5.mod` points to `mod/HPM4.5`, but the folder is called `HPM`
- **P5** `victoria2.exe` is the launcher (26 KB); the game is `v2game.exe`
- **P6** The user's `mod\TGC` has the save-analyser scripts loose in its root
- **P7** ASLR: the executable does not load at `0x400000`
- **P8** Addresses from V2DLL and from the RE repo may come from different builds
- **P9** TGC's official submods override whole files: they break when the version changes
- **P10** Load order and `dependencies` in the Vic2 launcher: unverified
- **P11** The Vic2 GUI is static: it cannot show an image depending on script state
- **P12** Anything the DLL changes in the simulation desyncs multiplayer unless it goes through commands
- **P13** V2DLL has no published licence (resolved for personal use by D6; see R8)
- **P14** `cmd` splits `analyzeHeadless.bat` arguments at commas
- **P15** A Ghidra script cannot declare a method `GhidraScript` already has (`setPlateComment`): it does not compile and headless "skips" it
- **P16** Vic2 script has no `if`: conditionals go into events or options with `trigger`, or into `random_owned = { limit = { owner = { … } } owner = { … } }`
- **P17** The V2DLL project uses the `v145` toolset; here there is `v143` (VS 2022): it has to be retargeted
- **P18** `tgc_scan.py --diff` compares the inventory, not the files: v2.3.4 and v2.5.2 differ in 223 files
- **P19** A submod loaded before TGC is wiped by TGC's `replace_path`: `dependencies` must name the TGC in use (v2.5.2 copy: "TGC v2.5.2 (stable)")
- **P20** Localisation: the file that sorts first wins; keys that override TGC go in `000_tgcx_*.csv`
- **P21** The `trigger` of an `is_triggered_only` event is not checked when an effect fires it: branch in the effect (IF emulation)
- **P22** Vic2 has no hidden events: every event opens a window; silent work goes in decision effects
- **P23** A polled event with MTTH 1 day fired a month after its trigger held: on-the-day logic goes in decision `allow`s
- **P24** Loaded byte signatures with absolute operands must account for ASLR relocations; generate offsets and adjust expected bytes

- **P25** The DLL-0 time-advance pump call is conditional; paused/menu sampling requires final presentation (initial EndScene route superseded by P26)

---

- **P26** Intermediate render callbacks and inherited viewports can hide an overlay; native ordered GUI draw/viewport restoration now working in game (0.2.4); visual polish remains

- **P27** The engine tooltip return contains several strings; a guessed empty single-string return crashed 0.2.2, so suppression was removed

- **P28** A chart painted at final Present covers tooltips and windows; draw after its named native overlay in the ordered GUI pass

- **P29** Windows PowerShell redirected stderr can reject successful unittest progress; runner output uses stdout and exit-code gates stay intact

- **P30** Drawing a hemicycle does not change native pie hit-testing; HEMI-3 0.2.6 scalar hover fix accepted in game

- **P31** Native hover helpers have different register/stack/result ABIs; verify RET cleanup and compressed slice ordinals before hooking or invoking fixtures

- **P32** A cover feather extends beyond its opaque core and can erase earlier native labels; clip to actual sprite/content bounds rather than text maximum height (0.2.8 accepted in game)

- **P33** Negate a compound generated gate as one `AND`; `NOT` directly over several children tests none of them
- **P34** Conditional event options were all displayed in game; select one ordinary result event in the firing effect, and do not simulate option hiding
- **P35** A child render subtree inherits parent coordinates/order; use native foreground promotion on opening and actual render translation for the Bill chart
- **P36** Check stored position and native render conversion together; the 0.3.2 absolute-setter recommendation was superseded by live evidence in P37
- **P37** Render +0xFC/+0x100 are centred inputs; use matrix +0x84/-0x88 for pixels, positive screen coordinates for the packed setter, and scene append rather than prepend (0.3.3 visual layout accepted)
- **P38** The native decision click skips `potential`/`allow`: every decision the DLL sends guards its own effect
- **P39** The engine validates decision `potential`/`allow` in `CExecuteDecisionCommand` (`FUN_00906B40`): hide `tgcx_` decisions in the DLL's list filter, not in script (corrects P38's scope)
- **P40** An inner matrix (`+0x84/-0x88`) is relative to its owner (`+0xE4`); only children of the renderer scene are in screen pixels: sum the chain (TPL-0 0.4.1)
- **P41** A `textSpriteType` (e.g. `GFX_button_standard_177`) on a bare button neither draws nor binds: use plain `spriteType`s
- **P42** Showing a window re-shows its whole subtree: a cached child show/hide state is stale after the parent is shown
- **P43** A field named after the argument slot it fills is not identified: stack `+0xC0` is the tag; the province is `+0xDC`→`+0x58` (U-9)
- **P44** A GUI name lookup searches only the host's direct children: probe with a top-level marker button (0.6.0 Conform did nothing)
- **P45** A command's allocation size comes from a native `push size; call new`, never from its last field: Merge is 0x4C, not 0x48 (0.6.1 heap-corruption crash)
- **P46** A native row builder that ran once keeps its element state: a hook that only sets state never clears it; make the view rebuild or own the state (U-7 Reforms tab)
- **P47** A fixed table of native objects freed only by our destructor hook fills up: free on vtable change and log a full table (0.6.4 Conform stopped after a year)
- **P48** V2DLL writes `common\defines_v2dll.txt` into the first `-mod=` folder: expect it in R1 hash checks and move it out after a V2DLL run
- **P49** The launcher does not enforce `dependencies`: a submod ticked alone loads on vanilla (TGCX alone crashed, MOD-0 run 3); an unticked dependency puts its mod first (order corrected by P50)
- **P50** The launcher orders `-mod=` by display name, not by dependencies: "Army…" was listed before TGC; never rely on the order

- **P51** An empty detach destination may vanish before next-day Transfers/verification; queue Create + Transfers together and verify membership, including a vanished destination (0.8.2 passed).

- **P52** TGC map/default.map hardcodes `../mod/TGC/map/definition.csv`; a fresh nested-only copy fails even with a valid descriptor. Use canonical `mod/TGC` without editing TGC data.

- **P53** TGC's army header controls sit 26px below vanilla's; fixed Conform button coordinates put it under vanilla's statistics row. Generate the opening position from the effective `unitattrition_icon` anchor.

- **P54** Native GUI factories register roots for deferred collection. Hide and mark the subtree through native slot 20; direct scalar deletion leaves a manager entry dangling (MOD-6 static evidence).

- **P55** Free soldier-pop capacity does not imply a land route to a target army. Scope Conform preview and recruitment together, and exclude stranded reinforcements from pending counts.

- **P56** Independent native GUI entry roots need foreground promotion on first show/reopen and explicit host-hide synchronization. Position/show and successful construction do not prove visible controls.

- **P57** CFixedWindow primary Show exposes only its root; independent windows need CGui secondary subtree Show to activate child controls. Apply on visibility transitions, not every poll (P42).

- **P58** Map province+0x2A is IS LAND (nonzero), not sea. Old route fixture repeated the wrong polarity; validate field meaning independently with native coastal/port policy.

## 9. Decisions

| ID | Decision | Options | Status |
|---|---|---|---|
| **D1** | Compatibility | **TGC v2.5.2 only**; other versions deferred (maybe never). Nothing from TGC enters git; what is overridden is generated from the installed v2.5.2. Revised: the first answer was "any version" | **closed** (user, 2026-10-12, revised the same day after U-2) |
| **D2** | Base | **TGC** instead of HPM (TGC already absorbed HPM/HFM); test with stable v2.5.2 | **closed** (user, 2026-10-12) |
| D3 | Submod name and prefix | Army package named **"ATCU - Army Template and Conform Universal"** (user, 2026-10-19; formerly Army Templates and Conform); Politics name still provisional ("TGCX Politics"); internal prefix/folder `tgcx_` kept | partly closed [user] |
| **D4** | "Leaders" | **both: rulers and generals/admirals, starting with those who existed in 1836** | **closed** (user, 2026-10-12); `docs/technical-plan.md` §5 |
| **D5** | Multiplayer | **later**: single player first. R5 still holds (it is cheap and avoids rework), but MP is not tested until the user asks | **closed** (user, 2026-10-12) |
| **D6** | DLL base | **our own DLL, allowed to use V2DLL code** (personal use; R8 says how to mark it) | **closed** (user, 2026-10-12) |
| **D7** | What "negotiating" a law means | **political favours and ideological affinity**: each bloc has a stance on each law according to its closeness to it; deterministic projected vote (LAW-1: TGC conditional support supplies starting votes; affinity controls bargaining and promises, approved 2026-10-12); abstentions and votes are bought with favours, laws are promised (debts with a deadline), the Crown signs or vetoes. Replaces BPM's staged negotiation (archived) | **closed** (user, 2026-10-12, revised the same day); `docs/law-design.md` |
| D8 | Event range | 420 000 000 – 420 999 999 | closed (agent, 2026-10-12): empty in TGC v2.3.4 and v2.5.2 (`tgc_scan.py`) |
| **D9** | Interface route | **hybrid, case by case**: each element chooses A (draw on top) or B (real game element) using the criteria in `docs/technical-plan.md` §9.1, and the card records the choice | **closed** (user, 2026-10-12) |
| **D11** | Law details (favours) | **virtual purchases only, lasting the bill** (not TGC's real seat shifts); favours **accrue automatically like diplomatic points** (the DLL sends the monthly tick; a decision is the no-DLL fallback); the rate comes **from prestige plus stability, militancy, consciousness, voting pop and monarch/leader support** (initial values in `docs/law-design.md` §5) | **closed** (user, 2026-10-12) |
| **D12** | Army templates | **local file** written by the DLL (an interface preference, not in the save; recruiting still uses the engine command, R5); **names from the composition**; **native windows** (route B); short of soldier pops, **recruit what fits** and report the rest; a **"Conform to template"** button on stacks in the field (template picked per click; missing regiments built, then marched and merged by engine commands; extras detached into a new stack) | **closed** (user, 2026-10-17); `docs/report-tpl-0-research-1017.md` §4 |
| **D13** | Conform across save/reload | **A: session tracking, re-Conform after a reload**. Within a session the DLL marches and merges each finished regiment automatically. After a reload, pressing Conform on the stack again finds the finished, unattached regiments of the missing types nearby and offers to bring them. Nothing is persisted (B, a local file, and C, no automatic march, were rejected). Marches use **safe paths**, like the native rally point (user, same day). **Revised (user, 2026-10-17, after U-10 on 0.6.1): Conform always builds the missing regiments; it never takes finished regiments from nearby stacks.** After a reload, regiments still being built for an earlier Conform are no longer tracked: they finish as their own stacks, and a new Conform builds again | **closed** (user, 2026-10-17, revised the same day); `docs/report-tpl-1-research-1017.md` §4, `docs/report-tpl-1-window-1017.md` §7 |
| **D15** | Templates + Conform as their own package | **Templates and Conform are the most important part of the mod and become their own package that works almost anywhere** (vanilla, other mods, alongside TGC); D1 stays for the laws. Order: LAW-3 first, then MOD-0 to MOD-5 (`docs/report-modular-scope-1018.md` §6.2). **Sub-decisions (user, 2026-10-18):** Army works on any base, as generic as possible (vanilla, TGC, HPM, HFM, others), Politics stays TGC v2.5.2; packages **Army** ("Army Templates and Conform", no `user_dir`) and **Politics** (keeps `user_dir` TGCX), later **Economy** and **Cosmetic**; one folder per base; our own HPM descriptor (P4); `tgcx.dll` in the package folders; `mod\TGCX` replaced. `docs/instructions-mod-2.md` §2 | **closed** (user, 2026-10-18) |
| **D14** | Reforms tab offer | **A + B**: a row is offered only if its bill's decision passes its own `allow` (flag written by the favour collection), and backward steps only where the native game allows a backward reform. Mockup board 1 changes with it (R10) | **closed** (user, 2026-10-18); `docs/report-u-7-1018.md` F4, `docs/instructions-law-3.md` |
| **D16** | V2DLL coexistence | **(a) own `lua51.dll` proxy now; (b) after MOD-1, one logic DLL (`tgcx.dll`) behind two thin loaders**: our own `lua51.dll` proxy, and V2DLL (its `v2dll_mod.dll` slot, or loading by a V2DLL setting as maxioten suggested). Per-mechanic signature gates first. (c), plugin only, rejected. Open: V2DLL's slot reads only the **first** `-mod=`, which is TGC's (MOD-0 run 1), so loading by setting, or V2DLL searching every `-mod=`, is asked of V2DLL | **closed** (user, 2026-10-18; shape agreed the same day); `docs/report-v2dll-mod-slot-1018.md` §7 |
| **D17** | Overseas Conform recruitment | Recruit only from provinces that can reach the selected army by land; report shortages. Existing overseas troops remain for manual transport. | **closed** (user, 2026-10-19); docs/report-conform-land-reach-1019.md |
| **D10** | Language | **English for everything**: code, comments, docs, file names, commit messages, in-game text and chat. Nothing is written in Spanish. All existing files were translated on 2026-10-12 | **closed** (user, 2026-10-12) |

---


## 10. Roadmap

Status and stages: `ROADMAP.md` §1. What comes next: `NEXT.md`.

---

## 11. Verification (definition of "done")

No card is marked done without **all four** that apply to it:

1. **Automatic gates green.** `python tools/check_exe.py` (if it touches the
   DLL or addresses) and `python tools/tgc_scan.py` on TGC v2.5.2 (D1).
2. **Evidence in game.** A screenshot or the user's description of the
   mechanic working with TGC v2.5.2 (D1; v2.3.4 is no longer tested). The
   game starts with no new errors in its logs. Until the user runs it, the
   card stays **"done, not tested in game"** and is described that way.
3. **Multiplayer** (if D5 = b and the card changes the simulation): two
   instances, a 30-day game without "Games out of synch".
4. **Matches the mockup** (if the card has interface, R10): the in-game
   screenshot set side by side with the mockup board, and every difference
   either fixed or listed in the report with its reason. If the card changed
   the mechanic, the mockup was updated to match.

### Diagnostic rule

If a script effect "does nothing", check the **name** first: in Vic2 an
identifier that does not exist gives no error, it is ignored. Check against
the `tgc_scan.py` inventory before suspecting the logic.

---

## 12. Forbidden anti-patterns

- **Decompiling the whole executable "just in case".** Study the subsystem
  that is needed, with its card.
- **Copying TGC's `country_politics.gui` and editing it by hand.** It is
  generated (R3).
- **Patching `v2game.exe` on disk.** Everything in memory from the DLL (R1).
- **Using a fixed VA in the DLL.** RVA + base (R7).
- **Changing the game from the DLL by writing fields by hand** (money,
  laws, units). Engine commands or script (R5).
- **Using V2DLL code without marking it** (R8): it may be used, but every
  piece says where it came from.

---

## 13. Legal note

2026-10-19 user clarification: V2DLL-derived code use is no problem; the
author supports open source and has already been told this project uses
his code. Keep source attribution. This is user-provided provenance, not
a newly verified upstream license identifier. The user explicitly
authorized the current source checkpoint commit/push; own release license
and release assets are separate choices.

The user has the game installed; studying it to make a personal mod is not
a problem. Neither the executable nor parts of it, nor the Ghidra project,
are redistributed. TGC, the RE repo and V2DLL have no published licence.
The project is for **personal use** (D6): V2DLL code may be used, marked
(R8); nothing from TGC or the executable enters git.
