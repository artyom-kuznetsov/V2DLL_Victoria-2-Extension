# Index of `docs/`

- `report-release-0-candidate-1019.md`: ATCU0.0.1 local candidate, unchanged binary, packaging checks and remaining review.
- `release-0.0.1/`: recipient README/install/known issues/changelog/credits/provenance status/bug reports and draft release text.
- `archive/instructions-release-0-before-candidate-1019.md`: earlier release preparation instructions, verbatim.

- `report-universal-tgc-passed-1019.md`: TGC/V2DLL accepted, four-base short matrix complete, source checkpoint and user V2DLL provenance clarification.
- `instructions-tpl-5.md`: selected culture buttons, shared eligibility and persistence steps.
- `instructions-tpl-6.md`: proposed continent builder selector after culture filtering.
- `archive/instructions-tpl-5-before-selection-1019.md`: previous deferred instructions, verbatim.

- `report-universal-tgc-1019.md`: vanilla/HPM/DoD Universal acceptance; identical0.10.4 installed in isolated TGC2.5.2 + V2DLL5.82, player test pending.
- `instructions-mod-6.md`: current TGC/V2DLL player test and extended-case steps.

- `report-release-readiness-1019.md`: accepted DoD0.10.4 short correction, exact remaining runtime/provenance/public-beta gates.
- `instructions-release-0.md`: future public-beta preparation workflow; no publication authorized.

- `report-universal-land-flag-1019.md`: DoD0.10.3 UI accepted, reversed land flag caused zero builds, independent native polarity regression, installed0.10.4 retry pending.

- `report-universal-subtree-1019.md`: full failed DoD0.10.2 log, native root-only versus subtree activation regression, installed 0.10.3 candidate, retry pending.

- `report-universal-visibility-1019.md`: DoD universal controls absent despite loaded roots; 0.10.2 first-show foreground/host visibility repair, installed, retry pending.

- `report-conform-land-reach-1019.md`: 0.9.0 overseas failure, approved land-only Conform recruitment, 0.10.1 checks/installation, runtime pending.

- `report-mod-6-1019.md`: universal 0.10.0 prototype, native lifetime/GUI and live catalogue, automated proof and three installations; runtime pending.
- `report-mod-4-5-passed-1019.md`: accepted HPM/DoD short 0.9.0 checks and remaining evidence gaps.

- `report-mod-4-5-prepared-1019.md`: separate HPM/DoD own-loader test copies installed/verified; initial universal factory investigation.

- `report-mod-3-passed-1019.md`: accepted vanilla recruit/Conform/detach/march/merge check; current universal-package limits.
- `instructions-mod-6.md`: universal 0.10.4 DoD land-reach retry, rollback and subsequent TGC/V2DLL regression.

- `report-mod-3-button-1019.md`: vanilla Templates passed; native-header Conform opening-button correction, installed with backup; retry pending.

- `report-mod-5-1019.md`: Army 0.9.0 runtime catalogue, five prepared base packages, validation and remaining runtime gates.
- `report-mod-3-fresh-1019.md`: separate clean vanilla + own-loader test copy; prior TGC/V2DLL copy retained.
- `visual-references.md`: current supplied Conform screenshot supersedes old mockup.
- `instructions-mod-4.md`: isolated HPM generation and game check.
- `instructions-mod-5.md`: DoD custom units and TGC regression game checks.

- `report-v2d-082-passed-1019.md`: accepted short Army 0.8.2 + V2DLL 5.82 fresh-user run.



- `report-fresh-map-path-1019.md`: fresh-copy hardcoded TGC map path, canonical layout repair and confirmed V2DLL plugin startup.



- `report-v2d-bundle-1019.md`: combined files-only V2DLL + Army 0.8.2 private test ZIP, pinned source and checks.



- `report-tpl-4-runtime-1019.md`: accepted 0.8.2 detach log, three successful cases.
- `report-v2d-fresh-1019.md`: clean game/TGC copy, isolated profile and mod-only 0.8.2 ZIP.
- `instructions-v2d-082.md`: next fresh-user V2DLL + Army 0.8.2 game check.



