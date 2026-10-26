# ccore_baltic_personal_patches

CreatineCore submod. Put `ccore_baltic_personal_patches.dll` into `z_CreatineCore\dll_Submods\`; on the first start it
creates `ccore_baltic_personal_patches.ini` next to itself.

## What it changes

National focuses that support a pop type (`promotion_focus` in `common\national_focus.txt`, e.g. `aristocrats = 0.20`)
work in vanilla like this:

1. **Exclusive target.** All promotion (and demotion) of the state's pops goes to the focused type: the target chooser
   (`FUN_0095B0D0` promotion, `FUN_0095B740` demotion) adds the focus value to that type's weight and returns it
   without the random draw as soon as the weight is positive.
2. **Bigger amount.** The focus value is added to the promotion / demotion rate (`FUN_0095A780`, `FUN_0095AA30`).
3. Pops that already are of the focused type never promote away.

With the module the focus only changes the **chance** of becoming the focused type: in the normal weighted draw the weight
of that target is multiplied by `1 + focus` (0.20 = 20 % more likely, -0.20 = 20 % less likely); the percentage is set in the
focus definition itself in `national_focus.txt`. Nothing is forced and the number of promoting pops is unchanged.

Not touched: the other uses of the focus vector (tiny pops of the focused type are protected from disappearing,
`FUN_00963E50`, `FUN_00963FA0`, `FUN_00964150`, ...).

## Patches (RVA = VA - 0x400000)

| | RVA | What |
|---|---|---|
| P1 | `0x55A893` | promotion amount: `add [esp+18h],eax / adc [esp+1Ch],edx` -> NOP |
| P2 | `0x55A8AB` | promotion amount: `jg return0` (focused type never promotes away) -> NOP |
| P3 | `0x55AB52` | demotion amount: `add edi,eax / adc esi,edx` -> NOP |
| P4 | `0x55B2B8..0x55B313` | promotion target: focus block replaced by a multiplicative weight cave, no forced result |
| P5 | `0x55BA02..0x55BA57` | demotion target: same |

Every site is checked against the original bytes first; a mismatch skips that patch. Nothing on disk is changed.

## ini

| Key | Default | |
|---|---|---|
| `ENABLE` | 1 | 0 = module does nothing |
| `REMOVE_FOCUS_AMOUNT_BONUS` | 1 | P1, P3 |
| `KEEP_FOCUS_TYPE_PROMOTION_BLOCK` | 0 | 1 = keep P2 vanilla rule (skip P2) |

All players of a multiplayer game must use the same DLL and ini.

## Build

`ccore_baltic_personal_patches.vcxproj` (Win32, v145, same as `V2Mod.vcxproj`); `V2ModAPI.h` is a copy of
`Source\V2\V2\V2ModAPI.h` and must stay identical.
