# MOD-2 report: base profiles, Army and Politics packages, package DLL lookup

2026-10-18. Card MOD-2 (D15), from `instructions-mod-2.md` with the user's
S1-S8 answers. **Built and staged, all automatic gates green, not installed**
(installing waits on a normal game exit). Version **0.8.0**. Nothing in the
mechanics changed, so the mockups do not change (R10).

## 1. What was built

| Step | Files | What |
|---|---|---|
| 1 | `tools/tgcx_bases.py` | A base is vanilla or **any** `.mod` (S1): `name`, `path`, `user_dir` and `replace_path` are read from it; `find()` returns the file the game loads; `sprites()`, `fonts()`, `missing_sprites()`, `missing_fonts()`; folder key `slug()` (`TGC_v2.5.2` → `tgc252`); `fix_path` for a `.mod` that points wrong (P4) |
| 2 | `install_submod.generate(…, only, profile)`, `gen_laws.check_names()`, `tgcx_bill_gui.game_root()` | The generated files come from the base profile. `gen_laws` refuses a base without the laws' issue groups, governments or ideologies (vanilla: 7 governments and `anarchist` are missing). `game_root()` accepts the game folder itself, so the art generators run on vanilla |
| 3-4 | `tools/tgcx_packages.py`; `install_submod.py --base/--packages/--dll/--fix-path/--remove-packages/--restore` | Splits a staged TGCX into **Army** (`tgcx_tpl_*`, `tgcx_cf_*`, Templates/Conform `.gfx`, `.csv` and layouts, generated `buildunit.gui` and `unitpanel.gui`) and **Politics** (everything else, generated `country_politics.gui` and `event_modifiers.txt`). Folders `tgcx_<package>_<base>` (S5) with `tgcx_package.txt` and a copy of `tgcx.dll` (S7). Descriptors: "Army Templates and Conform (<base>)" with no `user_dir` (S3, S4), "TGCX Politics (TGC v2.5.2 (stable))" with `user_dir = "TGCX"`; `dependencies` name the base. Politics off TGC v2.5.2 is refused. HPM gets our `tgcx_base_hpm4.5.mod` ("… (path fixed)", S6). Sprite and font check of every generated `.gui` (P49) before anything moves. The old `mod\TGCX` + `TGCX.mod` are backed up and removed in the same step (S8). V2DLL's `common\defines_v2dll.txt` is kept (P48). A failed copy restores the backup; `--restore <backup>` puts back exactly what an install replaced |
| 5 | `dll/tgcx/tgcx_packages.h`, `loader/tgcx_loader.cpp`, `tgcx_dllmain.cpp`, `tgcx_templates_store.h`, `tools/install_dll.py` | The loader reads `GetCommandLineA()`, every `-mod=` (a value runs to its `.mod`, so spaces and quotes work), each `.mod`'s `path` (the line must start with `path`, never `replace_path`), and loads `<path>\tgcx.dll` from the **last** ticked package that has one. `tgcx.dll` logs every mod, then `Packages: army=… politics=… settings=…`; it installs nothing when no package is ticked, the drawing+laws modules only with Politics, Templates and Conform only with Army. The templates file follows the settings folder (the ticked `user_dir`s joined with `_`); a combination without one copies the newest from another settings folder and logs `Templates carried over from …`. `install_dll.py` knows the MOD-2 loader: nothing goes beside it, and a `tgcx.dll` of ours in the game folder is set aside as `tgcx.dll.off` |

## 2. Measured (2026-10-18)

- **Byte identity on TGC v2.5.2.** Both packages were built from the 0.6.4
  stage and compared with the installed `mod\TGCX`. Every file is
  byte-identical, none is in both packages, and none is left out
  (`LiveTgc252Test`).
- **Every installed base** (`tgcx_packages.build`, read-only):
  - Army builds on vanilla, TGC v2.5.2, TGC v2.3.4, HPM (with
    `--fix-path mod/HPM`), DoDFF and `romanum`.
  - Politics is refused on vanilla.
  - The Politics GUI misses sprites everywhere except the two TGCs:
    14 on vanilla, 3 on HPM, 5 on DoDFF, 3 on `romanum`.
- **HFM** is not installed (`TGCHFMMap` is only a TGC map style).

## 3. Gates

- **`test_dll.ps1`**: `gen_signatures` ALL OK (153); `tgcx_tests` ALL OK,
  including the new `tgcx_PackageTests`; `test_install_dll.py` 12/12 OK.
  The loader probe loads `tgcx.dll` from a fixture package through
  `-mod=`, and logs `no ticked TGCX package … tgcx.dll not loaded` without
  one.
