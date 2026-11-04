# Country daily optimizer

Build `v2dll_mod.vcxproj` as Win32/Release. The output is
`Release/v2dll_mod.dll`.

On first load, the plugin creates `v2dll_country_daily_optimizer.ini` in the
active mod folder. Edit its text values and restart the game for changes to
take effect:

```ini
[CountryDailyOptimizer]
skip_empty_country_daily_update=0
skip_empty_country_prepass=0
cleanup_armies_of_landless_countries=0
render_thread_core=0
event_scan_interval_days=2
great_nations_count_override=0
keep_puppets_when_great_powers=0
block_puppets_from_great_powers=1
prefetch_pop_reset_chain=0
disable_log=0
disable_map_3d_scene_render=0

[Multiplayer]
state_checksum=1
oos_notice=1
fix_rng_resync=1
sync_world_rng=1
oos_test_button=1

[Puppets]
allow_justify_puppets=1
allow_puppet_justify=1
allow_puppet_add_wargoal=1
allow_puppet_declare=1
allow_declare_puppets=1
no_puppet_war_autocancel=1
allow_peace_with_puppets=1
allow_puppet_peace=1
allow_puppet_occupations=1
allow_puppet_ai_diplomacy=1
```

The Multiplayer options integrate The Grand Loader's Victoria II 3.04 multiplayer fixes into this
plugin. They are enabled by default. `state_checksum` adds daily state hashes to the lockstep vector;
`oos_notice` reports recovered or persistent desyncs in chat; `fix_rng_resync` aligns the global RNG
to the host after a mismatch; `sync_world_rng` routes lockstep world-RNG draws through the shared
generator; and `oos_test_button` adds the Force OOS overlay and Ctrl+Shift+O test shortcut. Every
multiplayer participant must use the same checksum and RNG settings. The checksum hook chains the
optional landless-army cleanup hook already in this plugin.

The `[Puppets]` options lift ten independent vanilla restrictions on vassals and substates. They
are enabled by default and each key patches only its own sites, so they can be mixed freely. Like
the multiplayer keys they change the simulation, so every player must use the same values. The
diplomacy patches sit on the shared engine gates (`DiplomaticAction_CanPerform`, `War_CanDeclare`,
`CMakeCBAction_CanPerform`), which the player UI, the command validator and the AI all call, so the
AI uses the same switches instead of the feature being player-only. `allow_puppet_ai_diplomacy`
additionally removes the AI-only redirections described below, so a subject AI actually picks and
acts on non-overlord targets.

| Key | Effect |
|---|---|
| `allow_justify_puppets` | A CB can be justified against a vassal or a substate. Vanilla's `CMakeCBAction_CanPerform` returns false for a recipient with `+0xCF5` (vassal) or `+0xCF4` (substate); the two jumps are NOPed. A small thunk also lets a subject through the earlier "recipient is in the actor's sphere" check at `0x00927163` while keeping that rejection for ordinary countries. The thunk deliberately does not hook `0x00927180`, because that is a shared reject label reached from several later checks with different registers. |
| `allow_puppet_justify` | A vassal/substate can justify a CB against any country, not only its overlord. Slot 29 (`+0x74`) of `CMakeCBAction`'s vtable is switched from "enforce the vassal rule" to "skip it". |
| `allow_puppet_add_wargoal` | A vassal/substate can add a war goal while at war, not only against its overlord. Slot 29 of `CAddWarGoalAction`'s vtable is switched off. This is the "add a war goal during a war" case. |
| `allow_puppet_declare` | A vassal/substate can declare war on any country, not only its overlord. Slot 29 of `CDeclareWarAction`'s vtable is switched off. |
| `allow_declare_puppets` | War can be declared on a vassal or a substate. Slot 30 (`+0x78`) of `CDeclareWarAction`'s vtable is switched off, the early exit in `War_CanDeclare` (`0x0093AB18`) is NOPed, and `War_CannotDeclareReason` no longer reports the "substate"/"vassal" reason. |
| `no_puppet_war_autocancel` | The daily tick (`FUN_006840F0`) no longer removes a vassal/substate that leads either side of a war (`War_RemoveDefender` at `0x00936070`). Both guarded calls are redirected to a no-op, so a war on a puppet (or a war led by one) is not cancelled the next day. The third `War_RemoveDefender` call is left alone: it is the empty-side war repair/dissolution path and does not look at vassal status. |
| `allow_peace_with_puppets` | Peace can be negotiated with a vassal or a substate. Slot 30 (`+0x78`) of `CPeaceAction`'s vtable (`0x00E34474`) is switched from "enforce the vassal/substate recipient rule" to "skip it" in `DiplomaticAction_CanPerform`. |
| `allow_puppet_peace` | A vassal/substate can negotiate peace with any country, not only its overlord. Slot 29 (`+0x74`) of `CPeaceAction`'s vtable is switched off. |
| `allow_puppet_occupations` | A vassal/substate keeps the provinces it occupies instead of handing them to its overlord. `FUN_004B50A0` first checks whether the besieger is a vassal (`+0xCF5`) or a substate (`+0xCF4`); the subject branch climbs to the overlord and attributes the province to it. The check at `0x004B50D4` is replaced by a jump to the ordinary-country continuation (`0x004B515B`), so the actual occupier keeps control. Ordinary countries already take that continuation, so they are unchanged. This covers the province controller; peace-time ownership transfer is a separate native step and is not modified. |
| `allow_puppet_ai_diplomacy` | A subject AI can pick CB and war targets that are not its overlord, like a human player. `AI_ScoreDiplomaticTargets` (`0x0085E0E0`) normally ascends from a subject target to its overlord; the vassal jump at `0x0085E22D` is NOPed and the exit at `0x0085E236` is forced to the ordinary-target branch (`0x0085E2E8`). `AI_GetOpinionScore` (`0x0083EC10`) normally cuts a subject's opinion of a non-overlord to `-1000`; the branch at `0x0083EF06` is forced to the ordinary continuation (`0x0083F146`). Both sites are only reached when the actor or the target is a subject. The shared diplomacy gates above already let the AI use the other switches; this key removes the two AI-only redirections that would otherwise keep it pointed at the overlord. |

