# U-5 - Header seam check and remaining integration coverage

2026-10-12. **0.2.6 hover works in game, confirmed by the user. 0.2.8
header seam correction installed, all automatic gates pass; not tested in game.**
Read `report-hemi-3-seam-1012.md`. No immediate rebuild needed.

## User: next run

1. Start the usual E: launcher yourself, TGC v2.5.2 (stable) + TGCX,
   UK 1836/same save. Open Politics and check the entire Upper House
   title strip is intact and the cover meets its border with no seam. Check
   the native legend and reform row too. Capture the
   chart with the header. Confirm hover still matches each present bloc.
2. If convenient during this run, finish remaining unconfirmed coverage:
   hover gaps/hole (no chart tooltip), native legend and lower pies;
   open a menu/popup over Politics and check normal occlusion.
3. Switch Budget/Production/Politics; close with X and reopen. Chart and
   hover should appear only in visible Politics and return on reopening.
4. Advance days, pause, save/reload, reopen Politics and wait 15 seconds.
   Alt-Tab away/back once. Report which checks passed or failed; a general
   approval does not establish every step. Preserve evidence before restart.

## Agent: evidence and close

1. Copy `E:\Victoria.II.v3.04.Inclu.ALL.DLC\Logs\tgcx.log` under a unique
   0.2.8 name in `E:\v2re\logs` before another run. Check version, all
   27 guards, native scalar hooks, ordered draws and hover mappings.
2. Inspect active TGC252_TGCX error/system_error logs, lifecycle/date/reload
   evidence. Keep accepted 0.2.6 and older backups intact. Claim only
   observed coverage. Compare screenshot with Main, record deviations.
3. Diagnose actual failures with targeted reads. Re-run appropriate gates
   before replacement. Only the user starts the game; no game termination.
4. Write a new immutable report and archive/rewrite NEXT; update statuses
   and instructions. Discuss LAW-1 after header acceptance.

## Recovery (game closed)

Accepted 0.2.6 proxy: `E:\v2re\logs\tgcx-before-027-1012\lua51.dll`.
Restore through the installer, which checks the running-game gate:

```powershell
python -c "import sys; sys.path.insert(0, 'tools'); from pathlib import Path; from install_dll import operate; operate(Path('E:/Victoria.II.v3.04.Inclu.ALL.DLC'), source=Path('E:/v2re/logs/tgcx-before-027-1012/lua51.dll'))"
```

To restore the original Lua shim:

```powershell
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --remove
```

No recovery is needed unless the new run fails. Replaced proxies are retained.
