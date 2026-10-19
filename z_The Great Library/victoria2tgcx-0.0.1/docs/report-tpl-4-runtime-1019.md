# TPL-4 0.8.2 runtime check - 2026-10-19

User: everything seems to be in order. Read the latest game log and confirmed
successful detach in all three recorded attempts. **TPL-4 passed on 0.8.2.**

Snapshot: work/tpl4-082-game-check-1019/tgcx.log (28,179 bytes), with summary.json.
SHA-256: 94276de16b36c426f4823dc79b8a74aad8a58f2eee241d06937cdc2a049f9a95.
Original: E:/Victoria.II.v3.04.Inclu.ALL.DLC/Logs/tgcx.log, last write
2026-10-19 00:30:53 local time when inspected.

## Evidence

- Line 1: TGCX TPL-4 0.8.2 loaded by our MOD-2 0.8.0 loader.
- Supported exe hash; 153 OK RVA signatures, no BAD or FOREIGN.
- Lines 158/164: army=1 politics=0; templates=1 conform=1, drawing+laws=0.
- Lines 176-178: three Transfers queued for 7903, **3/3 arrived**, zero
  still in source 597.
- Lines 266-275: one Transfer queued for 9095 and six regiments recruited,
  **1/1 arrived**, zero still in source 619; zero left out or failed.
- Lines 375-380: six Transfers queued for 12357, **6/6 arrived**, zero
  still in source 588.
- Four march commands and three completed joins are recorded for newly
  recruited stacks. The fourth march's join is not in this snapshot; that
  alone is not a failure or cancellation.
- No guarded-read faults, rejected/refused orders, nonzero failure totals,
  full tables or disappearing detach destinations. Unit-panel slot-recovery
  messages are the expected P47 cleanup path.

The immediate Create+Transfer batch now has in-game evidence: ten extras
moved in three attempts, including detach while recruitment is pending.
This supports the timing repair; the exact engine cleanup instruction was
not traced. No new implementation change is needed for this result.

## Scope

This run uses our loader, not V2DLL, and Army only. It does not verify Politics,
LAW-4 or V2DLL 0.8.2. TPL-3 modifier-key checks were not separately reported;
keep them unconfirmed. No game launch/exit, installation, commit or push was
performed during this log review. Evidence preserved in ignored work/.

The user next requested a fresh game + TGC v2.5.2 folder to install V2DLL and
Army as a new user. See instructions-v2d-082.md and the fresh-copy report.
