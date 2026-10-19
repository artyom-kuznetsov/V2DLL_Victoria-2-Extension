# Report: V2DLL's `v2dll_mod.dll` slot and TGCX (2026-10-18)

> Read-only research. No code was changed, nothing was built or installed,
> the game install was not touched. Written 2026-10-17 (local time) against
> V2DLL upstream `origin/HEAD` = `9821c27` (2026-10-18 02:18 +0300).
> **The choice at the end is a [user] decision (R9).**

## 1. Question and sources

A Reddit commenter (maxiotenn) asked whether TGCX uses V2DLL's new feature
for loading a mod DLL. Our V2DLL clone was from 2026-10-11 (`5d6f894`), so we
did not know it existed. This report says exactly how it works and whether
TGCX could use it.

| Source | How it was read |
|---|---|
| V2DLL upstream, `E:\v2re\refs\V2DLL`, `origin/HEAD` `9821c27` | `git show origin/HEAD:<path>`; the working tree stays at `5d6f894` |
| `Source/V2/V2/V2DLL_ModLoader.cpp` (84 lines), `V2ModAPI.h` (42), `V2Mod_Template.cpp` (31), `V2DLL_Shared.h` (20) | read in full |
| `Source/V2/V2/V2TechButton.cpp` (`MOD_VERSION "5.83"`, line 43) | the call site, settings, `ResolveModFolder`, `DllMain`, the D3D9 and vtable patches |
| `PATCHES.md`, `README.md`, `V2DLL_LATEST_INSTALL/v2dll_settings.ini` at `origin/HEAD` | defaults and patch sites |
| TGCX `dll/tgcx/*.h`, `tgcx_dllmain.cpp`, `tgcx_signatures.h` (140 signatures), `tools/install_dll.py`, `tools/build_dll.ps1` | the working tree on 2026-10-17 (0.5.1) |
| `E:\…\Logs\tgcx.log` (read only) | 0.5.1 installs its renderer at `DllMain` time: `Renderer installed: Direct3DCreate9 IAT_RVA=88A39C` (line 145) |

Line numbers below are in the upstream files unless a TGCX path is given.

History: the loader code first appears in `5cda6f6` (2026-10-13 22:16 -0300,
"assimilateBlock,enableMods and performance"); the README entry
"9. LOAD_DLL_FROM_MOD_FOLDER" (README line 151-152) arrived in `42ab3d5`
(2026-10-17 00:59 +0300, "CleanUp").

## 2. How LOAD_DLL_FROM_MOD_FOLDER works

### 2.1 Which folder, and how the mod folder is resolved

1. The setting `loadDllFromModFolder` defaults to **on**
   (`V2TechButton.cpp:159`; shipped ini `LOAD_DLL_FROM_MOD_FOLDER=1`, line 56).
   The ini key is parsed at `V2TechButton.cpp:4572`. With
   `LOCAL_MOD_CONFIG=1` (default 0) the running mod's own
   `v2dll_settings.ini` is re-read and can override it (`LoadSettings`,
   `V2TechButton.cpp:4960-4985`).
2. `ResolveModFolder` (`V2TechButton.cpp:4882-4950`):
   - takes `GetCommandLineA()` and finds the **first** `-mod=` with `strstr`;
   - reads the value up to a closing quote, or (unquoted) up to the first
     `" -"`;
   - opens that `.mod` file with `fopen` **relative to the current
     directory** (the game folder);
   - returns the quoted value of the **first line that contains `path`** and
     an `=`. That substring test would also match a `replace_path` line; in
     `TGCX.mod` and `TGC_v2.5.2.mod` on E: the `path =` line comes first, so
     both resolve correctly (`mod/TGCX`, `mod/TGC_v2.5.2/TGC`).
3. `LoadV2Mods` (`V2DLL_ModLoader.cpp:37-56`) turns it into an absolute path
   with `GetFullPathNameA` and looks for `<that folder>\v2dll_mod.dll`. The
   name is fixed (`MOD_DLL_NAME`, line 13). One DLL, one folder: only the
   mod named by the first `-mod=`.

