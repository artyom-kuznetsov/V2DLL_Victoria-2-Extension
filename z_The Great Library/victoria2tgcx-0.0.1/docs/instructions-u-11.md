# U-11 - Short game check of LAW-3 (0.6.4)

2026-10-18. Written at the close of session 32. **It runs after LAW-3 is
installed.** The user launches and exits the game. The coordinator
baselines the logs first and compares them afterwards.

Setup: United Kingdom, 1836 start, TGC v2.5.2 (stable) + TGCX. That is the
same setup as U-7 (`report-u-7-1018.md`), so the screenshots compare
directly.

## Steps

1. **Start and play a few days.** Expect two log lines:
   - `TGCX … 0.6.4`;
   - the new Reforms, rebuild and top-bar guards OK.
2. **Load test gone (F3).** Expect:
   - no *TGCX: load test* decision;
   - Denmark is named Denmark.
3. **Reforms tab with no bill (D14).**
   - Fewer rows lit than U-7's ~38.
   - No backward step lit unless the game itself would allow it.
   - Every lit row, clicked, starts a bill. A lit row is never silently
     refused.
   - Screenshot.
4. **Start a bill (F1).**
   - Only the target row stays lit.
   - Close and reopen Politics: still only the target.
   - Screenshot.
5. **Top-bar decisions tooltip (F2).** Hover the decisions alert: no *Count
   the votes* or *Withdraw the bill*. Screenshot.
6. **Bill text (deviation 2).**
   - Open the Bill for a long law name (Universal Weighted Voting).
   - The title and the Closeness rows do not overprint.
   - Screenshot.
7. **Withdraw the bill (F1, the other way).** The rows offered in step 3
   are lit again.
8. **Wait a new month.**
   - Favours rise once.
   - No popup.
   - The offer is unchanged, unless TGC's conditions changed.
9. **Exit the game normally.** Send the screenshots.

## Afterwards (coordinator)

- `error.log` and `system_error.log` are empty. `tgcx.log` has no rejected
  guard or read fault.
- Compare the screenshots with board 1 (as updated by LAW-3) and board 2.
- Write `docs/report-u-11-MMDD.md`.
- Pass: close LAW-2/LAW-3 and ask the user for the next mechanic.
- Fail: the rollback is the paired `before-064-*` backups (0.6.3).
