# TPL-1: the Conform window, DLL 0.6.0 (2026-10-17)

> Card TPL-1, step 3 of `docs/instructions-tpl-1.md`: the Conform button
> and window on the unit panel (board **Conform**, `mockups/6-conform.png`).
> Follows `report-tpl-1-research-1017.md` §11 (0.5.1, confirmed in game).
> **Done, not tested in game. Not installed.**

## 1. What it adds

**Route B (D9): native GUI.** The new `tools/tgcx_conform_gui.py`
generates a fragment from the installed TGC v2.5.2 art. The installer
inserts it at the end of the named `unitpanel` window of TGC's
`interface/unitpanel.gui`, with the same byte-preserving injector as the
Bill and Templates panels (R3). The fragment holds:

- **`tgcx_cf_open`**, a 20x20 button in the stack panel's free cell between
  the location and the attrition icon, at (222,68). It lives in the window
  `tgcx_cf_tab`, so the DLL can hide it. Its art is generated: the panel's
  own 20x20 button frame (`GFX_unit_disband`) with the centre cleared and
  the infantry figure from `GFX_unit_strip`.
- **`tgcx_cf_window`**, 460x624, off-screen at (30000,30000), so without the
  DLL nothing shows (R6). Its contents:
  - a background button, so clicks do not fall through to the map;
  - the title and the round close button (`GFX_main_close_button`);
  - four template rows (`GFX_province_recruit_group_button`), with TPL-0's
    selection ring, empty-row covers, leading icon and ×N miniatures, plus
    a pager when there are more than four templates;
  - the "Changes" header and eight change rows, each with one icon window
    per unit type, a coloured first line and a note;
  - a summary line, a status line, and the Conform and Cancel buttons (a
    plain-sprite copy of `GFX_button_standard_177`, P41).

**DLL** (`dll/tgcx/tgcx_conform_gui.h`, new):

- **Panels.** One panel per captured `CUnitView`. The root is
  `*(view+0x20)` and its visible byte is `+0x67`. Both are now guarded:
  - `0x398AE8`, the ctor storing the loaded window at `+0x20`;
  - `0x3993B0`, secondary slot 9 testing that window's `+0x67`.

  The open button is looked up first, because a button lookup is silent;
  the window and tab come after.
- **Button visibility.** The button shows only for the player's land
  stacks. It is re-applied every tick, because showing the unit panel
  re-shows its subtree (P42).
- **Opening.** The DLL loads the template library and records the shown
  stack's id and class. Then it promotes and places the window beside the
  unit panel: 440 px to the right of the panel's screen position, clamped
  inside the screen. It uses TPL-0's owner-chain anchor and native setters
  (P37, P40). The stack is found again by id every time; no pointer is
  kept.
- **The preview** is what Conform would do now. `tgcx_CfPrepare` (split out
  of `tgcx_CfConformWith`, which now calls it) reads the stack and plans.
  TPL-0's recruit planner then places the plan's builds on free soldier
  pops, on a copy. The new pure `tgcx_CfRowsOf` groups the plan into board
  rows, in this order:
  - `+N Unit` in green, "built from free soldier pops, marches and joins
    (D days)";
  - `+N Unit` in yellow, "no free soldier pop can build it now: not built";
  - `+N Unit` in green, "a finished regiment nearby marches and joins";
  - then `-N Unit` in red, "detached into a new stack here".

  The summary gives the totals and ends "Nothing is disbanded.", as on the
  board. Refusals (already matches, nothing would stay, more than 128) are
  shown instead of rows. The preview is recomputed:
  - on opening;
  - on a template click;
  - after Conform;
  - once per game day while the window is open.
- **Conform** calls `tgcx_CfConformWith`, unchanged apart from the split:
  it plans again and sends only engine commands (R5). The status line
  reports detached, coming, queued and left out, and asks to unpause. The
  window stays open. Pressing Conform again sends nothing new, because
  pending joins and a pending detach are counted (fixture from 0.5.0).
- **Closing.** Cancel, the close button, the open button again, selecting
  another army, or the unit panel hiding all close it.

Version marker `TGCX TPL-1 0.6.0`. `install_dll.py` accepts 0.5.1 as a known
proxy to replace.

## 2. Board 6 deviations (R10)

