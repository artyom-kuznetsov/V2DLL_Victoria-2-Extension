# TPL-4 follow-up: immediate detach command batch (0.8.2)

2026-10-19. User reports that detach still fails in 0.8.1. Built, tested and
installed 0.8.2 after the user explicitly confirmed a normal game exit.
**Not yet tested in game.** This is a timing repair candidate, not a claim of
runtime success.

## Live evidence

The preserved 0.8.1 log is E:/v2re/logs/tgcx-tpl4-1019/tgcx-081-failed-detach.log.
It confirms the 0.8.1 marker, supported executable and seven Transfer batches.
For example, source 40/579 retains six regiments after four extras are sent to
4713/8134; later attempts create 9275, 9449 and 9521 for the same four extras.
All logged source/destination +74 and +194 values are zero, locations match,
and destinations have zero regiments. No extras-arrived verification is logged.

The 0.8.1 tracker silently returns DONE when a previously observed destination
vanishes. That explains why the verification/retry instrumentation did not
produce a result. Destination disappearance before next-day verification is
consistent with an empty-stack lifecycle problem; the exact engine cleanup
site is not proven. The former advice that one logged field must identify the
refusal was too strong: those logged fields pass in this run.

## Static evidence and change

check_exe: ALL OK before address-dependent work. Read-only Ghidra output is in
work/tpl4-detach-disasm.txt and work/tpl4-detach-extra.txt (ignored, not git).
No new engine addresses or patches were introduced.

- Transfer constructor FUN_005E1EE0 stores the destination id at +64/+68 and
  builds the existing regiment's reference at +3C via FUN_0072D4E0.
- Its validity function FUN_00908FD0 resolves that regiment reference only;
  it does not require the new destination to exist at queue submission.
- Execute FUN_005E1F90 resolves the destination by id later.
- Native CSplitAndLoadArmyCommand FUN_005E3B50 creates and transfers within
  one command execution; it does not leave the destination empty for a day.

0.8.2 therefore posts Create immediately followed by every Transfer during
Conform, instead of waiting a game day to send Transfers. All simulation
changes remain engine commands (R5), with guarded constructors and vtables.
The tracker is reserved before Create, so a full table creates no orphan stack.
Verification also handles a vanished destination, logs how many extras remain,
and never retries into a missing destination. The first extra's type flags
+40/+42 are logged for any further engine refusal. Queue messages no longer
claim regiments have already detached. Layout/mechanic unchanged; mockups
unchanged (R10).

## Checks and installation

- build_dll.ps1: both projects built, 153 signatures ALL OK.
- Native/reference-engine/GPU fixtures: ALL OK outside the sandbox (the
  sandbox cannot create its D3D9 device). Conform regressions check initial
  Create-before-Transfer ordering before any day tick, no duplicate initial
  Transfer, and verification of a disappearing destination without a null read.
- DLL installer/Lua/plugin tests: 12/12. Updated exact marker assertions to
  0.8.2; no gate loosened.
- Package installer tests: 10/10. Dry-run passed.
- Installed both packages after normal-exit confirmation; all non-DLL content
  and both descriptors are byte-identical to their backups.

Stage: E:/v2re/logs/tgcx-tpl4-1019/stage-082/tgcx.dll.
SHA-256: 1ca013f5d3810a7918a48880675d30658a1317917ff1cd3ffdebc9d3264a7e43.
Full package rollback: E:/v2re/logs/tgcx-tpl4-1019/before-082-submod.
Loader remains 0.8.0. TGC/executable untouched. No game launched or terminated.
No commit, push, subagents or external send.

Next: instructions-tpl-4-082-check.md. Other U-12 results are unconfirmed.
The shared 0.8.1 ZIP still contains the known failing version; do not treat it
as a fixed handoff. Wait for 0.8.2's game check before preparing its replacement.
