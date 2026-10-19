# ROADMAP.md — Status, decisions and session close for the TGCX submod

> **What this file is.** The project's status (what is done, with which
> numbers), the decisions, the risks and the closing procedure. **What
> happens next is not here: it is in `NEXT.md`**, the only place that says
> it. `AGENTS.md` is the contract (hard rules, conventions, pitfalls); if
> anything here contradicts it, `AGENTS.md` wins.

---

## 0. Map of the documents and how to use them

| question | where |
|---|---|
| What do I do now? | **`NEXT.md`** |
| What is done, and with which numbers? | this file, §1 |
| Which cards exist and what is each one's status? | `SUBAGENTS.md` §4 |
| How is a mechanic built? | `docs/technical-plan.md` |
| How does it stay compatible with TGC? | `docs/tgc-compatibility.md` |
| Hard rules, executable map, pitfalls | `AGENTS.md` (pitfall text in `docs/pitfalls.md`) |
| Why was something decided? | §3, `AGENTS.md` §9, `docs/archive/` |

1. Read `NEXT.md`, then §1 of this file, then the card in `SUBAGENTS.md`
   and its `docs/instructions-<card>.md`, and `AGENTS.md` §2, §7, §8 and
   §11.
2. Work on **one card at a time**; the next one does not start while the
   previous one is red. New pitfall: `Pnn` in `docs/pitfalls.md` and in the
   index in `AGENTS.md` §8 (the next one is **P59**).
3. **When closing the session: §7** (required).

**Process rules (not negotiable):**

| # | Rule | Why |
|---|---|---|
| V1 | Before using or adding an executable address: `python tools/check_exe.py` green and the new address added to its signatures | P8: the docs may come from another build |
| V2 | Every submod change that depends on TGC: `tools/tgc_scan.py` green on TGC v 2.5.2 | D1 (revised: v 2.5.2 only) |
| V3 | A mechanic is not done until the user sees it in game; until then it is written "done, not tested in game" | `AGENTS.md` §11 |
| V4 | No third-party material in git (executable, Ghidra project, TGC, V2DLL) | R8 |
| V5 | **[user]** decisions are not taken by the agent: it prepares the data, recommends and asks | R9 |
| V6 | A new address or offset comes with its evidence (Ghidra function, bytes, or a dated Cheat Engine reading) and its `conf` | so the next person does not inherit an assumption as if it were data |

---

## 1. Status by stage (as of 2026-10-19)

2026-10-19 ATCU release preparation: user selected release work, named Army Template and Conform Universal (ATCU), requested no em dashes and kept license undecided. Local0.0.1 candidate packages accepted0.10.4 DLL/loader with launcher-name-only mod change. ZIP49files/1,054,050bytes, five tests and clean/plugin probes pass, reproducible hash. Docs/provenance ready for review; derived-art publication status, recipient check and publication authorization pending. No commit/push/tag/upload/game changes. report-release-0-candidate-1019.md.

2026-10-19 Universal checkpoint: user accepts TGC2.5.2 + V2DLL5.82, completing vanilla/HPM/DoD/TGC short matrix on0.10.4. Preserved logs show11types,2builds,3/3detach; extended cases remain. Native/GPU and installer checks pass. User authorizes source commit/push and selects culture buttons next (TPL-5), continent-builder selection a prospective follow-up (TPL-6). User clarifies V2DLL code use is no problem; retain attribution. report-universal-tgc-passed-1019.md.

2026-10-19 TGC Universal installation: user confirms vanilla/HPM/DoD Universal0.10.4 work. Identical37-file payload installed after fresh normal-exit confirmation in isolated TGC2.5.2 + V2DLL5.82 copy; executable172 guards pass, protected hashes unchanged. Old Army/loader retained. TGC player check next; no game launched. report-universal-tgc-1019.md; instructions-mod-6.md.

2026-10-19 release assessment: DoD Universal0.10.4 short check accepted; preserved five builds,2/2detach,four recorded joins (last march pending). Public beta candidate, not ready as-is: Universal vanilla/HPM/TGC/V2DLL/recipient checks, game-derived art and borrowed-code provenance, license/credits/release documentation pending. No publication, external messages, push or game changes. report-release-readiness-1019.md; instructions-release-0.md.

2026-10-19 land polarity: user accepts DoD Universal0.10.3 GUI; reachable recruitment failed (18/18 pops excluded, 0/4 built; 3/3 detach). Map+2A was misread: nonzero LAND. Corrected endpoint/path checks and independently exercised actual native naval/port policy. 0.10.4 passes 172 guards/native-GPU/12 installer tests and ZIP checks; installed three copies after fresh exit confirmation with full 0.10.3 rollback. DoD land retry next. report-universal-land-flag-1019.md.

2026-10-19 subtree correction: DoD0.10.2 failed again; full 29,113-byte log preserved, roots positioned but controls inaccessible. Real native-code fixture distinguishes root-only Show from secondary subtree activation. 0.10.3 activates children on hidden-to-visible transitions, 172 guards/native-GPU/12 installer + 8 Python tests pass; installed three Universal copies after fresh confirmed exit with full 0.10.2 backup. DoD retry next, no Universal acceptance. report-universal-subtree-1019.md.

2026-10-19 Universal visibility: first DoD0.10.1 test failed (game opened, controls absent). Log confirms loaded/shared-root construction. 0.10.2 adds first-show/reopen foreground, host hiding and placement diagnostics; native reference regression/GPU/12 installer + 8 Python checks pass. Installed three copies after confirmed exit; full 0.10.1 rollback. DoD retry first; no Universal acceptance. report-universal-visibility-1019.md.

2026-10-19 land-reach fix: user reports 0.9.0 overseas recruitment failure on all three bases; Universal not yet tested. User chose reachable land recruitment only with shortages. 0.10.1 shares route scope across preview/recruitment, releases stranded tracking, built/tested (169 signatures, native/GPU, 12 installer + 13 Python tests), installed in three Universal copies after fresh exit confirmation with full 0.10.0 backup. Runtime check next. report-conform-land-reach-1019.md.

2026-10-19 universal update: HPM/DoD 0.9.0 short checks accepted. Universal 0.10.0 prototype built/tested and installed as 37 identical new files in vanilla/HPM/DoD after fresh exit confirmation. Shared native GUI/live catalogue; compact DoD entry. Old packages/loaders retained. Runtime check next, vanilla first. report-mod-6-1019.md; report-mod-4-5-passed-1019.md.

2026-10-19 HPM/DoD preparation: two separate clean copies ready with our loader and Army0.9.0, source hashes and executable gates verified, installed after confirmed exit. HPM user check next, DoD follows. User approved universal package after those checks; initial native GUI factory evidence recorded, no new DLL behavior. docs/report-mod-4-5-prepared-1019.md.

2026-10-19 vanilla acceptance: **Templates and Conform short check passed**, user confirmation plus log 7/7 and 3/3 detach, four builds and all four march/merge completions. Extended persistence/Navy checks unconfirmed. HPM/DoD game checks next; one universal package discussed as MOD-6 proposal, no implementation selected. docs/report-mod-3-passed-1019.md.

2026-10-19 vanilla follow-up: **Templates passed** (two recruits, zero omitted); Conform opening failed. P53: fixed TGC y=68 covered by vanilla statistics; generator now follows effective header anchor (vanilla/HPM/DoD y=42, TGC unchanged). Six GUI tests plus catalogue/package checks pass; installed two generated GUI files after normal-exit confirmation, with backup. User retry next; report-mod-3-button-1019.md.