**Open point (not verified):** when TGCX is selected in the launcher with its
dependency TGC v2.5.2, we do not know whether the launcher passes one `-mod=`
or several, nor in which order. If TGC's `.mod` comes first, V2DLL would look
in `mod\TGC_v2.5.2\TGC\`, and putting a file there breaks R1. A user check
(read only, while the game runs) settles it:

```powershell
Get-CimInstance Win32_Process -Filter "Name='v2game.exe'" | Select-Object CommandLine
```

### 2.2 When, and on which thread

- V2DLL's `DllMain(DLL_PROCESS_ATTACH)` (`V2TechButton.cpp:26329-26352`)
  calls `Install()` inside `__try`. That is the process's main thread, during
  static-import initialisation, **under the loader lock**, before the game's
  own startup code.
- `Install()` (`V2TechButton.cpp:25003-25325`) installs every built-in patch
  and then, **last**, `if (g_settings.loadDllFromModFolder)` →
  `ResolveModFolder` → `LoadV2Mods` (`25312-25319`, comment "last, so they
  see a fully patched game"), followed only by `LogConfigFingerprint()` and
  `Log("Install: done")`. `V2ModAPI.h:9` says the same ("after all built-in
  patches").
- So the plugin is loaded with a nested `LoadLibraryA` from inside V2DLL's
  `DllMain` (`V2DLL_ModLoader.cpp:66`), and `V2Mod_Init` also runs under the
  loader lock. TGCX does all its work in its own `DllMain` today, so the
  constraint is the same in kind.
- Exception: a few V2DLL patches are deferred to a `GetTickCount` IAT hook
  when their module is not yet loaded (`TryPatchLateModules`, called at
  `V2TechButton.cpp:20064` inside `Install` and again at `12777`). The
  `Direct3DCreate9` IAT hook is one of them, but `d3d9.dll` is already mapped
  at that point (TGCX 0.5.1 finds it from its own `DllMain`, log line 145),
  so in practice it is installed **before** the plugin.

### 2.3 Export, arguments and context

- V2DLL looks up `V2Mod_Init`, then `_V2Mod_Init`
  (`V2DLL_ModLoader.cpp:72-73`). Signature (`V2ModAPI.h:5`, typedef line 15):
  `extern "C" __declspec(dllexport) int __cdecl V2Mod_Init(const V2ModAPI* api)`.
  Return 1 = loaded, 0 = refused. It is called **once**.
- `V2ModAPI` version 1 (`V2ModAPI.h:19-42`, filled at
  `V2DLL_ModLoader.cpp:57-64`, a `static` that outlives the call):

  | Field | Value |
  |---|---|
  | `size`, `apiVersion` | `sizeof(V2ModAPI)`, `1`; plugins must check `size` before newer fields |
  | `gameBase` | `g_base` = `GetModuleHandleA(NULL)` (`V2TechButton.cpp:25013`), i.e. the **exe base** (the header comment says "victoria2.exe", but it is the running `v2game.exe`) |
  | `modFolder` | the absolute mod folder (static buffer) |
  | `Log` | V2DLL's `Log(fmt, ...)` into `Logs\v2dll.log` |
  | `PatchSlot(rvaVtable, slot, replacement, outOriginal)` | wraps V2DLL's `PatchSlot` (`V2TechButton.cpp:7619-7633`): unconditional write, **no expected-value check** |
  | `StealToTrampoline(rva, steal, tramp, size, expect, hook, orig, tag)` | V2DLL's detour helper; `expect` may be NULL |

- There is **no** shutdown export, no per-frame or daily callback, no D3D9
  callback and no way to ask which V2DLL patches are active. A plugin that
  needs a tick or drawing must hook them itself, as TGCX already does.

### 2.4 Missing DLL or failed load

| Case | Behaviour | Evidence |
|---|---|---|
| Setting off | nothing | `V2TechButton.cpp:25314` |
| No `-mod=`, or `.mod` unreadable | nothing; the unreadable case logs `ResolveModFolder: … ` | `4885-4918` |
| Folder path too long | logs `ModLoader: cannot resolve mod folder` | `V2DLL_ModLoader.cpp:45-50` |
| No `v2dll_mod.dll` | silent return ("normal") | `:54-55` |
| `LoadLibraryA` fails | logs the Windows error, returns | `:66-71` |
| No `V2Mod_Init` | logs "skipped"; **the DLL stays loaded and its `DllMain` has already run** | `:72-78` |
| `V2Mod_Init` throws | caught by SEH (`__try/__except`), logs "crashed"; the DLL stays loaded with whatever it patched | `:31-35`, `:80-81` |
| Returns 0 / 1 | logs "refused (returned 0)" / "ok" | `:83` |

No path calls `FreeLibrary`. A failing plugin never stops V2DLL or the game.

The comments claim V2DLL "ships an empty v2dll_mod.dll in every mod"
(`V2ModAPI.h:10`). `V2DLL_LATEST_INSTALL/` contains no such file; only
`Source/V2/V2/Release/v2dll_mod.dll` (a build output) exists in the tree. An
installer must still expect to find one already in a mod folder.

## 3. Overlap with what TGCX patches

### 3.1 What TGCX 0.5.1 writes

From `tgcx_dllmain.cpp:288-333` and the headers it includes:

| TGCX write | Kind | Where in TGCX |
|---|---|---|
| `d3d9!Direct3DCreate9` IAT slot (RVA `0x88A39C`) | IAT | `tgcx_renderer.h` `tgcx_InstallRenderer` |
| `IDirect3D9` slot 16 `CreateDevice` | VSLOT (d3d9) | `tgcx_Create9` |
| `IDirect3DDevice9` slots 16 `Reset`, 17 `Present`, 42 `EndScene` | VSLOT (d3d9) | `tgcx_HookDevice`, `tgcx_renderer.h:325-345` |
| `CPoliticsView` vtable `0xA0E458` slots 1, 2, 4 (destroy, show, hide); **requires slot 10 = `0x2D2DD0` untouched** | VSLOT | `tgcx_InstallRenderer` |
| `0x599F22` (7 B) ordered GUI draw, `0x59A520` (6 B) final engine Present | JMP | `tgcx_InstallNativeStages` |
| `0x2D52C6` pie slice CALL; slot `0xA3BDA8` pie hit-test | CALL + VSLOT | `tgcx_InstallHover` |
| `0x2DC990`, `0x2DB22D` (6 B), `0x2DB52A`, `0x2DB5E8` (7 B) | JMP | `tgcx_reforms.h` `tgcx_InstallReforms` |
| `0x506691` decision message CALL | CALL | same |
| `CBuildUnitView` vtable `0xA12A14` slots 0, 1 | VSLOT | `tgcx_templates_gui.h:326` |
| `CUnitView` vtable `0xA16850` slots 0, 8 | VSLOT | `tgcx_conform_native.h:385` |
| `0x285727` frame-pump CALL | **not patched in production** (`(void)&tgcx_PatchFramePumpCall`, `tgcx_renderer.h`), but its bytes are in the signature list | — |

Before any of that, `DllMain` checks the exe SHA-256 and then **all 140
signatures at once** (`tgcx_CheckSignatures`, `tgcx_dllmain.cpp:76-84,
312-315`): one `BAD` line means no hook at all. The 140 signatures are the
same set as `tools/check_exe.py` (generated by `tools/gen_signatures.py`).

### 3.2 What V2DLL 5.83 writes at the same places (defaults)

A scan of every hex constant in `V2TechButton.cpp`, `V2DLL_AssimilateBlock.cpp`
and `PATCHES.md` against the byte ranges of the 140 TGCX signatures (script
in the session scratchpad, not kept) found these. "Read only" means V2DLL
uses the address but does not write it.

| TGCX signature / hook | V2DLL at the same place | Default | Effect with V2DLL loaded first |
|---|---|---|---|
| `Direct3DCreate9` IAT (TGCX requires it to equal `GetProcAddress`) | `HookIat(exe,"d3d9.dll","Direct3DCreate9",…)` (`V2TechButton.cpp:13717-13726`) then `IDirect3D9` slot 16 (`13629`) | `PATCH_D3D_FPU_PRESERVE=1` | TGCX's renderer refuses (`*slot!=expected`), so bills, reforms, templates and Conform are not installed either (`tgcx_dllmain.cpp:327-328`) |
| Device `Reset` 16 / `Present` 17 | `PatchVtableSlot` on every created device (`13610-13611`) | always, once CreateDevice is hooked | chainable if TGCX hooks after V2DLL; but V2DLL latches its "original" only once (`12408-12428`, `if (orig && !*orig)`), so a second `CreateDevice` would overwrite TGCX's hook |
| Device `EndScene` 42 | not touched | — | none |
| `CPoliticsView` slot 10 (`0xA0E480`, signature "CPoliticsView tooltip slot") | `PatchSlot(VIEWS[i].rvaVtable, slot, …)` for all four views (`508`, `25072-25080`) | **unconditional** (PATCHES.md §5.1: "The slot patches themselves are unconditional") | signature `BAD` → global gate fails; `tgcx_InstallRenderer` also fails its `view[10]` check |
| `CPoliticsView` slots 1, 2, 4 | not touched | — | none |
| `0x285727` frame-pump CALL | `PatchFramePumpCall` (`2009-2029`), from `InstallPlayerButtons` | `ENABLE_MUSIC_PLAYER=1` | signature `BAD` → global gate fails |
| `0x35BB50` ApplyVolumes entry | trampoline (PATCHES.md line 384) | `ENABLE_MUSIC_PLAYER=1` | `BAD` → gate fails |
| `0x1D74BE` `mov eax,1000` | byte patch to `mov eax,1500` (PATCHES.md line 139) | `ARMY_BETTER_REINFORCE_ON_ALLIED_OWNED_LAND=1` | `BAD` → gate fails |
| `0x282EC0` OOS dialog entry | entry hook, **always installed** (PATCHES.md line 556) | `ENABLE_OOS_LOG=1` | `BAD` → gate fails |
| `0x233826` main menu version label | hook (PATCHES.md line 354) | `ENABLE_VERSION_LABEL=1` | `BAD` → gate fails |
| `0x1D77A0` eligible fleet | hook (PATCHES.md line 179) | `NAVY_ALLOW_USE_ALLY_TRANSPORTS=0` | none by default |
| `0x2DB52A`/`0x2DB5E8` (inside V2DLL's `PoliticsView_OnClick` range `0x2DB2E0-0x2DC750`, `551-552`) | `CDecision` slot 6 `MyDecisionIsValid` (`25082-25086`) checks callers' return addresses | `ENABLE_DECISION_FILTER=1` | compatible: TGCX's filters resume at `0x2DB531`/`0x2DB5EF`, so the native `call edx` still returns inside the range |
| `CUnitView` `0xA16850`, `CButtonObserverGlue` `0xA0A58C`, trampoline `0x5CD610`, `0x2DCE10`, `0x65ECC0`, `0x8ED0`, `0x6AE9AF`, `CVariables` `0x9FBB60`/`0x241BA0` | read or called only (`16969`, `557-558`, `542`, `7921-7940`, `3553`) | — | none |

No V2DLL write was found at TGCX's code-patch sites `0x599F22`, `0x59A520`,
`0x2D52C6`, `0x2DC990`, `0x2DB22D`, `0x2DB52A`, `0x2DB5E8`, `0x506691`, or at
the vtable slots `0xA0E45C/0xA0E460/0xA0E468`, `0xA3BDA8`, `0xA12A14/18`,
`0xA16850/70`. The other V2DLL vtable writes are `CBudgetView` slots 6 and 10,
`CTechnologyView` 11, `CProductionView` 10, `CDecision` 6, `CBuilding` 4,
`CUnitsStackMapIcon` 8, `CSingleUnitButtons` 12 and the topbar: none is a
TGCX slot.

**Result:** loaded after V2DLL with today's code, TGCX installs nothing.
Five default-on V2DLL patches (`0x285727`, `0x35BB50`, `0x1D74BE`,
`0x282EC0`, `0x233826`) plus the unconditional `CPoliticsView` slot 10 make
the all-or-nothing gate fail, and the `Direct3DCreate9` check would fail on
its own. None of the conflicts is a real double hook on the same bytes: the
only shared hook points are D3D9 (`Direct3DCreate9`, `CreateDevice`,
`Reset`, `Present`), which chain, and TGCX's gate checks V2DLL-owned sites
that TGCX never writes. These conflicts also existed at `5d6f894` (same
`PATCHES.md` rows, lines 82, 106, 329-331, 375), so they are not caused by
the new feature.

## 4. Licence

`git ls-tree -r --name-only origin/HEAD` lists no `LICENSE`, `COPYING` or
similar file, and `README.md` at `origin/HEAD` does not contain "licen",
"copyright" or "permission". V2DLL still has no published licence: P13 and
R8 are unchanged. A TGCX plugin build would copy `V2ModAPI.h`, which has to
carry the `// from V2DLL:` mark.

