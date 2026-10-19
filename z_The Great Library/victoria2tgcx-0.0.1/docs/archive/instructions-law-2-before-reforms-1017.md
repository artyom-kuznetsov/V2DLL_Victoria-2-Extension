# LAW-2 - Bill window: board layout, controls and automatic favours

2026-10-17. **0.3.4 implements the Bill board (R10), every control and
automatic favour collection; installed on E:, done, not tested in game.**
Read `report-law-2-controls-1017.md` first. The earlier contract and the
follow-up list are preserved in
`archive/instructions-law-2-before-controls-1017.md`.

## Keep

- The 0.3.3 placement, matrix and scene-order paths (P35-P37). The window
  is now 900 x 772: `tgcx_bill_width` and `tgcx_bill_height` in the
  generated header.
- **One source for the layout:** `tools/tgcx_bill_gui.py`
  (`buttons()`, `texts()`, `CELLS`, the constants). `--header` writes the
  table the DLL uses; never hand-edit `tgcx_bill_catalog.h`.
- **GUI order:** background button, buttons, the overlay marker, then every
  text. The DLL draws after the marker, so text stays on top.
- **Every DLL-sent decision guards its own effect (P38).** Purchases and
  promises use the fresh guard; Audience, Withdraw, Call the Vote and
  Collect favours wrap their effect in their `potential` and `allow`.
- **Clicks rebuild the view from fresh script state.** The script decides;
  the DLL only greys out.
- **Decisions remain the fallback** for everything.

## Next, depending on the U-7 result

1. **If the layout differs from the board,** change the generator constants
   and regenerate; keep the header and the GUI in step (`test_bill_gui.py`
   checks the order and the bounds).
2. **If colour codes print literally,** drop the `\xA7` codes in
   `tgcx_BillLabels` and use font colours instead (a `_black` font versus
   the default).
3. **If the timers are wrong** (no "Introduced" date, the vote never
   enables, the Debts panel says "listed under Decisions"), read the log
   for guard failures. Then check `CCountry+0x4D8` and item +0xC with a
   live read-only snapshot before changing code.
4. **If favours are collected twice in a month,** keep the log and the
   save. The script effect's own check should make the second command a
   no-op; find which guard failed.
5. **When the user accepts the board side by side:**
   - record the deviations in a new report (the list in the controls
     report is the starting point);
   - close LAW-2 with the user's acceptance;
   - only then move to another mechanic.

## Build, test and install

1. Run `python tools/tgcx_bill_gui.py --header`, then
   `tools/build_dll.ps1` and `tools/test_dll.ps1`.
2. Run `python tools/test_bill_gui.py`, `python tools/test_law_catalog.py`
   and `python tools/tgcx_check_laws.py`.
3. Stage outside the repository:
   1. copy `submod/` to the stage;
   2. run `python tools/gen_law_catalog.py --release <stage>`;
   3. run `python tools/tgcx_bill_gui.py --stage <stage>`.
4. After a normal game exit:
   1. run `python tools/install_submod.py <mod> --source <stage> --backup <new>`;
   2. run `python tools/install_dll.py <game>`. Add the new version marker
      to `install_dll.py`.
