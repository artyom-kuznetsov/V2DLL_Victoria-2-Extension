# DLL-1 — Renderer, cadence and Politics visibility

2026-10-12. **0.2.0 failed U-5; 0.2.2 installed, not tested in game**, combined with HEMI-1 at the
user's request. The earlier rectangle-only instructions are preserved
verbatim in `archive/instructions-dll-1-rectangle-1012.md`.

Implementation/evidence: `report-dll-12-live-fix-1012.md` and `report-dll-12-1012.md`; code:
`../dll/tgcx/tgcx_renderer.h`. The actual hemicycle is installed; the next
action is the single test in `instructions-u-5.md`, not another rectangle.

## Rebuild and review, only when changes are needed

1. Read AGENTS R1-R10, the combined report and `symbols.md`; open
   `../mockups/1-politics.png`. Keep interface route A.
2. Run `python tools/check_exe.py` (nineteen signatures) and the installed
   TGC v2.5.2 scan. Add guards/evidence before any new executable site.
3. Preserve CPU/LastError and renderer state; keep COM originals and
   compare-and-swap guards. No simulation writes or worker polling.
4. Run `tools/build_dll.ps1` and `tools/test_dll.ps1`. Tests exercise
   actual D3D9 in an invisible owned window, not Victoria II.
5. With the game closed, run the reversible `tools/install_dll.py` on E:.
   Keep previous proxy/original files; do not overwrite a foreign DLL.
6. Hand off one combined U-5 test, collect evidence, and mark tested only
   when the user's game and logs establish it. Record failures and
   mockup differences in a new report; do not rewrite dated reports.
