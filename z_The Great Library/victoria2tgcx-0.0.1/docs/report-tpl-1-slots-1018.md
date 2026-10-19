# TPL-1 report: Conform stops after a long game (P47), fixed in 0.6.5

2026-10-18. Found in MOD-0 run 1 (`instructions-mod-0.md`) on 0.6.4: after
about a year of play as France (March 1837) the **Conform to template**
button did nothing. Templates, laws and everything else kept working. The
`dsx-….exe` error shown at the same time came from an unrelated 64-bit
program, not the game (its crash address `0x00007FF6…` cannot be in the
32-bit `v2game.exe`; Windows recorded no game crash). **Fix built and installed
on E: the same day (0.6.4 backed up to `before-065-dll`); not tested in
game.**

## Evidence (`tgcx.log`, run 1)

- No fault, refusal or "disabled" line (`grep`, 0 matches).
- `Conform native window found` for **11 distinct `CUnitView`s**, the last
  at line 570. Conform worked until then (orders, marches and merges logged
  up to 1837 day 9).
- After that, clicks left no line at all: no `window opened`, `does not
  fit`, `refused` or `rejected`. That is the path where the click never
  reaches our code, because the button was never bound.

## Cause (inferred from the code and the log; not seen live)

`tgcx_cf_views[8]` and `tgcx_cf_panels[8]` keep the unit panels Conform has
seen. A slot was freed only by the hooked slot-0 destructor. When a view's
vtable changed without that hook running, the tick dropped the view slot
but **not the panel slot**. After eight such losses no panel was free: a new
unit panel got no panel, so nothing bound its buttons, and every click did
nothing, silently. A full view table was also silent. This is P47.

## Fix (0.6.5, `TGCX TPL-1 0.6.5`, DLL SHA-256 `9528c982…`)

- `tgcx_conform_native.h`: `tgcx_CfSweepViews` treats a changed (or
  unreadable) vtable as destruction. It frees the view slot and its panel
  (`tgcx_CfPanelForget`, which does not touch the dead GUI), and logs the
  first eight (`Conform: unit panel … gone without its destructor`). Tables
  go from 8 to 32 entries. A full view table is logged once.
- `tgcx_conform_gui.h`: `tgcx_CfPanelFor` frees any panel whose view left the
  table before it claims a slot.
- `tgcx_templates_gui.h`: the same rule for the build view. It was a single
  object all game (1 view), so it was not affected, but the same failure is
  now closed there too.
- Test: 40 unit panels, each destroyed outside the hook, each get a view
  and a panel slot, and none is left behind.

## Gates (2026-10-18)

`tools/build_dll.ps1` OK; `tools/test_dll.ps1`: signatures OK (153),
`tgcx_tests: ALL OK`, installer 8/8; `check_exe: ALL OK`;
`test_conform_gui.py` and `test_templates_gui.py` OK. The submod is
unchanged from 0.6.4.

## Install and check

- Staged: `E:\v2re\logs\tgcx-law3-1018\lua51-0.6.5.dll`. Install after a
  normal exit with `install_dll.py --source`, backing up 0.6.4 to
  `before-065-dll`.
- Check: a long game with real army use. Conform keeps working well after
  the point where it stopped; `tgcx.log` shows `gone without its
  destructor` lines (which would confirm the cause) and no `table full`.
