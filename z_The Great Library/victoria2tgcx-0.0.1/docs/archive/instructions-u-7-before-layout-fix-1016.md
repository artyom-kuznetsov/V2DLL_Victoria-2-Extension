# U-7 - Bill prototype check

2026-10-13. **LAW-2 0.3.0 installed on E:, not tested in game.** This is a
short visual check, not a repeat of the extended U-6 assignment.

1. Start TGC v2.5.2 plus TGCX normally and load the existing active bill.
   In Decisions, Count the votes once to refresh the saved bill's GUI
   metadata. Close its ordinary one-button report.
2. Open Politics. The Bill should open automatically; Open Bill reopens
   it after Close Bill. Check the law, totals and bloc rows. The retained
   UK save should show 10 Aye, 5 Abstain, 85 Nay and 1 favour, unless game
   inputs or purchases have changed. This is a live bill count, separate
   from the native upper-house hemicycle's exact percentage allocation.
3. Click the Bill's Count the votes once. Expect the usual one-button
   report, then the Bill again with refreshed data. Close/reopen Politics
   and Bill. Note clipped text, misplaced windows, stale values or a report
   drawn underneath. One screenshot is sufficient for the visual check.
4. Exit normally. The coordinator retains current game and DLL logs,
   compares the screenshot with the Bill board and records actual evidence.
   Purchases, promises, audience, withdrawal, vote and manual favours remain
   reachable through Decisions. They are not Bill buttons yet.

The coordinator runs `python tools/tgcx_check_laws.py` for the seven cheap
script/GUI gates and a private log snapshot. Native/GPU/installer gates are
recorded in `E:\v2re\logs\tgcx-law2-native-tests-1013.txt`. Do not launch
or terminate the game on behalf of the player.

If the child does not appear, inspect `Logs\tgcx.log` for the 0.3.0 marker,
38 guard checks, child lookup, button bindings and first ordered Bill draw.
Inspect game error/system_error logs for GUI/font/sprite/parser errors.
Diagnose concrete evidence before changing ABI or drawing at Present.

Complete accepted-baseline rollback, after normal exit:

```powershell
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --source E:\v2re\logs\tgcx-before-law2-submod-1013 --backup E:\v2re\logs\tgcx-law2-rollback-retained-1013
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --source E:\v2re\logs\tgcx-before-law2-1013\lua51.dll
```

The backup directory must be new. Both installers refuse a running game
and retain the replaced candidate. Do not reinstall repository LAW-0 when
the intended rollback is the accepted LAW-1 report stage.
