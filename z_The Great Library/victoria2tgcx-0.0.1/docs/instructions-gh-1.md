# GH-1 — Review the Ghidra analysis and export the RTTI inventory

> Step-by-step instructions (written 2026-10-12). Card in `SUBAGENTS.md`
> §4. If the 2026-10-12 analysis has already finished and step 3 was done
> in that session, the status is in `docs/report-initial-1012.md` §4: start
> with whatever is missing.

**Why:** every mechanic that needs the DLL starts from an RTTI class
(`AGENTS.md` §4). Before reversing any of them, we need to know the
analysis is sound, that the repo's symbols went in, and to have the list of
classes with their vtables at hand in `docs/`.

**Does not touch:** `submod\`, `dll\`, the game's files.

---

## Step 1 — The analysis finished cleanly

```powershell
Get-Content E:\v2re\logs\ghidra_console.txt -Tail 30
Select-String -Path E:\v2re\logs\ghidra_analysis.log -Pattern 'ERROR|Exception' | Select-Object -First 20
```

- `REPORT: Analysis succeeded` (or equivalent) and the program save must
  appear. `WARN Decompiling … Unable to read bytes` lines are normal (false
  pointers from data tables).
- If the analysis did not finish (the process died, out of memory): repeat
  with `GHIDRA_HEADLESS_MAXMEM=16G` (the machine has 32 GB) using the
  command in `AGENTS.md` §6.

## Step 2 — The repo's symbols went in

```powershell
Get-Content E:\v2re\logs\ghidra_script.log
```

It must end with `ImportV2Symbols: N rows OK (…), M failed`. Expected:
**N + M = 178 + 82 = 260** (rows without the header). Look at every
failure: if it is an address that is not in an executable section or a
duplicate name, note it in the report; if there are many, the executable is
not the reference one (P8): stop.

## Step 3 — Export the RTTI inventory

```powershell
E:\tools\ghidra_12.1.4_PUBLIC\support\analyzeHeadless.bat E:\v2re\ghidra v2game `
  -process v2game.exe -noanalysis `
  -scriptPath C:\Users\JC\Downloads\victoria2template\ghidra `
  -postScript ExportRtti.java C:\Users\JC\Downloads\victoria2template\docs\rtti-classes.md `
  "CPoliticsView,CBudgetView,CProductionView,CTechnologyView,CBuildUnitView,CConstructUnitCommand,CCreateUnitCommand,CLeader,CCreateLeaderCommand,CIssue,CIssueChange,CUpperHouse,CUpperHouseTrigger,CCommand,CSetVariableCommand,CExecuteDecisionCommand,CSetPoliticalReformCommand,CGuiObject,CEU3Gui,CButton,CCountry"
```

Check:

- The number of vtables is close to the **1 165 classes** counted by name
  (a class can have several vtables through multiple inheritance, and an
  abstract class may have none). Note both numbers.
- The known vtables match (gate):

| class | expected vtable VA | source |
|---|---|---|
| `CPoliticsView` | `0x00E0E458` | globals.csv |
| `CBudgetView` | `0x00E059F0` | V2DLL §5.1 |
| `CProductionView` | `0x00E0FECC` | V2DLL §5.1 |
| `CTechnologyView` | `0x00E17FA4` | V2DLL §5.1 |
| `CDecision` | `0x00E29B54` | V2DLL §5.2 |

If any does not match: the script is counting wrong (check `slots()`), not
the executable — `check_exe.py` has already guaranteed that.

## Step 4 — `docs/symbols.md`

Create `docs/symbols.md` (reference): a `VA | name | conf | evidence |
date` table for everything named by hand in Ghidra from now on. First row:
nothing (the header and the rule remain). Add it to `docs/README.md`.

## Step 5 — First look at the mechanics' classes

For each class detailed in `rtti-classes.md`: open slot 0 (destructor) and
the constructor in the Ghidra GUI (find who writes the vtable: references to
the vtable's address). The constructor gives the **object size**
(`operator new` with its size, just before) and the fields it initialises.
Note in the report, per class: size, constructor (VA), how many slots, and
whether any slot already has a name from the repo.

There is no need to understand the classes yet: that is GH-2 to GH-5.

---

## Gate (done when)

1. Step 1 with no errors and step 2 with `N + M = 260` and the failures
   explained.
2. `docs/rtti-classes.md` exists, with the 5 known vtables at their VA.
3. `docs/symbols.md` created and in the index.

## Delivery

Report `docs/report-gh-1-MMDD.md`: the analysis numbers (functions found,
time), rows imported and failed, vtables exported versus classes counted,
the step 5 table. New pitfalls as `Pnn`.
