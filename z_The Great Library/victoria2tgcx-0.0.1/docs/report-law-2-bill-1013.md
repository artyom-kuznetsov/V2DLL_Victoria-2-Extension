# LAW-2 Bill GUI prototype

2026-10-13. **0.3.0 installed on E:, done, not tested in game.** The user
requested a Bill window prototype and authorized bounded Ghidra research.
Law negotiation stays selected until it is finished. Economy, rulers and
templates are not selected. No game launch, commit or subagents.

## Existing LAW-1 evidence

The user confirmed that the short Present/Count/save-reload check worked,
then asked to proceed without the extended manual assignment. The report
correction is accepted for that smoke path; full native numerical parity,
Crown/debt integration and every catalogue route are not inferred.

Retained evidence: `E:\v2re\logs\tgcx-law1-smoke-accepted-1013`, with game
logs, the UK save and `tgcx_saved_state.json`. Error/system_error logs are
empty. The saved bill has 10 Aye, 85 Nay, 5 abstentions, quorum 95 and
margin -75. Conservative purchases total 5 seats; spent 2, favours 1.
The extra five abstentions explain its difference from the fresh -80
example. DLL 0.2.8 remains the accepted hemicycle rollback.

## Prototype behavior and native paths

The generated 832 by 680 Bill child contains the law transition, projected
vote, favours/rate/spent, base prices, positive-seat bloc rows, affinity,
promises, baseline and negotiated votes, ideal law and audience status.
Open/Close are native GUI actions. Count sends the native
`POLITICSVIEW_DECISIONtgcx_count_votes` click path through
`CExecuteDecisionCommand`. There are no direct simulation writes.
Purchases, promises, audience, withdrawal and calling the vote remain in
Decisions. Automatic favour accrual is still pending, with the manual
collection fallback retained.

Route B supplies the generated native window, labels and buttons. Route A
draws projected seats after its named native overlay marker, with D3D9
state restoration. Final Present updates the view model but never paints
the chart. Native tooltip slot 10 is untouched. The offscreen initial
child position preserves script-only loading; minimum supported prototype
viewport is 900 by 700. Open Bill remains inert without the DLL.

`tools/tgcx_bill_gui.py` inserts only our fragment inside the installed
GUI's single named country_politics root. Tests reconstruct the original
bytes outside that insertion. The generated native GUI stays outside git.
Panel art is original programmatic DDS; native sprites/fonts are referenced
from the installation. No TGC art, GUI, executable or decompilation enters git.

Script supplies persistent GUI schema, active state, 1..144 route ID,
stances, promises and audience metadata. Count migrates an active pre-GUI
save. Cleanup retains the schema but clears activity, so the obsolete
queued recovery report cannot resurrect a withdrawn Bill window.
The DLL validates the read model against all nine blocs and global totals.
It hides the child on invalid data and disables the prototype after a
native GUI fault; Decisions remain available.

Bounded Ghidra output is in `E:\v2re\logs\tgcx-law2-*-1013.txt`.
`docs/symbols.md` records VAs, RVAs and the observed ABIs. The correct
Politics observer is 44 bytes, using callback +8 and deletion callback
+0x20. The InGameIdler observer reads +0x38 and cannot share that allocation.
Borrowed native string layout and callback/text setter conventions follow
marked V2DLL patterns, independently checked against this executable.
Actual execution of these GUI/command paths remains unconfirmed in game.

## Verification and installation

- Reference SHA plus **70 file gates**, **38 runtime guards**, generated
  relocation-aware signatures, TGC v2.5.2 anchors/event range: pass.
- **25 catalogue tests**, including all 144 transitions, migration,
  schema cleanup, report dispatch, negotiations and 40 MiB bound: pass.
- LAW-0 tests and byte-identical default generated files: pass.
- **3 GUI tests**, including preservation of installed source and CSV
  delimiter checks: pass.
- **10 script installer tests**, including GUI backup/regeneration,
  missing/duplicate anchors, foreign ownership and failure restoration:
  pass.
- Release/Win32 `/W4 /WX`, native Bill model/string/callback fixtures,
  real D3D9 projected chart/state restoration/Reset and existing hemicycle
  fixtures, **8 DLL installer/Lua tests**: pass.
- Installed payload and generated GUI match staging; installed DLL matches
  the build and installation record. Game-running gates passed. Previous
  source and DLL retained. DLL rollback `--source` dry-run also passes.

Catalogue output: **37,775,061 bytes** across its four generated files.
GUI: **66,898 bytes**, including the unmodified 56,298-byte installed base
and our insertion. Private stage:
`E:\v2re\logs\tgcx-law2-bill-stage-1013`.
Build/native/install logs and installation verification use
`tgcx-law2-*-1013` in the private logs directory.
The final seven-gate automatic bundle is
`E:\v2re\logs\tgcx-law-check-20261013T053026919692Z`; all checks pass.
Its 11 copied game logs are prior LAW-1 evidence, not a new prototype run.

Installed DLL SHA-256:
`43bb3e7d3d0133b3bdb316fe9dd4253923297143ad0b113724534be5ed2f6ca5`.

Rollback script source: `E:\v2re\logs\tgcx-before-law2-submod-1013`.
Rollback DLL/log: `E:\v2re\logs\tgcx-before-law2-1013`; retained DLL hash
`61824e4bc1b72fc5792533ede1cd14ea3f759c458c59d35407cef973db0ccdc5`.
Use both rollbacks together, after normal game exit. U-7 has exact commands.

## Mockup comparison and remaining work

Opened `mockups/2-negotiation.png`. A private approximate-font layout
preview, `tgcx-law2-layout-preview-1013.png`, was inspected; it is not a
game screenshot and its seat colors/order are illustrative. Native/GPU
fixtures verify the actual chart data separately. R10's in-game side by
side comparison remains pending U-7.

Prototype deviations: original flat panel instead of ornate game art;
compact rows with unused row backgrounds; no introduction date/party,
closeness tracks, chart display selector, favour breakdown tooltip,
debt ledger, negotiation history, Crown portrait/trust/veto prediction,
lot selector or row action buttons. Count/Close replace the final action
bar; native open button is added beside Politics. These are unfinished
interface work, not changes to the agreed mechanic. Existing script
actions retain its rules. Automatic favour ticking also remains unfinished.
The local agreed mockup is unchanged by this prototype; republishing the
earlier private mockup update remains pending browser access.

Next: brief U-7 visual/Count check, fix concrete GUI failures, then wire
remaining Bill actions and automatic favours through guarded synchronized
commands. Do not start another mechanic. Multiplayer remains deferred D5.
