# LAW-1 - Full catalogue and native support reconciliation

2026-10-12. Selected by the user after accepting HEMI-3 0.2.8.
**In progress, preview only; not installed or tested in game.** Read
AGENTS.md R3-R6/R9-R10, `law-design.md`, `scripting-reference.md`,
`tgc-howto.md`, `report-law-1-start-1012.md` and
`report-law-1-tgc-support-1012.md`. NEXT.md controls the next work.

1. Preserve accepted 0.2.8 and the installed LAW-0 baseline. Do not start
   or terminate the game. No DLL change is needed for catalogue generation.
2. **The user approved TGC starting votes + affinity bargaining.** Implement
   that formula; do not ask for approval again. TGC conditional support
   supplies starting votes; affinity controls prices and promised laws.
   The current code uses affinity-only votes; its passing tests do not
   establish native parity. Do not install it as the approved dynamic model.
3. For native support, inspect installed TGC `common/ideologies.txt` and
   `common/issues.txt` first. Confirm modifier arithmetic, clamping,
   add/remove direction and movement-strength scope with bounded engine
   research or game evidence. Before any address, run `tools/check_exe.py`
   and document RVA/signature/evidence. Do not assume a regular Conservative
   threshold sequence or use vanilla Anarcho-Liberal rules.
4. The adopted formula is recorded in `law-design.md` v4. Local Bill board
   and PNGs were updated; published artifact is stale because no browser
   was available. Republish when access exists and update further changes
   in the same session (R10). Read/open the local Main and Bill
   mockups first. Show baseline support separately from affinity and
   bought seats if the chosen formula requires it; record deviations.
5. Continue group-by-group affinity review after the support question is
   resolved. Ten approved groups: Press Rights, Public Meetings, Voting
   Franchise, Voting System, Minimum Wage, Work Hours, Safety Regulations,
   Unemployment Subsidies, Pensions and Health Care. Thirteen remain
   pending. `data/tgcx_law_catalog.txt` records approved preferences;
   approval does not claim they match native voting. Regenerate
   `docs/law-1-affinity-review.md` with `review_text()` after each batch.
6. Complete and test chamber allocation: independent five-seat rounding
   can over/under-count nine blocs. Enforce 100 allocated seats and prevent
   buying/counting already supportive seats twice. Test pressured and
   unpressured Conservatives/Liberals, ruling-party conditions, reform
   movement changes and chamber changes under the adopted formula.
7. Preserve target `allow` ASTs, two direction entries per group and
   fresh vote validation. Installed TGC has 14 political + 9 social groups,
   95 options and 144 adjacent directed transitions, giving 46 bill entries.
   Keep economic/military uncivilized reforms deferred. Preserve stable
   LAW-0 event IDs and legacy save behavior, or explicitly plan migration.
8. Run `python tools/tgc_scan.py <installed-TGC>`,
   `python tools/test_gen_laws.py` and `python tools/test_law_catalog.py`.
   The default LAW-0 generation must remain byte-identical unless a
   deliberate baseline change is documented. Update tests when the
   approved vote formula changes; test behavior rather than snapshots alone.
9. Generate only to private staging, for example
   `python tools/gen_law_catalog.py --preview E:\v2re\logs\tgcx-law1-preview-1012`.
   `--release` additionally checks selected affinity approvals, but does
   not prove native-support parity or solve the allocation gate. Review
   all release gates before promoting output through the installer.
10. When ready, prepare a reversible install and a concrete user game-test
    checklist covering political/social forward/back steps, stale target
    restrictions, pressure-dependent counts, purchases, promises and save/
    reload. Only the user launches. Keep LAW-1 untested until game evidence;
    multiplayer is deferred under D5.
11. Write an immutable report, archive/rewrite NEXT, update statuses and
    next-card instructions. Preserve existing reports and acceptance logs.