## 5. Options

### (a) Keep TGCX as its own `lua51.dll` proxy (today)

- Nothing changes in `tgcx_dllmain.cpp`, `tgcx_exports.h`, the gate,
  `install_dll.py` or `build_dll.ps1`.
- Cost: a player still cannot run TGCX and V2DLL together; TGCX's installer
  already refuses a `lua51.dll` that is neither the verified original nor a
  TGCX build (`install_dll.py` `original()` / `proxy()`), so V2DLL is never
  overwritten by accident.

### (b) Also build TGCX as `v2dll_mod.dll` (both builds from one source)

- **`tgcx_dllmain.cpp`:** move the body of `DllMain(DLL_PROCESS_ATTACH)`
  into `tgcx_Initialize(uintptr_t base, const char* origin)`. The proxy
  build calls it from `DllMain` as now. The plugin build (a define such as
  `TGCX_V2DLL_PLUGIN`) keeps `DllMain` trivial and exports
  `V2Mod_Init(const V2ModAPI*)`: check `size`/`apiVersion`, take
  `gameBase` (the same as `GetModuleHandle(NULL)`), call
  `tgcx_Initialize`, write one line through `api->Log` and return 1 only
  when the hooks went in. Keep the exe SHA-256 check and TGCX's own
  `tgcx_ReplacePointer` (compare-and-swap), not `api->PatchSlot`, which does
  not check the expected value. Add `V2ModAPI.h` marked `// from V2DLL`.
