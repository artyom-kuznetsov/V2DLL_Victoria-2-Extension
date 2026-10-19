# U-7 — LAW-2 0.3.5 law layer in game (2026-10-18)

**Result: partly passed.** The Bill buttons, the bill flow from the Reforms
tab, the purchases, the Decisions tab and the monthly favour tick work in
game, and no popups appeared. Two things failed:

- **Step 3:** with a bill open, the Reforms tab still lights every row.
- **Step 5:** the `tgcx_` decisions are hidden from the tab but not from the
  top-bar decisions tooltip.

The user also gave design feedback on step 2: "seems a bit overwhelming to
have all laws available like this. some laws shouldnt be accessible or
negotiable, and follow the game natural progression." Nothing was changed
or installed in this session.

## Build tested

The installed build is **0.6.3** (TPL-1). It carries the 0.3.5 law layer
unchanged:

- The DLL on `E:` equals `E:\v2re\logs\tgcx-tpl1-1017\lua51-063.dll`
  (SHA-256 `723179ae…e700`).
- The installed `mod\TGCX\interface\country_politics.gui` has SHA-256
  `41cb9356…b8ce`, the 0.3.5 value from `report-law-2-reforms-1017.md`.
- The log header reads `TGCX TPL-1 0.6.3`, not `TGCX LAW-2 0.3.5` as
  `instructions-u-7.md` expects. That is only the build name.
- 144 guard OKs. That is 0.3.5's 62 plus the TPL guards. There are no
  mismatches.

## Run

- **Session:** 2026-10-18, 17:04–17:10 (local time). United Kingdom, 1836
  start (tag `ENG`), TGC v2.5.2 + TGCX. The user launched and exited the
  game normally.
- **Evidence:** six user screenshots. They are not in git (game art, R8):
  1. the Reforms tab with no bill;
  2. the Bill just opened;
  3. the Bill and the Reforms tab with a bill open;
  4. after a promise to the Reactionaries;
  5. after a Conservative abstention purchase, with the top-bar decisions
     tooltip showing;
  6. the Decisions tab.

The user's notes:

- "pressed universal weighted";
- "the decisions are hidden but they still show up when you hover your
  mouse over the decisions button";
- "favors did indeed go up in the month tick".

### Logs

**`E:\…\logs\tgcx.log`** (new run, base `00FB0000`). Every line
`instructions-u-7.md` expects is present:

```
Reforms tab hooks click=1 row=1 decisions=1 RVA=2DC990/2DB22D/2DB52A/2DB5E8
Decision message filter installed CALL_RVA=506691 gate_RVA=B07DA6
Bill native buttons bound=21 of 21
Favours collection requested through native decision handler tag=ENG hours=59883384
Reforms tab offers trinket_wage (first row lit)
Reforms tab presented tgcx_bill_vote_franschise_up (bill 11) tag=ENG
Bill first ordered overlay draw origin=830,334 Aye=10 abstain=0 Nay=90 cards=3
Reforms tab opened the Bill tag=ENG row=universal_weighted_voting
Bill tgcx_promise_reactionary requested through native decision handler tag=ENG
Decisions list hides tgcx_bill_slavery_up (and every tgcx_ decision while the Bill is usable)
Bill tgcx_buy_abstain_conservative_m1 requested through native decision handler tag=ENG
Favours collection requested through native decision handler tag=ENG hours=59884128
```

The two favour collections are 744 hours apart: 1836-01-03 and 1836-02-03.

**Game logs** (`Documents\…\TGC252_TGCX\logs`, rewritten at 17:04):
`error.log` and `system_error.log` are **empty**. `game.log` has no new
error lines. It does show `[TGCX] Denmark` in three event messages, from the
SUB-0 load-test override (finding F3).

## Steps

| # | Step | Result | Evidence |
|---|---|---|---|
| 1 | Start, load, one day | **pass** | First collection logged on 3 Jan; Bill GUI bound 21 of 21 |
| 2a | Reforms tab, no bill: some rows tan | **pass, with a design objection** | Screenshot 1: about 38 rows lit, roughly half of them steps backwards (F1, F4) |
| 2b | Click a tan row: bill starts, Bill opens, no popup | **pass** | `presented tgcx_bill_vote_franschise_up`; screenshot 2: Bill "Wealth Voting » Universal Weighted Voting"; no popup reported |
| 3a | Bill open: only the target row tan | **FAIL** | Screenshots 3–5: every row from screenshot 1 is still lit, also after Politics was closed and reopened twice (F1) |
| 3b | Click the target row: the Bill opens again | **pass** | `Reforms tab opened the Bill … row=universal_weighted_voting` |
| 4a | Recount, Withdraw, Vote, card buttons, sort headers visible | **pass** | Screenshots 2–5: Recount, Withdraw, "Vote from 3 Apr 1836", Abstain/Aye, Promise a law, Law promised, Audience, column headers. The text-sprite fix (`buttonText=""`) works |
| 4b | Abstain or Aye once: counts change, no popup | **pass** | Promise: 10→15 Aye, Nay 90→85; Conservative abstain 5 (2): Abstain 0→5, Nay 85→80, favours 3→1, "Spent on this bill: 2", entries in the negotiation log and Debts; no popup reported |
| 5 | Decisions tab: no `tgcx_` decision | **pass in the tab; FAIL in the top-bar tooltip** | Screenshot 6: only TGC's decisions. Screenshot 5: the tooltip "We can enact the following decisions" lists *Count the votes*, *Withdraw the bill* and *TGCX: load test* (F2, F3) |
| 6 | New month: favours rise once, no popup | **pass** | User: "favors did indeed go up in the month tick"; second collection logged on 3 Feb; no popup reported |
| 7 | Normal exit, screenshots | **pass** | Log closed 17:10:08; screenshots received |