- `report-tpl-4-1019.md`: 0.8.1 detach failure, 0.8.2 immediate command batch, installation and test limits.
- `instructions-tpl-4-082-check.md`: next game check of 0.8.2 detach.



- `report-army-launcher-1018.md`: current mod-only ZIP and normal-launcher order evidence; no scripts.



- `report-army-drop-in-1018.md`: current files-only Army 0.8.1 ZIP and placement instructions.



- `report-army-portable-1018.md`: current Army-only 0.8.1 portable setup ZIP, automated install/restore, checks and limits.

- `report-maxioten-test-1018.md`: private V2DLL test ZIP, contents, preparation checks and limitations.



> What is in each document and whether it is current. **What happens next
> is only in `../NEXT.md`**; the current status and numbers, in
> `../ROADMAP.md` §1-§2. No document in this folder is used to learn "what
> comes next".
>
> Three kinds, with different rules:
>
> - **Reference**: kept up to date; if what it describes changes, it is
>   edited.
> - **Report**: the snapshot of a measurement or a card on a date. **Not
>   rewritten**; if a new measurement supersedes it, write another report
>   and update `ROADMAP.md` §1-§2.
> - **Archive** (`archive/`): superseded material, verbatim, with the date
>   and the reason in its header. Not edited.
>
> Everything is in English (D10); the whole folder, archive included, was
> translated on 2026-10-12.
>
> When adding a document, add it here.

## Reference (current)

