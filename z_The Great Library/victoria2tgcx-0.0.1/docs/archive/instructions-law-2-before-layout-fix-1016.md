# LAW-2 - In-game Bill window prototype

2026-10-13. Selected by the user's request to finish the law mechanic and
see at least a Bill GUI prototype. Economy work is not selected. The user
confirmed LAW-1's Present/Count/save-reload smoke test and asked to move
past the extended manual checks. Preserve that evidence; do not claim
unobserved native parity or the whole law mechanic complete.

**Current checkpoint: 0.3.0 installed on E:, done, not tested in game.**
Steps 1-7 below describe the implemented prototype contract. Do not redo
them without a concrete failure. Read `report-law-2-bill-1013.md` and use
U-7 for the short live check. Full LAW-2 remains unfinished.

1. Read AGENTS, law-design and technical-plan sections 1/9. Open the Bill
   mockup. Keep native GUI ordering and structured tooltip slot 10 intact.
2. Prototype route B: generated child window, labels and buttons inside
   installed TGC's named country_politics root. Generate at install time;
   never copy the native GUI into git. Route A: projected seats at the
   named native marker, with full D3D state restoration, never final Present.
3. Keep the child offscreen without the DLL. Bind open/close/recount using
   the verified Politics observer. Trace its ABI and deletion callback:
   Politics and InGameIdler observer templates are not interchangeable.
4. Read live country variables through guarded CVariables lookup. Script
   supplies the GUI's bill ID, stance/promise/audience metadata at Count;
   it also migrates pre-GUI active saves. DLL only reads simulation fields.
5. Recount must call the native decision handler with its exact string
   prefix/RET cleanup and queue CExecuteDecisionCommand. No direct effect
   execution or variable writes. Purchases, promises, vote and automatic
   favour accrual remain follow-up work within the same law mechanic.
6. Test GUI insertion/unchanged base, script metadata/cleanup/migration,
   native view model, callback/string ABI, real GPU state and installer
   rollback. Run applicable executable/TGC/signature/Lua/native gates.
7. Retain accepted DLL 0.2.8, LAW-1 source and latest logs/save privately.
   Build/stage/install reversibly after normal game exit, only after gates
   pass. The prototype remains untested in game until actual evidence.
8. Provide a short prototype check, not a repeated extended U-6 assignment:
   load existing bill, Count to refresh metadata, open Politics/Bill, see
   live counts; close/reopen and verify native reports/tooltips remain above.
9. Write an immutable report with deviations from the Bill board: original
   programmatic panel art, compact bloc rows, preview-only subset of controls,
   manual favour fallback. Keep the agreed mechanic unchanged; document
   online mockup republishing as pending when no browser is available.
10. Close the session with archived/revised NEXT, statuses and current
    instructions. Continue the law mechanic before economy/rulers/templates.

## Follow-up implementation after U-7

1. Diagnose actual GUI failures using the retained guard/child/binding/draw
   log lines and game errors. Compare the screenshot with the Bill board;
   fix position/text/order before adding more controls. Native execution
   of text lookup, binding and Count remains unconfirmed until that run.
2. Refactor the existing Count command dispatch into a guarded generic
   decision sender; reuse the verified prefix, borrowed string, observer
   ABI and engine queue. Add native controls for withdrawal, vote and
   audience. Check the current country's bill and script eligibility on
   each click; cached display data must never authorize a stale purchase.
3. Add per-bloc abstention/Aye/promise buttons and the 5/25 lot selector.
   Map each click to its existing stance/price/broken-debt decision. Reflect
   unavailable actions accurately; do not invent prices or change native
   starting support. Preserve the script Decisions fallback.
4. Extend the synchronized read model for debt deadlines and Crown's
   actual sign/veto eligibility. Generate labels/tooltips from script
   state or verified read-only engine fields. Current audience text is
   not a full Crown prediction. Do not claim one from its flag alone.
5. Trace and gate only the current-date/player eligibility paths needed
   for automatic favours. Queue the existing collection decision when its
   persisted cooldown allows; prevent repeated submissions while a command
   is pending. Pausing/reloading/country changes must not create duplicate
   ticks. The script's timed modifier remains the authoritative timer.
6. Verify each new command/control with meaningful fixtures and catalogue
   tests, then stage/build/install reversibly after normal exit. Keep the
   accepted 0.2.8/LAW-1 rollback and this 0.3.0 candidate. Record evidence
   and limitations in a new report; do not rewrite the prototype report.
