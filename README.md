V2DLL is a reverse engineering project that makes possible a handful of things that were considered impossible/hard to implement before, 
and even make some previously existing .exe patches simpler to use.
Also it improves performance and multiplayer stability significantly.
This is meant to be easy-for-use for other modders, so I'm not going into much detail here. If you want more insight, 
or add some custom patches, or perhaps investigate v2dll under the hood to use for your own work - check the source code.


It was made for my mod - https://github.com/artyom-kuznetsov/BDSM_Mod-Victoria2  
Since, it has some mod-specific features. But most of them can be reused for any other mod.  
Honestly, even if you play vanilla - there is no downside in using V2DLL (don't forget to configure it!)
Almost all of this was tested in MP - no stability effects noticed.

## How to install V2DLL
1. Put all the files from V2DLL folder into the same folder where you have v2game.exe and lua51.dll
2. Tweak v2dll_settings.ini for your liking - every patch is optional (some of them have to be ran in tandem though).
3. Launch the game as usual, with any mod you like.

## How does it work?
Vanilla file lua51.dll is replaced by a brand new file, where the patches are coded.  
The old file must still remain in the folder under name "lua51_real.dll" - 
it's being called by the new file, so no vanilla code is lost and the game can still run.
  
There are also d3d9.dll and dgVoodoo.conf files.  
Those are needed for some performance patches.  
  
# Feature overview
## Explaining each option in the .ini file
### Local Config
#### LOCAL_MOD_CONFIG
This option allows to use different configurations for different installed mods. All you need to do
is copy the .ini file to a mod folder, and launch the mod as usual.

### Military
#### 1. PATCH_ALWAYS_ADD_WARGOALS
Zombiefreak's patch for enabling adding wargoals without having positive warscore.
#### 2. PATCH_LAND_REINFORCE / PATCH_NAVAL_REINFORCE
Zombiefreak's patches to make navies and brigades inside armies and fleets reinforce separately, fixing slower than intended reinforcement under insufficient supplies.
#### 3. PATCH_ALLIED_REINFORCE_150
Increases reinforce rate on allied land from 100% to 150%. Note, that without "PATCH_OCCUPIED_REINFORCE_SPLIT" patch,  
reinforce rate will still be 150% in ally-occupied provinces, not just owned.
#### 4. PATCH_OCCUPIED_REINFORCE_SPLIT / PATCH_ALLY_OWNER_CHECK
Splits reinforce rates on allied land into allied-owned and allied-occupied land. Allied-occupied reinforce rate is 100%, the same as if you occupy it yourself.  
Needs to be used with "PATCH_ALLIED_REINFORCE_150" to achieve a total effect of just increasing reinforce rate in allied-owned land.
#### 5. PATCH_ALLY_EMBARK / SHOW_ALLY_EMBARKED_TOOLTIP
Allows sending armies to allied transport navies in adjacent sea tile. Untested in Multiplayer.
#### 6. PATCH_COMBAT_ROLL
Enables patch for dice rolls in battle.
#### 7. COMBAT_ROLL_MIN / COMBAT_ROLL_MAX
Min and Max dice rolls in battle.  
#### 8. PATCH_COMBAT_LOSS_POPUP_ALL
Daily casualties in a battle are now visible to all countries, not just the ones participating in the battle.
  
### Economic
#### 1. ENABLE_PRICE_DELTA
Prices shift by 0.25% of the base price instead of flat 0.01 per day.
#### 2. PATCH_EXPONENTIAL_PRICE_DELTA
Enables exponential price shifts instead of flat or percentual. INCOMPATIBLE with №1 (made by vesper).
#### 3. PATCH_MAX_RELATIVE_PRICE
Just changes the price ceiling from x5 of base price to x20 of it.  
Note: an overflow might occur that will break your game if prices of some factory inputs go beyond its max savings. I recommend increasing MAX_FACTORY_MONEY_SAVE define if you are using this.
#### 4. PATCH_BUILD_FACTORY_IGNORE_COLONIAL_1 / PATCH_BUILD_FACTORY_IGNORE_COLONIAL_2
Allow construction of factories in colonial regions. Needs to be used together with UI №5.
#### 5. PATCH_BUILD_FACTORY_BUTTON_ENABLE_IGNORE_COLONIAL
Button called "hide_colonial_states" in production menu will now toggle visibility of colonial regions in the menu.
#### 6. PATCH_LOCAL_SUPPLY_FACTORY_IGNORE_COLONIAL
Allows construction factories with "limit_by_local_supply = yes" attribute to be constructed in colonies (hi vic uni)  
You don't need this if you enable №9.
#### 7. PATCH_BUILD_FACTORY_IGNORE_UNCIVILIZED_BUTTON, PATCH_BUILD_FACTORY_CHECKLIST_UNCIVILIZED_OWN, PATCH_BUILD_FACTORY_CHECKLIST_UNCIVILIZED_OTHER, PATCH_BUILD_FACTORY_IGNORE_UNCIVILIZED_CAN_BUILD
Allows uncivilized countries to construct factories.
#### 8. PATCH_PROD_TYPE_GATE
Has to be enabled for №4, №5 and №6.
#### 9. PROD_TYPE_GATE_ALLOW_ALL
Allows construction of all factories in colonial regions, not just whitelisted (see №10) and ones with "limit_by_local_supply = yes" attribute.
#### 10. PROD_TYPE_GATE_EXTRA_WHITELIST=X
Type in production types separated by comma to allow constructing them in colonial regions, if you do not intend allowing all factories.  
Can work together with №6.  
#### 11. ENABLE_MINTING
Every country gets a new daily income called "minting", calculated from a formula you write in `common\defines_v2dll.txt` inside your mod folder.
#### 12. ENABLE_GOODS_CONSUMPTION
Teaches the game the key `goods_consumption = { cement = 5 steel = 5 }` in a building of `common\buildings.txt` (without the patch the vanilla parser mis-reads the block and the game crashes).
Adds daily consumption of set goods to country budget. You'll have to add a text label with name `naval_base_expense` to `country_budget.gui`.
Only buildings with `province = yes` are counted. Up to 16 goods per building.
#### 13. GOODS_CONSUMPTION_MARKET_DEMAND
With №12: the bought amounts are also added to the demand of the world market (the same demand the price formula uses), 
so the state really competes for the goods and prices react. `0` = only money is paid, the market is not touched (turn this on if you don't want money to go into nowhere out of the world economy).
  
#### 14. PATCH_FACTORY_CLOSE_PAYOUT / PATCH_FACTORY_AUTO_CLOSE_UNPROFITABLE / FACTORY_CLOSE_DRY_RUN
Vanilla factories keep their savings (up to `MAX_FACTORY_MONEY_SAVE` x level) when they stop or are closed by hand: the money just freezes inside, and a factory that loses money only closes after the savings run out.  
`PATCH_FACTORY_CLOSE_PAYOUT`: whenever a factory is closed (by hand, automatically by `PATCH_FACTORY_AUTO_CLOSE_UNPROFITABLE`, or when the game stops it at level 1), all the money stored in it is paid to the capitalists of its state (the same payout the game uses for a factory's surplus). If the state has no owners the money stays in the factory.  
`PATCH_FACTORY_AUTO_CLOSE_UNPROFITABLE`: a factory that is not subsidized and has been unprofitable (sales below the cost of its input goods) for `factory_unprofitable_close_days` days in a row (set in `common\defines_v2dll.txt`) is closed automatically, as if closed by hand.  
`FACTORY_CLOSE_DRY_RUN`: nothing is changed, the log only gets `[DRY]` lines saying which factories would be closed/paid.
### UI
#### 1. ENABLE_BUTTONS
Adds support for a few new buttons:  
- FE_ACADEMIES_BDSM; must be located in tech menu; triggers decision "open_academy_decisions_dec"  
- FE_RPROJECTS_BDSM; must be located in tech menu; triggers decision "open_research_projects_dec"  
- FE_BUDGET_DIPLO_BDSM; must be located in budget menu; triggers decision "exchange_settings_dec"  
^ those decisions have to be available to be clicked for the country (potential and allow triggers have to be true).
#### 2. ENABLE_DECISION_FILTER
Hides abovementioned decisions from the regular decision menu (basically I'm decluttering dec menu by adding new buttons for some decs).
#### 3. ENABLE_POP_DISPLAY
Total population is displayed in some surface tooltips, instead of "grown male" population. Not in all of them, so it might confuse the player a bit.
#### 4. ENABLE_VERSION_LABEL
Changes version label in main menu to "V2 v3.04 + V2DLL v*"
#### 5. PATCH_PROD_LIST_VISIBILITY
Needed for Economic №4.
#### 6. HIDE_UNAVAILABLE_LIMIT_BY_SUPPLY_FACTORIES
Hides factories with "limit_by_local_supply = yes" from factory construction menu if there is no required supply in the region.
#### 7. HIDE_RAW_GOODS_FILTER
Hides filter buttons (in production tab) for goods that name starts with "raw_"
#### 8. FILTER_SHOW_ALL_FACTORIES_IN_STATE
Production tab filters will now show all factories in a state with filtered factory.
#### 9. FILTER_PRODUCERS_ONLY
Production tab filters will show only producing factories of selected good, not both producers and consumers.
#### 10. PLAYER_BUTTONS
Buttons located in topbar called "button_fe_player_pause", "button_fe_player_next" and a slider "fe_player_volume_slider"
will pause, skip and configure music volume.
#### 11. ENABLE_GOODS_ICONS
On by default, does nothing until a good gets an `icon` key. Goods icons no longer have to live in the three big atlases (`gfx\interface\resources.dds`, `resources_big.dds`, `resources_small.dds`). Give a good in `common\goods.txt` a path to its own folder:
```
cotton = {
    cost = 4
    color = { 255 255 255 }
    icon = "gfx\\goods\\cotton"
}
```
and put the icons there: `big.dds` (the size of one frame of `resources_big.dds`), `normal.dds` (`resources.dds`) and `small.dds` (`resources_small.dds`); `.tga`, `.png` and `.bmp` work too. A missing size is made from the nearest present one by scaling; `icon` may also point to a single image (used for all three sizes). Goods without the key, or with nothing found, keep their frame from the atlas. The frame size is taken from the atlas (width / `noOfFrames` of the sprite in `interface\core.gfx`), so keep the atlases in the mod; they are the fallback. The `icon` key is cut out of `goods.txt` before the game parses it, so the vanilla parser never sees it.
  
### Miscellaneous
#### 1. PATCH_CONSCIOUSNESS_PLURALITY_GROWTH
Removes plurality growth from average consciousness. In-game tooltip says otherwise though. So this patch removes this tooltip too (hi tgc)
#### 2. PATCH_CIVILIZE_NULL_CHECK
Fixes a crash when a country that has factories civilizes.
#### 3. PATCH_GRAPH_POINT_CLAMP
Prevents the game from crashing from overflow I talked about in Economic №2 (doesn't prevent it from happening though).
#### 4. PATCH_ALLOW_UNCIV_TECH_RESEARCH
Allows non-ai uncivs to research tech. (made by maxioten).
#### 5. PATCH_ARISTOCRAT_INCOME_SHARE
Doubles aristocrat income share from RGO (made by vesper).
#### 6. MUSIC_FAIR_RANDOM
Music will be selected randomly (while following triggers written in songs.txt), unlimiting amount of music tracks in a mod.
#### 7. PATCH_TECH_NULL_CHECK_FIXES
Fixes miscellaneous crashes when opening tech tab.
#### 8. PATCH_SUPPLY_SOURCE_NULL_CHECK
Prevents game from crashing in miscellaneous scenarios with "limit_by_local_supply = yes" factories.
  
### Stability and Performance
#### 1. PATCH_FPU_FORTRESS / PATCH_D3D_FPU_PRESERVE
Fixes some float math errors related to different GPU/Drivers (fixes some of desync cases) (made by av213238).
#### 2. PATCH_THREAD_FPU_PIN
Fixes some math errors related to multi-threading (fixes some of desync cases) (made by av213238).
#### 3. PATCH_HEAP_LFH
Decreases RAM fragmentation over long game sessions (might decrease RAM usage) (made by av213238).
#### 4. ENGINE_WORKER_THREADS
Set to 0 to automatically use all available threads. This will improve performance. 
In theory, might reduce desync probability if all lobby participants have the same setting (made by av213238).
#### 5. PATCH_POP_QUANTIZE / POP_QUANTIZE_KEEP_BITS
Rouns up microscopic pop attributes (money, savings, etc) that you would never even see in game. 
Might decrease related desync probability and improve performance a bit (rounds up to 12 bits by default, vanilla is 15) (made by av213238).
#### 6. PATCH_MP_CLIENT_SLEEP / MP_CLIENT_SLEEP_MS
Removes sleepers, that reduce FPS. Experimental (made by av213238).
#### 7. PATCH_MAIN_LOOP_SLEEP0 / MAIN_LOOP_SLEEP_MS
In theory also improves performace of the host/singleplayer. Experimental (made by av213238).
#### 8. PATCH_D3D_NO_VSYNC
Force disables VSYNC. Experimental. (made by av213238).
#### 9. D3D_FPS_LIMIT
FPS Limiter. Set to 0 to disable.
#### 10. FIX_SFX_MIXER_LAG
Fixes behaviour where game constantly tries to access sound mixer for no reason. Huge performance improvement,
especially noticeable on non-host client in a MP lobby. Enable sleeper patches above. (made by av213238).
#### 11. FIX_ARMY_WINDOW_LAG
Fixes stutters while army/armies are selected.
#### 12. PATCH_HIGH_PRIORITY
Prioritizes the game process. Supposed a marginal performance gain (made by av213238).

  
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
#### 5. HIDE_NO_SUPPLY_DRY_RUN
Used for debugging Economic №6.
#### 6. FACTORY_EXPAND_TRACE
On by default. Observer only, changes nothing in the game: writes `Logs\v2dll_expand.log`, one line each time a factory starts to expand (date, country and factory type, level, how many of its workers are employed, the same for the whole state), separately for capitalist projects and for direct expansions by countries (AI or player). Used to find out how oversized, understaffed factories come about.
#### 7. PATCH_AI_EXPAND_STAFFING
On by default. AI countries expand an existing factory only if enough of its jobs are filled with workers. The vanilla AI builds the most profitable factory type up to huge levels with almost no workers (it looks at the unemployed share of the whole state, not at free craftsmen). The required share is `ai_factory_expand_min_staffing` (percent, default 90, `0` = vanilla behaviour) in `<mod>\common\defines_v2dll.txt`; capitalists need about 90 % in vanilla already. The player is not affected. All players of a multiplayer game need the same DLL and the same value.
  
  
Russian Victoria 2 community: https://discord.gg/f3dpWFt2bR  
Also check this out for other reverse engineering findings: https://github.com/maxioten/Victoria2-Reverse-Engineering/tree/main  