- **`tgcx_exports.h`:** not included in the plugin build. The 128 Lua
  forwards belong to whoever owns `lua51.dll`, here V2DLL.
- **Signature gate:** the global all-or-nothing check over 140 signatures
  must become per mechanic (the per-mechanic `tgcx_RequireSignatures` lists
  already exist). The six V2DLL-owned sites in §3.2 (`0x285727`,
  `0x35BB50`, `0x1D74BE`, `0x282EC0`, `0x233826`, `0xA0E480`; `0x1D77A0` if
  enabled) leave the plugin's gate, or accept either the original bytes or
  V2DLL's documented patched form. `tgcx_InstallRenderer` must accept the
  `Direct3DCreate9` IAT slot when it points into V2DLL's module and chain
  through it, and must stop requiring `CPoliticsView` slot 10 to be native
  (TGCX never writes it). P27's "keep native tooltip slot 10 untouched"
  still holds: TGCX keeps leaving it alone, it just stops asserting the
  native value.
- **`tools/build_dll.ps1`:** a second MSBuild run (a new `tgcx.vcxproj`
  configuration with the define and `TargetName=v2dll_mod`), output e.g.
  `dll/tgcx/ReleasePlugin/v2dll_mod.dll`; `tools/test_dll.ps1` and the
  fixtures need a plugin pass with V2DLL's sites pre-patched.