| document | what |
|---|---|
| `technical-plan.md` | how each mechanic is built: the shared DLL (§1), laws (§2), charts (§3), hemicycle (§4), rulers (§5), templates (§6), overall order (§7), feasibility of the mockups and the interface route, D9: hybrid case by case (§9) |
| `law-design.md` | laws with political favours and ideological affinity (D7 revised): each bloc's stance, projected vote, favours, promises, Crown, cycle, what the DLL adds; v3 builds it on TGC's idioms (timed modifiers, step-chains) and maps the Bill mockup element by element |
| `tgc-compatibility.md` | levels N0/N1/N2, the generator for fixed-name files, event range; the any-version matrix is on hold (D1 revised: TGC v 2.5.2 only) |
| `pitfalls.md` | full text of pitfalls P1-P58 (index in `AGENTS.md` §8) |
| `symbols.md` | what this project has named or discovered in `v2game.exe`, with evidence (upper house, GUI/hover paths, templates, and the 2026-10-17 external cross-check) |
| `rtti-classes.md` | **generated** by `ghidra/ExportRtti.java`: the 1 500 vtables with RVA and slots, and the detail of 22 mechanics classes. Not edited by hand |
| `instructions-gh-1.md` | GH-1: review the Ghidra analysis, export the RTTI inventory, create `symbols.md` |
| `instructions-sub-0.md` | SUB-0: minimal submod, reversible installer, load test in game (U-2) |
| `instructions-compat-0.md` | COMPAT-0: clone more TGC versions and `tgc_scan.py --matrix` |
| `instructions-law-1.md` | LAW-1 short smoke accepted; script baseline, later fixes and release gates |
| `instructions-u-6.md` | accepted short LAW-1 smoke, retained evidence and limitations |
| `instructions-law-2.md` | 0.3.5 buttons, Reforms tab and Decisions filter; what to do after U-7 |
| `instructions-law-3.md` | LAW-3: Reforms rows refresh, top-bar tooltip filter, load test removed, D14 offer rule with board 1, Bill text overflow (0.6.4) |
| `instructions-u-11.md` | short game check of LAW-3 0.6.4 and rollback |
| `instructions-v2d-1.md` | V2D-1 (MOD-1 step B, D16): one-off in-game run with the real V2DLL loading `tgcx.dll` as `v2dll_mod.dll`; [user] decides |
| `report-tpl-4-1018.md` | 2026-10-18 | 0.8.1: Ctrl/Alt-click in the Templates editor (TPL-3); Conform's detach found broken, now verified and retried with the engine's refusal fields logged (TPL-4); LAW-4 first look |
| `report-mod-2-1018.md` | 2026-10-18 | MOD-2 0.8.0: generic base profiles, Army/Politics packages per base, sprite check, loader finds tgcx.dll through `-mod=`; staged, not installed |
| `instructions-mod-2.md` | MOD-2 (D15): installer with generic base profiles, per-base packages (Army on any base, Politics on TGC v 2.5.2), sprite check, DLL found through the `-mod=` list; S1-S8 answered |
| `instructions-u-12.md` | U-12: game check of 0.8.1 (TPL-3 Ctrl/Alt, TPL-4 detach and its log lines, LAW-4 screenshot) |
| `instructions-law-4.md` | LAW-4: Bill view buttons (Aye/Nay, Party, Both) do not stay ticked; what is known and the three cases |
| `instructions-tpl-5.md` | TPL-5: culture filter for Templates and Conform (primary + accepted, primary only); RE, mockup, code |
| `instructions-mod-3.md` | MOD-3 (D15): the Army package on vanilla 3.04 in game |
| `instructions-mod-1.md` | MOD-1 (D15, D16): per-module signature gates, drawing hooks chain, `tgcx.dll` behind a `lua51.dll` loader |
| `instructions-mod-0.md` | MOD-0 (D15): read-only launcher check with several mods: `-mod=` arguments, three mods, a dependency not ticked |
| `instructions-u-7.md` | short 0.3.5 game check (Reforms tab, Bill buttons, Decisions tab, a month with no popup) and rollback |
| `instructions-u-8.md` | first live template recruit, queue, local library, save/reload and side-by-side comparison on 0.4.0 |
| `instructions-u-9.md` | TPL-1 0.5.0 log probe: unit-panel hooks, stack/regiment read and registry round trip |
| `instructions-u-10.md` | TPL-1 game check: Conform button, window, one Conform, march and merge (passed on 0.6.2) |
| `report-tpl-1-research-1017.md` | 2026-10-17 | Conform: commands and new-stack id mapped, D13; §9 signatures and pure planner; §10 native wrappers, unit-panel hooks, DLL 0.5.0 (U-9 passed); §11 P43 province fix, 0.5.1 |
| `report-tpl-1-window-1017.md` | 2026-10-17 | Conform button and window (board 6), DLL 0.6.0: generator, preview, board deviations, gates; done, not tested in game |
| `instructions-tpl-1-visual.md` | TPL-1 next pass: fix the guarded GUI read fault, then make Conform look like native Victoria II windows (board 6) |
| `instructions-tpl-1.md` | Conform: scoped stack/move/merge/detach research after TPL-0 acceptance |
| `instructions-tpl-2.md` | Auto-replace regiments lost to rebellion: on hold (Conform covers it) |
| `instructions-tpl-0.md` | TPL-0: army templates; the `CConstructUnitCommand` findings, board questions, first DLL recruit |
| `law-1-affinity-review.md` | generated negotiation preferences: all 23 base groups approved; later user corrections welcome |
| `instructions-law-0.md` | LAW-0: one bill with favours and affinity (`press_rights`, United Kingdom) end to end, and its test in game (U-3); v3 adds the generated `event_modifiers.txt` and `tools/gen_laws.py` |
| `instructions-dll-0.md` | DLL-0: our own `lua51.dll` proxy that logs signatures and the upper house (confirms GH-2; U-4) |
| `instructions-u-4.md` | user test: install DLL-0, check main-menu behavior, compare upper-house log, save/load and removal |
| `instructions-dll-1.md` | 0.2.4 working, game-tested renderer/cadence/visibility; extended integration coverage outstanding |
| `instructions-dll-2.md` | DLL-2 user alias for HEMI-1; working, game-tested 100-seat prototype; visual polish outstanding |
| `instructions-u-5.md` | functional hover checkpoint passed; 0.2.8 header accepted; remaining integration checks |
| `instructions-hemi-3.md` | 0.2.6 hover accepted; 0.2.8 hover/header accepted in game |
| `instructions-hemi-2.md` | 0.2.5 works in game; saved evidence and known hover mismatch |
| `rea-for-templates.md` | user-suggested REA tooling: candidate evaluation for GH-4 and army templates; Windows x86 release boundary |
| `instructions-gov-0.md` | GOV-0: data for 1836 rulers and generals' portraits (Wikipedia, Wikidata, Commons) |

