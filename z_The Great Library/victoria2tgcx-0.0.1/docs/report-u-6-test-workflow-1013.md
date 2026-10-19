# U-6 - Short player test and one-command checks

2026-10-13. User requested a simpler way to test LAW-1. Reorganized U-6:
player first checks Present, Count and save/reload/Count in a fresh UK game,
then exits normally and reports the outcome. A report screenshot provides
presentation evidence. No monthly-favour waiting or full manual scenario
matrix is required for this initial smoke test.

Extended scenarios remain coordinator coverage. Existing interpreter tests
cover all 144 routes, native rule arithmetic, rounding, negotiation/debt,
stale guards and report dispatch. They do not prove the real game's parser,
UI, commands or numeric parity; a smoke pass alone cannot close LAW-1.
Targeted live checks will address remaining integration after the basic
path works.

Added `tools/tgcx_check_laws.py`: one command runs the existing catalogue,
LAW-0, installer, TGC, executable and signature gates, then copies current
game logs into a new private evidence bundle. No game launch/exit or install.
Verified the runner: all six gates passed; 11 logs copied and their sizes
match the summary. Bundle:
`E:\v2re\logs\tgcx-law-check-20261013T031729187160Z`.
These are snapshots of existing logs, not a new game run. Installed report-
fix candidate and DLL 0.2.8 unchanged; acceptance remains pending.

Archived the previous U-6 instructions and starting NEXT verbatim, updated
the session 21 handoff and coordinator ownership. No commit or subagents.
