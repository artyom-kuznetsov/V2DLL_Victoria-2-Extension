# ATCU 0.0.1

**Army Template and Conform Universal** for Victoria II 3.04.

This candidate packages the accepted internal build 0.10.4 under the new
ATCU name. Gameplay code is unchanged. It is a single-player beta candidate.

## What it does

- Save up to 12 army compositions, with up to 128 regiments per template.
- Recruit a composition through the game's normal construction queue.
- Read available unit types, icons and build times from the active game.
- Conform an army: detach extras into another stack, build missing units,
  then march and merge tracked reinforcements during that session.
- Restrict Conform recruitment to provinces with a safe land route to the
  selected army. Recruit what fits and report shortages.

## Getting started

Follow `INSTALL.txt`, then open the normal Victoria II launcher. Select
**ATCU - Army Template and Conform Universal** and your base mod, if any.
Select ATCU alone for vanilla. Untick all older Army packages.

Open Military > Build Army and use the small Templates button near the
native unit folders. In crowded interfaces such as DoD, it appears in the
title area above the folders. Choose New Template, adjust the unit counts,
then recruit. Unit pages expose additional types supplied by a base mod.
Template edits save automatically to a local preference file.

For the unit-count buttons, click changes the count by 1, Alt-click by 2
and Ctrl-click by 5. Ctrl takes priority if both modifiers are held.

Select an army in the field and click its Conform button. Choose a template,
review Changes, and click Conform. Extras are detached rather than disbanded.
Unpause to allow engine commands and construction to complete.

Standalone template recruitment can use eligible provinces across continents.
It has no selected army as a gather target. Conform uses the selected army's
land reach. Continent selection and culture-filter buttons are planned.

## Tested scope

| Base | Short gameplay check | Loader |
|---|---|---|
| Vanilla 3.04 | Passed, user-reported | Included ATCU loader |
| HPM 0.4.5 | Passed | Included ATCU loader |
| Divergences of Darkness Fan Fork | Passed | Included ATCU loader |
| TGC 2.5.2 | Passed | V2DLL 5.82 |

These are short integration checks, not a claim that every gameplay case
or every mod is supported. See `KNOWN_ISSUES.md` for limits.

Only the tested Windows 3.04 executable is supported. Its SHA-256 is:

`62d48c204364dd706584777c2e2b3c7ab3c5f1dd0170872554943575d53d6648`

ATCU checks the executable and expected instruction bytes before enabling
hooks. An unsupported build is refused and recorded in `Logs/tgcx.log`.

## Templates, logs and feedback

Templates live in `tgcx_templates.txt` under your Windows Documents folder,
inside `Paradox Interactive/Victoria II` and the active mod's settings
subfolder, if it has one. The exact path is printed in `Logs/tgcx.log`.
Templates are local preferences, separate from your saved game.

Preserve the log immediately after a problem, before launching again.
Follow `BUG_REPORT.md`. Credits and candidate licensing status are in
`CREDITS.md` and `RIGHTS_STATUS.md`.
