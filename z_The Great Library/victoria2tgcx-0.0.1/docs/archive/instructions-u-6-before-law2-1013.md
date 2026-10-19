# U-6 — LAW-1 catalogue game test

2026-10-13. **Report fix installed on E:, awaiting retest.** The user's
screenshot revealed every result option visible in the earlier candidate.
Only the user starts the game. Accepted DLL 0.2.8 is unchanged. Read
`report-law-1-report-fix-1013.md` and `report-law-1-native-1012.md`.
Previous instructions are archived verbatim in
`archive/instructions-u-6-before-report-fix-1013.md` and
`archive/instructions-u-6-before-short-test-1013.md`.

## Quick player check - do only this first

1. Start a fresh UK game with TGC v2.5.2 plus TGCX, then pause. Note any
   unusually slow load. Present **Press Rights: next option** (Censored
   Press -> Free Press). Expect **one report with one button**, stating
   **Nay leads by 80 seats** for the low-pressure 83/12/5 starting chamber.
2. Close it and click **Count the votes** once. Expect the same single
   report. No need to buy votes or wait for monthly favours yet.
3. Save to a disposable slot, reload, and Count once more. Expect the
   same result if the date/country inputs stayed unchanged.
4. Exit normally and report whether those three checks worked. One report
   screenshot is enough for presentation evidence; the agent reads logs.

This is the initial smoke test, not acceptance of every law mechanic.
The extended scenarios below are the coordinator's coverage reference;
**the player does not need to run the whole list in one sitting**. We will
use targeted live checks for what automation cannot establish, after this
basic path works. Live bargains/Crown, native comparisons and other engine
integration remain outstanding; Python results alone cannot close U-6.

## One-command automatic checks - coordinator task

```powershell
python tools/tgcx_check_laws.py
```

Runs the existing catalogue, LAW-0, installer, TGC, executable and signature
gates and copies current game logs into a new private evidence bundle under
`E:\v2re\logs`. It never launches/exits the game or installs a candidate.
Run after the player's normal exit for a complete log snapshot. The agent
can run this; the player need not run terminal commands. The suite covers
all 144 routes, rounding, negotiation/debt/guard logic and report dispatch.
It does not prove the actual game parses/renders/executes every construct.

## Extended coverage - coordinator reference

After the quick player check, use these details for targeted follow-ups. New Present/Count requests should show one result
event with one ordinary acknowledgement button. The result now appears in
the report body. For the low-pressure UK example, it says Nay leads by 80.
Counting is now in each decision rather than a shared event, increasing
generated decisions to 35,319,087 bytes; record load time or a slowdown.
An old save with event 420000194 queued instead has one recovery button,
"Recount the bill", which opens the ordinary result. Prefer a fresh test
game for the first check; no new decision uses that recovery event.

1. Start Victoria II with **TGC v2.5.2 (stable)** plus **TGCX**, using a
   disposable UK game/save. Report a slow/hung load or any new errors
   before continuing. Do not overwrite a valued save with this test.
2. Open Politics and confirm accepted hemicycle/hover/header behavior.
   In Decisions, find next/previous bill entries for currently reachable
   reforms. Endpoints have only their available direction. Dictatorships
   have no negotiating legislature. Some target entries are grey because
   TGC's own target restrictions still apply.
3. Present Press Rights: **Censored Press -> Free Press**. For the starting
   83/12/5 house at low pressure, expect **10 Aye / 90 Nay** in five-seat
   packets. The report says **Nay leads by 80 seats**, rather than displaying
   separate full tallies; the Bill GUI is a later card. Exactly one Whips
   Report opens, with one result button.
   Close it. Count again: same result, one report, no duplicated windows.
4. Collect favours as in LAW-0 (manual no-command-bridge fallback). With
   enough favours, buy **25 Conservative Aye** and **25 Conservative
   abstentions**, then **two five-seat abstentions**. Expected pre-promise
   result: **35 Aye / 35 abstain / 30 Nay**, **39 favours** spent (report:
   pass by 5). If actual chamber shares differ, use their current rounded
   allocation instead of requiring these UK example numbers.
   Promise a law to Reactionaries: **40 Aye / 35 abstain / 25 Nay**.
   Count confirms pass by 15. No purchase or promise opens an extra report.
5. Save and reload during debate. The bill, purchases, debt timer and
   favours survive; Count returns the same result if country inputs stayed
   unchanged. While debate lasts, Call the Vote is unavailable. After it
   expires, Crown veto without audience / signature after audience still
   work in the UK. Capture a result and the clean error log.
6. On another disposable game/save, exercise at least one allowed social
   forward step and a political reverse step. Verify correct target and
   cleanup. Health Care requires TGC's medicine flag/restrictions; an
   unavailable target is not an implementation failure. A favorable law
   should repay the matching existing ideology debt.
7. When pressure or ruling party changes naturally in the test, compare
   the native reform tooltip before/after with a fresh Count. Conservative
   political support skips the 4/.4 threshold; social and Liberal social
   support have different thresholds. A 100% bloc with full native Aye has
   nothing to purchase or promise even if its affinity opposes the option.
   Friendly affinity can still require purchased Aye when native support
   is absent. Exact native percentages need not equal five-seat tallies.
8. After a chamber/support change, a purchase from a stale count must
   spend no favours. Count, then buy again if available. Old purchases
   clip to remaining opposition; they never create seats or refund sunk
   favours. For a native input comparison, retain country/date, chamber,
   party, militancy, relevant movement, source/target and screenshots.
9. If another TGC event changes the starting law or blocks the target
   during debate, Call the Vote must report the changed count/restriction
   and leave the bill active, without enacting the stale target. Withdraw
   or recount. Report any odd affinity row by group/ideology/desired ideal.
10. Send what worked/failed and screenshots/logs. The agent checks active
    game errors without replacing the pre-test acceptance logs. Until
    all checks pass, LAW-1 remains unaccepted in game. U-5 extended checks
    can be added to this run but must not be inferred from general approval.

## Candidate and rollback

Candidate source: `E:\v2re\logs\tgcx-law1-report-stage-1013`.
Complete pre-fix candidate rollback source (retained for investigation):
`E:\v2re\logs\tgcx-law1-before-report-fix-1013`.
Complete accepted LAW-0 rollback source:
`E:\v2re\logs\tgcx-law1-before-native-1012`.
The repository's default LAW-0 generated files were not migrated.

After a **normal game exit**, restore the retained baseline if needed:

```powershell
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod --source E:\v2re\logs\tgcx-law1-before-native-1012
```

This retains the departing candidate in an automatic backup and restores
the earlier script/modifier source. It does not change the DLL or TGC.
The installer refuses a running game, foreign files, mismatched generated
base or linked targets. It prepares generation before replacement and
retains a rollback source for every installation.

## Coordinator follow-up

1. Preserve U-6 evidence privately before fixes. If a fix changes script,
   rerun catalogue, LAW-0 and installer tests and TGC scan; if addresses
   change, run executable gates. Do not loosen checks or launch the game.
   P34: event option conditions were ignored in game; tests must not assume
   they hide options. Select one result in the firing effect, as in LAW-0.
2. Republish updated private Bill board when a browser session is available.
   Local board/export is current; online artifact is stale. Compare the
   low-pressure and `mockups/2c-law-pressure.png` examples. Script-only
   deviations are listed in the report, not silently accepted.
3. After actual game evidence, write a new immutable report; do not edit
   `report-law-1-native-1012.md`. Update LAW-1/U-6 statuses and close the
   session with archived NEXT and current next-card instructions.
