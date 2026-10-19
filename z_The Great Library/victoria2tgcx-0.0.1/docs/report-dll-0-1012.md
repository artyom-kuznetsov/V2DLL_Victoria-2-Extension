# DLL-0 implementation — 2026-10-12

**Status: done, not tested in game.** No game installation or game launch
was performed. U-4 is the next required gate. GH-2 remains C/I, without
runtime evidence from Victoria II.

## Deliverables

- `dll/tgcx/tgcx.vcxproj`: VS 2022 `v143`, Release/Win32, C++17, `/MT`,
  `/W4 /WX`, ASLR and DEP; output `dll/tgcx/Release/lua51.dll`.
- `tgcx_exports.h`: the original's 128 names/ordinals forwarded to
  `lua51_real`, checked with `dumpbin /exports` and `tools/tgcx_pe.py`.
- `tgcx_dllmain.cpp`: Win32-only proxy, executable SHA-256 and signature
  gates, guarded frame CALL retarget, read-only ten-second upper-house
  logging, no game-state writes or worker threads.
- `tgcx_sha256.h`: original integer SHA-256 implementation, avoiding
  provider loading while inside `DllMain`.
- `tools/gen_signatures.py`: table derived from `check_exe.SIGNATURES`,
  the reference executable's relocation metadata, and nine ideology-name
  candidates from installed TGC v2.5.2. Build checks for stale output.
- `tools/install_dll.py`: dry run, original size/hash gate, reference game
  hash, export validation, running-game refusal, staged installation,
  identity record, rollback on caught installation failure, and removal
  by renaming. Existing backups and proxies are never overwritten.
- `tools/build_dll.ps1`, `tools/test_dll.ps1`, native fixture tests and
  eight installer/real-Lua tests. All binaries and test logs are ignored.

The built DLL measured **499,200 bytes** with `Get-Item`; SHA-256 from
`Get-FileHash`:
`a1388614d332d1fa9b5567835169956794259eca52c53eeaf49fa922f628b74f`.
PE inspection and `dumpbin /dependents` show x86 machine `0x14C`, 128
exports and only `KERNEL32.dll` as a normal import. The forwarded Lua
library is resolved through the export directory, not the import list.

## V2DLL provenance (R8)

Reference: `E:\v2re\refs\V2DLL`, commit `5d6f894`.

| file/function | material used | attribution |
|---|---|---|
| `tgcx_exports.h` | `lua51_exports.h`, export pragmas | file begins `// from V2DLL: lua51_exports.h ...` |
| `tgcx_FramePumpThunk` | `V2TechButton.cpp`, `FramePumpThunk` tail-jump shape | function comment names V2DLL/file |
| `tgcx_PatchFramePumpCall` | `V2TechButton.cpp`, `PatchFramePumpCall` rel32 retarget | function comment names V2DLL/file |

MinHook and simulation/economy patches were not brought in. `PinFpu()`
was not copied. Our hook additionally preserves flags, x87/SSE state and
the thread's last-error value before tail-jumping to the original pump.

## Addresses and guards

All code addresses are `base + RVA`. The existing signature table now
contains **eight signatures**, including the frame-pump call added in
the earlier handoff. Together with SHA-256, `check_exe.py` runs nine checks.
Two signatures include relocated absolute operands: the main-menu label
and `CUpperHouseTrigger::Evaluate`. The generator identifies their HIGHLOW
relocations and the DLL adjusts the expected operands for its actual base.
No bytes are wildcarded (P24).

Existing address evidence: `docs/symbols.md`, RE `Symbols/structs.csv`,
V2DLL `PATCHES.md` §5.9 and the earlier handoff. The log records:

- `g_world` RVA `0xE588E8`, `g_countryManager` RVA `0xE587E4`;
- World `+0xB60/+0xB5C` player index/tag and `+0xAEC/+0xAF0` human vector;
- country `+0x20/+0x1C` index/tag; `+0x9D8/+0x9DC` province vector;
- country `+0x8B0`, array pointer at upper house `+0x10`;
- date hours at World `+0xB0C`, year `hours / 8760 - 5000`;
- CALL RVA `0x285727`, original pump RVA `0x5DF2B0`.

