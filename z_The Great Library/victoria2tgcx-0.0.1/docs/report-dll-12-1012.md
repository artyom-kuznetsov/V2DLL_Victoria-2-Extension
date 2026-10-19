# DLL-1 + HEMI-1 — Combined implementation and installation

2026-10-12. **Done, not tested in game.** User requested both DLL stages
and fewer iterations; no DLL-2 card existed, so the second stage is
HEMI-1. This supersedes the rectangle-only scope, archived verbatim.
One U-5 batch will validate both cards. No game was launched by the agent.

## Result

Build 0.2.0 adds a read-only 100-seat/seven-row hemicycle over the native
upper-house pie, with live engine ideology indices/colours and seat-count
percentage tooltips. Politics show/hide/destruction and live root visibility
gate drawing; window geometry comes from engine fields. Present supplies
ten-real-second diagnostic samples in menus, pause and advancement, gated
by valid game data. EndScene supplies the drawing point inside the native
scene. No simulation state, script, GUI file or TGC file was changed.

## Scoped reverse engineering (C = confirmed in code, not live game)

All Ghidra output stays outside git in `E:\v2re\logs\dll12-*.txt`;
`ghidra/tgcx_InspectBounded.java` is our bounded read-only inspector.

| evidence | finding |
|---|---|
| `UpdateTimeThrottle`, VA `0x00685620` / RVA `0x285620` | DLL-0 call RVA `0x285727` is conditional on time advancement and a throttle. It cannot establish a paused/menu frame service (P25). 0.2.0 does not install this hook. |
| PE import table | `Direct3DCreate9`, IAT RVA `0x88A39C`; replaced only when the current pointer equals the loaded D3D9 export. |
| `CPoliticsView` vtable VA `0x00E0E458` / RVA `0xA0E458` | slots 1/2/4/10 = destructor/show/hide/tooltip; original RVAs `0x2D2B00`, `0x2D2C10`, `0x2D2C40`, `0x2D2DD0`. Tooltip return buffer and element are stack arguments, `ret 8`. |
| `FUN_006D2C10` / `FUN_006D2C40` | native root at view `+0x4C`, root show/hide virtual slots `+0x20/+0x24`. |
| `FUN_009E4450` / `FUN_009E4030` (RVAs `0x5E4450` / `0x5E4030`) | root visible byte `+0x67`; validate these virtual functions before trusting the root layout. |
| `FUN_009E3BA0` (RVA `0x5E3BA0`) | root `+0x250` packs signed centred x/y; renderer at root `+0x90`, resolution at renderer `+0x6B9BC/+0x6B9C0`; pixel origin = half resolution plus signed offsets. |
| `FUN_009793C0` (RVA `0x5793C0`) | upper-house vector begin `+0x10`, end `+0x14`; length `(end-begin)/8`. Read actual end before accessing any mapped slot. |
| parser VA `0x008FD801` / RVA `0x4FD801`, lookup `FUN_00973BD0` / RVA `0x573BD0` | ideology-manager global VA `0x01258A3C` / RVA `0xE58A3C`; lookup uses manager `+4` bucket count, `+8` buckets, nodes `(object,next)`, object name string `+0xC`, size `+0x1C`, capacity `+0x20`. Hash `(hash+byte)*61`. |
| `CIdeology` constructor `FUN_00972260` / RVA `0x572260`; parser `FUN_00972B20` / RVA `0x572B20`; `CColor` parser `FUN_009B6EA0` / RVA `0x5B6EA0` | ideology index `+0x28`; colour object `+0x2C`, normalized RGB floats at ideology `+0x34/+0x38/+0x3C`. Name object vtable RVA `0xA36774` is checked. |

The DLL resolves all nine TGC names by bounded read-only lookup (64 nodes
per bucket maximum). It checks nine unique nonzero indices inside the
actual ten-entry vector, reserved index zero = zero, colour components
finite/in [0,1], upper-house vtable RVA `0x9FD7DC`, country identity and
province ownership vector. Unexpected layouts retain the pie. The
fixture's indices 1..9 are synthetic evidence; only U-4's 1/2/6 are already
confirmed in Victoria II. U-5 must establish the complete live mapping.

## Rendering and safety

Interface route **A**, native D3D9 primitives. The original chart and
legend are untouched. A solid panel covers the pie only when valid data
can be drawn. Largest remainder apportions 100 seats using integer
arithmetic; ties use engine index, totals 32759..32768 tolerate fixed-point
quantization. Blocs fill outer rows first in descending seat count,
matching the Main mockup. All 100 outlined dots are batched in one draw.

Create9/CreateDevice acquisition retains original arguments and callbacks.
Shared COM tables have eight bounded records per factory/device family;
original executable functions must belong to committed image modules,
whose owners are pinned. Pointer replacements compare-and-swap the
validated original; startup and device partial failures attempt rollback.
No worker thread, FPU-preserving device-creation flag change or frame cap
is introduced. Unknown executable/hash/signatures skip hooks and leave
all 128 Lua forwards active.

