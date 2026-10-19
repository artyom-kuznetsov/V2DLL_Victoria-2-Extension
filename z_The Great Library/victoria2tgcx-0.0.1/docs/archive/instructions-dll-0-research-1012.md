# Archived DLL-0 research instructions — 2026-10-12

Superseded by the implementation handoff and dedicated U-4 checklist.
Original text follows verbatim.

---

# DLL-0 — Our own `lua51.dll` proxy that only logs

> Step-by-step instructions (written 2026-10-12). Decision D6: our own DLL,
> allowed to use V2DLL code (marked, R8). Single player first (D5). Rules:
> `AGENTS.md` R1, R2, R5, R6, R7; P7, P8, P17.

**Why:** every mechanic script cannot reach goes through the DLL. DLL-0
builds the minimal skeleton **and confirms GH-2 at run time**: the log
writes the player country's upper house read from `CCountry+0x8B0`, to
compare it with the pie chart in the politics window.

**Does not touch:** `submod\`. Installs nothing in the game unless the user
asked for it in that session (the installer is left ready; U-4 runs it).

---

## Step 1 — Project

`dll\tgcx\` with a Visual Studio 2022 project, **Win32**, toolset `v143`
(P17), `/MT` (no dependency on the installed runtime), output `lua51.dll`.

From V2DLL's code (`E:\v2re\refs\V2DLL\Source\V2\V2\`) you may take, marking
each piece with `// from V2DLL: <file>` (R8):

- `lua51_exports.h` and the mechanism that forwards the exports to
  `lua51_real.dll`;
- the patch installer with expected bytes (`InstallExePatches`) and the
  idea of `PatchSlot`;
- MinHook (`minhook\`, its own BSD licence: copy its `LICENSE.txt` next to
  it).

Nothing else from V2DLL (its economy patches, music, etc.) is brought in.

## Step 2 — What it does on load

1. `DllMain(PROCESS_ATTACH)`: load `lua51_real.dll`, resolve the exports,
   open `Logs\tgcx.log` (next to `v2game.exe`).
2. Log: the DLL version, `g_base = GetModuleHandle(NULL)`, and the result
   of **the same signatures as `tools/check_exe.py`** (one shared table:
   generate `dll\tgcx\signatures.h` from `check_exe.py` with a script, so
   they never diverge). If any fails: log it and **install nothing else**
   (R6).
3. No threads that read the game state in parallel.

## Step 3 — The tick and reading the upper house

Hook the per-frame call to the message pump (the `CALL` site at RVA
`0x285727` → `FUN_009DF2B0`, RVA `0x5DF2B0`; it is the `FramePumpThunk` of
`PLAYER_BUTTONS` in V2DLL, `PATCHES.md` §5.9 — copy its shape, marked). In
that tick, **once every 10 real seconds**:

1. The player's country: `g_world` (`0x012588E8`), vector of humans at
   `+0xAEC/+0xAF0` (the repo's `structs.csv`: a non-null entry = human;
   marked **[I]**, inferred: it is the first thing the log has to confirm).
2. `CCountry* = countries[idx]` with `g_countryManager` (`0x012587E4`,
   `+4`).
3. `uh = (char*)country + 0x8B0`; `arr = *(int64**)(uh + 0x10)`.
4. Write a log line with the game date (`g_world+0xB0C`, in hours) and the
   first 12 entries of `arr` as a fraction (`v / 32768.0`) and as hex, plus
   the sum.
5. Everything inside `__try/__except`: a null pointer in the main menu must
   not crash the game. Outside a game, write nothing.

## Step 4 — Reversible installer

`tools/install_dll.py <game folder>`: renames `lua51.dll` to
`lua51_real.dll` **only if** `lua51_real.dll` does not exist yet, and copies
ours. `--remove`: renames ours to `lua51_tgcx.dll.off` (never delete) and
restores the original name. It first checks the size of the original
`lua51.dll` (11 264 bytes in the user's install) so as not to rename a DLL
that is already a proxy (V2DLL's, for example).

## Step 5 — U-4: the user tests it

1. `python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC`.
2. Start with TGC v2.5.2, an 1836 game with the United Kingdom.
3. Open the politics window and note the percentages of the upper-house
   pie chart. Let a few days pass.
4. Send `Logs\tgcx.log`.
5. `python tools/install_dll.py --remove …` if something failed.

## Step 6 — Compare

The log's values must match the pie chart (rounding aside) and sum to 1.0.
With that, `docs/symbols.md` moves the upper house from **C/I** to **R**,
and the array's length and its order relative to `common\ideologies.txt`
are recorded.

---

## Gate (done when)

1. Builds in Release/Win32 with no new warnings.
2. With the game **without** a game loaded (main menu) the log contains
   only the load and the signatures.
3. U-4: the in-game log matches the pie chart → GH-2 confirmed.

## Delivery

Report `docs/report-dll-0-MMDD.md`: layout, what came from V2DLL (a list),
the U-4 log and the comparison with the pie chart.

---

## Handoff (2026-10-12, first session on the card)

Nothing built yet. What was established, so the next session starts coding:

- **Toolchain:** VS 2022 Community 17.13.6 (`C:\Program Files\Microsoft
  Visual Studio\2022\Community`) and Build Tools 2019 16.11.47 (vswhere).
  The original `lua51.dll` in `E:\Victoria.II.v3.04.Inclu.ALL.DLC` is
  11 264 bytes (2013-05-29): step 4's size check holds.
- **Export forwarding needs no code:** V2DLL's `lua51_exports.h` (134 lines,
  `#pragma comment(linker, "/export:X=lua51_real.X,@n")`) makes the loader
  load `lua51_real.dll` by itself. Step 2.1's "load and resolve" reduces to
  copying this header (marked R8). Check its ordinals against the original
  with `dumpbin /exports` before trusting it.
- **No MinHook in DLL-0:** the tick hook is a rel32 retarget of one `CALL`,
  as V2DLL's `PatchFramePumpCall` (`V2TechButton.cpp` ~1890) and
  `FramePumpThunk` (~1556: `pushad; call OnFramePump; popad; jmp [orig]`).
  The site is now in `tools/check_exe.py` (RVA `0x285727`, `E8 84 9B 35
  00`, verified on the reference exe): ALL OK expected.
- **Do not copy V2DLL's `PinFpu()`** (it sets the FPU precision and
  flush-to-zero for the whole game: a simulation change, R5). Print the
  shares with integer math (`v * 10000 / 32768`), no floating point.
- **Offsets for step 3** (`Symbols/structs.csv`, all **C**): `g_world` and
  `g_countryManager` are **pointers** (`*(char**)(base + 0xE588E8)`,
  `*(char**)(base + 0xE587E4)`); World `+0xB60` player index and `+0xB5C`
  player tag are simpler than the humans vector `+0xAEC/+0xAF0` (log both
  and cross-check); CCountry `+0x1C` tag, `+0x20` index; date `+0xB0C` in
  hours: year = hours / 8760 − 5000, 365-day years.
- **Logs folder:** V2DLL writes `<exe folder>\Logs\` (`InitLogDir`, ~280);
  use the same, file `tgcx.log`.
- **Still to do, in order:** `tools/gen_signatures.py` (→
  `dll\tgcx\signatures.h` from `check_exe.SIGNATURES`), the vcxproj (Win32,
  v143, /MT, `lua51.dll`), `dllmain.cpp` (log, signatures, call patch,
  10-second upper-house line inside `__try`), `tools/install_dll.py`, build,
  then U-4.

