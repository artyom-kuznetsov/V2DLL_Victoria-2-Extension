# Country daily optimizer

Build `v2dll_mod.vcxproj` as Win32/Release. The output is
`Release/v2dll_mod.dll`.

If the active mod folder already contains
`v2dll_country_daily_optimizer.ini`, the plugin loads that file first. If not,
it creates/loads the INI beside `v2dll_mod.dll`. Edit values and restart the
game for changes to take effect. When there is no mod-specific INI,
`local_config=1` (default) uses the DLL-local file; set it to `0` there to use
a shared INI in the Victoria II game folder instead. Existing values are
preserved; the defaults below apply to newly created files and missing keys:

```ini
; Country Daily Optimizer options. Skipping empty countries can change simulation behavior.
[CountryDailyOptimizer]
local_config=1
skip_empty_country_daily_update=1
skip_empty_country_prepass=1
cleanup_armies_of_landless_countries=1
render_thread_core=2
ai_thread_core=2
prefetch_country_relations=1
optimize_ai_target_lookup=1
great_nations_count_override=0
keep_puppets_when_great_powers=1
block_puppets_from_great_powers=1
prefetch_pop_reset_chain=1
prefetch_pop_culture=1
prefetch_pop_religion=1
event_scan_interval_days=2
disable_log=0
disable_map_3d_scene_render=0

[Multiplayer]
state_checksum=1
oos_notice=1
fix_rng_resync=1
event_seed_sync=1
sync_world_rng=1
world_rng_private_sites=00820D18 00821F32 008387C2 00838955 0083DE11 00846408 0085599E 008569CF 0085CFBF
oos_test_button=0
host_only_kick=0
stable_checksum=0
auto_rehost=0
clean_state_on_menu=1
hostjoin_log=1
rehost_flush_frames=45
host_lobby_wait_ms=20000
client_join_delay_ms=10000
auto_rehost_timeout_ms=120000

[Puppets]
allow_justify_puppets=0
allow_puppet_justify=0
allow_puppet_add_wargoal=0
allow_puppet_declare=0
allow_declare_puppets=0
no_puppet_war_autocancel=0
allow_peace_with_puppets=0
allow_puppet_peace=0
allow_puppet_occupations=0
allow_puppet_ai_diplomacy=0

[Wars]
cancel_wars_with_missing_countries=1

[Events]
fire_on_time=1

[ScriptExtensions]
date_trigger=1
guard_missing_modifiers=1
```

The Multiplayer options integrate The Grand Loader's Victoria II 3.04 multiplayer fixes into this
plugin. The checksum and RNG synchronization options below are enabled by default; the OOS test
button, host-only kick, stable checksum, and auto-rehost default to `0`. `state_checksum` adds daily state hashes to the lockstep vector;
`oos_notice` reports recovered or persistent desyncs in chat; `fix_rng_resync` aligns the global RNG
to the host after a mismatch; `event_seed_sync` seeds the event manager from the world date instead
of `time(NULL)`, so every machine that loads the same save rolls event probabilities the same way;
`sync_world_rng` routes lockstep world-RNG draws through the shared
generator; `world_rng_private_sites` lists the draw sites that are only reached on the host (the AI)
and gives each one its own date-seeded stream so it does not move the shared counter; and
`oos_test_button` adds the Force OOS overlay and Ctrl+Shift+O test shortcut. Every
multiplayer participant must use the same checksum and RNG settings. The checksum hook chains the
optional landless-army cleanup hook already in this plugin.

`event_seed_sync` covers the reload after a rehost: the game creates the event manager with
`time(NULL)`, so two machines that load the same save seconds apart roll different events and the
simulation diverges on the first simulated day. The plugin seeds it from the world date instead
(identical in the save on every machine) and reseeds it at the first comparison after a rehost. For
diagnosis, the eight comparisons that follow a rehost also log `sync_dump:` lines with both sync
vectors element by element, the human/AI map, the three MT states, each country's money, owned
provinces and AI object, and its pop count/size; diff the host's and a client's log to find the first
differing country. A difference in the appended state hashes during normal play also arms the same
dump for that day and the next two (up to three times per session).

