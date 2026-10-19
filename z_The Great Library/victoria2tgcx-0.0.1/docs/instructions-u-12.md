> 2026-10-19 runtime result: section B passed on 0.8.2 (three detach cases).
> Only A (separate Ctrl/Alt check) and C (Bill screenshots) remain unconfirmed.

> 2026-10-19 update: detach failed on 0.8.1. 0.8.2 is installed; run
> instructions-tpl-4-082-check.md for section B. Sections A and C remain
> unconfirmed and can be checked on 0.8.2; their behavior is unchanged.

# U-12: game check of 0.8.1 (TPL-3, TPL-4, LAW-4)

2026-10-18. Installed on E:: 0.8.1 (`tgcx.dll` `62fa7933…` in both package
folders, loader 0.8.0). Only the user launches and exits the game.

## Setup

1. In the launcher tick **TGC v2.5.2 (stable)**, **Army Templates and
   Conform (TGC v2.5.2 (stable))** and **TGCX Politics (TGC v2.5.2
   (stable))**.
2. Start a game (or load the U-11 save) as a civilised country.

## A. TPL-3: Ctrl and Alt in the Templates editor

1. Open Build Army, Templates tab, edit or create a template.
2. Plain-click `+` on a unit row: +1. **Alt**-click: +2. **Ctrl**-click: +5.
3. The same on `-`. Ctrl and Alt together: 5 (Ctrl wins).
4. Near 128 regiments, Ctrl-click `+` stops at 128.

Pass: every step as written.

## B. TPL-4: Conform detaches the extras

1. Take a stack with regiments the chosen template does not have (extras).
2. Press Conform with that template, then **unpause**.
3. Let two or three game days pass. Pause.
4. Pass: the extras are in a new stack beside the old one, without a second
   Conform press.
5. Exit the game normally. Send `Documents\Paradox Interactive\Victoria
   II\TGC252_TGCX\Logs\tgcx.log` (or copy the lines that start with
   `Conform: transfer check` and `Conform: … extras arrived`).

If the extras did not move, the `transfer check` line names the field that
blocks the engine (`+74`, `+194`, `+DC`, `+40`). That is the TPL-4 follow-up.

## C. LAW-4: Bill view buttons

1. Open a bill (Politics, Reforms tab, any offered row).
2. Click **Party**, take a screenshot. Then **Aye/Nay**, screenshot. Then
   **Both**, screenshot.
3. Say for each: does the chart change? Does the tick move to the clicked
   button, show nothing, or flicker and vanish?

## Report

`docs/report-u-12-MMDD.md` with the results of A, B and C, the log lines
and the screenshots' description. Mark TPL-3 and TPL-4 "tested in game" only
if they passed.
