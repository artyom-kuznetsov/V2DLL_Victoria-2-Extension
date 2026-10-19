# SUBAGENTS.md — The project, in cards

> How the work is split between the coordinator (the main session) and the
> subagents, and the status of each card. **What is done now: only
> `NEXT.md`.** Hard rules: `AGENTS.md` §2.

---

2026-10-19 ATCU release preparation: user selected release work, named Army Template and Conform Universal (ATCU), requested no em dashes and kept license undecided. Local0.0.1 candidate packages accepted0.10.4 DLL/loader with launcher-name-only mod change. ZIP49files/1,054,050bytes, five tests and clean/plugin probes pass, reproducible hash. Docs/provenance ready for review; derived-art publication status, recipient check and publication authorization pending. No commit/push/tag/upload/game changes. report-release-0-candidate-1019.md.

2026-10-19 Universal checkpoint: user accepts TGC2.5.2 + V2DLL5.82, completing vanilla/HPM/DoD/TGC short matrix on0.10.4. Preserved logs show11types,2builds,3/3detach; extended cases remain. Native/GPU and installer checks pass. User authorizes source commit/push and selects culture buttons next (TPL-5), continent-builder selection a prospective follow-up (TPL-6). User clarifies V2DLL code use is no problem; retain attribution. report-universal-tgc-passed-1019.md.

2026-10-19 TGC Universal installation: user confirms vanilla/HPM/DoD Universal0.10.4 work. Identical37-file payload installed after fresh normal-exit confirmation in isolated TGC2.5.2 + V2DLL5.82 copy; executable172 guards pass, protected hashes unchanged. Old Army/loader retained. TGC player check next; no game launched. report-universal-tgc-1019.md; instructions-mod-6.md.

Earlier dated updates below are historical snapshots.

Latest acceptance (2026-10-19): vanilla recruit/Conform/detach/march/merge passed. HPM/DoD next. Universal package research MOD-6 proposed, not selected (instructions-mod-6.md).

Latest vanilla update (2026-10-19): Templates passed; Conform button failed from TGC coordinates. P53 GUI-only correction installed after confirmed exit; user retry next (report-mod-3-button-1019.md).

Current update (2026-10-19): Army compatibility first, culture/Politics deferred. TPL-3 passed by user; MOD-5 implemented/fixture-tested in 0.9.0; MOD-3 separate clean vanilla copy ready, all 0.9 game checks pending. See report-mod-5-1019.md and report-mod-3-fresh-1019.md. No subagents used.

2026-10-19 universal update: HPM/DoD 0.9.0 short checks accepted. Universal 0.10.0 prototype built/tested and installed as 37 identical new files in vanilla/HPM/DoD after fresh exit confirmation. Shared native GUI/live catalogue; compact DoD entry. Old packages/loaders retained. Runtime check next, vanilla first. report-mod-6-1019.md; report-mod-4-5-passed-1019.md.

2026-10-19 land-reach fix: user reports 0.9.0 overseas recruitment failure on all three bases; Universal not yet tested. User chose reachable land recruitment only with shortages. 0.10.1 shares route scope across preview/recruitment, releases stranded tracking, built/tested (169 signatures, native/GPU, 12 installer + 13 Python tests), installed in three Universal copies after fresh exit confirmation with full 0.10.0 backup. Runtime check next. report-conform-land-reach-1019.md.

2026-10-19 Universal visibility: first DoD0.10.1 test failed (game opened, controls absent). Log confirms loaded/shared-root construction. 0.10.2 adds first-show/reopen foreground, host hiding and placement diagnostics; native reference regression/GPU/12 installer + 8 Python checks pass. Installed three copies after confirmed exit; full 0.10.1 rollback. DoD retry first; no Universal acceptance. report-universal-visibility-1019.md.

2026-10-19 subtree correction: DoD0.10.2 failed again; full 29,113-byte log preserved, roots positioned but controls inaccessible. Real native-code fixture distinguishes root-only Show from secondary subtree activation. 0.10.3 activates children on hidden-to-visible transitions, 172 guards/native-GPU/12 installer + 8 Python tests pass; installed three Universal copies after fresh confirmed exit with full 0.10.2 backup. DoD retry next, no Universal acceptance. report-universal-subtree-1019.md.

