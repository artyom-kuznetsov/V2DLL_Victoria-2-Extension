# Design: laws with political favours and ideological affinity

> **Reference** (v4, 2026-10-12). Decision D7 (user, 2026-10-12): **direct
> political favours and each bloc's ideological closeness to each law**,
> instead of Better Politics Mod's staged negotiation
> (`docs/archive/law-design-v1-stages.md`).
>
> **v3 (same day) keeps the mechanic and changes the plumbing:** it is
> rebuilt on TGC v2.5.2's own idioms (`docs/tgc-howto.md` §1-2) and on what
> U-2 measured (P19-P21). v2, verbatim: `docs/archive/law-design-v2-1012.md`.
> What changed is listed in §12. Target: TGC v2.5.2 only (D1, revised).
>
> **v4 approved for LAW-1:** TGC's conditional reform-support rules supply
> starting votes. Reviewed affinity controls bargaining and promised laws.
> The catalogue preview has not implemented this revision yet; LAW-0 keeps
> its tested legacy behavior. v3 is preserved in `archive/law-design-v3-1012.md`.
> Local Bill mockup updated/exported; online republish needs browser access.
> See `report-law-1-start-1012.md` for evidence and remaining gates.
>
> Rules: `AGENTS.md` R3, R4, R5, R6, R10; P16 (no `if`), P21 (a fired
> event's `trigger` is not checked). **Mockup (R10):** boards **Bill** and
> **Main** in <https://claude.ai/artifact/Wt2YTaaM6xV8JXsUwapRV4> (private:
> it contains game and TGC art), PNGs in `mockups\`. §10 maps every element
> of the Bill board to how it is built.

---

## 1. What the player gets and why

The user disliked BPM's **stalling**: rolls that push a bill back even when
everything was done right. This design is **deterministic**:

- **What you see is what happens.** Each bloc in the upper house has a
  stance on the bill, computed from its ideological closeness to the law.
  The projected vote is the vote that is cast.
- **No rolls, no phases, no stalling.** A debate of fixed length, then the
  vote is called whenever the player wants.
- **The price is political favours**, a country resource that builds up
  slowly. Favours buy abstentions and votes, in lots of 5 or 25 seats
  (25 added after U-3), and audiences with the Crown.
- **What favours cannot buy is promised**: a law the bloc wants, with a
  deadline. The promise is a **debt**; breaking it is expensive.

---

## 2. What TGC already does, and what we reuse

Measured in TGC v2.5.2 (`grep` over `decisions\` / `events\`,
2026-10-12). Rule: extend TGC's way of doing a thing, don't build a parallel
one (`AGENTS.md` §7).

| Needed | TGC's idiom | Uses (decisions / events) | Where it is used here |
|---|---|---|---|
| Read the upper house | trigger `upper_house = { ideology = X value = 0.3 }` (share ≥ 30 %) | 35 / 312 blocks (`upper_house = {`, as trigger or effect) | §4 the projected vote |
| Keep count | `set_variable` / `change_variable` / `check_variable = { which = X value = N }` (≥ N) | 131 / 151 / 336 | favours, the tallies, purchases |
| Spend in fixed steps | the `owed_cash_money` chain: `check_variable` ≥ N, then `change_variable` −N | 219 (`decisions/3_Clean-Up.txt`) | §5 prices |
| Branch | `random_owned = { limit = { owner = { … } } owner = { … } }` | 2 463 / 2 874 | everywhere (P16, P21) |
| A timer that survives saving | **a modifier with a duration + a flag**, and a polled event whose trigger is "flag set **and** modifier gone" | `state_of_emergency` (`decisions/Political.txt` 359) → event 443040 (`events/PoliticalEvents.txt` 5150) | §7 the debate, §5 debt deadlines |
| Remember what to restore | `set_country_flag = return_to_free_press`, read back by the closing event | 4 flags (`return_to_*`) | §5 promises |
| Pass the law | `political_reform = free_press` (or `press_rights = free_press`) | `political_reform`: 1 691 | §7 the Crown signs |
| Anger one ideology's pops | `any_pop = { scaled_militancy = { ideology = reactionary factor = 5 } }` | `events/ACW.txt` 5805 | §5 a broken promise |
| A vote tally | Congo Conference: reset yes / no / abstain variables, add to them, read with thresholds | `decisions/Belgium.txt`, `events/Scramble for Africa.txt` 955182-955185 | §4, the same shape |
| Polled result events | `mean_time_to_happen = { days = 1 }` + a `trigger` (checked, unlike fired events, P21) | 67 events with MTTH 1 day | §5 expiry, §7 |

**What TGC does not have, and what that costs:**

- **No hidden events (P22).** Vic2 has no `hidden` key (the user, the
  wiki, 0 uses in TGC), so **every event opens a window**. Silent work goes into
  **decision effects** (decisions open no window); events are kept for what
  the player should be told anyway (a broken promise, the vote's result).
- **No arithmetic between variables.** Every number is built from
  constants: "if liberals hold ≥ 7.5 %, +5 to yes" is one `random_owned`
  block; 20 steps × 9 ideologies = 180 blocks, **generated** (LAW-0 writes
  the 20-line script that does it; LAW-1 grows it into the generator).
- **No localisation of variables.** A decision's tooltip shows
  `check_variable` conditions as met or not met, but not the number. The
  numbers are shown by the "whip count" (§4) and, with the DLL, by the Bill
  window (§8).
- **Fixed-name files.** A new modifier needs `common\event_modifiers.txt`,
  which is one file: it is **generated** from the installed TGC v2.5.2 at
  install time, with our block appended between `# >>> tgcx` / `# <<< tgcx`
  (`docs/tgc-compatibility.md` §2-3; not in git, R8).

Consequences carried from v2:

- **Seats go in fives.** The chamber is counted in steps of 5 seats,
  rounded to the nearest (step k when the share is ≥ 5k − 2.5 %, so the
  trigger values are 0.025, 0.075, 0.125…): the 1836 United Kingdom
  (conservatives 83, liberals 12, reactionaries 5) votes as 85 / 10 / 5.
- **TGC's options have an `allow`.** The bill copies the `allow` of the
  target option from TGC v2.5.2: nothing TGC does not allow is presented.

---

## 3. Affinity: each bloc's bargaining preference

For bargaining, each ideology has, **for each law group**, an ideal option and an
intensity (1 or 2). Facing a bill that moves the group from option `a` to
option `b`:

| the bill… | stance |
|---|---|
| moves the group closer to its ideal | **for**: +intensity (+1 for, +2 strongly for) |
| moves it away from its ideal | **against**: −intensity (−1 against, −2 strongly against) |
| leaves it at the same distance | **undecided** (0) |

**Conservatives** have **the status quo** (the current option) as their
ideal, with intensity 1: their bargaining preference opposes change weakly.
Their starting vote in LAW-1 still responds to TGC's pressure rules.

Example, `press_rights` (`state_press` 0, `censored_press` 1, `free_press`
2), from 1 to 2 in the 1836 United Kingdom:

| bloc | ideal | intensity | stance |
|---|---|---|---|
| liberal | `free_press` (2) | 2 | +2, strongly for |
| conservative | status quo (1) | 1 | −1, against |
| reactionary | `state_press` (0) | 2 | −2, strongly against |

**Where it lives:** a data file of our own, read by our tools (not by the
game): `data\tgcx_affinity.txt` in the repository. The generator turns it
into **stance flags** set by each bill's "present" decision
(`tgcx_stance_liberal_p2`…). It names the ideal option **by name**:

```
liberal = {
    press_rights = { ideal = free_press intensity = 2 }
    ...
}
```

**Every LAW-1 affinity row is explicit and reviewed.** Do not infer an
ideal from the presence of an add/remove reform block: these are conditional
category support rules, not per-law ideals. Missing rows fail generation.
`data/tgcx_law_catalog.txt` holds the full review; the original small file
remains the LAW-0 baseline.

**Initial values** (to be discussed with the user, [user]):

| ideology (TGC) | political | social |
|---|---|---|
| liberal | most open, 2 | lowest, 1 |
| anarcho_liberal | most open, 2 | lowest, 2 |
| conservative | status quo, 1 | status quo, 1 |
| reactionary | most closed, 2 | lowest, 1 |
| socialist | most open, 2 | highest, 2 |
| communist, anarchist | most open, 1 | highest, 2 |
| fascist | most closed, 2 | highest, 1 |

Exceptions worth writing by hand (groups TGC orders the other way round or
that do not run from "closed" to "open": `slavery`, `centralization`,
`border_policy`, `colonial_policy`…): reviewed group by group in LAW-1.

---

## 4. The projected vote

**LAW-1 approved model (implementation pending):**

- Evaluate TGC's applicable add/remove political/social rule for each bloc
  and the current country. Its support fraction supplies starting Aye;
  remaining seats start Nay. Re-evaluate during counts and before voting.
- Affinity determines bargaining terms and whether a later law repays a
  promise. It no longer maps a whole bloc directly to Aye/Nay/abstention.
- Purchases move available opposing seats to abstention or Aye; promises
  secure remaining support. Never buy an already supportive seat or count
  a seat twice. Retain the agreed favour prices unless a change is reviewed.
- Pass when Aye > Nay and Aye + Nay >= 50 of 100 seats, then apply the
  agreed Crown signature/veto. Recheck law, government and target allows.

Native arithmetic research and exact allocation/rounding are recorded in
`report-law-1-start-1012.md`. The script must conserve 100 chamber seats;
independent nearest-five rounding across nine blocs currently does not.
Full native parity is not yet demonstrated. Import rules from installed
TGC v2.5.2, preserving pressure thresholds and ruling-party conditions.

**Legacy LAW-0:** the installed/tested one-bill implementation still maps
positive affinity to Aye, zero to abstention and negative to Nay, in
five-seat slices. Its examples and purchases elsewhere in this document
remain that historical baseline. Default `gen_laws.py` output remains
byte-identical. The old section 4 is preserved verbatim in
`archive/law-design-v3-1012.md`. The catalogue preview also still uses
that formula until the approved migration is implemented.

---

## 5. Political favours

`tgcx_favours`, from 0 to 100. They are spent on the active bill; if the
bill fails, is withdrawn or is vetoed, **what was spent is lost**.

**They accrue on their own, like diplomatic points** (user, D11). On the
1st of each month the **monthly tick** adds the rate below (capped at 100
with a `check_variable` ≥ 100 → `set_variable` 100 block). Since TGC has
no hidden events (§2), the tick is a **"Collect favours" decision**
(`tgcx_collect_favours`) whose
`potential` is "the timer modifier `tgcx_favours_tick` (30 days) is gone"
and whose effect adds the rate and the modifier again:

- **With the DLL** it is sent automatically every month through
  `CExecuteDecisionCommand` (R5): the player never sees it, as with
  diplomatic points.
- **Without the DLL** (R6) the same decision lights up once a month and the
  player clicks it: the fallback, not the design.

**The rate** (user, D11: "from prestige along other modifiers like
government stability, militancy, consciousness, voting pop and monarch
support"). Built like every number here: a block per threshold, generated,
inside the tick's effect. Vic2 and TGC have no "stability" or "monarch
support" value (0 uses in TGC v2.5.2), so each factor uses the closest
thing the game has. **Initial values, to be tuned after U-3:**

| factor | how the game reads it (TGC v2.5.2) | per month |
|---|---|---|
| base | — | **+2** |
| prestige | `prestige` ≥ 50 / 150 / 300 (3 660 uses in TGC; the 1836 United Kingdom starts at 250) | +1 each, up to **+3** |
| a working majority (stability) | the ruling party's ideology holds ≥ 50 % of the upper house: `ruling_party_ideology = X` + `upper_house = { ideology = X value = 0.5 }`, one block per ideology; < 20 % is a hostile house | **+1** / **−1** |
| instability (stability) | TGC's own modifiers `national_instability` and `power_vacuum` (no leader); `war_exhaustion` ≥ 20 | **−1** each |
| militancy | `average_militancy` ≥ 3 / ≥ 6 | **−1** each |
| consciousness | `average_consciousness` ≥ 5 / ≥ 8: an aware public watches the back rooms | **−1** each |
| voting pop | the franchise law: `vote_franchise` at `no_voting` or `landed_voting` (patronage politics) / at the universal options | **+1** / **−1** |
| monarch and leader support | TGC's political-leader archetypes (`events/PoliticalLeaders.txt`): `backroom_boy` +2; `great_statesman`, `administrative_genius` +1; `gauche_buffoon`, `raving_loon` −1. With GOV (D4), the ruler's stance towards the ruling party (+1 / −1) | **−1 … +2** |
| | **clamped to 0 … +8** | |

Names (`vote_franchise` options, archetype modifiers) are checked against
TGC v2.5.2's files in LAW-0, not taken from this table. Example, 1836
United Kingdom (mockup): base +2, prestige +2, a house where the Whigs hold
12 % −1 = **+3 per month**.

**Price per step of 5 seats** (TGC's step-chain: the decision's `allow` is
`check_variable` ≥ price, the effect `change_variable` −price):

| bloc's stance | abstention | vote for yes |
|---|---|---|
| undecided | — | 2 |
| against | 2 | 5 |
| strongly against | 5 | **only with a promise** |

**Lots** (user, U-3, 2026-10-12: a bill took 13 clicks): every purchase
also comes as a **25-seat lot** at 5 × the price, all or nothing (it needs
25 seats of the bloc still unbought). The 1836 United Kingdom's bill then
takes 4 purchases instead of 13 (Aye 25, abstain 25, abstain 5 × 2: 39
favours). The lots are a list in `data\tgcx_laws.txt` (`lots = { 5 25 }`).
In the Bill window (DLL) the lot is a selector next to the price table.

**Audience with the Crown:** 10 favours; the Crown signs this bill (§6).

**Promises (debts)** — built like TGC's state of emergency:

- Promising sets `tgcx_debt_<ideology>` (the debt), `tgcx_promised_<ideology>`
  (this bill: the bloc votes yes in full), and adds the timer modifier
  **`tgcx_debt_deadline_<ideology>`, duration 1 825 days** (5 years). The
  modifier shows in the country's modifier list with its expiry date: the
  deadline is visible without the DLL.
- **Kept:** any later bill that moves that bloc towards its ideal clears
  the flag and removes the modifier (`remove_country_modifier`) in its
  "passed" branch.
- **Broken:** a polled event (MTTH 1 day) with
  `trigger = { has_country_flag = tgcx_debt_<ideology> NOT = { has_country_modifier = tgcx_debt_deadline_<ideology> } }`
  — exactly TGC's event 443040. Its option: clear the flag;
  `any_pop = { scaled_militancy = { ideology = <ideology> factor = 2 } }`
  (+2 militancy weighted by the pop's support for that ideology, TGC's
  idiom); and `tgcx_debt_broken_<ideology>` for 3 650 days, under which the
  bloc's purchase decisions are swapped for double-price ones.
- One debt per bloc at a time (the promise decision requires no flag).

**What it costs, an example.** 1836 United Kingdom, `free_press`: yes 10,
no 90. Ten steps of conservative abstention (20 favours) and three of
conservative votes (15) leave yes 25, no 25… with the reactionaries
promised, yes 30 and no 20, quorum 50: **35 favours and one promise**, plus
10 for the audience if the Crown is against. At +3 per month, a year of
saving.

The numbers live in `data\tgcx_laws.txt` (ours, read by the generator), so
they can be tuned by regenerating.

---

## 6. The Crown

By TGC v2.5.2 government group (by `election` and `appoint_ruling_party` in
`common\governments.txt`; measured in LAW-0):

| group | governments (TGC) | who votes | the Crown |
|---|---|---|---|
| no voting legislature | `absolute_monarchy*`, dictatorships, `theocracy`, `colonial_company` | nobody: the Crown decides | without an audience, the law does not pass |
| limited legislature | `prussian_constitutionalism*`, `hms_government*`, `dominion*` | upper house | may **veto** |
| full legislature | `democracy*`, `trade_unions_congress` | upper house | always signs |

**The Crown's stance** comes from the ruler (GOV, D4). TGC already has a
political-leader system (`events/PoliticalLeaders.txt`, 22 archetypes as
country modifiers, `docs/tgc-howto.md` §3): the Crown reads it
(`has_country_modifier` of the archetype) instead of inventing a second
one. Until GOV, a generic rule: **for** if the ruling party shares the
ruler's ideology, **against** if not. Trait example (mockup): William IV,
"distrusts the Whigs": against the bills of a liberal government.

---

## 7. The cycle

Scope: **political and social reforms** (15 + 9 groups in TGC v2.5.2);
TGC's economic and military ones are those of the uncivilized. One step at
a time, up or down: at most 2 bills per group, 48 in total. One active bill
per country.

```
Present        decision tgcx_law_<group>_<option>   (allow = TGC's + no other bill)
   │           flags: tgcx_law_active, the bill, the stance flags; count (§4)
   │           modifier tgcx_debate, 90 days
   ▼
Debate         while tgcx_debate lasts: buy, promise, audience, count, withdraw
   ▼
Call the vote  decision: NOT has_country_modifier tgcx_debate + margin ≥ 5 + quorum ≥ 50
   │           recount (§4), then branch
   ▼
Crown          signs → political_reform = <option>; debts towards this law are paid
   │           vetoes → it fails; what was spent is lost
   ▼
Cleanup        every flag and variable of the bill back to 0;
               tgcx_bill_cooldown, 365 days, if it failed
```

**The debate timer is a modifier**, not a rescheduled event: TGC's
state-of-emergency idiom, saved with the country, visible in its modifier
list. The vote decision simply requires the modifier to be gone — no event,
no window, nothing to lose on save/load. A failed bill cannot be presented
again while `tgcx_bill_cooldown` lasts (same idiom).

**The game's reform button still exists**: this is another route, for laws
the chamber does not support today. Blocking it is the DLL's job (§8).

**Decisions.** The purchase decisions are **generic**, not per bill: one
per ideology × type × stance (the active bill's stance is in flags),
generated, only visible with an active bill. Every decision's localisation
uses `<id>_title` / `<id>_desc` (wiki, Decision modding).

---

## 8. What the DLL adds (not in LAW-0)

Per the mockup (D9 decides, element by element, drawn on top or a real
game element):

- In the politics window (board **Main**): the ruler's portrait, the
  upper-house hemicycle and a quill badge on every reform that can be
  negotiated; the reform with an active bill shows the target bar.
- The Bill window (board **Bill**), drawn from the script's variables and
  flags (§4: a single source of truth). Its buttons send the matching
  decision through an engine command (`CExecuteDecisionCommand`, R5): the
  DLL changes nothing on its own.
- Sends the monthly favours tick (§5) through the same command, so
  favours accrue on their own like diplomatic points.
- Optional: block the game's reform button (`CSetPoliticalReformCommand`,
  `docs/technical-plan.md` §2).

---

## 9. Risks

| Risk | What is done |
|---|---|
| A timer is lost on save/load | timers are modifiers with a duration (TGC's idiom), saved with the country; U-3 still saves and loads with the debate halfway |
| Every event opens a window (no hidden events) | the count and the favours run inside decision effects; events only for news the player wants (whip count, result, a broken promise); P22 |
| A generated `event_modifiers.txt` hides a TGC change if TGC is updated | it is regenerated by the installer from the installed TGC each time (D1: v2.5.2 only; an update means reinstalling the submod) |
| The 5-seat steps look odd (12 liberals vote as 10) | the DLL shows the script's steps, not the exact seats; if it bothers, 2.5-seat steps (40 per ideology) in LAW-1 |
| The affinity table gives absurd stances in some group | reviewed group by group with the user in LAW-1 |
| Too many decisions in the list | purchase decisions only with an active bill; bills only if TGC's `allow` is met |
| Without the DLL, clicking "Collect favours" every month is a chore | the DLL automates it (D11); LAW-0 tries a silent event, which would automate it without the DLL |
| A factor of the rate has no exact trigger (stability, monarch support) | closest trigger the game has (§5), named in the tooltip so the player knows what moves it |
| The AI presents nonsensical bills | `ai = no` in LAW-0; the AI later (MP too, D5) |

---

## 10. The Bill board, element by element (R10)

What the mockup shows, how it is built, and the deviation without the DLL.
Each LAW card's report checks this table against screenshots.

| Bill board element | Built from | Without the DLL (script only) |
|---|---|---|
| Header: "Press Rights: Censored Press → Free Press", "Introduced … by the Whigs" | the active bill's flag + `tgcx_law_active`; date not stored | decision title "Bill: Free Press" in the decisions list; no window |
| Projected vote hemicycle (100 seats in 5-seat slices, fill = vote, rim = bloc) | `upper_house` shares in steps + `tgcx_yes/no` + purchases | the whip count report (§4): numbers, no drawing |
| "Would pass / Would be defeated / No quorum" | `tgcx_margin`, `tgcx_quorum` | the whip count report; "Call the vote" tooltip (green/red conditions) |
| Political Favours medallion, "+3 per month" with its breakdown tooltip (sources of the rate), "Spent on this bill" | `tgcx_favours`; the rate's factors are the tick's blocks (§5), and the DLL reads the same triggers' results from flags the tick sets (`tgcx_rate_prestige_2`…); spent = a `tgcx_spent` variable added by each purchase | the tick's decision states the month's total in its description; balance not shown as a number: decisions are greyed out when unaffordable (`check_variable` tooltip) |
| Price table, "Buy in lots of 5 / 25 seats" selector | `data\tgcx_laws.txt` (`price`, `lots`), doubled under `tgcx_debt_broken_<ideology>` | one decision per lot; each title states its seats and price |
| Debts ("law owed", "before January 1841", +2 militancy, double prices) | `tgcx_debt_<ideology>` + the `tgcx_debt_deadline_<ideology>` modifier | **the modifier itself**, with its expiry date, in the country's modifiers |
| Upper House Blocs table: Bloc, Stance, Closeness, Votes, Bought | stance flags, `upper_house`, `tgcx_buy_*` | stance in the purchase decisions' titles ("Liberals — strongly for") |
| Buttons Abstain (n) / Vote Aye (n) / Promise a law | the generic purchase and promise decisions | the same decisions, in the decisions list |
| The Crown: portrait, "Distrusts the Whigs", May veto / will sign, Audience (10) | §6 + GOV | the audience decision; the Crown's stance in its description |
| Negotiation Log | — (no history in script) | none: only the DLL could keep it (from the variables' changes) |
| Call the Vote / Withdraw | the two decisions | the two decisions |

**Deviation without the DLL:** everything is reachable and every number is
either in a tooltip, a decision title, a modifier or the whip count, but
there is no Bill window; that window is the DLL's (D9). Nothing in the
mechanic itself differs from the mockup, so the mockup does not change.

---

## 11. Decided by the user (D11, 2026-10-12)

The three options v3 left open, answered the same day:

| Option | Answer | Where |
|---|---|---|
| Buy real seats (TGC's `upper_house` effect) instead of virtual tallies | **no: purchases are virtual and last only for the bill** | §4, §5 as written |
| How favours accrue | **automatically, like diplomatic points**: the DLL sends the monthly tick; the decision is the no-DLL fallback | §5 |
| Where the rate comes from | **prestige plus other factors: stability, militancy, consciousness, voting pop, monarch support** | §5's table (initial values) |

The mockup was updated in the same session (R10): the Bill board's
favours box says "From prestige, order, leader" and its rate has a
breakdown tooltip (`mockups\2b-favours-breakdown.png`).

---

## 12. What changed from v2 (2026-10-12)

| v2 | v3 | why |
|---|---|---|
| A hidden recount event | the count is a block inside each decision's effect, plus "Count the votes" and the whip-count reports | no hidden events (P22); fired events skip their trigger (P21) |
| The clock: an event rescheduling itself with `days = 30` | timed modifiers (debate, debt deadlines, cooldown, favours tick) + polled events or decision `allow`s | TGC's state-of-emergency idiom; saved with the country; visible in the modifier list |
| `common\tgcx_affinity.txt`, `common\tgcx_laws.txt` | `data\tgcx_affinity.txt`, `data\tgcx_laws.txt` (read by our tools, not by the game) | nothing in the game reads them: they never had to be in `common\` |
| No new modifiers needed a generated file | `common\event_modifiers.txt` generated at install time from TGC v2.5.2 | the timers are modifiers |
| Militancy "for the ideology's pops" (how: unknown) | `any_pop = { scaled_militancy = { ideology = X factor = 2 } }` | TGC's idiom (`events/ACW.txt`) |
| The Crown from a generic ruler | reads TGC's political-leader archetypes first | extend TGC's system (`docs/tgc-howto.md` §3) |
| Compatible with any TGC version | TGC v2.5.2 only | D1 revised by the user after U-2 |
| A flat +3 favours per month, collected by a decision | a rate from prestige and seven other factors, accrued automatically (DLL) | D11 (user, the same day) |
