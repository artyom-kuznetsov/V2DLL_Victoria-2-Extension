# U-9 - Conform probe: the unit panel and the stack read (0.5.0)

2026-10-17. **0.5.0 installed on E: (2026-10-17, after a normal exit), not tested in
game.** It adds TPL-1's native layer: hooks on the unit panel
(`CUnitView`), the read-only registry walk, the command wrappers and the
daily driver (`report-tpl-1-research-1017.md` §10). There is no Conform
button yet, so nothing can post a Conform command: the only visible effect
is log lines. Only the user launches or exits the game. Use TGC v2.5.2 plus
TGCX, preferably a disposable 1836 UK save.

## Install (coordinator, after a normal game exit)

Back up the 0.4.4 DLL (`E:\v2re\logs\tgcx-tpl-place-1017\before-050-dll\`),
then run `python tools/install_dll.py`. The submod does not change.

## Check (player)

1. Load the save. Click on one of your armies with at least two kinds of
   regiment (for example infantry and artillery), so the unit panel opens.
2. Click on a second army, then on a one-regiment army if you have one.
3. Recruit one regiment from the Templates tab, as in U-8, so the TPL-0
   path is exercised on 0.5.0. Unpause for a day.
4. Exit normally and say so.

## What the coordinator reads in `Logs\tgcx.log`

- `Conform hooks installed`.
- One `Conform probe: stack id ...` line per army clicked:
  - `registry round trip`;
  - the right province;
  - the country equals the player;
  - `land 1`;
  - the regiment count equal to `+0x40`.
- One `regiment ...` line per regiment, each with `round trip`, a unit
  index and the right unit name. If any says `MISMATCH` or `unit -1` for a
  normal regiment, the regiment's type field (+0x38) is wrong: do not
  build the Conform window on it.
- The recruit and the queue behave as on 0.4.4.

Rollback: restore the 0.4.4 DLL from the backup.

## Installation record (2026-10-17)

- The game was closed normally (user).
- 0.4.4 (`39AAFB47…72FB`) and its install record were backed up to
  `E:\v2re\logs\tgcx-tpl-place-1017\before-050-dll\`.
- `install_dll.py` dry run, then install. The installed `lua51.dll` is
  `11FAFD22…3A8A`, the same as the build. The original stays as
  `lua51_real.dll` (`B2BA1934…A7B0`). The record says card `TPL-1`. The
  submod did not change.

## Result on 0.5.0 (2026-10-17)

Passed. The stack and regiment reads, the registry round trip, the land
test and the recruit all held up. One field was wrong: the logged
"province" was the owner's tag (P43). That is fixed in 0.5.1, which is
built and not installed (`report-tpl-1-research-1017.md` §11). Optional
re-probe on 0.5.1: click one army, exit, and check that the province id
is a real province.

## 0.5.1 installed (2026-10-17)

The game was still closed (user). 0.5.0 (`11FAFD22…3A8A`) and its record
were backed up to `before-051-dll\`. The installed proxy is
`153811EC…FA91`, the same as the build. The original stays as
`lua51_real.dll`, and the record says card `TPL-1`. Optional re-probe:
click one army, exit, and check the `province` id and `tag` in the probe
line.
