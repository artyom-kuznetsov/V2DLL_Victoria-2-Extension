# HEMI-3 — Match chart hover to rendered ideology

2026-10-12. **Queued, not implemented.** User confirms 0.2.5 works but
its tooltips do not correlate with the new chart. Read AGENTS R1-R10,
`report-hemi-2-handoff-1012.md`, `symbols.md`, P27-P30, technical-plan §4,
Main (`../mockups/1-politics.png`) and the saved user PNG outside git.

1. Establish baseline: installed 0.2.5, 100 seats/seven rows, UK 83/5/12.
   Inspect renderer SeatGeometry/seating_order and native chart/legend
   ownership. Drawing changes did not remap the original pie's hover.
2. Run check_exe before using addresses. Consult the local Victoria II RE
   git and prior private Ghidra exports. Decompile only the relevant hover/
   tooltip subsystem. Record calling conventions, structured output,
   ownership/lifetime, cursor coordinate space and null/no-hover behavior.
3. Use shared rendered geometry/apportionment to identify the actual seat
   under the cursor. Confirm screen/window coordinates and boundaries from
   engine evidence; avoid two independent geometries that can drift.
4. Integrate with a verified native tooltip path scoped to this chart.
   Preserve native legend and tooltip text/ideology identity. No guessed
   single-string result, partial structured return, blanket tooltip
   suppression or second label drawn above native windows (P27/P28).
5. Keep read-only behavior, expected-byte/RVA/view/entity/vector guards,
   original ABI, CPU/D3D/LastError restoration, layering and fallback pie.
   Add new addresses only with signatures/evidence in symbols/check_exe.
   Reject unsupported cases safely. If native ownership is not proven,
   document the remaining evidence gap instead of shipping an unsafe hook.
6. Match Main's existing chart interface. Tooltip alignment is repair of
   existing behavior, not a new mechanic. Record deviations; mechanic changes
   require mockup updates. No TGC art/files in git; GUI overrides need a
   named-anchor generator and no-DLL fallback.
7. Verify meaningful hover cases: each present ideology, edge/gap/outside
   positions, changed shares/zero-seat blocs, hidden/reopened Politics,
   malformed snapshot/view rejection, native legend unchanged and no duplicate
   popup. Keep native/GPU state/occlusion/Reset checks. Run build_dll/test_dll,
   check_exe and TGC v2.5.2 scan; preserve the successful logs.
8. Consolidate changes into one build. Prepare it before any normal-exit
   request, install reversibly only with game closed, and retain backups.
   Only the user launches the game. Combine hover/legend/menu-overlap checks
   with remaining U-5 view/reload/date/Alt-Tab coverage.
9. Write a new report with precise user/screenshot/log evidence. Keep old
   reports immutable; archive/rewrite NEXT, next-card instructions and statuses.
   Do not start another mechanic or request repeated startup tests by default.
