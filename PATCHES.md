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
`ENABLE_DECISION_FILTER` | on | VSLOT | `0xA29B54` slot 6 | 5
`ENABLE_POP_DISPLAY` | **off** | HOOK ×3 | `0x310A32`, `0x22880F`, `0x36DFBB` | 5
`ENABLE_VERSION_LABEL` | on | HOOK | `0x233826` | 5
`PATCH_PROD_LIST_VISIBILITY` | on | HOOK | `0x2F424B` | 5
`HIDE_UNAVAILABLE_LIMIT_BY_SUPPLY_FACTORIES` (+ `HIDE_NO_SUPPLY_DRY_RUN`) | on (dry-run off) | HOOK | `0x2F9E41` | 5
`HIDE_RAW_GOODS_FILTER` | on | HOOK ×2 | `0x2F1C30`, `0x2F1EC0` | 5
`FILTER_SHOW_ALL_FACTORIES_IN_STATE`, `FILTER_PRODUCERS_ONLY` | on, on | CALL ×2 | `0x2F41F7`, `0x2F7471` | 5
`PLAYER_BUTTONS` | on | CALL ×3, VSLOT ×2, ENTRY | see 5.9 | 5
`PATCH_CONSCIOUSNESS_PLURALITY_GROWTH` | on | BYTE | `0x10C5DE` | 3
`PATCH_CIVILIZE_NULL_CHECK` | on (**forced on**; live ini says 0) | HOOK | `0x14248B` | 6
`PATCH_GRAPH_POINT_CLAMP` | off | HOOK | `0x5E0FD6` | 6
`PATCH_CHECKSUM_DRIFT_FIX` | off | BYTE | `0x1F8268` | 3
`PATCH_ALLOW_UNCIV_TECH_RESEARCH` | off | BYTE | `0x3AA757` | 3
`PATCH_ARISTOCRAT_INCOME_SHARE` | off | BYTE ×5 | `0xEEA2B` … `0xEEA3C` | 3
`MUSIC_FAIR_RANDOM` | on | HOOK | `0x5534D` | 6
`PATCH_TECH_NULL_CHECK_FIXES` | on | HOOK ×2 | `0x3A918A`, `0x3ADE98` | 6
`PATCH_SUPPLY_SOURCE_NULL_CHECK` | on | HOOK | `0xD15EB` | 6
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
`ENABLE_LOG`, `PATCH_FACTORY_DUMP_SCAN`, `PATCH_CHECKSUM_DIAGNOSTIC`, `ENABLE_OOS_LOG`, `ENABLE_CRASH_LOG`, `ENABLE_CRASH_DUMP` | on, off, off, on, on, off | mixed | see 8 | 8

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

---

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

### 5.10 `SHOW_ALLY_EMBARKED_TOOLTIP` — VSLOT + HOOK, on (added 4.36, current design since 4.60/4.61)
Replaces the tooltip on the embarked army's own disembark/load button with a short `ALLY: TAG, TAG` message listing any foreign (allied/vassal) armies sharing its transport, e.g. `ALLY: EIC`. Purely additive — reads game state only, never touches simulation state. **Shipped and confirmed working in-game as of 4.61.**

This feature went through many wrong designs within one session (4.36–4.59) before landing on the current one; see `project_ally_embark_tooltip` memory for the full history if touching this again. The two load-bearing facts that made every earlier attempt fail:
* The disembark/load buttons (`unload_button`/`load_button`) live on the **embarked army's own panel**, not the fleet's — the fleet's panel has no load/unload button at all, only the capacity readout, which never routes through the tooltip dispatcher. So `CSingleUnitButtons`'s `this+0x258` ("selected unit") is the **army**, not the fleet, whenever this tooltip fires — there is no vtable call reachable from it that yields the fleet's own embarked-passenger list.
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
3. **`OnUnitButtonsTooltip`** — still the `CSingleUnitButtons` vtable slot 12 hijack from 4.36 (site: `0xA16BD0` VA `0xE16BD0`, found via RTTI on `.?AVCSingleUnitButtons@@`; `PatchSlot` swaps in `UnitButtonsTooltipThunk`, which calls the saved original first, unmodified), but reduced to the bare minimum: if the hovered element's name is `unload_button` or `load_button` and the cache is non-empty, **replace** the tooltip text outright with `GStrSet(retBuf, g_cachedEmbarkedTags)`. It no longer reads `this+0x258`, calls any vtable slot on the selected unit, or walks any list itself — all of that (every version of it tried from 4.36 through 4.59) is gone.

**Why replace instead of append:** `GStrSet` writes strictly within the target `std::string`'s *existing* capacity and never reallocates (deliberately — see the two `HIDE_RAW_GOODS_FILTER` crashes in project memory). Appending `" | ALLY: EIC"` to the long original vanilla sentence left only ~1 character of slack in practice (observed truncated to `"| ALLY: E"` in testing). Dropping the original text and writing only the short `ALLY: ...` message gives the whole (still fixed, still non-growing) capacity to just that short string, which reliably fits.

**Safety notes:** every pointer read in both the hook and the cache walk goes through `SafeIsBadReadPtr`/`__try`-`__except`; `InstallFleetCaptureHook` verifies the 6-byte signature before patching and refuses silently on mismatch, same as every other `HOOK` in this document. No call-through with a reconstructed signature anywhere in the chain.

**History note — do not reintroduce:** `LogEmbarkFleetState` (part of §4.2a's diagnostics) briefly also wrote into `g_cachedEmbarkedTags` from the wrong `FUN_005D77A0` fleet object (4.57–4.60); that write was empty every time and was removed in 4.61 because it raced with and periodically clobbered the correct value from `UpdateEmbarkedTagsCacheFromCapturedFleet`. `g_cachedEmbarkedTags` must have exactly one writer.

**Map-hover indicator (hovering the fleet directly on the map) is a separate, still-unimplemented feature** — the user's original preference, but not yet safely achievable; see `project_ally_embark_tooltip` memory for the three angles explored and ruled out (`CUnitsStackMapIcon` vtable — two real crashes, confirmed unsafe even for a single never-called slot; the likely tooltip-builder `FUN_006B2050` — found via the `unit_eta` string, but ~52KB decompiled and not yet safely analysable; icon-visibility-while-embarked — not located).

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
| `ENABLE_LOG` | on | – | `Logs\v2dll.log` (many lines per tick; turn off for release). |
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
