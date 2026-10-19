# Victoria II scripting: where to look before writing anything

Rule (user, 2026-10-12): **do not reinvent the wheel.** Before writing a
piece of script, find (1) the documented way and (2) a working example in
TGC, and copy the idiom. Only what neither covers is designed here, and the
card says so.

## 1. Documentation, in the order to check it

| What | Where |
|---|---|
| Every condition (for `potential`, `allow`, `trigger`, `limit`, MTTH) | [Vic2 wiki — List of conditions](https://vic2.paradoxwikis.com/List_of_conditions) |
| Every effect (`effect`, `option`, `immediate`) | [Vic2 wiki — List of effects](https://vic2.paradoxwikis.com/List_of_effects) |
| Scopes (`[tag] = {}`, `owner`, `random_owned`, `any_country`, `FROM`…) | [Vic2 wiki — List of scopes](https://vic2.paradoxwikis.com/List_of_scopes) |
| Modifiers | [Vic2 wiki — Modifier effects](https://vic2.paradoxwikis.com/Modifier_effects) |
| Decisions: `potential`, `allow`, `effect`, `ai_will_do`, `picture`, `news`, `alert`; keys `<id>_title` / `<id>_desc`; "once only" = a flag in `potential`/`allow` and set in `effect` | [Decision modding](https://vic2.paradoxwikis.com/Decision_modding) |
| Events: `is_triggered_only`, `fire_only_once`, `allow_multiple_instances`, MTTH, options | [Event modding](https://vic2.paradoxwikis.com/Event_modding), [How to make an event](https://vic2.paradoxwikis.com/How_to_make_an_event) |
| `if`: there is none; emulate it with a scope + `limit` | [IF Emulation](https://vic2.paradoxwikis.com/IF_Emulation) |
| Text with variables (`$COUNTRY$`…) | [Dynamic localisation](https://vic2.paradoxwikis.com/Dynamic_localisation) |
| Localisation: cp1252, column order, **the file that sorts first wins** | [Localisation](https://vic2.paradoxwikis.com/Localisation) (P20) |
| `.mod` keys: `name`, `path`, `user_dir`, `dependencies`, `replace_path` | [.mod file](https://vic2.paradoxwikis.com/.mod_file); [CK2 wiki — Modding](https://ck2.paradoxwikis.com/Modding) for the fuller explanation (same launcher family) (P19) |
| Governments, national values, the rest of `common\` | the wiki's [Modding](https://vic2.paradoxwikis.com/Modding) index |
| Older community compilation (2000s; check against the wiki) | [Paradox forum — "ultimate" event-modding guide](https://forum.paradoxplaza.com/forum/threads/compiling-the-ultimate-event-modding-guide.214843/) |
| Console, to fire an event or test a decision by hand | [Console commands](https://vic2.paradoxwikis.com/Console_commands) |

**Not documented anywhere** (wiki red links, nothing found 2026-10-12):
interface (`.gui`/`.gfx`), issues/reforms, units, fonts. For those the
reference is TGC's own files and, for the engine, RE (`docs/symbols.md`).

## 2. TGC is the second reference — `docs/tgc-howto.md`

TGC is tens of thousands of lines that already work on this engine, and it
already has systems for most of what TGCX touches (upper house, law changes,
vote tallies, political leaders): **`docs/tgc-howto.md` maps them; extend
them instead of building parallel ones.** To see
how it does something:

```bash
grep -rn "<keyword>" "E:/Victoria.II.v3.04.Inclu.ALL.DLC/mod/TGC_v2.5.2/TGC/decisions" | head
```

Measured idiom counts in TGC v2.5.2 (2026-10-12, `grep -c`), to know what
is ordinary:

| Idiom | decisions | events |
|---|---|---|
| `limit = {` | 4 944 | 11 711 |
| `random_owned = {` (the IF emulation) | 2 463 | 2 874 |
| `any_country = {` / `random_country = {` | 510 / 530 | 1 192 / 1 187 |
| `country_event = {` | 111 | 4 883 |
| `is_triggered_only` | — | 1 697 |
| `fire_only_once` | — | 1 279 |
| `immediate = {` | — | 237 |

## 3. Measured on this install (supersedes guesses)

| Fact | Evidence |
|---|---|
| A submod must name the TGC in use in `dependencies`, or it loads first and TGC's `replace_path` drops its files (P19) | U-2 runs 1 and 2, `setup.log`, settings folders `TGCX_TGC252` / `TGC252_TGCX` |
| `dependencies` with two names, one of them not installed, is accepted | U-2 run 2 |
| A `000_tgcx_*.csv` overrides a TGC key; a `tgcx_*.csv` does not (P20) | U-2 run 2: "[TGCX] Denmark" |
| The `trigger` of an `is_triggered_only` event is **not checked** when an effect fires it (P21) | U-2 run 2: both load-test events fired |
| A polled event (`mean_time_to_happen = { days = 1 }`) fired about a month after its trigger held (P23); modifier durations are exact | U-3: debt deadline ~2 March, event 2 April 1836, twice |
| There are **no hidden events**: every event opens a window (P22) | the user; wiki Event modding; 0 uses in TGC |
| Branch in the firing effect with `random_owned = { limit = { … } owner = { country_event = … } }` | wiki IF Emulation; TGC's usual idiom; load test since 2026-10-12 (to be confirmed in U-2 run 3) |
| Conditional `trigger` blocks inside event options did not hide any option: every result button appeared | U-6 user screenshot, 2026-10-13 (P34); use LAW-0's conditional firing of one ordinary event; tests must not implement imaginary option hiding |
