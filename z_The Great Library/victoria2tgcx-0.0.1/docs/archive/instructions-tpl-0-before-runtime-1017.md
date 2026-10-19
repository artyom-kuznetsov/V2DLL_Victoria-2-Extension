# TPL-0 - Native Templates panel: pending runtime acceptance

2026-10-17. **0.4.0 is installed on E:: done, not tested in game.** Static
research, D12 choices, the native panel, local preferences and the first
recruit path are implemented. Read `report-tpl-0-panel-1017.md` and the
older `report-tpl-0-research-1017.md`. Previous instructions are preserved
verbatim in `archive/instructions-tpl-0-before-panel-1017.md`.

## Next: coordinator

1. Wait for U-8 evidence (`instructions-u-8.md`); only the user launches or
   exits the game. Preserve screenshots, current proxy log and game logs.
2. Confirm version 0.4.0, guards, native panel discovery, local file state
   and each command's unit/province/tag. Compare actual new queue entries
   after unpausing with the requested composition and left-out count.
3. Open `mockups/5-templates.png` and compare side by side. The current
   report lists nine layout/implementation deviations. Fix or explicitly
   record every additional difference. Verify tab switching, closing,
   naval mode, partial capacity and save/reload without new game errors.
4. For a failure, use the U-8 diagnostic steps. Research only the relevant
   subsystem; guard any new RVA before calling it. Do not patch the game
   on disk, copy whole TGC files or write simulation fields.
5. Keep one source for GUI metadata: `tools/tgcx_templates_gui.py`. After
   changes run its `--header`, build, `tools/test_dll.ps1`, and
   `python tools/test_templates_gui.py`. Run executable/TGC/installer gates;
   repeat law gates only if changes affect their shared paths.
6. Stage outside the repository/game: copy `submod/`, run
   `gen_law_catalog.py --release <stage>`, `tgcx_bill_gui.py --stage <stage>`
   and `tgcx_templates_gui.py --stage <stage>`. After user exit, dry-run
   both installers, retain a paired rollback, then install both.
7. Verify installed DLL equals build and compare generated GUI bytes.
   Pre-existing law files should remain unchanged. Write a new report;
   never rewrite the existing report to imply later evidence existed then.
8. Only after runtime/visual acceptance, close TPL-0 and continue TPL-1
   using its own instructions. Preserve U-7's separate pending status.

## Keep

- D12: local file, composition names, native windows, recruit what fits.
- Windows Documents known-folder resolution and stable unit keys in the
  versioned local file. Malformed/unreadable files are preserved, not reset.
- Engine allocation/constructor/posting, engine validity and bounded plans.
  No writes to pops, regiments or the queue outside commands (R5).
- Native root matrix + (5,69), packed screen position and promotion only on
  opening; later dialogs stay above the panel. Parent close/naval/destructor
  hides its promoted child. Keep observer storage alive through destruction.
- Generated insertion into TGC's effective buildunit.gui, vanilla fallback
  only when v2.5.2 inherits it; the right native queue remains unmodified.
- `Conform to template` is TPL-1, not part of this candidate.