Every day, `hostjoin.log` also gets one `sync_world_rng: day … rng=… seed=… in-command draws=…
private draws=… event_mt=… <sites>` line per machine. The `draws` part lists, per redirected
world-RNG site, how many times it drew during the previous day; comparing the host's line with a
client's shows whether some code path advances the shared generator on one machine and not on the
other, which shifts every later draw of that day. The sites after `private` use their own stream
(`world_rng_private_sites`) and do not move the shared counter: the host's AI draws there, the
client usually draws none, and that is fine. `event_mt` is the event manager's generator as the
previous day left it, before the daily reseed. A difference in the counted draws or in `event_mt` is
the cause of the remaining state-only desync.

`world_rng_private_sites` is the list of those host-only sites, as hex RVAs (`420D18`) or as the VAs
the log prints (`00820D18`), separated by spaces, commas or semicolons. Each one has its own MT19937
stream seeded from the world date and the site index, so its values are identical on every machine
that runs it and a save reload or a rehost restarts the stream at the same place. The default list
is the set the 2026-11-13 log showed drawing only on the host (`00820D18 00821F32 008387C2 00838955
0083DE11 00846408 0085599E 008569CF 0085CFBF`). If a new OOS shows another site drawing on only one
machine, add its address to the list on every machine. Set it to `0`, `none` or empty to go back to
counting every in-command draw (the old behaviour). Every player must use the same list.

`clean_state_on_menu` covers what the engine leaves behind: Victoria II builds `CWorld` once, from
the startup path (`FUN_0067D940` destroys the previous world and creates a new one), and never
destroys it when the player goes back to the main menu. The world, its countries, provinces, pops and
armies therefore stay in memory until the process exits, and the event manager singleton
(`DAT_01319B80`) is only released at shutdown or replaced when a save is loaded. When a menu frame
runs after a game, the plugin calls the engine's own world reset (the same function the startup path
uses) and releases the event manager exactly like a save load does, so the finished game does not
stay in memory and the next game starts from a fresh state. It logs
`clean_state_on_menu: <where>: the world was rebuilt and the event manager released`. Disable it if
a menu screen ever holds a pointer into the old world.

The kick options are host-side only and do not change the simulation. Victoria II already ships a
`button_kick` control in the pre-start lobby entry; the plugin hides it on non-host clients. In the
in-game Tab panel the plugin adds a separate `v2dll_kick` button to every player row (`player_entry`
and `short_player_entry` in `interface/menubar.gui`), one per other player, shown only on the host.

