# U-7 - LAW-2 0.3.5 in game: buttons, Reforms tab, Decisions, popups

2026-10-17. **0.3.5 is installed on E:: done, not tested in game.** Read
`report-law-2-reforms-1017.md`. The 0.3.4 screenshots were accepted as the
look ("splendid"). The previous steps are in
`archive/instructions-u-7-before-reforms-1017.md`.

## The user (one short session; the game is launched and exited normally)

1. **Start TGC v2.5.2 plus TGCX.** Load a save and unpause for one day: the
   automatic favour collection writes what the Reforms tab needs.
2. **Politics → Reforms, with no bill open.**
   - Are some rows tan? These should be the one-step reforms the chamber
     blocks.
   - Click one. A bill should start, and the Bill should open with no
     popup.
3. **Close the Bill.** In the Reforms tab only the bill's target row should
   be tan, like Free Press on board 1. Click it: the Bill opens again.
4. **The Bill's buttons:** are Recount, Withdraw, Call the Vote, the card
   buttons and the sort headers visible now? Click Abstain or Aye once. The
   counts should change and no popup should appear.
5. **Decisions tab:** no `tgcx_` decision should be listed.
6. **Unpause until a new month starts.** Favours should rise once, with no
   popup.
7. **Exit normally.** Send screenshots of the Reforms tab and the Bill.

## Coordinator after the run

- **The log starts `TGCX LAW-2 0.3.5` and shows 62 guard OKs.** Then
  expect:
  - `Reforms tab hooks click=1 row=1 decisions=1`;
  - `Decision message filter installed`;
  - `Reforms tab offers …`;
  - `Reforms tab presented tgcx_bill_…`;
  - `Decisions list hides …`;
  - `Bill native buttons bound=21 of 21`.
- **Check the game's error logs:** `error.log` and `system_error.log` should
  have no new lines.
- **Compare the screenshots with boards 1 and 2 side by side** and write a
  new report. Do not launch or terminate the game.

## Rollback after normal game exit

The previous build is 0.3.4: the controls and timers worked, the buttons
were invisible, and decisions were listed.

```powershell
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --source E:\v2re\logs\tgcx-law2-reforms-1017\before\lua51.dll
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --source E:\v2re\logs\tgcx-law2-reforms-1017\before-submod --backup <new path>
```

Roll back both together. Older rollbacks are listed in the archived U-7
files. Use a new backup path; the installers refuse a running game.
