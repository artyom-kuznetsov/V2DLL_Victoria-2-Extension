# LAW-2 - Bill window, Reforms tab and Decisions tidy-up

2026-10-17. **0.3.5 is installed on E:: done, not tested in game.** It
includes:
- the Bill board (R10), every control and automatic favours (0.3.4);
- visible text-sprite buttons;
- bills presented from the Reforms tab (board 1);
- `tgcx_` decisions hidden from the Decisions tab;
- no "decision taken" popup for decisions the DLL sends.

Read `report-law-2-reforms-1017.md`, then `report-law-2-controls-1017.md`.
The previous version of this file is
`archive/instructions-law-2-before-reforms-1017.md`.

## Keep

- **The 0.3.3 placement, matrix and scene-order paths (P35-P37).** The Bill
  is 900 x 772.
- **One source for the layout:** `tools/tgcx_bill_gui.py`. `--header` writes
  the tables the DLL uses, including the script keys of every option; never
  hand-edit `tgcx_bill_catalog.h`.
- **Text-sprite buttons** (`GFX_button_standard_*`, `GFX_sortbutton_*`)
  always declare `buttonText` and `buttonFont`.
- **Every change goes through the engine's decision command.** The engine
  validates `potential` and `allow` itself (P39), and the DLL-sent effects
  keep their own guard (P38).
- **The Reforms tab only changes which rows are enabled.** A natively allowed
  reform stays native; a blocked one-step catalogue reform presents a bill;
  with a bill open, only its target is lit and opens the Bill.
- **The Decisions tab hides `tgcx_` decisions** only while the Bill GUI is
  usable and the Reforms hooks are installed. Otherwise it lists them all
  (R6).

## Next, depending on the U-7 result

1. **Buttons still invisible:** compare a native `textSpriteType` declaration
   (`GFX_button_standard_144` in TGC's `.gfx`) with ours. If needed, draw the
   enabled art from the atlas in the overlay (lose native press feedback;
   record it).
2. **No row lit in the Reforms tab:**
   - check the log for "Reforms tab hooks click=1 row=1 decisions=1" and
     "Reforms tab offers";
   - without the first line, the guards failed;
   - without the second, `tgcx_gui_legislature` is probably 0 (collect
     favours once) or the cooldown runs.
3. **A lit row does nothing:** read "Reforms tab presented …". If it is
   logged and no bill appears, TGC's `allow` refused it (deviation 3). Check
   the decision under the Decisions tab without the DLL.
4. **A popup still appears:** the command may execute after the 10 s window,
   or outside the hooked call. Keep the log and say which popup.
5. **When the user accepts the boards side by side:**
   1. write a new report;
   2. close LAW-2;
   3. move to templates (`instructions-tpl-0.md`).

## Build, test and install

1. Run `python tools/tgcx_bill_gui.py --header`, then
   `tools/build_dll.ps1` and `tools/test_dll.ps1`.
2. Run `python tools/test_bill_gui.py`, `python tools/test_law_catalog.py`
   and `python tools/tgcx_check_laws.py`.
3. Stage outside the repository:
   1. copy `submod/`;
   2. run `python tools/gen_law_catalog.py --release <stage>`;
   3. run `python tools/tgcx_bill_gui.py --stage <stage>`.
4. After a normal game exit:
   1. run `python tools/install_submod.py <mod> --source <stage> --backup <new>`;
   2. run `python tools/install_dll.py <game>`. Add the new version marker
      first.
