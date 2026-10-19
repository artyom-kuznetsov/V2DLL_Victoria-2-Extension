# DLL-2 — User alias for HEMI-1

2026-10-12. **0.2.4 working prototype, tested in game on E:.**
Functional checkpoint: `report-u-5-1012.md`. HEMI-2 0.2.5 is now
working in game, confirmed by the user (`report-hemi-2-handoff-1012.md`).
HEMI-3 0.2.6 hover is now accepted in game. 0.2.7 clips its cover below
the Upper House header; installed, visual confirmation pending. See
`report-hemi-3-header-1012.md` and `instructions-u-5.md`.
Extended U-5 checks remain unconfirmed. No immediate rebuild needed.

1. Compare `../mockups/1-politics.png` with the game's upper-house panel;
   read `report-dll-12-layering-fix-1012.md` and `symbols.md`.
2. Preserve 100 seats/seven rows, bounded engine name/index/colour lookup,
   integer largest-remainder allocation and quantized totals (32767 valid).
3. Draw after `chart_upper_house_overlay` in native GUI order. Rejected
   guards retain the pie; all native entity draws still run unchanged.
4. Retain the native percentage legend/ideology tooltip. Do not restore
   the duplicate overlay label or guessed single-string return hook (P27).
   Native pie hit regions are not individual seat targets; list this
   limitation and the panel/legend-order mockup deviations in reports.
5. Rebuild/test/install only if required using `instructions-dll-1.md`.
6. Hover follow-up is `instructions-hemi-3.md`; consolidate remaining
   U-5 checks with that build. HEMI-1 already works in game; do not launch
   a separate acceptance cycle or start an unrelated mechanic.
