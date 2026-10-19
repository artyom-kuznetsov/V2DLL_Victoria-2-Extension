# MOD-3 - Army 0.9.0 on clean vanilla

2026-10-19 acceptance update: short vanilla recruit/Conform/detach/march/merge
check passed; report-mod-3-passed-1019.md. Retain only unconfirmed extended
checks below (save/reload and explicit Navy/fleet hiding). No repeat button repair.

2026-10-19. Current target: `work/Victoria-II-clean-vanilla-Army090/`.
See `report-mod-3-fresh-1019.md`. Latest: `report-mod-3-button-1019.md`;
Templates recruitment passed, Conform header-position repair installed.
First retry the small infantry button immediately left of attrition, then
missing/excess Conform and save/reload. Only two generated GUI files changed. The earlier TGC copy has V2DLL and is
retained separately; it is no longer the vanilla test target.

1. Verify the preparation manifest and reference executable. This new copy
   has vanilla, our MOD-2 loader and Army 0.9.0, without TGC/V2DLL. Original
   Lua remains lua51_real.dll. No installation needed for the first test.
2. User opens **victoria2.exe inside this new folder**, selects only
   **Army Templates and Conform (vanilla)**, then starts a country. Never
   launch or terminate the game yourself.
3. Inspect Logs/tgcx.log for MOD-5 0.9.0, **11 land types**, Templates and
   Conform enabled, Politics off. Preserve fresh evidence; earlier TGC or
   V2DLL acceptance does not substitute for this check.
4. Test editor pages/types/icons, Ctrl +/-5 and Alt +/-2, template
   recruitment, Conform for missing regiments, excess detachment into a
   new stack, native folder switching, Build Navy/fleet hiding. Preserve
   the current screenshot look (visual-references.md), not old board 6.
5. Save, exit normally and reload: library persists and actions still work.
   Vanilla uses Documents/Paradox Interactive/Victoria II preferences,
   not the game folder. No old settings copied, but that profile and
   compatible template carry-over may be used.
6. Write a new dated report from user outcomes and logs. If changes require
   installation, get a fresh normal-exit confirmation, check the process
   and retain replaced files. MOD-3 stays pending until runtime acceptance.
   Then instructions-mod-4.md (HPM), instructions-mod-5.md (DoD/TGC).
