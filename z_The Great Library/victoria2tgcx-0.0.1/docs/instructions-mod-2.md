# MOD-2 - Installer with base profiles and packages (D15)

2026-10-18. The third card of D15 (`report-modular-scope-1018.md` §6.2).
It follows MOD-0 (`report-mod-0-1018.md`) and MOD-1 (0.7.0, installed).
The D15 sub-decisions were answered by the user on 2026-10-18 (§2).
Target: **0.8.0**.

Read first:

- `report-modular-scope-1018.md` §2-§6;
- `report-mod-0-1018.md` §2-§5;
- `report-v2d-1-1018.md` §4;
- `pitfalls.md` P4, P9, P19, P20, P48, P49;
- `tools/install_submod.py`, `tools/install_dll.py`.

## 1. Goal

One installer that:

- takes **any base** (vanilla 3.04 or any installed mod, read from its own
  `.mod`) and a set of **packages**;
- generates each package **from that base's effective files** (vanilla plus
  the base, respecting its `replace_path`);
- stages everything, checks it, and only then touches `mod\`, stopping at
  the first failing package;
- installs each package as its own folder and `.mod`.

The DLL acts only for the packages actually in the `-mod=` list. MOD-2
builds and tests the installer and generates every base in scratch folders.
**It installs only the TGC v2.5.2 combination.** Vanilla in game is MOD-3,
HPM (and other bases) is MOD-4.

Constraints that stay:

- R1: nothing outside our own folders.
- R3: every override is generated from the installed base, never copied.
- R4: `tgcx_` everywhere.
- R6: each package works without the DLL, or does nothing harmful.
- R10: no mechanic changes, so the mockups do not change.

**Acceptance:** on TGC v2.5.2, the installed packages give the same game as
0.7.0 does today. Generated files are byte-identical to today's, apart from
the planned descriptor and folder changes.

## 2. Decisions (user, 2026-10-18)

| # | Decision | Answer |
|---|---|---|
| S1 | **Bases (revises D1 for Army)** | Army works on **any base, as generic as possible**: vanilla, TGC v2.5.2, HPM, HFM and whatever else is installed. Nothing is hard-coded per base; a base is whatever `.mod` the user names (§3 step 1). HFM is **not installed** on E: (2026-10-18; `TGCHFMMap` is only a TGC map style), so it is tested when it is. Politics stays TGC v2.5.2 only (D1, D7) |
| S2 | **Packages** | **Army** (Templates + Conform) and **Politics** (Bill, Reforms tab, favours, hemicycle). Later: **Economy** (the charts) and **Cosmetic** (rulers and portraits), with their own cards after MOD-5 |
| S3 | **Names (D3, in part)** | The Army package's display name is **"Army Templates and Conform"**: it is not for TGC only, so it does not say TGCX. Politics' display name is still open (provisional "TGCX Politics"). The internal `tgcx_` prefix is kept everywhere (R4); it is invisible in game, and renaming every identifier would gain nothing |
| S4 | **Save folder (`user_dir`)** | Army: **none**, so adding it never moves the saves. Politics keeps `user_dir = "TGCX"` (today's `TGC252_TGCX` saves stay visible). Consequence: the templates file lives in whichever settings folder the combination uses (`TGC252\` for TGC + Army, `TGC252_TGCX\` with Politics too). Step 5 makes the DLL find an existing one |
| S5 | **Folders** | **One folder per base**: `tgcx_army_<base>`, `tgcx_politics_tgc252`. Each `.mod` has its own `name` with the base in it, e.g. "Army Templates and Conform (TGC v2.5.2)" |
| S6 | **HPM descriptor** | Allowed: a `.mod` of ours that points to `mod/HPM` (P4), written by the installer and removed by `--remove`. `HPM4.5.mod` is never edited (R1) |
| S7 | **DLL location** | `tgcx.dll` in each package folder, found through the `-mod=` list. Only the loader stays in the game folder |
| S8 | **Today's install** | Replaced: `mod\TGCX` + `TGCX.mod` are backed up and removed in the same atomic step |

## 3. Steps

1. **Generic base profiles (S1).**
   - New `tools/tgcx_bases.py`. A base is **any `.mod` file** in `mod\`,
     or `vanilla`. The module reads its `name`, `path` and `replace_path`
     lines and builds the effective tree for `common\`, `interface\`,
     `gfx\`, `units\`, `events\` and `localisation\` (vanilla plus the
     base, following `replace_path`; the `report-modular-scope-1018.md` §1
     harness, now kept with tests). Nothing in the generators names a
     specific base.
   - The `<base>` key in folder names is a slug of the base's `.mod` file
     name (`tgc_v2.5.2` → `tgc252` is the one special case, to keep it
     short; others are lower-case with spaces as `_`). The descriptor's
     `dependencies` names the base's exact `name`.
   - A base whose `.mod` `path` does not exist (HPM, P4) is refused unless
     `--fix-path <folder>` is given; then the S6 descriptor is written.
   - Bases measured in step 6: vanilla, TGC v2.5.2, HPM, TGC v2.3.4, DoDFF,
     and one converted mod (`romanum`). HFM when installed.
   - A **sprite check** for every generated `.gui`: each `spriteType`,
     `quadTextureSprite` and `buttonMesh` must be defined in the base's
     effective `.gfx` or in ours, and each font in the effective
     `core.gfx`. A failure stops generation. It catches the
     run 3 class of crash at install time (14 TGC-only `GFX_politics_*`
     sprites, `report-mod-0-1018.md` §4).
2. **Generators take a profile.**
   - `install_submod.generate`, the three `inject()` stages and
     `gen_laws.py` read from the profile, not from a TGC path.
   - `gen_laws.py` gains the name check from `report-modular-scope-1018.md`
     §3. It rejects governments, ideologies and issue groups the base does
     not have. Today it silently writes TGC names on vanilla.
   - Politics on a base other than TGC v2.5.2 is refused, with a message
     (laws are TGC-only, D7).
   - Army on a base whose `buildunit.gui` or `unitpanel.gui` lacks one of
     the anchors `inject()` needs is refused for that base, with the
     missing anchor named. That is the honest limit of "any base".
3. **Packages (after S2-S5).**
   - The `submod\` source splits into one folder per package. Army gets
     `buildunit.gui`, `unitpanel.gui`, the `tgcx_tpl_*`/`tgcx_cf_*` art and
     localisation. Politics gets `country_politics.gui`, the bill art,
     decisions, events, localisation and `event_modifiers.txt`.
   - Each package has a marker file `tgcx_package.txt`. It lists the
     package, its base profile, its modules (`templates conform` or
     `bill reforms hemicycle`) and the installer version.
   - Descriptors: `name` with the base in it (S3, S5:
     "Army Templates and Conform (<base name>)", "TGCX Politics (TGC
     v2.5.2)"), `path`, the S4 `user_dir` (Politics only), and
     `dependencies` naming the base's exact `name`.
4. **Installer.**
   - `install_submod.py <mod folder> --base tgc252 --packages army,politics`
     stages every package and runs every check (prefix and ownership,
     sprites, laws names). Only then does it touch `mod\`: each package is
     replaced with a retained backup, and all are rolled back if one copy
     fails.
   - `--remove` removes our packages, our descriptors and the S6 HPM
     descriptor. It refuses anything that is not ours.
   - Migration (S8): the old `mod\TGCX` + `TGCX.mod` are backed up and
     removed in the same atomic step.
   - V2DLL's `common\defines_v2dll.txt` in a package folder (P48) is not
     foreign. It is kept across reinstalls and never counted as ours.
5. **DLL: package lookup (after S7).**
   - The loader reads `GetCommandLineA()`, walks every `-mod=` (last
     first), reads each `.mod` file's `path` line (the first line that
     starts with `path`, avoiding the `replace_path` trap), and loads the
     first `<path>\tgcx.dll` it finds. It passes the list of package
     folders to `tgcx_Init`.
   - `tgcx.dll` reads each `tgcx_package.txt` and switches modules on only
     for the packages present. The log says, for example, `Packages: army
     (templates conform); politics absent: drawing+laws off`.
   - `V2Mod_Init` does the same from its `modFolder` plus the command line.
   - `install_dll.py` keeps only the loader in the game folder.
     `install_submod.py` copies `tgcx.dll` into each package that has DLL
     modules.
   - The templates file follows the settings folder (S4). If the active
     folder has none, the DLL reads the newest `tgcx_templates.txt` among
     the game's settings folders and writes it to the active one, logging
     where it came from. Nothing is deleted.
   - Version 0.8.0 (markers `TGCX MOD-2 0.8.0`, loader `TGCX loader MOD-2
     0.8.0`).
6. **Tests.**
   - `test_tgcx_bases.py`: effective trees, `replace_path`, the sprite check
     (TGC's `country_politics.gui` on vanilla must fail on the 14 sprites),
     and the profile `name`s.
   - `test_install_submod.py`: Army on every measured base and Politics on
     `tgc252`, in scratch destinations; a fake `.mod` base with no anchors
     refused; atomic failure; migration
     from `mod\TGCX`; P48 kept; `--remove`.
   - **TGC v2.5.2 regression:** the generated `.gui`, `event_modifiers.txt`
     and laws files are byte-identical to what 0.7.0 installed.
   - Native: the loader's `-mod=` parser (quotes, spaces, several mods,
     last first, `replace_path` before `path`, a missing `.mod`) and the
     module switches from `tgcx_package.txt`.
   - All existing gates: `build_dll.ps1`, `test_dll.ps1`, `check_exe.py`,
     `tgc_scan.py`, `test_gen_laws.py`, the GUI tests.
7. **Stage and install (TGC v2.5.2 only).**
   - Stage under `E:\v2re\logs\tgcx-mod2-MMDD\`.
   - After a normal exit, with backups `before-080-dll` and
     `before-080-submod` (all of `mod\TGCX`, `TGCX.mod` and the DLL
     record), install `--base tgc252 --packages army,politics` and the 0.8.0
     DLL.
   - Report `docs/report-mod-2-MMDD.md`, "done, not tested in game".

## 4. Game check (user, after install)

1. **TGC v2.5.2 + Army + Politics, in the launcher.** Everything works as
   on 0.7.0. The saves are in `TGC252_TGCX`, and the templates are there. `tgcx.log` shows the loader finding `tgcx.dll`
   in a package folder, and both packages.
2. **TGC v2.5.2 + Army only.** Templates and Conform work, and the
   templates were carried to `TGC252\` (log line). The Politics
   window is native: no Bill, the native pie. The log says Politics is
   absent.
3. **TGC v2.5.2 alone.** No `tgcx.log` line from `tgcx.dll`. The loader logs
   that no package is ticked.

Vanilla and HPM in game are MOD-3 and MOD-4.

## 5. Open points carried

- P19 recheck (`report-mod-0-1018.md` §3): what `replace_path` hides when a
  mod is listed before the base. With S5, dependencies always put the base
  first, so it matters only for packages whose dependency is not ticked.
- The cause of run 3's crash is inferred. Step 1's sprite check targets it;
  MOD-3 confirms it in game.
- The DoDFF and other land-unit sets: MOD-5 (run-time unit catalogue).