| Key | Effect |
|---|---|
| `host_only_kick` | Enables the kick feature and keeps it host-only. In the pre-start lobby the plugin patches the entry refresh (`CLobbyHumanItem` secondary-vtable slot `+0x28`, `FUN_00693D20`) and clears the entry's "not the local player" byte on every client. In the in-game Tab panel the plugin hooks the two `FUN_0064F850` call sites, walks the rows (`gameObj+0x1618`) and the session player list (`DAT_012588e8+0x18`) in parallel, and registers one `v2dll_kick` delegate per row. Each button is shown only on the host and never on the host's own row; clicking it removes that player from the session (`session vtable +0x40`), sends the vanilla `CAddPlayer` (`FUN_0072BA30`, so every client drops the player from its lists) and the vanilla `CStartAICommand` (event `0x18D`, tag at `+0x3C`, country index at `+0x40`) so the country is handed to the AI and the kicked client returns to the frontend. The role is read from `DAT_012589AC` (`1` = host/server, `2` = client, `0` = singleplayer). Set `host_only_kick=0` to disable everything. |
| `kick_button_x` | Ignored (kept for old INI files). The pre-start kick button uses the position from `interface/ingamelobby.gui` (`205,2`); the in-game per-row buttons use the `v2dll_kick` positions in `interface/menubar.gui` (`22,-13` in `player_entry`, `7,-13` in `short_player_entry`). Edit the `.gui` files to move them. |
| `kick_button_y` | Ignored (kept for old INI files). See `kick_button_x`. |
| `stable_checksum` | Makes the lobby checksum stable across rehosts. The plugin replaces the `CALL 0x009DA400` that contributes `map/cache/time` (`VA 0x00638441`) with `xor eax,eax; nop; nop; nop`, and replaces the encoder's `MOV EDI,[EAX+0x10] / ADD EDI,[EAX+0xc]` at `VA 0x009DA9C9` with `xor edi,edi; nop*4`, so the four-letter lobby string is always `AAAA`. The real file checksum (`common`, `events`, `history`, `map/default.map`, `v2game.exe`, …) is still computed and logged. Every player must use the same value. |
| `auto_rehost` | Host only. Adds a **Rehost** button to the vanilla `player_lost_window` (`FUN_0064EF50`) and binds **Ctrl+Alt+R** to the same action while a game is running. Pressing it saves the game to `save games/r.v2` and raises the native **multiplayer** return flag (`app+0x1D22`, not the single-player main menu `0x1D21`). It deliberately does **not** replay the vanilla Quit handler: that one builds a `0x18D` network command (`FUN_009E80F0`) per lost player and crashed. The native teardown closes the session and notifies the clients. The plugin then drives the normal frontend automatically: opens the multiplayer menu (screen 4), calls the host-dialog prepare/confirm handlers (`FUN_00764B30` / `FUN_00767C30`), waits for the lobby and starts the game (`FUN_00772300`). The lobby activation (`FUN_0076B4B0`) copies `netmgr+0x130` into `lobby+0x5C0`, but the host dialog only calls `CFrontEnd::SetSession`, which writes `netmgr+0x12C`; the plugin bridges `netmgr+0x130 = netmgr+0x12C`, writes the save path/name into `netmgr+0x150`/`netmgr+0x134`, re-runs the activation and, if needed, sets `lobby+0x5C0` directly, so the flow no longer stalls at `host:wait-lobby`. The `save_games_list` item is only marked for the UI. Clients are armed automatically when the host leaves (the `0x1D22` store at `VA 0x006553BD` is hooked, so a voluntary quit never triggers it); the same hook makes each client raise `0x1D22` and leave the game for the multiplayer frontend **without saving**, then, after `client_join_delay_ms`, open the join dialog and connect (`FUN_00766B80` / `FUN_00767140`). The plugin replaces the game-object vtable slot `VA 0x00E0A454` (base `0x00E0A34C + 0x108`) and the three per-frame update slots `VA 0x00E13DC0` / `VA 0x00E0A350` / `VA 0x00E04D00`. While the host flow runs, the `0x1D21` store at `VA 0x0065666F` is neutralised and restored afterwards; every native call is wrapped in SEH and every screen/list pointer is validated. The session role is read from `DAT_012589AC`, so singleplayer is never affected. The button needs the `rehost_button` control in `interface/ingamelobby.gui`. |
| `rehost_flush_frames` | Frames the host waits after writing `r.v2` before requesting the frontend, so the socket can send the disconnect to the clients. Default `45`, clamped to 0–600. |
| `host_lobby_wait_ms` | How long the host waits in the reloaded lobby before pressing Play, so the clients have time to reconnect. Default `20000` (20 s), clamped to 3–600 s. |
| `client_join_delay_ms` | How long a client waits after the host leaves before opening the join dialog. Default `10000` (10 s), clamped to 1–300 s. |
| `auto_rehost_timeout_ms` | Safety timeout for the whole automatic host/join sequence. Default `120000` (2 min), clamped to 10 s–30 min. On timeout the stage machine stops and writes the current stage to the log. |
| `hostjoin_log` | Writes every host/join decision to a separate `hostjoin.log` next to the plugin log: session role checks, Rehost/Ctrl+Alt+R, the stage machine (`host:*`/`client:*`), save selection, lobby transitions, join address, player-lost handling, `clean_state_on_menu`, and the `sync_realign:` / `sync_dump:` host-comparison dumps. Default `1`. The lines are still forwarded to the shared plugin log, so nothing disappears; the dedicated file simply lets you compare a host and a client without the daily simulation noise. `disable_log=1` also silences this file. |

