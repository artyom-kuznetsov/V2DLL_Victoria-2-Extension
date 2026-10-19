# V2D-1 report: TGCX loaded by V2DLL in game (MOD-1 step B), passed

2026-10-18. Card V2D-1 (`instructions-v2d-1.md`), run by the user on E: the
same day. **Passed.** E: is back on 0.7.0 with our own loader.

## 1. Setup (§4.1)

- **Backup:** `E:\v2re\logs\tgcx-v2d1-1018\before-v2d1\`.
- **Removed:** our DLLs, with `install_dll.py --remove`.
- **Installed:** V2DLL upstream `de66ee61` (`V2DLL_LATEST_INSTALL`):
  - `lua51.dll` `0234d896…`;
  - `lua51_real.dll`, identical to the game's original `b2ba1934…`;
  - `eventmusic.dll`, `v2dll_settings.ini` (`LOAD_DLL_FROM_MOD_FOLDER=1`),
    `watch\music.txt`.
- **Plugin:** `tgcx.dll` 0.7.0 (`ec9ed8b9…`) copied as
  `mod\TGCX\v2dll_mod.dll`.
- **Launch:** started with `launch.ps1`, which runs
  `-mod=mod/TGCX.mod -mod=mod/TGC_v2.5.2.mod`. TGCX is first, so V2DLL
  looks in TGCX's folder.

## 2. Evidence (logs copied to `…\tgcx-v2d1-1018\v2dll-run\Logs\`)

The user played England and said "everything works ok".

`v2dll.log`:

- line 142 `ModLoader: E:\…\mod\TGCX\v2dll_mod.dll -> ok`;
- line 235 `Install: done`;
- no `v2dll_crash.log`.

`tgcx.log`:

- `loaded_by=V2DLL plugin API v1`, exactly once. `OK sha256`.
- 146 `OK` and 7 `FOREIGN`. The seven are exactly V2DLL's site list:
  - `0x1D74BE`, `0x282EC0`, `0x35BB50`, `0x1D77A0`, `0x233826`,
    `0x285727`;
  - `0xA0E480` (slot 10).
- No `BAD`. MOD-1's design is confirmed: without per-module gates, 0.6.5
  would have installed nothing.
- `Direct3DCreate9 already hooked by …\lua51.dll; chaining`. V2DLL hooked
  first; TGCX chained through it.
- `CPoliticsView slot 10 is not native (FOREIGN); left alone`.
- `Module gate drawing+laws: signatures OK`. Then
  `Modules: drawing+laws=1 templates=1 conform=1`, and one D3D9 device table
  hooked.
- In play:
  - hemicycle drawn;
  - Reforms tab offered rows and presented a bill;
  - 11 monthly favour collections, about 11 months;
  - Templates: 9 and then 1 regiments queued, none left out;
  - Conform: 3 runs, 0 failed;
  - unit-panel slots freed (P47 path).
- No `rejected`, `disabled`, fault or `table full` line.

Side finding for MOD-0: with TGCX **first** on the command line, TGCX's
script still worked (its decisions ran and the bill was presented). TGC's
`replace_path` therefore did not hide it in this order, which narrows P19.
Settings stayed in `TGC252_TGCX` (`Templates local file` line).

## 3. Restore (§4.4)

- V2DLL's files and `v2dll_mod.dll` were moved to
  `…\tgcx-v2d1-1018\v2dll-run\`; nothing was deleted.
- The original `lua51.dll` was restored (`b2ba1934…`), then 0.7.0 was
  reinstalled from `stage-070`.
- `lua51.dll`, `lua51_real.dll` and `tgcx.dll` are byte-identical to
  `before-v2d1` (`cmp`). No V2DLL file is left in the game folder or in
  `mod\TGCX`.
- Found later by the MOD-0 baseline re-check: V2DLL had also written
  `mod\TGCX\common\defines_v2dll.txt`. It was moved to `v2dll-run\`, and
  `mod\` matches the MOD-0 baseline again (P48).
- V2DLL's own logs are still in the game's `Logs\` folder. Among them,
  `v2dll_state.log` is 307 MB. They are V2DLL's files and were left in place;
  delete them if you like.

## 4. What is left (D16)

- In a normal launch, V2DLL still cannot load TGCX. It reads only the first
  `-mod=`, which is TGC's. Ask V2DLL's author for one of:
  - a setting that names the plugin path;
  - searching every `-mod=`, last first.
- Coexistence itself is proven. With V2DLL installed, TGCX needs only the
  loading route.
