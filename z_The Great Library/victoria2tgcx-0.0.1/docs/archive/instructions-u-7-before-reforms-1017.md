# U-7 - Bill 0.3.4 in game: board layout, controls, automatic favours

2026-10-17. **0.3.4 is installed on E:: done, not tested in game.** Read
`report-law-2-controls-1017.md`. The 0.3.3 placement/layering acceptance
stands; this check is about the new layout and controls. Prior steps are
in `archive/instructions-u-7-before-controls-1017.md`.

## The user (one short session; the game is launched and exited normally)

1. Start TGC v2.5.2 plus TGCX. Load a save with an active bill (or present
   one), let a day pass, open Politics. If the save predates 0.3.4, press
   **Recount** once so the Crown/government/rate breakdown are filled.
2. **Screenshot of the Bill** next to `mockups/2-negotiation.png`. Say what
   differs (art, text, colours: does `§G` print literally?).
3. Try a few controls and say what happened:
   - the By vote / By bloc / Both checkboxes;
   - 5 seats / 25 seats;
   - one Abstain or Aye on a card;
   - Audience, if the Crown can veto;
   - a sort header.

   A purchase should change the counts, spend favours and add a dated line
   to the Negotiation Log.
4. Unpause until a new month starts and look at the favours. They should rise
   without using Decisions, once. If the decision appears in Decisions as
   collectable, that is fine; it must not add twice.
5. Save, reload, unpause one day. Favours must not be collected again within
   the month.
6. Exit normally.

## Coordinator after the run

- The log starts `TGCX LAW-2 0.3.4` and shows `48` guard OKs.
- Then expect:
  - `Bill native buttons bound=21 of 21`;
  - `Bill textures background=loaded atlas=loaded`;
  - `Bill first ordered overlay draw … cards=N`;
  - `Bill tgcx_buy_… requested`;
  - `Favours collection requested … hours=` (only once per month absence).
- Check `error.log` and `system_error.log` for new lines. Run
  `python tools/tgcx_check_laws.py`.
- Retain the screenshot and logs. Compare side by side with the board; write a
  new report. Do not launch or terminate the game.

## Rollback after normal game exit

Previous 0.3.3 (accepted placement) DLL and submod:

```powershell
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --source E:\v2re\logs\tgcx-law2-controls-1017\before\lua51.dll
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --source E:\v2re\logs\tgcx-law2-controls-1017\before-submod --backup <new path>
```

The 0.3.3 DLL reads the new submod's GUI incorrectly (different layout), so
roll back both together. The accepted 0.2.8/LAW-1 rollback remains as listed in
`archive/instructions-u-7-before-controls-1017.md`. Use a new backup path;
installers refuse a running game.
