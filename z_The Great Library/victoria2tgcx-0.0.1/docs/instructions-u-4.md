# U-4 — Test DLL-0 with TGC v2.5.2

Written 2026-10-12. **U-4 passed** on 2026-10-12; evidence and limitations
are in `docs/report-u-4-1012.md`. These steps remain the repeatable test
protocol. DLL-0 is tested in game; full ideology mapping and repeated
sampling cadence remain separate follow-up work.

## 1. Install with the game closed

From `C:\Users\JC\Downloads\victoria2template`:

```powershell
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --dry-run
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC
```

Expected: gates OK, then proxy installed and the original retained as
`lua51_real.dll`. `lua5.1.dll` is also required: the original 11,264-byte
DLL forwards to it. The installer checks the reference executable hash,
the original DLL hash and size, our 128 forwarding exports, and that
`v2game.exe` is closed. It refuses an existing foreign proxy or backup.

## 2. Check the main menu

1. Start the launcher and choose **TGC v2.5.2 (stable)** and **TGCX**.
2. Reach the main menu and wait at least 10 seconds before loading a game.
3. Inspect `E:\Victoria.II.v3.04.Inclu.ALL.DLC\Logs\tgcx.log` while the
   game is open. It should contain the version/base, `OK sha256`, all
   eight `OK RVA` signatures, and `Tick hook installed` with both
   housekeeping flags equal to 1. There should be no upper-house sample
   at the main menu.
4. If the game crashes, hangs, or logs `BAD`, close it and use step 5.

The log is replaced on each process start. Preserve useful logs before
restarting; copy them outside git, for example into `E:\v2re\logs\`.

## 3. Check the upper house

1. Start an 1836 United Kingdom game.
2. Open Politics and record the **upper-house** pie chart percentages.
   The voters' and people's ideology charts are separate.
3. Wait at least 10 real seconds, then let a few game days pass and wait
   another 10 real seconds. Pausing is allowed: sampling uses real time.
4. Save and load, then wait another 10 real seconds. Return to the main
   menu if convenient and check that samples stop there.
5. Provide `Logs\tgcx.log`, the pie-chart percentages (or a screenshot),
   and whether new game-log errors or startup problems appeared.

Each sample shows the date, player/country tags and indices, the human
vector cross-check, nine raw shares, their hexadecimal values, fractions,
percentages, and the sum. `candidate=` is the **unconfirmed file-order
mapping**; it is not proof of the runtime index order. The ideal sum is
`sum_raw=32768`, `sum_fraction=1.000000`; small fixed-point rounding
differences must be examined rather than assumed to be a bug. An
out-of-range share is logged as raw data for diagnosis.

## 4. Agent comparison and completion gate

1. Match nonzero raw indices to the displayed percentages, allowing
   truncation and the game's own rounding. Our percentages use integer
   arithmetic and two decimals.
2. Check that player tags/indices agree and examine `human_marker`.
3. Record evidence in a **new** dated U-4 report; do not rewrite the
   DLL-0 implementation report. Update `docs/symbols.md` only for facts
   actually confirmed. A single 1836 chart cannot establish every
   zero-valued ideology's order or the allocation length.
4. Only after startup, main-menu behavior and the real chart comparison
   pass, mark DLL-0 tested and GH-2 confirmed to the extent supported by
   the evidence. Multiplayer remains deferred (D5).
5. If U-4 fails, repair DLL-0 and repeat this checklist before DLL-1.

## 5. Remove with the game closed

```powershell
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC --remove
```

Expected: original restored as `lua51.dll`; the proxy retained as
`lua51_tgcx.dll.off` (or a numbered variant), and the installation record
retained as `tgcx_dll_install.json.off`. Nothing is deleted. If removal
refuses because the installed bytes differ from its record, retain the
files and report the error before making further changes.

## Optional rebuild and automatic verification

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File tools/build_dll.ps1
powershell -NoProfile -ExecutionPolicy Bypass -File tools/test_dll.ps1
python tools/check_exe.py
python tools/tgc_scan.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC_v2.5.2\TGC
```

The automatic fixtures do not run the game and cannot replace this card.