- **`tools/install_dll.py`:** a separate mode (e.g. `--v2dll`): detect
  V2DLL (a non-original, non-TGCX `lua51.dll` plus `v2dll_settings.ini` with
  `LOAD_DLL_FROM_MOD_FOLDER` not 0), never touch `lua51.dll`, check the
  plugin exports `V2Mod_Init` and none of the Lua names, copy it to
  `mod\TGCX\v2dll_mod.dll` (keeping any file already there, as V2DLL says
  mods may ship an empty one) with its own state record and rollback, and
  **refuse** when the first `-mod=` resolves to TGC's folder (R1). It must
  also refuse to leave both a TGCX proxy and V2DLL in place.
  `tools/install_submod.py --remove` must not delete the plugin silently.
- Risks: V2DLL changes at its own pace (API v1, documented one day ago);
  V2DLL's 5.83 defaults change the game (combat rolls, reinforcement, AI,
  economy, MP fingerprint), so TGCX would be tested on a different game; the
  device-hook latch in §3.2; and every TGCX release then needs two in-game
  checks.

### (c) Switch to `v2dll_mod.dll` only

- Same code changes as (b), and then `tgcx_exports.h` and the `lua51.dll`
  install path are dropped (`install_dll.py` keeps only `--remove` for
  existing proxy installs; `build_dll.ps1` builds only the plugin).
