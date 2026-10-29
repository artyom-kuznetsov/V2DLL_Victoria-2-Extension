# ccore_yearly_data_cache

CreatineCore submod. Put `ccore_yearly_data_cache.dll` into `z_CreatineCore\dll_Submods\`; on the first start it creates
`ccore_yearly_data_cache.ini` next to itself. It is **off** until `ENABLE=1` is set there.

Once per game year it copies four per-country economy blocks of a game save into `z_CreatineCore\Cache\`:
`saved_country_supply`, `domestic_demand_pool`, `actual_sold_domestic` and the country-level `stockpile`
(the `stockpile` blocks nested in factories / artisans are not taken). Meant for studying how the economy of every
country develops over a campaign.

## How it works

The module installs no hooks and reads no game memory. The engine writes the save itself, so the game's **autosave must be
on** (or save by hand). The engine puts saves into `Documents\Paradox Interactive\Victoria II\<mod name>\save games`; a low-priority thread polls that (every mod subfolder) and `<game folder>\save games` every 3 seconds:

* saves that already existed when the game started are ignored;
* a changed save is processed once its size and time stay the same for two polls;
* its header (`date=`, `player=`, `start_date=`) gives the key `year|player|start_date`; only the first save of every
  campaign year is taken (the keys are re-read from the existing cache files at start, so a restart does not duplicate years);
* from every top-level `TAG=` country block the four blocks (exactly one tab of indent) are copied; countries whose four blocks
  are all empty are skipped.

Output: `Cache\<YYYY.MM.DD>_<player>_<save name>.txt`, written in the save's own syntax, about 0.1 MB per year:

```
# CreatineCore yearly data cache v1
# key=1861|SGF|1836.1.1
# date=1861.5.8
# source=mp_The_Danubian Confederation1861_05_08
DUA=
{
	stockpile=
	{
		ammunition=1999.99988
		...
	}
	domestic_demand_pool=
	{
		...
	}
}
```

## Cache size

When `Cache` is over 50 MB, every cache file older than 30 days (file write time) is deleted. If nothing is older than that,
nothing is deleted.

## Checked

Extraction compared with an independent Python parse of `mp_The_Danubian Confederation1861_05_08.v2` (131 of 370 countries have
data, identical result, 31 ms for a 30 MB save); watcher and the three cleanup cases tested on copies; the game started with the
module enabled. Not yet seen producing a file inside a real campaign.

Source: `ccore_yearly_data_cache.cpp`. Build: `ccore_yearly_data_cache.vcxproj` (Win32, v145, static CRT, same as the other submods);
`V2ModAPI.h` is a copy of `Source\V2\V2\V2ModAPI.h`.
