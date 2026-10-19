# Report I-0 — Bootstrap: feasibility, downloads, executable, TGC and Ghidra

> **Report** (2026-10-12; not rewritten — translated to English on the
> same day under D10). What is current is in `ROADMAP.md` §1-§2.

---

## 1. Feasibility (the user's question)

Can rulers with portraits, a hemicycle, law negotiation, army templates and
more economy charts be added with what
`maxioten/Victoria2-Reverse-Engineering` documents, or is a more extensive
decompilation needed?

**Answer:** neither. The repo covers economy, AI, events, technology,
diplomacy, triggers, RNG and the daily tick (179 functions, 83 globals, 130
structure fields in `Symbols/`). It does **not** cover the GUI system, the
upper house and reforms, leader generation or recruitment. Targeted RE per
subsystem is needed, not a full decompilation.

What makes it practical is **V2DLL**
(`artyom-kuznetsov/V2DLL_Victoria-2-Extension`, documented in the RE
repo's `Patch/PATCHES.md`): a `lua51.dll` proxy that already hooks the
views (`CPoliticsView`, `CBudgetView`…), connects `.gui` buttons to its own
code, hooks D3D9 `Present` and reads a country's script variables.

| Mechanic | Script only | With DLL | RE missing |
|---|---|---|---|
| Law negotiation | yes, largely | to change the reform button's rule | the function that decides whether a reform is voted |
| Economy charts | outside the game, reading saves | inside the game, drawing on top | the view's position; save/load |
| Hemicycle | no (P11) | yes, drawing on top | where the upper house lives in `CCountry` |
| Rulers with portraits | partial (no fixed portrait or random name) | yes | create/change a GUI sprite, or draw on top |
| Army templates | no | yes | `CConstructUnitCommand` and how a command is sent |
| Generals/admirals with portraits | **already exist** in HPM/TGC | — | — |

---

## 2. The executable

| What | Value |
|---|---|
| File | `v2game.exe`, 12 294 656 bytes (not `victoria2.exe`, P5) |
| SHA-256 | `62d48c204364dd706584777c2e2b3c7ab3c5f1dd0170872554943575d53d6648`, the same on `D:\` and `E:\` |
| V2DLL/RE signatures | 5 of 5 match (`tools/check_exe.py`, 2026-10-12); plus 2 of our own for the upper house (§4.2) |
| Named RTTI classes | **1 165** (distinct `.?AV…@@` in the binary) |

Classes that anchor each mechanic: see `AGENTS.md` §4. The most useful,
found at the end of the session:

- **`CUpperHouse`** and **`CUpperHouseTrigger`**: the upper house has its
  own class and a trigger that reads it; GH-2 comes down to following its
  `Evaluate`.
- **74 `C*Command` commands**, among them `CSetVariableCommand`,
  `CExecuteDecisionCommand` and the four `CSet*ReformCommand`: the DLL can
  change the game through a synchronised route (R5) by learning a single
  command and leaving the real change to the script
  (`docs/technical-plan.md` §1).

---

## 3. TGC

| What | Value |
|---|---|
| The user's version | v2.3.4 (`mod\TGC`; has junk in its root, P6) |
| Published tags | from `v0.9-alpha` to `v2.5.2` (43) |
| Latest stable | **v2.5.2**, 2025-05-29, commit `e06ade2`; its `TGC.mod` says v2.5.1 (P2) |
| `master` | last commit 2026-10-02, no version |
| Clone | `mod\TGC_v2.5.2` (589 MB), `core.autocrlf=false` (P1), `.mod` "TGC v2.5.2 (stable)" with `user_dir = TGC252` |

`tgc_scan.py --diff` v2.3.4 → v2.5.2: ideologies (4 groups, 9 ideologies),
49 law groups and 18 governments **identical**; in the interface only
`news.gui`, `topbar.gui` and `core.gfx` change. The event range 420 000 000
– 420 999 999 is free in both. (This is the inventory only: the trees
differ in 223 files, P18.)

TGC's official submods override whole files (P9): it is the model **not**
to follow (R3).

---

## 4. Ghidra

| What | Value |
|---|---|
| Version | 12.1.4 (2026-09-21), zip of 569 649 598 bytes, SHA-256 `ddac49f9…d4db` equal to the published one |
| Java | 21.0.5 (what it asks for: `application.java.min=21`) |
| Project | `E:\v2re\ghidra\v2game.gpr` |
| Analysis | headless, 12 GB heap |

### 4.1 Result

- **Auto-analysis: 752 s**, `Analysis succeeded`, saved. Expected warnings:
  a relocation at `0x013F8000` that clashes with data, WEVT resources from
  the system DLLs, and `VarnodeContext: out of address spaces` at
  `0x00C4F921`. None of them blocks anything that follows.
- **The repo's symbols:** the script did not compile on the first run
  (P15) and the analysis carried on without it. Fixed and run separately:
  **260 rows OK, 0 failed** (178 functions, 177 renamed and 1 that already
  had the name; 82 globals).
- **RTTI:** `ExportRtti.java` finds **1 500 vtables** (more than the 1 165
  classes by name: multiple inheritance and library classes). The 5 known
  vtables match: `CPoliticsView` `0x00E0E458`, `CBudgetView` `0x00E059F0`,
  `CProductionView` `0x00E0FECC`, `CTechnologyView` `0x00E17FA4`,
  `CDecision` `0x00E29B54`. Table in `docs/rtti-classes.md`.

### 4.2 First finding: the upper house (a preview of GH-2)

Slot 6 of `CUpperHouseTrigger` (`Evaluate`, `0x008FD2A0`) leads straight to
the data: **`CCountry+0x8B0` is the upper house** (`GetUpperHouse`,
`0x005E64D0`, is just `add eax,0x8B0`) and at its `+0x10` there is an
`int64[]` with each ideology's share, indexed by `CIdeology+0x28`, in 2¹⁵
fixed point. Read in the code, without running: it still has to be
confirmed with the game running. Detail and bytes in `docs/symbols.md`;
the two signatures, in `check_exe.py` (7/7 OK on `D:\` and `E:\`).

With this the hemicycle already has somewhere to read its data from: what
is missing is the drawing (DLL-1).

---

## 5. Tools created

| file | what |
|---|---|
| `tools/check_exe.py` | R2 gate: SHA-256 + 5 signatures |
| `tools/tgc_scan.py` | inventory of a TGC version and `--diff` between two |
| `ghidra/ImportV2Symbols.java` | imports `Symbols/functions.csv` and `globals.csv` |
| `ghidra/ExportRtti.java` | exports the RTTI vtables to Markdown (GH-1) |
| `ghidra/DecompileAt.java` | decompiles individual functions to a text file (outside git, R8) |

## 6. Pitfalls found

P1-P15 (`docs/pitfalls.md`), all from this session.
