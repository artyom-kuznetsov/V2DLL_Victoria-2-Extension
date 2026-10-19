# MOD-1 report: per-module gates and one logic DLL (0.7.0)

2026-10-18. Card MOD-1 (D15, D16), from `instructions-mod-1.md`. Started by
the user the same day ("do as he suggested and lets to mod-1 right?"),
following maxioten's advice: one DLL with the logic, loaded by a thin main
DLL. **Built, staged, all automatic gates green; installed on E: the same day
after a normal exit (§3); done, not tested in game.** Baseline: 0.6.5 (installed on E:).

## 1. What changed

### Per-module gates (step 1)

The SHA-256 check of `v2game.exe` stays global (R2). The signature check is
no longer all-or-nothing:

| Gate | Signatures | Without it |
|---|---|---|
| Stages | `0x59A520` final Present, `0x599F22` ordered draw | nothing is installed (every module ticks from them) |
| Drawing + laws (hemicycle, hover, Bill, Reforms) | every signature not listed in another row | original pie, no Bill, no Reforms tab; Templates and Conform still work |
| Templates (+ GUI) | `tgcx_tpl_rvas`, `tgcx_tpl_gui_rvas` (unchanged lists, now at file scope) | no Templates tab, no Conform |
| Conform | `tgcx_cf_rvas` | no Conform button |
| Foreign (V2DLL's sites) | `0x285727`, `0x35BB50`, `0x1D74BE`, `0x282EC0`, `0x233826`, `0x1D77A0`, `0xA0E480` | logged `FOREIGN`, blocks nothing (TGCX writes none of them) |

Every signature is still logged (`OK`, `BAD` or `FOREIGN`). The log ends
with `Modules: drawing+laws=… templates=… conform=…`.

### Drawing hooks chain (step 2)

- `tgcx_InstallNativeStages` installs only the two stage hooks. The scalar
  hover moved into `tgcx_InstallRenderer`, the drawing install.
- The `Direct3DCreate9` IAT slot may point into another module. TGCX chains
  through it and logs that module's path. A slot that is not executable is
  still refused.
- `CPoliticsView` slot 10 (tooltip) is no longer asserted native. TGCX still
  never writes it (P27). Slots 1, 2 and 4, which TGCX replaces, must still
  be native.
- `tgcx_drawing_enabled` gates the ordered-draw callback and the 10-second
  upper-house sample. With drawing rejected, the stages still tick
  Templates and Conform.

### One logic DLL, two loaders (step 3, D16)

- **`tgcx.dll`** (`dll/tgcx/tgcx.vcxproj`, `TargetName=tgcx`) holds all the
  logic and no Lua forwards. Its `DllMain` installs nothing. It exports:
  - `tgcx_Init(const char* loader)`, called by our loader;
  - `V2Mod_Init(const V2ModAPI*)`, V2DLL's plugin API v1. The struct layout
    is copied from V2DLL's `V2ModAPI.h`, marked `// from V2DLL` (R8). It
    checks `size` and `apiVersion == 1` and uses only `Log`.
  - Both call `tgcx_Initialize` once; a second call is logged and ignored.
    `tgcx.dll` pins itself before patching.
- **`lua51.dll`** (`dll/tgcx/loader/`, `tgcx_loader.cpp`): the 128 forwards
  (`tgcx_exports.h`) plus `LoadLibraryExW("<game folder>\tgcx.dll")` and
  `tgcx_Init("TGCX loader MOD-1 0.7.0")`. Without `tgcx.dll`, or without
  the export, it stays a plain Lua proxy and writes one line to
  `Logs\tgcx.log`.
- The load happens inside the loader's `DllMain`, as the hooks did before.
  `tgcx.dll` imports only `KERNEL32` and `SHELL32` (`dumpbin /dependents`),
  both already loaded by the game.

### Build, install, tests (step 4)

- `tools/build_dll.ps1` builds `tgcx.dll`, then the loader, into
  `dll/tgcx/Release/`.
- `tools/install_dll.py`:
  - installs the loader and the `tgcx.dll` beside it;
  - records `logic_sha256` and `logic_source` (card `MOD-1`);
  - refuses a `tgcx.dll` in the game folder that its record does not name;
  - removes both (`lua51_tgcx.dll.off`, `tgcx.dll.off`).
  - A single-file build (0.6.5 and earlier) still installs as a rollback,
    and the `tgcx.dll` is set aside as `.off`. The proxy rules are
    unchanged: it never overwrites V2DLL or an unknown `lua51.dll`.
- New tests:
  - Native: a FOREIGN site blocks nothing; a Templates-only site does not
    gate drawing; a hover site does gate it; the stages install on their
    own; a chained IAT rolls back on a hover failure; a foreign slot 10 is
    left alone.
  - Installer: an unknown `tgcx.dll` is left untouched; a loader without
    its logic DLL is refused; rollback to 0.6.5 and back. The real-forwarding
    probe shows `tgcx.dll` loaded by the loader, and the loader alone logs
    `tgcx.dll not loaded`.

## 2. Gates (2026-10-18)

- `tools/build_dll.ps1` OK. Exports measured with `dumpbin /exports`:
  - `tgcx.dll` exports `V2Mod_Init` and `tgcx_Init`;
  - `lua51.dll` exports 128 forwards, and its only import is `KERNEL32.dll`;
  - `tgcx.dll` imports `KERNEL32.dll` and `SHELL32.dll`.
- `tools/test_dll.ps1` OK:
  - signatures OK (153);
  - `tgcx_tests: ALL OK`;
  - installer 11/11.
- `check_exe: ALL OK`; `test_conform_gui.py` OK; `test_templates_gui.py` OK.
- `install_dll.py --dry-run` on E: with the staged loader: all gates OK, no
  files changed.
- The submod is unchanged from 0.6.4/0.6.5.

## 3. Stage and install

- Staged in `E:\v2re\logs\tgcx-mod1-1018\stage-070\`:
  - `lua51.dll` SHA-256 `2805cfcd…7144`;
  - `tgcx.dll` SHA-256 `ec9ed8b9…36d7`.
- Install after a normal game exit. First back up the installed 0.6.5 proxy
  and its record to `E:\v2re\logs\tgcx-mod1-1018\before-070-dll`, then run:
  `python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --source E:\v2re\logs\tgcx-mod1-1018\stage-070\lua51.dll`.
- **Installed 2026-10-18**: 0.6.5 (`lua51.dll` `9528c982…` and
  `tgcx_dll_install.json`) copied to `before-070-dll`, then the command above.
  Installed `lua51.dll` and `tgcx.dll` hashes equal the stage; record card
  `MOD-1`.
- Rollback: `--source E:\v2re\logs\tgcx-law3-1018\lua51-0.6.5.dll`. This
  sets `tgcx.dll` aside.

## 4. Game check (user)

Play TGC v2.5.2 + TGCX as usual. Reforms, Bill, hemicycle, Templates and
Conform should behave exactly as in 0.6.5. `Logs\tgcx.log` should show:

- `TGCX MOD-1 0.7.0 tgcx.dll loaded_by=TGCX loader MOD-1 0.7.0` once;
- `Module gate drawing+laws: signatures OK`;
- `Modules: drawing+laws=1 templates=1 conform=1`.

Nothing can be checked with V2DLL yet. V2DLL cannot load a submod's DLL
until it loads by a setting or searches every `-mod=`
(`report-v2dll-mod-slot-1018.md` §7).

## 5. Deviations and open points

- No interface change, so there is no mockup to compare against (R10).
- When `V2Mod_Init` runs after V2DLL has already created the D3D device,
  the device-level Present/Reset hooks never attach. Those hooks only reset
  chart flags, so drawing still works. It cannot be observed until V2DLL
  can load us.
- Found while updating the docs: earlier shell heredocs had turned the
  backslashes of four `E:\v2re\…` paths into control characters, in
  `AGENTS.md`, `NEXT.md` and `docs/symbols.md`. They are repaired.

## 6. Game check (user, 2026-10-18): passed

The user played TGC v2.5.2 + TGCX as England on 0.7.0 and reported that
"everything works rather normally". `Logs\tgcx.log` (331 lines, measured with
`grep`):

- `tgcx.dll` was loaded once, by the loader (line 1). `OK sha256`.
- 153 `OK RVA` lines, with no `BAD` and no `FOREIGN`.
- `Module gate drawing+laws: signatures OK`, then the drawing install, the
  Reforms hooks, Templates and Conform.
  `Modules: drawing+laws=1 templates=1 conform=1`.
- The Direct3DCreate9 slot was native (no chaining line), and two D3D9
  device tables were hooked.
- In play:
  - hemicycle first draw;
  - Bill: 21 of 21 buttons bound;
  - Reforms tab: 15 rows lit, a bill presented and opened from the tab;
  - favours collected;
  - Templates: 6 and then 2 regiments queued, none left out;
  - Conform on stack 165: 6 built, 0 failed.
- Four unit panels were `gone without its destructor`, and each slot was
  freed. This is the P47 path working as designed, and it is the first live
  confirmation of P47's cause (`report-tpl-1-slots-1018.md`).
- No `rejected`, `disabled`, fault or `table full` line.

MOD-1 is done. V2DLL loading (`V2Mod_Init`) is still untested, as §4 says.

## 7. V2DLL plugin entry without the game (step A, 2026-10-18)

New mode `tgcx_tests.exe plugin <tgcx.dll>` (`tests/tgcx_tests.cpp`), driven
by `test_install_dll.py::test_v2dll_plugin_entry`. It loads `tgcx.dll` the
way V2DLL loads a plugin (`LoadLibrary`, then `V2Mod_Init`) with a fake
`V2ModAPI` v1 whose `Log` is captured. The host is not `v2game.exe`, so the
run stops at the SHA-256 gate on purpose. Checked:

- Both exports resolve under their plain names.
- `DllMain` installs nothing and writes no log.
- A null API, a short struct and `apiVersion=2` are all refused, without
  initialising or logging.
- A valid call initialises once (`loaded_by=V2DLL plugin API v1`, then
  `BAD sha256`), returns 0 and reports through V2DLL's `Log`
  (`TGCX: not initialised`).
- A later `tgcx_Init` or `V2Mod_Init` is logged as ignored.

The `V2ModAPI` struct moved outside `#ifndef TGCX_TEST` so the fixture can
share its layout. Its comment now names V2DLL upstream `9821c27`; the clone's
`5d6f894` has no plugin API. The code is unchanged. The rebuilt DLLs differ
from the installed ones only by build timestamps. The same probe was also run
on the **installed** `tgcx.dll` (`ec9ed8b9…`), with the same log: ALL OK.

Gates: `tgcx_tests: ALL OK`, installer suite 12/12, `check_exe: ALL OK`.

Not covered: V2DLL's own loader (its `LOAD_DLL_FROM_MOD_FOLDER` setting and
first-`-mod=` lookup), the loader lock, and coexistence with V2DLL's patches
in game. Those need the in-game step B.
