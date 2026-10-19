# U-5 — One combined renderer and hemicycle test

2026-10-12. Build **0.2.3 is already installed by the agent on E:**.
No installation command is needed. DLL-1 and HEMI-1 remain **done, not
tested in game** until this batch passes. The first 0.2.0 attempt showed no chart; see
`report-dll-12-tooltip-fix-1012.md`. Allow about two minutes.

## User: one game session

1. Start the usual launcher from
   `E:\Victoria.II.v3.04.Inclu.ALL.DLC`, select **TGC v2.5.2 (stable)**
   and **TGCX**, then load your UK save or start the UK in 1836.
2. Stay paused and open **Politics**. The upper-house pie should be
   replaced by **100 coloured dots in seven semicircle rows**. For the
   same 1836 state, expect 83 Conservative, 5 Reactionary, 12 Liberal
   seats. The native percentage list stays alongside it.
3. Hover coloured dots for **20 seconds** to check the tooltip crash
   repair. Native tooltip suppression is removed; the native and drawn
   tooltip may coexist. Hover coloured dots: the small tooltip should name their ideology,
   its seat count and percentage. Take one screenshot of Politics with
   a tooltip. Leave Politics open and paused for **20 seconds** so the
   log captures repeated samples without the date changing.
4. If the pie remains, **keep the game open** and report it now. The
   agent reads `Logs/tgcx.log` and can inspect live read-only data; skip
   the later steps until the chart is working. Do not restart first.
5. If the chart appears, switch to Budget, then Production, then return to Politics. The chart
   should disappear outside Politics and return when reopened. Close
   Politics once with its X and reopen it.
6. Advance a few days, pause, save and reload. Open Politics again and
   wait **15 seconds**. Check that the chart and tooltips still work.
7. Alt-Tab away and back once. Check that the game and chart still draw.
   Fullscreen may reset the device; windowed Alt-Tab may not, which is
   acceptable. No resolution change is required.
8. Exit normally. Send the screenshot and say whether any step failed,
   including misplaced dots, a chart on another screen, a wrong hover
   label, unusual colours or a crash. The agent reads the logs locally;
   do not restart before it preserves them.

The chart panel currently uses a plain matching colour and Windows
Georgia for its tooltip, rather than copied TGC art/fonts. Those are
documented prototype differences. If a popup covers the chart, note
whether dots appear over it: route A layering is not game-tested yet.

## Agent: inspect the same run

1. Preserve `E:\Victoria.II.v3.04.Inclu.ALL.DLC\Logs\tgcx.log` as
   `E:\v2re\logs\tgcx-u5-1012.log` (choose a unique suffix if it exists).
2. Check version 0.2.3, executable SHA and all nineteen startup signatures,
   Direct3D IAT and final engine Present installation, device callbacks
   and first hemicycle draw. If absent, inspect the named `Hemicycle blocked`
   stages and active renderer while the game remains open.
3. Verify repeated `upper_house` and `render final_frames=... draws=...` lines
   at the same paused date, and samples after the save/load transition.
   Verify show/hide/destruction lines and no guarded faults or new errors.
4. The live vector should have ten entries, with zero at index 0 and nine
   unique named indices within bounds. Resolve colours/names from actual
   runtime results; the test fixture's complete map is not game evidence.
   Compare actual shares, rounded percentage list and apportioned seats.
5. Check game `error.log` and `system_error.log` in the active TGCX user
   directory. Compare the screenshot beside `mockups/1-politics.png`.
6. Write `report-u-5-1012.md` as a new report. Mark both cards tested only
   when applicable checks pass; consolidate concrete fixes if they fail.
   Archive NEXT and update ROADMAP/SUBAGENTS/instructions on close.

## Restore the original if needed (game closed)

```powershell
cd C:\Users\JC\Downloads\victoria2template
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --remove
```

This restores `lua51_real.dll` as `lua51.dll` and preserves the removed
proxy as a unique `.off` backup. The script submod still loads without it.
To reinstall the current build, use the same command without `--remove`.
