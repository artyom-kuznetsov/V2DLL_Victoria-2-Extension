# Report SUB-0 — submod skeleton and load test (2026-10-12)

Status: **done, not tested in game.** U-2 is still pending (§4).

## 1. Layout

```
submod\TGCX.mod                                    name "TGCX", path "mod/TGCX", user_dir "TGCX",
                                                   dependencies = { "TGC - The Grand Combination" }
submod\TGCX\decisions\tgcx_loadtest.txt            decision tgcx_loadtest_decision (player only)
submod\TGCX\events\tgcx_loadtest.txt               events 420000001 / 420000002
submod\TGCX\localisation\tgcx_loadtest.csv         text (cp1252, 15 fields like TGC, English column)
submod\TGCX\localisation\tgcx_loadtest_override.csv DEN = "[TGCX] Denmark" — P10 measurement, deleted when SUB-0 closes
```

There is no `replace_path`. Everything carries the `tgcx_` prefix (R4), and
the installer enforces it.

**The decision** is always visible to the player. Using it sets
`tgcx_loadtest_done` and fires both events. It then stays greyed out
(`allow`), so if it is still greyed out after a save and load, the flag
survived the save.

**Which TGC is loaded.** `tgc_scan.py --diff` shows no name difference
between the versions, only interface hashes. That is because it compares the
inventory, not the files (new pitfall P18). `diff -rq` finds 223 differing
files, and that is where the marker came from: TGC v2.5.2 has
`set_country_flag = great_gamer` in `history/countries/ENG - United
Kingdom.txt`. The line is undated, so it applies from 1836. In v2.3.4,
`great_gamer` appears in no `.txt` file. Event 420000001 has
`trigger = { ENG = { has_country_flag = great_gamer } }` and says "v2.5.2".
Event 420000002 has the negation and says "v2.3.4".

This also measures something LAW-0 needs. **If both events appear**, the
engine does not evaluate the `trigger` of an `is_triggered_only` event when
an effect fires it. In that case conditional branches have to be built some
other way (P16).

**Overridden key (step 3).** `DEN` is the only great power with no
per-government names in TGC (`DEN_<government>`). For the others (ENG, FRA,
PRU, SWE, …) the visible name can come from another key, so the measurement
would prove nothing. TGC defines `DEN` in `00_countries-names.csv`.

Read the result with care: `00_…` sorts before `tgcx_…`. So if TGC wins, we
still won't know whether it wins by folder (TGC before the submod) or by file
name.

## 2. Installation

```
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod            # install / reinstall
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --remove   # remove
```

The installer copies the files rather than linking them. Before deleting an
existing `TGCX\` it checks two things:

- every file in the folder starts with `tgcx_`;
- `TGCX.mod` points to `mod/TGCX`.

If either check fails, it exits with 1 and deletes nothing. This was tested
with a fake folder in the scratchpad. A reinstall deletes the old copy first,
so no stale files are left behind.

**It is installed** in `E:\…\mod`, ready for U-2.

## 3. Gates

| # | Gate | Result |
|---|---|---|
| 1 | `tgc_scan.py` on v2.3.4 and v2.5.2 | exit 0 for both; `--diff`: "anchors and range OK" |
| 2 | install + `--remove` leaves `mod\` unchanged | `find -maxdepth 2` before and after: identical (211 entries) |
| 3 | U-2 on both versions | **pending** |

`check_exe.py`: ALL OK. It does not apply here, since no addresses were
touched. The braces in both `.txt` files balance, and `tgc_scan.parse` reads
both files.

## 4. U-2 — what the user does

Repeat these steps once for each TGC: **"TGC - The Grand Combination"**
(v2.3.4) and **"TGC v2.5.2 (stable)"**.

1. In the launcher, tick that TGC and **TGCX**. Note two things:
   - Does the launcher say anything about the dependency?
   - With v2.5.2, does it accept TGCX even though the name does not match
     `dependencies`?
2. Start a new 1836 game with any country. On the country selection screen:
   **is Denmark called "[TGCX] Denmark" or "Denmark"?**
3. In political decisions: does **"TGCX: load test"** appear? Use it.
   - How many events fire? It must be **exactly one**, and its title must
     name the loaded version.
   - If two fire, note it: that is data, not a submod bug.
4. Save, quit to the menu, and load: is the decision still greyed out?
5. If `error.log` has lines mentioning `tgcx`, send them.

## 5. What was learned about load order

Pending U-2. It will tell us three things:

- whether `dependencies` matches by exact name (v2.5.2);
- whether a submod overrides TGC's localisation keys;
- whether TGC's `replace_path = "localisation"` shuts out the submod's
  localisation. In that case even the decision title would show as the raw
  key `tgcx_loadtest_decision`.
