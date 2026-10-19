# ARCHIVE — Law design v1: staged negotiation (superseded)

> Archived on 2026-10-12. **Why:** the user disliked Better Politics Mod's
> stalling (rolls that push the bill back) and asked for something else:
> **direct political favours and each bloc's ideological closeness to each
> law**. The current design is in `docs/law-design.md`. The original text,
> unchanged apart from the English translation (D10, 2026-10-12), is below.

---

# Design: staged law negotiation

> **Reference** (written 2026-10-12). Decision D7 (user, 2026-10-12):
> **staged negotiation, as in Victoria 3 mods like Better Politics Mod.**
> This document translates that design into what Victoria II script can do
> on top of TGC. Rules: `AGENTS.md` R3, R4, R6.

---

## 1. Where it comes from

**Victoria 3 (base game, since 1.3):** a law does not pass with a single
roll: it goes through **three phases**; each check yields **Success**
(advances a phase), **Advance**, **Debate** or **Stall**, with probabilities
that depend on how much the interest groups in government support or hate
the law. Events during enactment add or subtract probability, and since
there are three phases, a +5 % counts three times
([dev diary #80](https://www.paradoxinteractive.com/games/victoria-3/news/dev-diary-80-law-enactment-and-revolution-clock-in-13)).

**Better Politics Mod (BPM)** adds on top, according to its code
(`Better-Politics-Mod/Better-Politics-Mod-Vic-3`, read on 2026-10-12; only
as inspiration, nothing is copied):

- **A projected vote in the legislature** (yes/no) visible throughout
  enactment that decides the last phase; the legislature's name changes
  with the government (assembly, parliament, advisory council…).
- **The ruler's veto:** in the final phase the law goes to the desk of the
  head of state (or regent, or head of government), who signs, returns or
  vetoes it according to their ideology, traits and age.
- **"Sways":** **30 sways per phase** are earned and spent to buy a group's
  vote, at a cost that scales with its weight. Types: assert executive
  authority, negotiate an amendment (the law comes out weaker), negotiate,
  entrench privileges, public debate, weaken institutions, blackmail a
  leader, tax cuts by stratum, works contracts, **promise another law** and
  **promise an office** (with punishment if broken). Effects from +5 to
  +30, most for 5 years.

---

## 2. What Victoria II provides and what it does not

Measured in TGC v2.5.2's scripts (`grep` over `events\` and `decisions\`,
2026-10-12): TGC already uses all of this, so the engine accepts it.

| Needed | In Vic2 | Uses in TGC |
|---|---|---|
| Wait between phases | `country_event = { id = N days = 30 }` | 1 375 |
| Weighted roll | `random_list = { 30 = { … } 70 = { … } }` (**fixed** weights) | 242 |
| Keep count | `set_variable` / `change_variable` / `check_variable` | 131 / 151 / 336 |
| Pass the law | `political_reform = <option>`, `social_reform = <option>` | 1 691 / 188 |
| Move the upper house | `upper_house = { ideology = X value = Y }` | 347 |
| Read the upper house | trigger `upper_house = { ideology = X value = 0.3 }` (≥) | — |
| Conditional effect | **there is no `if`**: `random_owned = { limit = { owner = { … } } owner = { … } }` | 5 304 |

Design consequences:

- **No `if`** (P16): every conditional branch is a different event or
  option with its own `trigger`, or the `random_owned` trick.
- **Fixed weights:** probability that depends on support is done in
  **steps**: one check event per support step (e.g. 0-20 %, 20-40 %…), each
  with its own fixed `random_list`. They are generated, not written.
- **No arithmetic between variables:** support is built by adding
  constants: "if the chamber has ≥ 5 % liberals, +5; if ≥ 10 %, +5 more…".
  Generated: 20 steps × 9 ideologies.
- **TGC's options have an `allow`** (locks by flag, by year, by
  government). The bill **copies the target option's `allow`** from the
  installed version: what TGC does not allow cannot be negotiated.

---

## 3. A bill's cycle

