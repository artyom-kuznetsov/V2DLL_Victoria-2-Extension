# U-5 — One combined acceptance run for 0.2.4

2026-10-12. **0.2.4 is installed on E:, not tested in game.** No
installation command needed. 0.2.3 displayed and stayed stable, but its
chart panel/extra tooltip covered native UI. This run checks the repair
and remaining integration together; about two minutes.

## User

1. Start your usual E: launcher, select **TGC v2.5.2 (stable)** + **TGCX**,
   then UK 1836 or the same save. Stay paused and open Politics.
2. Expect 100 coloured dots in seven semicircle rows in place of the
   upper-house pie. The same 1836 state gives 83 Conservative/5 Reactionary/
   12 Liberal seats; the native percentage list remains alongside it.
3. Hover the native ideology list and seat area for 20 seconds. Expect
   one native ideology tooltip, fully above the chart/panel. The extra
   seat-count box is removed; native pie hit regions remain unchanged.
   Take a screenshot of the tooltip overlapping the chart's left edge.
4. Open a menu/popup that overlaps Politics, for example the in-game
   Escape menu. Its panel/text should cover dots beneath it. Close it;
   the chart returns normally. If no chart or layering still fails,
   keep the game open and report it; do not restart first.
5. Switch to Budget, Production, then Politics. Close Politics with X
   and reopen. The hemicycle appears only in visible Politics.
6. Advance a few days, pause, save and reload, then open Politics again
   and wait 15 seconds. Check chart/tooltip remain functional.
7. Alt-Tab away/back once and check there are no visual artifacts/crash.
   Report the result and keep this one run open for log inspection.

## Agent

1. Preserve `E:\Victoria.II.v3.04.Inclu.ALL.DLC\Logs\tgcx.log` under
   `E:\v2re\logs\` with a unique U-5 suffix before another launch.
2. Check version 0.2.4, reference SHA/23 signatures, native ordered Draw
   and Present hooks, lifecycle/IAT guards and first ordered chart draw.
   Verify repeated `ordered_draws`/paused samples and hide/reopen/reload.
3. If absent, inspect live root icon/name parallel vectors and the exact
   `chart_upper_house_overlay` entity/vtables. Keep diagnostics read-only;
   consolidate confirmed fixes before another replacement.
4. Check error.log/system_error.log in the active TGC252_TGCX user_dir;
   compare screenshot beside `../mockups/1-politics.png`. Record plain
   background, native legend order and native pie hover-region differences.
5. Write a new U-5 report. Mark DLL-1/HEMI-1 tested only once the applicable
   game checks pass. Archive NEXT and update ROADMAP/SUBAGENTS/instructions.

## Restore original (only with game closed)

```powershell
cd C:\Users\JC\Downloads\victoria2template
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --remove
```

This preserves the proxy in a unique .off backup and restores the original
shim. The script submod still loads without the DLL.
