# DLL-1 — Renderer, cadence and Politics visibility

2026-10-12. **0.2.4 installed on E:, done, not tested in game.**
0.2.3 displayed and remained stable, but failed UI layering acceptance.

1. Read AGENTS R1-R10, `report-dll-12-layering-fix-1012.md`,
   `symbols.md` and `../mockups/1-politics.png`. Route A now draws within
   the native ordered GUI pass, after the named upper-house overlay.
2. Run `python tools/check_exe.py` (23 signatures) and TGC v2.5.2 scan.
   Keep name/vector/vtable guards and byte checks before new addresses.
3. Preserve original entity Draw calls and their ABI. No extra scene
   around the ordered callback; capture/restore D3D, CPU and LastError.
   Final Present samples/logs only. Leave native tooltip slot 10 untouched.
4. Only if changes are required, run `tools/build_dll.ps1` and
   `tools/test_dll.ps1`. Tests include real GPU occlusion after the chart,
   native thunk state, malformed widgets, paused sampling and Reset.
5. With the game closed, install reversibly using `tools/install_dll.py`
   on E:. 0.2.4 is already installed; no replacement is needed now.
6. Run the single `instructions-u-5.md` acceptance batch. Collect current
   log/errors/screenshots; mark tested only on actual game evidence.
   Record new results in a new report, preserving previous reports.
