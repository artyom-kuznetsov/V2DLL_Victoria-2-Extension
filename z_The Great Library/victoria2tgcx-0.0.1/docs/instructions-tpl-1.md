# TPL-1 - Conform an existing army to a template

2026-10-17. **Research started** (steps 2-4 partly done: `report-tpl-1-research-1017.md`, `symbols.md` TPL-1). Not implemented in the DLL; signatures, the pure planner/tracker, the native wrappers, the driver and the `CUnitView` hooks are in DLL 0.5.0 (U-9 passed; province fix P43 in 0.5.1, installed; report §9-11); U-9 is the probe (passed). **Steps 7-9 done in DLL 0.6.0** (`report-tpl-1-window-1017.md`): the Conform button and window, built and staged, not installed, not tested in game; **U-10** (`instructions-u-10.md`) is its game check. Step 6 answered: **D13 = A**, session tracking and re-Conform after a reload (report §7). §3.1, §3.2 and §3.4 answered (report §8): a recruit's future stack id is known at posting time. Next: install 0.6.0 after a normal exit and run U-10; safe paths chosen (D13). D12
already selects the mechanic. Read AGENTS R1-R10, D12, NEXT, the TPL-0
panel/research reports and `symbols.md` TPL-0 before starting. Do not
delegate, commit, push or control the game unless the user asks.

1. Open `mockups/6-conform.png`. The interface is the native stack panel's
   Conform button, a template picker and a Changes list, Conform and Cancel.
   Keep template selection per click, as already approved (D12).
2. Run `check_exe.py`. Study only `CUnitView`, `CReorgEntry`,
   `CWindowForSubUnitsEntry` and the necessary move/merge/detach/transfer
   commands in read-only Ghidra. No whole-executable decompilation.
3. Establish the selected army's stable identity, owner, province and
   regiment types. Determine how to resolve it again after movement,
   split/merge, disband, ownership changes and save/load. Do not persist
   raw engine pointers.
4. Confirm constructor, validity, execution and posting ABIs for
   `CMoveCommand`, `CMergeCommand`, `CDetachUnitCommand` and
   `CTransferSubUnitCommand`, plus how completed constructions identify
   their new regiments/armies. Every called RVA and offset needs evidence
   in `symbols.md` and relocation-aware guards before code uses it.
5. Define a pure diff/planner: retain matching regiments; extras detach
   into a new stack in the same province; missing regiments use the TPL-0
   recruit planner. Show the Changes list before issuing commands. Never
   disband an extra regiment merely to match a composition.
6. Determine what state is needed to track construction, march and merge
   after a save/reload. Reuse engine queues/orders where possible. If this
   requires a new user decision about persistence or behavior, prepare a
   concrete proposal and ask; do not choose a new simulation model.
7. Only after those contracts are established, generate the native stack
   button/picker from installed named anchors and implement via commands.
   The DLL must never write unit membership, position or strength directly.
8. Add meaningful fixtures for mixed compositions, missing/extra regiments,
   unavailable pops, cancelled construction, a missing target stack and
   invalid command guards. Run executable/TGC/native/GPU/installer gates.
9. Write a research/implementation report with exact evidence and board
   deviations. Write a U-card for construction, automatic movement and
   merging, extras, cancellation and save/reload. Only the user launches
   or exits; live acceptance and D5 multiplayer remain distinct.
10. Close under ROADMAP section 7, preserving completed instructions/NEXT
    verbatim and writing the following session's concrete steps.
