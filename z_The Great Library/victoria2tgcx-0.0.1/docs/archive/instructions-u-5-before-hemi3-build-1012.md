# U-5 — Functional checkpoint passed; remaining integration coverage

2026-10-12. **0.2.4 works in game.** `report-u-5-1012.md` records user
acceptance, 2687 ordered draws, paused samples, show/hide and empty errors.
HEMI-2 0.2.5 now works in game; the user reports mismatched chart tooltips. The previous full checklist is archived in
`archive/instructions-u-5-before-u5-acceptance-1012.md`.

No immediate repeat run is needed. Combine remaining coverage with the
next HEMI-3 hover build; `report-hemi-2-handoff-1012.md` records this checkpoint.

## User: one combined run after the HEMI-3 hover build

1. Use the usual E: launcher, TGC v2.5.2 (stable) + TGCX, UK 1836/same save.
   Open Politics and capture the chart alongside the native legend. Hover
   dots from each bloc and confirm their tooltip ideology matches the colour.
2. Hover ideology list/seat area; open a menu/popup over Politics. Confirm
   one native tooltip and normal occlusion; record any remaining mismatch.
3. Switch Budget/Production/Politics, close Politics with X and reopen.
   The chart appears only in visible Politics and returns when reopened.
4. Advance a few days, pause, save/reload, reopen Politics and wait 15 seconds.
   Confirm chart/data/tooltip work after loading the new date.
5. Alt-Tab away/back once and check no artifacts/crash. Report the outcome;
   keep the run open if an issue needs read-only inspection. Do not restart
   before preserving its log or diagnosing an absent chart.

## Agent

1. Preserve the new log with a unique name under `E:\v2re\logs\`; inspect
   actual build/version, guards, ordered drawing, paused/date-advanced samples,
   show/hide and reload evidence. Keep previous accepted snapshots intact.
2. Check active TGC252_TGCX error/system_error logs and any actual failure.
   Use targeted read-only diagnostics; consolidate confirmed fixes.
3. Compare the fresh screenshot beside `../mockups/1-politics.png`. Document
   background/geometry/legend/hover deviations or their resolution.
4. Write a new dated report, distinguish functional acceptance from extended
   integration coverage and visual approval. Mark only observed checks passed.
   Update project/NEXT/instructions and archive on close.

## Restore original if necessary (game closed)

```powershell
cd C:\Users\JC\Downloads\victoria2template
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --remove
```

This preserves the proxy in an .off backup. No removal is needed now.
