> 2026-10-19: **passed** after the map-path repair. User confirms success;
> logs verify 0.8.2 via V2DLL 5.82, 5/5 extras moved and five recruits queued.
> See report-v2d-082-passed-1019.md. Retained below for reproduction.

> 2026-10-19 update: V2DLL and Army are already installed in the fresh copy.
> Startup logs confirmed 0.8.2 via V2DLL 5.82. Map loading then failed on TGC's
> hardcoded mod/TGC path; this is now repaired with the canonical TGC folder.
> Retry step 5 onward; do not reinstall or launch scripts. See report-fresh-map-path-1019.md.

# V2DLL + Army 0.8.2: fresh-user test

2026-10-19. Only the user starts and exits Victoria II.

1. Use the separate clean game + TGC v2.5.2 folder prepared for this test:
   work/Victoria-II-clean-TGC252. It begins with original lua51.dll and no
   V2DLL or Army installed. The TGC descriptor uses its own fresh profile.
2. Extract `work/Army-Templates-Conform-0.8.2-with-V2DLL.zip` into the fresh
   game folder, beside v2game.exe. It includes V2DLL and Army; no separate
   download or installer is required for this pinned test.
3. The original Lua is supplied as lua51_real.dll; the replacement lua51.dll
   is V2DLL. Its settings already have LOAD_DLL_FROM_MOD_FOLDER=1. Do not add
   our MOD-2 lua51.dll loader. The normal E: installation remains unchanged.
4. Verify mod/tgcx_army_tgc252/v2dll_mod.dll and its .mod descriptor. If you
   installed anything yourself into the fresh copy already, back it up before
   allowing the ZIP to overwrite matching files/settings.
5. Use victoria2.exe in the fresh folder. Select TGC v2.5.2 and Army only.
   The normal launcher sorts Army before TGC, satisfying the first-mod-only
   V2DLL loader observed in the earlier tests. No launch scripts needed.
6. After starting, inspect fresh Logs/tgcx.log in that folder:
   - TGCX TPL-4 0.8.2, loaded_by=V2DLL plugin API v1;
   - OK sha256, Packages: army=1 politics=0;
   - Modules: drawing+laws=0 templates=1 conform=1.
   FOREIGN entries at V2DLL-owned sites are expected; module gates must pass.
   V2DLL's fresh log should show v2dll_mod.dll -> ok. Its Install header gives
   the upstream V2DLL version; 0.8.2 is the Army version.
7. New single-player game: create/recruit a template, test Ctrl/Alt counts,
   Conform with several extras, then Conform with extras plus missing units.
   Unpause: verify extras-arrived logs, recruitment and later march/merge.
8. Exit normally. Preserve both fresh logs and report the outcome. Do not
   claim V2DLL 0.8.2 passed until its loaded_by marker and this run are verified.

No installer/runtime/scripts are in the Army ZIP. The plugin is the accepted
0.8.2 tgcx.dll unchanged, renamed v2dll_mod.dll. Do not mix our Lua loader with
V2DLL's. No multiplayer claim. Other original U-12/LAW-4 checks stay open.
