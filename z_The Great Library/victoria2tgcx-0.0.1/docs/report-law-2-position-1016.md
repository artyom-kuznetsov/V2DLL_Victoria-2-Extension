# LAW-2 absolute position and native dragging correction

2026-10-16. **0.3.2 installed on E:, done, not tested in game.** Supersedes
the 0.3.1 candidate in `report-law-2-layout-1016.md`. The user tested 0.3.1
during this session: most of the Bill was off-screen at the upper-left,
and it could not be moved. That repair failed its game check.

## Evidence and cause

Original new screenshot retained at
`mockups/u7/tgcx-law2-031-offscreen-2026-10-16.png`. The 0.3.1 DLL log records
initial chart origin (864,380), then the screenshot shows the panel near
(-416,-340). The process had already exited when inspection was attempted;
no live memory inspection or precise later transform is claimed.

The packed centred setter `FUN_009E3BA0` stores its input unchanged at
window +0x250 but centres only the immediate inner render translation.
0.3.1's fixture checked the immediate translation and missed the stored
negative position. A persistent native GUI position must agree with the
render translation. Additionally, the prototype explicitly had moveable=0
and supplied a decorative background icon, so dragging was unavailable.

Bounded static inspection found `FUN_009E3D20` (VA `0x009E3D20`, RVA
`0x5E3D20`), window slot 38: this in ECX, two integer x/y stack arguments,
RET 8. It stores packed absolute x/y at +0x250 and calls inner +0xCC with
the same integer coordinates. This is the appropriate absolute setter.

## Changes and verification

0.3.2 foregrounds the Bill once on opening, then calls the absolute setter
with (screen width - 832)/2 and (screen height - 680)/2. It keeps the
actual render translation as the chart origin. No position is forced on
ordinary ticks, so user movement is retained while open.

The generated GUI enables moveable=1 and names `tgcx_bill_bg` as backGround,
implemented as a native background button. This follows the installed TGC
v2.5.2 Event_Country_Window/state_focus_window pattern. TGC source is still
regenerated at install time and preserved outside our insertion. No copied
game/TGC GUI or art enters git. The Bill mechanic and agreed mockup do not
change; this repairs reachability and enables the requested movement.

- Win32 Release build, **74 file gates / 42 runtime guards**: pass.
- Seven law gates: pass; **25 catalogue / 4 GUI / 10 script installer** tests.
- Reference native absolute-setter execution checks both persistent +0x250
  and inner translation, including 1280x720, 1920x1080 and 2560x1440.
  Native foreground/lifecycle/later-dialog ordering fixtures pass. Position
  target remains a fixture callback, not integrated game execution.
- Real-GPU chart colour/clip/pixel/state and retained hemicycle fixtures:
  pass. Eight DLL installer/Lua tests: pass.
- Movable background wiring is checked against parsed generated GUI. Actual
  dragging/click reachability must still be tested in game.
- DLL and regenerated GUI installed reversibly after normal game exit.
  Installed DLL matches final build SHA-256:
  `0553efd69d68776c2b89ca253a1d899cadacbd7beb156a0560877f8f054bd979`.
  Installed GUI SHA-256:
  `066cd7485d20d47af2393a575563e29376e129f27d8c74c767240a04b2a910bb`.

Evidence: `E:\v2re\logs\tgcx-law2-position-1016`. `before/` retains 0.3.1
DLL/logs/source; `stage/` is the regenerated movable source; installer-backup
is a complete rollback source. The first dry run caught a missing original
modifier fragment before mutation; copying the retained original 956-byte
fragment supplied the complete source and the dry run passed.

## Remaining evidence

U-7: open Politics/Bill, see the entire Bill and chart, drag by its
header/background, Count once, close/reopen and check later reports remain
above it. The screenshot-to-mockup comparison remains pending for 0.3.2.
All earlier prototype styling/full-control deviations remain unfinished.
P36 records the immediate-versus-persistent setter distinction. No game
launch/termination, commit, push, new mechanic or subagents.
