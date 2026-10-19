# U-5 — 0.2.4 functional checkpoint and visual feedback

2026-10-12. **Working prototype, tested in game. Visual polish outstanding;
extended integration checks not confirmed.** This updates the project's
current status without rewriting the implementation/repair reports.

## User evidence

After installing 0.2.4, the user responded "awesome. update the project
and the mds", then "and it also still looks kinda clunky, but it works".
Record this as functional acceptance of the repaired prototype. The user
has run the build; it must no longer be described as not tested in game.
Visual refinement remains necessary. The feedback does not enumerate the
popup, save/reload, Alt-Tab or every view-switch test, so none is claimed
independently verified by that response.

## Preserved runtime evidence

Read the same game's log and preserved it outside git as
`E:\v2re\logs\tgcx-u5-024-accepted-1012.log`. Summary metadata:
`E:\v2re\logs\tgcx-u5-024-accepted-1012.json`. The game was no longer
running during inspection; the log ends with native Politics hide/destruction.

| check | observed result |
|---|---|
| installed version | 0.2.4 |
| startup executable signatures | 23 OK; ordered GUI Draw and final Present hooks installed |
| first native ordered draw | ENG, 100 seats/seven rows, root (768,470), ten vector entries |
| last render counters | 11133 final frames, 2687 ordered chart draws, chart=1 |
| paused sampling | 3 upper-house samples, all at hours 59883360 (1836, day 1) |
| Politics lifetime | one show and one hide/destruction; view 0x4DBC4B48 |
| read/draw failures | no blocked, disabled, fault or failed lines |
| active TGC252_TGCX error logs | error.log and system_error.log both zero bytes |
| installed/source artifact | equal SHA-256 `ef2ebc8da4e1e0bac0ef2ba5cba258abd2efef00a451c02b69a62384b1f80755` |

Upper-house shares remain 27197 Conservative, 1638 Reactionary and 3932
Liberal, all other named shares zero, total 32767. Name-index mapping
is engine-derived; apportionment yields 83/5/12 seats. Earlier Release,
reference/TGC gates and real D3D9/native state/occlusion/installer checks
passed in `report-dll-12-layering-fix-1012.md`; this documentation update
does not change or rebuild code, install anything or re-run game tests.

## Acceptance boundary

DLL-1/HEMI-1 have reached a functional, game-tested prototype milestone.
U-5's functional checkpoint passes based on user feedback and the runtime
log. Full integration coverage remains open: view switching/reopening,
advancing the date, save/reload and Alt-Tab were not established by this
paused run. No multiplayer test (D5). The precise native tooltip/window
occlusion actions are not separately enumerated by the user; the new
ordered draw path is verified by runtime logs and prior real GPU tests.
Do not turn a general success report into a complete checklist pass.

## Appearance and mockup differences

The user's "clunky" description is recorded without inventing a more
specific visual complaint. Known differences from Main
(`mockups/1-politics.png`, previously compared with the supplied Politics
screenshot) are the flat beige cover panel, native legend order rather
than mockup seat order, and native pie hover regions rather than per-seat
hit targets. There is no new 0.2.4 screenshot in this acceptance message;
a fresh side-by-side visual check belongs to the polish card.

HEMI-2 is queued for mockup-based visual polish: inspect the current
render and geometry/padding/background, preserve the stable native order
and data guards, and consolidate changes into one build. Custom hover
requires a verified native tooltip ABI (P27); never revive the guessed
return hook. No mechanic change was requested. No new mechanic was chosen.
Remaining U-5 checks accompany the eventual polish run, rather than
requesting another immediate launch just to update statuses.

## Session close

Archived starting NEXT verbatim and superseded DLL-1/DLL-2/U-5
instructions. Updated NEXT, ROADMAP, SUBAGENTS, technical-plan, symbols,
pitfall resolutions and docs index. Added step-by-step HEMI-2 instructions.
No source/game changes, commit, push or third-party material added.