## Reports (dated snapshots; not rewritten)

Statuses in these summaries reflect when each report was written. Current
0.2.4 functional acceptance is in `report-u-5-1012.md`; earlier pending
statuses remain historical evidence. HEMI-2 0.2.5 works in game and is retained. HEMI-3 0.2.6 hover is accepted in game; 0.2.8 hover/header is accepted in game. See `report-law-1-start-1012.md` section 1.

| document | date | what |
|---|---|---|
| `report-modular-scope-1018.md` | 2026-10-18 | splitting TGCX into QoL/cosmetic/laws and more bases: generators measured on vanilla, HPM, TGC v 2.3.4/v 2.5.2, DoDFF; launcher facts; one DLL with modules; MOD-0..MOD-5 order; D15 |
| `report-u-7-1018.md` | 2026-10-18 | U-7 on 0.6.3 (0.3.5 law layer): partly passed; F1 rows not re-evaluated, F2 top-bar tooltip, F3 load test, F4 offer rule decided (D14), Bill text overflow; P46 |
| `report-mod-0-1018.md` | 2026-10-18 | launcher with several mods: one `-mod=` per mod, unticked dependency goes first, dependencies not enforced (TGCX alone crashed on vanilla, P49) |
| `report-v2d-1-1018.md` | 2026-10-18 | V2DLL `de66ee61` loaded tgcx.dll 0.7.0 as its mod plugin in game: passed; 7 FOREIGN sites, D3D chaining, all modules on |
| `report-mod-1-1018.md` | 2026-10-18 | per-module gates and one logic DLL: 0.7.0 built and staged, not tested in game |
| `report-tpl-1-slots-1018.md` | 2026-10-18 | Conform stopped after a long game: leaked unit-panel slots (P47); 0.6.5 fix staged |
| `report-u-11-1018.md` | 2026-10-18 | U-11 on 0.6.4: F1, F2, F3 and D14 pass in game; G1 » missing in Arial12 bold; G2 Withdraw cooldown is by design; G3 log tally after a new game |
| `report-law-3-1018.md` | 2026-10-18 | LAW-3 0.6.4: Reforms rows rebuilt on offer change, alert filter, load test out of the default install, D14 offer rule and board 1, Bill text fitted; done, not tested in game |
| `report-u-8-extended-1018.md` | 2026-10-18 | U-8 extended cases on 0.6.3: one-regiment, paused repeat, partial recruit, Military reopen, fresh-process reload; all passed |
| `report-v2dll-mod-slot-1018.md` | 2026-10-18 | V2DLL 5.83 `LOAD_DLL_FROM_MOD_FOLDER`: first `-mod=` folder, loaded last in V2DLL's `DllMain`, `V2Mod_Init(V2ModAPI*)` with exe base; overlaps that disable today's TGCX gate; no licence; options (a)/(b)/(c), recommends (a) [user] |
| `report-tpl-0-visual-1017.md` | 2026-10-17 | 0.4.1 placement confirmed by the anchor log and screenshots; 0.4.2 board-5 detail pass (native sprites, ring, covers, miniatures, texts); retained deviations; installed, not tested in game |
| `report-tpl-0-placement-1017.md` | 2026-10-17 | 0.4.1: build-root matrix is owner-relative (P40); anchor sums the owner chain; translated-parent fixture; installed, not tested in game |
| `report-research-discord-1017.md` | 2026-10-17 | Discord Cheat Engine notes and smedley_kernel (LGPL-3.0) checked against our build: 59 RVAs on function starts, 10 decompiled; prestige `+0xEA0`, unit list `+0x7B4`, loans, leadership, research points; army/regiment/pop/economy offsets external (I) |
| `report-law-2-reforms-1017.md` | 2026-10-17 | 0.3.5: visible buttons, Reforms tab per board 1, `tgcx_` decisions hidden (P39), DLL popups skipped; 4 more deviations; installed, not tested in game |
| `report-tpl-0-runtime-1017.md` | 2026-10-17 | user accepts nine-regiment recruitment/save-reload; logs/preferences match; detached panel/top-bar overlap remain visual work |
| `report-tpl-0-panel-1017.md` | 2026-10-17 | 0.4.0 native Templates panel/local preferences/engine-command recruit installed; gates pass, U-8 pending; nine board deviations and paired rollback |
| `report-tpl-0-research-1017.md` | 2026-10-17 | TPL-0 static research: brigade command ABI, validity slot, pop capacity, build view; 25 runtime + 5 research guards; D12 answers incl. Conform to template; recruit module fixture-tested, not wired |
| `report-law-2-controls-1017.md` | 2026-10-17 | 0.3.4: board layout, every control, Crown/debt timers, automatic favours; 10 board deviations; installed, not tested in game |
| `report-law-2-bill-1013.md` | 2026-10-13 | LAW-1 short smoke accepted; Bill native GUI/command prototype, gates, deviations and rollback; 0.3.0 installed, not tested in game |
| `report-law-2-mockup-scope-1016.md` | 2026-10-16 | acceptance scoped to position/layering repair; matching Bill mockup remains mandatory R10 work |
| `report-law-2-visual-1016.md` | 2026-10-16 | user accepts 0.3.3 placement/chart/foreground screenshot; original saved, broader interactions separate |
| `report-law-2-live-1016.md` | 2026-10-16 | live 0.3.2 projection/list-order evidence, 0.3.3 corrected and installed; game check pending |
| `report-law-2-position-1016.md` | 2026-10-16 | 0.3.1 off-screen failure; absolute native setter and movable background, 0.3.2 installed, game check pending |
| `report-law-2-layout-1016.md` | 2026-10-16 | user screenshot shows 0.3.0 position/layer failure; native foreground/transform repair 0.3.1 checked/installed, game check pending |
| `report-u-6-test-workflow-1013.md` | 2026-10-13 | short player smoke test, coordinator coverage and verified one-command automatic/log bundle; no new live acceptance |
| `report-law-1-report-fix-1013.md` | 2026-10-13 | U-6 screenshot exposes every conditional option; restored one-event report dispatch, 24 catalogue tests; fix installed, retest pending |
| `report-law-1-native-1012.md` | 2026-10-12 | native trace/import, all base affinities, balanced conserved counts, 23 catalogue/7 installer tests; installed candidate and rollback, U-6 pending at that date; report UI superseded on 2026-10-13 |
| `report-law-1-start-1012.md` | 2026-10-12 | HEMI-3 0.2.8 acceptance; catalogue preview/tests, ten affinity approvals, approved native vote model, bounded research and handoff |
| `report-law-1-tgc-support-1012.md` | 2026-10-12 | installed TGC versus vanilla reform rules; recommendation before user model approval |
| `report-initial-1012.md` | 2026-10-12 | feasibility, downloads, executable signatures, RTTI, TGC v 2.3.4 versus v 2.5.2, Ghidra analysis |
| `report-sub-0-1012.md` | 2026-10-12 | SUB-0: submod layout, installer, gates, the U-2 checklist (U-2 passed: results in `ROADMAP.md` §1) |
| `report-law-0-1012.md` | 2026-10-12 | LAW-0: what was generated, gates, the simulation, decisions taken while building, deviations from the Bill mockup, what U-3 must check |
| `report-dll-0-1012.md` | 2026-10-12 | DLL-0 Release/Win32 build, provenance, relocated signatures, hook/Lua/installer tests; not tested in game |
| `report-dll-0-install-1012.md` | 2026-10-12 | authorized DLL installation on E:\; active/original hashes verified; U-4 gameplay still pending |
| `report-hemi-3-seam-1012.md` | 2026-10-12 | 0.2.7 seam feedback; native artwork border measured, cover aligned at y=101; 0.2.8 built/checked/installed, visual confirmation pending |
| `report-hemi-3-header-1012.md` | 2026-10-12 | user accepts 0.2.6 hover; 27 runtime guards/three UK mappings/empty errors; cover clipped below header, 0.2.7 built/checked/installed, visual confirmation pending |
| `report-hemi-3-1012.md` | 2026-10-12 | verified native scalar bounds/slice hooks, shared seat hover and safe fallback; 27 guards/native/GPU/installer gates pass; 0.2.6 installed, not tested in game |
| `report-hemi-2-handoff-1012.md` | 2026-10-12 | user confirms 0.2.5 works, reports tooltip mismatch; original screenshot and accepted log saved; HEMI-3 next |
| `report-hemi-2-startup-1012.md` | 2026-10-12 | live 0.2.5 startup, 5945 chart draws, no guarded failures, empty errors; user visual/integration acceptance pending |
| `report-hemi-2-build-1012.md` | 2026-10-12 | recovered polish, redirected check-runner/metadata fixes, GPU feather coverage; 0.2.5 DLL/submod installed, game acceptance pending |
| `report-u-5-1012.md` | 2026-10-12 | user confirms 0.2.4 works but looks clunky; 2687 ordered draws/paused samples/empty errors; functional checkpoint accepted, polish/extended coverage remain |
| `report-dll-12-layering-fix-1012.md` | 2026-10-12 | 0.2.3 stable/drawing but covers native UI; live ordered-list diagnosis, 23 guards, real GPU occlusion/native state tests; 0.2.4 installed, game acceptance pending |
| `report-dll-12-tooltip-fix-1012.md` | 2026-10-12 | chart appeared then crashed; dump identifies structured tooltip copying, invalid return hook removed; 0.2.3 installed, stability pending |
| `report-dll-12-live-fix-1012.md` | 2026-10-12 | live CEU3Graphics/absolute-position diagnosis, complete ideology mapping, 0.2.2 built/tested/installed; chart acceptance pending |
| `report-dll-12-fix-1012.md` | 2026-10-12 | U-5 missing chart, final native Present/viewport repair, 18 guards and tests passed; 0.2.1 installed, not tested in game |
| `report-dll-12-1012.md` | 2026-10-12 | combined DLL-1/HEMI-1, scoped symbols, real D3D9 checks, installed 0.2.0; not tested in game |
| `report-u-4-1012.md` | 2026-10-12 | in-game proxy/upper-house test passed; indices 1/2/6 confirmed, rounding sum 32767, save/load evidence; callback cadence and full mapping remain unresolved |
| `report-research-1012.md` | 2026-10-12 | modding docs and prior art: how `dependencies`, `replace_path`, `user_dir` and localisation order work (P19, P20); what exists for each mechanic |
| `scripting-reference.md` | living | where to look before writing script: wiki pages, TGC idioms, facts measured on this install (P19-P23) |
| `tgc-howto.md` | living | TGC's systems each mechanic builds on: upper house read/shift, law changes, vote tallies in variables, political leaders, on_actions |