2026-10-19 land polarity: user accepts DoD Universal0.10.3 GUI; reachable recruitment failed (18/18 pops excluded, 0/4 built; 3/3 detach). Map+2A was misread: nonzero LAND. Corrected endpoint/path checks and independently exercised actual native naval/port policy. 0.10.4 passes 172 guards/native-GPU/12 installer tests and ZIP checks; installed three copies after fresh exit confirmation with full 0.10.3 rollback. DoD land retry next. report-universal-land-flag-1019.md.

2026-10-19 release assessment: DoD Universal0.10.4 short check accepted; preserved five builds,2/2detach,four recorded joins (last march pending). Public beta candidate, not ready as-is: Universal vanilla/HPM/TGC/V2DLL/recipient checks, game-derived art and borrowed-code provenance, license/credits/release documentation pending. No publication, external messages, push or game changes. report-release-readiness-1019.md; instructions-release-0.md.

## 1. Roles

| Role | Does | Does not |
|---|---|---|
| **Coordinator** | picks the card, builds the prompt (§2.2), reviews and integrates, updates `ROADMAP.md`, `NEXT.md` and this file, talks to the user | does not delegate [user] decisions or U cards |
| **Subagent** | one card, in its own folder or worktree, up to the gate | does not edit `AGENTS.md`, `ROADMAP.md`, `NEXT.md` or this file |
| **User** | decides (D3-D10), starts the game and says what they see, plays test games | — |

Much of this project cannot be verified without the game running: every
card that changes what is seen ends with a **U** card so the user can test
it.

---

## 2. Protocol

### 2.1 Before launching (coordinator)

```powershell
python tools/check_exe.py          # the base must print ALL OK
python tools/tgc_scan.py --diff E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC_v 2.5.2\TGC
```

**Ghidra:** a Ghidra project does not allow two writers. Only one subagent
at a time works in `E:\v2re\ghidra`; the others read its exports in
`docs/`.

### 2.2 The card (prompt template)

```
Task <ID> — <title>
Read (only this): <exact files and sections>
Context: <2-5 lines: why, what is done, starting numbers>
Do: <numbered, concrete steps>
Gate (done when): <exact commands and what they must print>
Do not touch: <other cards' files>
Deliver: <what goes in the report>
```

### 2.3 Fixed rules (copied into every prompt)

1. Work **only** on what the card says. Do not push.
2. **Do not edit** `AGENTS.md`, `ROADMAP.md`, `NEXT.md` or `SUBAGENTS.md`.
   New pitfalls and numbers go in the report; the coordinator integrates
   them.
3. Never touch the game's, TGC's or HPM's files in place (R1).
4. Every executable address you use: with its evidence and added to the
   signatures in `tools/check_exe.py` (V1, V6).
5. Never loosen a gate to reach it.
6. **Stop and report** if the gate is not met after 3 different attempts,
   if a "Do not touch" file needs touching, or if something contradicts the
   card or `AGENTS.md`. Report with evidence (tool output, addresses,
   bytes), not assumptions.
7. Final report: what you did, the gate's output, numbers with their tool,
   what you could not test (above all: "not tested in game"), new pitfalls
   written as `Pnn`.
