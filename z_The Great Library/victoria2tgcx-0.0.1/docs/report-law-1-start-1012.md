# LAW-1 start and handoff

2026-10-12. User accepted the HEMI-3 header correction, selected LAW-1,
then requested a handoff. **LAW-1 is in progress, preview only, not
installed or tested in game.** This report records decisions after
`report-law-1-tgc-support-1012.md`; its pending proposal is now approved.

## 1. Accepted game baseline

User: "brilliant. let's start law-1". HEMI-3 0.2.8 header correction is
accepted in game. Preserved evidence:
`E:\v2re\logs\tgcx-hemi3-028-accepted-1012\` (runtime log, DLL,
descriptor/install record, errors and acceptance metadata).
27 runtime guards pass; last sample: 6332 final frames, 1451 ordered draws.
Both active error logs are empty. Do not infer extended U-5 coverage from
general approval. No rebuild, reinstall or game launch was performed here.

Active/source DLL SHA-256:
`61824e4bc1b72fc5792533ede1cd14ea3f759c458c59d35407cef973db0ccdc5`.
The installed script is still the accepted LAW-0 baseline.

## 2. User decisions to carry forward

**D7 revision approved:** "TGC starting votes + affinity bargaining".
Read installed TGC's applicable add/remove political/social reform rule
for each bloc's starting support. Affinity remains for prices, resistance
and promised-law obligations. Do not ask the user to approve this model
again. Its implementation is outstanding; the current preview is still
affinity-only.

Ten groups approved as negotiation preferences, including intensity:

- Press Rights (including the special Communist/Fascist State Press rows).
- Public Meetings, Voting Franchise and Voting System.
- Minimum Wage, Work Hours, Safety Regulations, Unemployment Subsidies,
  Pensions and Health Care. The user explicitly approved the welfare list
  while requesting native-rule inspection.

Exact rows and approval statuses: `data/tgcx_law_catalog.txt` and
`law-1-affinity-review.md`. **Thirteen groups remain pending:** Slavery,
Upper House Composition, Trade Unions, Political Parties, Conscription,
Citizens' Rights, Debt Law, Border Policy, Colonial Policy, Centralization,
Schools, Penal System and Child Labour. Do not approve these implicitly.

The approved preferences can differ from native starting votes. Example:
Anarcho-Liberal no-welfare preference remains recorded, while TGC's
add-social base is 1. Conservative status quo remains a bargaining
preference while native reform support responds to pressure.

## 3. Implemented preview and validation

`tools/gen_law_catalog.py` stages a catalogue outside the live submod and
installed game. Inventory measured from installed TGC: **14 political +
9 social groups, 95 options, 144 adjacent directed transitions, 46
direction entries**, all nine ideologies. The old 15/9 and 48 estimates
were incorrect. Economic/military reforms remain deferred.

The preview preserves imported target `allow` trees, validates current law/
government/target again at vote time, supports forward/back steps, omits
debug cheats, preserves stable LAW-0 event IDs and its known active-bill
transition, and checks purchases against a changed chamber before spending.
`tools/gen_laws.py` was refactored through override hooks; its default
LAW-0 output remains byte-identical to all four existing generated files.

Validation completed:

- `tools/test_law_catalog.py`: **12 tests passed**, last run 12.506 s.
  Includes all route effects, imported allow trees, fresh vote restrictions,
  purchases/prices, promises/debt expiry, legacy save flags and bad inputs.
- `tools/test_gen_laws.py`: ALL OK; original LAW-0 behavior unchanged.
- `tools/tgc_scan.py`: installed TGC anchors and event range OK.
- `tools/check_exe.py`: reference SHA and **33 file signatures** OK:
  27 existing runtime sites plus six new read-only research sites.
  `RESEARCH_SIGNATURES` is separate from `SIGNATURES`; the DLL header and
  installed DLL retain 27 guards. No DLL build was needed or performed.

Logs: `E:\v2re\logs\tgcx-law1-{tests,law0-tests,exe}-1012.txt` and
`tgcx-law1-tgc252-1012.json`. Staging:
`E:\v2re\logs\tgcx-law1-preview-1012` (affinity-only, not release ready).
Approval checks in `--release` do not establish native parity or solve
rounding. No generated production script was replaced or installed.

## 4. Native research: facts and remaining uncertainty

The earlier report gives the full TGC/vanilla comparison and thresholds.
After approval, bounded read-only Ghidra inspection identified the
`CAdditiveForUpperHouseMTTH` evaluator at VA `0x008AF810`, RVA `0x4AF810`
(preferred base `0x400000`). Its body adds applicable direct modifier
values to the initial value. For a modifier group, it accumulates the
ordered matching prefix and stops at the first member whose conditions
fail. This differs from a blanket multiplicative interpretation of
`factor`. TGC's pressure thresholds form monotone sequences, including
the deliberately omitted Conservative political 4/.4 clause.

`FUN_008FE3C0` / RVA `0x4FE3C0` and `FUN_008FE6E0` / RVA `0x4FE6E0`
read social/political movement strength from the scoped country's
`+0x15A8/+0x15A4` respectively. They are country comparisons, rather than
per-bill movement reads. Static behavior is confirmed in those bodies;
full native vote parity, clamp behavior, parser field mapping and numeric
quantization still require verification. No simulation command or patch
was added. Six expected-byte research gates and `symbols.md` record sites.

Private outputs (derived executable material stays outside git):
`E:\v2re\logs\law1-support-{functions,layout,parse,refs,evaluator-refs}-1012.txt`
and associated `*-ghidra-1012.txt` console logs. The `layout` file includes
unproductive CIdeology vtable leads; continue from the parser/evaluator,
not those names guessed from slots. Existing Ghidra scripts were reused.

## 5. Required remaining work

Implement the approved conditional starting vote in the catalogue
generator and its interpreter/tests. Recount when pressure, ruling party
or chamber changes; do not charge for already supportive seats or count a
seat twice. Preserve imported target restrictions and R5/R6.

**Allocation gate:** the current independent nearest-five rounding of nine
blocs can sum above or below 100. Resolve chamber conservation before
release, together with fractional native support. The twelve passing
tests do not resolve this. Document rounding versus native percentages.

Continue the thirteen pending affinity groups with the user, then stage,
review and install reversibly when all release gates pass. Prepare a user
game-test checklist; only the user launches. LAW-1 is not done merely
because the catalogue preview passes tests.

## 6. Mockup status and concrete access limit

Opened the local Bill PNG. Updated private `Bill.dc.html`: Stance column
now says Affinity, each bloc shows TGC starting Aye/Nay separately, and
the example vote combines native starting support with negotiated seats.
The unpressured UK example still begins 10 Aye / 90 Nay. Re-exported all
boards with `tools/mockups/export.py` and inspected the new Bill PNG:
labels fit and the negotiated 40/35/25 example remains consistent.
Previous board: `E:\v2re\mockups\project\Bill.before-law1-1012.dc.html`.
Game/TGC art and PNGs remain outside git/ignored as before.

**Published artifact is not updated.** Browser inventory returned no
browsers; opening the existing artifact through `iab` returned "Browser
is not available: iab". No browser session exists to republish it. The
next session must republish the updated private board when access exists,
then refresh exports if it changes. Do not claim the online artifact is
current. Local mockup reflects the approved conceptual change; full
pressure controls and implementation remain next-session work.

No new pitfall number assigned; next remains P33. No commits were made.
