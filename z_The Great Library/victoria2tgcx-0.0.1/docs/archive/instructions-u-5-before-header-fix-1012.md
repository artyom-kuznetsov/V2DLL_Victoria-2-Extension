# U-5 - Combined HEMI-3 hover and remaining integration acceptance

2026-10-12. **0.2.6 is installed on E: and all automatic gates pass;
not tested in game.** 0.2.5 remains the retained, accepted baseline.
Read `report-hemi-3-1012.md`. No rebuild/reinstall is needed now.

## User: one combined run

1. Start the usual E: launcher yourself: TGC v2.5.2 (stable) + TGCX,
   UK 1836/same save. Open Politics and capture chart and native legend.
2. Hover actual seat dots in all present blocs: Liberal/yellow on the
   left, Conservative/blue in the middle, Reactionary/dark on the right.
   Include end seats beyond the old circle. Confirm one native tooltip
   with the matching ideology/percentage. Move into gaps, the central
   hole and outside the chart: no chart tooltip should appear there.
3. Hover the native ideology legend and the lower ideology pies. Open
   a menu/popup over Politics. Confirm normal native text and occlusion,
   no duplicate popup or tooltip showing through the covering window.
4. Switch Budget/Production/Politics, close Politics with X and reopen.
   The chart appears only in visible Politics and hover returns on reopening.
5. Advance a few days, pause, save/reload, reopen Politics and wait 15 seconds.
   Confirm chart/data/hover work after loading at the new date.
6. Alt-Tab away/back once and check no artifacts/crash. Report which steps
   passed or failed. Keep the run open if a problem needs read-only inspection;
   preserve its log/dump before any restart. A screenshot with a chart tooltip
   visible helps compare Main with actual behavior.

## Agent: preserve, inspect and close

1. Copy `E:\Victoria.II.v3.04.Inclu.ALL.DLC\Logs\tgcx.log` to a unique
   `E:\v2re\logs\tgcx-hemi3-026-...` name. Check 0.2.6, all 27 guards,
   scalar-hook installation, ordered drawing and per-ideology hover lines.
   Keep the accepted 0.2.5 log and screenshot intact.
2. Inspect active TGC252_TGCX error/system_error logs, lifecycle,
   paused/date-advanced samples and reload evidence. Report only observed
   coverage. Native bounds/slice ABI is code-confirmed; fixtures alone do
   not establish live tooltip dispatch or overlapping-window acceptance.
3. Compare the new screenshot alongside Main (`../mockups/1-politics.png`).
   Keep game/TGC art outside git. Record any remaining mismatch/deviation.
4. Diagnose actual failures with targeted reads; consolidate confirmed
   corrections and run all appropriate gates before replacement.
5. Write a new immutable report and archive/rewrite NEXT; update statuses
   and next-card instructions. Discuss LAW-1 only after hover acceptance.

## Recovery (game closed)

The accepted proxy is retained at
`E:\v2re\logs\tgcx-before-026-1012\lua51.dll`. Restore it through the installer:

```powershell
python -c "import sys; sys.path.insert(0, 'tools'); from pathlib import Path; from install_dll import operate; operate(Path('E:/Victoria.II.v3.04.Inclu.ALL.DLC'), source=Path('E:/v2re/logs/tgcx-before-026-1012/lua51.dll'))"
```

To restore the original Lua shim instead:

```powershell
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --remove
```

The installer checks the running-game gate and retains replaced proxies.
No recovery is needed unless the new run fails.