The `stable_checksum` option is what makes the save-and-rehost flow reliable: the host and every
client exchange the same lobby checksum (`AAAA`) even if one of them regenerated the map cache more
recently or has a different `map/cache/time`. Real mod differences are still written to the log by
the normal checksum computation.

`auto_rehost` adds the save half of that flow to the player-lost dialog. Victoria 2 has no hotjoin,
so when a player is lost the session cannot continue: the host gets the vanilla "player lost" dialog
with an extra **Rehost** button. Pressing it (or **Ctrl+Alt+R** at any time during the game) writes
`r.v2` and returns the host to the multiplayer
frontend (after `rehost_flush_frames` frames so the disconnect reaches the clients). The host then
hosts again and loads `r.v2` **without any manual clicks**; every client
also returns to the frontend, waits `client_join_delay_ms` and rejoins automatically. The host waits
`host_lobby_wait_ms` in the lobby before pressing Play, so the clients have time to connect. The
engine transfers the save from the host (there is no manual file copy). The save name is fixed and
15 characters long so it fits the legacy short-string layout without heap allocation. The button is
only active on the host; the clients are armed by the session role and the frontend tick. The
startup save scan is seeded with the newest existing save copied to `save games/r.v2` if the file is
missing, because the lobby save list is built once at game startup. If the direct-join default
address (`0x475500()+0x6C`) is empty after the session ends, the log line
`rehost: auto-join address='…' last_entered='…'` shows it and the client cannot reconnect
automatically; in that case the host and clients must join manually once so the address book is
filled.

The rehosted game starts in sync because the plugin rebuilds the global RNG on every machine before
the first daily comparison. The generator position (`g_rngCalls`) and the MT state are runtime
globals, not part of the save: the host draws a few hundred times while it reloads and hosts again,
so on day two the game compared 11992 against 12175 draws and showed the out-of-sync dialog. The
plugin realigns the generator from the seed and the draw count the sync vector carries (the same
values on the host and on the clients, because they come from the save), using the game's own
`Rng_Resync`, and copies those two values into the local vector so the game's comparison passes too.
The log shows `sync_realign: day start does not match the host's day end: seed … advanced … draws
(was …)`.

The same realign now runs at **every** daily comparison, not only after a rehost, and it triggers on
any difference, not just a large one. A player who rejoins a running game loads the save and its
vector carries the count of the day the save was written at, while the rest of the session is a few
draws further; the old `gap > 64` threshold let those 4 draws through and the next day diverged (log
of 2026-11-12: `sum 71377/71377` on 01-11, `71377/71373` and a real OOS on 01-12). The event
manager's MT19937 is also reseeded from the world date at every day start now, because a machine
that reloads recreates it while the others keep the one they had been drawing from, and the day's
event rolls then differ. No new key: it runs whenever the `Vector_Equals` hook is installed, even if
`state_checksum` and `oos_notice` are off.

The pre-start kick button keeps the native `button_kick` click handler, so a kick uses exactly the
same removal path as resigning from the lobby. The pre-start button keeps the position declared in
`interface/ingamelobby.gui` (`205,2`); the plugin no longer moves it at runtime. Set
`host_only_kick=0` to disable the whole kick feature (pre-start host gating and the in-game
Tab-panel buttons). The old `kick_button_x` / `kick_button_y` keys are accepted but ignored: edit the
`position` in the `.gui` files instead.

