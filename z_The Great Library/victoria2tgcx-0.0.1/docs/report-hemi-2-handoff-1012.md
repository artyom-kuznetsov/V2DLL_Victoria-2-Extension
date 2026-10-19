# HEMI-2 — Functional acceptance and handoff

2026-10-12. **0.2.5 works in game, confirmed by the user.** The user also
reports that tooltips do not correlate with the new chart. Preserve the
working release; next implementation card is HEMI-3, hover integration.
Do not label the build untested or claim complete interface acceptance.

## What is installed

E: game, TGC v2.5.2 (stable) + TGCX; optional DLL-1+HEMI-2 0.2.5.
DLL SHA-256: `1ec1aea4fee87441a293358451ee15859cdf66435991abebe3a52370f5de5a1b`.
Read-only 100-seat/seven-row chart, largest-remainder apportionment, engine
ideology names/colours, political left-to-right wedges, softer seat edges,
feathered cover, native ordered rendering and original native tooltips.
Submod descriptor marks 0.2.5; law scripts unchanged. No .gui override.

The prior agent's rendering changes were recovered and built. Fixed logged
PowerShell checks incorrectly treating successful unittest stderr as errors;
kept exit-code/signature/compiler gates intact. Fixed HEMI-2 install-record
classification and added GPU feather coverage. Build and all checks passed;
see `report-hemi-2-build-1012.md`. Original shim and previous proxies retained.
Prior submod/record/log: `E:\v2re\logs\tgcx-before-025-1012`.

## Preserved evidence

Original user attachment, unchanged **2560x1440 PNG**:
`E:\v2re\logs\tgcx-hemi2-025-user-screenshot-1012.png`.
SHA-256: `fbffc2d8cdbf3a291095ad8186562dbdee3d238684c511daf7bd85b2250b8266`.
Adjacent JSON records attachment timestamp, dimensions and hash. It is
outside git because it contains game/TGC art (R8). Inspected the saved file:
UK Politics, January 1, 1836; hemicycle displayed, legend 83/5/12. Compared
with Main: seven-row arc and Liberal-left/Conservative/Reactionary-right
placement visible; generated background still differs from native texture;
legend remains native 83/5/12 rather than Main's 83/12/5. Unrelated Main
ruler elements belong to later cards. No chart tooltip is visible in this
screenshot; mismatch evidence is the user's explicit description.

Accepted log: `E:\v2re\logs\tgcx-hemi2-025-accepted-1012.log` plus JSON.
All 23 runtime guards OK, 13492 final frames, 10032 ordered draws, eight
upper-house samples at the same paused date; final Politics hidden/chart=0.
No blocked/disabled/fault/failed/BAD lines; both active error logs zero bytes.
Earlier startup/check logs and reports remain intact.

## Confirmed limitation and next action

The DLL draws new seats but leaves the engine's pie hover regions intact.
Political wedge placement now differs from the original pie's sectors, so
hover can select an ideology that does not match the dot beneath the cursor.
This is a presentation/hit-test mismatch; no evidence says the sampled
upper-house numbers are stale. The native legend remains authoritative.

**HEMI-3:** align chart hover with the rendered seat's actual ideology,
using shared geometry and verified native tooltip ownership/ABI. Keep
native legend behavior, native layering and safe fallback. Do not restore
the guessed structured-tooltip return that crashed 0.2.2 (P27), nor duplicate
tooltip overlays above native UI (P28). Detailed steps:
`instructions-hemi-3.md`; authoritative task order: `../NEXT.md`.

No tooltip fix, new DLL or game-state change was made in this handoff.
View-switch/reopen, date advancement, save/reload and Alt-Tab outcomes are
not claimed verified; collect remaining coverage with the next consolidated
hover build. No immediate extra game launch is required. No commit requested.
