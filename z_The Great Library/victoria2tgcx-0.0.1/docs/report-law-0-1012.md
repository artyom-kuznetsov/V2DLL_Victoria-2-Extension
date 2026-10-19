# Report LAW-0 — the first bill, generated (2026-10-12)

> Card: `docs/instructions-law-0.md` (v3). Design: `docs/law-design.md`
> (v3, D7, D11). Target: TGC v2.5.2 (D1). **Status: done** (U-3 passed,
> see the addenda; the body below is as written before U-3).

## 1. What was built

| Step | What | Files |
|---|---|---|
| 0 | `common\event_modifiers.txt` generated at install time: TGC v2.5.2's file byte for byte (trailing blank lines trimmed) + our block between `# >>> tgcx` / `# <<< tgcx`. Never in git (`.gitignore`) | `tools/install_submod.py` (`--tgc`, default `<mod>\TGC_v2.5.2\TGC`), `submod/tgcx_event_modifiers.txt` (generated) |
| 1 | The data: affinity for `press_rights` (liberal, conservative, reactionary) and every number of the mechanic, including D11's favours rate | `data/tgcx_affinity.txt`, `data/tgcx_laws.txt` |
| 2-4 | The generator: reads our data and TGC's `issues.txt` / `ideologies.txt`, writes the decisions, events, localisation and modifier block; checks braces and repeated keys | `tools/gen_laws.py` |
| 5 | A simulation that runs the generated decisions for the 1836 United Kingdom | `tools/test_gen_laws.py` |

Generated (do not edit by hand; `python tools/gen_laws.py` rewrites them):

| File | Lines | Content |
|---|---|---|
| `decisions/tgcx_laws.txt` | 3 286 (948 KB) | the bill, 18 purchase decisions (3 blocs × 3 kinds × normal / double price), 3 promises, audience, count, call the vote, withdraw, the favours tick, 4 test aids |
| `events/tgcx_laws.txt` | 1 006 | passed, vetoed, the count changed; 51 whip-count reports (passes by 5…100, fails by 0…100, no quorum 0…45); 1 broken promise (Reactionaries, the only bloc that can be promised); 21 favours reports (test aid) |
| `events/tgcx_test_hidden.txt` | 16 | the `hidden = yes` experiment, in its own file |
| `localisation/tgcx_laws.csv` | 323 keys | English column, cp1252, TGC's 15 fields |
| `tgcx_event_modifiers.txt` | 9 modifiers | `tgcx_debate`, `tgcx_bill_cooldown`, `tgcx_favours_tick`, `tgcx_debt_deadline_*` and `tgcx_debt_broken_*` × 3 blocs, all icon 6, no effects |

