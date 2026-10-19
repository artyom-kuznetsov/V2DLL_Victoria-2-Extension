# LAW-2 live coordinate and scene-order correction

2026-10-16. **0.3.3 installed on E:, done, not tested in game.** Supersedes
`report-law-2-position-1016.md`. The user tested 0.3.2: movement was useful,
but the Bill still spawned off-screen, lay behind Politics after movement,
and its projected chart was absent. This is not visual acceptance.

## Live evidence corrects the earlier model

At the coordinator's request, the user reopened the game and left it
running, selected a bill and supplied an undragged screenshot. Read-only
process snapshots were then obtained, rather than inferring later placement
from the first-draw log. No process memory was written by the inspector.
The user exited normally before installation.

Screenshots are retained under `mockups/u7/` as
`tgcx-law2-032-layering-2026-10-16.png` and
`tgcx-law2-032-undragged-2026-10-16.png`. Private snapshots/exports, current
logs and full previous payload are in `E:\v2re\logs\tgcx-law2-live-1016`.

Live 2560x1440 sample: Politics stored position is (768,470), its inner
+0xFC/+0x100 inputs are (2048,1190), and world matrix translation +0x84/
+0x88 is (768,-470). The Bill stored position and inner inputs are both
(864,380), but its matrix translation is (-416,340), matching the undragged
off-screen screenshot. **Inner +0xFC/+0x100 are not screen pixels.** The
earlier "persistent versus immediate" explanation was incomplete: the
absolute setter omitted the renderer's required screen-centre conversion.

One sampled native ordered render list had 511 entities. Bill title/overlay
were entries 166/170; Politics backgrounds were 256/257 and its upper-house
overlay 292. The Bill was drawn first, then covered by Politics.
`FUN_009E3070` inserts before the active list head; it is unsuitable for
raising the Bill. Earlier fixture list topology had hidden this mistake.

## Repair

Use `FUN_009E2FC0` (VA `0x009E2FC0`, RVA `0x5E2FC0`), window slot 11.
It unlinks the inner subtree and appends it to the normal GUI scene using
inner slot +0x74 / `FUN_009F9050` (RVA `0x5F9050`). This puts the Bill after
Politics. It runs only when opening; ordinary ticks do not raise it over
later reports. Hiding Politics hides the detached Bill.

Call the existing packed setter `FUN_009E3BA0` with **positive absolute
screen x/y**, (width-832)/2 and (height-680)/2. It stores that position and
adds screen centre to the renderer input, giving the intended pixel
position. Do not supply negative half-window offsets or use the unconverted
absolute setter from 0.3.2. Chart pixels come from world matrix X at +0x84
and negative matrix Y at +0x88, following actual native movement.

0.3.2's named movable background is retained. No simulation/script rules or
generated GUI changed in 0.3.3. Original prototype styling/full-control
deviations remain. No change to the agreed Bill mechanic/mockup.

## Checks and installation

- Win32 Release build, executable/TGC gates, **74 file gates / 42 runtime
  guards** and generated signatures: pass. New append method/slot replace
  the earlier wrong foreground/absolute-setter guards.
- Reference native window/append/unlink/packed-position/show/hide fixtures
  now use the actual root-container list topology and live screen-centre
  conversion. Check Bill after Politics, later dialog after Bill, reopen,
  stored position and rendered pixels at three resolutions: pass.
- Real GPU chart pixels/clip/state restoration and existing hemicycle/
  hover/layering/Reset fixtures: pass. Eight DLL installer/Lua tests: pass.
- Existing law/GUI/installer gates passed on the unchanged 0.3.2 script/GUI
  source: 25 catalogue, 4 GUI, 10 script installer tests. No new script output.
- Installed DLL equals build SHA-256:
  `9483ea3ab83811f591fa2b71a1d9abc0e75327deb7859a03e9cd22ce6c483b7c`.
  Generated GUI before/after unchanged:
  `066cd7485d20d47af2393a575563e29376e129f27d8c74c767240a04b2a910bb`.

User explicitly authorized Computer Use. The bundled Windows skill was
read; helper initialization and selection succeeded, but capture and its
one recovery attempt timed out (`FrameArrived timed out`, then `window
capture timed out`). No GUI inputs were sent. Read-only process inspection
provided the live evidence above. No game launch/exit was automated.

U-7 next: verify centred placement, chart inside Projected Vote, Bill above
Politics, dragging with chart attached, report above Bill and close/reopen.
0.3.3 needs that integrated evidence. P37 records the projection/list-order
correction. Full controls/automatic favours and MP remain unfinished.
