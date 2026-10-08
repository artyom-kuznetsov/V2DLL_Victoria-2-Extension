# V2DLL — patch and memory-area reference

Reference for every patch in the V2DLL proxy (`lua51.dll` for Victoria 2 `v2game.exe`): what each one touches in memory, how it is applied, which `v2dll_settings.ini` key controls it and what it does.

* DLL version documented: **4.61** (`MOD_VERSION` in `Source/V2/V2/V2TechButton.cpp`).
* Source moved 2026-09-30 to `I:\Vic2_DLL\V2DLL - Victoria 2 Extension` (git remote `V2DLL---Victoria-2-Extension`); the old `I:\Vic2_DLL\balticsprott_V2DLL` checkout no longer holds the source.
* Target binary: `v2game.exe` (32-bit x86, preferred image base `0x400000`, ASLR on).
* Verification: before this file was written, a script checked the cited bytes against the on-disk `v2game.exe` — all 22 byte-patch rows (address, length, *expect* bytes), 33 hook-site byte sequences, every redirected `call` / `jnz` target, the topbar vftable slots and every cited resume address (must be an instruction boundary). Behavioural descriptions come from the source comments and code, not from a runtime trace.
* The user-facing description of each ini option is in `README.md`; this file is the memory-level companion to it.

---

## 1. How to read this document

### 1.1 Addresses

| Term | Meaning |
|---|---|
| **RVA** | Offset from the module base. The DLL adds the runtime base (`g_base = GetModuleHandle(NULL)`) to every RVA, so the patches survive ASLR. |
| **VA** | The address as Ghidra shows it for the un-relocated image: `VA = RVA + 0x400000`. Ghidra `FUN_006f3e70` is RVA `0x2F3E70`. |
| `+0xNN` | A field offset inside an engine object (not an address). |

Addresses are RVAs unless marked VA. The byte-patch table (section 3) and the hook tables give both forms; short cross-references give the RVA only.

### 1.2 Patch kinds

| Kind | What is written | Typical footprint |
|---|---|---|
| **BYTE** | Literal bytes replaced in place (table `EXE_PATCHES`, applied by `InstallExePatches`). Each entry has an *expect* array; if the live bytes differ the entry is skipped and logged. | 1–8 bytes |
| **HOOK** | `E9 rel32` written over the site, NOP-padded to an instruction boundary. It jumps to a thunk or a `VirtualAlloc`ed cave that replicates the overwritten instructions, applies the new logic, then jumps back to a *resume* address. | 5–15 bytes |
| **CALL** | Only the `rel32` of an existing `E8 call` is rewritten so it calls our thunk instead. | 4 bytes |
| **JNZ** | Only the `rel32` of an existing near `0F 85` is rewritten. | 4 bytes |
| **ENTRY** | Function-entry hook: the first *N* bytes are copied to a trampoline (followed by a `jmp` back), the entry is overwritten with `E9` to our function, which can call the original through the trampoline. | 5–10 bytes |
| **VSLOT** | One 4-byte function pointer in a C++ vftable (in `.rdata`, patched under `VirtualProtect`). | 4 bytes |
| **IAT** | An import-table slot of `v2game.exe` (or of `tbb.dll`) is pointed at our function. | 4 bytes |
| **DATA** | Immediate operands or globals rewritten at runtime (combat roll cave, price delta). | 1–8 bytes |
| **API** | A Win32/CRT call made by the DLL itself (no game memory touched). | – |

Design rules that apply everywhere:

