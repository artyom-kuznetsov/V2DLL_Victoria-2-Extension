# TPL-1 visual pass - make Conform look like Victoria II, fix the read fault

2026-10-17. Starting point: **0.6.2, accepted in game** (Conform builds,
marches, merges and detaches; `report-tpl-1-window-1017.md` §8). Commit
`421bfc9`. The user's request: "after this we gotta work on making the gui
look more like v2's". Nothing of this card has been started.

Two pieces, in this order:

1. **Fix the guarded GUI read fault** first, because the look changes touch
   the same tick code and a fault there disables the panel.
2. **The visual pass** (R10): the Conform button and window look like
   native Victoria II / TGC windows, and stay close to board 6.

Only the user launches or exits the game. Install only after the user says
the game was exited normally, and back up 0.6.2 first (below). No commit,
push or subagent unless asked.

## Part 1 - the read fault

**Symptom.** `tgcx.log` shows "Conform window disabled after guarded GUI
read fault" twice, each time just after a new unit view appeared: after the
merges, and after the detach created stack 11131. The guard in
`tgcx_CfPanelTick` (`dll/tgcx/tgcx_conform_gui.h`) closes the window and
sets `p->disabled`. Conform kept working. The panel slot is reused only
when its view is released.

**Steps.**

1. Read the 0.6.2 log around both lines
   (`E:\Victoria.II.v3.04.Inclu.ALL.DLC\Logs\tgcx.log`; copy it to
   `E:\v2re\logs\` first, because the next run overwrites it). Note the order of: `CUnitView` ctor/dtor hooks,
   `Conform native window found`, the merge/detach lines, the fault.
2. Narrow which read faults. Split the `__try` in `tgcx_CfPanelTick` into
   named steps and log the step that faulted, once per panel:
   - `view+0x20` (root) and `tgcx_CfPanelLive`;
   - the marker/window/tab lookups (`tgcx_BillFind`);
   - `view+0x28` (stack) and the reads on the stack (`+0xC4`, `land`,
     `tgcx_CfStackId`);
   - `tgcx_CfBind`, `tgcx_CfPlace`, `tgcx_CfPreview`, `tgcx_CfLabels`.
3. Likely causes to check, most likely first:
   - **a stale stack pointer**: `view+0x28` still points at a stack that a
     merge just destroyed (the merged stack 6887 and the rest). A stack is
     freed in Merge execute (`FUN_005E1590` → `FUN_005D5BC0`, P45). Check
     whether the view clears or replaces `+0x28` before the next tick;
     if not, validate the stack through the registry the native layer
     already keeps (`tgcx_CfStackId`) before dereferencing it;
   - **a view torn down between the ctor hook and the tick**: the
     `tgcx_cf_views` entry outlives the object. Check that the destructor
     hook (slot 0) runs before the slot is ticked again;
   - **a cached child pointer** (`p->window`, `p->tab`, bound observers)
     from a subtree the engine rebuilt (P42 shows show/hide is re-applied;
     a rebuild would free it).
4. Fix the cause, not the guard. Keep the `__try` as a last resort. A
   disabled panel should recover when its view's root or stack changes
   (reset instead of staying disabled for the view's lifetime).
5. Add a fixture in `dll/tgcx/tests/tgcx_conform_gui_tests.h` that
   reproduces the sequence (stack freed / view replaced between ticks) and
   passes with the fix.

## Part 2 - the visual pass

**Reference.** Board 6 of the mockup
(<https://claude.ai/artifact/Wt2YTaaM6xV8JXsUwapRV4>; PNG in `mockups\`),
the 0.6.2 screenshot from the user, and native windows with the same role:
the unit panel itself, Build Army, the diplomacy and decision windows. The
mockup uses real game art (memory: mockups use game assets).

**Steps.**

1. Ask the user for one or two screenshots of what looks off, or take the
   0.6.2 one, and list the differences against native windows: frame and
   title bar, background, fonts and colours, row art, the 20x20 open button,
   button styles (Conform/Cancel), close button, spacing.
2. Look up how TGC builds similar windows before designing anything
   (`docs/tgc-howto.md`, TGC v2.5.2's `interface\*.gui` and `.gfx`): use
   its existing sprites (`spriteType`, not `textSpriteType` on bare
   buttons, P41) and fonts by name. Nothing from TGC is copied into git
   (R3, R8): art is composed by `tools/tgcx_conform_gui.py` from the
   installed TGC at stage time.
3. Change only the generator (`tools/tgcx_conform_gui.py`: `layout()`,
   `buttons()`, `texts()`, `generate()`) and, if positions move, the header
   it writes (`dll/tgcx/tgcx_conform_layout.h`). Keep:
   - `tgcx_cf_marker` as the first top-level element (P44);
   - the background button with the `tgcx_cf_bg_icon` over it (hover);
   - every name with the `tgcx_cf_` prefix (R4).
4. Update the board 6 deviation table in a new report
   (`docs/report-tpl-1-visual-MMDD.md`; the window report is not
   rewritten). If the user changes what the window shows, republish the
   mockup and re-export the PNGs in the same session (R10).

## Gates

- `python tools/check_exe.py` (ALL OK, 144 signatures at 0.6.2, more if new
  guards are added) and `python tools/tgc_scan.py` on TGC v2.5.2.
- `tools/build_dll.ps1`, `tools/test_dll.ps1`.
- `python tools/test_conform_gui.py` (5 tests at 0.6.2) and the existing
  submod/law/template tests.
- Bump the DLL marker (`TGCX TPL-1 0.6.3`) and `tools/install_dll.py`'s
  known/required proxies.

## Install (coordinator, after a normal exit)

1. Back up the 0.6.2 DLL (`63FB05F5…23A3`) and its record to
   `E:\v2re\logs\tgcx-tpl-place-1017\before-063-dll\`.
2. Stage the submod into `E:\v2re\logs\tgcx-tpl1-1017\stage-063`.
3. `install_dll.py` and `install_submod.py ... --source stage-063 --backup
   E:\v2re\logs\tgcx-tpl-place-1017\before-063-submod` (dry run first).
   Record the new hashes; at 0.6.2 `unitpanel.gui` is `058ecdc8…46fa`,
   `buildunit.gui` `269e603e…9df7`, `country_politics.gui` `41cb9356…b8ce`.

## Check (player)

1. Open the Conform window on an army; screenshot beside board 6.
2. Run one Conform that builds and one that detaches; let the builds join.
3. The log must not show "guarded GUI read fault". `error.log` empty.

## Rollback

0.6.2: `install_dll.py --source` from `before-063-dll\`, and
`install_submod.py --source E:\v2re\logs\tgcx-tpl-place-1017\before-063-submod`.
Older rollbacks stay in `before-062-*` (0.6.1), `before-061-*` (0.6.0),
`before-060-*` (0.5.1).
