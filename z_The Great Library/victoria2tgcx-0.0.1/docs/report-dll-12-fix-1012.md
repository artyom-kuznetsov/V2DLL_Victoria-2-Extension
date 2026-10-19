# DLL-1 / HEMI-1 follow-up: missing hemicycle

2026-10-12. **0.2.0 failed U-5. Revised 0.2.1 is installed, not tested in game.**
The user's screenshot shows the native pie. This report supplements, and does
not rewrite, `report-dll-12-1012.md`.

## Evidence and limit of the diagnosis

The retained log is `E:\v2re\logs\tgcx-u5-failed-1012.log`. All sixteen
startup signatures passed, two device callback tables were installed, and
Politics show/hide calls were seen. There is one timed `render frames=1`
line, no successful chart draw, and no upper-house snapshot. Timed logging
alone does not establish that only one callback ran. The old code silently
returned false on GUI/data checks and S_FALSE on viewport mismatch; the
log cannot identify which blocker occurred. **The game's precise failure
cause remains unconfirmed; this repair must still pass the game test.**

The local reverse-engineering repo (`e299a02`) was cross-checked: its
`Symbols/globals.csv` supplies the renderer global and focus byte. V2DLL
(`5d6f894`) supplies the attributed hook/acquisition patterns. Nothing was
copied from TGC or the executable into git. Scoped Ghidra exports are
private `E:\v2re\logs\dll12-fix-*.txt`.

## Confirmed engine sites and repair

- Final presentation function FUN_0099A520, **RVA 0x59A520**. Input is ESI,
  native renderer; INC `[ESI+0x6BC8C]` at entry is six bytes and is replicated
  exactly. The continuation is **RVA 0x59A526**. It tests renderer focus
  `+0x6BCA0` and calls the active device `+0x64`, COM Present slot 17.
  References are VA 0x00660F07 / RVA 0x260F07 (menu) and VA 0x007560D3 /
  RVA 0x3560D3 (game view). Those references are research evidence, not patch sites.
- Native renderer primary vtable **VA 0x00E38324 / RVA 0xA38324**. Constructor
  FUN_009941E0 (RVA 0x5941E0) sets it and creates the D3D9 device at +0x64.
  New signatures guard both the function entry and renderer vtable.
- GUI factory FUN_009A38F0 (RVA 0x5A38F0) calls FUN_009CDE70 (RVA 0x5CDE70),
  constructing the native root through FUN_009E16C0 (RVA 0x5E16C0). Its
  vtable VA 0x00E3C0D8 / RVA 0xA3C0D8 shares the previously checked
  show/hide and centred-position methods. Existing GUI offsets were retained.

0.2.1 runs the sampler and overlay immediately before the final engine
Present. It opens its own short BeginScene/EndScene after native drawing.
Intermediate/loading EndScene callbacks only forward to their originals.
The active device can be acquired again here if its table differs from the
one seen at CreateDevice. This removes reliance on early device callbacks
as the only drawing/cadence entry.

The renderer verifies the active target is the screen-sized backbuffer,
captures all state, sets its own full-screen viewport, draws and restores
state. It no longer silently requires the inherited viewport to already
be full-screen. No render-target or depth-surface switches are introduced.
CPU registers/flags, x87/SSE, LastError and original presentation behavior
are preserved. The native renderer frame increment is the original engine
instruction, not a simulation write. No polling thread was added.

Failed GUI/data checks now name their stage in the log, with the vector
length, candidate name and read-fault flag where relevant. Logging occurs
on the first visible attempt and at most every ten seconds thereafter.
No failed safety check is bypassed. The pie remains if drawing is refused.

## Verification and installation

- `python tools/check_exe.py`: reference SHA-256 and **18 signatures ALL OK**.
- `python tools/tgc_scan.py <installed TGC v2.5.2>`: anchors/range OK;
  nine ideology candidates, 4,280 events, none in the reserved range.
- Release/Win32 v143 `/MT /W4 /WX` build: passed, zero warnings.
- Native tests: passed. Real D3D9 without FPU_PRESERVE; intermediate
  EndScene cannot draw; the actual patched native entry in owned fixture
  memory replicates its INC and produces GPU pixels outside an inherited
  `(11,17,180,140)` viewport, then restores that viewport. Pause, hide,
  Reset and renderer/CPU state tests also pass.
- Eight installer/Lua tests: passed, including forwarding and wrong-host
  refusal. Installer recognizes both old and revised proxies.
- Installer dry run and installation on E: passed after the user confirmed
  the game was closed. Source and installed SHA-256:
  `5c339c2174393839a6943894b2cb49479686c706152c94f233dfb4594ce57356`.
  Original `lua51_real.dll` retains hash
  `b2ba19343691f22d1af1417f9a7cbaeae74ba820a2a412f5a6cdea271cc1a7b0`;
  tested DLL-0 remains `lua51_tgcx.dll.off` with its previous hash.

Mockup `mockups/1-politics.png` was reopened. Geometry/mechanic are unchanged:
100 seats, seven rows, same panel and hover. The plain background, Georgia
font and native legend ordering deviations remain those documented in the
original report. The supplied failed screenshot has **no hemicycle**, so
visual acceptance is failed for 0.2.0 and still pending for 0.2.1. No mockup
mechanic change or re-export was needed. Multiplayer remains deferred.

Next: `instructions-u-5.md`. Keep the game open if the chart is absent so
its live read-only state can be inspected before another replacement.
