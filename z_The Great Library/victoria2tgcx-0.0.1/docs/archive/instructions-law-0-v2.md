# LAW-0 — First bill with favours and affinity, end to end

> Step-by-step instructions (written 2026-10-12, v2; the staged v1 is in
> `docs/archive/instructions-law-0-v1-stages.md`). Design:
> `docs/law-design.md`. Depends on SUB-0 (the submod loads). Rules:
> `AGENTS.md` R3, R4, R6, R10; P16 (there is no `if`). **Mockup (R10):**
> boards **Bill** (the bill window: projected vote, favours, prices, debts,
> the Crown) and **Main** (the negotiate badge on the reform) in
> <https://claude.ai/artifact/Wt2YTaaM6xV8JXsUwapRV4>, PNGs in `mockups\`.
> TGC's systems to build on: `docs/tgc-howto.md` §1-2.

**Why:** before generating 48 bills we need **one** working completely in
game: present, projected vote, purchases, promise, audience, vote,
signature and the law passed. If something in the engine does not behave as
the design says (`days =` across saves, variables, the chamber steps), it is
discovered with one bill, not with 48.

**Chosen law:** `press_rights`, from `censored_press` to `free_press` (it
exists in TGC v2.3.4 and v2.5.2, and in 1836 almost all of Europe has
`censored_press` or `state_press`). Confirm with `tgc_scan.py` before
starting.

**Test country:** the 1836 United Kingdom (chamber 83 / 12 / 5, government
`hms_government`, Whig party). It is the example in `docs/law-design.md`
§5: it must cost **35 favours and one promise** (plus 10 if the Crown is
against).

**Does not touch:** TGC's files (R1); `dll\`. Generates nothing for other
laws or for ideologies other than the three in the British chamber.

---

## Step 1 — Affinity and numbers, in files of our own

In `submod\TGCX\` (everything `tgcx_`, events in 420 000 100 – 420 000 199):

1. `common\tgcx_affinity.txt`: only `press_rights` for `liberal`
   (`free_press`, 2), `conservative` (status quo, 1) and `reactionary`
   (`state_press`, 2). **Measure first** whether the game complains about
   an unknown file in `common\`; if it does, it goes to another folder of
   our own (record it as pitfall `Pnn`).
2. `common\tgcx_laws.txt`: favours per month, cap, prices per step,
   audience, debt deadline and punishment, minimum debate. In LAW-0 the
   events carry the values written by hand **with a comment pointing to
   this file**; LAW-1's generator will read them from here.

## Step 2 — Write the bill by hand

1. **Present** — `decisions\tgcx_laws.txt`, decision
   `tgcx_law_press_rights_free_press`. `potential`: `ai = no`,
   `press_rights = censored_press`, no `tgcx_law_active` flag. `allow`:
   **`free_press`'s, copied from the TGC version** (by hand in LAW-0).
   `effect`: flags `tgcx_law_active` and `tgcx_law_press_rights_free_press`,
   the **stance flags** (`tgcx_stance_liberal_p2`,
   `tgcx_stance_conservative_m1`, `tgcx_stance_reactionary_m2`),
   `tgcx_debate` = 90 and the recompute event.
2. **Recompute** — `events\tgcx_laws.txt`, hidden event. Sets
   `tgcx_yes`, `tgcx_no`, `tgcx_margin`, `tgcx_quorum` to 0 and adds them
   up again: for each ideology and each 5 % step of the chamber (rounded to
   the nearest: step k if the share is ≥ 5k − 2.5 %), a `random_owned`
   block (P16) that adds 5 where the stance says; then the purchases
   (`tgcx_buy_<ideology>_ab` and `_yes`, in steps) and the promise. Write
   the blocks **with a 20-line script**, not by hand: it is the seed of the
   generator.
3. **Buy** — generic decisions per ideology: abstention and vote, one per
   stance that allows it (§5 of the design), with `potential` = active
   bill + stance flag, `allow` = `check_variable` on `tgcx_favours` and
   seats left to buy. Effect: subtracts favours, adds the step, recompute.
4. **Promise** — decision for the strongly-against bloc: flag
   `tgcx_debt_reactionary`, `tgcx_debt_reactionary_deadline` = 60 (months),
   flag `tgcx_promised_reactionary` for this bill, recompute.
5. **Audience** — decision: −10 favours, flag `tgcx_crown_signs`.
6. **Vote** — decision: `allow` = `tgcx_debate` at 0 + `check_variable`
   of `tgcx_margin` ≥ 5 and `tgcx_quorum` ≥ 50. Effect: the Crown event.
   **Withdraw** — decision always available with the bill active.
7. **Crown** — by government group from `docs/law-design.md` §6 (first
   measure which governments have `election = yes` in
   `common\governments.txt` and record it in the design). Signs
   (`political_reform = free_press`) if the government is a full
   legislature, if there is `tgcx_crown_signs`, or if the generic ruler is
   for it; otherwise it vetoes.
8. **Clock** — a hidden event that reschedules itself with `days = 30`:
   adds favours (+3, cap 100), lowers `tgcx_debate`, lowers the debt
   deadlines and fires the punishment when one expires (+2 militancy for
   the ideology's pops, `add_country_modifier` with double prices for 10
   years), and recomputes. It is started by the first presentation and by
   a hidden "start the clock" decision if it is not running (flag).
9. Localisation in `localisation\tgcx_laws.csv` (cp1252, TGC's format):
   every decision states its price and effect, and the vote decision states
   **yes, no and quorum** with the variables' values.

## Step 3 — Always clean up

Every exit (passes, fails, vetoed, withdrawn) clears **all** the flags and
sets the bill's variables to 0. Debts are **not** cleared: they outlive the
bill. Write the list of flags and variables at the top of
`events\tgcx_laws.txt` in a comment, separating the bill's from the
country's (favours, debts, clock), and check by hand that every exit clears
the bill's.

## Step 4 — Checks without the game

- `python tools/tgc_scan.py` on both versions: OK.
- Every event id in the range; no localisation key repeated with TGC
  (search for every new key in TGC's `localisation\`).
- Balanced braces in every file (a `tgc_scan.parse` check or a 10-line
  script): Vic2 does not warn about an extra brace, it stops reading the
  file.
- **The example's arithmetic by hand**: with 85 / 10 / 5, what are
  `tgcx_yes`, `tgcx_no`, `tgcx_margin` and `tgcx_quorum` when presenting
  (10, 90, −80, 100) and after the design's §5 purchases (30, 20, 10, 50)?
  Follow the recompute event line by line.

## Step 5 — U-3: the user plays it

With the 1836 United Kingdom (and Belgium or France if there is time):

1. Present the bill. Does it appear? Does the vote decision show yes 10,
   no 90?
2. Buy abstentions and votes. Do the favours go down? Do the numbers
   change?
3. **Save with the debate halfway, quit, load.** Is the clock still
   running? (risk in `docs/law-design.md` §9)
4. Promise, request an audience, vote. Does the law pass? Are the flags
   cleared (try presenting another)? Does the debt remain?
5. Let a debt expire (with the deadline lowered to 2 months for the test):
   militancy and double prices?
6. Repeat with TGC v2.3.4 and v2.5.2.

---

## Gate (done when)

1. Step 4 green.
2. U-3 done with both versions, or the card stays **"done, not tested in
   game"**.
3. What was learned about the engine, as `Pnn` pitfalls if anything was
   surprising.

## Delivery

Report `docs/report-law-0-MMDD.md`: files, ids used, the U-3 result, how
long the law took in the United Kingdom (months of saving favours), and
what changes in the design before LAW-1 (the generator for the 48 bills
and the full affinity table).
