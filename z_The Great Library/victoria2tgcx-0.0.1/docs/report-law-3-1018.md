# LAW-3 report: the Reforms tab follows the game, and the U-7 fixes

2026-10-18. Card: `docs/instructions-law-3.md`. Findings: `report-u-7-1018.md`
F1-F4 and U-7 deviation 2. Build: **0.6.4** (`TGCX LAW-3 0.6.4`), on top of
the accepted 0.6.3 (TPL-1). **Done, not tested in game.** U-11
(`instructions-u-11.md`) is the game check. Not installed: install only
after a normal game exit.

## 1. F3: the SUB-0 load test is out of the normal install

- `tools/install_submod.py` skips `tgcx_loadtest.txt` (decisions and
  events), `tgcx_loadtest.csv` and `000_tgcx_loadtest_override.csv` unless
  `--load-test` is given. The U-2 probe stays available. The installed-file
  count now comes from the installed tree.
- `tools/test_install_submod.py`: new
  `test_load_test_probe_only_with_flag` (default install has none of the
  three, `--load-test` has them, remove still leaves `mod\` identical).
- The repository's `submod\` and the stage still contain the files; the
  installer leaves them out. So `[TGCX] Denmark` is gone from a default
  install.

## 2. F1: the Reforms rows follow the offer

Cause (P46, refined by research): the row builder re-evaluates every row on
each call, but nothing called it again when our offer changed, and rows the
game enabled natively were never darkened while a bill was open.

- Ghidra (static, listings in `E:\v2re\logs\tgcx-law3-1018\`):
  `CPoliticsView` slot 11, `FUN_006D7180`, is the refresh. It rebuilds the
  rows (`FUN_006D96F0` -> `FUN_006DA930`) and the decisions list. Slot 2
  (show) tail-calls it. `docs/symbols.md` LAW-3.
- DLL: the tick reads the offer every frame; a change (memcmp of the
  offer) sets a rebuild flag, and `tgcx_ReformAfterTick` calls slot 11 on
  the open view, after checking its vtable and that slot 11 is
  `base + 0x2D7180`, under `__try`. The log line is `Reforms rows
  evaluated: lit=… (ours=…) dark=… active=…`.
- Row hook: with a bill open, a row is enabled only if it is the bill's
  target, native rows included. With no bill, a row the game left dark is
  lit only if we offer it.
- Click: with a bill open, every row click opens the Bill; a row not
  offered does nothing.
- Guards: slot 11 (`0xA0E484`), its entry and call (`0x2D7180`, `0x2D71AE`)
  and the show tail-call (`0x2D2C2B`) are signatures. If any fails the
  rows still work as in 0.6.3 and the log says `rebuild=0`.

## 3. F2: the top-bar decisions alert skips our decisions

- Ghidra: the alert list (`FUN_0053A6D0`, key `COUNTRYALERT_CanDoDecisions`)
  skips decisions that `FUN_0053A6A0` calls "ignored" (EAX = country,
  EDI = decision).
- DLL: a 7-byte hook at RVA `0x13A6A0` (`tgcx_IgnoredThunk`) returns 1 for
  `tgcx_` decisions while the Bill is usable. It replicates
  `push esi; mov esi,[eax+0x188]` and resumes at `+0x13A6A7` otherwise.
  When the Bill window is known to be too small, our decisions are listed
  again (R6: they are the fallback). Log: `Decisions alert filter
  installed`, and once `Decisions alert skips <name>`.
- **Limit:** the alert icon itself is gated by `FUN_0040B360`, not studied.
  The icon may still light when only `tgcx_` decisions can be enacted; its
  tooltip then lists none.

## 4. F4 / D14: offer only what the game allows

- **B (script).** `tools/gen_law_catalog.py` `offer_block()`: the monthly
  `tgcx_collect_favours` writes `tgcx_gui_offer_<group>` = 1 + the current
  law whose next step passes the target option's own TGC `allow` (copied
  from TGC v2.5.2 by the generator), or 0. 23 groups in the stage, one
  reset plus one step line each (`grep -o`, 2026-10-18).
- **A (direction and native rules).** TGC v2.5.2's `common/issues.txt` has
  no backward-specific condition (only `next_step_only = yes` and each
  option's `allow`; grep, 2026-10-18). The native permission
  (`FUN_00525BE0` / `FUN_00525A20`) first checks the reform delay
  (`FUN_005268F0`, last reform date at `CCountry+0x9C`), then upper-house
  support, then `allow`. **Interpretation:** the Reforms tab never
  negotiates a backward step. A backward step the game allows is already
  lit natively and enacted directly; one it refuses is not offered. The
  script down-decisions remain for play without the DLL. The DLL also
  calls the native delay gate and offers nothing while it is closed (if its
  guard fails, the gate is treated as open and the log says so).
- **DLL.** `tgcx_ReformOffers` lights a row only when: the offer is known,
  there is a legislature, no cooldown, the delay is open, the row is the
  next step forward, the offer variable names the current law, and the bill
  exists in the catalogue. A fresh load with no variable yet offers nothing
  until the first collection.
- **Docs.** `docs/law-design.md` §14.
- **Mockup (R10).** Board 1 (Main) of the artifact now shows the
  negotiation badge only on offered reforms (example data: the law's next
  step allowed; laws at their last step or blocked get none). Republished
  as version 33 (2026-10-18); `E:\v2re\mockups\project\Main.dc.html`
  refreshed (old copy `Main.dc.html.before-064`); PNGs re-exported with
  `python tools/mockups/export.py`.

## 5. Bill text overflow (U-7 deviation 2)

- `tools/tgcx_bill_gui.py` measures text with the GUI fonts' BMFont
  advances (`core.gfx` name -> `.fnt`) and fits it:
  - Closeness rows (Arial12, 120 px): long option names end in `...`
    (`short_options`), e.g. `Universal Weighted Vo...`.
  - Transition line (vic_18, 236 px): when it does not fit, it moves to a
    new `transition_small` text in Arial12 bold at the same place, and the
    "from" side is shortened if needed. The Vote Franchise bills use the
    small line; Press Rights keeps vic_18.
- `tools/test_bill_gui.py`: new `test_long_names_fit_their_text_boxes`.

## 6. Gates (2026-10-18)

| Gate | Result |
|---|---|
| `tools/build_dll.ps1` | `tgcx.vcxproj -> …\Release\lua51.dll`, SHA-256 `90dd6cb9…3ced` |
| `tools/test_dll.ps1` | signatures OK (153), `tgcx_tests: ALL OK`, installer 8/8 OK |
| `python tools/check_exe.py` | `check_exe: ALL OK` (9 new LAW-3 signatures) |
| `python tools/tgc_scan.py` on TGC v2.5.2 | `anchors and range OK` |
| `test_gen_laws`, `test_law_catalog` (28), `test_bill_gui` (9), `test_templates_gui`, `test_conform_gui`, `test_install_submod` (11) | all OK |
| `python tools/tgcx_check_laws.py` | `All automatic gates passed.` |

New native tests: D14 flags (off, on, stale, backward step, delay closed),
P46 darkening with a bill open, the offer-change rebuild, and the alert
filter (ours ignored, TGC's kept, listed again when the Bill cannot fit).

## 7. Stage

`E:\v2re\logs\tgcx-law3-1018\stage-064\` (submod via `gen_law_catalog.py
--release`, `tgcx_bill_gui.py`, `tgcx_templates_gui.py` and
`tgcx_conform_gui.py --stage`) and `lua51-0.6.4.dll` beside it. Install
after a normal exit, dry run first, with backups `before-064-dll` and
`before-064-submod`. `install_dll.py` accepts 0.6.3 as ours and records
the card `LAW-3`.

## 8. Not known / not verified

- Nothing here has run in game. The slot-11 rebuild, the delay thunk and
  the alert hook are static evidence plus fixtures (U-11).
- The alert icon (`FUN_0040B360`).
- Whether the monthly collection's offer is fresh enough in play: a law
  changed mid-month offers nothing until the next collection (by design).
