# TPL-3 and TPL-4 report (0.8.1), with the LAW-4 first look

Card names: TPL-2 already exists (on hold), so the Ctrl/Alt request is
**TPL-3** and the culture filter **TPL-5**.

2026-10-18. Requests from the user after the MOD-2 game check. **Installed on
E: 2026-10-18** (backup `before-081-submod`), all automatic gates green,
**not tested in game**. Only
`tgcx.dll` changes (marker `TGCX TPL-4 0.8.1`). The loader stays 0.8.0, and
so do the script and GUI files.

## 1. TPL-3: Alt and Ctrl in the Templates editor

In the unit row's `-` and `+` buttons (`tgcx_templates_gui.h`):

- Ctrl-click changes **5** regiments, Alt-click **2**. With both held, Ctrl
  wins.
- An addition is capped at the 128-regiment template limit.

It is read with `GetKeyState` at the click. It is an interface preference,
not simulation state (R5).

**Mockup:** board 5 does not show modifier keys, so it is unchanged. The
editor looks the same.

## 2. TPL-4: Conform's detach did not work

The user saw the extras leave only after the new regiments joined and
Conform was pressed again. Saved logs (`tgcx-v2d1-1018\v2dll-run`) show it
never worked:

- every press logged `2 extras detached into stack …`;
- the next press on the same stack (`165`) found the same extras;
- after a Join, the stack had 4 regiments (3 + 1).

The Create command makes the new stack. The Transfer commands are posted.
The engine then **refuses them silently**.

**Static evidence** (Ghidra, `E:\v2re\logs\tgcx-tpl4-1018\transfer.txt`):

- Our `CTransferSubUnitCommand` arguments match the native reorganize drop
  (`0x007944FF`): `(mem, target type, target id, regiment)`.
- The engine's check `FUN_00513F30` refuses unless all of these hold:
  - both stacks have `+0x74` = 0 and `+0x194` = 0;
  - both stacks have the same `+0xDC` location;
  - the regiment's type has `+0x42` set;
  - stack-class tests pass.
- Which one fails is not visible statically.

**Change:**

- The detach task now stays open one more game day after the Transfers.
  Then it counts what arrived: `Conform: N of M extras arrived in stack …,
  K still in stack …`.
- At the Transfer it logs the fields the engine checks:
  `Conform: transfer check new … (+74 … +194 … +DC … +40 …) source …`.
- If extras are still in the old stack, it sends the Transfers again the
  next day, once.

If that alone fixes it (e.g. a day-one timing refusal), the extras now leave
a day or two after unpausing. If not, the log line says which field blocks
it, and the next build targets that field.

## 3. LAW-4: Bill view buttons do not stay ticked (not fixed)

- The three view buttons (Aye/Nay, Party, Both) and 5/25 are native buttons
  with `GFX_checkbox_default`.
- The DLL draws frame 1 (the tick) over the selected one in its textured
  pass (`tgcx_bill.h`, `tgcx_bill_mode`, default Both).
- Only the click handler changes the mode, and the code has not changed
  since 0.4.4.
- Need from the user: a screenshot after clicking Party. Does the chart
  change? Does no tick show at all, or does it flicker and vanish?

## 4. Gates and stage

- `build_dll.ps1`: both projects built.
- `test_dll.ps1`:
  - `gen_signatures` ALL OK (153);
  - `tgcx_tests` ALL OK, with the new verify step in the Conform tracker
    test;
  - `test_install_dll.py` 12/12.
- `test_tgcx_packages.py` 10/10. The live test now compares with the 0.7.0
  TGCX kept in `before-080-submod`.
- **Stage:** `E:\v2re\logs\tgcx-tpl4-1018\stage-081\tgcx.dll`
  (`62fa7933…`).
- **Dry run:** the package reinstall with it, OK.

**Install** (after a normal exit). It reinstalls both packages with the new
`tgcx.dll`. The submod source is unchanged.

```
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --base tgc252 --packages army,politics --source E:\v2re\logs\tgcx-mod2-1018\stage-080\source --dll E:\v2re\logs\tgcx-tpl4-1018\stage-081\tgcx.dll --backup E:\v2re\logs\tgcx-tpl4-1018\before-081-submod
```