2026-10-19 Army priority: **TPL-3 accepted by user; 0.9.0 compatibility candidate built/tested, runtime pending**. Per-base catalogue/GUI/art generated and ZIPs verified for vanilla, HPM, TGC 2.3.4/2.5.2 and DoD. Current Conform screenshot supersedes old mockup. Culture filters and Politics wait. Separate clean vanilla + own-loader copy ready at work/Victoria-II-clean-vanilla-Army090 (the prior TGC copy has V2DLL). See docs/report-mod-5-1019.md, docs/report-mod-3-fresh-1019.md; MOD-3 game check next. E: stays accepted 0.8.2.

V2D-082 acceptance (2026-10-19): **passed** short fresh-user Army 0.8.2 + V2DLL 5.82 run after map-path repair; 5/5 extras arrived, five recruits queued, no plugin faults. `docs/report-v2d-082-passed-1019.md`. Remaining U-12/LAW-4 next.

Fresh-copy map path (2026-10-19): V2DLL 5.82 loaded Army 0.8.2 successfully; base then failed on hardcoded mod/TGC definition.csv. Repaired fresh canonical layout and descriptor after confirmed exit; TGC files unchanged, old copy retained. `docs/report-fresh-map-path-1019.md`. V2D-082 gameplay retry next.

Combined V2DLL handoff (2026-10-19): user requested the upstream distribution included; prepared Army 0.8.2 + pinned V2DLL de66ee61 ZIP, CRC/source hashes verified. No game copy installed or launched. `docs/report-v2d-bundle-1019.md`; V2D-082 remains next.

TPL-4 runtime/fresh test (2026-10-19): 0.8.2 **passed detach** (3/3, 1/1, 6/6), no leftover extras/faults; our loader, Army only. Prepared clean original-Lua game + TGC with isolated profile and mod-only 0.8.2 ZIP for the user to install/test V2DLL. `docs/report-tpl-4-runtime-1019.md`; `docs/report-v2d-fresh-1019.md`; next `docs/instructions-v2d-082.md`.

TPL-4 follow-up (2026-10-19): 0.8.1 detach failed in game; built/tested/installed 0.8.2 after normal exit confirmation. Create and Transfers queued together; vanished targets reported. Game check pending; `docs/report-tpl-4-1019.md`, `docs/instructions-tpl-4-082-check.md`. Other U-12 parts unconfirmed.

Normal-launcher handoff (2026-10-18): mod-only 0.8.1 Army ZIP prepared, no installer or scripts; prior P50 evidence confirms Army precedes TGC in the normal launcher. `docs/report-army-launcher-1018.md`; U-12 pending.

Drop-in Army handoff (2026-10-18): user requested files without installer; prepared Army-only 0.8.1 ZIP with generated folder, descriptor, plugin, manual launcher and placement README. No live changes. `docs/report-army-drop-in-1018.md`; U-12 remains next.

Portable Army handoff (2026-10-18): automated setup/restore and the Army-only 0.8.1 ZIP prepared; Python/Pillow included, V2DLL prerequisite. Five transaction tests and portable generation checks pass. No live installation or launch. `docs/report-army-portable-1018.md`. U-12 remains next.

Private test handoff (2026-10-18): maxioten bundle prepared locally, with unchanged staged 0.8.0/0.8.1 DLLs and recipient-side generators; no installation or external send. `docs/report-maxioten-test-1018.md`. U-12 remains next.


MOD-2/TPL-4 update (2026-10-18): **0.8.0 (MOD-2) installed and tested in game**: per-base packages Army and Politics on TGC v 2.5.2, loader finds `tgcx.dll` through the `-mod=` list, templates carried over between settings folders (`docs/report-mod-2-1018.md`). **0.8.1 installed, not tested in game**: TPL-3 Ctrl/Alt-click, TPL-4 Conform detach verified and retried with refusal fields logged; LAW-4 open (`docs/report-tpl-4-1018.md`). Next: U-12 (`docs/instructions-u-12.md`).

MOD-1 update (2026-10-18): **0.7.0 installed and passed the game check (2026-10-18)** (`docs/report-mod-1-1018.md`). Signature gates are per module (stages; drawing+laws; Templates; Conform), V2DLL's sites are logged FOREIGN and block nothing, and the logic is `tgcx.dll` behind a `lua51.dll` loader, with a `V2Mod_Init` export for V2DLL (D16). Installed on E: 2026-10-18 (0.6.5 backed up to `before-070-dll`).

U-7/U-8 update (2026-10-18): **U-8 extended cases all passed on 0.6.3; U-8 complete** (`docs/report-u-8-extended-1018.md`). **U-7 partly passed** on the 0.3.5 law layer: buttons, bill flow, purchases, Decisions tab, monthly tick and popup filter work; the Reforms tab does not re-evaluate rows (F1), the top-bar tooltip lists `tgcx_` decisions (F2), the load test is still installed (F3), long names overflow the Bill (`docs/report-u-7-1018.md`). D14 decided; LAW-3 next.

TPL-1 update (2026-10-17): **0.6.3 army-style GUI installed on E: and accepted in game**. Automatic gates and installed hashes pass; paired 0.6.2 rollback retained. User reports "works"; current 0.6.3 log has no guarded GUI read fault. Extended coverage and new screenshot comparison remain unconfirmed. See `docs/report-tpl-1-visual-1017.md` and `docs/instructions-tpl-1-063-check.md`.