SHA mismatch rejects all game-address reads and hooks. Signature mismatch
rejects the patch. Null/invalid state is protected by bounds, identity
checks and SEH. Unexpected share values are retained as raw diagnostics
without overflowing fraction/percentage calculations. No live-country
data is read in `DllMain`. The DLL is pinned before a patch can leave a
call into it; removal requires closing the process.

The original `lua51.dll` is a shim importing `lua5.1.dll` (measured by
`dumpbin /imports`), not the whole Lua implementation. The installer keeps
both dependencies intact. Verified original SHA-256:
`b2ba19343691f22d1af1417f9a7cbaeae74ba820a2a412f5a6cdea271cc1a7b0`.

## Validation

| check | result |
|---|---|
| `python tools/check_exe.py` | SHA-256 + all eight signatures OK, `ALL OK` |
| `python tools/tgc_scan.py <TGC v2.5.2>` | anchors and reserved event range OK; nine ideologies |
| `tools/build_dll.ps1` | Release/Win32 build passed, zero warnings/errors with `/WX` |
| `gen_signatures.py --check` | all eight signatures match generated table |
| native fixture executable | `tgcx_tests: ALL OK` |
| `test_install_dll.py` | eight tests passed |
| installer dry run against E:\ game | all gates passed, no files changed |
| real game startup, main menu and chart comparison | **not tested; U-4 pending** |
| multiplayer | deferred by D5 |

The native tests exercise relocated signatures at an allocated base
(`0x01700000` in the final run), reject corrupted operands and CALL targets,
handle null worlds, invalid indices/tags and SEH pointer faults, and read
exactly nine shares immediately before a guard page. They run the actual
patched CALL through our thunk to a recorder, verifying registers,
arithmetic flags, x87/SSE state, last-error preservation and throttling.
SHA tests cover three known vectors and the full reference executable.

The Python tests copy reference files only into temporary folders outside
git. They exercise dry run/idempotence, two install/remove cycles with
retained backups, foreign DLL/backup refusal, executable mismatch, running
game refusal, tampered proxy refusal and injected write-failure rollback.
A real loader probe resolves all 128 ordinals to the original library and
executes `return 6*7` through Lua, obtaining 42. Its non-reference host
causes the production DLL to log SHA mismatch and skip all game addresses
and hooks, verifying the fallback behavior.

## Differences from the handoff and mockup

1. Nine entries are sampled, rather than twelve: TGC v2.5.2 defines nine
   ideologies, and the runtime allocation length is not yet confirmed.
   Reading three extra entries would be speculative. Names are explicitly
   labelled unconfirmed file-order candidates.
2. Player index/tag is the primary identity route; the human vector is a
   logged cross-check. This follows the handoff's simpler known offsets.
3. Export-directory forwarding requires no `LoadLibrary`/manual resolution
   in `DllMain`. Our own SHA code avoids crypto-provider loading there.
   `/MT` retains CRT thread notifications. Relevant Microsoft guidance:
   [DllMain](https://learn.microsoft.com/en-us/windows/win32/dlls/dllmain),
   [DLL best practices](https://learn.microsoft.com/en-us/windows/win32/dlls/dynamic-link-library-best-practices).
4. Source filenames carry `tgcx_` (R4); the loader-required output is
   `lua51.dll` and forwarding target is `lua51_real.dll`.
5. The Politics mockup (`mockups/1-politics.png`) was opened. DLL-0 has no
   visible interface and changes no mechanic or mockup. Hemicycle drawing
   waits for the later interface card.

## Handoff

Follow `docs/instructions-u-4.md`. Preserve the main-menu observations,
the real log and chart percentages. Compare them in a new U-4 report.
Do not promote the entire ideology mapping or array length from a single
chart whose other ideologies have zero seats.

The user also suggested REA for army templates. Its review and concrete
GH-4 evaluation steps are in `docs/rea-for-templates.md`; it was not
installed and does not block U-4.
