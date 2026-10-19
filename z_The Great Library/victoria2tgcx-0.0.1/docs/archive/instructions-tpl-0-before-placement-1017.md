# TPL-0 - Visual repair after functional acceptance (archived 2026-10-17, superseded by the 0.4.1 placement repair)

2026-10-17. **0.4.0 recruitment and save/reload are accepted by the user;
GUI placement/fidelity remain open.** Read `report-tpl-0-runtime-1017.md`,
then `report-tpl-0-panel-1017.md`. Previous instructions are preserved in
`archive/instructions-tpl-0-before-runtime-1017.md`.

1. Open both originals in `work/tgcx-u8-1017/` and `mockups/5-templates.png`.
   The Templates panel is detached at the upper left; its title overlays
   the top bar; the original native list remains in Military. Preserve the
   verified nine-command recruit and local preference behavior.
2. Run check_exe.py before native-address work. Inspect the nested Military
   and BuildUnitView roots and their coordinate conversions. The present
   fixture starts from a screen-space root and missed the nested-parent
   case. Establish the full native screen conversion rather than guessing
   another constant offset. Any new entry needs evidence and byte guards.
3. Correct promotion/placement so the panel covers the left build column,
   its title belongs to the build header, the native queue remains beside
   it and the footer spans the two columns as on board 5. Do not raise the
   child every frame above later dialogs. Keep input targets aligned.
4. Add a translated-parent regression and verify hide/close/tab/naval and
   destruction paths. Use the confirmed foreground/packed setter where
   appropriate; do not assume its inputs are already screen coordinates.
5. Address spacing, selection/borders and composition icons against board
   5. Record every retained deviation with a concrete reason. Keep D12
   composition names, local storage and recruit-what-fits behavior.
6. Generate headers and private assets from tools/tgcx_templates_gui.py;
   run build_dll.ps1, test_dll.ps1, test_templates_gui.py and executable/TGC
   gates. Shared-path changes require the relevant installer/law tests.
7. Stage a full release, dry-run both installers and retain a paired
   rollback. Only install after a normal user exit. Only the user launches
   or exits the game. No commit, push or subagent unless asked.
8. Write a new report and obtain the U-8 corrected screenshot; do not
   rewrite the earlier reports. Follow remaining U-8 checks without
   claiming they passed from the current nine-regiment evidence.
9. After visual acceptance, proceed to instructions-tpl-1.md for Conform.
   U-7/LAW-2 acceptance remains independent. Close under ROADMAP section 7.
