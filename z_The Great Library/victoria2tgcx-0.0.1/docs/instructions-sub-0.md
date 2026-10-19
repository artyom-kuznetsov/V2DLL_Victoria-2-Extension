# SUB-0 — Submod skeleton and load test

> Step-by-step instructions (written 2026-10-12). Card in `SUBAGENTS.md`
> §4. Rules: `AGENTS.md` R1, R3, R4, R6; `docs/tgc-compatibility.md` §2
> (level N0). Carried out on 2026-10-12: `docs/report-sub-0-1012.md` (the
> file names below are the ones that were finally used, renamed to English
> under D10).

**Why:** before writing a single mechanic we need to know that a submod
with its own files loads on top of TGC, in which order, and that it breaks
nothing in either version (P10). If the load order is not the expected
one, the design of everything else changes.

**Does not touch:** TGC's, HPM's or the game's files (R1); `dll\`.

---

## Step 1 — The folder

In this repository (not in `mod\`):

```
submod\TGCX.mod
submod\TGCX\decisions\tgcx_loadtest.txt
submod\TGCX\events\tgcx_loadtest.txt
submod\TGCX\localisation\tgcx_loadtest.csv
```

`TGCX.mod`:

```
name = "TGCX"
path = "mod/TGCX"
user_dir = "TGCX"
dependencies = { "TGC - The Grand Combination" }
```

No `replace_path` (R4). The name is provisional (D3).

## Step 2 — Test content

A decision always visible to the player and an event it fires:

- `tgcx_loadtest.txt` (decisions): `political_decisions = {
  tgcx_loadtest_decision = { potential = { ai = no } allow = { } effect = {
  country_event = 420000001 set_country_flag = tgcx_loadtest_done } } }`.
- Event `id = 420000001`, `is_triggered_only = yes`, one option. Its
  description **says which TGC is loaded**: show a different text depending
  on a trigger that is only true in one version. Choose the trigger with
  `tgc_scan.py --diff` (if there is no name difference between v2.3.4 and
  v2.5.2, say so and use a single fixed text).
- Localisation in cp1252, `;` and columns as in a TGC `.csv` (copy the
  **format**, not the content), ending in `x`.

## Step 3 — A file that overrides on purpose (to measure P10)

`submod\TGCX\localisation\` with **one** key TGC already defines (choose one
visible in the menu, e.g. a country's name in `00_countries-names.csv`), in
a file `000_tgcx_loadtest_override.csv` (the `000_` makes it sort before TGC's `00_countries-names.csv`: P20) with another text (`[TGCX] …`). It shows
who wins: if `[TGCX]` is shown, the submod overrides keys; if not, TGC
wins. It is **deleted** when SUB-0 finishes: it is only the measurement.

## Step 4 — Install (reversibly)

Script `tools/install_submod.py <mod folder>`: copies `submod\TGCX\` and
`submod\TGCX.mod` into `<game>\mod\` (a copy, not a link: the launcher may
not follow links). With `--remove`, it deletes **only** those two things,
after checking that the target folder has `tgcx_` in its names. It never
touches anything else in `mod\`.

## Step 5 — Test in game (U-2, done by the user)

For each TGC (v2.3.4 = "TGC - The Grand Combination", v2.5.2 = "TGC v2.5.2
(stable)"):

1. In the launcher: tick TGC and TGCX. Note whether the launcher shows
   anything about the dependency and whether TGCX is accepted with "TGC
   v2.5.2 (stable)" (the name does not match `dependencies`, P10).
2. Start an 1836 game with any country.
3. Does the decision `tgcx_loadtest_decision` appear? Does the event fire
   and state the right version? Is the step 3 country called `[TGCX] …`?
4. Save, quit, load again: is everything the same?

## Step 6 — Record

What is seen goes into the report and into P10 (from "unverified" to what
was measured).

---

## Gate (done when)

1. `python tools/tgc_scan.py` OK on both versions.
2. `install_submod.py` installs and `--remove` leaves `mod\` as it was
   (compare the listing before and after).
3. U-2 done with both versions, or the card stays **"done, not tested in
   game"**.

## Delivery

Report `docs/report-sub-0-MMDD.md`: layout, how it is installed, the U-2
result per version, and what was learned about the load order.
