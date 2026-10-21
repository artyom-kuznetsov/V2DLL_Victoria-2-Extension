
### dll_Submods
Every `*.dll` in `z_CreatineCore\dll_Submods\` is loaded at startup (alphabetical order, after all built-in patches), whichever mod is running.
If the author did not provide his submod with settings, to disable one, rename it (e.g. `x.dll.off`) or move it out of the folder. Submods that need mod files (a `.gui`, textures) still read those from the running mod.
  
# Feature overview
## Explaining each option in the .ini file
### Local Config
#### LOCAL_MOD_CONFIG
This option allows to use different configurations for different installed mods. All you need to do
is copy the .ini file to a mod folder, and launch the mod as usual.

### Military
#### 1. ALWAYS_ADD_WARGOALS 
Patch for enabling adding wargoals without having positive warscore (made by Zombie_Freak115).
#### 2. ARMY_FIX_BAD_REINFORCEMENT / NAVY_FIX_BAD_REINFORCEMENT
Patches to make navies and brigades inside armies and fleets reinforce separately, fixing slower than intended reinforcement under insufficient supplies (made by Zombie_Freak115).
#### 3. ARMY_BETTER_REINFORCE_ON_ALLIED_OWNED_LAND
Increases reinforce rate on allied owned land from 100% to 150% (for comparison, your own land is 200%, occupied is 100%) (made by balticšprott).
#### 5. NAVY_ALLOW_USE_ALLY_TRANSPORTS
Allows sending armies to allied transport navies in adjacent sea tile (made by balticšprott).
#### 6. COMBAT_ENABLE_ROLL_CHANGES
Enables patch for dice rolls in battle (made by balticšprott based on Zombie_Freak115 work).
#### 7. COMBAT_ROLL_MIN / COMBAT_ROLL_MAX
Min and Max dice rolls in battle (made by balticšprott).
#### 8. COMBAT_LOSSES_VISIBLE_TO_EVERYONE
Daily casualties in a battle are now visible to all countries, not just the ones participating in the battle (made by balticšprott).
#### 9. COMBAT_SECOND_LINE_SUPPORT_UNIT_PRIORITY
If there are units with support stat in reserve during battle, they will be prioritized to occupy vacant slots in the second row (made by balticšprott).
#### 10. BATTLE_SECOND_LINE_DAMAGE_REDIRECT
If enabled, units from second row will be able to damage enemy's second row units, 20% redirected from damage to the first row (made by balticšprott).
#### 11. ARMY_FIX_SATELLITE_COMMAND
The "Command army" button on a satellite is always available (vanilla: only while you fight a war together), and the command over the satellite's armies is kept after peace is made (made by balticšprott).
  
### Economic
#### 1. TRADE_PRICE_DELTA_PERCENTUAL 
Prices shift by 0.25% of the base price instead of flat 0.01 per day.
Goods that must keep the flat step can be listed in `common/defines_ccore.txt` (made by balticšprott).
#### 2. TRADE_PRICE_DELTA_EXPONENTIAL 
Enables exponential price shifts instead of flat or percentual. INCOMPATIBLE with №1 (made by vesper).
Goods that must keep the flat step can be listed in `common/defines_ccore.txt`.
#### 3. TRADE_MAX_PRICE_20X_MULTIPLIER
Just changes the price ceiling from x5 of base price to x20 of it.  
Note: an overflow might occur that will break your game if prices of some factory inputs go beyond its max savings. I recommend increasing MAX_FACTORY_MONEY_SAVE define if you are using this (made by balticšprott).
#### 4. FACTORY_ALLOW_CONSTRUCTION_IN_COLONIAL
Allow construction of factories in colonial regions. Button called `hide_colonial_states` in `country_production.gui`
will toggle visibility of colonial states in the list. Need to allow some factories for construction
manually in options below (made by balticšprott).
#### 6. FACTORY_COLONIAL_ALLOW_LOCAL_SUPPLY
Allows construction factories with "limit_by_local_supply = yes" attribute to be constructed in colonies (hi vic uni) (made by balticšprott).
#### 7. FACTORY_ALLOW_UNCIV_CONSTRUCTION
Allows uncivilized countries to construct factories (made by balticšprott).
#### 8. FACTORY_COLONIAL_ALLOW_ALL
Allows construction of all factories in colonial regions, not just whitelisted (see №10) and ones with "limit_by_local_supply = yes" attribute (made by balticšprott).
#### 9. FACTORY_COLONIAL_EXTRA_WHITELIST=X
Type in production types separated by comma to allow constructing them in colonial regions, if you do not intend allowing all factories.  
Can work together with FACTORY_COLONIAL_ALLOW_LOCAL_SUPPLY (made by balticšprott).
#### 10. FACTORY_REFUND_SAVINGS_ON_CLOSE
Factory will transfer its savings to capitalists in region when closed. Money will be wasted if there are none (made by balticšprott).
#### 11. PATCH_FACTORY_AUTO_CLOSE_UNPROFITABLE
Unsubsidized unprofitable factories (income minus goods cost is negative, salaries are not included)
will be automatically closed after 60 days (configurable in `<mod>/common/defines_ccore.txt`) (made by balticšprott).
#### 12. FACTORY_AI_SPAM_FIX
AI countries expand an existing factory only if enough of its jobs are filled with workers.
Fixes vanilla AI expanding factories to ridiculous levels for no reason (made by balticšprott).
#### 13. FACTORY_FORCE_MIN_WAGE 
Factories will be forced to pay a minimum wage of X pounds per 10K workers (configurable in `<mod>/common/defines_ccore.txt`) (made by balticšprott).
#### 14. FACTORY_AI_FACTORY_PRIORITY_RULESWAP 
AI will manage factory priotities if economic policy has `factory_priority = no` instead of `delete_factory_if_no_input = yes` (made by balticšprott).
#### 15. POP_CARD_NEEDS_AFFECTED_BY_NEEDS_MODIFIERS_FIX
Pop goods consumption in pop card will now be affected by pop need modifiers (made by balticšprott).
#### 16. POP_BUDGET_PAYOUT_NEEDS_SCALED 
Budget payments to pops will scale with pop need modifiers (made by balticšprott).
#### 17. POP_FIX_NEEDS_MODIFIERS
Fixes pop need modifiers, they now do exactly what you expect (some of them were switched up) (made by balticšprott).
#### 18. ENABLE_MINTING
Every country gets a new daily income called "minting", calculated from a formula you write in `<mod>/common\defines_ccore.txt` inside your mod folder. 
`minting_inc` label in `country_budget.gui` will display the income (made by balticšprott).
#### 19. FACTORY_MAINTENANCE_IGNORE_THROUGHPUT
Factories buy maintenance goods (`efficiency` in production types) in the amount they really consume, without the throughput multiplier. Vanilla bought base x level x throughput every day but consumed only base x level, so the stock grew every day when throughput was above 100% (made by balticšprott).
#### 20. FACTORY_SUBSIDY_COVERS_TARIFF
Tariffs make factories spend more money and subsidy does not calculate for that ==> Factory can't work on 100% efficiency.  
This fix makes subsidies cover tariff expenses (made by balticšprott).
  
### UI 
#### 1. ENABLE_BUTTONS 
Adds support for a few new buttons:  
- FE_ACADEMIES_BDSM; must be located in tech menu; triggers decision "open_academy_decisions_dec"  
- FE_RPROJECTS_BDSM; must be located in tech menu; triggers decision "open_research_projects_dec"  
- FE_BUDGET_DIPLO_BDSM; must be located in budget menu; triggers decision "exchange_settings_dec"  
^ those decisions have to be available to be clicked for the country (potential and allow triggers have to be true) (made by balticšprott).
#### 2. ENABLE_DECISION_FILTER 
Hides abovementioned decisions from the regular decision menu (basically I'm decluttering dec menu by adding new buttons for some decs) (made by balticšprott).
#### 4. ENABLE_VERSION_LABEL 
Changes version label in main menu to `V2 v3.04 + CreatineCore v*` (made by balticšprott).
#### 6. HIDE_UNAVAILABLE_LIMIT_BY_SUPPLY_FACTORIES 
Hides factories with "limit_by_local_supply = yes" from factory construction menu if there is no required supply in the region (made by balticšprott).
#### 7. HIDE_RAW_GOODS_FILTER
Hides filter buttons (in production tab) for goods that name starts with "raw_" (made by balticšprott).
#### 8. FILTER_SHOW_ALL_FACTORIES_IN_STATE
Production tab filters will now show all factories in a state with filtered factory (made by balticšprott).
#### 9. FACTORY_FILTER_BY_PRODUCERS_ONLY
Production tab filters will show only producing factories of selected good, not both producers and consumers (made by balticšprott).
#### 10. ENABLE_MUSIC_PLAYER
Buttons located in topbar called `button_fe_player_pause`, `button_fe_player_next` and a slider `fe_player_volume_slider`
will pause, skip and configure music volume. Check `Music Player Assets` folder for pre-made assets (made by balticšprott).
#### 11. GOODS_ICONS_AS_SEPARATE_FILES
On by default, does nothing until a good gets an `icon` key. Goods icons no longer have to live in the three big atlases (`gfx\interface\resources.dds`, `resources_big.dds`, `resources_small.dds`). Give a good in `common\goods.txt` a path to its own folder:
```
cotton = {
    cost = 4
    color = { 255 255 255 }
    icon = "gfx\\goods\\cotton"
}
```
and put the icons there: `big.dds` (the size of one frame of `resources_big.dds`), `normal.dds` (`resources.dds`) and `small.dds` (`resources_small.dds`); `.tga`, `.png` and `.bmp` work too. 
A missing size is made from the nearest present one by scaling; 
realistically this means you are allowed to only place the largest icon and other sized will be scaled down from it automatically. 
Goods without the key, or with nothing found, keep their frame from the atlas. 
The `icon` key is cut out of `goods.txt` before the game parses it, so the vanilla parser never sees it (made by balticšprott).
#### 12. ENABLE_RESTART_GAME_BUTTON
Button in "ESC" menu (`menubar.gui`) called `true_exit` will restart the game with the same modset (made by maxioten).
#### 13. FIX_BUDGET_TOTAL_INCOME_LABEL
The "Total income" row of the budget window did not include tariff income. This patch fixes it (made by balticšprott).
#### 14. PATCH_NEEDS_HONEST_UI
Fixes "100% needs fulfilled" in pops menu, when in reality it is not the case. With this patch, real needs fulfillment is displayed (made by balticšprott).
#### 15. ENABLE_VASSAL_COLORS=1 // VASSAL_COLOR_PERCENT=80
Satellite colour will be closer to its overlord colour by set percent. 100 = take overlord colour, 0 = keep original colour (made by maxioten).
#### 16. FACTORY_MAINTENANCE_DISPLAY_FIX
Trade window and factory window now show the same real consumption of maintenance goods (`efficiency` in production types): base x level x (1 + factory_maintenance), without the throughput multiplier (made by balticšprott).
  
#### 17. GOODS_NEED_TOTAL
Goods card (`trade_flow`) gets a third total, "Required": government and factory needs of the shown country for this good (factory need from the same statistics as the "Used" column, so Required is never below Used) plus the needs of buildings with `goods_consumption` (budget expenses). Population is not included. Needs `total_need_text` / `total_need_value` in `trade_flow.gui` and the `TRADE_FLOW_TOTAL_NEED` localisation key; works for any country (made by balticšprott).
  
#### 18. TRADE_WINDOW_REAL_POP_NEEDS
The population "Need" column of the trade window (and the "Total needed" of the goods card) shows the full demand the engine really builds for pops (with life/everyday/luxury and strata need modifiers), not the vanilla simplified estimate. Values are the demand of the last finished day; before the first day passes the vanilla numbers stay (made by balticšprott).
  
### Miscellaneous
#### 1. PATCH_REMOVE_CONSCIOUSNESS_PLURALITY_GROWTH 
Removes plurality growth from average consciousness. In-game tooltip says otherwise though. So this patch removes this tooltip too (hi tgc) (made by balticšprott).
#### 2. PATCH_CIVILIZE_NULL_CHECK
Fixes a crash when a country that has factories civilizes (made by balticšprott).
#### 3. PATCH_GRAPH_POINT_CLAMP
Prevents the game from crashing from overflow I talked about in Economic №3 (doesn't prevent it from happening though) (made by balticšprott).
#### 4. PATCH_ALLOW_UNCIV_TECH_RESEARCH
Allows non-ai uncivs to research tech. (made by maxioten).
#### 5. MUSIC_FAIR_RANDOM
Music will be selected randomly (while following triggers written in songs.txt), unlimiting amount of music tracks in a mod (vanilla player can only play ~<10 tracks) (made by balticšprott).
#### 6. PATCH_TECH_NULL_CHECK_FIXES
Fixes miscellaneous crashes when opening tech tab (made by balticšprott).
#### 7. PATCH_SUPPLY_SOURCE_NULL_CHECK
Prevents game from crashing in miscellaneous scenarios with "limit_by_local_supply = yes" factories (made by balticšprott).
#### 8. PATCH_AI_NAVAL_BASE_LIMIT
When enabled, an AI country founds naval bases in at most `ai_naval_base_max_provinces_per_state` provinces of one state (`<mod>\common\defines_ccore.txt`, default 1, `0` = no limit). The vanilla AI builds a naval base in every port province. The player and capitalists are not limited.  
You don't need this if your mod only allows one naval base per state (made by balticšprott).
#### 9. LOAD_DLL_FROM_MOD_FOLDER
CreatineCore will load `ccore_mod.dll` in the mod folder. In case you want to add new patches for your mod independently (made by maxioten).
  
  
### Script Extensions
#### 1. ENABLE_ASSIMILATE_BLOCK 
Expands `assimilate` effect. Example:
```
any_pop = {
	limit = { culture = french }
	assimilate = { culture = north_german amount = 0.5 }
}
```
also works for religion
```
any_pop = {
    limit = {
        culture = french
        religion = catholic
    }
    assimilate = {
        religion = protestant
        amount = 0.3
    }
}
```
and both together
```
425 = {
    assimilate = {
        culture = north_german
        religion = protestant
        amount = 0.5
    }
}
```
(made by GODOG).
#### 2. BUILDING_GOODS_CONSUMPTION
Teaches the game the key `goods_consumption` in a building of `common\buildings.txt` (without the patch the vanilla parser mis-reads the block and the game crashes).
Adds daily consumption of set goods to country budget. You'll have to add a text label with name `naval_base_expense` to `country_budget.gui`.
Only buildings with `province = yes` are supported. Up to 16 goods per building (made by balticšprott).
Example:
```
railroad = {   
	type = infrastructure
	goods_cost =
	{
		steel = 400
	}
	goods_consumption = {
		cement = 0.5	# 8
		steel = 1		# 16
		glass = 1		# 4
		timber = 1		# 4		# TOTAL 32
	}
	time = 365
	visibility = yes
	onmap = yes
	max_level = 7
	province = yes
	
	infrastructure = 0.16
	movement_cost = -0.05
	
	pop_build_factory = yes
	spawn_railway_track = yes
}
```
#### 3. ENABLE_EVENT_SOUNDS
Enables playing sounds on certain events. Like the super-events. 
Read `z_CreatineCore\watch\music.txt` file for more information (made by maxioten). The same `watch\music.txt` + `sound\` pair inside a running mod folder is also read and takes priority over the one in `z_CreatineCore\`.
#### 3. POP_SALARY_ADDITIONAL_MULTIPLIER
Scriptable increases of all pop income sources after taxes are withdrawn (pops get +income% from thin air).  
Can be a constant increase or be a per-country modifier, configure in `<mod>/common\defines_ccore.txt`.  
Used to keep pops consuming goods and combat endgame economy crisis.  
Comes with `pop_income_modifier` for technologies and inventions, change `RGO_INPUT_TECH` localization to give the modifier a name.  
Can't be negative (you can't cut pop's salary, only raise it) (made by balticšprott).
#### 4. ENABLE_MOVE_POP_BLOCK
Expands the `move_pop` effect with a block form that moves only a share of a pop to another province. Example:
```
any_pop = {
	limit = { culture = french }
	move_pop = {
		where = 425
		amount = 0.7
	}
}
```
`where` is a province id, `amount` is a share from 0 to 1 (0.7 moves 70 percent, 1 moves the whole pop like the vanilla `move_pop = 425`). The moved part carries its share of money, bank, militancy and consciousness, jobs the remaining part loses are re-hired by the same employers.
The moved pop is never merged into a pop of another type, culture or religion in the destination (vanilla merges them). 
The effect tooltip uses the localisation key `MOVE_POP_AMOUNT_EFFECT`, you should add it to your mod's localization.
Vanilla effects (`move_pop = provid`) work the same way, nothing is broken by this patch.
Localization example: `MOVE_POP_AMOUNT_EFFECT;Move §Y$AMOUNT$§! of Pops to §Y$WHERE$§W.\n;X` (made by $COUNTRY_ADJ$).
  
#### 5. POP_BUILD_INFRASTRUCTURE_RULE
Adds a new reform rule `pop_build_infrastructure` (usable in `rules = { }` of `issues.txt`).
`pop_build_factory` now controls only capitalists building factories; `pop_build_infrastructure` controls capitalists building everything else (railways and other province buildings).
Without the new rule in your issues, capitalists will not build railways/infrastructure, so add `pop_build_infrastructure = yes/no` to your economic policies/reforms before enabling (made by balticšprott).

### Stability and Performance
#### 1. PATCH_FPU_FORTRESS / PATCH_D3D_FPU_PRESERVE 
Fixes some float math errors related to different GPU/Drivers (fixes some of desync cases) (made by av213238).
#### 2. PATCH_THREAD_FPU_PIN
Fixes some math errors related to multi-threading (fixes some of desync cases) (made by av213238).
#### 3. PATCH_HEAP_LFH
Decreases RAM fragmentation over long game sessions (might decrease RAM usage) (made by av213238).
#### 4. ENGINE_WORKER_THREADS
Set to 0 to automatically use all available threads. This will improve performance. 
In theory, might reduce desync probability if all lobby participants have the same setting.
Note that performance will be closer to terrible with several instances of the game launched simultaneously (made by av213238).
#### 5. PATCH_POP_QUANTIZE / POP_QUANTIZE_KEEP_BITS
Rouns up microscopic pop attributes (money, savings, etc) that you would never even see in game. 
Might decrease related desync probability and improve performance a bit (rounds up to 12 bits by default, vanilla is 15) (made by av213238).
#### 6. REMOVE_SLEEPERS
Removes sleepers, that artificially reduce FPS but improve FPS stability (they are not necessary for modern PCs) (made by av213238).
#### 8. PATCH_D3D_NO_VSYNC
Force disables VSYNC. Disabling may cause freezes and stutters. (made by av213238).
#### 9. D3D_FPS_LIMIT
FPS Limiter. Set to 0 to disable (made by av213238).
#### 10. FIX_SFX_MIXER_LAG
Fixes behaviour where game constantly tries to access sound mixer for no reason. Enable `REMOVE_SLEEPERS` above. (made by av213238).
#### 11. FIX_ARMY_WINDOW_LAG
Fixes stutters while one or several armies are selected (made by av213238).
#### 12. PATCH_HIGH_PRIORITY
Prioritizes the game process. Supposed a marginal performance gain (made by av213238).
#### 13. PATCH_COMPRESS_FLAG_CACHE
Compresses flag cache to reduce RAM usage (made by wyrm).
#### 14. PATCH_PREFETCH_POPS, PATCH_CULL_DECISION_CHECKS, PATCH_CULL_CB_CHECKS, PATCH_PREFETCH_RELATIONS, PATCH_PREFETCH_AI_RELATIONS, PATCH_FAST_AI_QUEUE, PATCH_PARALLEL_DECISIONS, PATCH_PARALLEL_EVENTS
Some of the performance patches made by wyrm. Should improve game speed, especially on heavy mods.
  
### Diagnostics 
#### 1. ENABLE_LOG 
Just the log used for debugging the .dll. By default it only gets patch install lines, errors and a few one-time status lines.
#### 1a. DEBUG_LOG 
Off by default. Turns on the verbose development diagnostics (per-frame / per-event records, probes, dumps: `Present` frame statistics, `IdleSpike`, ally-embark and army-selection traces, goods-filter probes, goods consumption market numbers, ...). With it on the log grows by tens of megabytes; turn it on only to investigate a problem.
#### 2. PATCH_FACTORY_DUMP_SCAN
I used this to debug overflow related to Economic №3 (didn't help much).
#### 3. ENABLE_OOS_LOG
Logs used for debugging multiplayer out-of-syncs (made by av213238).
#### 4. ENABLE_CRASH_LOG
Crash log :) (made by av213238).
#### 5. ENABLE_CRASH_DUMP
Creates Windows memory dump on game crash (made by av213238).
#### 6. PATCH_STATE_SAVINGS_CAP / STATE_SAVINGS_CAP_POUNDS 
Caps state savings to fix repeating desyncs in MP (made by balticšprott).
#### 7. MP_HOST_HUMAN_SYNC=1
Should prevent one certain miscellanous desync issue. Not confirmed.
  