# Archived 2026-10-12: before functional acceptance and hover handoff

# HEMI-2 — Accept the installed polish build

2026-10-12. **0.2.5 installed; live drawing observed, user acceptance pending.**
Read AGENTS R1-R10, `report-hemi-2-build-1012.md`, `report-u-5-1012.md`,
`symbols.md`, technical-plan §4 and Main (`../mockups/1-politics.png`).

1. Use the single user run in `instructions-u-5.md`; do not rebuild or
   reinstall simply to begin acceptance. The active SHA is in NEXT.
2. Preserve `E:\Victoria.II.v3.04.Inclu.ALL.DLC\Logs\tgcx.log` under a unique
   new filename in `E:\v2re\logs`. Check 0.2.5 startup, all guards, chart draws,
   samples, show/hide and actual faults. Preserve prior evidence.
3. Inspect TGC252_TGCX error/system_error logs. Count only observed checks
   as passed; request missing outcomes without repeating the whole run.
4. Compare the user's fresh screenshot with Main side by side. Assess dots,
   bloc sweep and feathered background; document legend/pie-hover differences.
5. If a problem is confirmed, use bounded read-only diagnostics and existing
   RE git/private exports. Preserve byte/RVA guards, native tooltip slot 10,
   ordered Draw ABI, CPU/D3D/LastError restoration and fallback pie. Consolidate
   fixes before another build; do not guess tooltip returns (P27).
6. For necessary code changes run check_exe/TGC scan, build_dll/test_dll and
   relevant real GPU checks. Build first, then install reversibly with game
   closed. No TGC file/art enters git; GUI changes require a generator.
7. Write a new immutable acceptance/fix report. Update statuses, archive
   NEXT, rewrite it and next-card instructions. No new mechanic selected.

Live startup observation (2026-10-12): `report-hemi-2-startup-1012.md`; screenshot and remaining U-5 checks pending.