Game view thunks preserve flags, registers, x87/SSE and LastError;
COM injected work saves/restores floating-point state and LastError before
forwarding. Each chart draw captures/applies D3DSBT_ALL and releases its
state block before returning. Tooltip textures/DC/font objects are owned
and released within that draw. No GPU resource persists across Reset.
The original pie tooltip is suppressed only over a freshly drawn chart
(250 ms freshness bound); seat tooltips report ideology, seats and percent.

Microsoft's [CreateStateBlock documentation](https://learn.microsoft.com/en-us/windows/win32/api/d3d9/nf-d3d9-idirect3ddevice9-createstateblock)
defines capture of device state; [DrawPrimitiveUP documentation](https://learn.microsoft.com/en-us/windows/win32/api/d3d9/nf-d3d9-idirect3ddevice9-drawprimitiveup)
states stream 0 becomes null after drawing. The real-device test explicitly
checks its original buffer, offset and stride are restored, as well as
render and texture-stage state.

V2DLL provenance: view/tooltip thunk ABI and Create9/CreateDevice
acquisition patterns have `// from V2DLL: V2TechButton.cpp` annotations.
Renderer, allocation, lookups, guards and tests are our code. No third-party
source/art, executable bytes beyond narrow signatures or Ghidra projects
were copied into the repo. All game addresses are RVAs plus load base.

## Verification

- Reference executable SHA-256 and **16 signatures**: ALL OK.
- TGC v2.5.2 inventory, anchors and event range: OK.
- Shared signature header/relocations: ALL OK. check_exe now uses PE section
  mapping so `.rdata` vtable signatures are checked correctly.
- Release/Win32 v143 `/MT /W4 /WX`: built with zero warnings/errors.
- Native fixtures: bounded vector at a guard page, null/loading reads,
  bad indices/duplicates/short vector, relocation mismatch rejection,
  registers/flags/x87/SSE/LastError and CALL forwarding passed.
- Real D3D9 in an invisible owned window: actual guarded IAT/view startup,
  CreateDevice chain, pixel readback with all 3 UK colours, 83/5/12 seat
  allocation, 100 dots, tooltip rasterisation/ABI/suppression, state/stream
  restoration, paused Present sampling, show/hide/destruction, Reset and
  draw after Reset passed. All device references released to zero.
- Eight installer tests: refusal/rollback/round-trip/idempotence/tampering,
  running-game gate and all 128 original Lua forwards passed; real Lua
  executes `return 6*7` as 42 through the proxy.
- Normal DLL imports: USER32, GDI32, KERNEL32 (dumpbin). No extra runtime
  DLL dependency or Lua export change. Text uses power-of-two textures.

Generated GPU preview: `E:\v2re\logs\tgcx-render-fixture-1012.png`
(outside git); inspected next to `mockups/1-politics.png`. It demonstrates
our renderer, **not an in-game screenshot**. Real game errors, menu,
pause/load coverage and modal layering still require U-5. MP deferred (D5).

## Mockup differences and limits (R10)

1. The seven-row 100-dot layout, bloc colours and UK 83/12/5 distribution
   match the mockup's core chart. Native chart area is kept within the
   existing panel; dot spacing is fitted to that area.
2. The pie-cover panel is solid `0xDCDCD2`, rather than the exact TGC
   background texture. Reason: native primitives keep this build independent
   of copied art/GUI overrides. The native legend's order is retained.
3. Tooltip uses installed Windows Georgia and plain English ideology
   names, rather than the engine's font/localisation renderer. Reason: its
   text renderer API is not established. No font file is redistributed.
4. Seat count is fixed at the mockup's 100 in this first implementation;
   the future configurable N setting is not exposed.
5. Route A draws late in the native scene; an event/other popup overlapping
   the chart could show dots above it. This is not proven in game; U-5
   must report it. No unverified modal offsets or simulation writes were
   added to hide it. Nonmatching viewport/root/data disables the overlay.

No mechanic changed, so no mockup republish was required. The side-by-side
**game screenshot** comparison remains pending U-5.

## Actual installation (agent performed, game closed)

Game: `E:\Victoria.II.v3.04.Inclu.ALL.DLC`.
Active `lua51.dll`: 528,384 bytes, SHA-256
`d1d556c793c3857834bbc0454b45fc32ca64bd33f129a43ff57ef3401fdff822`.
Verified original `lua51_real.dll`: 11,264 bytes, SHA-256
`b2ba19343691f22d1af1417f9a7cbaeae74ba820a2a412f5a6cdea271cc1a7b0`.
Prior tested DLL-0 retained as `lua51_tgcx.dll.off`, SHA-256
`a1388614d332d1fa9b5567835169956794259eca52c53eeaf49fa922f628b74f`.
Installation record says `DLL-1+HEMI-1`; reinstallation check is idempotent.
The earlier U-4 log remains preserved. No commit was created.

Next: `instructions-u-5.md`, one combined user game test.
