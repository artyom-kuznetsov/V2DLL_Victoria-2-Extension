# Archived 2026-10-12: before HEMI-2 build/install

# HEMI-2 — Polish the working hemicycle

2026-10-12. **Queued, not implemented.** User feedback: 0.2.4 works but
still looks clunky. This is refinement of HEMI-1, not a new mechanic.
Reference: AGENTS R1-R10, `report-u-5-1012.md`, `symbols.md`,
`technical-plan.md` §4 and `../mockups/1-politics.png` (Main).

1. Open Main and inspect a current game capture side by side. List concrete
   differences first; the user has not specified a particular design defect.
   Retain 100 seats/seven rows, UK 83/5/12 reference allocation and native
   Politics layout. Do not redesign the interface around a new aesthetic.
2. Review `../dll/tgcx/tgcx_renderer.h`: allocation/geometry, plain background
   cover, native overlay identity and ordered callback. Preserve all guards,
   engine-name mapping, CPU/D3D restoration, fallback pie and view lifetime.
3. Prioritize integration of the background and seat spacing/size/edges
   with Main. Assess whether native background can show through by safely
   replacing only the named pie/decorative overlay render operations.
   Any new hook needs bounded engine evidence, proven ABI, RVA/bytes in
   check_exe and updated symbols; do not guess a virtual return structure.
4. Keep native tooltips intact. Native legend sorting and per-seat hover
   are known differences; assess their cost and document deferral if they
   need more subsystem work. Do not revive the unsafe tooltip-suppression
   hook or add a second tooltip over the native one (P27/P28).
5. Do not copy TGC files/art into git. If a GUI override is justified, generate
   it from installed v2.5.2 by named anchors (R3) and retain no-DLL behavior.
   Read scripting-reference/tgc-howto plus a TGC example before script work.
6. Consolidate feasible visual changes into one build. Run reference/TGC
   gates and relevant native/GPU state/occlusion/fallback tests. Change
   tests only to cover real visual/rendering risks; no tests for prose edits.
7. Prepare the build before requesting normal game exit; install reversibly
   after exit and keep originals/backups. Only the user launches the game.
8. Use one combined game run: new screenshot/mockup comparison, overlapping
   tooltip/popup, switch/reopen, date advancement, save/reload and Alt-Tab
   from `instructions-u-5.md`. Preserve logs/errors; fix confirmed issues
   together before another replacement. Multiplayer remains deferred (D5).
9. Write a new dated polish report with all remaining deviations/reasons
   and precise acceptance evidence. If the mechanic changes, update the
   mockup in the same session (R10). Archive NEXT/update status/instructions;
   never rewrite earlier reports. No new mechanic is automatically started.