| Board | 0.6.0 | Why |
|---|---|---|
| A wide "Conform to template" button at the bottom of the stack panel | A 20x20 icon button in the panel's free cell (222,68) | TGC's unit panel is a fixed 400x80 strip; there is no free row for a wide button |
| Title "Conform 1st Army to a template" | "Conform the selected army to a template" | The stack's name field is not mapped; reading it is not needed for Conform |
| "built in Manchester", "built in Liverpool" | "built from free soldier pops" | No province-name read is mapped; TPL-0's planner picks the pops |
| "detached into a new stack in Manchester" | "detached into a new stack here" | Same reason; the new stack is created in the army's province |
| Day count for every addition | Days only for builds (catalogue build time) | Already listed in research §10: no pathfinding read for gathered stacks |
| Change rows 314 px wide | 366 px, as the template rows | Native row art (`GFX_province_recruit_button`) with its pale middle stretched; same column as the template rows |
| No pager | A pager under the template rows when there are more than four | The library holds twelve templates (TPL-0) |
| — | A yellow "not built" row and a status line | The board shows only a buildable plan; D12 says recruit what fits and report the rest |

A static comparison, the board beside the generated art without text, is
in `E:\v2re\logs\tgcx-tpl1-1017\cf_060_comparison.png` (private: game art,
R8). It is not game evidence.

## 3. Not verified (needs the game)

- That the unit panel's window has the same class as TPL-0's build root.
  The placement check refuses any other class: the log then says "Conform
  window does not fit beside the unit panel" and nothing opens.
- Where the window lands on screen. The unit panel's screen position is
  logged as "Conform anchor".
- That the colour codes draw in these text boxes. The Bill uses the same
  codes.
- That the free cell (222,68) is free in game, and the click and hover on
  the 20x20 button.
- The full Conform: a detach, a build, a gather, then the march and merge
  on later days. 0.5.0 fixtures cover the commands; the game has not run
  them yet.

## 4. Gates (2026-10-17)

| Gate | Result |
|---|---|
| `check_exe.py` | ALL OK (2 new: `0x398AE8`, `0x3993B0`) |
| `gen_signatures.py --check` | ALL OK, 142 signatures |
| `build_dll.ps1` | built; `lua51.dll` SHA-256 `2840aeb3…e178` |
| `test_dll.ps1` | `tgcx_tests: ALL OK`, including the new line "Conform window: Changes rows checked" (6 expectations); installer 8 OK |
| `test_conform_gui.py` (new) | 5 OK: injection byte-preserving, bad anchors refused, names unique and prefixed, header current, no textSprite on buttons (P41), draw order, real assets and installer round trip |
| `test_templates_gui.py`, `test_bill_gui.py`, `test_install_submod.py`, `test_law_catalog.py`, `test_gen_laws.py` | 5, 8, 10, 27 OK; ALL OK |
| `tgc_scan.py` TGC v2.5.2 | anchors and range OK |

## 5. Install (only after a normal game exit)

