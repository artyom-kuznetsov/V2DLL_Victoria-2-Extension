# Design: laws with political favours and ideological affinity

> **Reference** (written 2026-10-12, v2). Decision D7 revised by the user
> the same day: **instead of Better Politics Mod's staged negotiation,
> direct political favours and each bloc's ideological closeness to each
> law.** The previous design is in `docs/archive/law-design-v1-stages.md`.
> Rules: `AGENTS.md` R3, R4, R5, R6; P16 (there is no `if`).
>
> Interface mockup (private, contains game and TGC art: not to be shared):
> <https://claude.ai/artifact/Wt2YTaaM6xV8JXsUwapRV4>, windows "Politics"
> and "Bill".

---

## 1. What changes and why

The user disliked BPM's **stalling**: rolls that push a bill back even when
everything was done right. The new design is **deterministic**:

- **What you see is what happens.** Each bloc in the upper house has a
  stance on the bill, computed from its ideological closeness to the law.
  The projected vote is always visible, and it is the vote that is cast.
- **No rolls, no phases, no stalling.** There is a debate of fixed length,
  and then the vote is called whenever the player wants.
- **The price is political favours**, a country resource that builds up
  slowly. Favours buy abstentions and votes, in steps of 5 seats, and
  audiences with the Crown.
- **What favours cannot buy is promised**: a law the bloc wants, with a
  deadline. The promise is a **debt**; breaking it is expensive.

---

## 2. What Victoria II provides

Measured in TGC v2.5.2's scripts (`grep` over `events\` and `decisions\`,
2026-10-12): TGC already uses all of this, so the engine accepts it.

| Needed | In Vic2 | Uses in TGC |
|---|---|---|
| Keep count | `set_variable` / `change_variable` / `check_variable` (≥) | 131 / 151 / 336 |
| Pass the law | `political_reform = <option>`, `social_reform = <option>` | 1 691 / 188 |
| Read the upper house | trigger `upper_house = { ideology = X value = 0.3 }` (≥) | — |
| Conditional effect | **there is no `if`**: `random_owned = { limit = { owner = { … } } owner = { … } }` | 5 304 |
| Wait | `country_event = { id = N days = 30 }` | 1 375 |
| Punishment with a deadline | `add_country_modifier = { name = X duration = N }` | 935 |
| Periodic pulse | `on_quarterly_pulse` in `common\on_actions.txt` (a single file: overriding it requires generating it, R3) | — |

Consequences:

- **There is no arithmetic between variables**: every number is built by
  adding constants. "If the chamber has ≥ 7.5 % liberals, +5 to yes" is a
  `random_owned` block; 20 steps × 9 ideologies = 180 blocks in a hidden
  event, **generated**.
- **Seats go in fives.** The chamber is counted in steps of 5 seats,
  rounded to the nearest: the 1836 United Kingdom (conservatives 83,
  liberals 12, reactionaries 5) votes as 85 / 10 / 5.
- **TGC's options have an `allow`.** The bill copies the `allow` of the
  target option from the installed version: nothing TGC does not allow is
  presented.

---

## 3. Affinity: each bloc's stance on each law

Each ideology has, **for each law group**, an ideal option and an
intensity (1 or 2). Facing a bill that moves the group from option `a` to
option `b`:

| the bill… | stance |
|---|---|
| moves the group closer to its ideal | **for**: +intensity (+1 for, +2 strongly for) |
| moves it away from its ideal | **against**: −intensity (−1 against, −2 strongly against) |
| leaves it at the same distance | **undecided** (0) |

**Conservatives** have **the status quo** (the current option) as their
ideal, with intensity 1: they are against every change, but weakly.

Example, `press_rights` (`state_press` 0, `censored_press` 1, `free_press`
2), from 1 to 2 in the 1836 United Kingdom:

| bloc | ideal | intensity | stance |
|---|---|---|---|
| liberal | `free_press` (2) | 2 | +2, strongly for |
| conservative | status quo (1) | 1 | −1, against |
| reactionary | `state_press` (0) | 2 | −2, strongly against |

