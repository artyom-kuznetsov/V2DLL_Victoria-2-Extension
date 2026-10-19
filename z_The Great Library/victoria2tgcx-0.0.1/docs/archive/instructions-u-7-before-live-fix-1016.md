# U-7 - Bill layout repair check

2026-10-16. **0.3.0/0.3.1 failed the user's visual checks; 0.3.2 installed on E:,
done, not tested in game.** See `report-law-2-position-1016.md`. Failed
screenshot and logs already retained. Do not repeat extended U-6.

1. Start TGC v2.5.2 plus TGCX normally and load an active bill. Open
   Politics. If an old save lacks metadata, Count once in Decisions and
   close its report. Do not assume old purchases; the failed screenshot
   showed 10 Aye / 0 Abstain / 90 Nay.
2. Check Bill is centred, chart fills the left Projected Vote area, and
   Crown/lower controls have no native party text/button crossing them.
   Drag the header/background and check the chart follows the panel. One
   screenshot and brief description suffice.
3. Count once from the Bill. Its normal report should appear above it.
   Close report, close/reopen Bill and Politics. Closing Politics should
   also hide Bill. Report displaced content, dead/misplaced click targets
   or Bill covering a later dialog.
4. Exit normally. Coordinator retains fresh game/DLL logs and screenshot,
   compares with the Bill mockup and writes the observed result. Missing
   full controls/style remain documented prototype work.

Coordinator: log starts `TGCX LAW-2 0.3.2`, passes 42 runtime guards, finds
child and binds three buttons. First chart draw logs actual origin; at
2560 x 1440 initial placement should be (864,380). Inspect Count request
and game error/system_error logs. Use `python tools/tgcx_check_laws.py`
for seven existing gates/log snapshot. Do not launch/terminate the game.

## Rollback after normal game exit

Previous 0.3.1 payload (known off-screen layout; retained for diagnosis):

```powershell
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --source E:\v2re\logs\tgcx-law2-position-1016\installer-backup --backup E:\v2re\logs\tgcx-law2-032-rollback-retained-1016
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --source E:\v2re\logs\tgcx-law2-position-1016\before\lua51.dll
```

The 0.3.2 repair changes the DLL and generated GUI fragment. Restore both
if returning to the previous candidate. Accepted 0.2.8/LAW-1 rollback requires both
original payloads:

```powershell
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --source E:\v2re\logs\tgcx-before-law2-submod-1013 --backup E:\v2re\logs\tgcx-law2-accepted-rollback-retained-1016
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --source E:\v2re\logs\tgcx-before-law2-1013\lua51.dll
```

Use a new backup path. Installers refuse a running game and retain replaced
candidate. Do not reinstall repository LAW-0 instead of accepted LAW-1.
