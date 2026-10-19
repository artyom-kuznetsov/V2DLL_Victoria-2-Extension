# U-10 - Conform in game: the button, the window and one Conform (0.6.0)

2026-10-17. **0.6.0 is installed on E: (2026-10-17, after a normal exit), not tested in game.** It adds the
Conform button on the stack panel and the Conform window, board 6
(`report-tpl-1-window-1017.md`). This is the first version that can post
Conform's commands:

- Create and Transfer, to detach extras;
- Move and Merge, to bring regiments;
- TPL-0's Construct, to build.

Only the user launches or exits the game. Use TGC v2.5.2 plus TGCX and a
disposable save, for example 1836 UK, with at least two templates saved
in Build Army, Templates.

## Install (coordinator, only after the user says the game was exited normally)

1. Back up:
   - the 0.5.1 DLL (`153811EC…FA91`) and its install record, to
     `E:\v2re\logs\tgcx-tpl-place-1017\before-060-dll\`;
   - the installed submod, through the installer's `--backup` (below).
2. Install the DLL:
   `python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC` (dry run
   first). The proxy must be `2840AEB3…E178`.
3. Install the submod:
   `python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --source E:\v2re\logs\tgcx-tpl1-1017\stage-060 --backup E:\v2re\logs\tgcx-tpl-place-1017\before-060-submod`
   (dry run first). Check the generated files:
   - `unitpanel.gui` is `037d5359…c86f`;
   - `buildunit.gui` is unchanged (`269e603e…9df7`).

## Check (player)

1. **The button.** Click one of your armies. In the stack panel, between
   the location and the attrition icon, there is a small infantry button.
   Click a fleet: the button is not there. Click a foreign army: it is not
   there either.
2. **The window.** On your army, press the button. The Conform window
   opens beside the stack panel, with your templates, the first one
   selected. Take a screenshot.
3. **The preview.** Click each template. The Changes rows should match
   what the army has and lacks, for example `+1 Artillery` built,
   `-1 Dragoon` detached. Pick a template the army already matches: the
   window says so and shows no rows. Take a screenshot of a mixed case.
4. **One Conform.** Choose a template that both detaches at least one
   regiment and builds at least one, and press Conform. Read the status
   line, then unpause for a few days:
   - a new stack with the extras appears in the same province;
   - the builds are queued in Build Army.

   Then press Conform again: nothing new should be sent.
5. **The march.** Let the game run until a built regiment finishes. It
   should march to the army on a safe path and join it. If you have a
   finished one-regiment army of a missing type nearby, Conform should
   bring it too ("a finished regiment nearby marches and joins").
6. Close the window with Cancel, with the round button, and by clicking
   another army. Exit normally and say so.

## What the coordinator reads

- In `Logs\tgcx.log`:
  - `TGCX TPL-1 0.6.0`, `Conform hooks installed`, `Conform native window
    found`;
  - `Conform anchor: unit panel screen x,y` and `Conform window opened
    for stack ...`;
  - on Conform: `new stack ... for N extras`, then `Conform stack ...:
    detached, gathered, built`;
  - on later days: `extras detached into stack`, `marches to province`,
    `joins`.
- If the log says `Conform window does not fit beside the unit panel`, the
  panel's window class or position check refused. Send the log; nothing
  was sent to the game.
- `error.log` must have nothing new.
- Compare the screenshots with board 6 against the listed deviations
  (report §2).

## Rollback

1. Restore the 0.5.1 DLL from `before-060-dll\` with `install_dll.py
   --source`.
2. Restore the submod with `install_submod.py --source
   E:\v2re\logs\tgcx-tpl-place-1017\before-060-submod`.

## Result on 0.6.0 and the 0.6.1 install (2026-10-17)

On 0.6.0 the button drew but did nothing (P44, report §6). 0.6.1 fixes
it. Install it the same way, after a normal exit:

- the DLL, `install_dll.py` (proxy `8ECFE80D…0F3D`);
- the submod, `install_submod.py ... --source
  E:\v2re\logs\tgcx-tpl1-1017\stage-061 --backup
  E:\v2re\logs\tgcx-tpl-place-1017\before-061-submod`
  (`unitpanel.gui` `29c84cba…d869`).

Back up 0.6.0 to `before-061-dll\` first. The 0.5.1 rollback stays in
`before-060-*`. Then repeat the check from step 1. The log must now show
`Conform native window found`.

## Installation record (2026-10-17)

- The game was closed normally (user); no `v2game.exe` process was running.
- 0.5.1 (`153811EC…FA91`) and its install record were backed up to
  `E:\v2re\logs\tgcx-tpl-place-1017\before-060-dll\`.
- `install_dll.py` dry run, then install. The installed `lua51.dll` is
  `2840AEB3…E178`, the same as the build. The original stays as
  `lua51_real.dll` (`B2BA1934…A7B0`), and the record says card `TPL-1`.
- `install_submod.py` dry run, then install from `stage-060` with the
  backup `before-060-submod\` (the complete 0.4.4/0.5.1 submod, a rollback
  source). Generated files:
  - `unitpanel.gui` `037d5359…c86f`;
  - `buildunit.gui` `269e603e…9df7` (unchanged);
  - `country_politics.gui` `41cb9356…b8ce`.

  The only differences from the backup are the Conform files: fragment,
  `tgcx_cf_*` art, `.gfx`, localisation and the generated `unitpanel.gui`.

## Result on 0.6.1 and 0.6.2 (2026-10-17)

The window opened and previewed correctly, and one Conform marched and
merged. The game then crashed after the Merge (P45, report §7). The
window also turned paler on hover. Separately, the user revised D13:
Conform only builds. 0.6.2 fixes the crash and the hover and drops
gathering. Install it as for 0.6.1:

- the DLL, proxy `63FB05F5…23A3`, after backing up 0.6.1 to
  `before-062-dll\`;
- the submod, from `stage-062` with `--backup …\before-062-submod`
  (`unitpanel.gui` `058ecdc8…46fa`).

Then repeat from step 1. Step 5's nearby-regiment case no longer applies.
The crash test is step 5: a built regiment marches, joins, and the game
keeps running.

## 0.6.1 installation record (2026-10-17)

- The game had exited; no `v2game.exe` process was running. The user asked
  for the install.
- 0.6.0 (`2840AEB3…E178`) and its record were backed up to
  `before-061-dll\`.
- `install_dll.py` dry run, then install. The proxy is `8ECFE80D…0F3D`,
  the original is still `lua51_real.dll` (`B2BA1934…A7B0`), and the
  record says card `TPL-1`.
- `install_submod.py` dry run, then install from `stage-061` with the
  backup `before-061-submod\`. `unitpanel.gui` is `29c84cba…d869`;
  `buildunit.gui` and `country_politics.gui` are unchanged. The only
  differences from the 0.6.0 submod are `unitpanel.gui` and
  `tgcx_conform_layout.txt` (the marker).
- Not tested in game. Repeat the check from step 1.

## 0.6.2 installation record (2026-10-17)

- The game was closed (user); no `v2game.exe` process was running.
- 0.6.1 (`8ECFE80D…0F3D`) and its record were backed up to
  `before-062-dll\`.
- `install_dll.py` dry run, then install. The proxy is `63FB05F5…23A3`,
  the original is still `lua51_real.dll` (`B2BA1934…A7B0`), and the
  record says card `TPL-1`.
- `install_submod.py` dry run, then install from `stage-062` with the
  backup `before-062-submod\`. `unitpanel.gui` is `058ecdc8…46fa`;
  `buildunit.gui` and `country_politics.gui` are unchanged. The only
  differences from 0.6.1 are `unitpanel.gui` and `tgcx_conform_layout.txt`
  (the background icon).
- Not tested in game.