## Archive (`archive/`)

| document | what |
|---|---|
| `archive/instructions-dll-1-rectangle-1012.md` | rectangle-only scope before the user requested a combined hemicycle build; preserved verbatim |
| `archive/instructions-*-before-fix-1012.md` | DLL-1/DLL-2/U-5 instructions before the missing-chart repair, preserved verbatim |
| `archive/instructions-*-before-layering-fix-1012.md` | DLL-1/DLL-2/U-5 instructions before native layering repair, preserved verbatim |
| `archive/instructions-*-before-u5-acceptance-1012.md` | DLL-1/DLL-2/U-5 instructions before functional acceptance/status update; preserved verbatim |
| `archive/instructions-*-before-hemi2-build-1012.md` | pre-0.2.5 DLL-1/2, HEMI-2 and U-5 instructions, preserved verbatim |
| `archive/instructions-*-before-hemi2-handoff-1012.md` | HEMI-2/U-5 instructions before user functional acceptance, verbatim |
| `archive/instructions-*-before-hemi3-build-1012.md` | HEMI-3/U-5 instructions before the 0.2.6 native scalar-hover implementation, preserved verbatim |
| `archive/instructions-*-before-header-fix-1012.md` | DLL-1/2 and HEMI-3/U-5 instructions before 0.2.6 acceptance and 0.2.7 header correction, verbatim |
| `archive/instructions-*-before-seam-fix-1012.md` | DLL-1/2 and HEMI-3/U-5 instructions before correcting 0.2.7 seam from native artwork, verbatim |
| `archive/sessions.md` | **session log**: every close adds the completed `NEXT.md` and what was done (newest first) |
| `archive/instructions-law-1-before-native-1012.md` | pre-native-implementation instructions, preserved verbatim |
| `archive/instructions-*-before-report-fix-1013.md` | LAW-1/U-6 instructions before the conditional-option failure, preserved verbatim |
| `archive/instructions-u-6-before-short-test-1013.md` | full U-6 manual checklist before the player/coordinator split, preserved verbatim |
| `archive/law-design-v4-before-native-1012.md` | pending native-vote reference before implementation, preserved verbatim |
| `archive/law-design-v3-1012.md` | affinity-only projected-vote design before user approved TGC starting votes |
| `archive/instructions-*-before-law1-handoff-1012.md` | DLL/HEMI/U-5 instructions before 0.2.8 acceptance and LAW-1 handoff, verbatim |
| `archive/law-design-v1-stages.md` | staged law design (D7 v1, like Better Politics Mod); superseded on 2026-10-12 by favours and affinity |
| `archive/instructions-law-0-v1-stages.md` | LAW-0 instructions for the staged design; superseded on 2026-10-12 |
| `archive/law-design-v2-1012.md` | law design v2 (favours and affinity) before it was rebuilt on TGC's idioms; superseded by v3 on 2026-10-12 (same mechanic, different plumbing) |
| `archive/instructions-law-0-v2.md` | LAW-0 instructions v2; superseded by v3 on 2026-10-12 |
| `archive/instructions-dll-0-research-1012.md` | DLL-0 instructions and research handoff before implementation; archived verbatim on 2026-10-12 |
| `archive/instructions-dll-0-pre-u4-1012.md` | implementation handoff before U-4, preserved verbatim; superseded by tested status |

