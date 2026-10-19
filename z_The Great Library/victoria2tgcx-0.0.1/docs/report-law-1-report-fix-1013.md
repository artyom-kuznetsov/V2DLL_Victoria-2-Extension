# LAW-1 / U-6 - Repair the Whips Report

2026-10-13. **Earlier candidate failed report presentation. Correction
implemented and installed on E:, not yet confirmed in game.** All 23 base
affinity groups remain approved. Accepted DLL 0.2.8 is unchanged. No game
launch/termination, DLL rebuild, executable address change, commit or
subagent was used.

## 1. Actual evidence and diagnosis

The user's screenshot shows the UK on 1 January 1836. The Whips Report
lists every result option, from no quorum through passing margins, with
buttons extending below the screen. The candidate had used one shared
country event (420000194): its immediate effect counted, and each of its
51 options had a conditional trigger intended to select one result.
The game displayed every option instead.

Preserved current logs in
`E:\v2re\logs\tgcx-law1-report-failure-1013\game-logs`.
`error.log` and `system_error.log` are empty; `game.log` records the bill
introduction, Count and Whips Report events. The screenshot remains in the
conversation. This establishes successful loading and failed presentation;
it does not confirm numerical counts, bargaining, save/load or acceptance.
The earlier HEMI acceptance evidence was not replaced.

Read scripting-reference/tgc-howto and inspected installed TGC v2.5.2.
AST scan found zero event options with direct trigger/allow/limit fields.
The wiki Event modding page again returned an access error, so no new wiki
claim is made. The established LAW-0 implementation already branches in
the firing effect before opening a single ordinary result event (P21).

The Python interpreter had incorrectly filtered option triggers. Its
passing tests therefore did not validate the actual presentation feature.
Removed that assumption rather than extending it. P34 records this failure.

## 2. Correction

Present and Count now fully evaluate the chamber/native support/purchases
inside the decision effect, then select exactly one existing margin or
quorum report through the LAW-0 conditional firing branches. Each ordinary
report has one acknowledgement option. The result appears in its body,
not a choice among possible results. No extra dispatcher window is opened
for new requests. This also preserves the established result IDs.

Event 420000194 remains as a single-option recovery for a save which already
queued the obsolete report: clicking Recount the bill performs a fresh
count and opens the correct ordinary result. New decisions never fire it.
This recovery path is regression-tested in the script interpreter but
has not been exercised in the game.

Native support, affinity prices, conservation, fresh purchase/promise
checks, Crown rules, cleanup and target validation are retained. The
repository's default LAW-0 four-file generation remains byte-identical.

## 3. Verification and size tradeoff

- **24 catalogue tests pass**, 30.472 seconds: existing native/rounding/
  bargaining/migration/debt tests plus a report regression covering all
  **231 valid five-seat Aye/Nay combinations**, exact selected result,
  one ordinary option per generated event, UK introduction/Count and the
  obsolete-event recovery. Generation rejects conditional options.
- LAW-0 interpreter: **ALL OK**, including default byte identity.
- **Seven staged installer tests pass**. TGC scan: anchors and reserved
  event range OK. Dry-run and real installation succeeded.
- Every installed staged file and descriptor matches its source. The
  accepted source/installed DLL identity remains
  `61824e4bc1b72fc5792533ede1cd14ea3f759c458c59d35407cef973db0ccdc5`.
  No DLL/address change required rerunning unrelated native/GPU checks;
  the retained 45 file signatures / 27 runtime guards are unchanged.

Duplicating the count into 46 bill directions and Count increases the
script size: decisions **35,319,087 bytes**, events **446,912 bytes**,
localisation **138,307 bytes**, own modifier block **956 bytes**. The four
catalogue files total **35,905,262 bytes**, below the revised **40 MiB**
ceiling. The old 16 MiB ceiling depended on the shared event presentation
that failed in the engine. This is a documented implementation tradeoff,
not a claim that larger script loading is verified. Retest load time and
presentation first, then continue the rest of U-6.

Private gates and install logs use `tgcx-law1-report-*-1013` in
`E:\v2re\logs`; `tgcx-law1-report-install-record-1013.json` records hashes.

## 4. Installation, mockup and next evidence

Complete corrected source:
`E:\v2re\logs\tgcx-law1-report-stage-1013`.
Installed through the staged-source installer after observing no running
v2game process. It retained the complete pre-fix candidate in
`E:\v2re\logs\tgcx-law1-before-report-fix-1013`.
Accepted LAW-0 rollback remains
`E:\v2re\logs\tgcx-law1-before-native-1012`.
Generated modifiers still use installed TGC's 120,495-byte base plus our
nine-bloc 956-byte block. No TGC source file was edited or copied into git.

Opened the local Bill mockup. This correction changes report routing, not
the negotiated-vote mechanic; the existing Bill/pressure boards remain
current. Script-only report/news UI is still a deviation from the full Bill
window. Its result now appears in the body with one button. A queued legacy
report has a one-time recovery step. Corrected screenshot comparison and
online artifact republishing remain outstanding; no R10 acceptance claimed.

`instructions-u-6.md` now starts with the report-fix retest: a fresh UK game,
Censored Press to Free Press, one report with Nay leading by 80 for the
83/12/5 low-pressure example; Count again, then bargains and remaining
checks. Only the user starts the game. The correction remains awaiting
actual presentation/performance evidence; LAW-1 is not marked accepted.