**Where it lives:** a file **of our own**, `common\tgcx_affinity.txt` (it
is not read from the engine's internal rules, which are not reversed). It
names the ideal option **by name**, so it survives TGC reordering a group:

```
liberal = {
    press_rights = { ideal = free_press intensity = 2 }
    ...
}
```

**What the file does not name** comes from TGC's bases: if the ideology has
`add_political_reform` (or `add_social_reform`), its ideal is the group's
highest option; if it has `remove_…`, the lowest; otherwise, the status
quo. Intensity 1. `tgc_scan.py` warns about every such case. An ideology
the TGC version lacks is ignored.

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

Exceptions worth writing by hand (those TGC orders the other way round or
that do not run from "closed" to "open": `slavery`, `centralization`,
`border_policy`, `colonial_policy`…): reviewed group by group in LAW-1.

---

## 4. The projected vote

- Each bloc votes according to its stance: **for → yes**, **undecided →
  abstains**, **against → no**, except for what has been bought or
  promised (§5).
- It **passes** if **yes > no** and there is a **quorum: yes + no ≥ 50** of
  100 seats.
- Then **the Crown** (§6) signs or vetoes.

**In the script:** when the bill is presented and after every purchase, a
hidden event recomputes `tgcx_yes`, `tgcx_no`, `tgcx_margin` (= yes − no)
and `tgcx_quorum` (= yes + no), adding constants per chamber step and per
purchase (§2). It is also recomputed on every pulse (§7), because the
chamber changes with elections. The "call the vote" decision requires
`check_variable = { which = tgcx_margin value = 5 }` and
`check_variable = { which = tgcx_quorum value = 50 }`.

**A single source of truth.** The DLL **does not recompute** the vote: it
reads `tgcx_yes`, `tgcx_no` and the purchases from the country's variables
(`CCountry+0x1DC`, `AGENTS.md` §4) and draws that. Two implementations
computing the same thing by different routes end up giving different
numbers.

---

## 5. Political favours

`tgcx_favours`, from 0 to 100. **+3 per month** as a base (initial value;
it could depend on prestige or government, [user]). They are spent on the
active bill; if the bill fails, is withdrawn or is vetoed, **what was spent
is lost**.

**Price per step of 5 seats:**

| bloc's stance | abstention | vote for yes |
|---|---|---|
| undecided | — | 2 |
| against | 2 | 5 |
| strongly against | 5 | **only with a promise** |

**Audience with the Crown:** 10 favours; the Crown signs this bill (§6).

**Promises (debts).** Votes cannot be bought from a strongly-against bloc:
it is **promised a law** it wants (a step towards its ideal in another
group) **before a deadline** (5 years). That bloc votes yes in full. The
debt is kept in a flag and a deadline variable:

- If a law that moves that bloc towards its ideal is passed before the
  deadline, the debt is cancelled.
- If it expires: **+2 militancy** for that ideology's pops and **its prices
  double for 10 years** (a country modifier with a duration; the purchase
  decisions have a double-price version that only appears with the
  modifier).
- One debt per bloc at a time.

**What it costs, an example.** 1836 United Kingdom, `free_press`: yes 10,
no 90. Ten steps of conservative abstention (20 favours) and three of
conservative votes (15) leave yes 25, no 25… with the reactionaries
promised, yes 30 and no 20, quorum 50: **35 favours and one promise**, plus
10 for the audience if the Crown is against. At +3 per month, a year of
saving.

The numbers go into `common\tgcx_laws.txt` (our own), not into the events,
so they can be tuned without regenerating.

---

## 6. The Crown

By TGC v2.5.2 government group (by `election` and `appoint_ruling_party` in
`common\governments.txt`; measured in LAW-0):

| group | governments (TGC) | who votes | the Crown |
|---|---|---|---|
| no voting legislature | `absolute_monarchy*`, dictatorships, `theocracy`, `colonial_company` | nobody: the Crown decides | without an audience, the law does not pass |
| limited legislature | `prussian_constitutionalism*`, `hms_government*`, `dominion*` | upper house | may **veto** |
| full legislature | `democracy*`, `trade_unions_congress` | upper house | always signs |

**The Crown's stance** comes from the ruler (GOV, D4): their ideology and
traits. Until GOV exists, a generic ruler: **for** if the ruling party
shares the ruler's ideology, **against** if not. Trait example (mockup):
William IV, "distrusts the Whigs": against the bills of a liberal
government.

---

## 7. The cycle

Scope: **political and social reforms** (15 + 9 groups in TGC v2.5.2);
TGC's economic and military ones are those of the uncivilized. One step at
a time, up or down: at most 2 bills per group, 48 in total. One active bill
per country.

```
Present            decision tgcx_law_<group>_<option>  (allow = TGC's + no other bill)
   │               stance flags per ideology (generated constants), recompute
   ▼
Debate             at least 90 days (tgcx_debate). Abstentions and votes are bought,
   │               promises made, an audience requested. It can be withdrawn.
   ▼
Call the vote      decision: allow = debate done + margin ≥ 5 + quorum ≥ 50
   ▼
Crown              signs → political_reform / social_reform = <option>
   │               vetoes → it fails; what was spent is lost
   ▼
Cleanup            every flag and variable of the bill back to 0
```

A failed bill cannot be presented again for a year (initial value). **The
game's reform button still exists**: this is another route, for laws the
chamber does not support today. Blocking it is the DLL's job (§8).

**Decisions.** The purchase decisions are **generic**, not per bill: one
per ideology × type × stance (the active bill's stance is in flags),
generated. They are only visible with an active bill.

**The pulse.** The debate and the debt deadlines need a clock: either an
event that reschedules itself with `days = 30` (risk: save and load, §9),
or `on_quarterly_pulse` in an `on_actions.txt` generated from TGC's (R3).
LAW-0 tests the first.

---

## 8. What the DLL adds (not in LAW-0)

Per the mockup:

- In the politics window: the ruler's portrait, the upper-house hemicycle
  and a quill badge on every reform that can be negotiated; the reform
  with an active bill shows the target bar.
- The bill window: blocs with their stance and closeness, purchase
  buttons, Crown, log, favours, prices and debts. The buttons send the
  matching decision through an engine command (`CExecuteDecisionCommand`,
  R5): the DLL changes nothing on its own.
- Optional: block the game's reform button (`CSetPoliticalReformCommand`,
  `docs/technical-plan.md` §2).

---

## 9. Risks

| Risk | What is done |
|---|---|
| `country_event`'s `days =` is lost on save/load | tested in LAW-0 (save with the debate halfway and load) |
| The 5-seat steps look odd (12 liberals vote as 10) | the DLL shows the script's steps, not the exact seats; if it bothers, steps of 1 (100 steps) are tried in LAW-1 |
| The affinity table gives absurd stances in some group | reviewed group by group with the user in LAW-1; the fallback from TGC is flagged by `tgc_scan.py` |
| How to target an ideology's pops for militancy | measured in LAW-0; if there is no trigger, the pops of the stratum that votes for it most |
| Too many decisions in the list | purchase decisions only with an active bill; bills only if TGC's `allow` is met |
| The AI presents nonsensical bills | `ai = no` in LAW-0; the AI later (MP too, D5) |
| A TGC version changes an `allow` or an option | the generator copies it from the installed version; the affinity names options by name |