- **Python tests:**
  - `test_tgcx_packages.py` 10/10, including the live test;
  - `test_tgcx_bases.py` 6/6;
  - `test_install_submod.py` 11/11 (legacy single-TGCX install kept for
    rollback);
  - `test_gen_laws.py`, `test_bill_gui.py`, `test_templates_gui.py`,
    `test_conform_gui.py`, `test_law_catalog.py` OK.
- **`check_exe.py`** ALL OK. **`tgc_scan.py`** on TGC v2.5.2: anchors and
  range OK.
- **Dry runs on E:** `install_submod.py … --base tgc252 --dry-run` and
  `install_dll.py … --dry-run` both pass; no live file changed.

## 4. Stage

`E:\v2re\logs\tgcx-mod2-1018\stage-080\`:

- `lua51.dll` `3aab0c21…`;
- `tgcx.dll` `fe14b9ba…`;
- `source\`: the 0.6.4 script/GUI stage, unchanged.

Install, after a normal exit:

```
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --base tgc252 --packages army,politics --source E:\v2re\logs\tgcx-mod2-1018\stage-080\source --dll E:\v2re\logs\tgcx-mod2-1018\stage-080\tgcx.dll --backup E:\v2re\logs\tgcx-mod2-1018\before-080-submod
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --source E:\v2re\logs\tgcx-mod2-1018\stage-080\lua51.dll
```

Rollback:

1. Run `install_submod.py <mod> --restore …\before-080-submod`.
2. Reinstall `stage-070\lua51.dll` with `install_dll.py`. Its `tgcx.dll`
   is copied beside it again.

**Installed on E: 2026-10-18** after a normal exit.

- **Backups:** `before-080-dll` holds the 0.7.0 `lua51.dll`, `lua51_real.dll`, `tgcx.dll` and record; `before-080-submod` holds `TGCX` and `TGCX.mod`.
- **Game folder:** the old `tgcx.dll` was set aside as `tgcx.dll.off.1`.
- **Hashes:** `lua51.dll` and both package `tgcx.dll` files match the stage; the record says card `MOD-2`.

## 5. Game check (user, after install; `instructions-mod-2.md` §4)

In the launcher, **untick nothing old**: TGCX is gone. Tick "TGC v2.5.2
(stable)" and the two packages.

1. **TGC + Army + Politics.**
   - Everything works as on 0.7.0.
   - Saves are in `TGC252_TGCX`.
   - `tgcx.log` shows the three `Mod …` lines and
     `Packages: army=1 politics=1 settings=TGC252_TGCX`.
2. **TGC + Army only.**
   - Templates and Conform work.
   - Politics is native: original pie, no Bill.
   - The log says `Politics not ticked` and `Templates carried over from
     …TGC252_TGCX…`.
3. **TGC alone.** `tgcx.log` holds only the loader's line: no ticked
   package, `tgcx.dll not loaded`.

**Result (user, 2026-10-18):**

- **Run 1** (TGC + both packages): works, except that "buttons don't stay
  ticked for the politics bit": in game, in the Bill window. Bill code unchanged since 0.4.4, so likely older than 0.8.0 (LAW-4).
- **Run 2** (TGC + Army only): works. The templates were carried over to
  `TGC252\tgcx_templates.txt`.
- **Run 3** (TGC alone): plain TGC. `tgcx.log` holds only the loader's line:
  no ticked package, `tgcx.dll` not loaded.

## 6. Limits and open points

- **Army on another base is generated, not tested in game** (MOD-3
  vanilla, MOD-4 HPM). The Army art is composed from the base given to the
  GUI generators' `--tgc`.
- `tgcx.dll`'s unit catalogue (`tgcx_templates_catalog.h`) is still TGC
  v2.5.2's eleven land units, compiled in. A base with other units needs
  MOD-5's run-time catalogue.
- The settings-folder rule (user_dirs joined in command-line order) fits
  every MOD-0 observation, but no run so far had two mods with a
  `user_dir` in an unusual order.
- Run 2's command line was `-mod=mod/tgcx_army_tgc252.mod -mod=mod/TGC_v2.5.2.mod`: the launcher sorts by display name (P50), and Army worked while listed first.
- P19 recheck and the run 3 cause: still open (`report-mod-0-1018.md`).
