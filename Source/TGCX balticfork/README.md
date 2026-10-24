# TGCX fork (army Templates + Conform) for V2DLL / BDSM

Fork of **ATCU / tgcx 0.10.4** by azha2005 (`z_The Great Library\victoria2tgcx-0.0.1`, internal name "TGCX").
It runs as a V2DLL submod: `tgcx-0.0.1.dll` in `V2DLL\dll_Submods\`, plus the carrier mod `mod\tgcx_army_universal`
(gui / gfx / localisation, ticked in the launcher after the base mod: `-mod=mod/2.mod -mod=mod/tgcx_army_universal.mod`).
The carrier mod must NOT contain its own `v2dll_mod.dll` (that is the upstream DLL; two copies would both hook the game).

> **Licence:** upstream has no licence. This fork is for personal use; do not publish it (or its binaries) without the author's permission.

## Layout
```
Source\TGCX\
  tgcx.vcxproj            builds Release\tgcx-0.0.1.dll (v145, x86, /MT)
  src\                    upstream sources + the changes below
  mod\tgcx_army_universal\  files for <game>\mod\ (interface, gfx, localisation, tgcx_layout.txt, package markers)
```
Build: `MSBuild tgcx.vcxproj -p:Configuration=Release -p:Platform=Win32`, then copy the DLL to `<game>\V2DLL\dll_Submods\`
and the `mod\tgcx_army_universal` folder to `<game>\mod\` (it already holds the .mod file next to it).

## What differs from upstream
1. **Any v2game.exe whose byte signatures match** (upstream refuses every exe except the stock 3.04 SHA-256). The hash only
   produces a log line now; every hook/module is still gated by its own signatures.
2. **Log** goes to `V2DLL\Logs\tgcx.log` when the DLL sits in `dll_Submods\`.
3. **Localisation.** Every text that was hard-coded in the DLL is now looked up in the `localisation\*.csv` files
   (`key;text;...`, first column after the key, bytes as they are = cp1251 for Russian) of the ticked mods, last mod first;
   the carrier mod's own csv is read after the other mods (so a translation in BDSM wins), then `<game>\localisation`.
   The English wording is only the fallback. Keys (see `localisation\tgcx_army.csv`):
   * `tgcx_tpl_text_title/recruit/status/new/editor`, `tgcx_cf_text_title/changes/conform/cancel` - as before;
   * `tgcx_str_*` - everything else (status lines, summaries, conform rows). Printf conversions (`%u %d %s`) of a translation must match
     the English default's, otherwise the default is used and the log says so;
   * `tgcx_n_regiments_one / _few / _many` - "%u regiment(s)"; with a `_few` form the Slavic rule (1 / 2-4 / 5+) is used;
   * unit names: `tgcx_unit_<unit>` or the engine's own `<unit>` key (BDSM's "Пехота", ...); abbreviations in template names
     (`7 Inf / 1 Art`): `tgcx_abbr_<unit>`.
   * Fonts in `tgcx_army.gui` were switched from `vic_18*` to the mod's Cyrillic `cgothic_18_bold*`.
4. **Window placement.** The Templates window was pinned at (5,69) from the build view, right only for the stock window.
   It is now derived from the native unit-folder row (leftmost folder x - 3, top folder y + 38; in the stock layout that is again
   (5,69)), so a mod that moves the row follows automatically. `tgcx_layout.txt` (`window_dx`, `window_dy`) nudges it further without a
   rebuild. In `tgcx_army.gui` the title bar icon / text sit 12 px higher than the stock offsets to keep covering BDSM's title band
   (BDSM's folder row is 12 px lower than stock while its title stays put).