The two peace switches are engine-level, not player-only: `AI_ManagePeace` builds the same
`CPeaceAction` and calls `DiplomaticAction_CanPerform` before offering peace, and
`AI_EvaluatePeaceOffer` calls that same gate before accepting an offer. Patching the vtable therefore
changes the player UI, the command validator and the AI at once.

A vassal that has military access from a country still cannot declare war on that country (the
remaining branch of `War_CanDeclare`), which is the vanilla access rule. Wars with no war goals
still get the game's normal white peace; `no_puppet_war_autocancel` only disables the vassal-leader
removal. All ten switches are guarded against the analyzed Victoria II 3.04 bytes and vtables; if a
pattern differs, that site is left native and the rejection is logged.

The country-skip switches default to `0`. Set either to `1` to omit the corresponding
native update for countries whose province vector is empty. `skip_empty_country_daily_update`
skips `Country_DailyUpdate`; `skip_empty_country_prepass` skips `Country_PrePass`.
These options can change simulation behavior: empty countries can still carry
relations or participate in AI logic. The plugin writes first-seen country
indices and raw tags, plus skip-count summaries, to
`v2dll_country_daily_optimizer.log` in the active mod folder. It also reports
the loaded settings through the plugin log.

Set `cleanup_armies_of_landless_countries=1` to scan the country table after
each daily economy tick and remove armies from registered countries whose
province vector is empty. This uses the game's native army destruction routine
so its country, transport, and other game-owned links are updated together.
It is a diagnostic fix for orphaned armies after annexation, but applies to
*all* landless registered countries; countries that intentionally retain
landless/exiled armies are affected too. The option defaults to `0`. Removed
country slots, raw tags, and army counts are recorded in
`v2dll_country_daily_optimizer.log`. Enable it only for a test save first.

Set `render_thread_core=2` or `3` to temporarily pin only the native
`Render_MapFrame` call to the second or third **logical processor**, then
restore the game's previous thread affinity. `0` disables the option. The
requested processor must be included in the process affinity mask. This does
not make rendering parallel or move the simulation to another processor; it
only changes where the existing render call runs. Compare frame pacing with
the same save, and return it to `0` if performance regresses.

Set `disable_log=1` to silence this plugin's file log and plugin logger messages.
The existing `.log` file is left in place but is not appended while logging is
disabled. Set it back to `0` to resume logging on the next launch.

Set `great_nations_count_override` to `1` through `32` to replace the active
mod's `common/defines.lua` value for `GREAT_NATIONS_COUNT`. `0` disables the
override and restores the original file from the one-time backup, when present.
The plugin creates that backup at
`common/defines.lua.v2dll.bak`, replaces the assignment atomically, and reports
the result in its log. Restart Victoria II so it reads the new define. Values
above `32` are reset to `32`.

Values above `8` are supported by an additional guarded patch. The vanilla
`interface/country_diplomacy.gui` and `interface/country_production.gui` define
only `country_gp0`..`country_gp7`, `sort_by_gp0`..`sort_by_gp7` and
`sort_by_gpflag0`..`sort_by_gpflag7`. Without the patch, the window builders ask
for index `8+`, receive a `NULL` widget, and crash when the window opens or
refreshes. The plugin clamps five count loops and two `sort_by_gpflag` loops to
the first eight entries. Great Powers 9+ still exist and are ranked by the
simulation, and the backend `great_powers_list` can show them, but the country
diplomacy and production windows show only the first eight. If the guarded byte
patterns do not match (for example, a different game build), the patch is
rejected and logged; in that case keep the override at `8` or lower.

