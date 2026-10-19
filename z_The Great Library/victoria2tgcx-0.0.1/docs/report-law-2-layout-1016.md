# LAW-2 Bill position and foreground repair

2026-10-16. **0.3.1 built, checked and installed on E:, done, not tested
in game.** The user tested 0.3.0 and rejected its layout. This session
repairs those concrete presentation failures; full LAW-2 is unfinished.

## Observed failure and retained evidence

The user's original 2560 x 1440 screenshot is retained byte-identically at
`mockups/u7/tgcx-law2-bill-broken-layout-2026-10-16.png` (ignored, R8).
SHA-256: `82ceea1ae59f5fe5d3c9e7291f03b76b469060a0c811a336d121c4fbd89607c4`.
The Bill is above-left of Politics, its Projected Vote area contains the
uncovered native overlay circle, the projected seats cover bloc/Crown
content, and native ruling-party text and a party button overlap the Bill's
lower section and controls. Displayed totals are 10 Aye, 0 Abstain, 90 Nay,
0 favours and +0/month; do not substitute the older save's purchased seats.

The 0.3.0 DLL log records child discovery, all three button bindings,
an ordered Bill draw and a Count request through the native decision
handler. That confirms callback entry, not complete numerical/command
acceptance. Copied error/system_error logs are empty. A live read-only
process inspection was attempted after the user had exited; it obtained
no memory evidence. No game was launched or terminated by the agent.

Private evidence and complete previous payload:
`E:\v2re\logs\tgcx-law2-layout-1016`. `before/` contains 0.3.0's DLL,
installation record and complete installed script/GUI source. `checks/`
contains retained game/DLL logs, bounded Ghidra exports and automatic outputs.

## Diagnosis and implementation

The old Bill remained attached to Politics' render subtree, while its
position setter used screen-centred coordinates and the chart independently
computed a screen-centred origin. The screenshot exposes their different
coordinate systems and parent/child layering. Moving only the chart would
leave native Politics text drawing through the Bill.

Bounded, read-only Ghidra inspection established native foreground method
`FUN_009E3070` (VA `0x009E3070`, RVA `0x5E3070`), window vtable slot 44.
It unlinks the inner render subtree and inserts it into the engine's active
foreground scene list. The logical GUI child and its native observers remain
owned by Politics. 0.3.1 calls it only when opening the Bill, then uses the
existing native position setter. Ordinary ticks do not raise it above
subsequently opened reports or dialogs. Hiding Politics explicitly hides
the detached Bill subtree, including a failed Politics-visibility read.

The chart now reads the Bill inner render object's actual float translation
at +0xFC/+0x100, established by `FUN_00A1FEB0` (RVA `0x61FEB0`). The
inner object identity and screen bounds are checked before drawing. This
also keeps the chart attached to the panel if its native translation changes.
At 2560 x 1440, initial centred placement is (864,380), shared by the Bill
and chart. This number is fixture evidence; the new game rendering is pending.

Three runtime guards were added for the foreground method and inner
unlink/position slots. Native ordered chart drawing, tooltip slot 10,
script mechanics and native decision dispatch are retained. The generated
GUI and script payload were not changed by this repair. The installer
recognizes the specific new version marker while preserving older rollbacks.

## Verification

- Release/Win32 `/W4 /WX` build: pass.
- Reference SHA-256, **73 file gates / 41 runtime guards**: pass.
- Existing seven law gates: pass (25 catalogue, LAW-0, 3 GUI, 10 script
  installer tests, TGC inventory, executable and generated signatures).
- Native fixture executes reference foreground, unlink, position, show and
  hide code on synthetic GUI objects. Checks detachment, scene insertion,
  (864,380) placement, close/reopen, invalid implementation rejection,
  actual translated chart origin, offscreen rejection and newer-dialog
  ordering: pass. The position target is a fixture callback recording the
  native setter's arguments; no integrated-game acceptance is inferred.
- Real D3D9 pixels: all three vote colours inside the supplied chart area;
  every pixel outside it unchanged, with a deliberately non-centred origin.
  Viewport/scissor/blend/texture state restoration and retained hemicycle
  hover/ordered-layering/Reset tests: pass.
- Eight DLL installer/Lua forwarding tests: pass. The first sandbox run
  could not create a GPU device; the desktop-access run passed. An initial
  installer run rejected the new marker; registering 0.3.1 resolved it.
- Reversible DLL installation after normal game exit: pass. Installed DLL
  SHA-256 equals the final build:
  `d385361cf291ae59aeb7bf570c32c00fb98d7f86ce56da84ad670531ec6e73ae`.
  Generated GUI SHA-256 before and after is identical:
  `bf3d17780c89960921667805b46ad6f02fbabd081f2ad4871f6f0e36017d8b08`.

## Mockup comparison, limitations and next evidence

The failure screenshot was compared with `mockups/2-negotiation.png`.
The intended chart belongs in the left Projected Vote panel, with an
unobstructed Crown area and lower controls. This patch addresses those
coordinate/layer defects. It does not claim to finish the Bill mockup:
the flat original background, compact rows and missing negotiation/debt/
Crown controls listed in the prototype report remain deviations. The
agreed mechanic and mockup are unchanged. No new layout preview substitutes
for the requested game screenshot.

U-7 now records a failed 0.3.0 visual check and a pending 0.3.1 repair check.
Open Politics/Bill, verify the chart and lower section, then Count once and
close/reopen. Retain the new screenshot and logs before further changes.
Full controls, automatic favours and extended integration/MP coverage remain
unfinished. P35 records the render-subtree coordinate/layering pitfall.
No commit, push or subagent work was selected.
