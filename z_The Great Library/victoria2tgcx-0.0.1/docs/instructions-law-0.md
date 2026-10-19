# LAW-0 — First bill with favours and affinity, end to end

> Step-by-step instructions (v3, 2026-10-12; v2 verbatim in
> `docs/archive/instructions-law-0-v2.md`, the staged v1 in
> `docs/archive/instructions-law-0-v1-stages.md`). Design:
> `docs/law-design.md` v3. Depends on SUB-0 (done, U-2 passed).
> Target: **TGC v2.5.2 only** (D1, revised). Favours: D11 (virtual
> purchases per bill; automatic accrual; the rate from prestige and other
> factors). Rules: `AGENTS.md` R3, R4, R6,
> R8, R10; P16 (there is no `if`), P20 (`000_tgcx_` for overrides), P21
> (a fired event's `trigger` is not checked: branch in the effect).
> **Mockup (R10):** boards **Bill** and **Main** in
> <https://claude.ai/artifact/Wt2YTaaM6xV8JXsUwapRV4>, PNGs in `mockups\`;
> `docs/law-design.md` §10 maps each element. **TGC's systems to copy:**
> `docs/tgc-howto.md` §1-2 and the table in `docs/law-design.md` §2: open
> each cited TGC example before writing its counterpart.

**Why:** before generating 48 bills we need **one** working completely in
game: present, count, purchases, promise, audience, vote, signature and the
law passed. If the engine does not behave as the design says (timed
modifiers across saves, the step-chains, the windows events open), it is
discovered with one bill, not with 48.

**Chosen law:** `press_rights`, from `censored_press` to `free_press`.
Confirm the names in TGC v2.5.2's `common\issues.txt` before starting.

**Test country:** the 1836 United Kingdom (chamber 83 / 12 / 5, government
`hms_government`, Whig party). It is the example in `docs/law-design.md`
§5: it must cost **35 favours and one promise** (plus 10 if the Crown is
against).

**Does not touch:** TGC's files (R1); `dll\`. Generates nothing for other
laws or for ideologies other than the three in the British chamber (but
the generator script is written so the other six only need data).

---

## Step 0 — The generated `event_modifiers.txt` (the seed of COMPAT-1)

The timers are modifiers, and modifiers live in one fixed-name file.

1. In `tools\install_submod.py`, after copying `submod\TGCX\`, build
   `<mod>\TGCX\common\event_modifiers.txt` = TGC v2.5.2's
   `common\event_modifiers.txt`, byte for byte, + our block between
   `# >>> tgcx` and `# <<< tgcx` from `submod\tgcx_event_modifiers.txt`
   (ours, in git; it is not under `TGCX\common\` so the copy step never
   ships it alone). `--remove` removes it with the rest. The TGC folder is
   an argument (default: `<mod>\TGC_v2.5.2\TGC`).
2. Idempotent: installing twice gives the same bytes (check with a hash).
3. The file is **never** committed (R8): it only exists in the game's
   `mod\`. `.gitignore` covers `submod\TGCX\common\event_modifiers.txt` in
   case someone generates into the repo.
4. Our modifiers, each with an `icon` that already exists in TGC's file
   (look at what `law_changed_by_force`, icon 6, uses) and **no effects**
   except the broken-debt one:
   `tgcx_debate`, `tgcx_bill_cooldown`, `tgcx_favours_tick`,
   `tgcx_debt_deadline_reactionary`, `tgcx_debt_broken_reactionary`.
5. Localisation for each modifier name in `localisation\tgcx_laws.csv`
   (they show in the country's modifier list: "Bill in debate", "Promise to
   the Reactionaries: law owed"…).

Check: install, start the game, `error.log` empty, and TGC's own modifiers
still work (a TGC event modifier visible in a country, e.g. one from a
start-date event).

## Step 1 — The data, in files of our own

In `data\` (read by our script, not by the game):

1. `data\tgcx_affinity.txt`: only `press_rights` for `liberal`
   (`free_press`, 2), `conservative` (status quo, 1) and `reactionary`
   (`state_press`, 2).
2. `data\tgcx_laws.txt`: the favours rate's factors with their thresholds
   and values (`docs/law-design.md` §5 table, D11), the clamp (0 … 8), cap
   (100), prices per step
   (§5 table), audience (10), debate (90 days), debt deadline (1 825 days),
   broken-debt militancy factor (2) and duration (3 650 days), cooldown
   (365 days).

## Step 2 — The generator script (the seed of LAW-1)

`tools\gen_laws.py` (≈ 100-200 lines, stdlib only) reads the two data files
and writes `submod\TGCX\decisions\tgcx_laws.txt`,
`submod\TGCX\events\tgcx_laws.txt` and `localisation\tgcx_laws.csv`
(cp1252). LAW-0 runs it for one bill; it must not be hand-edited after
generation (regenerate instead). The **count block** (`docs/law-design.md`
§4) is a function that returns text and is pasted at the end of every bill
decision's effect.

Events: 420 000 100 – 420 000 199.

## Step 3 — What it generates

1. **Present** — `tgcx_law_press_rights_free_press`. `potential`:
   `ai = no`, `press_rights = censored_press`, no `tgcx_law_active` flag,
   no `tgcx_bill_cooldown` modifier. `allow`: **`free_press`'s `allow` from
   TGC v2.5.2** (copied by the script from `common\issues.txt`, not by
   hand). `effect`: flags `tgcx_law_active`,
   `tgcx_law_press_rights_free_press`, the stance flags
   (`tgcx_stance_liberal_p2`, `tgcx_stance_conservative_m1`,
   `tgcx_stance_reactionary_m2`), the `tgcx_debate` modifier (90 days),
   then the count block.
2. **Count the votes** — free decision, with an active bill: the count
   block, then **one whip-count report event** chosen with `random_owned`
   limits on the fresh `tgcx_margin` / `tgcx_quorum` (P21: the choice is in
   the effect, never in the event's trigger).
3. **Buy** — generic decisions per ideology × type (abstain / vote yes) ×
   stance, `potential` = active bill + the stance flag, `allow` =
   `check_variable` on `tgcx_favours` ≥ price and seats left (the count
   keeps a `tgcx_left_<ideology>_ab` / `_yes`). Effect: `change_variable`
   −price on `tgcx_favours`, +price on `tgcx_spent`, +5 on
   `tgcx_buy_<ideology>_<type>`, the count block. Double-price twins with
   `has_country_modifier = tgcx_debt_broken_<ideology>`. (After U-3: each
   also as a 25-seat lot, `lots` in the data; `docs/law-design.md` §5.)
4. **Promise** — for the strongly-against bloc, if it has no
   `tgcx_debt_<ideology>`: flags `tgcx_debt_<ideology>` and
   `tgcx_promised_<ideology>`, the `tgcx_debt_deadline_<ideology>` modifier
   (1 825 days), the count block.
5. **Audience** — −10 favours, flag `tgcx_crown_signs`.
6. **The monthly tick (`tgcx_collect_favours`)** — `potential` = no
   `tgcx_favours_tick` modifier; effect: the **rate blocks** (one per
   factor and threshold, `docs/law-design.md` §5; each also sets a flag
   `tgcx_rate_<factor>_<n>` so the DLL can draw the breakdown tooltip
   without recomputing anything), the clamp, the cap block, the modifier
   again (30 days). Available from the start of the game, bill or not;
   `ai_will_do` factor 0. Its description lists the factors. First check
   every name it uses in TGC v2.5.2: the `vote_franchise` options in
   `common\issues.txt`, the archetype modifiers and `national_instability`
   / `power_vacuum` in `common\event_modifiers.txt`. Sending it
   automatically is DLL work (D11), not LAW-0's.
7. **Call the vote** — `allow`: NOT `tgcx_debate`, `tgcx_margin` ≥ 5,
   `tgcx_quorum` ≥ 50. Effect: the count block, then `random_owned`
   branches: fresh margin and quorum hold → the Crown (signs:
   `political_reform = free_press`, clears the debts this law pays, the
   "passed" event; vetoes: the "vetoed" event, cooldown); otherwise the
   "the count changed" event, and the bill stays (it is not an exit).
   **Withdraw**: always available with the bill
   active; cooldown.
8. **The Crown** — by government group (`docs/law-design.md` §6). First
   measure which governments have `election = yes` in TGC v2.5.2's
   `common\governments.txt` and write the list into the design. Signs if
   full legislature, `tgcx_crown_signs`, or the generic ruler is for it.
   Check whether TGC's political-leader modifiers (`has_political_leader`,
   `events/PoliticalLeaders.txt`) give a better stance and note it for GOV.
9. **Broken promise** — polled event, `mean_time_to_happen = { days = 1 }`,
   `trigger` = `tgcx_debt_reactionary` set and the deadline modifier gone
   (copy TGC's event 443040's shape). Option: clear the flag;
   `any_pop = { scaled_militancy = { ideology = reactionary factor = 2 } }`;
   `tgcx_debt_broken_reactionary` for 3 650 days.
10. **Localisation** — `<id>_title` / `<id>_desc` for every decision; every
    purchase title states its price and the bloc's stance; the vote's
    description lists its conditions; English column only (D10).
    (No `hidden` test: Vic2 has no hidden events, P22, 2026-10-12.)

## Step 4 — Always clean up

Every exit (passes, vetoed, withdrawn) clears
**all** the bill's flags, sets the bill's variables to 0 and removes
`tgcx_debate`. Debts are **not** cleared: they outlive the bill. The script
writes the list of the bill's flags, variables and modifiers at the top of
`events\tgcx_laws.txt` in a comment, separating them from the country's
(favours, debts, timers), and the cleanup block is generated **from that
same list**, so they cannot drift apart.

## Step 5 — Checks without the game

- `python tools/tgc_scan.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC_v2.5.2\TGC`: OK.
- Every event id in 420 000 100 – 420 000 199; no localisation key repeated
  with TGC (search every new key in TGC's `localisation\`).
- Balanced braces in every generated file (a 10-line check in
  `gen_laws.py`): Vic2 does not warn about an extra brace, it stops reading
  the file.
- `gen_laws.py` twice → identical output (hash).
- **The example's arithmetic**, simulated by a test in `gen_laws.py` that
  walks the count block with the 1836 shares (83 / 12 / 5): yes / no /
  margin / quorum when presenting **(10, 90, −80, 100)** and after the §5
  purchases **(30, 20, 10, 50)**.

## Step 6 — U-3: the user plays it

With the 1836 United Kingdom on TGC v2.5.2:

1. Collect favours a few months: does "Collect political favours" light
   up once a month, and do favours rise by 3 each time (expected for the
   United Kingdom: base 2, prestige 250 → 2, hostile house −1)? Check with
   "[TGCX test] How many favours?"; "[TGCX test] +50 favours" skips the
   wait (test aids, removed in LAW-1).
2. Present the bill. Does a whip report say Nay leads by 80? Does "Bill in
   debate" appear in the modifiers with its date?
3. Buy abstentions and votes. Do the costs show in the titles? Does the
   count change as §5 says?
4. **Save with the debate halfway, quit, load.** Is the modifier still
   there with the same date? (`docs/law-design.md` §9.)
5. Promise, request an audience, vote. Does the law pass? Is everything
   cleared (try presenting another)? Is the debt modifier still there?
6. Let a debt expire (`python tools/gen_laws.py --debt-days 60`, install,
   then regenerate without it):
   militancy among reactionary pops and double prices?
7. Screenshots of the decisions list, the modifiers and each report window,
   to compare with the Bill board (R10, §11 point 4).

---

## Gate (done when)

1. Step 5 green.
2. U-3 done, or the card stays **"done, not tested in game"**.
3. The Bill board compared with the screenshots: every difference fixed or
   listed with its reason (`docs/law-design.md` §10 is the starting list).
4. What was learned about the engine, as `Pnn` pitfalls.

## Delivery

Report `docs/report-law-0-MMDD.md`: files, ids used, the U-3 result, how
long the law took in the United Kingdom (months of saving favours), the
deviations from the mockup, and what changes in the design before LAW-1
(the full affinity table and the 48 bills).