Setting the option to `0` disables this override and restores
`defines.lua.v2dll.bak` when the optimizer created that backup. If no backup
exists, the mod's define file is left alone. Values `1` through `8` set the
count directly; values above `8` also enable the guarded interface patch.

Set `keep_puppets_when_great_powers=1` to preserve the overlord/satellite
relationship when a subject is promoted to Great Power. The country still gets
Great Power status; the option skips only the native relation-removal branch.
It is off by default and guarded against the analyzed Victoria II 3.04 bytes.
Some game systems may assume Great Powers cannot have an overlord, so test on a
copied save and check diplomacy, wars, and subject behavior. Set it to `0` for
the native behavior.

`block_puppets_from_great_powers` is enabled by default (`1`). When enabled, a
country with an overlord (`country+0xCFC != 0`) is treated like a one-province
country for Great Power eligibility: it cannot be promoted by the economic-list
rebuild or by the vacancy-filling paths. The plugin replaces the three native
`CMP country+0xE4C, 1` sites with guarded calls and validates all three byte
patterns against Victoria II 3.04; if any site differs, none are patched and
native behavior is retained. A subject that is already marked as a Great Power
is demoted on the next economic-list rebuild, matching the existing one-province
handling. Set it to `0` to restore the native behavior. In multiplayer, every
peer should use the same setting. If `keep_puppets_when_great_powers=1` is also
set, the exclusion takes precedence: a subject is never promoted, so the
retention hook has nothing to preserve.

`disable_map_3d_scene_render` is a legacy option name. Set it to `1` to skip the
entire renderer batch pass called from `Render_MapFrame` (VA `0x006596B1` →
`FUN_00999BB0`). Ghidra shows that pass setting an orthographic projection and
submitting renderer batches; the exact mix of map layers/effects in those
batches has not been fully identified. This is **not** camera culling and can
hide content that is in view. Each activation is logged once, then the log
records another summary every 5,000 skipped frames. Set it back to `0` and
restart to restore the native pass.

Set `event_scan_interval_days=4` to test scanning country events every four
days and province events every four days, instead of alternating branches every
two days. The plugin adjusts the event MTTH mode multipliers along with the
schedule, preserving their approximate average probability. This reduces event
candidate scans, but some events without MTTH can fire later (up to two extra
days) and random-number consumption/order changes. Keep `2` for vanilla
behavior. In multiplayer, every peer must use the same setting. This option is
guarded against the analyzed Victoria II 3.04 instruction bytes; if they differ,
the plugin leaves the native schedule intact.

This does not reduce the number of decisions. The available profiling/reverse
engineering evidence places decision work mainly in script loading and in
building/evaluating the political decision list when that UI is used; it does
not show a full decision scan every day. Disabling or caching decisions without
following their UI invalidation and trigger dependencies could show stale or
incorrect choices, so this option only changes the confirmed daily event scan.

If a mod adds many cultures, set `prefetch_pop_reset_chain=1` to test a cache
prefetch in the measured linked-pop reset pass (`FUN_004B9C60` →
`FUN_0095EBF0`). More cultures do not by themselves prove a culture-count loop;
they can split populations into more culture-specific pops, increasing the
number of pop objects walked. The option prefetches the next pop and cache lines
the native reset routine writes, plus the cache line containing the pop's
culture (`+0x6C`) and religion (`+0x70`) pointers. It does not change pop values,
cultures, or update timing. It is off by default because prefetching can also
increase cache traffic; compare the same save and turn it back to `0` if there
is no improvement. The hook checks original call bytes and otherwise leaves the
native traversal intact.

The culture/religion update still runs on the game's simulation thread. This
plugin does not move it to logical processor 2: changing affinity would pin the
same thread, not run the update in parallel, and splitting it risks races in
shared pop and country state. `render_thread_core=2` affects only rendering.

The plugin reads these environment variables when `V2Mod_Init` runs:

| Variable | Effect |
|---|---|
| `V2DLL_PREFETCH_RELATION_HOTSPOTS=1` | Enables the optional relation and country-pair cache prefetch hooks. |
| `V2DLL_PREFETCH_LIVING_COUNTRIES_ONLY=1` | With relation prefetch enabled, skips the plugin's speculative relation prefetch for countries whose province vector is empty. Defaults off. |
| `V2DLL_PROFILE_COUNTRY_DAILY=1` | Reports `Country_DailyUpdate` timing windows to the plugin log. |

If the province-vector layout cannot be read safely, skip options fail open
(the native routine runs); the living-only prefetch option also performs its
prefetch as usual.

These switches are experimental performance options. Compare daily tick times
with the same save and speed setting before and after enabling them.
