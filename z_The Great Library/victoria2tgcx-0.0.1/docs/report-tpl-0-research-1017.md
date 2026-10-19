# TPL-0 report: static research and the Templates board (2026-10-17)

Card: TPL-0 (`docs/instructions-tpl-0.md`), steps 1 to 3. Status: **static
research done; the board questions answered (D12); the recruit module is
written and fixture-tested but not wired into the game** (no button yet, so
nothing can be tested in game). Nothing was installed, the game was not
launched, the installed DLL 0.3.5 and its build were not rebuilt.

## 1. What was done

- Read-only Ghidra study of `CBuildUnitView`, the UI recruit path, the row
  choice and `CConstructUnitCommand` (output in
  `E:\v2re\logs\tgcx-tpl-research-1017\`). The findings, with addresses and
  ABIs, are in `docs/symbols.md` § "TPL-0: building a brigade".
- `tools/check_exe.py`: 25 runtime guards (the constructor, its argument
  stores and `RET 0x18`, the whole vtable, the validity slot, `operator new`,
  the command queue, the can-build predicate and the two pop-capacity helpers
  with their `RET`s, and every data offset the scan reads) and 5 research
  guards (the UI recruit and the build click). `check_exe.py` ALL OK;
  `gen_signatures.py` regenerated `dll/tgcx/tgcx_signatures.h` (87
  signatures, appended at the end; the DLL checks them all at load).
- **`dll/tgcx/tgcx_templates.h`** (new): a pure planner (each regiment on
  the soldier pop with the most free regiments that may build it, scarcer
  unit types first, ties in native order, the rest counted as left out); a
  read-only scan of the player's land unit types and soldier pops (free
  regiments and eligibility from the engine's own `FUN_00965870`,
  `FUN_00965930`, `FUN_005141D0`); and the sender: `operator new(0x68)`,
  `FUN_0057D1B0`, a vtable check, then the engine queue, one command per
  regiment, each one logged. All game reads are under SEH; nothing is
  written by hand (R5). `tgcx_InstallTemplates` checks the 25 guards first.
  It is **not called from `DllMain` yet**: the trigger comes with the
  native button (next step).
- **`dll/tgcx/tests/tgcx_templates_tests.h`** (new; two lines added to
  `tgcx_tests.cpp`): plan cases, a scan over synthetic engine-shaped memory
  (owned provinces, pop buckets, soldier type, country unit copies, naval
  excluded, blocked country, unreadable memory), the recruit with stub
  commands (4 queued and 1 left out; stop at a refused post; never post a
  wrong vtable), and the register/stack ABI of each native thunk against
  fakes (P31).

## 2. How the engine queues one regiment (summary)

1. `operator new(0x68)` (`FUN_00AAE9AF`, cdecl).
2. `FUN_0057D1B0(mem, unitType, provinceId, pop, countryTag, countryId)`,
   `__stdcall`, `RET 0x18`, returns the command.
3. Post it: `(g_world+0xB24)` vtable slot `0x44` → `+0x38` → vtable slot
   `0x18` (cmd). The same queue the reform and decision commands use (R5).
4. When it executes, slot 14 re-checks `FUN_005141D0` (controller, unit
   unlocked, province limit, the pop's free regiments) and slot 6 adds a
   `CMilitaryConstruction` to the province, which the native "Being built"
   queue then lists.

Free regiments of a pop are `FUN_00965870(pop,0) - FUN_00965930(pop,0)`;
constructions already queued on a pop count against it. A command beyond a
pop's capacity is dropped by the engine at execution, so the DLL must spread
a template over pops itself. The native UI builds several regiments from one
pop at once only behind an input check (inferred: a modifier key).

## 3. The Templates board against the engine

Board: `mockups/5-templates.png` (R10).

| Board element | What the engine has | Route options (D9) |
|---|---|---|
| Unit-type tabs + a Templates tab (last) | native `unit_folder_<n>` buttons; the click (`FUN_00737390`) takes the number after the 12-character prefix as the selected folder | B: one more tab button in the generated build-view `.gui` (R3), e.g. `unit_folder_99`, which natively shows an empty list; the DLL then fills it |
| Template list: icon, name, regiments, days, composition icons | nothing native; unit icons are game sprites; "days" per unit type is inferred at `country+0xBCC → +0x310[index] + 0xA0` | B: native child window with rows (as the Bill), or A: drawn |
| "New Template" | nothing native | B button |
| Composition editor: per unit type, days and ◀ n ▶ | the unit types and whether each is unlocked (`country+0xBCC → +0x2DC`) are readable | B rows with native arrow buttons (as the Bill), or A |
| Template name | no free-text storage in script; a native edit box exists for save names (not studied) | see question 2 |
| "Being built" | native, unchanged | nothing to do |
| "Recruit Template" + summary | regiments and men are computable; "ready in N days" is the longest unit build time (inferred: units build in parallel) | B button + text |
| "from provinces with free soldier pops" | exactly what the engine checks (`FUN_004B81D0`, `FUN_005141D0`) | the DLL picks the pops (question 4) |

## 4. Questions for the user [user]

Asked on 2026-10-17. **The user chose the recommended option of each
(D12):** a local file, names from the composition, native windows, recruit
what fits. The options as they were asked:

1. **Where are templates stored?**
   - a local file in the game's user folder (recommended: templates are an
     interface preference and change nothing in the simulation, so R5 holds;
     it allows free-text names; not in the save game, the same templates in
     every game);
   - country variables in the save (`tgcx_tpl<n>_<unit>`), written through
     decisions the DLL sends (the LAW-2 bridge): saved and synchronised, but
     many generated decisions, and no names;
   - `CSetVariableCommand` from the DLL: saved and synchronised, fewer
     decisions, but it needs another Ghidra study first.
2. **Template names:** fixed slots ("Template 1…"), names built from the
   composition ("4 Inf · 1 Art · 1 Hus"), or free text (needs the native edit
   box studied; only possible with a local file).
3. **Route for the panel:** native child windows and buttons generated from
   the installed TGC (as the Bill, recommended), or drawn on top.
4. **Not enough free soldier pops:** recruit what fits and say how many were
   left out (recommended), or refuse the whole template.

**Added by the user the same day: "Conform to template" on stacks already in
the field.** Answers (D12, recommended options): the button opens the
template list and the user picks one each time; the missing regiments are
queued like a recruit and, as each one finishes, the DLL orders it to march
to the stack and merges it on arrival; regiments the template lacks are
detached into a new stack in the same province. The engine has the commands
for this (`CMoveCommand`, `CMergeCommand`, `CDetachUnitCommand`,
`CTransferSubUnitCommand`, `CDisbandRegimentCommand`; none studied yet) and
the stack panel is `CUnitView` / `CReorgEntry` / `CWindowForSubUnitsEntry`.
It changes the mechanic, so the mockup gained board **Conform**
(`mockups/6-conform.png`, artifact version 32, R10): the stack panel with a
"Conform to template" button, the template picker, and a Changes list (each
missing regiment with the province that builds it and the days until it
joins; each extra regiment detached into a new stack), Conform and Cancel. It
is planned as card TPL-1, after the first recruit.

Not asked yet, default proposed: which provinces first — the provinces with
the most free regiments first, ties by the order the native list uses.

## 5. Gates

| Gate | Result |
|---|---|
| `python tools/check_exe.py` | ALL OK (25 new runtime and 5 new research guards) |
| `python tools/gen_signatures.py --check` | ALL OK, 87 signatures |
| `tools/test_dll.ps1` | `tgcx_tests: ALL OK` (relocated signatures at a fixture base, all 87; the new Templates tests) and 8 installer/Lua tests OK |
| `tgc_scan.py` | not needed: no script or GUI change yet |

## 6. Deviations from the board

None yet: no interface is built. They will be listed with the native panel.

Mockup approximation (not a game deviation): board Conform draws its own
stack panel frame, because the atlas holds no native unit-panel sprite. In
game the button goes into the native `CUnitView` panel.

## 7. Next

1. The native panel per the board (route B, D12): a Templates tab
   (`unit_folder_<n>` next to the native ones) and the list, composition and
   Recruit button generated from TGC v2.5.2's build-view `.gui` (R3); the
   button calls `tgcx_TplRecruit`; `tgcx_InstallTemplates` from `DllMain`.
2. The local template file (D12), names from the composition.
3. A short U-card: recruit a template, unpause, see N entries in "Being
   built", save and reload; `Logs\tgcx.log` shows one line per command and
   whether the tag the constructor gets (country +0x1C, inferred) is right.
4. TPL-1: "Conform to template" (§ 4), after its own Ghidra study of the
   stack panel and the move/merge/detach commands.