* Every installer `memcmp`s the site against a known signature first. Mismatch → nothing is written, one line is logged (`… сигнатура не совпала` = "signature did not match"). A patch is never half-applied.
* Naked-asm thunks save registers with `pushad`/`popad` around any C helper call and replicate the overwritten instructions exactly (see the "naked asm hook structure" rule).
* Settings are read from `v2dll_settings.ini` (or the mod's copy when `LOCAL_MOD_CONFIG=1`). Byte-patch keys are `PATCH_<TABLE NAME UPPERCASED>` (aristocrat: one key drives five entries).
* Defaults in the tables are the source defaults. The live ini (`I:\Vic2_Dev\V2BDSM\v2dll_settings.ini`) currently matches them for every key except `PATCH_CIVILIZE_NULL_CHECK` (live ini `0`, but the DLL forces it on).

### 1.3 PE section map (`v2game.exe`)

| Section | RVA range | Holds |
|---|---|---|
| `.text` | `0x001000`–`0x88911A` | Code. The Roll-Changer cave sits in the slack at its tail (`0x889113`). |
| `.rdata` | `0x88A000`–`0xAF13D9` | Import address table (Sleep IAT slot `0x88A0EC`), vftables (`0xA0…`–`0xA4…`), constants such as the price-cap double at `0xA45C28`. |
| `.data` | `0xAF2000`–`0xFF4C24` | Globals: options singleton `0xE5B5E0`, price step `0xE5B9E0`, music state `0xB20C3C`, music object `0xF1CB34`. |
| `.reloc` | `0xFF8000`+ | Relocations (this is why the first two bytes of the combat cave differ at runtime). |

---

## 2. Index of all ini keys

Key | Default | Kind | Address(es) | Section
---|---|---|---|---
`PATCH_ALWAYS_ADD_WARGOALS` | on | BYTE | `0x138AFF` | 3
`PATCH_LAND_REINFORCE` | on | BYTE | `0x1C8C9B` | 3
`PATCH_NAVAL_REINFORCE` | on | BYTE | `0x1C8B1C` | 3
`PATCH_ALLIED_REINFORCE_150` | on | BYTE | `0x1D74BE` | 3
`PATCH_OCCUPIED_REINFORCE_SPLIT` | on | HOOK | `0x1D751B` | 4
`PATCH_ALLY_OWNER_CHECK` | on | JNZ×3 | `0x1D7544`, `0x1D754E`, `0x1D7558` | 4
`PATCH_ALLY_EMBARK` | **off** (experimental) | HOOK ×3 | `0x1D77A0`, `0x1CD058`, `0x1D5E97` | 4
`SHOW_ALLY_EMBARKED_TOOLTIP` | on | VSLOT + HOOK | `0xA16BD0` slot 12, `0x38F559` | 5
`PATCH_COMBAT_ROLL`, `COMBAT_ROLL_MIN/MAX` | on, 0, 4 | DATA | `0x88911E`, `0x889126` | 4
`PATCH_COMBAT_LOSS_POPUP_ALL` | on | BYTE | `0x19CC5D` | 3
`PATCH_BUDGET_TOTAL_INCOME_TARIFFS` | on | BYTE ×2 | `0x2010CC`, `0x2010D6` | 5.31
`ENABLE_PRICE_DELTA` | on | HOOK | `0x82BA9` | 4
`PATCH_EXPONENTIAL_PRICE_DELTA` | off | HOOK | `0x82BA9` | 4
`PATCH_MAX_RELATIVE_PRICE` | on | BYTE | `0xA45C28` | 3
`PATCH_BUILD_FACTORY_IGNORE_COLONIAL_1/_2` | on | BYTE | `0xD0C57`, `0x12FA4E` | 3
`PATCH_BUILD_FACTORY_BUTTON_ENABLE_IGNORE_COLONIAL` | on | BYTE | `0x12E977` | 3
`PATCH_LOCAL_SUPPLY_FACTORY_IGNORE_COLONIAL` | on | BYTE | `0xD0E9D` | 3
`PATCH_BUILD_FACTORY_IGNORE_UNCIVILIZED_BUTTON` | on | BYTE | `0x12E96E` | 3
`PATCH_BUILD_FACTORY_CHECKLIST_UNCIVILIZED_OWN/_OTHER` | on | BYTE | `0x12EA67`, `0x12F0D4` | 3
`PATCH_BUILD_FACTORY_IGNORE_UNCIVILIZED_CAN_BUILD` | on | BYTE | `0x12CA3E` | 3
`PATCH_PROD_TYPE_GATE`, `PROD_TYPE_GATE_ALLOW_ALL`, `PROD_TYPE_GATE_EXTRA_WHITELIST` | on, off, `fishery` | HOOK | `0xD04BC` | 4
`ENABLE_BUTTONS` | on | VSLOT ×4 + glue | vftables `0xA17FA4`, `0xA059F0`, `0xA0FECC`, `0xA0E458` | 5
`ENABLE_MINTING` | on (needs `minting_formula` in `<mod>\common\defines_v2dll.txt`) | CALL + VSLOT + HOOK ×5 | `0x109F74`; `0xA059F0` slot 6; `0x12B510`, `0x12B769`, `0x12A135`, `0x12B0A3`, `0x20A0B8` | 4.7
`ENABLE_GOODS_CONSUMPTION`, `GOODS_CONSUMPTION_MARKET_DEMAND` | on, on | VSLOT ×3 + HOOK ×6 | vftables `0x9FDAC0`/`0x9FDAF0` slot 4, `0xA059F0` slot 6; `0x8466B` (market pass, the real purchase), `0x12B5E1`, `0x12B354`, `0x30E859`, `0x30F3A4`, `0x79C07` | 4.8
`PATCH_FACTORY_CLOSE_PAYOUT`, `PATCH_FACTORY_AUTO_CLOSE_UNPROFITABLE`, `FACTORY_CLOSE_DRY_RUN` | on, on, **on (log only)** | ENTRY ×4 | `0xF5750`, `0xF50C0`, `0x834C6`, `0xF4B30` | 5.13
`ENABLE_DECISION_FILTER` | on | VSLOT | `0xA29B54` slot 6 | 5
`ENABLE_POP_DISPLAY` | **off** | HOOK ×3 | `0x310A32`, `0x22880F`, `0x36DFBB` | 5
`ENABLE_VERSION_LABEL` | on | HOOK | `0x233826` | 5
`PATCH_PROD_LIST_VISIBILITY` | on | HOOK | `0x2F424B` | 5
`HIDE_UNAVAILABLE_LIMIT_BY_SUPPLY_FACTORIES` (+ `HIDE_NO_SUPPLY_DRY_RUN`) | on (dry-run off) | HOOK | `0x2F9E41` | 5
`HIDE_RAW_GOODS_FILTER` | on | HOOK ×2 | `0x2F1C30`, `0x2F1EC0` | 5
`FILTER_SHOW_ALL_FACTORIES_IN_STATE`, `FILTER_PRODUCERS_ONLY` | on, on | CALL ×2 | `0x2F41F7`, `0x2F7471` | 5
`PLAYER_BUTTONS` | on | CALL ×3, VSLOT ×2, ENTRY | see 5.9 | 5
`ENABLE_GOODS_ICONS` | on (inert without `icon` keys) | ENTRY ×3 + IAT | `0x721F40`, `0x7206E0`, `0x7221E0`; IAT slot `0x88A424` | 5.11
`PATCH_CONSCIOUSNESS_PLURALITY_GROWTH` | on | BYTE | `0x10C5DE` | 3
`PATCH_CIVILIZE_NULL_CHECK` | on (**forced on**; live ini says 0) | HOOK | `0x14248B` | 6
`PATCH_GRAPH_POINT_CLAMP` | off | HOOK | `0x5E0FD6` | 6
`PATCH_CHECKSUM_DRIFT_FIX` | off | BYTE | `0x1F8268` | 3
`PATCH_ALLOW_UNCIV_TECH_RESEARCH` | off | BYTE | `0x3AA757` | 3
`PATCH_ARISTOCRAT_INCOME_SHARE` | off | BYTE ×5 | `0xEEA2B` … `0xEEA3C` | 3
`MUSIC_FAIR_RANDOM` | on | HOOK | `0x5534D` | 6
`PATCH_TECH_NULL_CHECK_FIXES` | on | HOOK ×2 | `0x3A918A`, `0x3ADE98` | 6
`PATCH_SUPPLY_SOURCE_NULL_CHECK` | on | HOOK | `0xD15EB` | 6
`PATCH_AI_NAVAL_BASE_LIMIT` | **off** (since 5.46) | HOOK ×3 | `0x457983`, `0x457D02`, `0x458282` | 6
`PATCH_NEEDS_INCOME`, `needs_income_per_10000`, `needs_income_luxury_threshold` | on, 5, 90 | ENTRY hook simulation | `0x85390` | 4.16
`PATCH_FPU_FORTRESS` | on | HOOK (function entry) | `0x5DF550` | 7
`PATCH_D3D_FPU_PRESERVE` | on | IAT + VSLOT | d3d9 `Direct3DCreate9`; IDirect3D9 slot 16 | 7
`PATCH_HEAP_LFH` | on | API | process heaps | 7
`PATCH_THREAD_FPU_PIN` | on | IAT | `CreateThread`, `LoadLibrary*`, `GetTickCount`, tbb.dll | 7
`ENGINE_WORKER_THREADS` | 0 (off) | IAT | `tbb.dll` `task_scheduler_init::initialize` | 7
`PATCH_POP_QUANTIZE`, `POP_QUANTIZE_KEEP_BITS` | on, 12 | ENTRY | `0x85E40` | 7
`PATCH_MP_CLIENT_SLEEP`, `MP_CLIENT_SLEEP_MS` | on, 1 | BYTE-call + IAT | `0x71DD2C`; Sleep IAT `0x88A0EC` | 7
`PATCH_MAIN_LOOP_SLEEP0`, `MAIN_LOOP_SLEEP_MS` | on, 1 | BYTE (imm8) | `0x5DF2D5`, `0x5DF684` | 7
`PATCH_D3D_NO_VSYNC`, `D3D_FPS_LIMIT` | off, 70 | VSLOT | IDirect3DDevice9 slots 16, 17 | 7
`PATCH_HIGH_PRIORITY` | on | API | process priority | 7
`FIX_SFX_MIXER_LAG` | on | IAT | `ws2_32!select` (ordinal 18) | 7
`FIX_ARMY_WINDOW_LAG` / `PATCH_SKIP_NESTED_IDLE` | on / off | ENTRY | `0x254D80` | 7
`PATCH_SKIP_SEL_PROJ`, `PATCH_REUSE_UNIT_VIEW`, `PATCH_SKIP_ARMY_IDLE`, `PATCH_REUSE_WINDOWS`, `PATCH_SKIP_CHK_WIN`, `PATCH_CAM_STILL` | all off (three are forced off) | – | see 7.13 | 7
`ENABLE_LOG`, `DEBUG_LOG`, `PATCH_FACTORY_DUMP_SCAN`, `PATCH_CHECKSUM_DIAGNOSTIC`, `ENABLE_OOS_LOG`, `ENABLE_CRASH_LOG`, `ENABLE_CRASH_DUMP` | on, off, off, off, on, on, off | mixed | see 8 | 8

---

## 3. Byte patches (`EXE_PATCHES`, 22 entries)

All are in-place edits in `.text` (except the price-cap double in `.rdata`). "Expect → replace" bytes are hex. VA = RVA + `0x400000`.

| ini key | Address | Len | Expect → replace | Default | Effect |
|---|---|---|---|---|---|
| `PATCH_ALWAYS_ADD_WARGOALS` | `0x138AFF` (VA `0x538AFF`) | 1 | `00` → `02` | on | Keeps the debug flag `alwaysaddwargoal` permanently on: wargoals can be added without positive warscore. |
| `PATCH_LAND_REINFORCE` | `0x1C8C9B` (VA `0x5C8C9B`) | 4 | `89 4C 24 20` → `90 90 90 90` | on | Removes `mov [esp+20h],ecx`, which forwarded the weakened supply value to the next brigade in the stack. Brigades in an army reinforce independently. |
| `PATCH_NAVAL_REINFORCE` | `0x1C8B1C` (VA `0x5C8B1C`) | 1 | `89` → `8B` | on | Flips the move direction (`mov r/m,r` → `mov r,r/m`) so the forwarding no longer happens for ships. |
| `PATCH_ALLIED_REINFORCE_150` | `0x1D74BE` (VA `0x5D74BE`) | 5 | `B8 E8 03 00 00` → `B8 DC 05 00 00` | on | `mov eax,1000` → `mov eax,1500` at `LAB_005d74bb` in `FUN_005D7420` (`0x1D7420`): reinforce rate on allied land 100 % → 150 %. Shared with REB units in one narrow case (same instruction). |
| `PATCH_COMBAT_LOSS_POPUP_ALL` | `0x19CC5D` (VA `0x59CC5D`) | 2 | `74 4A` → `90 90` | on | In `FUN_0059CA40` (`0x19CA40`, per-day combat update): the `je 0x59CCA9` that skips the floating "CombatLoss" numbers for a country that is not a participant is NOPed. Any country viewing the battle sees the daily casualty numbers. Pure UI (creates a map-text object; touches no RNG or combat state). |
| `PATCH_BUDGET_TOTAL_INCOME_TARIFFS` (2 entries `budget_total_income_tariffs_1/2`) | `0x2010CC` / `0x2010D6` (VA `0x6010CC` / `0x6010D6`) | 7 + 7 | `2B BC 24 20 01 00 00` / `1B B4 24 24 01 00 00` → 7× `90` | on | In `FUN_005FEDE0` (budget window `Update`) the text of `total_inc` (view field `+0x160`) is `FUN_0052B610(...) − tariffs`: right after `call FUN_0052B610` (`0x6010C5`) `sub edi,[esp+0x120]` / `sbb esi,[esp+0x124]` subtract the tariff income (`[esp+0x120]` = 64-bit at `(DAT_00F096C8+0xD)*0x10 → +0x18`, the entry the "Total income" tooltip `FUN_0052A080` prints with the key `TARIFFS_INCOME`). So the row showed income without tariffs, while the tooltip header (the return value of the same function) included them. Both instructions are NOPed. The balance (view field `+0x168`, separate chain at `0x601549`, which also subtracts `[esp+0x120]`) is **not** touched. Pure UI. |
| `PATCH_MAX_RELATIVE_PRICE` | `0xA45C28` (VA `0xE45C28`) | 8 | `00 00 00 00 04 00 04 41` → `00 00 00 00 00 00 24 41` | on | IEEE double stored ×16384. Original = 163840.5 (≈ **10×** base price). New = 655360.0 = **40×** base price. *Note: `README.md` says ×20 — the bytes actually written give ×40.* Read in two places inside the price code (`FUN_00482930` / `FUN_0082f430` region). |
| `PATCH_BUILD_FACTORY_IGNORE_COLONIAL_1` | `0xD0C57` (VA `0x4D0C57`) | 3 | `0F 94 C1` → `B1 01 90` | on | Checklist item "non-colonial state" (`FUN_004D06A0`): `setz cl` → `mov cl,1; nop`. Live-verified: 0 draws a cross, 1 a tick. README: use together with `PATCH_PROD_LIST_VISIBILITY` and `PATCH_PROD_TYPE_GATE`. |
| `PATCH_BUILD_FACTORY_IGNORE_COLONIAL_2` | `0x12FA4E` (VA `0x52FA4E`) | 3 | `0F 94 C0` → `B0 01 90` | on | Same check in `FUN_0052E9F0` (checklist builder): `setz al` → `mov al,1; nop`. Same dependencies as `_1`. |
| `PATCH_BUILD_FACTORY_BUTTON_ENABLE_IGNORE_COLONIAL` | `0x12E977` (VA `0x52E977`) | 2 | `7F 5F` → `90 90` | on | In `FUN_0052E960` (`0x12E960`), the only function that decides whether the "+" build button is enabled: NOPs the `jg` after `cmp [eax+0x84],0` that returned "disabled" for a colonial state. README: needs `PATCH_PROD_TYPE_GATE`; the colonial "+" button state and the `hide_colonial_states` list toggle (`PATCH_PROD_LIST_VISIBILITY`) work together with it. |
| `PATCH_LOCAL_SUPPLY_FACTORY_IGNORE_COLONIAL` | `0xD0E9D` (VA `0x4D0E9D`) | 2 | `7E 35` → `EB 35` | on | In `FUN_004D0E70` (`0xD0E70`; only for production types with `+300` set, i.e. `limit_by_local_supply=yes`): `jle` → unconditional `jmp 0xD0ED4`, skipping the "colonial && source type 2" block. |
| `PATCH_BUILD_FACTORY_IGNORE_UNCIVILIZED_BUTTON` | `0x12E96E` (VA `0x52E96E`) | 2 | `74 68` → `90 90` | on | First test in `FUN_0052E960`: `cmp byte [edi+0x12D0],0; jz disabled` (country civilized?). The `jz` is NOPed. |
| `PATCH_BUILD_FACTORY_CHECKLIST_UNCIVILIZED_OWN` | `0x12EA67` (VA `0x52EA67`) | 6 | `8A 86 D0 12 00 00` → `B0 01 90 90 90 90` | on | Checklist "Civilized country", own-territory branch of `FUN_0052E9F0`: `mov al,[esi+0x12D0]` → `mov al,1`. Always a tick. |
| `PATCH_BUILD_FACTORY_CHECKLIST_UNCIVILIZED_OTHER` | `0x12F0D4` (VA `0x52F0D4`) | 2 | `74 0C` → `90 90` | on | Same function, foreign-territory branch: NOPs the `jz` that zeroed the item when *we* are uncivilized. |
| `PATCH_BUILD_FACTORY_IGNORE_UNCIVILIZED_CAN_BUILD` | `0x12CA3E` (VA `0x52CA3E`) | 2 | `75 08` → `EB 08` | on | The real "can build" gate `FUN_0052C9B0` → `FUN_0052CA30`: `jnz continue` → `jmp continue`, so the extra civilized test in front of `FUN_004D04B0` always passes. |
| `PATCH_CONSCIOUSNESS_PLURALITY_GROWTH` | `0x10C5DE` (VA `0x50C5DE`) | 1 | `03` → `8B` | on | `add eax,[ebx+0x1A8]` → `mov eax,[ebx+0x1A8]`: the monthly plurality growth derived from average consciousness is discarded; plurality only changes by events/scripted `plurality = X` (writer at `0x496470` is untouched). |
| `PATCH_ALLOW_UNCIV_TECH_RESEARCH` | `0x3AA757` (VA `0x7AA757`) | 1 | `75` → `EB` | **off** | Bytes match the exe, but the in-game effect was never confirmed: a second, independent gate exists (`FUN_007A9950` `0x3A9F21`, string `UNCIV_CANT_RESEARCH`, and possibly inside `FUN_00569920`) and is not patched. |
| `PATCH_ARISTOCRAT_INCOME_SHARE` (entry 1) | `0xEEA2B` (VA `0x4EEA2B`) | 1 | `1F` → `11` | **off** | In `FUN_004EE990` (`0xEE990`): numerator shift `uVar1<<0x1F` → `<<0x11` (low half of the 64-bit shift). |
| … (entry 2) | `0xEEA2E` (VA `0x4EEA2E`) | 1 | `1F` → `11` | off | High half of the same shift. |
| … (entry 3) | `0xEEA32` (VA `0x4EEA32`) | 4 | `0F A4 C2 0F` → NOP×4 | off | Removes `shld edx,eax,0Fh` of the denominator scaling. |
| … (entry 4) | `0xEEA37` (VA `0x4EEA37`) | 3 | `C1 E0 0F` → NOP×3 | off | Removes `shl eax,0Fh` of the denominator scaling. |
| … (entry 5) | `0xEEA3C` (VA `0x4EEA3C`) | 6 | `81 E7 00 80 FF FF` → NOP×6 | off | Removes the `and edi,0xFFFF8000` mask. Net effect of the five: result = (owners/workers)·2¹⁷ instead of ·2¹⁶, i.e. **exactly +100 %** of the owner income share; the upper clamp constant (`DAT_0125d758/5c`) is unchanged, so already-clamped values do not grow. |
| `PATCH_CHECKSUM_DRIFT_FIX` | `0x1F8268` (VA `0x5F8268`) | 1 | `40` → `90` | **off** | `INC EAX` removed from the end of the `CBackEndIdler` constructor (`FUN_005F8110`, loads `backend.gui`). That increment bumped the same field (`+0x30`) that `FUN_006377A0` reads as the on-screen checksum, so the checksum drifted by +1 on every session entry. Disabled by decision (2026-09-24): it only masks the drift; the real per-day sync check (`FUN_00682EC0`) is independent. Restart both clients instead. |

**Default state of the table:** 22 entries = 15 on + 7 off (`allow_unciv_tech_research`, the 5 aristocrat entries, `checksum_drift_fix`).

---

## 4. Military and economy hooks

### 4.1 `PATCH_OCCUPIED_REINFORCE_SPLIT` — HOOK, on
* **Site:** `0x1D751B` (VA `0x5D751B`) — 5 bytes `3B 51 20 74 9B` (`cmp edx,[ecx+0x20]; je 0x5D74BB`), inside `FUN_005D7420`.
* **Cave logic:** repeats the `cmp`. If equal (we control a province that is not our core → *occupied*) writes rate **1000** (100 %) and jumps to the shared epilogue `0x1D74C5` (`mov eax,ecx; pop edi; pop esi; pop ebx; mov esp,ebp; pop ebp; ret 4`). Otherwise replays `mov esi,[ecx+0xBE8]` and resumes at `0x1D7526` (allied branch), which still reaches `LAB_005d74bb` and the patched 1500.
* Purpose: with `PATCH_ALLIED_REINFORCE_150` the 150 % applies only to *allied* land, while land you occupy yourself stays at 100 %.

### 4.2 `PATCH_ALLY_OWNER_CHECK` — JNZ ×3, on
* **Sites:** near jumps `0F 85 rel32` at `0x1D7544`, `0x1D754E`, `0x1D7558` (the byte-wise `"REB"` tag test of the province controller). Originally all three go to `LAB_005d74bb` (`0x1D74BB`); only their `rel32` is repointed to a new fork cave.
* **Fork logic:** province is in `EDI`; compares owner (`+0x12C`) with controller (`+0x134`). Equal → *owned by ally* → jump to `0x1D74BB` (150 %). Not equal → *ally merely occupies foreign land* → rate 1000 and epilogue `0x1D74C5`.
* Needs `PATCH_OCCUPIED_REINFORCE_SPLIT`; both need `PATCH_ALLIED_REINFORCE_150`.

### 4.2a `PATCH_ALLY_EMBARK` — HOOK ×3, **off** (experimental, added 4.30, third site added 4.32)
Lets a land army embark onto a **standing ally's** transport fleet, not just its own — both when its movement route ends in a sea province with an eligible allied fleet, and when the player orders it onto the sea tile it already occupies. Brigade-capacity accounting is untouched and is already tracked per-fleet (not per-nation), so once the ownership gate is relaxed the shared-limit feel is automatic.

* **Site 1 — the shared eligibility check**, `FUN_005D77A0(ECX=candidate fleet, EDI=our army)`: `0x1D77A0` (VA `0x5D77A0`), 12 bytes `8B 81 C4 00 00 00 3B 87 C4 00 00 00` (`mov eax,[ecx+0xC4]; cmp eax,[edi+0xC4]` — both `CUnit+0xC4` are the owner's country-index, common to armies and navies). This one function gates **all 8** call sites of the fleet-eligibility test (the daily movement update, the same-tile order handler, tooltip/button builders, idle ticks) — everything downstream of it (combat state, route, capacity via `+0x74`/`+0xA4`/`+0xEC`/`+0x104`) is left untouched. Cave: replicates the compare; equal owner → resume at `0x1D77B1` (capacity/combat checks) unchanged; not equal → calls `IsOwnerAllied`, allied → same resume, not allied → `xor eax,eax; ret` (unchanged vanilla failure).
* **Site 2 — the same-tile order pre-filter**, inside `FUN_005CCEC0` (movement-order click handler; `EDI` = our army, `ESI` = a unit already in the destination province): `0x1CD058` (VA `0x5CD058`), 14 bytes `8B 87 CC 00 00 00 39 86 CC 00 00 00 75 14` (`mov eax,[edi+0xCC]; cmp [esi+0xCC],eax; jne skip`; `+0xCC` is the same owner-index field read through the raw `CUnit` pointer instead of the special sub-object). Without this second site, only route-based arrivals would auto-embark — clicking the tile the army already stands on would still reject an ally's fleet. Resume-same `0x1CD066`, resume-skip `0x1CD07A`.
* **Site 3 — the order-acceptance capacity check** (added after the first shipped version turned out to reject the order entirely, before Site 1 or 2 ever ran): `CArmy::vftable[0x84]` = `FUN_005D5E30`, called from `CArmy::vftable[0x88]` = `FUN_005CD3D0` — the "is this move order even legal" predicate the game runs before it will accept a click on a destination or create a route at all. For a sea destination it sums the transport capacity of every *same-owner* fleet present in the target province and compares it against the *same-owner* army tonnage that would need to fit, entirely independently of Site 1/2 — so with only an ally's fleet in that province (zero of "our own"), it always concluded "no capacity" and the order was silently never created, meaning Sites 1 and 2 never even got a chance to run. `EBX` = our army, `ESI` = candidate (already confirmed a fleet via `vtable+0x3C` before this point): `0x1D5E97` (VA `0x5D5E97`), 14 bytes `8B 8E C4 00 00 00 3B 8B C4 00 00 00 75 0A` (`mov ecx,[esi+0xC4]; cmp ecx,[ebx+0xC4]; jne skip`) — this is the *second* of two identical-looking owner comparisons in this function; the *first* one (accumulating same-owner army tonnage already stacked in the province into the required total) is deliberately left alone, since inflating the requirement by an ally's own troop count would be wrong. Resume-same `0x1D5EA5`, resume-skip `0x1D5EAF`.
* **"Not a stranger" test** (`IsOwnerAllied`, shared by all three hooks): two independent checks, each reproducing — not reimplementing — a vanilla scripting trigger's own logic, located the same way (RTTI type-descriptor string → COL → vtable → `Evaluate` at slot 6):
  * **Standing alliance**, matching `alliance_with` (`CAllianceWithTrigger`, string `.?AVCAllianceWithTrigger@@`, `Evaluate` at VA `0x8D9F20`). Countries table at `0xE587E4` (VA `0x12587E4`) (a global *pointer variable* — `world = *(void**)(...)`, then `countries = *(void***)((char*)world + 4)`, **two** dereferences; see the v4.34 bug note below). A country object's relation to another sits at `country + 0xBE8 + otherCountryIndex*4` (a `CRelation*`); `relation + 0x20 != 0` means allied. This is a **different** field from the `+0x34` "territory access" flag `InstallAllyOwnerCheck` reads at the same `+0xBE8` base — broader than alliance, not what was wanted here.
  * **Subject/overlord** (added 4.35, after the user reported embarking worked when an overlord directly commanded a satellite's army — where a separate treaty alliance also happened to exist — but failed when playing as the satellite itself with no such treaty, only the vassalage relation). Matches `is_our_vassal`/`vassal_of` (`CIsOurVassalTrigger`/`CVassalOfTrigger`, strings `.?AVCIsOurVassalTrigger@@`/`.?AVCVassalOfTrigger@@`, `Evaluate` at VA `0x8D9800`/`0x8D90B0`). A country's own object carries its overlord's index directly at `+0xCFC`, valid only if either flag byte at `+0xCF4`/`+0xCF5` is non-zero (both zero = fully independent). Checked symmetrically — army-owner is fleet-owner's subject, or vice versa.
  * Logs every non-equal-owner check it runs (capped at 60 lines) as `AllyEmbark: A/B союз=.. суб(A/B)=.. суб(B/A)=.. -> …` (`да`/`нет`/`?` for each sub-check, `?` meaning the pointer chain couldn't be read), which doubles as a live diagnostic: if that line never appears after an embark attempt, none of the three hooks were reached and there is a fourth gate still to find.
* **v4.34 bug, fixed:** v4.30–4.33's alliance lookup read `+4` from the *fixed* address of the `DAT_012587e4` global instead of from the *pointer value stored there* — one dereference short of vanilla's own `MOV EDX,[0x12587E4]; MOV EDX,[EDX+4]` (confirmed against fresh disassembly of `FUN_005D7420`, byte-checked at `0x1D7503` (VA `0x5D7503`)). Every alliance lookup silently read garbage and failed closed; the user's v4.33 log showed a 100% read-failure rate across many index pairs, which is what surfaced it.
* **Not covered**: the explicit unit-window "Load" button and its tooltip resolve fleets through a much larger, harder-to-isolate dispatcher (traced as far as the `UW_LOAD_IS_VALID`/`UW_LOAD_NO_FLEET_FOUND` tooltip text, VA range `0x78FEDE`–`0x790A2D`) that was not patched — the button may still show disabled for an ally's fleet even though movement-triggered embarking works.
* **Status:** confirmed working end-to-end — embark and disembark for both a treaty-allied pair and a vassal/overlord pair, including repeated real-world use as the foundation for §5.10's tooltip indicator (which relies on the same embarked-army list this feature populates). Off by default; the live ini has it on. `LogEmbarkFleetState`'s diagnostic log line is unchanged; note its `fleetObj` is *not* the same object the UI resolves for display purposes (see §5.10) — fine for this feature's own eligibility/capacity math, just not reusable for building a passenger list to show the player.

### 4.2b Ally-embark save/load round trip — HOOK ×3, gated by `PATCH_ALLY_EMBARK` (added 4.72–4.81)
Without this, an army embarked on an ally's fleet comes back from a save **owned by the fleet's owner** (and, a day later, "exiled"): the save writes the embarked army nested in the `navy={}` block with no owner key, and the loader (`FUN_005D7B90`, per-key handler of the navy, key `0x2F3`="army") creates it, calls `SetOwner(fleet tag, fleet owner)` (`FUN_005C93B0`, `ESI`=unit, args tag, idx) and `Country::AddArmy` (`FUN_00513C80`, `EAX`=army, `EDI`=country; appends to the country list at `+0x7B4/+0x7B8/+0x7BC`). The fleet's `+0x1A4` list membership survives; only the owner is lost.
* **Repair, deterministic and save-content-only (so it is identical on every MP client):** hook at `0x1D7CC4` (VA `0x5D7CC4`, sig `8B 83 B8 00 00 00 8B 0D`, the `CALL AddArmy` at `+0x1E` is verified too) replaces the tail `…; CALL FUN_00513C80` with `EmbarkLoadOwnerThunk`. `RepairEmbarkedArmyOwner` derives the true owner from the army's regiments: army `+0x38` list (next at `+8`) → regiment `+0x30` = pop → pop `+0x64` = province (validated against the province table `DAT_0125870C+0x2238`, id at `+0x58`) → province `+0x134` = owner index. Accepted only if every regiment gives the same country ≠ fleet owner, the country object is valid (`+0x20 == idx`), and ≤ 40 fixes per load. Then `SetOwner(country+0x1C, idx)`, sets `+0xC8/+0xCC` (SetOwner fills them only when zero) and the thunk calls `AddArmy` with the true country. The diplomacy tables are **not loaded yet** at this moment (alliance check reads 0), so no alliance condition is used. No match → the original sequence is replicated 1:1. Constants `EMBARK_REPAIR_APPLY`, `EMBARK_REPAIR_MAX_PER_LOAD`.
* **Save side (diagnostic only):** `PHYSFS_openWrite` hook (`0x721F00`, 6-byte prologue; PhysFS is statically linked, all file I/O incl. saves goes through it) runs `ScanAndSaveForeignEmbarks` for `*.v2`: walks provinces `1..(end-begin)/4-1` of the table (3255 entries; **the bound must come from the vector end — a fixed 4000 read text as `province*` and broke saving in v4.72**), writes `Logs\allyembark\<save>.allyembark` (`fleetOwner fleetTag prov armyOwner armyTag brigades`). Not needed by the repair any more. `PHYSFS_openRead` hook (`0x721F40`, remembers the last `.v2` name, resets the per-load fix counter) + `MaybeDumpAfterLoad` (log-only dump).
* **Dead ends (do not retry):** `expeditionary_owner` (`+0x188/+0x18C`) — the save never writes it, and on ordinary armies it holds junk (`029C9A30`/`2`); using it re-owned 5 armies to country 2 in v4.77. A side file is not MP-safe.
* **Logs:** `LoadRepair: [ПРИМЕНЕНО] армия … владелец флота X, по бригадам (N) владелец Y`.
* **Status (v4.81):** user confirmed the EIC army stayed EIC after loading `TEST2`; no `[ПРИМЕНЕНО]` on the AI armies; still to confirm: no exile after a day, save→load round trip, and no false positives on a large mid-game save.

### 4.3 `PATCH_COMBAT_ROLL`, `COMBAT_ROLL_MIN`, `COMBAT_ROLL_MAX` — DATA, on (live: 0..4)
* The exe on disk was pre-patched by the external `Vic2_Roll_Changer.py`: the four RNG calls in `FUN_0059CA40` now `call` one shared routine in the `.text` slack. The DLL only rewrites that routine's immediates at every launch; the file is not modified.
* **Routine:** starts at `0x88911D`: `mov ecx,<modulo>; idiv ecx; add edx,<min>; ret`. Cave block starts at `0x889113` (its first two bytes are relocation-fixed and vary with ASLR).
* **Callers (4 × `E8`)** at `0x19CA98`, `0x19CAAE`, `0x19CB1C`, `0x19CB32`; the result is stored at `+0x30` of each battle side.
* **Written:** `modulo = MAX − MIN + 1` as the imm32 at `0x88911E` (4 bytes), `MIN` as the imm8 at `0x889126` (1 byte). Result = `MIN + rand % modulo`.
* **Guard:** `cave[2..10]` = `E9 96 5C E9 FF 00 00 00 B9`, `cave[15..18]` = `F7 F9 83 C2`, `cave[20]` = `C3`. If the exe was never patched by the script the patch is skipped silently.
* On the exe currently on disk: modulo 4, min 2 (range 2–5); the DLL changes it to modulo 5, min 0 in memory.

### 4.4 `ENABLE_PRICE_DELTA` — HOOK, on
* **Site:** `0x82BA9` (VA `0x482BA9`) — `C1 FA 0F 8B F8` (`sar edx,0Fh; mov edi,eax`) inside the daily price update; `ECX:EAX` already holds the current price (int64, 2¹⁵ fixed point). Resume at `0x82BAE` (`sub edi,[delta]`).
* **Data written:** the price step int64 at `.data` `0xE5B9E0` (VA `0x125B9E0`) (vanilla constant 328 = 0.01·2¹⁵, read by nobody else). The cave sets it to a fraction of the current price: `PRICE_BASIS_POINTS = 25` → **≈0.25 % of price per day** (`PRICE_MUL = 163/65536`).
* Integer arithmetic only → bit-identical on every client with the same DLL.

### 4.5 `PATCH_EXPONENTIAL_PRICE_DELTA` — HOOK, off
* Same site and resume as 4.4, mutually exclusive with it (this one wins if both are on; a warning is logged).
* Cave: `sar edx,0Fh; mov edi,eax; shrd edi,ecx,8; mov [E5B9E0],edi; mov edi,ecx; sar edi,7; mov [E5B9E4],edi; mov edi,eax; sub edi,[E5B9E0]; jmp resume`. The step grows with the price (shifts 8 for the low word, 7 for the high word, taken as-is from the original patch by vesper).

### 4.6 `PATCH_PROD_TYPE_GATE` (+ `PROD_TYPE_GATE_ALLOW_ALL`, `PROD_TYPE_GATE_EXTRA_WHITELIST`) — HOOK, on
* **Site:** `0xD04BC` (VA `0x4D04BC`) — 10 bytes: `cmp dword [ecx+0x84],0` (7; "state is colonial?") + `push ebx; push esi; push edi` (3), in `FUN_004D04B0`, the check that decides whether a production type may be built in a state.
* **Cave (`ProdTypeGateThunk`):** first one isolated block (`push ecx` … `pop ecx`) that reads the production-type pointer from `[ebp+0x0C]`, validates 0x5C bytes with `IsBadReadPtr`, and asks `IsProdTypeWhitelistedByName(type)`; the verdict goes to `g_prodTypeGateWhitelisted` (bad/null pointer → allow). Then the overwritten instructions are replayed and: state not colonial → *allow* `0xD04D3`; colonial and whitelisted → allow; colonial and not whitelisted → *block* `0xD04C8`. With `PROD_TYPE_GATE_ALLOW_ALL=1` every type is allowed.
* **Whitelist source:** the type's name is resolved from the engine object and compared as a string with the types that have `limit_by_local_supply = yes` in `production_types.txt` (read by the DLL from `mod\2\common\production_types.txt`, falling back to `common\`), plus `PROD_TYPE_GATE_EXTRA_WHITELIST` (live: `fishery`). Matching is by name, not by index, because the engine's own type index follows `buildings.txt` order and differs from the file order of `production_types.txt`.

### 4.7 `ENABLE_MINTING` — CALL, VSLOT, HOOK ×5, on (added 4.82, reworked 4.84, industry_score + box tooltip 4.85)
A new daily income for every country: `formula` is evaluated per country and added to the treasury once a day. It is part of the engine's income sums, so the budget window (`total_inc`, `balance`), the topbar chart/text and all income tooltips include it; the budget window shows it in the textbox `minting_inc` and the "total income" tooltip gets an extra line.

* **Formula file (since 5.13):** `<mod folder>\common\defines_v2dll.txt` (see 4.9; the folder comes from the `path =` of the `-mod=` `.mod` file, same resolution as `LOCAL_MOD_CONFIG`; without `-mod=` → `common\defines_v2dll.txt`). One line `minting_formula = <expr>`, `#` starts a comment, an empty value keeps the feature off. Before 5.13 the line was `formula = <expr>` in `common\minting.txt`; if `defines_v2dll.txt` does not exist yet, the DLL creates it, copies that formula over and renames the old file to `minting.txt.moved`. Operators `+ - * /`, parentheses, decimal numbers with a dot; variables: `industry_score` (alias `industrial_score`; country `+0x198`, int64 with 15 fractional bits — the value the UI prints for `INDUSTRIAL_SCORE` in `FUN_00530980` and `CIndustrialScoreTrigger` (vtable `0xE31B60`, evaluate `0x8EAA60`) compares) `total_population` (country `+0x12E8` as stored) and — for any other name — a **country variable** set by scripts (`set_variable = { which = NAME ... }`; e.g. `economic_thought_level`): its value, or `0` if the country has no such variable (up to 8 distinct names). Lookup: the container `CVariables` at `country + 0x1DC` (vtable `0xDFBB60`, set in the country constructor at `0x4F6CB5`; the DLL checks the vtable before using it), `vtable[1]` = `Find(const std::string&)` (`0x641BA0` → `FindByCstr` `0x9E6B10` → tree search `0x9E6C10`; exactly the call the trigger `check_variable` `FUN_008DA5C0` makes) returns the node or null; the value is an `int` in thousandths at `node + 0x1C` (the script parser `FUN_0098FB60` stores `int·1000 + fraction`; saves print it as `5.000`), converted to `value / 1000.0`. Empty formula / parse error → the feature stays off (logged). Division by zero → 0. Result is pounds per day, converted to the engine's int64 (2¹⁵ fixed point) without x87, clamped to ±4·10¹⁵ raw. All players of a multiplayer game must have the same file.
* **Update frequency (4.88):** the formula (incl. the country-variable lookups) is evaluated **once per game month per country**, in the daily tick of the first day of the month (`MintingTimeNow`: world time `[DAT_012588e8 + 0xB0C]` in hours, day of year = `(t/24) % 365`, month from the engine's own length table `DAT_00F1027C` at RVA `0xB1027C`). The result ("rate per day") is kept in a pointer-keyed cache (`g_mintSlots`, 1024 slots). The credit is still added every day from the cache; the budget window, the topbar, the tooltips and the AI (`MintingFixedFor`) only **read** the cache — a miss (before the first daily tick after a load) is computed without being stored. Recomputing only inside the daily tick keeps multiplayer deterministic (a UI-triggered recompute would happen at a client-specific moment). The cache is dropped when the world time does not advance by exactly 24 h between daily ticks (load / new game). A rate of exactly 0 is not final: while the cached rate is 0 the formula is re-evaluated every daily tick (4.89) — at game start the script variables (`economic_thought_level`, …) are not declared yet and `industry_score` is not computed, so a 0 cached on day 1 would otherwise last the whole month. Consequence: once a rate is non-zero, changes of `industry_score` or of a variable inside the month show up from the next month.
* **Daily credit — CALL** `0x109F74` (VA `0x509F74`): the `call FUN_00538200` (state-owned RGO income, `stdcall`, country on the stack) inside `FUN_005091a0` (the per-country daily update, called for countries `1..n-1` by the single-threaded loop of `FUN_006859c0`, between `DAT_012586f2 = 1` and `= 0`). Redirected (since 4.90 by the shared `InstallCountryDailyCall`, also used by 4.8) to `CountryDailyThunk`: `pushad; call CountryDailyHook(country); popad; jmp FUN_00538200`, where `CountryDailyHook` = `MintingDailyCredit(country)` (until 5.29 it also called `GoodsConsumptionDaily`; since 5.30 the goods purchase lives in the market pass, see 4.8). The hook adds to the treasury `+0xE78/+0xE7C` exactly like `FUN_00538200` does (`+0xE80/+0xE84` is the start-of-day snapshot read by `GetMoney` while the flag is set — untouched).
* **Income sums — HOOK ×2.** The engine has two income totals (the per-country stat vector at `country + (DAT_00f096c8 + 0xd) * 0x10` holds 10 `int64` categories: 0–2 taxes, 3 tariffs, 4 exports, 5 gold, 7 war indemnities, 9 sold stockpile):
  * `FUN_0052b510` (`EAX` = out int64, `EDX` = country; plain `ret`) = sum of the 10 *recorded* categories. Used by the topbar update `FUN_0070ec60` (the "income" text), the daily push of the topbar line chart (`budget_linechart`, 30 points, code at `0x70E7D2`), the topbar tooltip ("yesterday"), and the AI budget logic `FUN_0081F3B0`. Hook `0x12B510` (VA `0x52B510`, 19 bytes `8B 0D <abs idx> / C7 00 00 00 00 00 / C7 40 04 00 00 00 00`): the accumulator starts at minting instead of 0 (`MintingActualIncomeThunk`; the absolute address operand is read from the live instruction, so ASLR is irrelevant); resume `0x12B523`.
  * `FUN_0052b610` (stack: country, tax rates; `ESI` = out; `ret 8`) = projected income (taxes × current slider rates + other categories). Used by the budget window (`total_inc`, `balance`), the income tooltip, the topbar tooltip's "projected income" and the event effect `FUN_00896940`. Hook at its single epilogue `0x12B769` (VA `0x52B769`, 6 bytes `5F 8B C6 5B 8B E5`, `EBX` = country): `MintingProjectedIncomeThunk` adds minting to `[ESI]`, replays the epilogue, jumps to `0x12B76F` (`pop ebp; ret 8`).
  * Both thunks: `sub esp,8; pushad; push country; call MintingFixedFor; store EDX:EAX in the 8-byte slot; popad; use the slot` (no globals).
* **Budget window — VSLOT** `0xA059F0` slot 6 (`0xA05A08`, original `FUN_005FEDE0` = `CBudgetView::Update`, `ECX` = view, no stack args): `BudgetUpdateThunk` calls the original, then writes `minting_inc` for the local player (`[DAT_012588e8 + 0xB60]` = player country index → `DAT_012587e4` table): textbox found with `vtable+0x3C` of the container `view+0x4C` (the call `FUN_00602820` uses for every textbox), text set with the engine's own pair `std::string::assign` (`0x408ED0`, on `box+0xDC`) + `SetText` (`0xA5ECC0`, `ESI=[box+0xA0]`, `ret 8`), formatted `%.1f` plus byte `0xA4` (the currency sign the engine appends to every budget number, `DAT_00DF830C`; the font draws it as the money icon), like the gold line.
* **"Total income" tooltip — HOOK ×2** in `FUN_0052a080(country, out, rates)` (shared by the budget window hover over `total_inc` via `FUN_00606780` and the topbar money tooltip `FUN_00713a90`): `0x12A135` (`8B 4D 08 83 EC 08`, `MintingTipStashThunk`) remembers the country's minting while `[ebp+8]` is still the country; `0x12B0A3` (`lea edi,[ebp-0xAC]`, `MintingTipLineThunk`) runs a clone of the last category block (`0x52AF2F..0x52B0A0`, 104 instructions, verified identical by script apart from the key length and indirect calls) with the key `BUDGET_MINTING` (line `BUDGET_MINTING;...$VAL$...;X` added to `mod\localisation\TEXT_ALL.csv`), appended to `out+0x1c`. Nothing is added when minting ≤ 0.
* **Tooltip over the `minting_inc` box — HOOK** `0x20A0B8` (VA `0x60A0B8`, 6 bytes `39 B7 6C 01 00 00` = `cmp [edi+0x16c],esi`, the `gold_inc` test in the hover dispatcher `FUN_00606780`, `ESI` = hovered element, `EDI` = view; chain of `cmp [edi+off],esi` tests): `MintingBoxTipThunk` asks `MintingIsHoveredBox(element)` (element name via vtable `+0x44` == `minting_inc`) in one `push 0; pushad … popad` block (result in a stack slot, no register changes); no → replays the `cmp` and returns to the chain (`0x20A0BE`); yes → clone of the generic "text by key" branch `0x607D21..0x607DA3` with key `BUDGET_MINTING_DESC` (verified instruction-identical by script), assigned to the local result string `[ebp-0x1d0]`, then `jmp 0x60B035` (common tail). Localisation line `BUDGET_MINTING_DESC;...;X` added to `mod\2\localisation\TEXT_ALL.csv`.
* **Not changed:** the engine's per-category stat vectors (minting is not a category).

### 4.8 `ENABLE_GOODS_CONSUMPTION` — VSLOT ×2, HOOK ×5 + market-pass HOOK, on (added 4.90); `GOODS_CONSUMPTION_MARKET_DEMAND`, on
New building key `goods_consumption = { <good> = <amount> ... }` in `common\buildings.txt` and a **real market purchase** of those goods by the state every day (5.30; before that a heuristic: money was paid, goods did not leave the market), shown in the budget row `naval_base_expense`.

* **Why the vanilla game crashes on the key.** Every key of a building block goes through the generic block parser `FUN_009A2A90` (loop: peek the next token — flag `lexer+0x110`, token struct at `lexer+0xC`, type `4` = `}`, `0x13` = EOF —, `FUN_009A1440(ctx)` reads `key = value` into `ctx+0x20` (key token: dword id, text at `+0x24`), `ctx+0x124` (`=`), `ctx+0x228` (value token, text at `+0x22C`), then calls `vtable[4](ctx, [ctx+0x20])`). The `CBuilding` property handler `FUN_004D9310` (`thiscall(this, ctx, keyId)`, `ret 8`) does not know `goods_consumption`; its default branch looks the key up in the goods table and sets the building's goods pointers, never consuming the `{ ... }` — the inner `cement = 5` pairs are then treated as keys of the building itself, the first `}` closes the building too early and the rest of the block is parsed as new buildings.
* **Reading — VSLOT** slot 4 of **both** `CBuilding` vftables: `0x9FDAC0` (base, VA `0xDFDAC0`, written at `0x4D8BC4`) and `0x9FDAF0` (derived, VA `0xDFDAF0`, written by the real constructors `0x49EA5D`, `0x4D72FC`, `0x4D9BA2`, …); both hold `FUN_004D9310` (checked before patching). `BuildingPropThunk` compares the key text with `goods_consumption`; if equal it reads the block with the same loop the handler uses for its own list blocks (e.g. case `0x2A5`): peek-init, stop on type `4`/`0x13`, `FUN_009A1440(ctx)` per element (`__stdcall`, `ret 4`), then one lexer `vtable[1]` call to consume the `}`; pairs `(ctx+0x24 text, atof(ctx+0x22C))` go to a DLL table (`g_consBuildings`, ≤ 24 buildings × 16 goods, keyed by the `CBuilding*` and its name `+0x20`). Any other key → the original handler. Installed even with `ENABLE_GOODS_CONSUMPTION=0`.
* **Buying — HOOK `0x8466B` in the market update (5.30).** The market is updated once a day by `FUN_00489990(market, 0, 0xB)` (from `FUN_006859c0`); at game start `FUN_0068BF00` additionally runs 5 trial passes with `param_2` = 0..4. Inside `FUN_00484060(market, param_2)` every country that owns provinces is processed like this: the country's `domestic_supply_pool` record (`market+0x3F4`) is copied into a scratch **"domestic" pool** (`DAT_013F2500`, RVA `0xFF2500`) and `worldmarket_pool` into a scratch **"world" pool** (`DAT_013F2450`, RVA `0xFF2450`, one for the whole pass); then, in this order, construction projects `FUN_00482FF0`, the state's own purchase `FUN_00487410` (call at `0x484666`), pops and factories `FUN_00485E40`; every purchase decreases the scratch pools, and afterwards "consumed = initial copy − remaining pool" is written to `actual_sold_domestic` / `actual_sold` / `actual_sold_world`, from which `FUN_00488080` derives the factories' revenue. So whatever is taken from the scratch pools **after `FUN_00487410`** is a real purchase: the goods leave the market, the producers (factories, RGOs, artisans) get revenue for them and the supply/demand ratio — hence the price — reacts on the next update. The hook replaces `8B 4C 24 68 8B 54 24 6C` at `0x8466B` (`mov ecx,[esp+0x68]; mov edx,[esp+0x6C]`, resume `0x84673` = `sub esp,8`): `BasesPurchaseThunk` = `pushad; push [ebp+0xC]` (`param_2`) `; push ebx` (country) `; push edi` (market) `; call BasesPurchaseHook; add esp,12; popad`, replays the 8 bytes, jumps to the resume address. `BasesPurchaseHook` returns at once for `param_2 < 10` (trial passes of the game start; the daily pass is 11 — `MARKET_FINAL_PASS`), otherwise `ConsBuyFromPools`. **Need:** for each id in the country's province list (`country+0x9D8..0x9DC`, `vector<int>`; province = `vector[DAT_012588e8+0xACC][id]`) and each described building that is a province building (`CBuilding+0x131 != 0`, index `CBuilding+0x134`) the province's building vector (`province+0x118`) element `[index]` has the level (`int` at `+0x20`, **in thousandths: `1000` = level 1**); raw values are summed per building as exact integers (`ConsScanLevels`), then `quantity[good] += amount × rawSum / 1000`. Goods are resolved by name against the goods manager (`DAT_012587F0`, vector at `+0xC`; engine limit 64 goods = size of the market slot tables). **Price:** market = `[DAT_012588e8+0xBCC]`, byte `market+0x288+good` = slot (0 = none) into the `int64` vector at `market+0x2C8` (the vector the price update `FUN_00482930` writes), 2¹⁵ fixed point; a good without a price is not bought. **Take:** per good `take1 = min(need, domestic pool)` (the country's own surplus first, so its producers sell at home), `take2 = min(rest, world pool)` — pool element = slot byte `pool+8+good`, `int64` vector begin/end at `pool+0x48/+0x4C`, slot 0 = no entry. **Treasury:** `costGot = Σ taken·price`, `affordGot = clamp(treasury / costGot, 0, 1)` scales both takes (a country never goes into debt through this feature; treasury ≤ 0 → nothing is taken); the scaled amounts are subtracted from the pools. `bought = s1 + s2`, `frac[g] = bought / need` (shown by the tooltip / goods card), `paid = Σ bought·price` is subtracted from the treasury `+0xE78/+0xE7C` by the hook and stored with `required` (the full need at current prices) in the per-country cache (`g_expSlots`, same keying/reset rule as the minting cache: dropped when the world time does not advance by exactly 24 h between two passes). Without the market hook (signature mismatch) the purchase stays off and the log says so.
* **Market data layout (checked against the save writer and the debug dump).** The market (`[DAT_012588e8+0xBCC]`) keeps its per-good data in "goods holders" (64 slot bytes + `int64` vector, 15 fractional bits, slot 0 = no entry); the names match the save's `worldmarket` pools: `supply_pool` = holder `+0x8` (slots `+0x10`, vector `+0x50`), `worldmarket_pool` = `+0x120`, `demand` = `+0x178` (slots `+0x180`, vector `+0x1C0`), `real_demand` = `+0x1D0` (slots `+0x1D8`, vector `+0x218`; cleared at the beginning of every `FUN_00484060` pass by `FUN_00561c40`, the trade tooltip `FUN_0071B840` shows its copy from the last pass `+0x228`), `price_pool` = `+0x280` (slots `+0x288`, vector `+0x2C8`), `actual_sold` = `+0x434`, `actual_sold_world` = `+0x4F4`. Per-country "domestic" holders live in arrays of 0x58-byte records indexed by the country number (`country+0x20`; slot bytes from `record+8`, `int64` vector at `record+0x48`): `domestic_supply_pool` `+0x3F4`, `sold_supply_pool` `+0x404`, `domestic_demand_pool` `+0x424`, `actual_sold_domestic` `+0x4E4`, `max_bought` `+0x5A4`, `saved_country_supply` `+0x7D4` (= what the country really produced; `domestic_supply_pool` is NOT the production). `FUN_00482930` divides `real_demand` by supply to move the price.
* **Market demand (`GOODS_CONSUMPTION_MARKET_DEMAND`)**: like `FUN_00487410`, the hook adds `need·affordFull` (the full need scaled only by what the treasury can pay, **not** by what the market had) to `real_demand` (`market+0x218`, slot byte `market+0x1D8+good`, only if the slot exists), inside the same pass (it is cleared at the start of each pass, so it must be registered inside). This is what makes unmet demand for a good visible to the price formula and to the trade tooltip. `0` = the goods are still taken from the pools and paid, but the market sees no extra demand.
* **Expenses in the sums — HOOK ×4**, all reading the cache (`GoodsExpenseFixedFor`; empty before the first daily market pass, so every client sees the same value):
  * `FUN_0052B5D0` (actual expenses, `EAX` = out, `EDX` = country; sum of 11 recorded categories): `0x12B5E1` (18 bytes `C7 00 …/8B 38/C7 40 04 …/8B 58 04`, the `out = 0` + load into `EDI:EBX`) → the accumulator starts with the goods cost; resume `0x12B5F3`.
  * `FUN_0052B1C0` (projected expenses, `ret 0x10`, `EDI` = `[ebp+8]` = country, `EBX` = out): single epilogue `0x12B354` (`5F 5E 8B C3 5B`) adds the cost to `[EBX]`, replays the epilogue; resume `0x12B359`.
  * The topbar update `FUN_0070EC60` sums the expense categories inline (not through `FUN_0052B5D0`): chart push `0x30E859` (`mov edx,[esp+0x40]; sub edx,eax`, expenses in `EAX:ECX`) and the "income" text `0x30F3A4` (`sub ecx,esi; mov esi,[ebp-0xD8]; sbb esi,eax`, expenses in `ESI:EAX`) — both add the local player's cost first. All four thunks use the `sub esp,8; pushad; call …; store EDX:EAX in the slot; popad` pattern.
* **Budget window — VSLOT** `0xA059F0` slot 6 (same `BudgetUpdateThunk` as 4.7; `SetBudgetBoxText(view, name, value)` is the generalised minting writer): after the original `Update` it writes the local player's cost (cache, or computed once without storing when the cache is still empty) into the textbox `naval_base_expense` (`%.1f` + byte `0xA4`). Only when the patch is active and at least one building has `goods_consumption`; otherwise the vanilla text is untouched.
* **Tooltip over `naval_base_expense` (4.91) — same HOOK `0x20A0B8` as `minting_inc` (4.7):** `MintingIsHoveredBox` now returns the kind of the hovered box (1 = `minting_inc`, 2 = `naval_base_expense`, stored in `g_boxTipKind`); for kind 2 the cloned "text by key" branch is the same, but after `FmtFinish` (`call [g_fnFmtFinish]`) the thunk replaces `EAX` (pointer to the result string, in one `pushad … mov [esp+0x1C],eax … popad` block) with a pointer to a static engine-layout `std::string` built by `GoodsTipBuild`; the engine copies it into its result string `[ebp-0x1d0]`. Text: header, then per building `name (levels: N)` and per good `name: qty x price¤ = cost¤`, then the daily total (the same numbers as the purchase). Names/headers come from `<mod>\localisation\*.csv` (`KEY;Text;X`, cp1251, read once per key by `ConsLoc`; then the game's `localisation\`; fallback = the key / English): the good name and building name keys (`cement`, `naval_base`) and `BUDGET_GOODS_CONS_HEADER`, `BUDGET_GOODS_CONS_LEVELS`, `BUDGET_GOODS_CONS_TOTAL` (added to `mod\localisation\TEXT_ALL.csv`). Colour codes `§Y`/`§W`, money sign `¤`. The box-tip hook and the `CBudgetView` slot-6 patch are now installed by the shared `InstallBudgetWindowHooks` (idempotent), so goods_consumption no longer depends on minting being enabled.
* **Colour / tooltip of "bought vs required" (4.93):** the number in `naval_base_expense` is drawn red (`§R … §!`) when less than 99.9 % of the needed goods was bought (4.97; before that green/yellow/red), otherwise in the font's own colour; the tooltip lists per good `name: bought <b> / needed <n> (price¤)` (`b` coloured the same way) and, if purchases fell short, `Purchases fulfilled: NN%` (keys `BUDGET_GOODS_CONS_BOUGHT`, `BUDGET_GOODS_CONS_NEED`, `BUDGET_GOODS_CONS_FILL`).
* **Goods card — HOOK `0x79C07` (4.92):** the trade-flow window (`trade_flow.gui`, class built by `FUN_00476E90`, updated by `FUN_00477AD0`, `param_1+0x10` = shown good, `+0x54` = `used_by_listbox`) collects the rows of every column in a local `vector` of 0x4C-byte entries — `+0x00` icon type (0 factory, 1 RGO, 2 pops, 3 military), `+0x04` `std::string` name, `+0x20` `std::string` tooltip, `+0x3C` `float` amount, `+0x40` dword, `+0x44` byte (show amount), `+0x48` dword (`-1` = no button) — made by `FUN_00476130` (stdcall ctor, `ret 4`) and `FUN_0047BB40` (thiscall, ECX = entry, `[stack]` = vector; copies it in), freed by `FUN_0047AA50` (`ESI` = entry); `FUN_00476590` shows a row. All used-by branches (RGO / factories / pops / military) join at `0x479C07` (`mov edi,[esp+0xCC]`, 7 bytes) before the sort `FUN_0047BEA0` and `FUN_00476C40` (fills the listbox); the running total "used" is the `int64` at `[esp+0x28]`. `TradeFlowUsedThunk` (`sub esp,8; pushad; lea eax,[esp+0xF0]` = vector; `push [ebp+8]` = window; call `TradeFlowAppendUsed`; slot; `popad`; `pop eax; pop edx; add [esp+0x28],eax; adc [esp+0x2C],edx`; replay `mov edi,[esp+0xCC]`) appends one military-icon row per building with `goods_consumption` that uses this good (amount = `amount × levels × frac[good]` of **the country the window shows** — `window+0xC` = country index, the same `countries[idx]` lookup `FUN_00477AD0` does; the window is per country (its header says "N% of world production"); 4.92–4.93 wrongly summed all countries) and adds it to the total. Row name = `GOODS_CONS_NAME_<building>` from `localisation\*.csv` (e.g. `GOODS_CONS_NAME_naval_base;Морские базы;X`), else the building key.
* **Assumptions / limits:** consumption scales linearly with the building level; goods the market has no price for (slot 0) are free and not bought; a negative treasury buys nothing; the amounts in `buildings.txt` are per day per level (e.g. `cement = 5` + `steel = 5` at base price 16 = 160 per day per level-1 building). Simplifications of 5.30: (1) the bases are served **before** the pops and factories of the same country (the hook sits right after the state purchase), so in a shortage they get the goods first; (2) the world pool is taken without the engine's per-country share limit (`country+0xFBC`); (3) the money is subtracted by the DLL, not through an engine budget category (the row is added to the sums by the 4 expense hooks); (4) the order of countries in the pass is the engine's, so with a scarce world pool earlier countries get more — as for any other buyer. Not verified in game at the time of writing.


---

### 4.9 `PATCH_FACTORY_CLOSE_PAYOUT`, `PATCH_FACTORY_AUTO_CLOSE_UNPROFITABLE`, `FACTORY_CLOSE_DRY_RUN` — ENTRY ×4, on / on / **on (dry run)** (added 5.13)
Pays a factory's stored money to the capitalists of its state whenever it is closed, and closes unprofitable non-subsidized factories after N days. N = `factory_unprofitable_close_days` (default 60, `0` = off) in `<mod>\common\defines_v2dll.txt`, the same file that now holds `minting_formula` (created on the first launch with defaults; `ReadWholeFile` + `key = value` lines, `#` comments; `EnsureV2dllDefines`, shared with minting).

* **Engine facts (Ghidra + raw bytes of `v2game.exe`).** A factory is a `CStateBuilding`: `+0x18` type (`[type+0x12C]` = the "definition" the owner payout wants), `+0x1C` state, `+0x20` level, `+0x150` stored money (int64), `+0x158` yesterday's input cost, `+0x178` consecutive loss days (`income < +0x158`, updated at the top of `FUN_004F4B30`; only the AI reads it, with 7/30-day thresholds in `FUN_0081F3B0`), `+0x180` subsidized (byte), `+0x184` stop counter, `+0x188` closed (byte). The daily pass `FUN_00488080` calls the finance function `FUN_004F4B30` only for factories with `level > 0 && +0x184 < 11 && !closed`; that function pays everything above `MAX_FACTORY_MONEY_SAVE × level` (the define is read at `0x4F4D83`, int, `/1000` in fixed point) to the owners through `FUN_004CFE20` (`EAX` = definition, stack = state, lo, hi, `ret 0xC`, `AL` = paid; it returns 0 when the state has no owner pops — the vanilla call subtracts the money first and ignores the result). The engine never closes by profitability: `+0x184` counts consecutive days with **no purchase of inputs** (budget 0 or nothing to buy; `FUN_004F50C0` (`EAX` = factory, `[ebp+8]` = "bought something") and an inline copy at `0x4834C6` in `FUN_00482FF0`), non-subsidized only; at 11 the level drops by 1, at level 1 the factory simply stops being processed. A hand close (`FUN_004D03D0`) sets `+0x188 = 1` and calls `FUN_004F5750` (`ESI` = factory, its only caller): it flushes `+0x210` into the country stats and frees `+0x1D0`, but does not touch `+0x150`, and closed factories are skipped by the daily pass — so in vanilla the savings freeze. A larger `MAX_FACTORY_MONEY_SAVE` therefore makes a loss-making factory live proportionally longer.
* **HOOK `0xF5750`** (`FUN_004F5750`, 6 bytes `55 8B EC 83 EC 0C`, resume `0xF5756`): `FactoryCloseThunk` replays `push ebp; mov ebp,esp; sub esp,0xC`, then `pushad; push esi; call FactoryClosePayoutHook; popad`. `FactoryPayoutAll` calls `FUN_004CFE20` through `CallOwnerPayout` (`EAX` = `[[f+0x18]+0x12C]`, state `[f+0x1C]`, money lo/hi); only if it returns 1 is `+0x150` set to 0 — with no owners the money stays in the factory instead of vanishing.
* **HOOK `0xF50C0`** (10 bytes `55 8B EC 80 B8 80 01 00 00 00`, resume `0xF50CA`, `FactoryCounterThunk`) and **HOOK `0x834C6`** (6 bytes `FF 83 84 01 00 00` = `inc [ebx+0x184]`, resume `0x834CC`, `FactoryCounterInlineThunk`): both observe the moment the stop counter is about to reach 11 on a level-1 non-subsidized factory (the factory is going to stop) and pay out the same way. Replayed instructions: `push ebp; mov ebp,esp; cmp byte [eax+0x180],0` / `inc dword [ebx+0x184]`.
* **HOOK `0xF4B30`** (`FUN_004F4B30`, 6 bytes `55 8B EC 83 E4 F8`, resume `0xF4B36`, `FactoryFinanceThunk`, `[ebp+8]` = factory): `FactoryAutoCloseCheck` — for an open, non-subsidized factory with `+0x178 >= factory_unprofitable_close_days` it sets `+0x188 = 1`, resets `+0x178` to 0 (so a re-opened factory gets a fresh N days), calls `FUN_004F5750` via `CallFactoryCloseVanilla` (which goes through the payout hook above) and returns 1; the thunk then skips the vanilla finance for that day (`mov esp,ebp; pop ebp; ret 0x20`).
* **Dry run.** With `FACTORY_CLOSE_DRY_RUN=1` (the default of the first release, per the project rule for state-changing hooks) nothing is written: the hooks log `FactoryClose [DRY] …` lines (factory, state, level, loss days, money; at most 400 lines, auto-close once per factory) in the normal log. With `0` (live) these lines go through `LogDbg` only (`DEBUG_LOG=1`). Lines carry `[TAG type]` (state owner tag from `country+0x1C`, type name from `[factory+0x18]+0x20`; `?` if unreadable) and the money in shown units (`raw / 32 768 000`).
* **Not changed:** vanilla excess payout in `FUN_004F4B30` (it still loses the surplus in states without owners), money already frozen in factories that were closed before the patch, the AI's own subsidy logic.
* **Multiplayer:** all players need the same DLL, the same ini keys and the same `defines_v2dll.txt` (the threshold changes the simulation).

### 4.10 `PATCH_AI_EXPAND_STAFFING` — HOOK `0x457614` (VA `0x857614`, 7 bytes `83 B9 7C 01 00 00 00`; resume `0x45761B` `0F 85 62 01 00 00`; skip target `0x457783`), on (added 5.18)

* **Problem:** AI countries expand the most profitable factory type (in this mod `construction_goods_factory`) to levels 40-57 while only 0-3 % of the jobs are filled. Cause (static analysis + saves 1838-1840): `FUN_008569a0` (AI economy module, every 10-26 days per country, needs the country rules `expand_factory`/`build_factory`) → `FUN_00858670` picks the best type (`FUN_00857430`) and region (`FUN_00857530`) and issues the expand command (`FUN_0057C130`, executed by `FUN_0057C400` → `FUN_0052CE60`) checking only the country treasury. The region score in `FUN_00857530` uses the unemployed share of the **whole** population, not free craftsmen, and doubles the score for expanding an existing factory. Capitalist projects are different: their candidate test `FUN_004A75B0` needs about 90 % staffing, profit > 0 and `level != max_level`.
* **Hook:** in the region loop of `FUN_00857530`, for a region that already has a factory of the chosen type (`ECX` = that factory, `EBX` = region), the jump `cmp [ecx+0x17C],0 / jne 0x857783` is wrapped: if `employees (+0x128) * 100 < workforce (def+0x128) * level * ai_factory_expand_min_staffing`, the thunk jumps to `0x857783` (skip this region as an expansion candidate), so the AI picks another region or builds a new factory instead. The player and capitalist projects are not affected. No game state is written.
* **Config:** `PATCH_AI_EXPAND_STAFFING` (ini, default on) and `ai_factory_expand_min_staffing` (`<mod>\common\defines_v2dll.txt`, default 90, `0` = off; appended to an existing file by the DLL). All players of a multiplayer game need identical DLL and values.

### 4.11 `PATCH_FACTORY_MIN_WAGE` — HOOK `0xF4F6F` (VA `0x4F4F6F`, 8 bytes `2B F8 1B F2 66 0F 57 C0`; resume `0xF4F77` `66 0F 13 44 24 40`), on (added 5.26)

* **Wage logic of the game (`FUN_004F4B30`, factory finance, called daily from `FUN_00488080` at VA `0x488710`).** `W` = `FUN_004EF1B0` (rva `0xEF1B0`): sum over the employee records (16 bytes at `factory+0xF0..0xF4`, pop at `+8`, count at `+0xC`; slaves skipped via `poptype+0x3D9`) of `count / 100000 * poptype[+0x320]`, where `poptype+0x320` is the life-needs cost written by `FUN_0096F7C0` (the `life_needs` array at `poptype+0x110` at current prices × 1000). Game minimum `L = min(factory money, W * p7:8)` (VA `0x4F4D56`), `p7:8 = (country modifiers[+0x120]/1000) * country[+0xE70]` built at VA `0x488263` (very likely the `minimum_wage` modifier × administrative efficiency; the modifier slot was inferred). Profit share `= 0.85 (FACTORY_PAYCHECKS_LEFTOVER_FACTOR) * (money / (MAX_FACTORY_MONEY_SAVE * level)) * max(0, revenue - yesterday's input cost (+0x158))`, 0 while money < 7 days of input purchases. Worker pay `X`: with owner-type pops in the state `max(L, share/2)`, without owners just `share` (so the game's minimum is not enforced there). `X` is paid by `FUN_004EF240` (pro rata by employees) and subtracted from the factory money with no lower bound; `X <= 0` is not paid; the remainder `share - X` (if positive) goes to the owners (`FUN_004CFE20`). A negative factory balance is zeroed at the start of the next day's finance (`jl` at VA `0x4F4C1E`).
* **Hook:** at VA `0x4F4F6F` `EDX:EAX = X`, `EDI:ESI = share`, `EBX = factory`. `FactoryMinWageThunk` calls `FactoryMinWageAdjust(factory, lo, hi)` (cdecl, returns `EDX:EAX`) in one `pushad/popad` block, then replays `sub edi,eax / sbb esi,edx / xorpd xmm0,xmm0`. The result is `max(X, minimum)`, `minimum = factory_min_wage_per_10000 * workers / 10000` pounds (integer math: `milli * n * 32768 / 10000` in internal units, 1 pound = 32768000), `workers` = employees except slaves and owner-type pops (`definition+0xF0`), capped by the factory total (`+0x128`). Since 5.27 the minimum is capped by the factory's current money (`+0x150`; nothing is paid if the money is <= 0), so it is paid only from the factory's own budget and the balance never goes below zero because of it. So the minimum applies whatever the profit is, the owners' part is `share - X` as before, and where the game pays more nothing changes.
* **Config:** `PATCH_FACTORY_MIN_WAGE` (ini, default on) and `factory_min_wage_per_10000` (`<mod>\common\defines_v2dll.txt`, default 7 pounds per day per 10000 workers, `0` = off, appended to an existing file). Must be identical for all players of a multiplayer game.
* **Subsidy target (5.28), second HOOK `0xF4C0E`** (VA `0x4F4C0E`, 8 bytes `03 74 24 28 8B C2 13 C7` = `add esi,[esp+0x28] / mov eax,edx / adc eax,edi`; resume `0xF4C16` `33 FF 39 BB`): there the finance routine has just built the factory budget `B = 1000 * input cost + 0.2 * W` in `ESI(lo):EAX(hi)`; a subsidized factory (`+0x180`) with money below `B` gets `B - money` from the state (`+0x1D8` injected, country expense). `FactoryMinWageBudgetThunk` replays the 3 instructions, then adds `FactoryMinWageBudgetExtra(factory)` (the uncapped minimum wage, only for subsidized, open factories with the patch on and not in dry run) to `B` in one `pushad/popad` block (`ECX:EDX` are dead after this point). So after the wage is paid the subsidized factory still holds the old target and buys all its inputs the next day; the state pays the wage floor of subsidized factories through the subsidy. Without it (5.26/5.27) the wage came out of the purchase budget: purchases and production of subsidized factories dropped and the subsidy (budget chart) oscillated.
* **5.26 crash (fixed in 5.27):** the first version let the wage push the factory balance negative. The next day's input purchases (`FUN_00482FF0`) then divided the budget by a zero purchase cost (`__alldiv` at VA `0x483461`: `(budget << 15) / cost` when `budget < cost`, i.e. negative budget and `cost == 0`) -> INTEGER_DIVIDE_BY_ZERO, `v2dll_crash.log` 2026-10-08 13:39. Vanilla practically never leaves a negative balance at that point.
* **Side effects:** a poor unsubsidized factory pays what it has and so has less for the next day's input purchases (the purchase logic scales by the budget). Subsidized factories: since 5.28 the state also pays their wage floor (it is added to the subsidy target), so the state's subsidy expense grows by the sum of those floors.

### 4.13 `DestroyCmdNullCheck` — HOOK `0x17D01F` (VA `0x57D01F`, 6 bytes `8B 57 58 8B 47 5C`; resume `0x17D025` `89 54 24 18`; reject target `0x17D052`), always on (added 5.34)

* **Crash fixed** (`v2dll_crash.log` 2026-10-08 16:42, v5.33, ACCESS_VIOLATION read `0x58`, `v2game.exe+0x17D01F`). `FUN_0057CFD0` validates a `CDestroyStateBuildingCommand` (vftable `0xE00CB4`; constructor `FUN_0057CC60` stores the state key `(state+8, state+0xC)` at `cmd+0x40/0x44`, the factory index at `+0x3C`, the country at `+0x4C`). The commands are created by the AI (`FUN_008569a0`, deletes closed factories in states with more than 6 factories, rule `destroy_factory`) and by the destroy button (`FUN_006E48D0`). The validator looks the state up in `country+0xE44` by that key; if the key changed between creation and validation (here `(0x2F,0x48D)` in the command, `(0x2F,0x48F)` on the state) nothing is found, `EDI = 0` and the next instruction dereferences it.
* **Hook:** `DestroyCmdNullThunk` does `test edi,edi / jz` to the validator's normal "invalid" return (`0x57D052`: `pop edi / pop esi / xor al,al / pop ebx / ret`), otherwise replays the two loads. No ini key (a crash fix, like `CivilizeNullCheck`).
* **Why it showed up now:** with `FACTORY_CLOSE_DRY_RUN=0` the auto-close makes many more closed factories, which the AI then tries to destroy. The bug itself is vanilla.

### 4.14 `PATCH_NEEDS_HONEST_UI` — 2 entry HOOKs `0x85390`, `0x85960` + 5 display HOOKs `0x55CEF8`, `0x55D488`, `0x55DA18`, `0x5820B8`, `0x3BB105`, on (added 5.41, pop list 5.42, display only)

* **Problem.** A pop's life/everyday/luxury fraction (`pop+0x130/0x138/0x140`, int64 fixed15) is written by `FUN_00485E40` via `FUN_00485390` as `availability x min(1, pop money / set cost)`; the pop pays that money into ONE money pool per (country x poptype) record (stride `0x78`). `FUN_00485960` (EAX = record; stack: market, `&pool`, country, needs list, class) then buys goods for the pool, classes 0, 1, 2 in turn from the same pool; if the pool is short it buys `pool / cost` of the class set, `cost = record.scale[cls] x record.setCost[cls] / 1000` (`+cls*8` and `+0x60+cls*8`). A rich pop (Vienna craftsmen, money 330k) therefore shows luxury 100% while the pool is already spent on lower classes (observed craftsmen: class 0 covered 100%, class 1 about 80%, class 2 0%).
* **Hook.** `0x85390` (6 bytes `55 8B EC 83 EC 40`, resume `0x85396`, EAX = pop, `[ebp+0xC]` = record) stores pop -> record in a 2^19 open-addressed table. `0x85960` (6 bytes `55 8B EC 83 EC 1C`, resume `0x85966`) stores the coverage `F = min(1, pool / cost)` per record and class in a 2^14 table; since 5.45 it records only calls with the purchase flag `[ebp+0x1C] != 0`. Display only: the three pop tooltips (`FUN_0095CE10`, `FUN_0095D3A0`, `FUN_0095D930`; 12 bytes = the two `mov` that load the 64-bit fraction at `0x95CEF8`, `0x95D488`, `0x95DA18`) and the need bars of the pop window (`FUN_00981220`, 6 bytes `mov [ebp-0xA0],edx` at `0x9820B8`, after the three fractions are copied to locals `[ebp-0x34]`, `[ebp-0x5C]`, `[ebp-0xA4]`) and the pop list rows (`FUN_007BA410`, 6 bytes `mov [ebp-0xA0],eax` at `0x7BB105`, EDI = pop, locals `[ebp-0x18]`, `[ebp-0x58]`, `[ebp-0xA0]`; the glasses in the list are `lifeneed/eveneed/luxneed_progress` progress bars) show `stored x F`. The pop fields are not touched, so militancy/consciousness are unchanged. Before the first daily tick after a load (no `F` yet) the original value is shown.
* **Pool-less records (5.45).** Some records, notably farmers/labourers, still have an empty pool at class 0 even on the purchase pass, while `record+0x48+cls*8` holds the aggregate amount accounted for by the pops. Since 5.45 such records use `F = clamp(accounted / scale, 0, 1)` for every class instead of the 5.43 fallback `F = 1`. This turns a false vanilla 100% into the aggregate class coverage (the earlier probe value for farmer luxury was about 7%). The old 5.41/5.42 behaviour showed 0% for these records.
* **Not covered.** The second luxury read in `FUN_0095D930` (`0x95DC6A`, threshold test for an extra tooltip line) and country-level needs panels. Remove an unwanted effect with `PATCH_NEEDS_HONEST_UI=0`.
* **Why craftsmen are poor.** Not a bug: the pool is the sum of what pops pay, so low pop money (wages) caps real consumption. Raising incomes (e.g. factory minimum wage, 4.11) is the gameplay fix; this patch only makes the screen show the truth.

### 4.15 `PATCH_FACTORY_PRIORITY_BY_RULE` — HOOK `0x8155B` (VA `0x48155B`, 5 bytes `80 7C 24 77 00`; resume `0x81560` `8B F3 8B 9B`), on (added 5.44)

* **Symptom.** Setting `delete_factory_if_no_input = yes` on an economic policy (e.g. `interventionism_ref`, which has `factory_priority = yes`) makes the engine overwrite the player's factory priorities every day.
* **Cause.** `FUN_004808D0` (per-country daily pass over its states; country in `[esp+0x54]`) copies the rule `RULE_DELETE_FACTORY_IF_NO_INPUT` (country `+0xB18`) into `[esp+0x77]` and, if set, writes `state building +0x24 = (+0x128 < 1000) ? 1 : 0` for every factory. The rule `factory_priority` (country `+0xAF0`) is not consulted there. The rule set is the `CRulesSet` at country `+0xAA8` (byte flag of rule k at `+0x18+8k`: k=6 factory_priority, k=11 delete_factory_if_no_input; rule order is in `FUN_004731C0`).
* **Hook.** `PrioAutoThunk` replaces `cmp byte [esp+0x77],0` and leaves ZF so that the auto-priority runs only when `factory_priority = no`. Vanilla policies keep their behaviour (priority=no <=> delete=yes). The other effect of `delete_factory_if_no_input` (stopping/deleting factories without input, `[esp+0x4b]`) is unchanged.
* **Config.** `PATCH_FACTORY_PRIORITY_BY_RULE` (ini, default on).

### 4.16 `PATCH_NEEDS_INCOME` — reuse of ENTRY hook `0x85390` (added 5.47), on

* **Behaviour.** On the final daily POP pass every POP is checked once. If its stored luxury-needs fraction `pop+0x140` is strictly below the threshold, the POP receives `amount_per_10000 x size / 10000` pounds directly in `pop+0x180`. Defaults are 5 pounds per 10000 population at luxury below 90%; `needs_income_per_10000 = 0` disables payment. The payment is created at the POP and is not charged to the country treasury.
* **Hook/gate.** `NeedsPopStepThunk` already wraps `FUN_00485390` (EAX = POP) for `PATCH_NEEDS_HONEST_UI`; it is installed when either patch is enabled. `PayNeedsIncome` runs only when the stack purchase flag `[ebp+0x14]` is nonzero, and an added `paidDay` in the POP table plus the game date at `0x25BA10` ensures one payment per POP per day even if several market passes have that flag.
* **Config.** `PATCH_NEEDS_INCOME` (ini, default on), `needs_income_per_10000` (pounds per 10000 population, default 5) and `needs_income_luxury_threshold` (percent, default 90) in `<mod>\common\defines_v2dll.txt`. Missing keys are appended on first start. Multiplayer clients need identical values.

## 5. UI patches

### 5.1 `ENABLE_BUTTONS` — VSLOT ×4 + button glue, on
`PatchSlot(vtable, slot, thunk)` replaces one per-frame/tooltip slot of four views so the DLL can wire its own `.gui` buttons (`BUTTONS[]` table) to `MakeDecision`:

| View | vftable | Slot | Slot address | Slot kind |
|---|---|---|---|---|
| `CTechnologyView` | `0xA17FA4` | 11 | `0xA17FD0` | `Update` |
| `CBudgetView` | `0xA059F0` | 10 | `0xA05A18` | tooltip |
| `CProductionView` | `0xA0FECC` | 10 | `0xA0FEF4` | tooltip |
| `CPoliticsView` | `0xA0E458` | 10 | `0xA0E480` | tooltip |

The slot patches themselves are unconditional; `ENABLE_BUTTONS` gates `SetupButtons` (finds `FE_ACADEMIES_BDSM`, `FE_RPROJECTS_BDSM` in the technology view and `FE_BUDGET_DIPLO_BDSM` in the budget view and attaches a cloned `CButtonObserverGlue`, 44 bytes: +0 vftable, +4 owner, +8 click handler). The Production view also gets the `hide_colonial_states` button (glue at view `+0x120`) which flips `g_hideColonialStates` and re-runs `FUN_006F3E70` (`0x2F3E70`).

### 5.2 `ENABLE_DECISION_FILTER` — VSLOT, on
* `CDecision` vftable `0xA29B54` (VA `0xE29B54`), slot 6 (`+0x18`, `IsValid`) → `MyDecisionIsValid`. For the three helper decisions behind the DLL's buttons (`open_academy_decisions_dec`, `open_research_projects_dec`, `exchange_settings_dec`) it returns "invalid" **only** when called from inside the politics-window list builder (return address in `0x2DB2E0`–`0x2DC750`), so they disappear from the list but stay usable when a button triggers them; every other decision returns "valid". `OnMakeDecisionClicked` = `0x2DCE10`.

### 5.3 `ENABLE_POP_DISPLAY` — HOOK ×3, **off**
Shows total population (adult male ×4) in three drawing sites. Each site is a 6-byte read of `[reg+0x12E8]` replaced by `E9` + `nop` to a cave that replays the read, does `shl eax,2` and jumps back. The source field itself is never modified (used by taxes/conscription/influence).

| Site | Address | Original |
|---|---|---|
| topbar | `0x310A32` (VA `0x710A32`) | `8B 87 E8 12 00 00` (`mov eax,[edi+0x12E8]`) |
| diplomacy | `0x22880F` (VA `0x62880F`) | `8B 81 E8 12 00 00` (`mov eax,[ecx+0x12E8]`) |
| lobby | `0x36DFBB` (VA `0x76DFBB`) | `8B 80 E8 12 00 00` (`mov eax,[eax+0x12E8]`) |

### 5.4 `ENABLE_VERSION_LABEL` — HOOK, on
* **Site:** `0x233826` (VA `0x633826`), 12 bytes: `push 8; mov edi,0Fh; push 0xE0764C` (length of the original label, a register load, and the pointer to the original string `0xA0764C`, which is checked before patching) in the main-menu label builder; resume `0x233832`.
* **Cave:** `push <len>; push <ptr to "V2 v3.04 + V2DLL v4.29">; mov edi,0Fh; jmp resume`.

### 5.5 `PATCH_PROD_LIST_VISIBILITY` — HOOK, on
* **Site:** `0x2F424B` (VA `0x6F424B`) — 10 bytes `7E 08 3B F3 0F 84 89 00 00 00` (`jle +8; cmp esi,ebx; je skip`) in the factory-list refresher `FUN_006F3E70`. Only the first two bytes are checked; the rest is rewritten.
* **Cave (`ProdListVisibilityThunk`):** if the runtime flag `g_hideColonialStates` is set *and* `[ecx+0x84] > 0` (colonial state) → jump to *skip* `0x2F42DE`; otherwise → *show* `0x2F4255`. (The vanilla "colonial with no factories is skipped unconditionally" rule no longer applies.)

### 5.6 `HIDE_UNAVAILABLE_LIMIT_BY_SUPPLY_FACTORIES` (+ `HIDE_NO_SUPPLY_DRY_RUN`) — HOOK, on
* **Site:** `0x2F9E41` (VA `0x6F9E41`) — 7 bytes `6A 30 E8 67 4B 3B 00` (`push 30h; call operator new`, the allocation of one list entry) in the candidate loop of the "build factory" window; jump patch + 2 NOPs. `operator new` is `0x6AE9AF` (the cave calls it itself when the entry is kept). Resume-show `0x2F9E48`, resume-skip `0x2F9EB0`.
* **Cave (`HideNoSupplyFactoryThunk`):** takes the candidate type from `[[esp+0x14]][esi*4]` and the window's state from `[edi+0xD0]`, calls `ShouldHideNoSupplyFactory(type, state)`; hidden → skip the entry, otherwise `push 30h; call operator new` and continue.
* **Verdict logic:** only for types with `limit_by_local_supply=yes`. The DLL reads the type's single `input_goods` from `production_types.txt` and the `trade_goods` of every province in the state from `history\provinces\*.txt` (mod files override vanilla), and hides the candidate if no province produces that good. Engine-internal structures (`type+0x12C`) were tried first and proved unreliable. `HIDE_NO_SUPPLY_DRY_RUN=1` logs the verdict but never hides.

### 5.7 `HIDE_RAW_GOODS_FILTER` — HOOK ×2, on
* **Sites:** `0x2F1C30` (VA `0x6F1C30`) and `0x2F1EC0` (VA `0x6F1EC0`) (5 bytes `8B 44 24 64 50`: `mov eax,[esp+64h]; push eax`) in the two goods-filter-button layout loops. Both are replaced by `E9` to `GoodsFilterPosThunk`/`…Thunk2`, which call `ComputeGoodsFilterPos(packedXY, goodIndex)`; resume at `site + 5`.
* Effect: `ComputeGoodsFilterPos` receives the button's packed x/y and the good's *byte offset* (index × 20), resolves the good's name and, if it starts with `raw_`, returns x = y = −2000 (off-screen). The second site is observation-only.

### 5.8 `FILTER_SHOW_ALL_FACTORIES_IN_STATE`, `FILTER_PRODUCERS_ONLY` — CALL ×2, on
* The goods filter predicate is `FUN_006F7F80` (`0x2F7F80`; `EAX` = window, `ECX` = factory object, result in `AL`; preserves EBX/ESI/EDI). It is called from two list builders: `0x2F41F7` (VA `0x6F41F7`) (`FUN_006F3E70`, tab 0) and `0x2F7471` (VA `0x6F7471`) (`FUN_006F7140`, tab 1). Their `rel32` is redirected to `FilterPredThunk0/1`.
* `FILTER_PRODUCERS_ONLY`: the predicate matches only factories that **output** the chosen good (not those that merely consume it as input).
* `FILTER_SHOW_ALL_FACTORIES_IN_STATE`: if any factory in the region passes, all of the region's factories are shown.

### 5.9 `PLAYER_BUTTONS` — CALL ×3, VSLOT ×2, ENTRY ×1, on
Adds the topbar music player: `button_fe_player_next`, `button_fe_player_pause` and the scrollbar `fe_player_volume_slider` (from `interface\topbar.gui`), two-way synced with the settings-window music slider.

| Patch | Kind | Address | Effect |
|---|---|---|---|
| Topbar build call | CALL | `0x30D090` (VA `0x70D090`) (`E8` → `FUN_007129A0` `0x3129A0`) | Runs `TopbarBuildHook`: original builder, then `SetupPlayerButtons` (find buttons/slider, attach glue). |
| Topbar vftable[0] | VSLOT | `0xA113D0` (VA `0xE113D0`) | Same hook for the rebuild path. |
| Topbar vftable[1] (dtor) | VSLOT | `0xA113D4` (VA `0xE113D4`) (orig `0x30D0C0`) | Clears our slider pointer when the topbar dies. Installed together with the rest or not at all. |
| Frame pump call | CALL | `0x285727` (VA `0x685727`) (`E8` → `FUN_009DF2B0` `0x5DF2B0`) | `FramePumpThunk`: `pushad; call OnFramePump; popad; jmp original`. Mirrors options → slider every frame. |
| `ApplyVolumes` entry | ENTRY | `0x35BB50` (VA `0x75BB50`) (5 bytes `55 8B EC 51 56`, sig 7 bytes with `8B F1`) | Trampoline + `ApplyVolumesHook`: before the original pushes the topbar value into the settings slider, after it mirrors the options back. |
| Settings OK call | CALL | `0x35C67E` (VA `0x75C67E`) (`E8` → `FUN_0075D4B0` `0x35D4B0`) | `SettingsApplyThunk`: original, then mirror volume to the topbar slider. |

Engine objects touched:

| Object | Address / offset | Use |
|---|---|---|
| Music object pointer | `0xF1CB34` (VA `0x131CB34`) (`DAT_0131cb34`) | Current `CMusic`/`CNullMusic`. **Next**: call vtable `+0x10` (slot 4, `Stop`); the song manager then starts the next track. |
| Music state | `0xB20C3C` (VA `0xF20C3C`) (`DAT_00f20c3c`) | 0 stopped, 1 playing, 2 paused, 3 no sound. |
| `IMediaControl` | `0xB20C4C` (VA `0xF20C4C`) | **Pause** toggles `GetState` (`+0x28`) → `Pause` (`+0x20`) / `Run` (`+0x1C`); only when state = 1. |
| Options singleton | `0xE5B5E0` (VA `0x125B5E0`) (`DAT_0125b5e0`) | Floats 0..100: master `+0x80`, effects `+0x84`, **music `+0x88`** (the slider writes this; the engine applies it next frame). |
| Scrollbar glue vftable | `0xA14404` (VA `0xE14404`) | `CScrollbarObserverGlue<CSettingsScreen>`; slot 1 = value-changed, handler at glue `+8`. |
| Settings screen | `this+0x330` | The music slider of the settings window (`OFF_SETTINGS_MUSIC_SLIDER`). |

Window getters used: `window->vtable[+0x34]` (button by name), `[+0x4C]` (scrollbar by name), scrollbar sub-object `+0x54` (`GetValue` slot `+0x10`, `SetValue` slot `+0x1C`). Click debounce: 250 ms.

### 5.10 `SHOW_ALLY_EMBARKED_TOOLTIP` — VSLOT + HOOK, on (added 4.36, current design since 4.60–4.62)
Replaces the tooltip on one of the **fleet's own panel** buttons with a short `ALLY: TAG, TAG` message listing any foreign (allied/vassal) armies sharing that fleet, e.g. `ALLY: EIC`. Purely additive — reads game state only, never touches simulation state. **Shipped and confirmed working in-game as of 4.62.**

This feature went through many wrong designs within one session (4.36–4.61) before landing on the current one; see `project_ally_embark_tooltip` memory for the full history if touching this again. The load-bearing facts that made every earlier attempt fail or land on the wrong panel:
* The disembark/load buttons (`unload_button`/`load_button`) live on the **embarked army's own panel**, not the fleet's — v4.61 shipped a working indicator there, but the user explicitly rejected it (wanted it on the fleet's panel instead, v4.62 fixed this). The fleet's panel has no load/unload button at all, only the capacity readout, which **never** routes through the tooltip dispatcher — but `attach_unit_button` (confirmed present and hoverable on the fleet's own panel, visually adjacent to the capacity readout) does, and is the element actually targeted as of 4.62.
* The fleet object vanilla's own per-tick order-eligibility check (`FUN_005D77A0`, used by `PATCH_ALLY_EMBARK`) passes around is a **different C++ object** from the one the UI (capacity label) correctly reads — its `+0x1A4` embarked list is reliably empty and the embarked army holds no pointer to it anywhere in its own memory (confirmed by a live scan). It cannot be reused for this display feature.

**Two-part design, both pieces required:**

1. **`FleetCaptureThunk` — HOOK, RVA `0x38F559`, inside `FUN_0078E820`.** `FUN_0078E820` is the vanilla per-frame updater that sets `LOAD_CAPACITY_LABEL`'s text (e.g. "Место: 7 (26)") for whatever unit panel is open — the one place proven, by its own correct on-screen output, to resolve the *real* fleet object. Disassembly (not just decompile) found the exact point where this happens:
   ```
   0078F554: MOV EDX,[EAX+0x30]    ; vtable slot 0x30
   0078F557: CALL EDX               ; -> EAX = correct fleet "special object"
   0078F559: LEA ECX,[EAX+0x1A4]    ; <- patched (signature 8D 88 A4 01 00 00)
   0078F55F: CALL FUN_005DC560      ; brigade-count, same function PATCH_ALLY_EMBARK uses
   ```
   The hook replaces only this one 6-byte `LEA` with a 5-byte `JMP` + 1-byte NOP. The thunk saves `EAX` (the correct fleet pointer) to `g_capturedFleetSpecial`, calls `UpdateEmbarkedTagsCacheFromCapturedFleet` (registers saved/restored around the call, cdecl, no guessed signature), then **replicates the exact original `LEA`** and resumes at `0x38F55F` — the real instruction stream is untouched except for this substitution, so `FUN_0078E820`'s own behaviour (the capacity label) is unaffected. Fires every frame any unit panel with cargo aboard its fleet is open — including the fleet's own panel, which is what makes this reliable.
2. **`UpdateEmbarkedTagsCacheFromCapturedFleet`** walks `fleetSpecial+0x1A4` (the proven-correct `PATCH_ALLY_EMBARK` embarked-army list, same node layout `{armySpecialObjPtr, ?, next}`, same `+0xC0..+0xC2` tag / `+0xC4` owner fields as §4.2a) from the *captured, correct* pointer and writes `"ALLY: TAG, TAG"` (any entry whose owner differs from the fleet's own, capped at 8) into `g_cachedEmbarkedTags` — a plain global, not tied to any specific hover event.
3. **`OnUnitButtonsTooltip`** — still the `CSingleUnitButtons` vtable slot 12 hijack from 4.36 (site: `0xA16BD0` VA `0xE16BD0`, found via RTTI on `.?AVCSingleUnitButtons@@`; `PatchSlot` swaps in `UnitButtonsTooltipThunk`, which calls the saved original first, unmodified), but reduced to the bare minimum: if the hovered element's name is `unload_button`, `load_button`, `attach_unit_button`, `detach_unit_button`, or `select_land` (every named button `CSingleUnitButtons`'s constructor, `FUN_0078DEE0`, wires up — widened to this full set in 4.62 specifically to catch whichever ones are actually present on the fleet's own panel) and the cache is non-empty, **replace** the tooltip text outright with `GStrSet(retBuf, g_cachedEmbarkedTags)`. It no longer reads `this+0x258`, calls any vtable slot on the selected unit, or walks any list itself — all of that (every version of it tried from 4.36 through 4.59) is gone. In testing, `attach_unit_button` is the one that actually fires on the fleet's own panel.

**Why replace instead of append:** `GStrSet` writes strictly within the target `std::string`'s *existing* capacity and never reallocates (deliberately — see the two `HIDE_RAW_GOODS_FILTER` crashes in project memory). Appending `" | ALLY: EIC"` to the long original vanilla sentence left only ~1 character of slack in practice (observed truncated to `"| ALLY: E"` in testing). Dropping the original text and writing only the short `ALLY: ...` message gives the whole (still fixed, still non-growing) capacity to just that short string, which reliably fits.

**Safety notes:** every pointer read in both the hook and the cache walk goes through `SafeIsBadReadPtr`/`__try`-`__except`; `InstallFleetCaptureHook` verifies the 6-byte signature before patching and refuses silently on mismatch, same as every other `HOOK` in this document. No call-through with a reconstructed signature anywhere in the chain.

**History note — do not reintroduce:** `LogEmbarkFleetState` (part of §4.2a's diagnostics) briefly also wrote into `g_cachedEmbarkedTags` from the wrong `FUN_005D77A0` fleet object (4.57–4.60); that write was empty every time and was removed in 4.61 because it raced with and periodically clobbered the correct value from `UpdateEmbarkedTagsCacheFromCapturedFleet`. `g_cachedEmbarkedTags` must have exactly one writer.

**Map-hover indicator (hovering the fleet directly on the map) is a separate, still-unimplemented feature** — the user's original preference, but not yet safely achievable; see `project_ally_embark_tooltip` memory for the three angles explored and ruled out (`CUnitsStackMapIcon` vtable — two real crashes, confirmed unsafe even for a single never-called slot; the likely tooltip-builder `FUN_006B2050` — found via the `unit_eta` string, but ~52KB decompiled and not yet safely analysable; icon-visibility-while-embarked — not located).

### 5.11 `ENABLE_GOODS_ICONS` — ENTRY ×3 (PhysFS) + IAT, on (added 5.21)
Per-good icon folders instead of frames in the three atlases. In `common\goods.txt` a good may have `icon = "gfx\\goods\\cotton"`; the folder holds `big` / `normal` / `small` (`.dds .tga .png .bmp`), or `icon` is a single image used for every size. No key / nothing found → the atlas frame stays.

* **How the engine loads a sprite texture (static, Ghidra).** `FUN_009BCBF0` (`this` in EAX; texture cache by path, entries of `0x2C` bytes: `+4` texture, `+0x24/+0x28` width/height, `+0x2C` refcount) → `FUN_009BC490` → `PHYSFS_exists` + the file-stream wrapper `FUN_00992740` (calls `PHYSFS_openRead`) → `PHYSFS_fileLength` + `FUN_00992F20` (read all) → `D3DXCreateTextureFromFileInMemoryEx(dev, data, size, D3DX_DEFAULT, D3DX_DEFAULT, D3DX_FROM_FILE, 0, UNKNOWN, MANAGED, FILTER_NONE, DEFAULT, 0, &info, 0, &tex)`; `info.Width/Height` are stored as the texture's size. About 80 call sites of `FUN_009BCBF0` (GUI sprites, map billboards…), so patching the D3DX call covers every place a goods icon is drawn (`GFX_resources*`, billboards `tradegoods`, `tradegoods_small`).
* **Atlases.** `gfx\interface\resources.dds` (1848×23), `resources_big.dds` (2310×29), `resources_small.dds` (1320×16): uncompressed 32-bit DDS (R/G/B/A masks `FF / FF00 / FF0000 / FF000000`, one mip), 66 frames side by side (`noOfFrames = 66` in `interface\core.gfx`; `mapitems.gfx` uses `resources.dds` for the billboards). **Frame = good index in `goods.txt` + 1** (frame 0 is a placeholder; checked on the atlases: `dummy_good` = index 30 = the empty frame 31, `raw_cattle` = 46 = frame 47). Cell size = atlas width / `noOfFrames` (28×23, 35×29, 20×16).
* **Hooks.**
  * `PHYSFS_openRead` `0x721F40` (VA `0xB21F40`, 6 bytes `55 8B EC 83 EC 10`) → `HookPhysfsOpenRead` through a trampoline (`StealToTrampoline`). It replaced the old naked `PhysfsOpenReadThunk`; ally-embark's `.v2` file-name watcher (`OnPhysfsOpenReadFilename`) is called from the same hook, so both features share it (`InstallPhysfsOpenReadHook` is idempotent). For `…interface/resources[_big|_small].dds` it stores the atlas kind in a TLS slot of the calling thread; for `common/goods.txt` it first parses the file (see below) and registers the returned handle.
  * `D3DXCreateTextureFromFileInMemoryEx` — IAT slot `0x88A424` (`d3dx9_41.dll`) → `HookD3dxCreateTexMemEx`. If the TLS slot says this thread just opened an atlas, it validates the data (`GiParseDds`: 32-bit RGB, one mip, header sane) and passes D3DX a **copy with the frames of goods that have `icon` replaced** (same size/format, so `info`, UVs and the cache entry are unchanged). Anything else passes through untouched.
  * `PHYSFS_read` `0x7206E0` (7 bytes `55 8B EC 57 8B 7D 08`) → `HookPhysfsRead`; `PHYSFS_close` `0x7221E0` (8 bytes `55 8B EC A1 <abs>`; the absolute operand is the mutex pointer VA `0xF20AA0`, relocated by the loader, so the expected bytes are computed with `g_base - 0x400000`) → `HookPhysfsClose`. Only handles registered for `goods.txt` are touched (`g_giStripActive == 0` otherwise: one volatile load per read).
* **Why `goods.txt` is rewritten on the fly.** The vanilla goods handler is not known to ignore a new key; instead of depending on that, the bytes of every `icon = ...` pair (found by `GiParseGoods`: depth-2 key `icon` inside a good, quoted string or word) are replaced by spaces in the data the engine reads. The lexer reads the file **byte by byte** (`FUN_00992DB0`: `PHYSFS_read(h, &c, 1, 1)`) and the multiplayer checksum `FUN_009939A0` reads it in 256 KB chunks, so the hook uses `PHYSFS_tell` before each read and blanks the part of the span that falls into `[pos, pos+n)`. The handle is unregistered **before** the real `PHYSFS_close` (a freed handle can be reused for another file). Consequence: the file checksum is computed without the `icon` keys (identical on all clients with this DLL). Log: `вырезано байт` in the first summary line per atlas.
* **Icon files.** Read through the engine's PhysFS (mod overrides base), decoded by the engine's own D3DX (`D3DFMT_A8R8G8B8`, `D3DPOOL_SCRATCH`, `D3DX_DEFAULT` size: the image sits in the top-left of a power-of-two texture, `D3DXIMAGE_INFO` gives the real size — verified), copied out with `LockRect`, then resampled if its size differs from the cell (area average on premultiplied alpha, `GiResample`). Lookup order for a missing size: normal ← big ← small, big ← normal ← small, small ← normal ← big. Decoded cells are cached per atlas kind.
* **Logs.** `GoodsIcons: goods.txt разобран: товаров N, с иконкой M, вырезаемых ключей icon K`; per atlas `GoodsIcons: resources.dds: кадр 28x23, кадров 66 - подставлено иконок X, не подставлено Y (goods.txt открывался движком N раз, вырезано байт B)` (first 3 loads of each); problems are always logged (missing folder/files, D3DX read failure, atlas not 32-bit); per-file lines need `DEBUG_LOG=1`. If `goods.txt открывался движком 0 раз`, the strip hook did not see the file — check the path (`GoodsIcons: движок открывает '<path>'` with `DEBUG_LOG=1`).
* **Verification.** The pure logic (`GiParseGoods`, span blanking with 1/7/4096-byte reads, `noOfFrames` scan, DDS parsing, cell copy/blit, resampling) was compiled and run on the real `goods.txt`, `core.gfx`, `mapitems.gfx` and the three atlases (round trip cell→atlas is byte-identical). The whole compose pipeline (`GiComposeAtlas` as extracted from this file, fake PhysFS over a folder, the real `d3dx9_41.dll` on a `D3DDEVTYPE_NULLREF` device) reproduces the atlases byte-for-byte from 46 icons per atlas stored as DDS / PNG / bottom-up TGA, handles a single 4× PNG for all sizes, a folder with only `normal.png`, and a missing folder. **In the running game (5.24, 2026-10-07):** the atlas substitution works (log: `kind=1/2/3`, 63 icons per atlas) and the user confirmed the icons are right, also after moving a good to another category (icons follow the goods). 5.21–5.23 did nothing because of the path format, see below. **Not yet confirmed from a log:** the strip of `icon` keys on the engine's real `goods.txt` reads (5.25 logs `движок прочитал goods.txt, вырезано байт …` when the engine closes the file; the game ran without visible errors).
* **Path format (found in the game, cost two builds).** The engine opens the atlases as `gfx//interface//resources.dds` — the `\\` of `texturefile` in core.gfx becomes `//`, so a plain "ends with `interface/resources.dds`" test never matched and nothing was substituted (5.21–5.23). `GiPathEndsWith` now treats repeated separators as one and ignores case/slash direction; the tests use the real paths from the log. Lesson: test path matching with the strings the engine really passes (log them first), not with the ones you expect.
* **Limits.** Atlas must be 32-bit uncompressed with one mip (otherwise a log line and no replacement); goods whose frame is ≥ `noOfFrames` are skipped; up to 256 goods and 512 `icon` keys.

---

## 6. Miscellaneous hooks

### 6.1 `MUSIC_FAIR_RANDOM` — HOOK, on
* **Site:** `0x5534D` (VA `0x45534D`) — 6 bytes `69 FF E8 03 00 00` (`imul edi,edi,0x3E8`) in the song selector `FUN_00455290`, preceded by `8B 45 10` and followed by `50`.
* The vanilla code multiplied an uninitialised stack value, so the choice was not random (it depended on the previous call's leftovers, which is why moving tracks in `songs.txt` changed which ones played). `MusicRandomThunk` saves EAX/ECX/EDX, calls `MusicFairRandom`, returns a real random number `×1000` in `EDI` and resumes at `site + 6`.

### 6.2 `PATCH_CIVILIZE_NULL_CHECK` — HOOK, **forced on**
* **Site:** `0x14248B` (VA `0x54248B`) — 7 bytes `8B 70 40 4E C1 E6 04` (`mov esi,[eax+0x40]; dec esi; shl esi,4`) right after `call FUN_005C2AD0` in the `on_civilize` handler `FUN_00542370`.
* Cave: if `EAX == 0` (building has no slot) → jump to *skip* `0x142555` (next iteration); otherwise replay the three instructions and continue at `0x142492`.
* Why forced on: the `*_UNCIVILIZED` build patches let uncivilized countries build arbitrary factories, which made this vanilla null-deref reachable (crash `0xC0000005` at fault offset `0x14248B`).

### 6.3 `PATCH_SUPPLY_SOURCE_NULL_CHECK` — HOOK, on
* **Site:** `0xD15EB` (VA `0x4D15EB`) — 6 bytes `8B 83 28 01 00 00` (`mov eax,[ebx+0x128]`) in the per-country economy walk `FUN_004D1560`. `EBX` is the production type's local-supply source pointer (`type+0x12C`), which is null when the state has no such source.
* Cave: `EBX == 0` → skip the block that uses it (calls of `FUN_004EE150/4EE300/4EE990`) and go to the independent employment count at `0xD1665`; otherwise replay and continue at `0xD15F1`.
* Fixes the crash (`av_read = 0x128`) that appeared when viewing certain countries.

### 6.4 `PATCH_TECH_NULL_CHECK_FIXES` — HOOK ×2, on
Both hooks fix a null "status" pointer (`invention+0x430`) in the technology window, using the same chain `status → +0x310 → +0x40`.

| Hook | Site | Overwritten | Behaviour if a link is null | Resume |
|---|---|---|---|---|
| Sort comparator `FUN_007A9070` | `0x3A918A` (VA `0x7A918A`) | 12 bytes (`mov eax,[edx+0x310]; mov edx,[ecx+0x310]`) | `pop esi; xor eax,eax` and jump to the epilogue `0x3A91A2` (return "not less"). | `0x3A9196` |
| Folder builder `FUN_007ADB70` ("folder_icon") | `0x3ADE98` (VA `0x7ADE98`) | 15 bytes (three chained `mov ecx,[ecx+…]`) | `ecx` = pointer to a static empty C string. | `0x3ADEA7` |

### 6.5 `PATCH_GRAPH_POINT_CLAMP` — HOOK, off
* **Site:** `0x5E0FD6` (VA `0x9E0FD6`) — 13 bytes (`cmp dword [esi],1; mov [esp+0x20],esi; jl …`) in the history-graph renderer `FUN_009E0EF0` (opens with the budget window).
* Cave clamps the per-segment point count `[esi]` to `GRAPH_CLAMP_MAX` (100; buffer safe maximum 147) before replaying the compare; `jl` target `0x5E1159`, resume `0x5E0FE3`. Guards against a stack buffer overflow (GS cookie `0xC0000409`).

### 6.6 `PATCH_AI_NAVAL_BASE_LIMIT` — 3 CALL sites `0x457983`, `0x457D02`, `0x458282` (5.32, semantics fixed in 5.33, off by default since 5.46)
An AI country founds naval bases in at most `ai_naval_base_max_provinces_per_state` provinces of a state (default 1). Upgrading an existing base is not limited.

* **Where the AI builds province buildings.** `FUN_008577b0` (building type in the request at `+0x80`) and `FUN_008580e0` (`+0x78`) walk the provinces of the country and take the one for which `FUN_00511EF0` ("can build", RVA `0x111EF0`: `EAX` = building type, stack = country, province, 5 flags, `ret 0x1C`; prologue `55 8B EC 53`) returns true, ranking only by money and the distance to the capital. A naval base has no "one per state" rule (`BUILDING_ONE_PER_STATE` = `FUN_00512150` applies only to buildings with the flag at `+0xBE`), so the AI puts a base into every port province of a state. The same `FUN_00511EF0` is also called by the UI and by capitalists/script triggers (other call sites, untouched).
* **Hook.** The three `E8` calls inside the two AI functions (checked: relative target = `FUN_00511EF0`) are redirected to `AiCanBuildThunk`: `pushad; push [esp+0x28]` (province) `; push [esp+0x28]` (country) `; push eax` (building) `; call AiBuildBlocked; add esp,12; mov [esp+0x18],eax` (the saved ECX slot) `; popad; test ecx,ecx; jnz blocked; jmp FUN_00511EF0` — a tail jump keeps the stack so the original `ret 0x1C` returns to the caller; `blocked: xor eax,eax; ret 0x1C`. ECX is a scratch register for `FUN_00511EF0`, so it can carry the verdict.
* **`AiBuildBlocked`.** Only for the building named `naval_base` (province building, `CBuilding+0x131 != 0`, vector index `CBuilding+0x134`). It walks the provinces of the state of the candidate (`province+0x188` = state, vector of province ids at `state+0x48..+0x4C`, `province = [session+0xACC][id]`) and marks each as "has a base" when its naval base level is `>= 1` (`province+0x118` vector → element `[index]` → `int` at `+0x20`, thousandths) or a construction of this building is queued (`province+0xD8` linked list: node `+0` = object, `+8` = next; object `vtable+0x30` = "is a province building construction", object `+0x58` = building type — the loop `FUN_00512150` uses). If the candidate province itself has a base (upgrade) it is allowed. Otherwise, if the number of OTHER provinces of the state with a base is `>=` the limit it returns 1 and the AI treats the province as not buildable and picks another. Everything is read inside `__try`; on an error it allows the build.
* **Config.** `PATCH_AI_NAVAL_BASE_LIMIT` (ini, default **off** since 5.46) and `ai_naval_base_max_provinces_per_state` (`<mod>\common\defines_v2dll.txt`, default 1, 0 = no limit; appended to an existing file on first start). Like the other `defines_v2dll.txt` values it must be identical for all players of a multiplayer game. (5.32 shipped the key `ai_naval_base_max_level_per_state` that limited the total LEVEL, which also stopped upgrades; it was never written by a released game start and is ignored.)
* **Not covered.** Naval bases built by pops/capitalists (`POP_BUILD_NEW_PROVINCEBUILDING`) and by the player. Bases already built are not removed.

---

## 7. Stability and performance

### 7.1 `PATCH_FPU_FORTRESS` — HOOK on the main-loop entry, on
* **Site:** `0x5DF550` (VA `0x9DF550`) — 5 bytes `55 8B EC 6A FF` (`push ebp; mov ebp,esp; push -1`). `MainLoopThunk`: `pushad; call PinFpu; call TryPatchLateModules; popad;` replays the prologue, resumes at `0x5DF555`.
* `PinFpu`: x87 precision control = 53-bit (`_PC_53`), rounding = nearest, SSE flush-to-zero and denormals-are-zero on. Also called once at install and on every new thread (`PATCH_THREAD_FPU_PIN`). Goal: identical floating-point behaviour across clients (multiplayer sync).

### 7.2 `PATCH_D3D_FPU_PRESERVE` — IAT + VSLOT, on
* IAT: `v2game.exe` import `d3d9.dll!Direct3DCreate9` → `HookDirect3DCreate9` (patched late, once `d3d9.dll` is loaded).
* `IDirect3D9` vftable slot **16** (`CreateDevice`) on the returned object → `HookCreateDevice`, which ORs `D3DCREATE_FPU_PRESERVE (0x2)` into the behaviour flags.
* On the created `IDirect3DDevice9`: vftable slot **16** (`Reset`) and slot **17** (`Present`) are replaced (Present timing, FPS cap, `PresentationInterval` at `D3DPRESENT_PARAMETERS + 52`).

### 7.3 `PATCH_D3D_NO_VSYNC`, `D3D_FPS_LIMIT` — VSLOT (same slots), off / 70
* `PATCH_D3D_NO_VSYNC=1` forces `PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE` in `CreateDevice` and `Reset` (off by default: it tears list scrolling).
* `D3D_FPS_LIMIT` (0 = off): soft cap applied in the `Present` hook (`WaitFpsCap`, QPC based, coarse sleep then spin). Active regardless of `PATCH_D3D_NO_VSYNC`.
* **Dependency:** both keys work only through the hooks installed by 7.2; the `Direct3DCreate9` IAT hook is gated by `PATCH_D3D_FPU_PRESERVE`, so with that key off there is no Present hook, no FPS cap and no vsync override.

### 7.4 `PATCH_HEAP_LFH` — API, on
`HeapSetInformation(heap, HeapCompatibilityInformation, 2)` on every process heap (up to 128) at install.

### 7.5 `PATCH_THREAD_FPU_PIN` — IAT, on
Exe imports `kernel32!CreateThread`, `LoadLibraryA/W`, `GetTickCount`; `tbb.dll` imports `kernel32!CreateThread` and `MSVCR100!_beginthreadex`. New threads run `PinFpu` first; `GetTickCount` is used as a late-init point to patch modules loaded after start (TBB, D3D).

### 7.6 `ENGINE_WORKER_THREADS` — IAT, 0 (off)
When ≥ 1, the exe's import `tbb.dll!?initialize@task_scheduler_init@tbb@@QAEXHI@Z` → `HookTbbInit` (naked; overwrites the thread-count argument at `[esp+4]`). 0 leaves TBB alone.

### 7.7 `PATCH_POP_QUANTIZE`, `POP_QUANTIZE_KEEP_BITS` — ENTRY, on / 12
* **Site:** `0x85E40` (VA `0x485E40`) — 9 bytes `55 8B EC 64 A1 00 00 00 00` (`push ebp; mov ebp,esp; mov eax,fs:[0]`), entry of the daily POP coordinator `FUN_00485E40`. Trampoline (copy + `jmp +9`) is allocated with `VirtualAlloc`; the entry is `E9 → PopDailyEntryThunk` + 4 NOPs.
* After the original returns, the thunk walks the passed pop container (stride `0x2A8`, type id 46) and rounds the int64 fixed-point (2¹⁵) fields at offsets `0x118, 0x120, 0x128, 0x130, 0x138, 0x140, 0x180 (money), 0x1B0, 0x1C8, 0x1D8–0x218 (step 8), 0x250 (savings)` down to `KEEP_BITS` fractional bits (12 → step 8 units of 2⁻¹⁵), so low bits cannot diverge between clients.

### 7.8 `PATCH_MP_CLIENT_SLEEP`, `MP_CLIENT_SLEEP_MS` — 1 code patch + IAT hooks, on / 1
| Part | Address | Effect |
|---|---|---|
| Pump idle sleep | `0x71DD2C` (VA `0xB1DD2C`) — 8 bytes `6A 28 FF 15 EC A0 C8 00` (`push 40; call [Sleep]`) → `E8 <MpClientPumpIdle> 90 90 90` | The MP-client UI thread's `Sleep(40)` becomes `Sleep(MP_CLIENT_SLEEP_MS)`. |
| Sleep IAT | Sleep slot `0x88A0EC` (VA `0xC8A0EC`) in the exe and in loaded non-system modules (`kernel32`, `KERNELBASE`) | `HookSleep`: 16–50 ms sleeps are clamped to `MP_CLIENT_SLEEP_MS`; 30 ms and 35 ms (audio) are left alone; system DLLs (`ntdll`, `kernel32`, `user32`, `gdi32`, `winmm`, `lua51*`) are never hooked. |
| `WaitForSingleObject` IAT | exe import | Same 16–50 ms clamp; `INFINITE` untouched. |
| `select` IAT | ws2_32 ordinal 18 | See `FIX_SFX_MIXER_LAG` (7.9). |

### 7.9 `FIX_SFX_MIXER_LAG` — IAT, on
Exe import `ws2_32!select` (ordinal 18) → `HookSelect`. Calls from the mixer range `0x689C00`–`0x68C000` (main site `0x68B47D`) with timeout > 2 ms get a **copy** of the `timeval` set to 1 ms; the game's own timeval is never modified. Shared with `PATCH_MP_CLIENT_SLEEP` (installed if either is on).

### 7.10 `PATCH_MAIN_LOOP_SLEEP0`, `MAIN_LOOP_SLEEP_MS` — BYTE (imm8), on / 1
* **Sites:** `0x5DF2D5` (VA `0x9DF2D5`) and `0x5DF684` (VA `0x9DF684`) — `6A 64 FF 15 EC A0 C8 00` (`push 100; call [Sleep]`), each preceded by `6A 00 EB 02` (the `Sleep(0)` / `Sleep(100)` branch). Only the immediate (byte +1) is rewritten: 100 → `MAIN_LOOP_SLEEP_MS`. The `Sleep(0)` branch is left to the host.
* Companion (always installed): `InstallTimerResolution` — `timeBeginPeriod(1)` and `NtSetTimerResolution(10000)` (1 ms), because the engine parses `TIMECAPS` wrongly and never calls `timeBeginPeriod` itself; the timer would stay at ~15.6 ms.

### 7.11 `PATCH_HIGH_PRIORITY` — API, on
`SetPriorityClass(ABOVE_NORMAL_PRIORITY_CLASS)` and `SetProcessInformation(ProcessPowerThrottling, EXECUTION_SPEED off)`.

### 7.12 `FIX_ARMY_WINDOW_LAG` / `PATCH_SKIP_NESTED_IDLE` — ENTRY, on / off
* **Site:** `0x254D80` (VA `0x654D80`) — `IdleInGame` (steal 6 bytes `55 8B EC 83 E4 F8`, trampoline `g_trampIdleIngame`), hook `HookIdleIngame`.
* **Behaviour:** a *nested* call (recursion depth > 0) is dropped when `PATCH_SKIP_NESTED_IDLE` **or** `FIX_ARMY_WINDOW_LAG` is on (the latter is an alias, default on). The outer call runs normally with full timing instrumentation. This is the only behavioural change in the timing-trampoline family (section 9).

### 7.13 Switches that are off or forced off
| Key | State | Note |
|---|---|---|
| `PATCH_SKIP_SEL_PROJ` | off | If on: jump patch `0x1CC5B0` (first 6 bytes `8B 71 58 8B 8B 08` → `E9 rel32` to `0x1CCA3B` + `90`) skips `selection_projection` mesh creation on unit click. Debug only. |
| `PATCH_REUSE_UNIT_VIEW` | **forced off** in `Install()` | Would hook the unit-panel constructor `0x398A50` (+ `0x26A958`/`0x26A95E`/`0x26AE09`/`0x26AE98`, delete `0x6AE91B`). 3.42–3.75 broke the army window. |
| `PATCH_SKIP_ARMY_IDLE` | off | Only affects a rebuild flag in the (vanilla) army window timers. |
| `PATCH_REUSE_WINDOWS` | off | Would turn `Destroy GUI` into `Hide` (use-after-free). The code path is disabled (the log says the GUI pool is off). |
| `PATCH_SKIP_CHK_WIN` | **forced off** | 3.57 mistake: `0x2859C0` is the session's daily tick, not a window. |
| `PATCH_CAM_STILL` | **forced off** | 3.59: idle storm, worse FPS. |

---

## 8. Diagnostics

| Key | Default | Kind / address | Behaviour |
|---|---|---|---|
| `ENABLE_LOG` | on | – | `Logs\v2dll.log`: patch install lines, errors ("signature mismatch", exceptions) and a few one-time status lines. |
| `DEBUG_LOG` | off | – | (4.98) Enables the `LogDbg(...)` records (macro next to `Log()`: `if (g_settings.debugLog) Log(...)`): the development diagnostics that used to dominate the log (a 40 MB `v2dll.log` was 60 % `Present` frame statistics, 15 % `IdleSpike`, then ally-embark / army-select / goods-filter / probe traces). About 155 call sites were moved from `Log` to `LogDbg`; install lines and failures stay on `Log`. The pure-diagnostic helpers (`LogGoodsFilterConstructed`, `LogEmbarkFleetState`, `LogMapIconProbeHit`, `LogProvinceTableOnce`, `LogHideNoSupplyResult`) return immediately when it is off. |
| `PATCH_FACTORY_DUMP_SCAN` | off | scans `MEM_PRIVATE` heap regions | Debug dump of factory structures. Do not widen to `MEM_IMAGE/MAPPED` (it once broke device creation). |
| `PATCH_CHECKSUM_DIAGNOSTIC` | off | HOOK `0x238A40` (VA `0x638A40`) (11 bytes `53 6A 0C C6 84 24 D4 03 00 00 30`; resume `0x238A4B`) + lobby HOOK `0x36B4F6` (VA `0x76B4F6`) (6 bytes `8B 80 30 01 00 00`; resume `0x36B4FC`) | Logs `ECX` and `*(ECX+0x30)` (the checksum accumulator) before the game builds `"Checksum is …"`, and the lobby copy. |
| `ENABLE_OOS_LOG` | on | ENTRY `0x282EC0` (VA `0x682EC0`) (`FUN_00682EC0`, 5 bytes `55 8B EC 6A FF`; also checks `sub esp,0x140` at `+24`) — **always installed** | Writes `Logs\v2dll_oos.log` when the "Games out of synch" dialog fires; also counts SYNC/OOS hits. |
| `ENABLE_CRASH_LOG` | on | vectored handler + `SetUnhandledExceptionFilter` + IAT hook of it + `SIGABRT` + invalid-parameter handler | `Logs\v2dll_crash.log` and `v2dll_crash_hint.txt`. |
| `ENABLE_CRASH_DUMP` | off | same handlers | Adds `v2dll_crash_*.dmp` (tens of MB each). Requires `ENABLE_CRASH_LOG=1`. |
| `HIDE_NO_SUPPLY_DRY_RUN` | off | see 5.6 | Log only. |

Live log path: `I:\Vic2_Dev\V2BDSM\Logs\v2dll.log`.

---

## 9. Always-installed instrumentation (not switchable from the ini)

These are entry trampolines (`StealToTrampoline`: copy N bytes, `E9` to our timer, call the original through the trampoline) or mid-function jumps (`PlantMidJump`). They measure time with `QueryPerformanceCounter` and feed the periodic "IdleSpike"/army-select log lines. **They do not change game logic**, with one exception: `IdleInGame` (7.12). This classification comes from the source comments (they call these hooks timers, "no skip"); the individual hook bodies were not re-audited line by line for this document.

| RVA | Function / meaning | Stolen bytes |
|---|---|---|
| `0x240680` | `CEU3Dialog` constructor | 5 |
| `0x240B90` | `DefaultDialog` inflate | 8 |
| `0x41A450` | map follow-up | 6 |
| `0x254D80` | `IdleInGame` (**behavioural**, 7.12) | 6 |
| `0x257B60` | map overlay / input | 5 |
| `0x2592F0` | map camera / view | 5 |
| `0x5AE320` | map matrix | 6 |
| `0x5EB7C0` | map view | 9 |
| `0x3F7CE0` | map objects / icons | 5 |
| `0x59C370` | gfx tick | 6 |
| `0x254620` | pre-camera | 9 |
| `0x248460` | post-overlay GUI | 9 |
| `0x1F7A50` | idle cleanup | 5 |
| `0x24F350` | idle tail | 5 |
| `0x055290` | lookup | 9 |
| `0x588F20` | string (camera) | 5 |
| `0x254530` | dirty-cluster | 7 |
| `0x5DF2B0` | Peek/Dispatch pump (`HookPump`; the same function the player's frame-pump call targets) | 8 |
| `0x2859C0` | daily tick timer (skip disabled) | 5 |
| `0x3FC360` | `FUN_007FC360` province-dirty | 10 |
| `0x1CC530` | `army_selected` | 6 |
| `0x1CCEC0` | `army_move` | 6 |
| `0x26A7F0` | `CInGameIdler` notify | 6 |
| `0x1D4540` | mesh `selection_projection` | 6 |
| `0x393290`, `0x391BB0`, `0x3810A0`, `0x391C6E` | army panel rebuild / `bb0` idle / reorganize / `bb0` tail (vanilla, no skip) | 9 / 5 / 6 / 6 |
| `0x391BEE`, `0x391BFE`, `0x391C2D`, `0x391C44` | mid-function timers inside `bb0` | 5 / 6 / 9 / 5 |
| `0x5B2750`, `0x5B275C` | list-box update + child | 6 / 5 |
| `0x38AF3A`, `0x38AF44`, `0x38AF49`, `0x38B152`, `0x38B183`, `0x38B1C2`, `0x38B1CD` | list sync / equality-call timers | 5–9 |
| `0x5E4507`, `0x5E4595`, `0x5E4672`, `0x5E46A5`, `0x5E46C9`, `0x5E46D5`, `0x5E4705`, `0x5E4735`, `0x5E4762` | equality-slice timers in the view code | 6–9 |

IAT instrumentation (installed by `InstallWindowFps`): `user32!PeekMessageA`, `user32!DispatchMessageA` (counted only inside `IdleInGame`).

`InstallWaitDiagHooks` (`recv` ordinal 16, `QueryPerformanceCounter`, `IdleEU3` `0x2481D0`, `IdleNudge` `0x2B70A0`) exists in the source but is **not called** from `Install()` — dead code at 4.29.

---

## 10. Engine memory map used by the DLL

| Address | Type | Owner / meaning | DLL access |
|---|---|---|---|
| `0xE5B9E0` (VA `0x125B9E0`) | int64 (`.data`) | Price step per day (vanilla 328) | **write** (4.4/4.5) |
| `0xE5B5E0` (VA `0x125B5E0`) | pointer to options | Options singleton (`FUN_00475500` returns it) | read; write `+0x88` |
| `0xF1CB34` (VA `0x131CB34`) | pointer | Current music object | read; call vtable `+0x10` |
| `0xB20C3C` (VA `0xF20C3C`) | dword | Music state 0/1/2/3 | read |
| `0xB20C4C` (VA `0xF20C4C`) | COM pointer | `IMediaControl` | call `GetState/Pause/Run` |
| `0x88A0EC` (VA `0xC8A0EC`) | IAT slot | `kernel32!Sleep` | compared by signature checks |
| `0xA14404` (VA `0xE14404`) | vftable | `CScrollbarObserverGlue<CSettingsScreen>` | used as the glue vtable for the topbar slider |
| `0xA113D0` (VA `0xE113D0`) | vftable | Topbar (`[0]` build, `[1]` dtor) | **write** slots 0 and 1 |
| `0xA29B54` (VA `0xE29B54`) | vftable | `CDecision` | **write** slot 6 |
| `0xA17FA4` (VA `0xE17FA4`) / `0xA059F0` (VA `0xE059F0`) / `0xA0FECC` (VA `0xE0FECC`) / `0xA0E458` (VA `0xE0E458`) | vftables | Tech / Budget / Production / Politics views | **write** slots 11/10/10/10 |
| `0xA45C28` (VA `0xE45C28`) | double | Relative price cap ×16384 | **write** (byte patch) |
| `0x889113` (VA `0xC89113`) | code cave | Roll Changer routine | **write** immediates at `+0x0B` and `+0x13` |
| `0x721F40` / `0x7206E0` / `0x7221E0` (VA `0xB21F40` / `0xB206E0` / `0xB221E0`) | functions | `PHYSFS_openRead` / `PHYSFS_read` / `PHYSFS_close` (cdecl; sint64 in EDX:EAX) | **entry hooks** (5.11, 4.2b) |
| `0x720780` / `0x7207C0` / `0x721820` / `0x7219E0` (VA `0xB20780` / `0xB207C0` / `0xB21820` / `0xB219E0`) | functions | `PHYSFS_tell` / `PHYSFS_fileLength` / `PHYSFS_exists` / `PHYSFS_isDirectory` | called by the DLL |
| `0x88A424` (VA `0xC8A424`) | IAT slot | `d3dx9_41.dll!D3DXCreateTextureFromFileInMemoryEx` | **IAT hook** (5.11) |

Engine object layouts referenced: state `+0x84` (colonial flag, 2 = colonial), country `+0x12D0` (civilized byte), country `+0x12E8` (adult male pop), invention `+0x430` → status `+0x310` → `+0x40`, province `+0x12C` owner / `+0x134` controller, production type `+0x58` (index), `+0x12C` (local supply source), `+300` (local-source link).

---

## 11. Removed / superseded

* `PATCH_NULL_VTABLE_UI`, `PATCH_IDENTITY_TOMBSTONE` — deleted from source and ini (4.26).
* `PATCH_TECH_COMPARE_NULL_CHECK` + `PATCH_TECH_FOLDER_ICON_NULL_CHECK` — merged into `PATCH_TECH_NULL_CHECK_FIXES` (4.26).
* `PLAYER_NEXT_BUTTON` — renamed `PLAYER_BUTTONS` (4.2x); the old name is no longer parsed.
* `PATCH_HIDE_NO_SUPPLY_FACTORIES` — the feature's earlier key; the current key is `HIDE_UNAVAILABLE_LIMIT_BY_SUPPLY_FACTORIES` (the old name is only left in a source comment).

---

## 12. Maintaining this document

1. Every patch installer logs its site on success or a signature mismatch line on failure (`Logs\v2dll.log`) — that log is the ground truth for what was actually applied in a given run.
2. When you change or add a patch: keep the `RVA_*` constant next to its installer with a comment, add the ini key in three places (`Settings` struct default, `ApplySetting`, `WriteDefaultSettings` category block), bump `MOD_VERSION`, and update this file.
3. The byte-patch table (section 3) can be re-verified against the exe at any time with a short `pefile` script that reads each `EXE_PATCHES` RVA and compares it to the *expect* array; all 22 rows matched at 4.29 (checked 2026-09-27).
4. Anything in the ini that differs from the defaults in this file is intentional per-install tuning (currently only `PATCH_CIVILIZE_NULL_CHECK=0` in the live ini, which the DLL overrides to on).

---

## 13. Credits (as stated in `README.md`)

* **Zombiefreak** — `PATCH_ALWAYS_ADD_WARGOALS`, `PATCH_LAND_REINFORCE`, `PATCH_NAVAL_REINFORCE`.
* **maxioten** — `PATCH_ALLOW_UNCIV_TECH_RESEARCH`; external reverse-engineering notes: https://github.com/maxioten/Victoria2-Reverse-Engineering
* **vesper** — `PATCH_ARISTOCRAT_INCOME_SHARE`, `PATCH_EXPONENTIAL_PRICE_DELTA`.
* **av213238** — `PATCH_FPU_FORTRESS`, `PATCH_D3D_FPU_PRESERVE`, `PATCH_THREAD_FPU_PIN`, `PATCH_HEAP_LFH`, `ENGINE_WORKER_THREADS`, `PATCH_POP_QUANTIZE`, `PATCH_MP_CLIENT_SLEEP`, `PATCH_MAIN_LOOP_SLEEP0`, `PATCH_D3D_NO_VSYNC`, `FIX_SFX_MIXER_LAG`, `PATCH_HIGH_PRIORITY`, `ENABLE_OOS_LOG`, `ENABLE_CRASH_LOG`, `ENABLE_CRASH_DUMP`.
* Everything else (economy/UI/null-check fixes, player buttons, fair music random, combat popups, hide-no-supply, production-list filters) was written for the BDSM mod.
