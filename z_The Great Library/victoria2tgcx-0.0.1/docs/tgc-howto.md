# How TGC does it — the systems TGCX builds on

Rule (user, 2026-10-12): besides the documentation, **look at how TGC does
it, because TGC is advanced**. Before designing a mechanic, find TGC's system
for the same thing and **extend it instead of building a parallel one**.
Paths are relative to `E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC_v2.5.2\TGC`
(read 2026-10-12, TGC v2.5.2). Quote ids and names from here only after
checking them against `tgc_scan.py` on every version in the matrix (D1).

## 1. Laws and the upper house (LAW-0)

| What TGC does | Where | Use in TGCX |
|---|---|---|
| **Reads the upper house** as a condition: `upper_house = { ideology = liberal value = 0.3 }` is "liberals hold at least 30 %" | `decisions/Political.txt` (`enact_female_suffrage`), `events/UpperHouse.txt` (ids 18000+) | the projected vote reads the house this way: no DLL needed to know who sits there |
| **Moves the upper house** as an effect: the same block in an `option`/`effect` shifts seats to that ideology | `events/UpperHouse.txt`, `events/PoliticalEvents.txt` (e.g. 3000: `upper_house = { ideology = liberal value = 0.05 }`) | **buying votes = shifting seats** with this effect; the price is in favours |
| A law-like decision gated by house shares (`OR` of ideology thresholds), reform desire (`political_reform_want = 0.15`), techs and consciousness | `decisions/Political.txt`: `enact_female_suffrage` | the template for the LAW-0 bill decision |
| **Sets a law from script**, two forms: `press_rights = free_press`, or `political_reform = state_press` | `decisions/Germany.txt` (`free_press_in_baden`), `decisions/Political.txt` (`state_of_emergency`), `00_Setup.txt` | passing the bill |
| Remembers the previous law to restore it later: `set_country_flag = return_to_free_press` + a modifier `law_changed_by_force` with a duration | `decisions/Political.txt`: `state_of_emergency` | the "promised law" debt with a deadline: a flag for what was promised + a modifier whose duration is the deadline |
| Press-rights event block (3100-3199) with conditions `press_rights = state_press`, `average_consciousness` | `events/PoliticalEvents.txt`; registry in `events/EventIDs.txt` | names to use; ids we must not collide with (ours are 420 000 000+, D8) |
| Pops' issue support: `dominant_issue = { value = trinket_health_care factor = 0.3 }` | `events/PoliticalEvents.txt` | a lever for "affinity" if a bloc needs to be moved |
| Reform envy/suggestion events | `events/ReformJealousy.txt`, `events/IssueSuggestion.txt` | read before LAW-0 so the bill does not fight them |

## 2. Counting and voting (favours, the projected vote)

| What TGC does | Where | Use in TGCX |
|---|---|---|
| **Counters in country variables**: `set_variable`, `change_variable`, `check_variable = { which = X value = N }` (true when the variable is **at least** N) | 219 uses of `owed_cash_money` (`decisions/3_Clean-Up.txt`: a debt paid in steps of 50 and 10) | the favours balance is a variable; spending in fixed steps is TGC's step-chain |
| **A vote with yes / no / abstain**: the asker resets three variables; each voter's event option adds 1 to one of them on `FROM`; result events read the tallies with thresholds like `3.99` | `decisions/Belgium.txt` (Congo Conference call) + `events/Scramble for Africa.txt` (955182-955185) | the shape of the projected vote: tallies in variables, outcome by thresholds |
| **Result events are polled, not fired**: `mean_time_to_happen = { days = 1 }` + `fire_only_once = yes`, so their `trigger` *is* checked (unlike fired events, P21) | same | the way to get "fires when the condition holds" |
| Fire with a delay: `country_event = { id = N days = 0 }` | same | |
| Ask another country and get an answer: Sender → Receiver → Choice events (`FROM`) | `events/Utility.txt` (ids 95-99) | if a mechanic ever needs another country to answer |

2026-10-13: AST scan of installed TGC v2.5.2 found zero event options
with direct `trigger`, `allow` or `limit` fields. The LAW-1 candidate's
conditional option triggers were all ignored in the user's screenshot
(P34). Select the matching result in a firing-effect branch, then fire an
ordinary single-option result event, as LAW-0 already did. Empty error logs
do not establish support for a new script construct.
| Other variables worth a look: `farrapos_negotiation`, `repeated_elections`, `brz_slavery_politics` (86 uses) | `decisions/Brazil.txt`, `00_Setup.txt` | earlier "negotiation" and long political chains in TGC |

## 3. Rulers (GOV-0)

| What TGC does | Where | Use in TGCX |
|---|---|---|
| **A political leader system**: 22 archetypes (Expert Diplomat, Great Reformer, Military Man, Competent Placeholder…), each a country modifier `has_political_leader` + its effects; `power_vacuum` while none; appointment events keyed to government flags (`absolute_monarchy_gov`, `democracy_gov`…) and election-win flags; a "Leader Removal" block | `events/PoliticalLeaders.txt` (45 events, ids 100 040 001+), `common/event_modifiers.txt` | rulers with names and portraits **attach to this**: TGC's leaders have a type but no name or face. Don't build a second leader system |
| Can be turned off: `has_global_flag = leader_events_disabled` | `events/PoliticalLeaders.txt`; set in `events/JANFlavor.txt` | respect the same flag |
| Generals/admirals with portraits: by culture's graphical group, or `picture` in the OOB files | `history/units/*_oob.txt`, `gfx/interface/leaders/` | the 1836 generals part of D4 |

## 4. Economy charts, hemicycle, templates

- **Charts and hemicycle:** TGC changes 37 `interface/` files (`country_politics.gui`, `country_budget.gui`, `topbar.gui`…) but adds no history data and no seat chart. Its `.gui` is what our generator inserts into (R3).
- **Army templates:** TGC's "Organized Stacks" niche submod only replaces `history/units/*_oob.txt` (start-of-game armies; a whole-file override, the P9 kind). Nothing in TGC recruits a composition at run time: still DLL work.

## 5. Plumbing worth knowing

| What | Where |
|---|---|
| `on_actions`: TGC leaves `on_yearly_pulse`, `on_quarterly_pulse`, `on_election_tick` **empty**; uses `on_colony_to_state` (70000+), `on_new_great_nation`, `on_battle_won`. It is one file in `common/` (`replace_path`), so adding to it means generating it from the installed TGC (R3) | `common/on_actions.txt`, `events/OnAction.txt` |
| Startup options: decisions named `option_*`, only in the first year | `decisions/00_Setup.txt` |
| Event-id registry by theme | `events/EventIDs.txt` |
| `Utility.txt` keeps ids 1-99 for vital mechanics and has its triggers "sorted for performance" | `events/Utility.txt` |
| Project Alice support: `common/zalice_tweaks.lua` (Alice-only defines) | `common/` |
| Official submods and how TGC asks users to install them | `TGC Niche Submods/Readme Instructions.txt` |
