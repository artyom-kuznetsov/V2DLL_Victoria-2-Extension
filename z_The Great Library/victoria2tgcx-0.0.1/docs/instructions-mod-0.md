# MOD-0 - What the launcher does with several mods (read-only game check)

2026-10-18. First card of D15 (`report-modular-scope-1018.md` §6.2). It
answers the four **unverified** rows of that report's §4 before anything is
split. **Nothing is built, installed or changed.** Only the user launches
and exits the game. Installed: 0.6.4 (U-11 passed).

## What it answers

| # | Question (§4) | Answered by |
|---|---|---|
| Q1 | What the launcher passes to `v2game.exe`: one `-mod=` per mod? in which order? (decides where a `v2dll_mod.dll` would live, D16) | command line, runs 1-3 |
| Q2 | Three mods at once: do they all load, in which order, and which settings/save folder? | run 2 |
| Q3 | Order of two submods that both depend on TGC but not on each other | run 2 (TGCX and Organized Stacks) |
| Q4 | A dependency that is installed but not ticked: loaded anyway, warned, or ignored | run 3 |

The third mod is `TGC Units - Organized Stacks` (`mod\TGCOrganizedStacks.mod`,
already installed, part of the user's TGC v2.3.4 set). It names only `"TGC -
The Grand Combination"` (v2.3.4) in `dependencies`, not `"TGC v2.5.2
(stable)"`, and has no `user_dir`. So the check also shows whether a submod
whose dependency names a different TGC loads before or after v2.5.2 (P19).
Its game content does not matter here; the run is a throwaway game.

## Before (coordinator)

1. Make an evidence folder `E:\v2re\logs\tgcx-mod0-1018\`.
2. Record, read only:
   - the file list with SHA-256 of `mod\TGCX\`, `mod\TGC_v2.5.2\TGC\` (top
     level and `common\`, `interface\`), `mod\TGCOrganizedStacks\` and the
     `.mod` files;
   - the folder list of `Documents\Paradox Interactive\Victoria II\`, and
     `settings.txt` there.
3. Start a background recorder that writes every new `v2game.exe` command line
   to `cmdlines.txt` (WMI `Win32_Process`, polling every 2 s, stopped after
   the user is done). It only reads.

## Runs (user)

In each run: start the launcher, tick exactly the mods listed, press Play.
At the main menu, start a new game as United Kingdom (1836), play one or two
days, look at what is asked, then **exit normally**. Do not save over an
existing game; a new save is not needed.

1. **Run 1, baseline:** tick `TGC v2.5.2 (stable)` and `TGCX` (as usual).
   - Check that TGCX works as in U-11: the Reforms tab lights rows, and Build
     Army has the Templates tab.
2. **Run 2, three mods:** tick `TGC v2.5.2 (stable)`, `TGCX` and `TGC Units -
   Organized Stacks`.
   - Does the game start? Any launcher warning?
   - TGCX: Reforms rows lit, and the Templates tab in Build Army.
   - Tell me anything that looks different from run 1 (unit panel, army
     window).
3. **Run 3, dependency not ticked:** tick **only** `TGCX`.
   - Does the launcher warn, refuse, or start?
   - If it starts: is the game TGC (TGC's menu, flags, `Open TGC's Setup`
     decision) or vanilla? Does the Politics window show the Bill controls?
   - If it starts as vanilla and something looks broken, just exit; that is
     an answer too.

Tell me after each run (or after all three) what you saw. Screenshots only
if something is unexpected.

## Afterwards (coordinator)

- Stop the recorder. From `cmdlines.txt`: the `-mod=` arguments of each run,
  their count and order (Q1).
- From each run's settings folder (new ones are expected, e.g. a name made
  of the `user_dir`s): its name (Q2), `setup.log` and `game.log` for the
  order the mods' files were read and what was replaced (Q2, Q3). Check
  `error.log`/`system_error.log`.
- `tgcx.log`: the DLL started in each run, and which guards installed (a
  vanilla run 3 would show the renderer/GUI guards that do not match).
- Re-hash the folders recorded before: **nothing under `mod\` changed** (R1).
- Write `docs/report-mod-0-MMDD.md`: one row per question with its answer
  and evidence, and what it means for MOD-1/MOD-2 and for D16's plugin
  (§2.1 of `report-v2dll-mod-slot-1018.md`: does the first `-mod=` name
  TGCX's folder?). Then write the MOD-1 instructions.
- Update `ROADMAP.md`, `NEXT.md`, `SUBAGENTS.md`, `docs/README.md`.