In the in-game player list, the host sees one small kick button above each other player's name
(`player_entry`, few players) or flag (`short_player_entry`, many players). The button is a separate
`v2dll_kick` control, not the native `button_kick`; there is no "select a name first" step. Clicking
it removes that player from the session, sends the vanilla `CAddPlayer` (`FUN_0072BA30`, so every
client drops the player from its lists) and the vanilla `CStartAICommand` (`0x18D`) with the player's
tag and country index, so the country becomes AI-controlled and the kicked client returns to the
frontend. The plugin shows the buttons only on the host, hides them on clients, and hides the
host's own row. The buttons are found through the row window's **pure find** slot (vtable `+0x48`,
`0x009A4610`), not `+0x34`: that one is create-or-find and dereferences `[window+0x30]`, which is
null while the row is still being built, and it crashed when the Tab player list opened. Visibility
uses `CEU3Button`'s `Show()` (`+0x34`) and `Hide()` (`+0x38`), which set the render byte `+0x4F`
(the old code called `+0x38` to show and `+0x64`, so the button stayed hidden). If the buttons do
not appear on the host, check the plugin log: it names the failed `v2dll_kick` lookup. Also make
sure `interface/menubar.gui` contains the `v2dll_kick` control in both `player_entry` and
`short_player_entry` and that the mod does not override `menubar.gui` with an older copy.

The `[Puppets]` options lift ten independent vanilla restrictions on vassals and substates. They
default to `0` (disabled) and each key patches only its own sites, so they can be mixed freely. Like
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

The `[Wars]` option is independent of the puppet block:

| Key | Effect |
|---|---|
| `cancel_wars_with_missing_countries` | Cancels a war that only exists because one side names a country that no longer exists (annexed or never created, i.e. its `CCountry` has an empty owned-province vector at `+0x9D8/+0x9DC`). A war declared by an event on such a tag keeps a valid `CCountry` in the side vector, so the native empty-side check never fires and the war stays at 100% warscore forever. The plugin hooks the call to the daily war tick (`FUN_006840F0`, call site `0x006859E9`), removes those participants with the same `War_RemoveAttacker` (`0x009351C0`) / `War_RemoveDefender` (`0x00936070`) helpers that `Country_Annex` uses, and then runs the native tick. If a side is left empty, the plugin also clears `CWar+8` (a flag the release-vassal war path sets to block automatic cancellation) and the native empty-side branch then performs the actual cancellation, clears the war goals and moves the war to the ended list. Only registered, non-null country slots are touched, so an invalid slot is never passed to the native removal helpers. |

The `[Events]` option controls when events become eligible for the daily scan:

| Key | Effect |
|---|---|
| `fire_on_time` | Events whose trigger depends on the calendar (`date`, `year`, `month`) no longer wait for the next month change. Vanilla rebuilds each country/province event candidate list only once a month (`FUN_008A78D0`) and appends an event only when its trigger is already true at that moment, so a `date = ...` condition that becomes true mid-month is not scanned until the next month. The plugin replaces the two candidate-gate `JZ` instructions with a thunk that also appends the event when its trigger tree contains a `date`, `year` or `month` leaf. The daily scan still evaluates the full trigger before firing, so this only changes eligibility, not the trigger result. Country events are scanned on odd days and province events on even days, so a time-gated event fires on the next scan day for its scope. Other trigger conditions (money, flags, war, etc.) keep the vanilla monthly candidate rebuild. |

The `[ScriptExtensions]` block adds script conditions that vanilla Victoria II does not have:

| Key | Effect |
|---|---|
| `date_trigger` | Adds `date = MM/DD/YYYY`, an exact-day version of the native `year` condition, usable in `potential`, `allow`, event `trigger` and any other trigger block. |
| `guard_missing_modifiers` | Makes `add_country_modifier`, `add_province_modifier`, `remove_country_modifier` and `remove_province_modifier` safe when the named modifier set does not exist in `common/event_modifiers.txt` (or the static modifier lists). Vanilla stores a null modifier and later crashes when the effect tooltip tries to print its name. The plugin replaces the four effect tooltip slots and the two `has_country_modifier` / `has_province_modifier` trigger tooltip slots with null-safe guards that show `INVALID MODIFIERS`; the native execute slots are already null-safe, so the effect is silently ignored. It also hooks the add/remove effect init slots to log `guard_missing_modifiers: MISSING MODIFIER '<name>' in <add/remove>_<country/province>_modifier`, so the offending script line can be found from the log. The game's own `Unknown modifier-type` log line is unchanged. |

