# ARCHIVE — LAW-0 instructions v1: staged bill (superseded)

> Archived on 2026-10-12. The user changed D7: instead of staged
> negotiation (phases with rolls and stalling, like Better Politics Mod)
> they asked for **political favours and ideological closeness to each
> law**. Current: `docs/law-design.md` and `docs/instructions-law-0.md`.
> Design archived alongside: `docs/archive/law-design-v1-stages.md`. Full
> text below, translated to English on 2026-10-12 (D10).

---

# LAW-0 — First negotiated bill, end to end

> Step-by-step instructions (written 2026-10-12). Design:
> `docs/law-design.md` (at the time, the staged version). Depends on SUB-0
> (the submod loads). Rules: `AGENTS.md` R3, R4, R6; P16 (there is no
> `if`).

**Why:** before generating 48 bills we need **one** working completely in
game: present, three phases, sways, vote, signature and the law passed. If
something in the engine does not behave as the design says (`days =`
across saves, variables, steps), it is discovered with one, not with 48.

**Chosen law:** `press_rights`, from `censored_press` to `free_press` (it
exists in TGC v2.3.4 and v2.5.2, has no complicated `next_step_only`, and
in 1836 almost every European country has `censored_press` or
`state_press`). Confirm with `tgc_scan.py` before starting.

**Does not touch:** TGC's files (R1); `dll\`. Generates nothing for other
laws.

---

## Step 1 — Write the `press_rights` bill by hand

In `submod\TGCX\` (everything `tgcx_`, events in 420 000 100 – 420 000 199):

1. `decisions\tgcx_laws.txt`: the decision
   `tgcx_law_press_rights_free_press`. `potential`: `ai = no`,
   `press_rights = censored_press`, no `tgcx_law_active` flag. `allow`:
   **`free_press`'s `allow`, copied from the TGC version** (by hand in
   LAW-0; the generator will do it in LAW-1). `effect`: flag
   `tgcx_law_active`, flag `tgcx_law_press_rights_free_press`,
   `set_variable = { which = tgcx_law_phase value = 1 }`,
   `change_variable = { which = tgcx_sways value = 30 }`, check event with
   `days = 60`.
2. `events\tgcx_laws.txt`: the check. First a hidden event that **computes
   support** (`tgcx_support`, 5 % steps per favourable ideology, P16) and
   then fires **one** of four step events (< 20, 20-40, 40-60, ≥ 60), each
   with its own `random_list` (the table in the design's §4). Each outcome
   is a visible event with the outcome's text.
3. Phases: Success raises `tgcx_law_phase` (+30 sways); past 3 it goes to
   the vote. Debate: a new check in 60 days. Stall: down one phase.
   Failure: clears everything.
4. Vote and signature: one event per government group from the design's §6
   (first measure which governments have `election = yes` in
   `common\governments.txt` and record it in the design). If it passes:
   `political_reform = free_press` and cleanup.
5. Three sways (not all of them): "assert authority", "public debate" and
   "promise another law". Decisions with `potential` = active bill and
   `check_variable = { which = tgcx_sways value = N }`.
6. Localisation in `localisation\tgcx_laws.csv` (cp1252, TGC's format).

## Step 2 — Always clean up

Every exit from the cycle (passes, falls, vetoed) clears **all** the flags
and sets the bill's variables to 0. Write the list of flags and variables
at the top of `events\tgcx_laws.txt` in a comment, and check by hand that
every exit clears them all.

## Step 3 — Checks without the game

- `python tools/tgc_scan.py` on both versions: OK.
- Every event id in the range; no localisation key repeated with TGC
  (search for every new key in TGC's `localisation\`).
- Balanced braces in every file (a `tgc_scan.parse` check or a 10-line
  script): Vic2 does not warn about an extra brace, it stops reading the
  file.

## Step 4 — U-3: the user plays it

With an 1836 country with `censored_press` and a mixed upper house (e.g.
Belgium, United Kingdom, France):

1. Present the bill. Does it appear? Does it state the support?
2. Spend a sway. Does the counter go down? Does the step go up?
3. **Save with a check pending, quit, load.** Does the check arrive? (risk
   in the design's §8)
4. Reach the vote and the signature. Does the law pass? Are the flags
   cleared (try presenting another)?
5. Repeat with TGC v2.3.4 and v2.5.2.

## Step 5 — Measure

With `days = 60` per check, a law takes on average X days depending on the
step: compute it from the probability table and record it; if it is too
slow or too fast for the user, it is tuned in `common\tgcx_laws.txt` before
LAW-1.

---

## Gate (done when)

1. Step 3 green.
2. U-3 done with both versions, or the card stays **"done, not tested in
   game"**.
3. What was learned about the engine, as `Pnn` pitfalls if anything was
   surprising.

## Delivery

Report `docs/report-law-0-MMDD.md`: files, ids used, the U-3 result, the
mean time per step, and what changes in the design before LAW-1 (the
generator for the 48 bills).