| # | Stage | Status | Numbers / evidence |
|---|---|---|---|
| 0 | **Infrastructure** | **done** | TGC v 2.5.2 cloned (tag, `e06ade2`, 589 MB, no line-ending conversion); Ghidra 12.1.4 (zip SHA-256 equal to the published one); refs: RE repo `e299a02`, V2DLL `5d6f894`; initial `check_exe.py` 7/7 OK on `D:\` and `E:\`; TPL-0 gate now SHA-256 + 91 runtime signatures OK (`check_exe.py` ALL OK, 2026-10-17) on `E:\`; `tgc_scan.py` OK on v 2.3.4, v 2.5.2 and HPM; Ghidra analysis 752 s, 260/260 symbols imported, 1 500 vtables (`docs/report-initial-1012.md` §4) |
| 1 | Submod skeleton + loading | **done** (SUB-0 + U-2, 2026-10-12) | loads on v 2.5.2 and v 2.3.4 (settings folders `TGC252_TGCX`, `TGC_TGCX`; `setup.log` lists our 2 files; `error.log` empty); `000_tgcx_` override wins; one event per click; install + remove leaves `mod\` identical (211 entries); P19-P21 found on the way |
| 1b | TGC version matrix | **deferred** (D1 revised: v 2.5.2 only) | v 2.3.4 ↔ v 2.5.2: what the submod uses is the same except `news.gui`, `topbar.gui`, `core.gfx` (the trees differ in 223 files, P18) |
| 2 | Law negotiation (script) | LAW-1 short smoke accepted; LAW-2 0.3.3 placement/layering accepted; 0.3.4 board layout, controls and automatic favours: look accepted by the user ("splendid"); 0.3.5 visible buttons, Reforms tab, Decisions filter and no DLL popups: **U-7 partly passed in game (2026-10-18)**; F1 row refresh, F2 top-bar tooltip, F3 load test, D14 offer rule and Bill text overflow go to LAW-3, **0.6.4 installed, U-11 passed 2026-10-18** (G1 open) (`docs/report-law-3-1018.md`); Bill board 2 matches apart from listed deviations | 23 approved groups, 144 transitions; 27 catalogue / 8 GUI / 10 script installer tests; native controls/window/GPU fixtures and 8 DLL tests pass; `docs/report-law-2-controls-1017.md`; `docs/report-law-2-reforms-1017.md` |
| 3 | Charts outside the game (ECO-A) | pending | — |
| 4 | Ghidra: RTTI and subsystems | GH-1 steps 1-4 done; GH-2 hemicycle data/mapping/colours/coordinates and native ordered draw runtime-confirmed | 1 165 RTTI classes, 1 500 vtables; `docs/symbols.md`; `docs/report-u-5-1012.md`; 2026-10-17 external cross-check (Discord CE tables, smedley_kernel): 59 smedley RVAs on function starts, 10 decompiled, `docs/report-research-discord-1017.md` |
| 5 | DLL base | DLL-0/U-4 done; DLL-1 **working prototype, tested in game on 0.2.4**; extended integration coverage still open | 23 guards, Win32 /MT, 128 forwards and native/GPU/installer gates passed; U-5 log: 11133 frames, 2687 ordered chart draws, paused cadence, show/hide, empty errors |
| 6 | Hemicycle | HEMI-1 (DLL-2) **working prototype, tested in game**; user accepts function but says it looks clunky; HEMI-2 0.2.5 works in game; HEMI-3 0.2.6 hover **accepted in game**; 0.2.8 hover/header correction **accepted in game** | 100 seats/seven rows, native ordered GUI pass, native tooltip retained; `docs/report-u-5-1012.md`; 27 runtime guards, 5555 ordered draws, three UK native hover mappings; extended U-5 coverage remains; `docs/report-hemi-3-seam-1012.md` |
| 7 | Charts in game (ECO-B) | renderer prerequisite available as a working prototype; GH-5/save-history work still needed; not selected | — |
| 8 | Rulers and generals | GOV-0 data ready (D4); DLL-1 prototype available for future UI; not selected | TGC v 2.5.2: 297 historical leaders, 44 own portraits; rulers: none |
| 9 | Army templates | **TPL-0 0.4.0 functional prototype accepted in game; 0.4.1 placement (owner-chain anchor, P40) confirmed in game; 0.4.2-0.4.4 board-5 details, Recruit (P41), reopen (P42) and navy tab accepted in game (0.4.4)**; TPL-1 Conform: research, native layer (0.5.0/0.5.1, U-9 passed), the Conform button and window (**0.6.2 accepted in game**, `docs/report-tpl-1-window-1017.md` §8), and the **0.6.3 332x594 native army-panel visual pass and flush placement tested and accepted in game** (`docs/report-tpl-1-visual-1017.md`); **U-8 extended cases all passed on 0.6.3 (2026-10-18)**; native Military build panel, local composition-named library, engine-command recruit; automatic replacement of regiments lost to rebellion (TPL-2) is on hold: Conform covers it | user screenshots/logs confirm 4 infantry + 4 artillery + 1 hussar and save/reload; `docs/report-tpl-0-runtime-1017.md`; 0.4.1: translated-parent fixture, `docs/report-tpl-0-placement-1017.md`; 0.4.1 anchor log (1104,490) and 0.4.2, `docs/report-tpl-0-visual-1017.md`; 144 runtime guards; native/reference-window/GPU and 8 DLL installer/Lua tests; 5 Conform GUI/rollback tests; `docs/report-tpl-1-visual-1017.md` |

---

## 2. The version matrix

2026-10-19 ATCU release preparation: user selected release work, named Army Template and Conform Universal (ATCU), requested no em dashes and kept license undecided. Local0.0.1 candidate packages accepted0.10.4 DLL/loader with launcher-name-only mod change. ZIP49files/1,054,050bytes, five tests and clean/plugin probes pass, reproducible hash. Docs/provenance ready for review; derived-art publication status, recipient check and publication authorization pending. No commit/push/tag/upload/game changes. report-release-0-candidate-1019.md.

2026-10-19 Universal checkpoint: user accepts TGC2.5.2 + V2DLL5.82, completing vanilla/HPM/DoD/TGC short matrix on0.10.4. Preserved logs show11types,2builds,3/3detach; extended cases remain. Native/GPU and installer checks pass. User authorizes source commit/push and selects culture buttons next (TPL-5), continent-builder selection a prospective follow-up (TPL-6). User clarifies V2DLL code use is no problem; retain attribution. report-universal-tgc-passed-1019.md.

2026-10-19 TGC Universal installation: user confirms vanilla/HPM/DoD Universal0.10.4 work. Identical37-file payload installed after fresh normal-exit confirmation in isolated TGC2.5.2 + V2DLL5.82 copy; executable172 guards pass, protected hashes unchanged. Old Army/loader retained. TGC player check next; no game launched. report-universal-tgc-1019.md; instructions-mod-6.md.

DoD Universal0.10.4 short GUI/recruit/land/detach/march-merge check accepted by user; snapshot has4/5join entries, last pending. Universal vanilla/HPM/TGC/V2DLL and extended cases still pending.

DoD Universal0.10.3: short interface check accepted; land filter failed. 0.10.4 polarity correction installed, runtime pending. Universal vanilla/HPM/TGC/V2DLL untested.

Universal0.10.2 DoD retry failed despite created/positioned roots. Universal0.10.3 subtree activation installed in three copies, runtime pending. No Universal base accepted.

Universal0.10.1 DoD: loaded/created shared roots but controls missing, failed. 0.10.2 visibility candidate installed in three copies, runtime retry pending. Other Universal bases unaccepted.

0.9.0 overseas edge case failed in vanilla/HPM/DoD per user. Local short checks remain accepted. Universal 0.10.1 land-reach correction installed in three copies, runtime untested.

Latest: 0.9.0 vanilla/HPM/DoD short checks accepted; extended cases and TGC0.9 regression pending. Universal0.10 has passed automated dependency checks against five bases, installed in three, **no runtime acceptance yet**. HFM absent. Earlier entries below are historical snapshots.

HPM and DoD 0.9.0 own-loader test copies installed/verified; neither has runtime acceptance yet. User HPM check next.

Vanilla Army 0.9.0 short recruit/Conform/detach/march/merge check passed (report-mod-3-passed-1019.md). Other 0.9.0 base runtime checks still pending.

Vanilla 0.9.0: Templates accepted by user and recruitment log; Conform opening correction installed, retry pending (report-mod-3-button-1019.md). Other base runtime rows remain pending.

2026-10-19 Army 0.9.0 preparation: vanilla/HPM/TGC 2.3.4/TGC 2.5.2 have 11 land types; DoD has 13 and 24 strip frames. All generated and package checks pass; all 0.9 runtime rows pending, HFM absent. Details in report-mod-5-1019.md. Politics retains D1.

2026-10-18 refresh: TGC v 2.5.2 scan and generator gates pass; MOD-2 0.8.0 packages tested in game on v 2.5.2; 0.8.1 installed, not tested in game. Vanilla (Army only) is MOD-3, not yet installed.

| version | `tgc_scan.py` | generator | loads in game |
|---|---|---|---|
| **v 2.5.2 (stable) — the target (D1)** | OK (2026-10-18, 0.6.3 gates) | LAW-0/LAW-1 gates pass; short U-6 smoke accepted; LAW-2 0.3.4 look accepted, 0.3.5 U-7 partly passed; LAW-3 0.6.4 installed, U-11 passed (G1 open); TPL-0 0.4.4 accepted, U-8 complete; TPL-1 0.6.3 accepted in game | yes (U-2/U-3/U-4); DLL-1/HEMI-1 0.2.4 functional checkpoint accepted in U-5, 0.2.5 accepted and retained; 0.2.6 scalar hover accepted; 0.2.8 hover/header accepted; LAW-1 corrected report/Count/save-reload smoke accepted; LAW-2 0.3.3 placement/layering and 0.3.4 look accepted; TPL-0 0.4.4 and TPL-1 0.6.3 tested and accepted in game |
| v 2.3.4 (the user's old install) | OK (2026-10-12) | — | yes, skeleton only (U-2); no longer tested |
| `master` | not cloned | — | — (deferred) |

---

## 3. Decisions

Full table in `AGENTS.md` §9. Closed on 2026-10-12: D1, D2 and, in the
user's fourth answer, D4-D7; after the mockups, D9; at the end of the day,
D10:

| ID | Decision | Where it applies |
|---|---|---|
| D4 | rulers **and** generals, starting with the 1836 ones | `docs/instructions-gov-0.md` |
| D5 | multiplayer **later**; the script is still written compatible (R5) | `AGENTS.md` R5 |
| D6 | our own DLL; marked V2DLL code may be used (personal use) | `AGENTS.md` R8, P13; `docs/instructions-dll-0.md` |
| D7 | **political favours and ideological affinity**, deterministic; LAW-1 uses TGC conditional starting votes, affinity for bargaining/promises (user approved 2026-10-12) | `docs/law-design.md`; `docs/instructions-law-0.md` |
| D9 | **hybrid interface, case by case**: each element chooses drawing on top (A) or a real game element (B) | `docs/technical-plan.md` §9.1; every interface card records its choice |
| D10 | **everything in English**: code, docs, file names, in-game text, chat | `AGENTS.md` §7; the whole repository was translated on 2026-10-12 |
| D1 (revised) | **TGC v 2.5.2 only**; other versions deferred | `AGENTS.md` §1; `docs/tgc-compatibility.md` (header) |
| D11 | favours: **virtual purchases per bill; automatic accrual like diplomatic points; the rate from prestige, stability, militancy, consciousness, voting pop, monarch/leader support** | `docs/law-design.md` §5, §11; mockup Bill board |
| D12 | army templates (user, 2026-10-17): **stored in a local file** written by the DLL (not in the save); **names built from the composition**; **native windows** generated from TGC's `.gui` (route B); when soldier pops run short, **recruit what fits** and report the rest. Added the same day: a **"Conform to template" button on stacks in the field**; the template is **picked on each click**; missing regiments are **built, then marched to the stack and merged** by the DLL (engine move/merge commands); extra regiments are **detached into a new stack** | `docs/report-tpl-0-research-1017.md` §4; `docs/instructions-tpl-0.md` |

| D13 | Conform: **session tracking; re-Conform after a reload** gathers finished unattached regiments (user, 2026-10-17) | `docs/report-tpl-1-research-1017.md` §4; `docs/instructions-tpl-1.md` |
| D15 | **Templates + Conform: their own package that works almost anywhere**; D1 still holds for laws; LAW-3 first, then MOD-0..MOD-5 (user, 2026-10-18). Sub-decisions S1-S8 the same day: Army on any base (generic), packages Army ("Army Templates and Conform", no `user_dir`) and Politics (TGC v 2.5.2, `user_dir` TGCX), later Economy and Cosmetic; one folder per base; own HPM descriptor; DLL in package folders; `mod\TGCX` replaced | `docs/report-modular-scope-1018.md` §6; `docs/instructions-mod-2.md` §2 |
| D16 | V2DLL: **(a) keep our own `lua51.dll` proxy now; (b) after MOD-1, one logic DLL `tgcx.dll` behind two thin loaders** (our proxy, and V2DLL by its mod slot or a setting) once the signature gate is per mechanic (user, 2026-10-18) | `docs/report-v2dll-mod-slot-1018.md` §5-6 |
| D14 | Reforms tab offer: **only bills whose decision passes its own `allow`, and backward steps only where the game allows a backward reform** (user, 2026-10-18) | `docs/report-u-7-1018.md` F4; `docs/instructions-law-3.md` §4 |

Open:

| ID | Question | What the user is shown |
|---|---|---|
| D3 | Submod name and prefix | provisional `TGCX` / `tgcx_` |
| — | V2DLL `v2dll_mod.dll` slot | `docs/report-v2dll-mod-slot-1018.md`: options (a)/(b)/(c), recommends (a) own proxy |

---

## 4. Sessions left (estimate)

See `docs/technical-plan.md` §7. Until the first mechanic visible in game
(laws by script or charts outside the game): **2 sessions**. Until the
hemicycle: **4-6**. Templates: not estimated until GH-4 is finished.

---

## 5. Main risks

| Risk | Effect | What is done about it |
|---|---|---|
| The launcher does not respect the submod's load order (P10) | the submod cannot see TGC's content, or TGC hides the submod's | **resolved** in U-2: `dependencies` with TGC's exact `name` (P19) |
| A TGC version renames a law or a GUI element | the mechanic silently stops having an effect | D1 revised: only v 2.5.2 is supported, so this only bites if the user upgrades TGC; `tgc_scan.py` + anchors still fail loudly |
| Creating GUI on the fly turns out too expensive to reverse | route A custom drawing still needs native ordering and hover ownership | D9 case by case: 0.2.4 hemicycle draws inside the ordered GUI pass (P28); native tooltip construction left intact (P27) |
| V2DLL has no licence (P13) | anything using its code could not be published | D6: personal use; everything taken is marked (R8) so it can be removed if it is ever published |
| Desync in MP (P12) | games cut short | R5; D5: MP later, but nothing written that would prevent it |
| The law clock (debate, favours, debt deadlines) stops on save/load | bills never come to a vote, debts never expire | law design v3: TGC's state-of-emergency idiom (a timed modifier, saved with the country, plus a polled event); U-3 saved and loaded mid-debate: the modifier held (2026-10-12); polled events can lag a month (P23) |
| A different executable on another machine | no address is valid | `check_exe.py`; the DLL installs nothing if the signatures do not match (R6) |

---

## 6. Environments and startup

```powershell
cd C:\Users\JC\Downloads\victoria2template
python tools/check_exe.py                       # reference executable
python tools/tgc_scan.py --diff E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC_v 2.5.2\TGC
python tools/install_submod.py E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod   # install the submod (--remove to remove it)
E:\tools\ghidra_12.1.4_PUBLIC\ghidraRun.bat     # project E:\v2re\ghidra\v2game.gpr
```

The game is started from the launcher (`victoria2.exe`) by choosing the
mod; the stable version's `.mod` is called **"TGC v 2.5.2 (stable)"**.

---

## 7. Session close (required)

When closing, in this order:

1. Add to the top of `docs/archive/sessions.md` the `NEXT.md` you had at
   the start (full text) and what was done.
2. Rewrite `NEXT.md`: the user's decisions from this session, the next
   session in order, the table of cards with status and instructions.
3. **Write `docs/instructions-<card>.md` for every card of the next
   session** that lacks a current one, and add them to `docs/README.md`.
4. Update §1-§2 of this file and the status in `SUBAGENTS.md` §4.
5. One line below with the date and what was done (newest first).

2026-10-19 ATCU release preparation: user selected release work, named Army Template and Conform Universal (ATCU), requested no em dashes and kept license undecided. Local0.0.1 candidate packages accepted0.10.4 DLL/loader with launcher-name-only mod change. ZIP49files/1,054,050bytes, five tests and clean/plugin probes pass, reproducible hash. Docs/provenance ready for review; derived-art publication status, recipient check and publication authorization pending. No commit/push/tag/upload/game changes. report-release-0-candidate-1019.md.

2026-10-19 Universal checkpoint: user accepts TGC2.5.2 + V2DLL5.82, completing vanilla/HPM/DoD/TGC short matrix on0.10.4. Preserved logs show11types,2builds,3/3detach; extended cases remain. Native/GPU and installer checks pass. User authorizes source commit/push and selects culture buttons next (TPL-5), continent-builder selection a prospective follow-up (TPL-6). User clarifies V2DLL code use is no problem; retain attribution. report-universal-tgc-passed-1019.md.

2026-10-19 TGC Universal installation: user confirms vanilla/HPM/DoD Universal0.10.4 work. Identical37-file payload installed after fresh normal-exit confirmation in isolated TGC2.5.2 + V2DLL5.82 copy; executable172 guards pass, protected hashes unchanged. Old Army/loader retained. TGC player check next; no game launched. report-universal-tgc-1019.md; instructions-mod-6.md.

2026-10-19 release assessment: DoD Universal0.10.4 short check accepted; preserved five builds,2/2detach,four recorded joins (last march pending). Public beta candidate, not ready as-is: Universal vanilla/HPM/TGC/V2DLL/recipient checks, game-derived art and borrowed-code provenance, license/credits/release documentation pending. No publication, external messages, push or game changes. report-release-readiness-1019.md; instructions-release-0.md.

2026-10-19 land polarity: user accepts DoD Universal0.10.3 GUI; reachable recruitment failed (18/18 pops excluded, 0/4 built; 3/3 detach). Map+2A was misread: nonzero LAND. Corrected endpoint/path checks and independently exercised actual native naval/port policy. 0.10.4 passes 172 guards/native-GPU/12 installer tests and ZIP checks; installed three copies after fresh exit confirmation with full 0.10.3 rollback. DoD land retry next. report-universal-land-flag-1019.md.

2026-10-19 subtree correction: DoD0.10.2 failed again; full 29,113-byte log preserved, roots positioned but controls inaccessible. Real native-code fixture distinguishes root-only Show from secondary subtree activation. 0.10.3 activates children on hidden-to-visible transitions, 172 guards/native-GPU/12 installer + 8 Python tests pass; installed three Universal copies after fresh confirmed exit with full 0.10.2 backup. DoD retry next, no Universal acceptance. report-universal-subtree-1019.md.

2026-10-19 Universal visibility: first DoD0.10.1 test failed (game opened, controls absent). Log confirms loaded/shared-root construction. 0.10.2 adds first-show/reopen foreground, host hiding and placement diagnostics; native reference regression/GPU/12 installer + 8 Python checks pass. Installed three copies after confirmed exit; full 0.10.1 rollback. DoD retry first; no Universal acceptance. report-universal-visibility-1019.md.

2026-10-19 land-reach fix: user reports 0.9.0 overseas recruitment failure on all three bases; Universal not yet tested. User chose reachable land recruitment only with shortages. 0.10.1 shares route scope across preview/recruitment, releases stranded tracking, built/tested (169 signatures, native/GPU, 12 installer + 13 Python tests), installed in three Universal copies after fresh exit confirmation with full 0.10.0 backup. Runtime check next. report-conform-land-reach-1019.md.

2026-10-19 universal update: HPM/DoD 0.9.0 short checks accepted. Universal 0.10.0 prototype built/tested and installed as 37 identical new files in vanilla/HPM/DoD after fresh exit confirmation. Shared native GUI/live catalogue; compact DoD entry. Old packages/loaders retained. Runtime check next, vanilla first. report-mod-6-1019.md; report-mod-4-5-passed-1019.md.

2026-10-19 (HPM/DoD ready): separate copies verified and installed after exit; HPM game check next. Universal-package sequence approved, preliminary static factory evidence documented. No game launch/commit.

2026-10-19 (vanilla accepted): preserved successful log, short vanilla check passed; HPM/DoD next, universal package proposal recorded; no game changes.

2026-10-19 (vanilla button): Templates works; Conform opening coordinate fixed in generator and installed after exit. Two GUI files backed up; no DLL/base changes; retry next.

2026-10-19 (Army compatibility): 0.9.0 built/fixture-tested and five base packages verified; user confirms Ctrl/Alt and current Conform look; separate clean vanilla copy prepared after V2DLL correction. MOD-3 user game check next, culture/Politics deferred. No game launch or commit.

2026-10-19 (V2D-082 accepted): user and logs confirm Army 0.8.2 with V2DLL 5.82, 5/5 extras moved and five recruited. No new code or installation. Remaining U-12/LAW-4 next.

2026-10-19 (fresh map repair): corrected the prepared test copy to canonical mod/TGC after confirmed exit. V2DLL/Army startup succeeded; full game retry next.

2026-10-19 (V2DLL bundle): included pinned V2DLL distribution with Army 0.8.2 at user request; verified, no installations or launches. V2D-082 test next.

2026-10-19 (runtime acceptance/fresh copy): confirmed TPL-4 0.8.2 passed; prepared a clean game + TGC folder and 0.8.2 mod-only ZIP for user-installed V2DLL testing. No game launched.

2026-10-19 (TPL-4): 0.8.1 detach failed; 0.8.2 built, fixture-tested and installed after normal exit confirmation. Full 0.8.1 package backup retained. Next: short 0.8.2 game check.

2026-10-18 (normal-launcher handoff): removed scripts from sharing ZIP; confirmed prior Army-first launcher evidence. No live changes.

2026-10-18 (drop-in handoff): prepared the requested files-only Army 0.8.1 ZIP; no installation or launch. Existing next-card instructions remain current.

2026-10-18 (portable Army handoff): user narrowed sharing to 0.8.1 Army only; portable Setup/restore, backups and manual launcher packaged and verified. No live installation, launch or external send. U-12 next.

2026-10-18 (maxioten handoff): private test ZIP prepared, generator verified; no installation or external send. U-12 remains next.

2026-10-18 (close 33): 0.8.0 installed after a normal exit (backups `before-080-dll`, `before-080-submod`) and tested in game (three runs, P50: mods sorted by display name); 0.8.1 (TPL-3, TPL-4) installed (backup `before-081-submod`), not tested in game; LAW-4 and TPL-5 opened; handoff written (U-12, LAW-4, TPL-5, MOD-3 instructions). Nothing committed since 938681b.

2026-10-18 (MOD-2 built): 0.8.0 staged in `E:\v2re\logs\tgcx-mod2-1018\stage-080\`. Any `.mod` is a base (`tools/tgcx_bases.py`); the staged TGCX splits into Army (`tgcx_army_<base>`, no `user_dir`) and Politics (`tgcx_politics_tgc252`, `user_dir` TGCX) with a sprite/font check per base; Politics refused off TGC v 2.5.2; HPM gets our path-fixed descriptor; the loader loads `tgcx.dll` from the last ticked package and `tgcx.dll` switches modules per package; templates follow the settings folder. TGC v 2.5.2 packages byte-identical to the installed 0.7.0 TGCX. All gates green; not installed. `docs/report-mod-2-1018.md`.

2026-10-18 (MOD-0 runs 2-3): three mods load with no warning (`-mod=` OrganizedStacks, TGC, TGCX: a mod with an unticked dependency goes first); TGCX alone gets only `-mod=mod/TGCX.mod`, runs on vanilla and crashed after loading (likely the TGC-generated `country_politics.gui`'s 14 TGC-only sprites; inferred). `mod\` unchanged. P49. MOD-0 done; P19 needs a recheck (V2D-1 contradicts it). `docs/report-mod-0-1018.md`.

2026-10-18 (V2D-1): with V2DLL `de66ee61` installed and TGCX first on the command line, V2DLL loaded tgcx.dll 0.7.0 (`ModLoader … -> ok`); 146 OK + 7 FOREIGN (exactly V2DLL's sites), Direct3DCreate9 chained through V2DLL, slot 10 left alone, all modules on through ~11 months of play. TGCX script also worked with TGCX listed first (narrows P19). E: restored byte-identical to 0.7.0. Left: ask V2DLL for a load setting or a search of every `-mod=` (D16). `docs/report-v2d-1-1018.md`.

2026-10-18 (MOD-1 game check): the user played England on 0.7.0, "everything works rather normally"; log clean: 153 OK, all modules on, Bill/Reforms/hemicycle/Templates/Conform active, four P47 slot frees (first live confirmation). MOD-1 done; V2DLL path untested.

2026-10-18 (MOD-1 install): after a normal exit, backed up 0.6.5 (`lua51.dll` `9528c982…` and its record) to `before-070-dll` and installed 0.7.0; installed hashes equal the stage, record card `MOD-1`. Game check next.

2026-10-18 (MOD-1): built 0.7.0 (`docs/report-mod-1-1018.md`): per-module gates, Direct3DCreate9 chaining, slot 10 no longer asserted, `tgcx.dll` + `lua51.dll` loader, installer handles both and the 0.6.5 rollback. Gates green (153 signatures, tgcx_tests ALL OK, installer 11/11, check_exe). Staged in `E:\v2re\logs\tgcx-mod1-1018\stage-070\`; not installed. Repaired four control-character paths in AGENTS/NEXT/symbols.

2026-10-18 (MOD-0 run 1 / P47): run 1 played a year as France; the command line is `-mod=mod/TGC_v 2.5.2.mod -mod=mod/TGCX.mod`. Conform stopped: unit-panel slots leaked (P47). 0.6.5 frees them and logs a full table; built, tests pass, installed after a normal exit (backup `before-065-dll`), not yet tested in game (`docs/report-tpl-1-slots-1018.md`).

2026-10-18 (D16): committed LAW-3/U-11 (75e2077). The user chose V2DLL option (a) now and (b) after MOD-1. Next: MOD-0.

2026-10-18 (U-11): installed 0.6.4 after a normal exit (backups `before-064-*`); the user's check passed: D14 offer (15 rows lit, against about 38 in U-7), F1 target-only rows, F2 tooltip, F3 load test gone, clean logs. G1: the » arrow is missing in the small Bill font. Next: 0.6.5 for G1/G3 (`docs/report-u-11-1018.md`).

2026-10-18 (LAW-3): built and staged 0.6.4 (`docs/report-law-3-1018.md`): F1 Reforms rows rebuilt through `CPoliticsView` slot 11 and darkened while a bill is open; F2 `tgcx_` decisions skipped by the top-bar alert list (icon not covered); F3 load test only with `--load-test`; F4/D14 offer from TGC `allow` plus the native reform delay, no backward negotiation; Bill text fitted. Mockup board 1 republished. All automatic gates pass; not installed, not tested in game. Next: U-11.

2026-10-18 (U-7/U-8 checks): two side sessions ran the game checks on 0.6.3; nothing built or installed. U-8 extended cases all passed (complete). U-7 partly passed: F1 rows not re-evaluated with a bill open, F2 top-bar tooltip lists `tgcx_` decisions, F3 load test still installed, Bill text overflow. User decided D14 (offer only what the game allows, A+B). P46. Next: LAW-3 then U-11 (`docs/instructions-law-3.md`, `docs/instructions-u-11.md`).

2026-10-17 (TPL-1 visual): staged 0.6.3 with army-panel styling per user screenshot, lifetime guards/recovery and diagnostics. All automatic gates pass; not installed or tested in game. Next: normal exit confirmation, paired backup, installation and player check (`docs/instructions-tpl-1-063-check.md`).

2026-10-17 (TPL-1 window): Conform button and window, 0.6.0 to 0.6.2 (P44
marker lookup, P45 Merge size 0x4C, hover, D13 revised: build only).
**0.6.2 accepted in game**: builds march and merge, extras detach, no
crash, error logs empty. Pushed as `421bfc9`. Open: a guarded GUI read
fault. Next (user): the V2-style visual pass,
`docs/instructions-tpl-1-visual.md`. `docs/report-tpl-1-window-1017.md`.

2026-10-17 (TPL-0 runtime): user accepts nine-regiment recruitment and
save/reload; original screenshots, proxy/game logs and preferences preserved.
Both error logs empty. Detached panel/top-bar overlap remain visual repair
work; full U-8 and TPL-1 remain pending. `docs/report-tpl-0-runtime-1017.md`.

2026-10-17 (TPL-0 panel): native Templates tab/list/editor/Recruit, atomic
local preference file and guarded engine-command recruitment; 91 runtime
signatures, native/reference-window/GPU, 4 Templates GUI/rollback tests and
existing law gates pass. 0.4.0 installed; done, not tested in game (U-8).
All pre-existing submod files unchanged, paired 0.3.5 rollback retained.
Next: U-8, repairs/acceptance, then TPL-1 scoped research.
`docs/report-tpl-0-panel-1017.md`.

2026-10-17 (LAW-2 reforms): visible Bill buttons; Reforms tab rows lit per
board 1 and clicks present bills; `tgcx_` decisions hidden by the DLL list
filter (P39) and DLL-sent decision popups skipped (14 new guards, 62 total).
Gates pass; 0.3.5 installed, not tested in game. User selected army
templates: TPL-0 research started. `docs/report-law-2-reforms-1017.md`.

2026-10-17 (LAW-2 controls): Bill rebuilt on the 900 x 772 board with composed
installed art; every control through guarded native decision dispatch; Crown,
debts and timers from the timed-modifier list (6 new guards, 48 total);
automatic favour collection. Gates pass; 0.3.4 installed, not tested in game.
`docs/report-law-2-controls-1017.md`.

2026-10-16 (mockup scope clarification): user requires the Bill to match
its agreed mockup. 0.3.3 acceptance covers position/chart placement/layering
only; prototype appearance is not final or R10-accepted. Fidelity is required
implementation alongside full controls, not optional polish. NEXT and card
instructions corrected. `docs/report-law-2-mockup-scope-1016.md`.

2026-10-16 (LAW-2 visual acceptance): user accepted the 0.3.3 screenshot.
Bill centred, projected chart in left panel, Bill above Politics, no native
labels across lower controls. Original screenshot saved with verified hash;
current logs retained. Layout defect closed; full law mechanic unfinished.
`docs/report-law-2-visual-1016.md`.

2026-10-16 (LAW-2 live correction): user left 0.3.2 running. Read-only
snapshot confirmed raw render inputs differ from pixel matrix translation
and Bill overlay entry 170 precedes Politics backgrounds 256/257. Use scene
append and packed setter with positive screen coordinates; chart follows
actual matrix pixels. 0.3.3 native/GPU/installer/executable/TGC gates pass,
installed after user's normal exit, game check pending. P37; next P38.
Computer Use capture/recovery timed out; no GUI inputs sent.
`docs/report-law-2-live-1016.md`.

2026-10-16 (LAW-2 position/drag correction): user tested 0.3.1 while
work continued; Bill was off-screen and not draggable. Replaced centred
packed setter with native absolute x/y setter; checked persistent position
and render translation at three resolutions. Enabled native named-background
dragging. 0.3.2 DLL and regenerated GUI installed; 74 file/42 runtime gates,
seven law gates (25 catalogue/4 GUI/10 installer), native/GPU and eight
DLL installer/Lua tests pass. Game repair/drag check pending; P36; next P37.
`docs/report-law-2-position-1016.md`.

2026-10-16 (LAW-2 layout repair): user tested 0.3.0 and rejected its
layout; original screenshot/logs retained. Native foreground promotion on
opening and actual Bill render translation replace the parent-relative/
independent-chart mismatch. 0.3.1 built, 73 file/41 runtime gates, seven
law checks, reference-engine window fixtures, real-GPU pixel/layer/state
and eight installer/Lua tests passed; installed reversibly on E:. Repair
is done, not tested in game; full LAW-2 unfinished. P35; U-7 repair check
next. `docs/report-law-2-layout-1016.md`.

2026-10-13 (LAW-2 Bill prototype): user confirmed LAW-1 smoke and selected
finishing laws before another mechanic. Native child/labels/Open/Close/Count,
guarded saved-variable model and ordered projected chart implemented;
0.3.0 built and installed with complete prior source/DLL rollback. 70 file
gates / 38 runtime guards, 25 catalogue / 3 GUI / 10 script installer /
8 DLL installer tests plus native/GPU pass. Prototype is not tested in
game; full actions and automatic favour accrual remain unfinished.
`docs/report-law-2-bill-1013.md`; LAW-2/U-7 selected, next P35.

2026-10-13 (U-6 simpler testing): replaced the full player assignment with
a short Present/Count/save-reload smoke test. Extended scenarios remain
coordinator coverage; added `tools/tgcx_check_laws.py` to run existing gates
and copy current logs into a new private bundle. No installation or game
launch; acceptance remains pending. Smoke evidence cannot substitute for
remaining live mechanics/native comparisons.

2026-10-13 (LAW-1 report correction): user screenshot showed every report
option, despite empty error/system_error logs. Preserved evidence and
restored conditional firing of one ordinary report after decision counting;
removed the interpreter's unsupported UI assumption. 24 catalogue tests
(including 231 valid tally combinations), seven installer tests, LAW-0 and
TGC scan pass. Corrected candidate installed on E:, pre-fix rollback retained;
DLL 0.2.8 unchanged. Generated decisions now 35,319,087 bytes; retest load
and presentation first. U-6 in progress, P34, next P35.
`docs/report-law-1-report-fix-1013.md`; online artifact remains pending.

2026-10-12 (LAW-1 native implementation): all base affinities approved;
imported TGC conditional starting support, balanced 100-seat counts and
fresh spending/target gates. 23 catalogue + 7 reversible installer tests,
LAW-0 byte identity, TGC scan and 45 file gates pass (27 runtime unchanged).
Installed game-test candidate on E:; complete LAW-0 rollback retained;
DLL 0.2.8 unchanged. No game run yet. Local low/high-pressure mockups
updated/exported; online browser still unavailable. U-6 next; P33, next P34.
`docs/report-law-1-native-1012.md`; `docs/instructions-u-6.md`.

2026-10-12 (LAW-1 start/handoff): user accepts HEMI-3 0.2.8; preserved
27-guard/1451-draw runtime and empty errors. LAW-1 preview: 23 groups,
46 entries, 144 transitions, nine blocs; 12 tests pass, LAW-0 byte identity
preserved. Ten affinity groups approved, thirteen pending. User approves
TGC starting votes + affinity bargaining after installed-script comparison.
Native vote migration and 100-seat conservation remain; no LAW-1 install.
Local mockup updated/exported; online artifact inaccessible (no browser).
`docs/report-law-1-start-1012.md`; instructions-law-1.md. User requested
handoff; no further implementation begun. Next P33.

2026-10-12 (HEMI-3 seam correction): user reports 0.2.7 cover short by
about two pixels. Measured actual native header artwork; 0.2.8 aligns cover
at first background row y=101, replacing text-maximum-derived y=104. GPU
checks preserve the border and cover the seam. All automatic gates pass;
installed with game closed, visual confirmation pending. 0.2.6 baseline
retained; P32 refined, next P33. `docs/report-hemi-3-seam-1012.md`.

2026-10-12 (HEMI-3 acceptance/header correction): user confirms 0.2.6 hover
works, reports header overlap. Preserved accepted runtime log/DLL: 27 guards,
5555 ordered draws, three UK hover mappings, empty errors. 0.2.7 clips the
cover below the header; all automatic gates pass, installed with game closed.
Visual correction not tested in game; 0.2.6 retained. P32, next P33.
`docs/report-hemi-3-header-1012.md`. LAW-1 remains for later discussion.

2026-10-12 (HEMI-3 implementation): bounded native scalar hover research,
shared seat geometry, guarded bounds/slice hooks and fallback. 0.2.6 built/
installed on E: with game closed; 27 guards, native/GPU/Lua/eight installer
checks and law checks pass. **Done, not tested in game**; one combined U-5
run next. 0.2.5 retained. User will consider LAW-1 after acceptance.
P31, next P32. `docs/report-hemi-3-1012.md`.

2026-10-12 (HEMI-2 acceptance/handoff): user confirms 0.2.5 works,
reports chart tooltip mismatch. Saved original 2560x1440 PNG and accepted
10032-draw log outside git, 23 guards OK, empty errors. HEMI-3 hover
integration next; extended U-5 coverage remains. P30, next P31.
`docs/report-hemi-2-handoff-1012.md`. No new build or replacement.

2026-10-12 (HEMI-2 build/check repair): recovered prior source polish, fixed
PowerShell redirected unittest output and HEMI-2 install metadata. New
GPU feather check and all automatic gates pass; 0.2.5 DLL/submod installed.
Game acceptance pending; combined HEMI-2/U-5 test next. P29, next P30.
`docs/report-hemi-2-build-1012.md`.

2026-10-12 (U-5 functional acceptance/docs): user confirms 0.2.4 works,
requests project/Markdown updates and notes clunky appearance. Preserved
11133-frame/2687-draw log, paused samples, show/hide and empty errors.
Working prototype now game-tested; do not claim all integration checks
passed. HEMI-2 polish queued with instructions; remaining U-5 coverage
bundled with that future build. No code/build/install changes.
`docs/report-u-5-1012.md`.

2026-10-12 (U-5 layering repair): user confirmed 0.2.3 works but draws
above native tooltips. 147442 frames/85103 chart draws and normal exit;
error logs empty. Native named overlay/ordered pass identified live.
0.2.4 built/tested/installed, 23 guards; real GPU layering and native state
checks passed. Game acceptance pending. P28 added, next P29.
`docs/report-dll-12-layering-fix-1012.md`.

2026-10-12 (U-5 crash repair): 0.2.2 chart displayed, then crashed. Dump
shows engine tooltip copying; removed guessed single-string suppression.
0.2.3 built/tested/installed; native tooltip left untouched. Stability/game
acceptance pending. `docs/report-dll-12-tooltip-fix-1012.md`.

2026-10-12 (U-5 live correction): read-only inspection confirms complete
ideology data and paused cadence. CEU3Graphics identity and absolute root
coordinates corrected; 0.2.2 built/tested/installed, 19 signatures green.
Chart game acceptance still pending. `docs/report-dll-12-live-fix-1012.md`.

2026-10-12 (U-5 repair): 0.2.0 chart absent; failed log preserved. Scoped
final-Present hook and viewport restoration built/tested/installed as 0.2.1.
Eighteen signatures, real D3D9 and eight installer/Lua tests passed. Exact
live blocker remains unconfirmed; U-5 retry with game kept open is next.
`docs/report-dll-12-fix-1012.md`.

2026-10-12 (DLL-1 + HEMI-1): combined at user request; renderer/100-seat
hemicycle, engine-name mapping, geometry/lifetime/tooltips built and installed.
Sixteen gates, real D3D9 and eight installer/Lua checks green. Both cards
**done, not tested in game**; one U-5 batch next. `docs/report-dll-12-1012.md`.

2026-10-12 (U-4 complete): user reports all steps worked; screenshots
match logged shares (83/5/12%, raw sum 32767), actual base 0x007D0000,
eight signatures OK. Error logs empty, January 6 reload in game.log.
DLL-0 tested in game; GH-2 core layout/data R, indices 1/2/6 confirmed.
Only one snapshot retained: cadence and full mapping/length remain
follow-up work. DLL-1 instructions written; see `docs/report-u-4-1012.md`.

2026-10-12 (DLL-0 installation): at the user's explicit request, ran the
installer on E:\ and verified active/original hashes and installation
record. U-4 gameplay pending; instructions start at §2. Evidence:
`docs/report-dll-0-install-1012.md`.

2026-10-12 (DLL-0 implementation): logging proxy built and automatically
verified (native hook fixtures, 128 forwards, real Lua execution and eight
installer tests); installer dry run passed. **Done, not tested in game**;
not installed, U-4 next (`docs/instructions-u-4.md`). P24 (ASLR-relocated
signature operands). REA reviewed and recorded for GH-4/templates; not
installed. Starting NEXT.md and research instructions archived.

2026-10-12 (U-3 complete): points 6-7 with a 60-day test build: a broken
promise (+2 militancy, the double-price modifier for 10 years), the 25-seat
lots, screenshots compared with the Bill board. P23 (a polled event fired a
month late). **LAW-0 done**; the normal build reinstalled.

2026-10-12 (LAW-0 and U-3 points 1-5): LAW-0 generated and installed;
the user played it: favours, bill, purchases, promise, save/load, veto
and pass all as designed, `error.log` empty. P22 (no hidden events: the
user's run of the `hidden = yes` test opened a window). Feedback "more
clicks than thought" -> 25-seat purchase lots (data `lots`), the Bill
board's lot selector (artifact v29, PNGs re-exported). Test build with
`debt_days` 60 installed for points 6-7.

2026-10-12 (U-2 and law design v3): U-2 passed on TGC v 2.5.2 and v 2.3.4
(after P19-P21: `dependencies` naming the TGC in use, `000_tgcx_`
localisation overrides, branching in the firing effect). The user revised
D1: **TGC v 2.5.2 only**, other versions deferred. Docs research
(`docs/scripting-reference.md`, `docs/tgc-howto.md`) and R10 (the mockups
are the spec). Law design v3 and LAW-0 v3 rebuilt on TGC's idioms: timed
modifiers + polled events (the state of emergency), step-chains, the count
inside decision effects (Vic2 has no hidden events, P22), `scaled_militancy`;
the Bill board mapped element by element; three options left to the user
(`docs/law-design.md` §11). Mockup PNGs re-exported (new favours medallion).

2026-10-12 (SUB-0 and D10): SUB-0 done, not tested in game: `submod\TGCX`
with a decision and two events that say which TGC is loaded (the
`great_gamer` flag that v 2.5.2 gives the UK), a `DEN` key overridden on
purpose, and `tools/install_submod.py` (install + remove leaves `mod\`
identical). P18: `tgc_scan.py --diff` compares the inventory, not the
files. The user decided D10: everything in English; the whole repository
was translated (file names included: `NEXT.md`, `SUBAGENTS.md`,
`docs/archive/`, `instructions-*`, `report-*`; cards LEY → LAW, GOB → GOV).

2026-10-12 (D7 revised and mockups): the user disliked BPM's stalling; D7
becomes **political favours and ideological affinity**, deterministic
(`docs/law-design.md` v2, LAW-0 rewritten; the earlier version, verbatim,
in `docs/archive/`). Interface mockups using the game's and TGC's sprites
and bitmap fonts (private artifact, link in `docs/README.md`): politics
with ruler, hemicycle and negotiation badges; bill; head of state and
generals; economic history; army templates.

2026-10-12 (decisions D4-D7): the user chose staged negotiation (D7), our
own DLL with marked V2DLL code (D6), 1836 rulers and generals (D4) and MP
later (D5). Law design in `docs/law-design.md` (sources: Vic3 dev diary 80
and Better Politics Mod); instructions for LAW-0, DLL-0 and GOV-0; P16 (no
`if`) and P17 (toolset `v145`).

2026-10-12 (bootstrap): feasibility analysis (for each mechanic: what
script gives, what needs the DLL, what is left to reverse); the user chose
TGC as the base (D2) and compatibility with any version (D1). Downloaded
TGC v 2.5.2, Ghidra 12.1.4, V2DLL; Ghidra analysis with the repo's symbols;
`check_exe.py` and `tgc_scan.py` gates; docs with the SMW port's layout.
At the end: RTTI inventory exported and the upper house found in the code
(`CCountry+0x8B0`). `docs/report-initial-1012.md`.

---

## 8. Checks: the scripts

| script | what it checks | exits with 1 if |
|---|---|---|
| `tools/gen_signatures.py [--check]` | shares the reference hash, 91 runtime signatures and relocation offsets with the DLL | reference mismatch, unsupported relocation or stale generated header |
| `tools/build_dll.ps1` | Release/Win32 proxy, shared signature header | generation or `/W4 /WX` build fails |
| `tools/test_dll.ps1` | native/real-D3D9 fixtures and eight installer/Lua tests, outside the game | fixture, forwarding, safety or round-trip test fails |
| `tools/install_dll.py <game> [--dry-run] [--remove]` | reference executable, original Lua identity, proxy exports, running-game gate; reversible rename installation/removal | foreign files, mismatch or active game; refuses mutation |
| `tools/check_exe.py [exe]` | SHA-256 and byte signatures of the reference executable | the hash or a signature does not match |
| `tools/tgc_scan.py <TGC> [--out x.json]` | inventory of what the submod uses; GUI anchors; event range | an anchor is missing or there are events in the reserved range |
| `tools/tgc_scan.py --diff <A> <B>` | what changes between two versions (inventory only, P18) | same, in either of the two |
| `tools/mockups/export.py [--src] [--out]` | re-exports the mockup PNGs and the overview from the boards in `E:\v2re\mockups` (R10) | Chrome fails or a board is missing |
| `tools/gen_laws.py [--tgc]` | generates the law mechanic from `data/tgcx_*.txt` + TGC's `issues.txt`; braces, unique keys | an option is missing in TGC, a key repeats, braces do not balance |
| `tools/test_gen_laws.py` | runs the generated decisions for the 1836 United Kingdom against the design's numbers | any number differs |
| `tools/test_law_catalog.py` | native support, allocation, negotiation, catalogue/migration and size behavior | any expected behavior fails |
| `tools/tgcx_check_laws.py` | one-command existing law gates and private log snapshot, including Bill GUI gates, without game control or installation | any automatic gate fails; live acceptance remains separate |
| `tools/tgcx_bill_gui.py --stage <private source> [--header]` | own Bill fragment/texture/localisation and catalogue header | protected staging, missing/duplicate named root or invalid layout |
| `tools/tgcx_templates_gui.py --stage <private source> [--header]` | native Templates fragment, installed unit metadata and private art | missing reviewed land types, bad stage or assets |
| `tools/test_templates_gui.py` | byte-preserving inherited/TGC GUI insertion, catalogue/asset/layout and staged rollback | a named anchor, real asset or rollback differs |
| `tools/test_bill_gui.py` | preserves installed GUI bytes outside insertion, fallback and metadata bounds | anchor, CSV or catalogue/layout check fails |
| `tools/test_install_submod.py` | staged installation, backup round-trip and failure safety | live state changes on a rejected operation or rollback differs |
| `tools/install_submod.py <mod> [--remove] [--tgc] [--source] [--dry-run] [--backup]` | stages generation, retains rollback, installs/removes `TGCX\` + `TGCX.mod`; refuses to delete a folder with files lacking `tgcx_` | the target is not ours or not a `mod\` folder |
| `ghidra/ImportV2Symbols.java` | imports `Symbols/*.csv` into the project | — (prints OK and failed rows; without that line it did not run, P15) |
| `ghidra/ExportRtti.java <output.md> <classes>` | regenerates `docs/rtti-classes.md` | — |
| `ghidra/DecompileAt.java <output> <VA>…` | pseudo-C of individual functions, to `E:\v2re\work\` (R8) | — |

### 8.1 What to run depending on what changes

| change | run |
|---|---|
| anything in the submod that names TGC things | `tgc_scan.py` on each version in §2 |
| the DLL or an address | `check_exe.py` |
| a generator operation (COMPAT-1) | the generator on each version in §2, twice (idempotent) |
| the submod's files | `install_submod.py` (reinstall) before U-tests |
