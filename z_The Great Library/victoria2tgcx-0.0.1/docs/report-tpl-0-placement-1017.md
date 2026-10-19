# TPL-0 0.4.1: Templates panel placement repair (2026-10-17)

> **Report**, not rewritten. **Installed on E:, done, not tested in game.**
> Follows `report-tpl-0-runtime-1017.md` (0.4.0 recruit and save/reload
> accepted, panel detached at the upper left).

## 1. Cause

0.4.0 placed the promoted panel at the build root's inner matrix
(`+0x84`, `-0x88`) plus (5,69), treating that matrix as screen pixels. It is
not: an inner's matrix is relative to its owner.

- **Decompile** (`DecompileAt.java`, private
  `E:\v2re\logs\tgcx-tpl-place-1017.txt`): `FUN_009F9050` (RVA `0x5F9050`)
  appends a child inner to an owner's list: owner `+0xDC/+0xE0` head/tail,
  child `+0xD4/+0xD8` siblings, child `+0xE4` = owner. `FUN_009F8FD0`
  unlinks the same fields. `FUN_00A1FEB0` (inner slot `+0xCC`) stores the
  input at `+0xFC/+0x100` and rebuilds the 4x4 matrix at `+0x54`, whose
  translation is `+0x84/+0x88`, in the owner's frame. `FUN_009E2FC0`
  promotes a window by appending its inner to the renderer scene
  `renderer+0x6B9E0`, whose direct children are in screen pixels (the
  Politics/Bill case, P37).
- **GUI files**: `country_military` is centred, 1024x632 at (-512,-250),
  so (768,470) at 2560x1440; `build_unit_view_large` is a centred child at
  (-177,-233); horizontally 512-177 = 335.
- **Screenshot** (`work/tgcx-u8-1017/01-recruited.png`): the panel sits at
  about (342,90) screen pixels, which is the local translation (≈337,21)
  plus (5,69). The native Build Army column is at about (1105,490), which
  is (768,470) plus that same local translation. Both agree only if the
  matrix is parent-relative. The vertical local value (≈17–21) comes from
  the screenshot, not the GUI file: the engine does not centre on the full
  632 height. The fix reads the live matrices, so this number does not
  have to be predicted.

The 0.4.0 fixture placed a build root whose owner was the scene itself,
so it could not catch this (P40).

## 2. Change

`dll/tgcx/tgcx_templates_gui.h`:

- `tgcx_TplRootScreen` adds `+0x84` and `-0x88` along the `+0xE4` owner
  chain until it reaches `renderer+0x6B9E0`. It refuses a null owner, a
  cycle or more than 8 levels, and any node whose vtable is outside the
  image. A refusal keeps the panel closed and logs the existing "does not
  fit" line (R6).
- `tgcx_TplPlace` uses that screen position plus the unchanged (5,69)
  layout offset. Promotion still happens only when the panel opens; the
  100 ms tick re-places without raising it.
- When it opens, it logs `Templates anchor: root local x,y, screen x,y
  through N owner levels`: the runtime evidence this report lacks.
- Version marker `TGCX TPL-0 0.4.1`; `tools/install_dll.py` recognises
  0.4.1 as the build to install and accepts 0.4.0 as a known installed
  proxy.

Unchanged: recruit/command path, local preference file, generated GUI and
submod (byte-identical to 0.4.0), guards (no new native address is called;
the read offsets are recorded in `symbols.md`).

## 3. Verification

| gate | result |
|---|---|
| `tools/check_exe.py` | ALL OK |
| `tools/build_dll.ps1` | built, 91 signatures |
| `tools/test_dll.ps1` | `tgcx_tests: ALL OK`; 8 installer tests OK |
| new reference-engine cases (`tests/tgcx_bill_tests.h`) | translated Military parent (768,470) + root (335,17) → packed (1108,556), and render translation (1108,-556) matches; the 0.4.0 result (340,86) is not reproduced; refusals for a chain without the scene, a cycle and a non-image vtable; the earlier top-level case still gives (405,269) |
| `tools/test_templates_gui.py` | 4 OK |
| `tools/test_install_dll.py` | 8 OK |
| `tools/tgc_scan.py` on v2.5.2 | anchors and range OK |

These run the engine's own foreground/position code on synthetic objects.
They do not prove the live chain has this shape: the anchor log line and
a screenshot do.

## 4. Installation and rollback

The game was not running (`Get-Process`). Installed DLL SHA-256
`350299EF4EE1F726161FA7DAD770AB2A282EA2EA50D25D56BA4F96FEBE2EB8CA`;
`lua51_real.dll` remains the verified original. The 0.4.0 DLL
(`2DCBF718…39D1B`) is retained at
`E:\v2re\logs\tgcx-tpl-place-1017\before-dll\lua51.dll`, and its dry-run
reinstall passes. The 0.3.5 rollback in `tgcx-tpl-panel-1017` is unchanged.

## 5. Still open (R10, board 5)

- The game screenshot after this repair (U-8).
- The panel's transparent right part lies over the native queue now that
  it is placed correctly. Check that the queue's entries and its cancel
  button still take clicks; if the promoted window swallows them, the
  panel's hit area must be narrowed.
- Native list behind the panel: it should now be covered; confirm.
- Polish from the panel report: selection border, tab marker, miniature
  composition icons, spacing, button art.
- Extended U-8 cases: partial capacity, repeated paused clicks, one
  regiment, close/tab/naval, fresh-process reload, completed units.
