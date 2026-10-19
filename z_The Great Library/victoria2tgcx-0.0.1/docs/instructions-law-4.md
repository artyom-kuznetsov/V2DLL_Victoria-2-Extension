# LAW-4: the Bill view buttons do not stay ticked

2026-10-19: deferred while Army compatibility has priority (user). See NEXT.md.

2026-10-18. Reported by the user on 0.8.0 (MOD-2 run 1). The minimum fix
(user): the three parliament view buttons, **Aye/Nay, Party and Both**, change
the view and show which one is selected.

## What is known

- The buttons are native `GFX_checkbox_default` buttons in the Bill window
  (`tools/tgcx_bill_gui.py`).
- The click handler sets the mode: `tgcx_bill.h:386`
  (`tgcx_bill_mode=action-TGCX_B_MODE_0`). Default 2 (Both), line 259.
- The tick is drawn by the DLL in its textured pass: `tgcx_bill.h:845`
  draws `tgcx_bill_cell_checked` over the selected button.
- The chart colours depend on the mode: `tgcx_bill.h:885`.
- This code has not changed since 0.4.4. 0.6.x moved the window placement
  (P40) and the layering.

## Steps

1. Read the U-12 part C answers first (`docs/instructions-u-12.md`).
2. If the chart changes but the tick does not move: the draw at line 845 uses
   the wrong position (check `tgcx_bill_mode_x`/`_y` against the button
   positions in the generated `.gui`, with the P40 owner chain).
3. If the chart does not change either: the click does not reach the handler
   (check the button binding, P41/P44: plain `spriteType`, top-level lookup).
4. If the tick flickers: the native checkbox draws its own frame 0 after
   ours; draw after it, in native GUI order (P28).
5. Add a regression test in `dll/tgcx/tests/` for the case found.
6. Build, `tools/test_dll.ps1`, stage as 0.8.2 in
   `E:\v2re\logs\tgcx-law4-MMDD\`, install only after a normal exit with a
   backup. Mockup board 2 (Bill) is the spec for the tick (R10).
7. Report `docs/report-law-4-MMDD.md`.
