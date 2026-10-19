# Archived DLL-0 implementation handoff before U-4 — 2026-10-12

Superseded status after the in-game test; original follows verbatim.

---

# DLL-0 — Logging proxy implementation and handoff

Updated 2026-10-12. **Done, not tested in game.** Research instructions
and their handoff are preserved verbatim in
`docs/archive/instructions-dll-0-research-1012.md`.
Implementation evidence: `docs/report-dll-0-1012.md`.

## 1. Build

1. Run `python tools/check_exe.py` before using executable addresses.
2. Run `python tools/tgc_scan.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC_v2.5.2\TGC`.
3. Run `powershell -NoProfile -ExecutionPolicy Bypass -File tools/build_dll.ps1`.
   This regenerates `dll/tgcx/tgcx_signatures.h`, then builds `tgcx.vcxproj`
   with VS 2022 `v143`, Release/Win32, `/MT`, `/W4 /WX`.
4. Output: `dll/tgcx/Release/lua51.dll`. Builds and binary artifacts are
   ignored by git.

## 2. Implemented behavior

- `tgcx_exports.h` forwards the original's 128 exports to `lua51_real`.
  Export pragmas are attributed to V2DLL. The original shim itself
  requires the unchanged `lua5.1.dll`.
- `DllMain` opens `<exe folder>\Logs\tgcx.log`, records the actual base,
  checks the executable SHA-256 and all eight shared signatures, and
  installs nothing on failure. The signature generator records HIGHLOW
  relocations; expected operands are adjusted for ASLR (P24).
- The in-memory CALL at RVA `0x285727` is retargeted to our thunk, which
  tails to `FUN_009DF2B0`, RVA `0x5DF2B0`. Both functions derived from
  V2DLL's shape carry file attribution. Flags, general registers,
  x87/SSE state and LastError are preserved. No simulation patches,
  MinHook, `PinFpu()` or worker threads are included.
- Every ten real seconds on the game thread, a guarded snapshot checks
  world/manager pointers, player index/tag and country identity, then
  logs the upper-house array from country `+0x8B0/+0x10`. Nine entries
  reflect TGC v2.5.2's declared ideology count. File-order labels remain
  explicitly unconfirmed; allocation length and zero-valued index
  mappings are not inferred as established facts.
- All fractions and percentages use integer arithmetic. Invalid raw
  values are logged for diagnosis. Main-menu nulls are quiet; invalid
  accesses are caught by SEH. This behavior still needs the actual
  main-menu and save/load checks in U-4.

## 3. Automatic verification

1. Run `powershell -NoProfile -ExecutionPolicy Bypass -File tools/test_dll.ps1`.
2. Expect `tgcx_tests: ALL OK` and eight Python tests passing. Native
   fixtures cover SHA-256, relocated signatures, guarded reads,
   corrupted CALL refusal, real thunk execution and state preservation.
3. The real loader fixture verifies all 128 ordinals and executes Lua
   through the proxy. Its unsupported host logs SHA mismatch and skips
   every game address and hook. Installer tests exercise round trips,
   refusals, idempotence, rollback and retained backups.
4. Run `python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --dry-run`.
   It checks the reference game, original size/hash, source exports and
   that the game is closed; changes nothing.

## 4. Installer and user test

Installation was not performed in the implementation session. The
user's next card is **U-4**, with step-by-step instructions in
`docs/instructions-u-4.md`. Installation renames the verified original
to `lua51_real.dll`; removal retains the proxy under an `.off` name and
restores the original. Identity records prevent claiming foreign files.

## 5. Completion gate and integration

1. Release/Win32 build: no warnings or errors — passed.
2. Automatic executable/TGC/signature/native/Lua/installer gates — passed.
3. Actual game startup and main menu: no new errors or upper-house
   samples outside a game — **U-4 pending**.
4. Real upper-house samples match the Politics pie chart, including the
   player's identity and the sum — **U-4 pending**.
5. Write a new U-4 report for the evidence; retain the implementation
   report unchanged. Update `docs/symbols.md` confidence only for facts
   confirmed by the log/chart. Multiplayer remains deferred by D5.

DLL-1 starts after U-4 passes. If a gate fails, repair this card first.
No game files, TGC files, executable or third-party projects enter git.