Scope: **political and social reforms** (15 + 9 groups in TGC v2.5.2);
TGC's economic and military ones are those of the uncivilized (another
system). One step at a time (like TGC's `next_step_only`), up or down: at
most 2 bills per group, 48 in total.

```
Present        decision tgcx_law_<group>_<option>      (allow = TGC's + no other active bill)
   │           variable tgcx_law_phase = 1, tgcx_sways += 30, flag tgcx_law_<group>_<option>
   ▼
Phase 1 ─ check after 60 days ─┐
Phase 2 ─ check after 60 days ─┤  each check: Success → next phase (+30 sways)
Phase 3 ─ final vote ──────────┘              Debate → the check repeats
   │                                          Stall → −1 phase (minimum 1)
   │                                          Failure (rare) → the bill falls
   ▼
Vote in the upper house        yes = chamber support + sways spent
   ▼
Ruler's signature              signs / returns (back to phase 2) / vetoes (falls)
   ▼
political_reform / social_reform = <option>     (or the punishment for what was promised, §5)
```

The game's reform button **still exists**: negotiation is another route,
for laws the chamber does not support today. Blocking the button to force
negotiation is the DLL's job (§7).

---

## 4. Support

**Base support** = the sum of the upper-house shares of the ideologies that
favour that step, in 5 % steps. Which ideology favours which step is in a
submod file **of our own**, `common\tgcx_laws_support.txt` (it is not read
from the engine's internal rules, which are not reversed):

| ideology (TGC) | political ↑ | political ↓ | social ↑ | social ↓ |
|---|---|---|---|---|
| liberal, anarcho_liberal | yes | no | neutral | yes |
| conservative | no | neutral | neutral | neutral |
| reactionary, tribalist | no | yes | no | yes |
| socialist, communist, anarchist | yes | no | yes | no |
| fascist | no | yes | yes | no |

(Initial values to discuss with the user.) An ideology the TGC version
lacks is ignored; a new one the file does not name counts as neutral and
`tgc_scan.py` warns about it.

**Check probability** by support step (plus sways spent):

| support | Success | Debate | Stall | Failure |
|---|---|---|---|---|
| < 20 % | 10 | 40 | 40 | 10 |
| 20-40 % | 25 | 45 | 25 | 5 |
| 40-60 % | 45 | 40 | 15 | 0 |
| ≥ 60 % | 70 | 25 | 5 | 0 |

**With the DLL** (later): the hemicycle shows the projected vote as in BPM,
with the yes and no seats.

---

## 5. Sways (in Vic2)

**30 per phase** are earned (`tgcx_sways`). Each one is a decision visible
only with an active bill, used once per bill, and adds to support until the
bill ends.

| sway | cost in sways | real cost | support |
|---|---|---|---|
| Assert the government's authority | 10 | −10 prestige; in a democracy, +1 liberal militancy for 1 year | +5 |
| Public debate | 10 | money (campaign); +consciousness in the population | +5 |
| Concessions to the landowners | 15 | event modifier: lower taxes on the rich, 5 years | +10 |
| Tax cut for the middle class / the poor | 15 | same with middle / low taxes | +10 |
| Works contracts | 15 | modifier: factories and railways cost more, 5 years | +10 |
| Negotiate an amendment | 20 | the law passes **watered down**: an event modifier that subtracts part of the effect for 5 years | +15 |
| Blackmail a leader | 20 | −prestige; if discovered (roll), +militancy and the bill falls | +10 |
| **Promise another law** | 25 | flag with a deadline: if the promised law has not been presented within 5 years, −prestige and +militancy for whoever wanted it | +30 |
| Promise the government to another party | 25 | at the next election, the ruling party changes towards that ideology | +20 |

The numbers are **initial** and go into `common\tgcx_laws.txt` (our own),
not into the events, so they can be tuned without regenerating.

---

## 6. The 1836 governments

The final vote depends on the government (like the legislature's name in
BPM). TGC v2.5.2's governments group like this (by `election` and
`appoint_ruling_party` in `common\governments.txt`; measured in LAW-0):

| group | governments (TGC) | final vote | veto |
|---|---|---|---|
| no voting legislature | `absolute_monarchy*`, dictatorships, `theocracy`, `colonial_company` | **council**: the ruler's opinion weighs double the chamber's | the ruler decides alone |
| limited legislature | `prussian_constitutionalism*`, `hms_government*`, `dominion*` | upper house | the ruler may veto |
| full legislature | `democracy*`, `trade_unions_congress` | upper house | the ruler only returns, does not veto |

**The ruler** is GOV's (decision D4: 1836 rulers and generals). Until it
exists, a generic ruler with the ruling party's ideology.

---

## 7. What will come with the DLL (not in LAW-0)

- A hemicycle with the projected vote (yes/no by seats).
- A window of its own for the active bill, instead of decisions.
- Optional: block the game's reform button so every law goes through
  negotiation (`CSetPoliticalReformCommand`, `docs/technical-plan.md` §2).

---

## 8. Risks

| Risk | What is done |
|---|---|
| `country_event`'s `days =` is lost on save/load | tested in LAW-0 (save with a check pending and load) |
| Too many decisions in the decision list | sways only appear with an active bill; bills, only if TGC's `allow` is met |
| The AI presents nonsensical bills | `ai = no` in LAW-0; the AI later (MP is also for later, D5) |
| A TGC version changes an `allow` | the generator copies it from the installed version |