8. Everything in English (D10): code, comments, docs, in-game text.
9. **Look it up before writing it:** start from `docs/scripting-reference.md`
   (the wiki) and `docs/tgc-howto.md` (TGC's own system for the same thing:
   extend it, don't build a parallel one), plus a working TGC example.
10. **The mockup is the interface spec (R10):** replicate the card's mockup
    board as closely as the engine allows (PNG in `mockups\`; the
    coordinator has the live artifact). List every deviation with its reason
    in the report. If the card changes the mechanic, say so: the mockup must
    be updated in the same session.

### 2.4 Review and integration (coordinator)

For every delivery: re-run the gate, read the whole diff, check that
nothing in "Do not touch" was touched, integrate pitfalls and numbers,
update §4.

---

## 3. Conflict map

| Resource | Who uses it | Rule |
|---|---|---|
| `E:\v2re\ghidra` | GH-* | one at a time |
| `submod\` | SUB-*, LAW-*, COMPAT-1 | one card at a time writes `tgcx_*` files; each mechanic in its own file |
| `dll\` | DLL-*, HEMI-*, ECO-B, GOV-*, TPL-* | one card at a time until DLL-0 sets up the structure |
| The installed game | U-* | only the user starts it |

---

## 4. Cards

### Card status (as of 2026-10-18)

2026-10-19 V2D-082 **passed**: user confirms, logs show 0.8.2 via V2DLL 5.82, 5/5 detach and five recruits queued. `report-v2d-082-passed-1019.md`. Remaining U-12/LAW-4 next; other scopes unconfirmed.



2026-10-19 V2D-082: plugin startup confirmed with V2DLL 5.82; game loading blocked by fresh-copy TGC map path, now repaired. Gameplay retry next. `report-fresh-map-path-1019.md`. No subagents.



2026-10-19 V2D-082: combined V2DLL + Army 0.8.2 ZIP ready at user request; fresh copy still unmodified. `report-v2d-bundle-1019.md`, current `instructions-v2d-082.md`. No subagents.



2026-10-19: TPL-4 **passed on 0.8.2** (three detaches). V2D-082 is next: new-user V2DLL test in prepared clean game + TGC folder, `instructions-v2d-082.md`. Other U-12 parts unconfirmed. No subagents.



2026-10-19 TPL-4: user confirms 0.8.1 failure. 0.8.2 installed after normal exit confirmation, native/GPU and installer gates pass; game check next (`instructions-tpl-4-082-check.md`, `report-tpl-4-1019.md`). TPL-3/LAW-4 results remain unconfirmed.



Normal-launcher handoff (2026-10-18): mod-only Army ZIP, no installer/scripts; prior launcher order rechecked. `docs/report-army-launcher-1018.md`; U-12 next.



Drop-in handoff (2026-10-18): Army-only 0.8.1 files and placement README packaged at user request, without installer. `docs/report-army-drop-in-1018.md`; U-12 next.



Portable Army handoff (2026-10-18): automatic Setup/restore and Army-only 0.8.1 portable ZIP prepared and verified. No subagents, live install or external send. `docs/report-army-portable-1018.md`; U-12 remains next.

Private handoff (2026-10-18): maxioten ZIP prepared and generator verified; no subagents or external send. `docs/report-maxioten-test-1018.md`; U-12 remains next.



U-7/U-8 update (2026-10-18): U-8 complete; U-7 partly passed; LAW-3 and U-11 added (`docs/report-u-7-1018.md`, `docs/report-u-8-extended-1018.md`).

TPL-1 update (2026-10-17): **0.6.3 army-style GUI installed on E: and accepted in game**. Automatic gates and installed hashes pass; paired 0.6.2 rollback retained. User reports "works"; current 0.6.3 log has no guarded GUI read fault. Extended coverage and new screenshot comparison remain unconfirmed. See `docs/report-tpl-1-visual-1017.md` and `docs/instructions-tpl-1-063-check.md`.

| ID | Title | Status | Instructions |
|---|---|---|---|
| I-0 | Downloads, Ghidra, gates, docs | **done** | `docs/report-initial-1012.md` |
| U-1 | Decisions D3-D7 | D4-D7 **closed** (2026-10-12); D3 (name) missing | `NEXT.md` §1 |
| GH-1 | Review the Ghidra analysis and export the RTTI inventory | **steps 1-4 done** (2026-10-12); step 5 missing | `docs/instructions-gh-1.md` |
| SUB-0 | Submod skeleton and load test | **done** (2026-10-12; tested in U-2) | `docs/instructions-sub-0.md`; `docs/report-sub-0-1012.md` |
| COMPAT-0 | Version matrix (`master` + `--matrix`) | **deferred** (D1 revised: v 2.5.2 only) | `docs/instructions-compat-0.md` |
| ECO-A | Economy charts outside the game | ready to start | `docs/technical-plan.md` §3 (instructions when chosen) |
| GH-2 | Upper house: where it lives in `CCountry` | hemicycle data/mapping/colours/coordinates and native ordered draw runtime-confirmed | `docs/symbols.md`; `docs/report-u-5-1012.md` |
| U-2 | Start the skeleton submod with v 2.3.4 and v 2.5.2 | **done** (2026-10-12): loads on both, override works, one event per click, logs clean | `docs/report-sub-0-1012.md` §4 |
| COMPAT-1 | Generator (N1), v 2.5.2 only: build the overrides from the installed TGC at install time | when the first card needs a fixed-name file (LAW-0 needs `event_modifiers.txt`) | `docs/instructions-law-0.md` step 0 (the seed) |
| LAW-0 | One bill with favours and affinity, end to end (`press_rights`) | **done** (2026-10-12, U-3 passed) | `docs/instructions-law-0.md`; `docs/report-law-0-1012.md` |
| U-3 | Play the LAW-0 bill (with a save/load halfway) | **done** (2026-10-12) | `docs/instructions-law-0.md` step 6 |
| LAW-1 | Catalogue for 23 groups / 46 direction entries | **short script smoke accepted**; broader engine coverage unconfirmed; 25 catalogue/10 installer tests pass | `docs/instructions-law-1.md`; `docs/report-law-1-report-fix-1013.md` |
| LAW-2 | Bill GUI and command bridge | 0.3.4 look accepted; 0.3.5 **checked in game (U-7, 2026-10-18): partly passed**; failures go to LAW-3 | `docs/instructions-law-2.md`; `docs/report-u-7-1018.md` |
| LAW-3 | Reforms rows refresh (F1), top-bar tooltip filter (F2), load test removed (F3), D14 offer rule + board 1, Bill text overflow | 0.6.4 installed, **U-11 passed** 2026-10-18; G1 open | `docs/instructions-law-3.md`; `docs/report-law-3-1018.md` |
| U-11 | Short game check of LAW-3 (0.6.4) | **passed** 2026-10-18 (`docs/report-u-11-1018.md`) | `docs/instructions-u-11.md` |
| MOD-0 | Read-only launcher check: command line, three mods, dependency not ticked (D15) | **done** 2026-10-18 (P49; open points in the report) | `docs/instructions-mod-0.md`, `docs/report-mod-0-1018.md` |
| V2D-1 | In-game run with V2DLL loading `tgcx.dll` as `v2dll_mod.dll` (MOD-1 step B, D16) | **done** (passed 2026-10-18; E: restored to 0.7.0) | `docs/instructions-v2d-1.md`, `docs/report-v2d-1-1018.md` |
| MOD-2 | Installer with generic base profiles and per-base packages (Army, Politics); sprite check; DLL found through the `-mod=` list (D15) | **done** (0.8.0 installed and tested in game 2026-10-18) | `docs/instructions-mod-2.md`, `docs/report-mod-2-1018.md` |
| LAW-4 | Bill view buttons do not stay ticked (user, 2026-10-18) | deferred while Army compatibility has priority | `docs/instructions-law-4.md`, `docs/report-tpl-4-1018.md` §3 |
| TPL-3 | Alt-click 2, Ctrl-click 5 in the Templates editor | **user-confirmed passed 2026-10-19** | `docs/report-tpl-4-1018.md` |
| TPL-5 | Culture filter (primary + accepted / primary only) for Templates and Conform | selected next after four-base Universal acceptance | `docs/instructions-tpl-5.md` |
| RELEASE-0 | ATCU0.0.1 files-only release candidate | prepared locally; review/publication pending | `docs/instructions-release-0.md` |
| TPL-6 | Continent selection in template builder | prospective design after TPL-5 | `docs/instructions-tpl-6.md` |
| U-12 | Game check of 0.8.1 (TPL-3, TPL-4, LAW-4 screenshot) | Ctrl/Alt + detach passed; Bill deferred | `docs/instructions-u-12.md` |
| MOD-3 | Army package on vanilla 3.04 in game (D15) | **short vanilla and Universal0.10.4 accepted**, extended pending | `docs/instructions-mod-3.md` |
| MOD-4 | Army on HPM | 0.9.0 and Universal0.10.4 short accepted; extended pending | `docs/instructions-mod-4.md` |
| MOD-5 | Runtime catalogue, DoD and TGC regression | DoD/TGC Universal short accepted; extended pending | `docs/instructions-mod-5.md` |
| MOD-6 | One universal Army package | vanilla/HPM/DoD/TGC+V2DLL0.10.4 short accepted; extended pending | `docs/instructions-mod-6.md` |
| TPL-4 | Conform detaches extras immediately | **passed on 0.8.2**, 2026-10-19 | `docs/report-tpl-4-runtime-1019.md` |
| MOD-1 | Per-module signature gates; `tgcx.dll` behind a `lua51.dll` loader, `V2Mod_Init` export (D16) | **done** (0.7.0 installed, game check passed 2026-10-18; staged) | `docs/instructions-mod-1.md`, `docs/report-mod-1-1018.md` |
| U-7 | Bill prototype visual/Count evidence | 0.3.3 placement and 0.3.4 look accepted; **0.3.5 partly passed** (2026-10-18): F1, F2 failed | `docs/instructions-u-7.md`; `docs/report-u-7-1018.md` |
| U-8 | First live template recruit and visual check | **complete** (2026-10-18): all extended cases passed on 0.6.3 | `docs/instructions-u-8.md`; `docs/report-u-8-extended-1018.md` |
| U-9 | Conform probe on 0.5.0 (log only) | **passed on 0.5.0** 2026-10-17 (P43 found, fixed in 0.5.1, installed; 0.5.1 confirmed) | `docs/instructions-u-9.md` |
| U-10 | Conform in game: button, window, one Conform, march and merge (0.6.0) | **passed on 0.6.2** 2026-10-17 (user: "it worked"; 0.6.0 P44 and 0.6.1 P45 fixed); visual pass next | `docs/instructions-u-10.md` |
| U-6 | LAW-1 catalogue game evidence | **short smoke passed**; user requests moving on, extended coverage unconfirmed | `docs/instructions-u-6.md` |
| DLL-0 | Our own `lua51.dll` proxy that logs signatures and the upper house | **done, tested in game** (U-4, 2026-10-12); installed on E:\; cadence coverage remains to verify in DLL-1 | `docs/instructions-dll-0.md`; `docs/report-dll-0-1012.md` |
| U-4 | Install DLL-0, play a few days, send the log | **done** (2026-10-12): screenshots/log match, clean errors, save/load | `docs/instructions-u-4.md`; `docs/report-u-4-1012.md` |
| DLL-1 | Renderer, cadence and Politics visibility | **working prototype, tested in game (0.2.4)**; extended coverage outstanding | `docs/instructions-dll-1.md`; U-5 report |
| U-5 | Combined renderer/hemicycle acceptance | **functional hover checkpoint passed**; 0.2.8 header accepted; extended integration coverage remains | `docs/instructions-u-5.md`; `docs/report-u-5-1012.md` |
| GH-3 | GUI: element positions and creation on the fly | after GH-1 | to be written |
| GH-4 | Engine commands: CConstructUnitCommand and posting | **TPL-0 static research/guards and recruit runtime-confirmed**; U-8 complete | `docs/symbols.md`; TPL-0 reports |
| GH-5 | Save/load: the save's name, the moment | after GH-1 | to be written |
| HEMI-1 | Hemicycle (user DLL-2 alias) | **working prototype, tested in game (0.2.4)**; visual polish outstanding | `docs/instructions-dll-2.md`; U-5 report |
| HEMI-3 | Match hover with rendered ideology | **0.2.8 hover/header accepted in game** | `docs/instructions-hemi-3.md`; `docs/report-hemi-3-seam-1012.md` |
| HEMI-2 | Visual polish of the working hemicycle | **0.2.5 works in game**, user-confirmed; tooltip mismatch remains; softer dots/background and bloc sweep | `docs/instructions-hemi-2.md` |
| ECO-B | Charts in game | DLL-1 prototype available; GH-5 still needed; not selected | — |
| GOV-0 | Data: 1836 rulers and generals' portraits | ready to start (no RE, in parallel) | `docs/instructions-gov-0.md` |
| GOV-1 | Rulers by script | waits for GOV-0, SUB-0 | — |
| GOV-2 | Ruler portrait/name (DLL) | DLL-1 prototype available; waits for GOV-1; not selected | — |
| TPL-0 | Native Templates panel, local library and first recruit | **0.4.4 accepted in game** (recruit, reopen, navy tab, queue clicks); U-8 extended cases passed on 0.6.3 | `docs/instructions-tpl-0.md`; `docs/report-tpl-0-visual-1017.md` |
| TPL-1 | Conform an existing army to a template | **0.6.3 tested and accepted in game** (2026-10-18): research done (commands, recruit stack id, Move, CUnitView); D13 revised; U-9 passed on 0.5.0/0.5.1; 0.6.2 Conform window accepted in game (U-10 passed); 0.6.3 332x594 native army-panel styling, flush placement and lifetime guards tested and accepted in game | `docs/instructions-tpl-1.md`; `docs/report-tpl-1-visual-1017.md` |
| TPL-2 | Replace regiments lost to rebellion automatically | **on hold** (user, 2026-10-17): TPL-1 Conform already restores the lost regiments | `docs/instructions-tpl-2.md` |

### I — Infrastructure

**I-0 (done, 2026-10-12).** See `docs/report-initial-1012.md`.

### GH — Ghidra

Always: the project is `E:\v2re\ghidra\v2game.gpr`; exports go to `docs/`
as a report or a table. What gets named in Ghidra is recorded in
`docs/symbols.md` with VA, name, `conf` and evidence.

- **GH-1** — review the analysis log and the `ImportV2Symbols` log, export
  the 1 165 RTTI classes with their vtable and slot count
  (`docs/rtti-classes.md`, generated), and the mechanics' classes with
  their slots resolved.
- **GH-2** — find the upper house's composition in `CCountry` (offset, type,
  how it is indexed by ideology). Three routes in `docs/technical-plan.md`
  §4.1.
- **GH-3** — `CGuiObject`/`CEU3Gui`: how to find an element's on-screen
  position by its name, and whether a new one can be created from a
  `windowType` in a `.gui` of our own.
- **GH-4** — `CConstructUnitCommand`: fields, constructor, who queues it and
  how it is sent in MP.
- **GH-5** — loading and saving a game: the file name and the moment, for
  our own per-save file.

### SUB / COMPAT — The submod and compatibility

- **SUB-0** — minimal `submod\TGCX\` + `TGCX.mod`: one test decision and
  event, our own localisation, installation by copy (not link) into
  `mod\`. Check the load order (P10).
- **COMPAT-0** — clone `master` separately, `tgc_scan.py --matrix` (several
  folders, one table), measure 2-3 old versions to know how much what we
  use moves.
- **COMPAT-1** — the generator of `docs/tgc-compatibility.md` §3.

### LAW, ECO, HEMI, GOV, TPL — The mechanics

Each is detailed in `docs/technical-plan.md` §2-§6 (laws: in
`docs/law-design.md`); their instructions are written when their turn
comes.

- **LAW-0** — one bill (`press_rights` → `free_press`), generated from our data:
  affinity, projected vote, purchases, promise, hearing, Crown; save/load
  test (U-3).
- **LAW-1** — the generator of every bill from the installed TGC version
  (anchors: the option names and their `allow`) and the full affinity
  table, reviewed group by group with the user.
- **GOV-0** — data only: `data\rulers_1836.csv`, `data\generals_1836.csv`,
  Commons portraits outside git.

### DLL

- **DLL-0** — D6: our own DLL (V2DLL code marked, R8), Win32 `v143`; a
  `lua51.dll` proxy that forwards everything and writes `Logs\tgcx.log`
  with the load base, the `check_exe` signatures and the player's upper
  house (confirms GH-2). Reversible install and uninstall (rename, never
  delete).
- **DLL-1** — guarded native GUI ordered drawing/final Present cadence and Politics
  lifetime/geometry; combined with HEMI-1 at user request.
- **DLL-2** — user alias for HEMI-1: 100 seats, seven rows and tooltips.
  0.2.4, HEMI-2 0.2.5 and HEMI-3 0.2.6 work in game. 0.2.8 header
  correction is accepted in game; extended U-5 coverage remains.

- **HEMI-2** — mockup-based visual polish of the working 0.2.4 hemicycle;
  consolidate visual changes and remaining integration tests in one run.

### U — User

- **U-1** — decisions D3-D7 (`ROADMAP.md` §3); D4-D7 closed, D3 missing.
- **U-2** — start the game with the skeleton submod on v 2.3.4 and on
  v 2.5.2 and report what is seen.
- **U-3** — play the LAW-0 bill with the United Kingdom, saving and loading
  with the debate halfway.
- **U-4** — install DLL-0, play a few days with the United Kingdom, send
  `Logs\tgcx.log` and the percentages of the upper-house pie chart.
