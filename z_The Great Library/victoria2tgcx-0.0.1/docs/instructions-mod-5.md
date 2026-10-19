# MOD-5 - Extra unit types and Army regression

2026-10-19 preparation update: work/Victoria-II-DoDFF-Army090 is ready with
our loader and Army 0.9.0. First user test needs no installation. See
report-mod-4-5-prepared-1019.md. Retain the preparation steps below for future
repairs; do not repeat them over the ready copy without reason.

2026-10-19. Candidate implementation/fixtures: report-mod-5-1019.md.

1. Complete vanilla (MOD-3), then HPM (MOD-4), inspecting actual logs.
   User alone launches/exits; fresh exit confirmation and process gate before
   each installation. Keep Politics and culture filters deferred.
2. Prepare an isolated copy with the installed DoD Fan Fork base unchanged.
   Generate its package with tools/prepare_army_package.py, --loader tgcx
   for our loader or v2dll for upstream. Staged V2DLL ZIPs are in
   work/army-090-candidate. Preserve replaced files and verify hashes.
3. User selects DoD + Army only. Verify 13 catalogue types, Horse Artillery
   and Regular rows/icons, 24-frame strip. Recruit a custom-unit template
   where available; Conform must recruit missing types and detach extras.
   Check save/reload, native folder switching, Navy/fleet hiding and layout.
4. TGC v2.5.2 regression: back up accepted 0.8.2 package before replacement.
   Keep canonical mod/TGC in the fresh TGC copy (P52), profile and descriptor.
   Check old templates, Ctrl/Alt, recruitment, detach, save/reload. Candidate
   TGC art is byte-identical to 0.8.2. Do not mix own/V2DLL plugin filenames.
5. Check TGC v2.3.4 in a separate copy; do not replace stable mod/TGC.
   Both generated TGC catalogues have 11 land types.
6. HFM is absent: measure/test separately if supplied. Do not claim all mod
   or executable versions accepted. Unit/GUI add-ons require regeneration
   against their effective combined base; mismatches must refuse operations.
7. Write a new report with per-base outcomes, exact binary/loader and logs.
   Preserve incompatible template files; do not silently discard keys.
   Update NEXT/ROADMAP/SUBAGENTS. Retain the current screenshot layout.