Event ids used: **420 000 100 – 420 000 190** (77 events; the range is
LAW-0's, D8).

## 2. Gates

| Gate | Result |
|---|---|
| `python tools/check_exe.py` | ALL OK (nothing in LAW-0 touches the executable) |
| `python tools/tgc_scan.py …\TGC_v2.5.2\TGC` | anchors and range OK |
| Localisation keys clashing with TGC v2.5.2 | 0 of 323 |
| Event ids | 77, all in range, none repeated |
| Braces balanced, keys unique | checked by `gen_laws.py` on every run |
| `gen_laws.py` twice | identical output |
| `install_submod.py` twice | the generated `event_modifiers.txt` hashes the same (`885f589bd77fec89`) |
| `python tools/test_gen_laws.py` | **ALL OK**: tick +3 (base 2, prestige 250 → 2, hostile house −1); presenting 10 / 90 / −80 / 100; after 10 abstentions + 3 votes 25 / 25 / 0 / 50 with 35 favours spent; Reactionaries promised 30 / 20 / 10 / 50; recount the same and the "passes by 10" report; vote refused during the debate; without an audience the Crown vetoes a Whig bill and the bill is cleared (debt and cooldown stay); with one, `political_reform = free_press` and every bill flag and variable cleared |

The simulation checks the **script's logic** with our reading of the
engine (`check_variable` and `upper_house` are "at least", effects run in
order, `NOT` is "none of"). Whether the engine agrees is U-3.

## 3. Decisions taken while building (agent, within the design)

- **Prestige steps 50 / 150 / 300** instead of the design's first 20 / 50 /
  100: TGC gives the 1836 United Kingdom prestige 250, which would have hit
  the cap at once. With the new steps the UK gets +2 and the example stays
  +3 per month. The mockup's tooltip now says "Prestige 250 (1st)"
  (artifact version 27, PNGs re-exported).
- **"The count changed" keeps the bill** on the table (a window, not an
  exit): the player can buy more support or wait for an election.
- **Purchases do not recount**: they move the tallies by constants (Nay →
  abstain, Nay → Aye, abstain → Aye). Only presenting, a promise, "Count
  the votes" and "Call the vote" recount, and the vote always recounts
  before acting, so a stale tally cannot pass a bill.
- **The outcome is decided into flags first** (`tgcx_outcome_*`), then
  acted on: the acts (cleanup) reset the very variables the conditions
  read.
- **The Crown until GOV**: under a limited legislature it distrusts a
  ruling party of `liberal`, `anarcho_liberal`, `socialist`, `communist` or
  `anarchist` (data: `crown_distrusts`). Full legislatures always sign; the
  audience decision only appears under a limited one.
- **Governments**: bills only under a legislature (TGC v2.5.2:
  `prussian_constitutionalism*`, `hms_government*`, `dominion*` limited;
  `democracy*`, `trade_unions_congress` full). The absolute governments
  (the Crown decides alone) are LAW-1.
- **Ideologies without a stance** (the six not in `data/tgcx_affinity.txt`)
  count as abstaining. Irrelevant in the 1836 United Kingdom (83 / 12 / 5);
  LAW-1 gives every ideology a stance.
- **The tick decision is `tgcx_collect_favours`**, not
  `tgcx_favours_tick`: a decision and a modifier with the same name share
  the `_desc` localisation key.

## 4. Against the mockup (R10, board Bill)

`docs/law-design.md` §10 is the full table. Without the DLL:

| Mockup | In game (script only) | Why |
|---|---|---|
| The Bill window | no window: the decisions list | the window is the DLL's (D9) |
| Hemicycle, "would pass by N" | the whip-count report (one window, numbers in 5s) | no drawing from script |
| Favours "13 / 100", "+3 per month" + tooltip | not shown as numbers; purchases grey out when unaffordable; the tick's description lists the factors; test aid "How many favours?" | localisation cannot print a variable |
| Debts box | the deadline modifier with its date in the country's modifiers | — |
| Negotiation log | none | no history in script |
| Buttons Abstain / Vote Aye / Promise / Audience / Call / Withdraw | decisions with the same names and prices | — |
| Favours accrue on their own (D11) | a monthly decision to click until the DLL sends it | no hidden events (P22) |

## 5. Not tested (U-3)

Everything in game. What to look at, in `docs/instructions-law-0.md` step 6.
The risks worth watching:

1. **The 948 KB decisions file**: the count is 360 one-line blocks, copied
   into six decisions. TGC's own files are of that order; if loading slows
   or the decisions screen lags, LAW-1 shrinks it (e.g. the count only in
   "Count the votes" and "Call the vote", the others setting a "count
   needed" flag).
2. **`hidden = yes`**: unknown to the wiki; the test may log a line in
   `error.log` or open a window. Either way it becomes P22.
3. **`check_variable` with negative values** (the "fails by" reports test
   `tgcx_margin` ≥ −80…). TGC never does it; if it misbehaves, the reports
   shift but the vote does not (it only tests ≥ 5 and ≥ 50).
4. **Polled event with MTTH 1 day** for the broken promise: to see it in
   U-3, shorten `debt_days` in the data to 60 and regenerate.

## 6. What changes before LAW-1

- The full affinity table (9 ideologies × 23 groups), reviewed with the
  user; the 48 bills; the absolute governments.
- Remove the test aids (`[TGCX test]` decisions, `tgcx_test_hidden.txt`)
  and, if U-3 confirms everything, the SUB-0 load test.
- Depending on U-3: hidden events (the count and the tick move into silent
  events), the file size, the prices and the rate.

## Addendum (2026-10-12, same day) — the `hidden` test dropped

The user confirmed from play that every Vic2 event opens a window; the wiki
(Event modding, How to make an event) lists no `hidden` key and TGC has 0
uses; the user had already fired the test once and its window opened
(`game.log`). Recorded as **P22**. Before U-3, removed from `tools/gen_laws.py`:
`events/tgcx_test_hidden.txt` (event 420 000 109), the decisions
`tgcx_debug_hidden` / `tgcx_debug_hidden_ran` and their 3 localisation keys.
So §1's table now reads: decisions 3 258 lines, 2 test aids fewer;
localisation 316 keys; **76 events**. §5 risk 2 and the "depending on U-3:
hidden events" bullet in §6 no longer apply: the tick stays a decision the
DLL sends. `test_gen_laws.py` ALL OK after regenerating; reinstalled.

## Addendum (2026-10-12) — U-3, points 1-5

The user played the 1836 United Kingdom on TGC v2.5.2 (settings folder
`TGC252_TGCX`): "everything works according to plan from points 1 to 5".
`error.log` is empty; `setup.log` registers the 9 modifiers and loads
`decisions/tgcx_laws.txt` (#37). `game.log` shows, across several runs:

- the favours tick and "How many favours?" each month;
- the bill presented, the whip report, purchases, "Count the votes";
- a promise to the Reactionaries; a save loaded mid-debate;
- **a veto** (3 April 1836: "Call the vote" without an audience → "The
  Crown Vetoes the Bill");
- **a pass** (7 April 1836, after the 90-day debate: audience, 9
  abstentions + 4 Aye votes, no promise → "The Bill Passes"). 9 × 2 + 4 × 5
  = 38 favours + 10 for the audience; margin 30 − 25 = 5, quorum 55: the
  smallest win the rules allow, as designed.

**Feedback:** the user "needed more clicks than previously thought for
favours". The log agrees: a winning bill is 13 purchase clicks (one per 5
seats, as the Bill board has it), and with no numbers on screen the player
clicked "Count the votes" after almost every purchase to see the effect; on
top of that, 48 favours are 16 monthly "Collect" clicks without the DLL.
Decided with the user: see the next addendum.

Still open: point 6 (a debt expiring, built with `debt_days` 60) and point 7
(screenshots for R10).

## Addendum (2026-10-12) — 25-seat lots, and the build for points 6-7

The user chose the purchase clicks as the problem (not the counting or the
saving up) and "add a 25-seat lot":

- `data/tgcx_laws.txt` `lots = { 5 25 }`; `tools/gen_laws.py` writes one
  purchase decision per lot (`tgcx_buy_<kind>_<bloc>_<stance>_25`, and
  `_25_x2`), at lot/5 times the price, all or nothing (`tgcx_left_<bloc>` ≥
  25). 48 purchase decisions; decisions file 3 870 lines (970 KB);
  localisation 364 keys, 0 clashing with TGC v2.5.2.
- `tools/test_gen_laws.py`: the 1836 bill with lots, 4 clicks (Aye 25,
  abstain 25, abstain 5 × 2): 35 / 30 / +5 / 65, 39 favours. ALL OK.
- Mockup (R10): the Bill board's price panel has a "Buy in lots of 5 / 25
  seats" selector (the game's checkboxes as radio buttons, like the view
  selector), the table shows the chosen lot's prices and the buttons read
  "Abstain 25 (10)" / "Aye 25 (25)". Artifact version 29;
  `mockups\2-negotiation.png` re-exported with a 25-seat purchase.
- `--debt-days N` in `gen_laws.py` for test builds; the promise's text
  says "within 60 days" in one. **Installed now: the 60-day build**; the
  repository's generated files are the normal ones (1 825 days).

## Addendum (2026-10-12) — U-3 complete: LAW-0 done

The user ran points 6-7 with the 60-day test build: "everything done. it
all works". Screenshots (game art, kept out of git in `mockups\u3\`):
the decisions list (bill, favours tick, test aids), the 25-seat lots, the
broken-promise window, a whip report, the broken-debt modifier's tooltip.
`error.log` empty. Two runs in `game.log`: promise + 25-seat lots on
1 January; "A Promise to the Reactionaries Broken" on 2 April.

What the screenshots show, against the design:

- The broken promise: "+2.00 militancy" for the pops supporting
  Reactionary, and the modifier "Broken promise to the Reactionaries" until
  2 April 1846 (3 650 days, exact), whose tooltip says buying their votes
  costs double.
- The 25-seat decisions with their prices in the title: "Conservatives:
  abstention, 25 seats (10 favours)", "vote Aye, 25 seats (25 favours)".
- The whip report after the broken promise: "would pass by 30 seats". Right
  by the script: 2 × abstain 25 + Aye 25 + the promised Reactionaries = 40
  Aye, 10 Nay. Note that the promise still counts for the bill in debate
  after it is broken; harmless with real numbers (a 5-year deadline against
  a 90-day debate), reviewed in LAW-1.

**New pitfall P23:** the broken-promise event fired a month after the
deadline modifier ended (expected around 2 March, fired 2 April, both runs).
Acceptable for 5-year debts; on-the-day logic stays in decision `allow`s.

**Against the Bill board (R10, gate item 3)**, script only (the window is
the DLL's, D9); every difference has its reason in §4 and in
`docs/law-design.md` §10:

| Bill board | In game | Reason |
|---|---|---|
| The Bill window with blocs, closeness and stance | the bill decision's description names each bloc's stance | no window without the DLL |
| Projected vote "Would pass 40 to 25" + hemicycle | whip report "would pass by 30 seats" (margin only, in 5s) | localisation cannot print a variable; one event per margin |
| Favours "9 / 100", "+3 per month" + breakdown | "[TGCX test] How many favours?" (rounded to 5); the tick's description lists the factors | same |
| "Buy in lots of 5 / 25" selector | one decision per lot, the seats and price in each title | decisions have no selector |
| Debts box | the deadline / broken modifiers with their dates and tooltips | the modifier is the timer |
| Negotiation log | none (only `game.log`) | no history in script |
| Crown row, Audience button | "Audience with the Crown (10 favours)" decision; the veto event | same mechanic |

**How long the bill takes the 1836 United Kingdom:** 39 favours with the
lots (49 with the audience the Crown requires) at +3 per month, starting
from 0: about **17 months** of favours, then the 90-day debate.

**LAW-0 gate:** step 5 green; U-3 done; the board compared (table above);
P22 and P23 recorded. **LAW-0 is done.** Before LAW-1: remove the test aids
and the SUB-0 load test; the full affinity table (9 ideologies × the
chosen groups) is the user's to review (R9).