**The popup filter works.** The DLL sent four decisions (two collections, a
promise and a purchase), and the user reported no "decision taken" popup.
Whether the engine runs the command synchronously no longer matters for
U-7.

**Colour codes print as colours.** "For" is green and "Against" red. That
closes deviation 7 of `report-law-2-controls-1017.md`.

## Findings

### F1 — the Reforms tab does not re-evaluate rows when a bill opens (step 3)

**Symptom.** After the bill started, screenshots 3–5 show the same set of
lit rows as screenshot 1. Board 1 lights only the target, as Free Press
does there.

**Diagnosis.** The cause is inferred from the code and the log, not
confirmed:

- `tgcx_ReformRowImpl` (`dll/tgcx/tgcx_reforms.h`) only acts inside the
  native row builder `FUN_006DA930`. It sets the enable byte on its way
  through.
- The click path proves `tgcx_BillReadModel` saw the active bill: the log
  line `Reforms tab opened the Bill`. So once the next tick refreshed it,
  `tgcx_reform_offer.active` would have been true.
- The rows still kept their earlier state:
  - If the builder had run again, the native byte would have come back 0
    for every row. The hook would then have re-lit only the target.
  - So the builder evidently did **not** run again. It did not run on the
    bill starting, and not on Politics hide/show either: the log shows the
    same view `4EE24588` being reused.
  - The rows are built once per view and keep their button state.
- The same flaw would leave rows lit after a bill ends, and leave rows dark
  if the chamber or cooldown state changes while the view exists.

**Proposed fix.** Ghidra research first, read-only. Two options:

1. Find what makes the native Politics view rebuild its reform rows: the
   caller chain of `FUN_006DA930` and a dirty flag on the view or its tab.
   Set that flag from the DLL whenever `tgcx_ReformRefresh` changes the
   offer. The native code then recomputes every row, including clearing
   them.
2. Fallback: store each row's button element in the row hook, and toggle
   its enabled state through the button's own vtable on a change.

Option 1 is preferred because it keeps the native semantics. Add a test for
"offer changed → rows re-evaluated", and log the number of rows lit per
pass instead of only the first.

### F2 — the top-bar decisions tooltip lists `tgcx_` decisions (step 5)

**Symptom.** Hovering the decisions alert in the top bar lists *Count the
votes* and *Withdraw the bill*: the `tgcx_` decisions whose `allow` holds
while a bill is open.

**Diagnosis.** That tooltip is built by a separate engine list, the
top-bar alert of enactable decisions. It is not built by `FUN_006DB2E0`,
the Decisions tab list the DLL filters. Hiding the decisions in script is
still impossible (P39).

**Proposed fix.** Ghidra:

- find the alert's builder, by the localisation key of "We can enact the
  following decisions" and its xrefs;
- add a guarded hook there with the same `tgcx_` name filter
  (`tgcx_HiddenDecisionName`) and the same conditions.

If every listed decision is ours, the alert icon itself should also stay
hidden. Check whether the alert counts the list or tests decisions
separately.

### F3 — the SUB-0 load test is still installed

**Symptom.**

- *TGCX: load test* appears in the decisions tooltip.
- `000_tgcx_loadtest_override.csv` renames Denmark to `[TGCX] Denmark`.
  That shows in `game.log`, and it would show in game text too.

**Diagnosis.** These are SUB-0 load-order probes (`submod/TGCX/decisions/
tgcx_loadtest.txt`, `localisation/tgcx_loadtest.csv`,
`localisation/000_tgcx_loadtest_override.csv`). They have outlived their
purpose.

**Proposed fix.** Remove the three files from the submod, or have
`install_submod.py` skip them unless a `--load-test` flag is given. Then
re-run `test_install_submod.py`. Its `tgcx_` name is ours, so F2's filter
would hide it from the tooltip anyway, but the Denmark rename stays visible
until the files are removed.

### F4 — design: too many reforms offered with no bill (user feedback)

**Symptom.** With no bill, about 38 rows are lit (screenshot 1). That is
every one-step neighbour of every current law, in both directions.

About half are steps backwards, which TGC does not otherwise make easy in
1836 UK. Examples:

- Freedom of Womb from Outlawed;
- Child Labour Legal;
- Capital Punishment;
- Meetings Not Allowed;
- State Press Only;
- Peonage.

Social reforms are lit even though the native header reads "Can't enact
social reforms".

**Diagnosis.** This works as designed:

- `tgcx_ReformOffers` offers any catalogue bill whose `from` is the current
  law, wherever a chamber exists and no cooldown runs.
- The DLL cannot evaluate TGC's triggers (deviation 3 of
  `report-law-2-reforms-1017.md`), so a lit row may still be refused.

The user wants the offer to "follow the game natural progression".

**Options.** This is a **[user]** decision (R9), and it changes the
mechanic, so board 1 has to change with it (R10):

| Option | What it means |
|---|---|
| A | **Progressive steps only**: offer `up` bills only; backward bills only where the native game would allow a backward reform (reactionary/conservative ruling party) |
| B | **Only what the game itself would let pass**: the favour collection writes one flag per catalogue bill from that bill decision's own `allow` (TGC's conditions, technology, movements, ruling-party stance). The DLL lights only flagged rows, so a lit row is never refused |
| C | **Only the issues the ruling party or the people are pushing**: the native "Important Issues" plus the ruling party's direction |

**Recommendation: B, combined with A's direction rule.** It reuses TGC's
own conditions instead of a parallel list (`docs/tgc-howto.md` rule), and it
removes the "lit but silently refused" case.

**Decided (user, 2026-10-18): A and B together.** The user said "both of
them actually sound good".

- A row is offered only when its bill passes that bill decision's own
  `allow`, written as a flag by the favour collection.
- Backward bills are offered only where the native game would allow a
  backward reform.

The mechanic changes, so board 1 must be updated in the same session that
implements it (R10). It is not implemented yet. A proposed decision ID is
left to the parent session.

## Mockup comparison (R10)

Boards 1 (`mockups/1-politics.png`) and 2 (`mockups/2-negotiation.png`)
against screenshots 1–6.

**Board 2, the Bill.** It matches in layout, sprites, sections and numbers
shown:

- vote/bloc/both toggles;
- projected hemicycle and Aye/Abstain/Nay totals;
- Political Favours with "+3 per month";
- Price in Favours table with 5/25-seat lots;
- Debts;
- bloc cards with Closeness rows, ideal diamond, Affinity and Votes;
- the Crown card;
- the negotiation log and the verdict line;
- three bottom buttons.

**Board 1, the Reforms tab.** It matches in the open-bill state only once
F1 is fixed.

The ten deviations of `report-law-2-controls-1017.md` and the four of
`report-law-2-reforms-1017.md` stand, except controls deviation 7: the
colour codes are confirmed. New in game:

1. **With a bill open, every offered row stays tan** (F1). Board 1 lights
   only the target. This is a defect, not an accepted deviation.
2. **The bill title wraps and overprints.** Long TGC law names wrap to a
   second line ("Wealth Voting » Universal Weighted Voting"), and the
   overflow "Voting" is drawn over the subtitle. The Closeness rows do the
   same: "Universal Weighted Voting" spills a fourth line ("Voting") under
   each card's three rows. Board 2's names are short ("Censored Press »
   Free Press").
   - **Reason:** the text boxes are sized for the board's names.
   - **Fix:** shrink the font or truncate to the box width in
     `tgcx_bill_gui.py` / the DLL text writer. Use the shorter
     localisation, as the native Reforms tab does ("Weighted Universal
     Voting" fits there at `Arial12`).
3. **The subtitle reads "Proposed 3 Jan 1836 by the Liberals".** Board 2
   reads "Introduced … by the Whigs", which names the party, not the
   ideology bloc.
   - **Reason:** the mechanic records the ideology bloc that presents.
   - **Fix:** a wording choice. Use the ruling party's name if it is
     wanted.
4. **The vote button reads "Vote from 3 Apr 1836"**, not "Call the Vote".
   - **Reason:** the debate timer (`tgcx_debate`) gates the vote. The board
     shows the state after the debate.
5. **The Bill opens over the Politics window** (origin 830,334; screenshot
   2). Board 2 shows it alone. In screenshots 3–5 it sits at the left
   edge; the log does not say whether the user moved it.
   - **Reason:** the Bill is a separate native window opened beside
     Politics.
   - **Fix:** acceptable as is; the user can move it.
6. **With no bill, several rows are lit.** This is reforms deviation 1,
   now seen in game; F4 proposes reducing it.

## What is not known

- Whether the native row builder rebuilds on a day tick. If it did,
  screenshot 5 would have changed by 3 Jan, so it is probably not, but this
  is unconfirmed.
- The exact number of rows lit. It was counted from screenshot 1, because
  the log prints only the first.
- Multiplayer is not tested (D5).

## Pitfall for the parent session

**P46 (proposed).** A native list or row builder that ran once keeps its
element state: a hook inside it that only sets state never clears what it
set earlier. Either make the native view rebuild, or own the elements' state
from then on (U-7, 2026-10-18).
