# TPL-0 - Army templates: the build command and the first recruit

2026-10-17. **Selected by the user** ("i'd like to actually move on to the
army templates"). This is the first card of mechanic 5. It continues GH-4:
how the engine queues one brigade, so that the DLL can queue N of them from
a template (R5). The interface spec is board **Templates**
(`mockups/5-templates.png`, R10).

**Status 2026-10-17:** step 1 is done (static, read-only):
`docs/report-tpl-0-research-1017.md` and `docs/symbols.md` § "TPL-0:
building a brigade", with 25 runtime and 5 research guards in
`check_exe.py`. Step 2 is answered (D12, report § 4): a local file, names
from the composition, native windows, recruit what fits. The user also asked
for **"Conform to template" on stacks in the field** (TPL-1, report § 4):
template picked per click, missing regiments built then marched and merged,
extras detached; its board is **Conform** (`mockups/6-conform.png`). Step 3: the recruit module `dll/tgcx/tgcx_templates.h`
is written and fixture-tested, not yet wired (report § 1, § 7); the native
panel and its button come next. The table below is the first reading and is
superseded by `symbols.md` (`FUN_00734120` is the destructor; the 0x14-byte
item in EDI belongs to the list entry, not to the 0x18-byte view row).

## What the board asks for

**Left panel, "Build Army: Templates":**
- the unit-type tabs;
- the template list: name, regiment count, days, composition icons such as
  4 infantry + 1 artillery + 1 hussar;
- "New Template";
- the composition editor: one row per unit type with its days and ◀ n ▶.

**Right panel, "Being built":** the native build queue (unit, province,
days left).

**Bottom bar:** "Recruit Template" and a summary line, for example "6
regiments, 18,000 men, ready in 120 days. One build order per regiment, from
provinces with free soldier pops."

## Known statically (2026-10-17, C static, not yet runtime-confirmed)

The Ghidra output is in `E:\v2re\logs\tgcx-tpl-research-1017\` (`refs-1.txt`,
`dec-1.txt`).

| what | VA | finding |
|---|---|---|
| `CConstructUnitCommand` vtable | `0x00E00CF4` | 15 slots (`docs/rtti-classes.md`) |
| constructor `FUN_0057D1B0` | `0x0057D1B0` | (this, unit type, province id, pop, country tag, country id); command id `0x5CA`; size `0x68` |
| UI recruit `FUN_00732520` | `0x00732520` | per selected row: allocate `0x68` (`FUN_00AAE9AF`), construct, post through `g_world+0xB24` → slot `0x44` → `+0x38` → slot `0x18`, the same queue the decision command uses; repeats `local_24` times (several brigades at once when the pop allows) |
| row data (EDI) | — | +0 pop id (registry lookup, low/high registries split at `0x1269`), +8 unit type (+0x39 flag), +0xC province (+0x58 id), +0x10 must be 0 |
| `CBuildUnitView` | vtable `0x00E12A14` | constructors `FUN_00733B80`, `FUN_00734120`; observer glues `0x00E12A30` (buttons), `0x00E12A5C` (scrollbar) |
| AI recruit | `FUN_0081EC90`, `FUN_0081EDB0` | also build the same command (useful as a second reading of the arguments) |

## Steps

1. **Decompile, read only,** with `ghidra/DecompileAt.java` and
   `ghidra/tgcx_Disasm.java`:
   - the caller of `FUN_00732520`;
   - the `CBuildUnitView` button handlers, found from the observer glue;
   - how the row list is built: which pops and provinces qualify per unit
     type, and where "free soldier pops" is decided;
   - the command's validity slot (slot 14, as `FUN_00906B40` is for
     decisions).

   Record the ABIs and offsets in `docs/symbols.md`, and promote every
   address the DLL will call to `check_exe.py` SIGNATURES.
2. **Design on the board (R10, D9), with the user** [user] for anything the
   board leaves open:
   - **Storage:** country variables (`tgcx_tpl<n>_<unit>`), saved and
     synchronised, edited through decisions the DLL sends (the LAW-2
     bridge).
   - **Template names:** fixed slots ("Template 1…") unless the user wants
     free text, which the script cannot store.
   - **Route per element:** for each element of the panel, choose between a
     native child window (as the Bill) and drawing.
3. **First recruit (DLL):**
   1. one button that queues one brigade of a fixed type, built exactly as
      `FUN_00732520` builds it;
   2. then N brigades from a hard-coded template;
   3. log every command;
   4. never write units or pops by hand (R5).
4. **Gates:**
   - `check_exe.py`;
   - a fixture test of the argument builder on synthetic rows;
   - `test_dll.ps1`;
   - then a short U-card: recruit a template, unpause, see N entries in
     "Being built", save and reload.

## Rules that matter here

- **R5:** units are only queued through `CConstructUnitCommand` posted to
  the engine queue, and multiplayer stays a later check (D5).
- **R6:** without the DLL nothing changes; templates are a DLL feature
  (`technical-plan.md` §6).
- **P12, P24, P31:** commands only; relocation-aware guards; verify each
  native ABI (stack cleanup, registers) before calling it.