## Outside the repository

| what | where |
|---|---|
| Interface mockups (politics, bill, head of state and generals, economic history, templates), built with the game's and TGC's sprites and bitmap fonts | <https://claude.ai/artifact/Wt2YTaaM6xV8JXsUwapRV4>. **Private**: it contains game and TGC art, not to be shared (R8, `AGENTS.md` §13). PNG exports in `../mockups/`. The scripts that extract the sprites and fonts are not in git. Translated to English on 2026-10-12 (boards: Main, Bill, Ruler, Economy, Templates). PNGs re-exported on 2026-10-12 with `tools/mockups/export.py` (boards and assets in `E:\v2re\mockups`, outside git; after republishing the artifact, refresh the boards there first) |

LAW-2 superseded instructions retained verbatim: `archive/instructions-law-1-before-law2-1013.md`, `archive/instructions-u-6-before-law2-1013.md`.

LAW-2/U-7 instructions before the 0.3.1 repair are retained verbatim in
`archive/instructions-law-2-before-layout-fix-1016.md` and
`archive/instructions-u-7-before-layout-fix-1016.md`.

Instructions before 0.3.2 are retained in `archive/instructions-law-2-before-position-fix-1016.md`
and `archive/instructions-u-7-before-position-fix-1016.md`; the original
0.3.0 instructions are in the corresponding `before-layout-fix-1016.md` files.

Before-live-fix LAW-2/U-7 instructions are archived in the corresponding
`archive/instructions-*-before-live-fix-1016.md` files.

LAW-2/U-7 instructions before the acceptance-scope clarification are preserved
in `archive/instructions-*-before-mockup-clarification-1016.md`.

LAW-2/U-7 instructions before the 0.3.4 controls are preserved in
`archive/instructions-*-before-controls-1017.md`.

LAW-2/U-7 instructions before 0.3.5 are preserved in
`archive/instructions-*-before-reforms-1017.md`.

TPL-0 instructions before the native panel are retained verbatim in
`archive/instructions-tpl-0-before-panel-1017.md`.

TPL-0/U-8 instructions before runtime acceptance are retained verbatim in
`archive/instructions-tpl-0-before-runtime-1017.md` and
`archive/instructions-u-8-before-runtime-1017.md`.

- [TPL-1 0.6.3 visual candidate](report-tpl-1-visual-1017.md): army styling, lifetime guards, gates and limits.
- [TPL-1 0.6.3 installation/player check](instructions-tpl-1-063-check.md): next steps.
