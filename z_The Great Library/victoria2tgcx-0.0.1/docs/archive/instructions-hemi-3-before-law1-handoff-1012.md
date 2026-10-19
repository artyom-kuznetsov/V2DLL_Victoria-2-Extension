# HEMI-3 - Header seam correction acceptance

2026-10-12. **0.2.6 native seat hover accepted in game. 0.2.8 aligns the
cover with the first background row below the native header border; built, checked and installed on E:,
not tested in game.** Read `report-hemi-3-seam-1012.md`, Main and P27-P32.
Previous instructions are archived in
`archive/instructions-hemi-3-before-seam-fix-1012.md`.

1. Keep accepted 0.2.6 in `E:\v2re\logs\tgcx-before-027-1012` intact.
   No rebuild/reinstall needed before the next check.
2. Only the user launches TGC v2.5.2 + TGCX. Open Politics and confirm
   the cover meets the bottom border with no seam or overlap. The actual
   border ends at root y=100; the cover starts at y=101. Check the
   legend and reform row too.
3. Confirm seat hover still works on the UK yellow/blue/dark blocs.
   Seats and hit geometry did not move. Use `instructions-u-5.md` for
   remaining integration coverage in the same run if convenient.
4. Preserve the runtime log before restart; check 0.2.8, 27 guards,
   ordered draws, hover mappings and active errors. Compare the new
   screenshot with Main and record the actual observed outcome.
5. If overlap remains, preserve evidence and inspect actual native bounds;
   do not move seats or change structured tooltip slot 10 to hide it.
   Run executable/TGC/native/GPU/installer gates for any new correction;
   install only with the game closed.
6. Write a new immutable report, archive/rewrite NEXT and update statuses.
   Do not infer extended U-5 passes from general functional approval.
   LAW-1 discussion follows; no law expansion selected in this card.

No mechanic changed. Beige generated background and native legend order
remain recorded deviations; the header boundary should now match Main.