**Installed on E: 2026-10-17** after a normal exit; backups are in
`before-060-dll\` and `before-060-submod\` (record in U-10). Not tested in
game.


- **Staged source:** `E:\v2re\logs\tgcx-tpl1-1017\stage-060\`. It is the
  0.4.4 stage, identical to the installed submod apart from the generated
  files, plus the Conform fragment, art and localisation.
- **Generated files (dry run):**
  - `unitpanel.gui` SHA-256 `037d5359…c86f`;
  - `buildunit.gui` unchanged (`269e603e…9df7`);
  - `country_politics.gui` `41cb9356…b8ce`.
- **Steps** (U-10, `docs/instructions-u-10.md`):
  1. Back up the 0.5.1 DLL and the installed submod.
  2. Run `install_dll.py`.
  3. Run `install_submod.py` with `--source` set to the stage.

## 6. U-10 result on 0.6.0 and 0.6.1 (2026-10-17)

**The user clicked the Conform button, and nothing happened.** The log
shows:

- `TGCX TPL-1 0.6.0`;
- `Conform hooks installed`;
- the unit-panel probe lines (stacks round trip; province 425 and 408,
  tag FRA);
- but **no `Conform native window found`**.

**Cause (P44).** The panel set-up probes for our GUI with a button lookup
on the unit panel. That lookup searches only the panel's direct children.
The probed button `tgcx_cf_open` is inside `tgcx_cf_tab`, so it was never
found, nothing was bound, and the click went nowhere. The class check was
not the cause: a scan of `.rdata` finds one GUI window class with these
lookup slots (`0xA3C0D8`, the same one TPL-0 places).

**0.6.1** adds `tgcx_cf_marker`, an off-screen button that is a direct
child of `unitpanel`, and probes for it, as TPL-0 does. Every other lookup
was already on the direct parent.

- DLL `8ECFE80D…0F3D`. All gates pass (`check_exe`, `test_dll`,
  `test_conform_gui` with a new marker-level check, and the Templates,
  Bill and installer tests).
- Stage `E:\v2re\logs\tgcx-tpl1-1017\stage-061\`. Generated
  `unitpanel.gui` `29c84cba…d869`; `buildunit.gui` unchanged.

Not installed at first: the game was running. **Installed on E: 2026-10-17** after the game exited (record in U-10). Not tested in game.

## 7. U-10 on 0.6.1: the window works, a crash after Merge, and D13 revised (2026-10-17)

**What worked** (user screenshot and `tgcx.log`):

- `Conform native window found`.
- The anchor: the unit panel is at screen (0,150) through 3 owner levels,
  on a 2560x1440 screen. The window opened beside it.
- The preview: on "Garde Royale", 4 Inf / 4 Art / 1 Hus gave `+3 Infantry`
  built, `+1 Infantry` from nearby, `-4 Guard` and `-1 Hussar` detached.
- A Conform on stack 597: 1 gathered, 3 built. Stack 628 marched on a safe
  path. Later, built stack 6891 marched to province 408 and joined 597.

**The crash (P45).** Right after "stack 6891 joins 597" the game crashed.
The minidump (`CrashDumps\v2game.exe.28204.dmp`, parsed privately) shows
heap corruption (`0xC0000374`) in a native free. Its stack runs from
Merge execute (`FUN_005E1590`) through stack merging (`FUN_005D5BC0`) and
the merged stack's destructor (`FUN_005C61B0`) into its map avatar
(`CHoiAvatar`, `FUN_007E7E70`).

The cause is ours: `tgcx_cf_merge_size` was `0x48`, but every native
caller allocates `0x4C`, and the ctor writes a byte at `+0x48`. The other
three commands match their native sizes (Move `0x90`, Transfer `0x6C`,
Create `0x60`; scan of every ctor call site). **0.6.2** allocates `0x4C`;
the two native pushes are guarded (144 signatures), and the fixture now
expects `0x4C`.

**The hover.** The window's background is a button (so clicks do not fall
through to the map), and a button draws its hover highlight: the whole
window turned paler than the empty-row covers while the mouse was over
it. 0.6.2 draws the same art as an icon above the button: the button
still takes the clicks, and the highlight is covered.

**D13 revised (user): Conform builds; it does not take nearby regiments.**
0.6.2 no longer gathers idle stacks:

- the registry walk `tgcx_CfIdleStacks` is removed;
- the planner gets no idle stacks;
- the summary and status no longer mention bringing regiments.

The pure planner keeps its tested gather path, now unused. The board
never showed gathering, so the mockup does not change (R10).

Consequence: after a reload, regiments still being built for an earlier
Conform are not tracked any more. They finish as their own stacks, and
Conform on the army builds the missing ones again. It does not reuse them.

**0.6.2:**

- DLL `63FB05F5…23A3`;
- stage `E:\v2re\logs\tgcx-tpl1-1017\stage-062\`;
- generated `unitpanel.gui` `058ecdc8…46fa`; `buildunit.gui` unchanged.

Gates: `check_exe`, `test_dll` (ALL OK, installer 8 OK), and the Conform
GUI, Templates, Bill and submod installer tests pass. Not installed at first: the
game crashed rather than exiting normally. **Installed on E: 2026-10-17**
after the user confirmed the game was closed (record in U-10). Not tested
in game.

## 8. U-10 on 0.6.2: Conform works in game (2026-10-17)

**The user: "it worked".** A screenshot shows "3e Corps d'Armée" against
4 Inf / 4 Art / 1 Hus: `+1 Artillery` (120 days), `+1 Hussar` (120 days)
and `+2 Infantry` (90 days), all built; "4 to build from free soldier pops,
0 to detach. Nothing is disbanded." `tgcx.log` (`TGCX TPL-1 0.6.2`) shows:

- four built stacks (6887, 6890, 6893, 6896) marched to province 408 on
  safe paths and joined stack 597, with no crash: P45 is fixed;
- on stack 619, two detaches: `new stack 4713/11131 for 5 extras`, then
  `5 extras detached into stack 11131, 0 skipped`. The new stack was seen
  empty first (`regiments 0`), then filled;
- `error.log` and `system_error.log` are empty, and there is no new crash
  dump.

**Known issue.** "Conform window disabled after guarded GUI read fault"
appears twice in the log, each time just after a new unit view appeared
(after the merges, and after the detach created stack 11131). The guard
caught the fault and disabled only that panel. Conform kept working, and
a panel is reset when its view is released. The cause is not identified
yet, possibly a read of a view being replaced. This goes to the next pass
together with the look.

**Status: TPL-1 Conform works in game on 0.6.2.** The user's next request
is to make the GUI look more like Victoria II's own. That is the R10
visual pass, and with it the board comparison (§2).
