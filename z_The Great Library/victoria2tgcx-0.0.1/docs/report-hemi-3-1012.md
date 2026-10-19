# HEMI-3: native seat hover, build 0.2.6

2026-10-12. **Done, not tested in game.** Built, automatically checked and
installed reversibly on E: with the game closed. Only the user starts the
game. The accepted 0.2.5 DLL, descriptor, install record and log are retained
under `E:\v2re\logs\tgcx-before-026-1012`; previous proxy backups also remain.
The user requested HEMI-3 now and consideration of LAW-1 afterwards.

## Behavior and native evidence

The upper-house chart uses the existing 100 seats/seven rows and engine
names/colours. Hover identifies an actual seat using the same allocation,
geometry and 2.3-pixel outline radius used by drawing. The central hole,
gaps and outside positions have no chart tooltip. Native legend behavior,
tooltip text construction and UI ordering remain engine-owned.

Bounded, read-only Ghidra exports established two scalar paths:

- Politics CALL RVA `0x2D52C6` to FUN_009E0C90 (RVA `0x5E0C90`): entity
  in EAX, screen X/Y integers and two integer-output pointers on the stack;
  AL hit result, RET 16. Its slice output is the ordinal among positive
  upper-house shares in increasing engine index, not the engine index or
  political seating position. The second output is the native segment weight.
- Pie entity vtable slot RVA `0xA3BDA8`, original FUN_009E0B70 (RVA
  `0x5E0B70`): entity in ECX, screen X/Y floats followed by six unused stack
  words; FLD1/FLDZ result in ST0, **RET 32**. Updating this path lets the native
  picker recognize seats outside the original circle and reject empty gaps.

The CALL is retargeted; the native pie hit-test slot is guarded and swapped.
Both hooks delegate unrelated entities unchanged. They act only on the
exact named `chart_upper_house` entity owned by visible Politics, after a
successful draw. No native tooltip structure, string or slot 10 is replaced.
FUN_006D2DD0 continues building and destroying its complete native result,
including its normal no-hover path. Scalar writes are only to the original
helper's integer outputs; there are no simulation writes or engine commands.

Each query checks the published view/geometry, focus, frame age, current
country/world/date/shares, name-resolved engine ideology vector, and bounded
36-byte native slice records. Unsupported slice layouts retain the native
pie at draw time. Show/hide/destruction, failed presentation and Reset clear
hover ownership. As with the earlier renderer, loading faults are guarded.
Original registers/flags, x87/SSE and LastError are restored; the hit-test
adds only its required floating result. Four signatures were added, 27 total.
All code addresses use RVAs. V2DLL-derived hook preservation patterns are marked.

Private subsystem exports are `E:\v2re\logs\hemi3-*-1012.txt`;
`symbols.md` records VA/RVA conversions and field evidence. The new
`ghidra/tgcx_InspectRanges.java` exports only bounded instruction ranges,
read-only, to private output. No executable, TGC file, game art or decompiled
output enters git.

## Automatic verification

All passed on the final installed build:

| gate | result / preserved evidence |
|---|---|
| `python tools/check_exe.py` | reference SHA-256 and 27 signatures; `tgcx-hemi3-026-exe-1012.txt` |
| `python tools/tgc_scan.py <TGC v2.5.2> --out ...` | anchors/range OK; `tgcx-hemi3-tgc252-1012.json` |
| `tools/build_dll.ps1` | Release/Win32, `/W4 /WX`; `tgcx-hemi3-026-build-1012.txt` |
| `tools/test_dll.ps1` | native/real D3D9 checks and eight installer/Lua tests; `tgcx-hemi3-026-tests-1012.txt` |
| `python tools/test_gen_laws.py` | ALL OK; law scripts unchanged |
| DLL dry run/install/idempotence | exports, original hash, process and install-record gates pass; active hash equals source |

Logs above are under `E:\v2re\logs`. The fixture log is
`tgcx-hemi3-026-fixture-1012.log`. Native checks exercise all 100 UK seat
centres through the actual installed CALL target and native bounds slot;
all nine ideologies; positive blocs with zero seats; outline/hole/outside
positions; preserved scalar outputs on no-hit; changed shares; expired,
moved, hidden and reopened views; focus rejection; malformed native slices;
fallback/recovery; and unchanged structured tooltip slot 10. Both RET
conventions, registers/DF/LastError and x87/SSE restoration are checked.
Existing real-GPU pixel, feather, viewport/state, popup occlusion and Reset
checks pass. The generated 640x480 fixture BMP was visually inspected.

An initial **fixture** invocation mistakenly called a mid-function CALL site
as a function, inserting an extra return address. Its crash dump identified
a return into stack memory. The harness now resolves and invokes the installed
CALL target, matching the native stack. This was corrected before the final
passing build and before installation; no game launch/crash occurred here.

Installed/source DLL SHA-256:
`35465f6375813b8b3e71a71560fa382e31ccd3aba69ec35ded35e5155f3aba94`.
Original `lua51_real.dll` SHA-256:
`b2ba19343691f22d1af1417f9a7cbaeae74ba820a2a412f5a6cdea271cc1a7b0`.
Install record card: `DLL-1+HEMI-3`. The submod descriptor marks 0.2.6;
the normal installer regenerated its installed TGC-derived modifiers.

## Mockup and remaining evidence

Opened Main `mockups/1-politics.png` and the saved original 2560x1440 user
screenshot. HEMI-3 repairs existing hover behavior; it introduces no mechanic
or visual-layout change, so no artifact republish is required. The radius
selects the seat outline; its soft feather is deliberately excluded.
Background texture and native legend order (83/5/12 versus Main's 83/12/5)
remain the documented HEMI-2 deviations. Later ruler/law controls remain
outside this card. A fresh in-game screenshot comparison is still required.

Native caller/ownership evidence is confirmed in the executable; the hooks
and complete tooltip interaction are **not yet runtime-confirmed in game**.
No new clean game logs, menu occlusion, save/reload, date advancement or
Alt-Tab acceptance is claimed. One combined HEMI-3/U-5 run is next:
`instructions-u-5.md`. Preserve its log before any restart. LAW-1 discussion
follows acceptance; implementation has not started. New pitfall: P31.