`date = 01/21/1837` is false before 21 January 1837 and true from that
day onward (the comparison is `current game day >= target day`, like
`year`). Inside a `NOT` it is the opposite, so `NOT = { date = 02/22/1838 }`
is true only before 22 February 1838. Combine both forms to open a window, and
add a second `NOT` for a single day:

```text
potential = {
    date = 01/21/1837              # visible from 21 Jan 1837 onward
    NOT = { date = 02/22/1838 }    # ...but not from 22 Feb 1838 onward
}

allow = {
    date = 01/21/1837
    NOT = { date = 01/22/1837 }    # available only on 21 Jan 1837
}
```

The decision tooltip prints the condition as `date = 01/21/1837` (prefixed
with `NOT` inside a `NOT`), so the syntax is visible in the decision window.
Accepted forms are `MM/DD/YYYY` (`01/21/1837`, the requested order),
`YYYY.MM.DD`, `YYYY/MM/DD`, `YYYY-MM-DD`, and `DD/MM/YYYY` when the first
component is greater than 12. The game calendar has 365-day years and no leap
years, so 29 February does not exist. An invalid date is logged (the first 20
occurrences) and never becomes true on its own; inside a `NOT` it is therefore
always true, so fix the date when the log warns about it.

Implementation: `TriggerBlock_AddChild` (`FUN_008B33E0`) has no native `date`
case; the keyword is registered with token `0x2A1` for bookmarks, ideologies
and OOB history, and inside a trigger block it would otherwise be dropped as
an unknown scripted trigger (always true). The plugin hooks the factory, asks
it for a `has_country_flag` object (token `0x40A`) so the raw value text is
stored, caches the parsed game day in the object's free `+0x34` bytes and
swaps in a private copy of the `has_country_flag` vtable whose Evaluate
(slot 6) compares `world+0xB0C` / 24 with the cached day and whose tooltip
(slot 10) prints the script syntax. When the core's `FIX_PROVINCE_FLAGS` hook
is already installed at the factory entry, the plugin chains to it instead of
replacing it. Every multiplayer participant must use the same
`date_trigger` value, because it changes how the same scripts are evaluated.

Implementation of `guard_missing_modifiers`: the four effect classes are
`CAddProvinceModifierEffect` (`0x00E2ABA8`), `CAddCountryModifierEffect`
(`0x00E2ABE0`), `CRemoveProvinceModifierEffect` (`0x00E2AC18`) and
`CRemoveCountryModifierEffect` (`0x00E2AC50`); their tooltip is vtable slot
`+0x24` (`0x008814E0`, `0x00881B40`, `0x008822C0`, `0x008826B0`) and their
modifier pointer is at `+0x24` for the add effects and `+0x20` for the remove
effects. The two triggers are `CHasCountryModifierTrigger` (`0x00E30858`,
tooltip `0x004CD930`, modifier at `+0x1C`) and
`CHasProvinceModifierTrigger` (`0x00E30890`, tooltip `0x004CE000`, modifier at
`+0x1C`), with the tooltip in vtable slot `+0x28`. Each guard checks the
modifier pointer, writes `INVALID MODIFIERS` into the output string, frees the
by-value string argument of the effect tooltips exactly as the native "nothing
to say" path does, and returns. The native execute slots are already null-safe,
so the effect is ignored. Every slot is guarded against the analyzed Victoria
II 3.04 pointer; if a vtable differs, that slot is left native and the result
is logged.

The add-effect init slot `+0x10` (`FUN_00881260`) and the remove-effect init
slot `+0x1C` (`FUN_008820D0`) are also hooked. After the native init runs, the
hook reads the resolved modifier ID (`+0x24` add, `+0x20` remove). When it is
zero it logs `guard_missing_modifiers: MISSING MODIFIER '<name>' in
<add|remove>_<country|province>_modifier`, using the name still present at
`context+0x22C`. This replaces the old per-country `SKIP ... has no provinces`
lines, which were removed because they only described expected landless tags.


