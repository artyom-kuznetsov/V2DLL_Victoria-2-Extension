# MOD-1 - DLL modules: per-mechanic gates and one logic DLL (D15, D16)

2026-10-18. Started by the user the same day ("do as he suggested and lets
do mod-1"). MOD-0 runs 2-3 are not needed first: they feed MOD-2 (the
installer). Baseline: 0.6.5 (P47 fix, installed). Target: **0.7.0**.

Read first: `report-modular-scope-1018.md` §5, `report-v2dll-mod-slot-1018.md`
§3 and §7, `pitfalls.md` P24, P27, P47.

## Steps

1. **Per-mechanic gates.** The exe SHA-256 stays global (R2). The
   all-or-nothing signature check goes:
   - Every signature is still logged (`OK`/`BAD`).
   - The sites V2DLL owns (`report-v2dll-mod-slot-1018.md` §3.2: `0x285727`,
     `0x35BB50`, `0x1D74BE`, `0x282EC0`, `0x233826`, `0x1D77A0`, and
     `CPoliticsView` slot 10 `0xA0E480`) are logged as `FOREIGN` when they
     differ. They never block a module, because TGCX writes none of them.
   - **Ticks** (native final-Present and ordered-draw stages, `0x59A520`,
     `0x599F22`): needed by every module; their own two signatures.
   - **Templates** and **Conform**: their existing lists, plus the ticks.
     They no longer wait on the drawing hooks.
   - **Drawing and laws** (hemicycle, hover, Bill, Reforms): every other
     signature, as today.
2. **Drawing hooks chain.** `Direct3DCreate9`'s IAT slot may already point
   into another loaded module (V2DLL). Chain through it and log the owner.
   `CPoliticsView` slot 10 is no longer asserted native: TGCX still never
   writes it (P27). If drawing is rejected, the ordered-draw stage still
   ticks but draws nothing.
3. **One logic DLL, two loaders (D16).**
   - `tgcx.dll`: all the logic. It exports `tgcx_Init` (our loader) and
     `V2Mod_Init` (V2DLL's plugin API v1; `V2ModAPI.h` layout, marked
     `// from V2DLL`). Each call initialises once; `DllMain` does nothing.
   - `lua51.dll`: the Lua forwards plus a `LoadLibrary` of `tgcx.dll` from
     the game folder and a call to `tgcx_Init`. Without `tgcx.dll` it is a
     plain proxy and logs that.
4. **Build, install, tests.** `build_dll.ps1` builds both;
   `install_dll.py` installs, records and removes both files. The proxy
   rules are unchanged (never overwrite V2DLL or an unknown `lua51.dll`).
   Update `test_install_dll.py` and the native fixtures.
5. **Gates and stage.** All automatic gates; stage under
   `E:\v2re\logs\tgcx-mod1-1018\`. Install only after a normal exit, with
   backup `before-070-dll`. Report `docs/report-mod-1-MMDD.md`, marked
   "done, not tested in game" until the game check.

## Game check (user, after install)

TGC v2.5.2 + TGCX as usual. Same behaviour as 0.6.5: Reforms, Bill,
hemicycle, Templates, Conform. `tgcx.log` shows the loader line, `tgcx.dll`
initialised once, and per-module gate lines. With V2DLL nothing can be
checked yet: V2DLL cannot load a submod's DLL until it loads by a setting or
searches every `-mod=` (`report-v2dll-mod-slot-1018.md` §7).
