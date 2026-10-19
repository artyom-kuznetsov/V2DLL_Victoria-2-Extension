# DLL-1 — Read-only drawing and Politics visibility

Written 2026-10-12 after U-4. **Ready to start; not implemented.**
Scope: establish a reliable frame callback, draw one diagnostic rectangle
only while Politics is open, and preserve the game renderer. Do not build
the full hemicycle, change laws, accrue favours, or recruit units here.

Read: `AGENTS.md` §§2, 7, 8, 11; `docs/report-u-4-1012.md`;
`docs/technical-plan.md` §§1 and 9.1; `docs/symbols.md`;
`docs/rtti-classes.md`, CPoliticsView; DLL-0 source and its tests.
Private starting reference: V2DLL `PATCHES.md` §7.2 and the relevant
render-hook/view-observer functions. Attribute every reused piece (R8).

## Step 0 — Gates and actual frame cadence

1. Run `python tools/check_exe.py` and the TGC v2.5.2 scan before addresses.
2. Open `mockups/1-politics.png`. Choose interface route **A**, drawing
   over the rendered frame, for this diagnostic rectangle. It is a
   temporary technical probe, not the final hemicycle layout.
3. Preserve the installed, tested DLL and the U-4 log outside git before
   rebuilding/installing. Do not replace a DLL while the game is open.
4. Investigate the existing CALL RVA `0x285727` and its caller only as
   far as needed to explain callback conditions. U-4 retained one sample
   at January 2, not repeated samples while paused or after reload. Do
   not assume the message-pump function is called at this particular
   site every rendered frame.
5. Use bounded invocation counters/time intervals in diagnostic code;
   log summaries rather than every frame. Document whether the existing
   hook works in the menu, paused game, advancing game and after reload.
   If a rendering callback supplies the reliable frame tick, keep all
   game reads on the appropriate engine/render thread, without workers.
6. Add every new executable site to the signature gate with evidence.
   Do not mask mismatches or replace the hash/signature guards.

## Step 1 — D3D9 acquisition and hook design

1. Study V2DLL's device acquisition, CreateDevice/Reset/Present wiring,
   and the relevant game imports. Use the smallest justified route.
   Do not copy its frame limiter, economy, idle, music, or FPU-setting
   changes.
2. Treat Present slot 17 and Reset slot 16 as API slots; verify the
   pointer, original callback, module and hook site before replacing
   anything. Record expected bytes for any executable patch. Save
   original callbacks and avoid recursive/double installation.
3. Implement original-function forwarding on every path, including
   unsupported-device, unavailable-resource and disabled-overlay paths.
4. Preserve CPU floating-point state and D3D rendering state. Do not
   change device-creation flags or FPU precision as a shortcut. Check
   SDK documentation for the chosen drawing API and device-loss rules.
5. Keep DLL-0 logging/proxy fallback functional if the render hook cannot
   be installed. Null devices and menus must not crash the game.

## Step 2 — Politics visibility

1. Starting evidence is CPoliticsView vtable VA `0x00E0E458`, RVA
   `0xA0E458`. Slot labels and semantics remain to be verified; do not
   assume slot 10 is Update merely from an earlier design outline.
   V2DLL's view table marks that slot as tooltip-related.
2. Inspect only the necessary construction/open/close/destruction or
   update path to obtain a reliable live instance and visibility state.
3. Record RVAs, object lifetime, offsets, calling conventions and byte
   signatures. A retained pointer alone is not proof that a window is
   visible; clear stale instances on destruction and game transitions.
4. No simulation writes. Bound and guard all reads and do not scan the
   entire process memory for a plausible object.

## Step 3 — Minimal rectangle and renderer lifecycle

1. Draw one small labelled `TGCX DLL-1` probe within Politics, positioned
   from verified window geometry when available. If geometry requires
   GH-3, report the provisional placement and its limit explicitly.
2. Use D3D9 primitives unless a larger library is demonstrably needed.
   The rectangle should not intercept input or change the GUI files.
3. Draw only when Politics is open; hide in other tabs/views, menus and
   loading screens. Check tooltip/event-window layering and document
   any route-A limitation.
4. Save and restore every render state touched by the overlay. Handle
   device loss/reset, recreate owned resources safely, and release only
   resources owned by this DLL. Avoid unbounded per-frame allocations.

## Step 4 — Automatic verification and review

1. Extend the meaningful fixture checks for callback forwarding, hook
   refusal, lifetime/visibility transitions and state preservation.
   Use source-owned fixtures; do not execute the game from tests.
2. Run the executable/TGC gates, shared-header check, Release/Win32
   `/W4 /WX` build and the existing DLL/installer/Lua checks.
3. Review the complete diff, provenance and new address evidence.
4. Write a new dated DLL-1 report, including interface route A,
   mockup deviations, cadence findings and remaining runtime questions.

## Step 5 — Prepare U-5 before handoff

1. Write `docs/instructions-u-5.md` with exact install/removal commands,
   and tests for main menu, paused/advancing game, opening and closing
   Politics, switching to Budget/Production, save/load, tooltips/events,
   and device reset (for example an available window/fullscreen change).
2. When the user launches DLL-1 and a verified build is ready, the agent
   runs the reversible installer with the game closed,
   preserving the prior proxy as an `.off` backup. The user starts the
   game and supplies screenshots/logs.
3. U-5 must confirm the rectangle is visible only in Politics, callbacks
   continue through pause/save-load transitions, and the game renderer
   and logs remain healthy. Compare screenshot placement with the Main
   mockup, recording that the rectangle is a temporary probe.
4. Until U-5 passes, DLL-1 is **done, not tested in game**. Do not start
   HEMI-1 on an unverified drawing/lifetime foundation.

## Gate and deferred work

Build and fixture gates green; original rendering preserved; U-5 passes
all applicable runtime checks. Multiplayer remains deferred by D5.

Before HEMI-1, resolve the complete ideology-index mapping and allocation
length. U-4 confirms only Conservative=1, Reactionary=2 and Liberal=6;
the TGC file-order candidates are disproved. Do not label other indices
or assume an exact sum of 32,768. No rule or test is loosened to finish
this card.
