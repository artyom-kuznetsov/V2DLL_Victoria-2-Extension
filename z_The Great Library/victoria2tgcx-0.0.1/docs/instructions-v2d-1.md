# V2D-1 - TGCX loaded by V2DLL in game (MOD-1 step B, D16)

2026-10-18. **Started by the user 2026-10-18; §4.1 done the same day** (backup and V2DLL
release copy in `E:\v2re\logs\tgcx-v2d1-1018\`; the 0.7.0 game-check log is
kept there as `before-v2d1\tgcx-070-gamecheck.log`). It is
a one-off compatibility run on E:, and every step can be undone. Read first:
`report-mod-1-1018.md` §4 and §7, and `report-v2dll-mod-slot-1018.md` §2-§3
and §7.

## 1. What it answers

Step A (`report-mod-1-1018.md` §7) showed that `tgcx.dll` behaves correctly
as a plugin outside the game. Step B checks, with the real V2DLL in the
game, that:

1. V2DLL's loader finds `v2dll_mod.dll` and calls `V2Mod_Init`, and V2DLL's
   log says `ok`.
2. Under V2DLL's patches, TGCX's per-module gates (MOD-1) behave as
   designed:
   - V2DLL's sites show as `FOREIGN` and block nothing;
   - `CPoliticsView` slot 10 is left to V2DLL;
   - `Direct3DCreate9` chains, and TGCX logs when the slot points into
     another module.
3. The hemicycle, hover, Templates and Conform work with V2DLL's own
   features active, and nothing crashes or desyncs in a short single-player
   game.

It does **not** answer how TGCX normally loads under V2DLL. V2DLL looks only
in the folder of the **first** `-mod=` (`ResolveModFolder`, still true at
upstream `de66ee61`). The launcher puts TGC first, and putting a file in
TGC's folder breaks R1. The test therefore starts the game by hand with
TGCX first. The lasting fix is still asked of V2DLL: load from a setting, or
search every `-mod=` (D16, open).

## 2. Known side effects (why it is a throwaway run)

- **TGCX first on the command line.** If the engine loads mods in argument
  order, TGC's `replace_path` hides TGCX's `decisions`, `events`,
  `localisation` and `common` (P19). Bills and favours may then do nothing,
  or show raw keys. Templates, Conform and the hemicycle depend mostly on the
  DLL and `interface\`, which TGC does not replace. The order effect itself
  is a MOD-0 question; whatever happens is recorded, not fixed.
- The settings folder (`user_dir`) may differ from the usual
  `TGC252_TGCX`. **Start a new game and do not save over real saves.**
- V2DLL changes gameplay with its default settings: bug fixes, a music
  player, OOS logging. Run it single player only.
- V2DLL's `lua51.dll` is a third-party prebuilt binary from its git
  repository (`V2DLL_LATEST_INSTALL`, upstream `de66ee61`, 2026-10-18).
  Running it is the user's call.

## 3. Files (measured 2026-10-18 with `sha256sum`)

| File | Source | SHA-256 |
|---|---|---|
| V2DLL `lua51.dll` | `git show origin/HEAD:V2DLL_LATEST_INSTALL/lua51.dll` | `0234d896…2a33` |
| V2DLL `lua51_real.dll` | same folder; **identical to the game's original** | `b2ba1934…a7b0` |
| V2DLL `eventmusic.dll` | same folder | `8f101bc1…9298` |
| V2DLL `v2dll_settings.ini`, `watch\music.txt` | same folder; `LOAD_DLL_FROM_MOD_FOLDER=1` is the default (line 56) | — |
| `mod\TGCX\v2dll_mod.dll` | copy of the installed `tgcx.dll` 0.7.0 | `ec9ed8b9…36d7` |

`dgVoodoo.conf` is not copied: the install ships no `d3d9.dll`, so the conf
would do nothing.

## 4. Steps

### 4.1 Prepare (agent, after the user's normal game exit)

1. Check that `v2game.exe` is not running. Copy the current state to
   `E:\v2re\logs\tgcx-v2d1-1018\before-v2d1\`: `lua51.dll`,
   `lua51_real.dll`, `tgcx.dll` and `tgcx_dll_install.json`.
2. Run `python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --remove`.
   It restores the original `lua51.dll` and sets the 0.7.0 loader and
   `tgcx.dll` aside as `.off` files.
3. Install V2DLL by copying the §3 files into the game folder:
   - V2DLL's `lua51.dll` replaces the restored original;
   - the original becomes `lua51_real.dll` (byte-identical to V2DLL's);
   - add `eventmusic.dll`, `v2dll_settings.ini` and `watch\music.txt`.
   - Check every hash.
4. Copy `tgcx.dll` 0.7.0 to `mod\TGCX\v2dll_mod.dll`. This is our own submod
   folder (R1).
5. Write the launch command into
   `E:\v2re\logs\tgcx-v2d1-1018\launch.ps1`, without running it:

   ```powershell
   Start-Process -FilePath 'E:\Victoria.II.v3.04.Inclu.ALL.DLC\v2game.exe' `
     -WorkingDirectory 'E:\Victoria.II.v3.04.Inclu.ALL.DLC' `
     -ArgumentList '-mod=mod/TGCX.mod','-mod=mod/TGC_v2.5.2.mod'
   ```

### 4.2 Run (user)

1. Start the game with `launch.ps1`, not the launcher. Only the user
   launches the game.
2. Start a new game (any country; England was used for 0.7.0) and play
   about a month. Use:
   - the hemicycle and its hover (Politics);
   - Templates (recruit one);
   - Conform on a stack;
   - one V2DLL feature you know.
   - Also try a bill. It may fail because of §2; note what happens.
3. Exit normally. Do not save over a real save.

### 4.3 Read the logs (agent, read only)

`Logs\v2dll.log`:

- the line `ModLoader: …\mod\TGCX\v2dll_mod.dll -> ok`.

`Logs\tgcx.log`:

- `TGCX MOD-1 0.7.0 tgcx.dll loaded_by=V2DLL plugin API v1`, exactly once;
- `OK sha256`;
- `FOREIGN` lines only at V2DLL's sites;
- `CPoliticsView slot 10 is not native (FOREIGN)` if V2DLL replaced the
  tooltip;
- `Module gate drawing+laws: signatures OK`, then
  `Modules: drawing+laws=1 templates=1 conform=1`;
- whether `Direct3DCreate9 already hooked by …` appears. V2DLL defers its
  `Direct3DCreate9` IAT hook to a later `GetTickCount` hook
  (`report-v2dll-mod-slot-1018.md` §2.2), so TGCX probably hooks first and
  V2DLL then chains through TGCX. The opposite order is also fine.
- `D3D9 device callbacks installed`.

Any `BAD` outside V2DLL's site list means a site both DLLs patch that
`report-v2dll-mod-slot-1018.md` §3 missed. It becomes a pitfall (P48).

### 4.4 Restore (agent, after the user's normal exit)

1. Move V2DLL's files and `mod\TGCX\v2dll_mod.dll` to
   `E:\v2re\logs\tgcx-v2d1-1018\v2dll-run\`. Nothing is deleted.
2. Put the original `lua51.dll` back. Check its hash is `b2ba1934…`.
3. Run `python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --source E:\v2re\logs\tgcx-mod1-1018\stage-070\lua51.dll`.
4. Check the installed hashes against `before-v2d1`. The next normal launch
   through the launcher should log `loaded_by=TGCX loader MOD-1 0.7.0`.

## 5. Report

`docs/report-v2d-1-MMDD.md` holds:

- the evidence from both logs;
- what worked and what did not, separating V2DLL-caused, order-caused (§2)
  and TGCX problems;
- any new pitfall;
- what to ask V2DLL's author (the setting, or searching every `-mod=`).

## 6. Decision for the user

- **Run V2D-1 now**: about 15 minutes of play plus the agent's file steps.
  It confirms coexistence before anything is asked of V2DLL's author.
- **Wait** until V2DLL can load TGCX in a normal launch, then test once
  with the launcher. This needs no hand launch and has no §2 order caveat.
