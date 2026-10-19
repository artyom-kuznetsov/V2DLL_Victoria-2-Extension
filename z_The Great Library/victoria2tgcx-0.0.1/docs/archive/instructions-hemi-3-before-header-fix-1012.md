# HEMI-3 - Native seat hover acceptance

2026-10-12. **0.2.6 implemented, built, checked and installed on E:;
done, not tested in game.** Read `report-hemi-3-1012.md`, the HEMI-2 handoff,
`symbols.md` (HEMI-3 scalar path), P27-P31 and Main. Previous implementation
instructions are preserved verbatim in `archive/instructions-hemi-3-before-hemi3-build-1012.md`.

1. Preserve installed 0.2.6 and the accepted 0.2.5 backup. No rebuild is
   needed before the first acceptance run. Only the user starts the game.
2. Follow `instructions-u-5.md` for one combined hover and integration run.
3. Preserve its log under a unique name in `E:\v2re\logs` before restart.
   Check version/hash, 27 guards, native scalar-hook installation, ordered
   draws, ideology/index/slice hover lines, lifecycle and active error logs.
4. Compare a fresh Politics screenshot with Main. Record actual native
   tooltip ideology/text over each present bloc and left/right end seats;
   gaps/hole, legend, overlapping menus and other chart tooltips matter too.
5. If a failure occurs, use bounded, read-only evidence first. Preserve
   crash dumps, if any. The native bounds callback takes eight stack words
   and returns ST0 with RET 32; the scalar slice helper takes EAX entity,
   four stack words, AL result, RET 16. Never replace structured slot 10.
   Re-run executable/TGC/native/GPU/installer gates for any correction and
   install only with game closed. Keep one consolidated correction.
6. Write a new immutable report distinguishing in-game acceptance from
   automated fixtures. Update/archive NEXT, ROADMAP and card statuses.
   LAW-1 discussion follows acceptance; no law expansion during this card.

The mechanic/layout did not change, so existing Main remains the spec.
Existing background/native-legend-order deviations are in the report.
