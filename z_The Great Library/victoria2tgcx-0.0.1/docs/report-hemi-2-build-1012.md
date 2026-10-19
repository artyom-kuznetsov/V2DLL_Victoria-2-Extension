# HEMI-2 — Recovered polish, check-runner repair and 0.2.5 install

2026-10-12. **Implemented, built and installed; not tested in game.**
The user reports a prior agent completed source polish but could not finish
the checks/build/docs. The prior 0.2.4 game-tested milestone is preserved.

## Diagnosis and changes

The source already contained HEMI-2 version 0.2.5, political left-to-right
seating (Liberal left, Conservative centre, Reactionary right for UK),
16-segment discs with alpha fringes and a feathered beige cover. The Win32
build and native/GPU tests passed directly; no rendering gate failure was
reproduced. When logging `tools/test_dll.ps1` with `*>`, Windows PowerShell
converted unittest's normal stderr progress into `NativeCommandError`
under `ErrorActionPreference=Stop`. `test_install_dll.py` now sends runner
output to stdout. Actual failures still produce a nonzero exit code and
are rejected by test_dll.ps1; no signature or compiler check was weakened.

The installer accepted 0.2.5 but its record classified HEMI-2 as DLL-0.
Fixed classification and checked it in the existing round-trip test.
Removed a stale renderer comment claiming font rasterisation. Added a real
GPU assertion for opaque panel core, partially blended feather and unchanged
pixels outside the panel. No new hook/address, native string manipulation,
simulation write, font, copied TGC art or GUI override was introduced.

## Mockup comparison and deviations (R10)

Opened Main (`mockups/1-politics.png`) and the real GPU readback fixture.
Retained 100 seats, seven rows and UK 83/5/12 allocation. The recovered
bloc sweep follows Main's visible Liberal-left/Conservative/Reactionary-right
presentation; engine names/colours and apportionment remain unchanged.
Smoothed outlines and a three-pixel feather replace hard primitive edges.
The GPU fixture confirms rendering, not final appearance on TGC's panel.

The native pie and decorative overlay still render before being covered,
so the background remains generated colour rather than the native texture.
Exact background integration needs the new game screenshot; it is not
claimed finished. Native legend keeps engine order (83/5/12 rather than
mockup 83/12/5) to preserve its ownership and tooltips. Seat hover still uses
native pie hit regions; per-seat ownership needs further verified engine
work. Other Main elements (ruler portrait etc.) belong to future cards.
No mechanic changed, so no mockup redesign/re-export was needed.

## Verification and installation

- Reference SHA and all 23 relocation-aware signatures: OK.
- TGC v2.5.2 anchors/reserved range: OK; scan saved outside git.
- Release/Win32 v143 `/MT /W4 /WX`: built without warnings.
- Real D3D9 pixels, seat ordering/counts, feather coverage, CPU/D3D restoration,
  ordered occlusion, paused callback, malformed-widget fallback and Reset: OK.
- Eight temporary-folder installer tests, exact 128 Lua exports and real Lua
  forwarding: OK against the newly built 0.2.5 DLL.
- Redirected full test script now completes successfully. Law checks: OK.
- Production dry-run process/original/executable/export gates: OK; game closed.

Installed DLL and fresh submod on E:. Descriptor comment marks release 0.2.5;
existing seven script/localisation files unchanged; event_modifiers generated
from installed TGC v2.5.2 plus our block. Installed/source DLL SHA-256:
`1ec1aea4fee87441a293358451ee15859cdf66435991abebe3a52370f5de5a1b`.
Install record now says `DLL-1+HEMI-2`. Original shim retained. Prior submod,
record and log copied to `E:\v2re\logs\tgcx-before-025-1012`; previous proxy
retained by the installer. Test log:
`E:\v2re\logs\tgcx-hemi2-025-checks-1012.txt`.

## Pending evidence

One combined U-5 run: polished Politics screenshot, tooltip/menu overlap,
view switch/reopen, date advance, save/reload and Alt-Tab. No 0.2.5 game
acceptance or visual approval is claimed. Only the user starts the game.
