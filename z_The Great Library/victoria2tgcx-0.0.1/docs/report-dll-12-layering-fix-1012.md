# DLL-1 / HEMI-1: native UI layering repair

2026-10-12. **0.2.3 works in game but fails layering acceptance.
0.2.4 built/tested/installed on E:, not tested in game.** Supplements
previous reports without rewriting them. User: "it works! but its like
displayed on top of everything", with a Politics screenshot showing a
native tooltip covered at its left edge by the chart panel and a separate
seat tooltip above it.

## Confirmed game evidence

0.2.3 removed the invalid structured-tooltip return hook (P27). The user
confirmed drawing, and the run continued until normal exit: final log
147442 native frames, 85103 chart draws, Politics view 0x4E9B2890, chart=1,
then native hide/destruction. This establishes repeated drawing and no
recurrence of the reported tooltip crash in that run; it does not establish
all save/reload/Alt-Tab checks. Active TGC252_TGCX error.log and
system_error.log were both zero bytes. Preserved log:
`E:\v2re\logs\tgcx-u5-023-layering-closed-1012.log`.

## Cause and implementation

Final Present occurs after the native interface is painted. Drawing the
chart there necessarily covers tooltips/events/windows that overlap it.
Moving only its tooltip would leave the beige chart panel covering UI.

Scoped Ghidra confirms FUN_00999D00 (RVA 0x599D00) renders the ordered
entity list at renderer+0xF8/+0xFC with virtual Draw slot +0x28. At
**RVA 0x599F22** (preferred VA 0x00999F22), the virtual call has returned:
ESI is the entity, EBX the renderer. The seven overwritten bytes are the
original `CMP byte [ESI+0xF0],0`; the thunk preserves registers, x87/SSE,
LastError and flags, invokes our callback, replicates CMP and resumes at
RVA 0x599F29. It leaves the original virtual call and its arguments intact.

The callback draws only after `chart_upper_house_overlay`, found through
the native root's bounded parallel vectors (root+0x2AC/+0x2B0 icon
pointers, +0x2BC/+0x2C0 28-byte name records). FUN_009E4D40/FUN_009E6B30
establish these layouts. Root lookup method, icon vtable RVA 0xA3A930,
icon+0x94 entity pointer and entity vtable RVA 0xA3FF08 are guarded.

Read-only live evidence: each vector has fourteen entries; both global
and root reference renderer 0x0F52FF80, primary CEU3Graphics table RVA
0xA19B8C. A bounded read caught the ordered list with 404 entities: native
pie at index 170, its overlay at 171, then the voters pie at 172/overlay
173. Thus the named object occurs at the exact renderer stage being
hooked, not merely in a GUI-definition table. Private evidence:
`E:\v2re\logs\dll12-layer-live-widgets.json` and
`dll12-layer-live-order.json`; scoped decompilations/assembly remain there.

0.2.4 draws in that existing scene with captured/restored D3D state; no
extra BeginScene/EndScene. Original pie/decorative overlay still draw,
then are covered only on successful replacement, so rejected guards retain
the original. Later UI elements follow the native render order. Final
Present now only samples/logs. Both code sites are byte-checked and made
writable before either is patched; failed setup rolls back IAT/view hooks.
No simulation changes, generated GUI override, executable disk patch or
third-party data copied into git. V2DLL thunk patterns remain attributed.

The separate GDI/D3D seat tooltip is removed. Native ideology tooltip
construction and CPoliticsView slot 10 remain untouched. This eliminates
the duplicate box without restoring the unsafe return hook.

## Verification and installation

Reference SHA + **23 signatures ALL OK**, TGC v2.5.2 scan passed,
Release/Win32 `/MT /W4 /WX` build passed with zero warnings. Native tests
exercise the actual patched ordered site in owned fixture memory and a
real D3D9 device without D3DCREATE_FPU_PRESERVE. They check:

- 100 seats/seven rows and quantized UK allocation 83/5/12;
- later opaque UI pixels occlude seats and survive final Present;
- native nonfullscreen viewport, stream and render state restoration;
- x87/SSE/register/LastError preservation and exact original CMP flags;
- wrong entity/vtable/name and malformed parallel vectors reject drawing;
- changed ordered bytes reject both code sites and roll back lifecycle/IAT;
- paused sampling, hide/destruction, Reset and native tooltip pointer.

All native checks passed; eight installer/Lua-forwarding tests passed.
A fixture compiler warning about changing MSVC's aligned frame register
was resolved by putting the register-ABI probe in its own naked wrapper;
production code was already warning-free. No multiplayer test (D5).

The initial installer preflight correctly blocked while v2game.exe was
running and changed nothing. User confirmed normal exit; preflight and
installation then passed. Active/source SHA-256:
`ef2ebc8da4e1e0bac0ef2ba5cba258abd2efef00a451c02b69a62384b1f80755`.
Original lua51_real.dll SHA remains
`b2ba19343691f22d1af1417f9a7cbaeae74ba820a2a412f5a6cdea271cc1a7b0`;
previous proxies including tested DLL-0 remain in unique .off backups.

## Mockup comparison and remaining acceptance

Reopened `mockups/1-politics.png` (Main board) and compared it with the
user's 0.2.3 screenshot. Same 100-seat/seven-row upper-house location;
native percentage legend retained. Prototype differences: plain beige
panel instead of extracting/copying TGC art, and native legend order
83 Conservative/5 Reactionary/12 Liberal rather than mockup's seat-order
83/12/5. 0.2.4 removes the additional tooltip/font deviation: it uses the
native ideology tooltip, whose pie hit regions are unchanged and are not
individual seat hit targets. Seat counts still determine the 100 dots;
custom per-seat hover remains deferred until native tooltip ABI is verified.
Other Main-board changes (rulers, Bill and unrelated values) are outside
these cards. No mechanic changes, so no mockup republish/re-export.

Next: one U-5 run on 0.2.4. Hover the native ideology list/seat region and
open a popup over Politics: tooltips/windows should occlude dots/panel.
Then view switch, save/reload and Alt-Tab in that same run. Until this
passes, 0.2.4 remains **done, not tested in game**; no next mechanic selected.
New pitfall P28; next P29. No commit requested or made.