The country-skip switches default to `1` in the generated config. They omit the corresponding
native update for countries whose province vector is empty. Set either to `0` to keep that update.
`skip_empty_country_daily_update`
skips `Country_DailyUpdate`; `skip_empty_country_prepass` skips `Country_PrePass`.
Both switches always exempt the rebel tag `REB`: the engine models rebels as a
real `CCountry` with no provinces, so skipping it would freeze rebel logic. The
exemption uses the same three tag bytes at `CCountry+0x1C` that the game checks
at `v2game.exe` `0x00451BBF`. These options can change simulation behavior:
empty countries can still carry relations or participate in AI logic. The
plugin writes first-seen country indices and raw tags, plus skip-count
summaries, to `v2dll_country_daily_optimizer.log` in the active mod folder
when a mod-specific INI is present, beside the DLL when using the DLL-local INI,
or in the game folder when `local_config=0`. It also reports the loaded settings
through the plugin log.

`cleanup_armies_of_landless_countries` defaults to `1` in the generated config.
It scans the country table after each daily economy tick and removes armies from registered countries whose
province vector is empty. This uses the game's native army destruction routine
so its country, transport, and other game-owned links are updated together.
It is a diagnostic fix for orphaned armies after annexation, but applies to
*all* landless registered countries; countries that intentionally retain
landless/exiled armies are affected too. The rebel tag `REB` is always exempt:
the engine models rebels as a real `CCountry` with no provinces, so without the
exemption this option would delete rebel brigades and make uprisings vanish.
The check matches the game's own comparison of the three tag bytes at
`CCountry+0x1C` (`v2game.exe` `0x00451BBF`: `cmp 'R', 'E', 'B'`). Removed country slots, raw tags, and army counts are recorded
in `v2dll_country_daily_optimizer.log`. Enable it only for a test save first.

The generated config sets `render_thread_core=2`, pinning only the native
`Render_MapFrame` call to the second **logical processor**, then restoring the
game's previous thread affinity. Set it to `3` for the third processor, or `0`
to disable the option. The
requested processor must be included in the process affinity mask. This does
not make rendering parallel or move the simulation to another processor; it
only changes where the existing render call runs. Compare frame pacing with
the same save, and return it to `0` if performance regresses.

Set `disable_log=1` to silence this plugin's file log and plugin logger messages.
The existing `.log` file is left in place but is not appended while logging is
disabled. Set it back to `0` to resume logging on the next launch.

The host/join flow writes its own `hostjoin.log` in the same folder as
`v2dll_country_daily_optimizer.log` (active mod folder when its INI is present,
otherwise the DLL folder when `local_config=1`, or the game folder when
`local_config=0`). It contains only the Rehost/Ctrl+Alt+R, stage-machine, lobby,
join-address and player-lost lines, plus the `sync_realign:` / `sync_dump:`
host-comparison dumps, so the host and each client can be compared directly. The
same lines are also sent to the shared plugin log; set `hostjoin_log=0` to stop
writing the dedicated file.

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

`keep_puppets_when_great_powers` defaults to `1` in the generated config,
preserving the overlord/satellite
relationship when a subject is promoted to Great Power. The country still gets
Great Power status; the option skips only the native relation-removal branch.
It is guarded against the analyzed Victoria II 3.04 bytes.
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

`prefetch_pop_reset_chain`, `prefetch_pop_culture`, and
`prefetch_pop_religion` default to `1` in the generated config. If a mod adds
many cultures, these settings enable a cache
prefetch in the measured linked-pop reset pass (`FUN_004B9C60` →
`FUN_0095EBF0`). More cultures do not by themselves prove a culture-count loop;
they can split populations into more culture-specific pops, increasing the
number of pop objects walked. The option prefetches the next pop and cache lines
the native reset routine writes, plus the cache line containing the pop's
culture (`+0x6C`) and religion (`+0x70`) pointers. It does not change pop values,
cultures, or update timing. Prefetching can also increase cache traffic;
compare the same save and turn it back to `0` if there
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
