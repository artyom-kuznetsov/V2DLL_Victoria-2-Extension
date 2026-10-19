# U-8 - Templates 0.4.0: first live recruit (archived 2026-10-17, superseded by the 0.4.1 placement repair)

2026-10-17. **Nine-regiment recruitment and save/reload accepted on 0.4.0.**
Read `report-tpl-0-runtime-1017.md`. Visual placement and extended cases
remain open. Previous instructions are archived verbatim in
`archive/instructions-u-8-before-runtime-1017.md`. Only the user launches or exits the game.
Use TGC v2.5.2 plus TGCX and preferably a disposable 1836 UK save.

## Accepted checkpoint and remaining work

The user tested **4 infantry + 4 artillery + 1 hussar**, not the six-regiment
example below. Both screenshots show nine queue entries; the second is
explicitly after save/reload. The saved local composition and proxy log
match. This part need not be repeated merely to re-establish acceptance.

Next obtain a screenshot after the placement repair, compare with board 5,
and check partial capacity, repeated paused clicks, one-regiment recruitment,
full close/tab/naval handling and a fresh-process preference reload. Current
screenshots show a detached panel and top-bar overlap; visual acceptance is
still pending. Only the user starts or stops the game.

## Original short procedure (reference; partly completed)

1. Open Military, then Build Army. Click the small final tab after the
   native unit-type tabs. The Templates panel should occupy the left;
   the native Being built queue should remain visible on the right.
2. Click New Template. Increase Infantry to **1**, click Recruit Template,
   then unpause briefly. Confirm a real new queue entry appears. The status
   reports orders sent; the engine decides whether to accept them.
3. Pause again. Set Infantry to **4**, Artillery to **1**, Hussar to **1**.
   The name should become `4 Inf / 1 Art / 1 Hus`. Recruit, unpause briefly,
   and confirm six new entries if the country has sufficient eligible pops.
   If it has fewer, compare the queue with the left-out report.
4. Close and reopen the window; click another native unit tab; open Build
   Navy. The template panel must hide correctly. Reopen Build Army and the
   Templates tab; the saved composition must remain.
5. Save and reload. Confirm the army queue survives in the save and the
   composition remains in the local library. Optionally restart normally
   to prove preferences survive a new process.
6. Share a screenshot with the panel and queue, plus a description of how
   many entries appeared. Do not clear the log. Visual acceptance is a
   side-by-side comparison with `mockups/5-templates.png`, with the report's
   listed deviations taken into account.

The first batch blocks another Templates recruit until game time advances.
This avoids repeated paused clicks overbooking the same pops. The editor
has two pages of units and four templates per list page; twelve templates,
128 regiments each. Changes save automatically. Delete removes the selected
local template; it does not cancel constructions. The footer cross closes
the panel. Without the DLL the added tab is inactive.

## Coordinator: collect and diagnose

1. Preserve the screenshot and `E:\Victoria.II.v3.04.Inclu.ALL.DLC\Logs\tgcx.log`
   in a new private evidence folder. Copy the current
   `Documents\Paradox Interactive\Victoria II\TGC252_TGCX\logs` too.
2. Confirm version `TGCX TPL-0 0.4.0`, all guards and `Templates GUI hooks
   installed`, then `Templates native panel found`.
3. Check `Templates local file` with `editable=1`; each queued regiment
   has a `Template regiment` line. Verify unit, province, country tag and
   total against actual native queue entries, rather than the sender alone.
4. A missing panel: distinguish no native update capture, missing generated
   tab/window, a read fault, naval/province mode and a refused screen fit.
   The candidate is designed for the large Military view, not province UI.
5. An unavailable/invalid preference file is preserved. Inspect its format
   and permissions; do not overwrite it to make the test pass. A leftover
   `.pending` is likewise retained; inspect it before any recovery.
6. Compare the screenshot with the board and list every new difference.
   Check fresh game logs for new errors. A clean sender log or static
   preview is not runtime acceptance.
7. Fix failures, run affected gates, install only after a normal user exit,
   and write a new dated report. Keep U-8 pending until evidence passes.

## Rollback

After the user exits normally, run from the repository:

```powershell
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --source E:\v2re\logs\tgcx-tpl-panel-1017\before-submod --backup E:\v2re\logs\tgcx-tpl-panel-1017\rollback-040-submod
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --source E:\v2re\logs\tgcx-tpl-panel-1017\before-dll\lua51.dll
```

Both installers refuse an active game. The backup directory must be new.
Rollback restores LAW-2 0.3.5; it does not imply U-7 has passed.