- Cost: TGCX's DLL features would need V2DLL installed with its defaults
  active (65 keys set to 1 in the shipped `v2dll_settings.ini`, counted with
  `grep -c "^[A-Z_]*=1"`; 47 of the 58 option rows in `PATCHES.md` §2 are on). R6 still holds (the script works without any DLL), but a
  TGCX player without V2DLL would lose every DLL feature, and the
  folder-resolution question in §2.1 decides whether it can be installed at
  all without touching TGC.

## 6. Recommendation ([user] decision, R9)

**Recommend (a) now**, with (b) as a later card only if the user wants to
play with V2DLL. Reasons, from the evidence above:

1. The slot gives a plugin nothing TGCX lacks: no tick, no draw callback, a
   `PatchSlot` without an expected-value check. TGCX already has guarded
   equivalents of all of these.
2. (b) is not a drop-in: the global gate, the renderer's IAT check and the
   slot-10 check all have to change, which reworks the guard model that the
   accepted 0.2.x-0.5.x builds rely on.
3. Where the plugin would live is not settled (§2.1). If the launcher names
   TGC first, the only working location is inside TGC's folder (R1).
4. (c) ties TGCX to a moving, unlicensed third-party DLL and to its default
   gameplay changes.

If the user picks (b), its first step is the read-only command line check in
§2.1, then splitting the gate per mechanic (which is useful on its own: one
moved byte would stop disabling every mechanic).

A short answer for the Reddit thread, if the user wants one: "Not yet: TGCX
has its own lua51.dll proxy and was written before LOAD_DLL_FROM_MOD_FOLDER.
Building it as v2dll_mod.dll is possible but needs our signature checks to
tolerate V2DLL's own patches (music player, OOS hook, Politics tooltip slot,
Direct3DCreate9); we may do it later."

## 7. Addendum (2026-10-18, later): the shape chosen for (b)

The user chose (a) now and (b) after MOD-1 (D16). The same day maxioten
suggested shipping the logic as one DLL that V2DLL's own `lua51.dll` loads
when a setting enables it. The user agreed. The shape for (b) is:

- **`tgcx.dll`, the logic**, built from the one translation unit there
  already is (`tgcx_dllmain.cpp` includes every header; the project compiles
  only that file).
- **Two thin loaders.** Our `lua51.dll` proxy (Lua forwards plus a
  `LoadLibrary` of `tgcx.dll`) for players without V2DLL. For players with
  V2DLL, V2DLL loads `tgcx.dll`, either through its `v2dll_mod.dll` slot
  or through a setting. Either way: one logic build and one set of game
  checks.

**What MOD-0 run 1 settled:** the launcher passes
`-mod=mod/TGC_v2.5.2.mod -mod=mod/TGCX.mod` (recorded with
`Win32_Process`). The dependency comes first, so the §2.1 slot would look
in TGC's folder (R1). V2DLL upstream re-checked at `de66ee61` (2026-10-18
19:04 +0300): the loader is unchanged (that commit adds only decompilation
notes). So TGCX needs V2DLL to load it in one of two ways:

1. **By setting** (maxioten's suggestion): a path or name in
   `v2dll_settings.ini`, the DLL next to the game.
2. **By searching every `-mod=`** for `v2dll_mod.dll`, the last mod first.

Either still needs MOD-1: per-mechanic gates that accept V2DLL's
documented patches (§3.2), and D3D chaining through V2DLL's
`Direct3DCreate9`/`CreateDevice` hooks.
