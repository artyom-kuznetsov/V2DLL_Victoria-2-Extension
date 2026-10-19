# TPL-0 - Visual acceptance of 0.4.2

2026-10-17. **0.4.1 placement confirmed in game; 0.4.2 (board-5 details)
installed on E:, done, not tested in game.** Read
`report-tpl-0-visual-1017.md`, then `report-tpl-0-placement-1017.md`.
Previous instructions are archived verbatim in
`archive/instructions-tpl-0-before-placement-1017.md`. Recruit and
save/reload were accepted on 0.4.0 and the 0.4.1 change does not touch
them.

1. Wait for U-8 evidence (`instructions-u-8.md`). Only the user launches or
   exits the game. Preserve the screenshot, `tgcx.log` and game logs in a
   new private folder.
2. In `tgcx.log` confirm `TGCX TPL-0 0.4.2`, the guards and the
   `Templates anchor:` line (0.4.1 gave root local 336,20, screen
   1104,490, 2 levels; already recorded as R).
3. If the line is missing and the log says the panel "does not fit", the
   chain did not reach the scene: log each owner's vtable RVA and its
   translation (read-only), then decide. Do not fall back to a constant.
4. Compare the screenshot with `mockups/5-templates.png`: the panel over the
   left build column, title on the Build Army header, native queue visible
   on the right, footer across both columns. List each difference.
5. Check that the native queue's entries and its cancel button still take
   clicks through the panel's transparent right part. If they do not,
   narrow our hit area (a smaller window holding the left column, the
   footer as a second window); do not move the native queue.
6. Compare against the retained deviations in `report-tpl-0-visual-1017.md`
   §4; anything else is a defect. Check the ring, the empty-row covers,
   miniatures, footer Delete and texts in the screenshot. Keep D12 names,
   local storage and recruit-what-fits.
7. Gates for any change: `build_dll.ps1`, `test_dll.ps1` (including the
   translated-parent fixture), `test_templates_gui.py`, `check_exe.py`,
   `tgc_scan.py`, and the installer tests when shared paths change. Install
   only after a normal user exit, keep a paired rollback, write a new report.
8. After visual acceptance, `instructions-tpl-1.md` (Conform). U-7/LAW-2
   remains independent. No commit, push or subagent unless asked.
