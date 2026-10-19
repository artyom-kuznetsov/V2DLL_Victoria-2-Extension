# TPL-1: Conform to template, first research pass (2026-10-17)

> **Report**, not rewritten. Read-only static research; no code, no game
> change. The command table is in `symbols.md` §"TPL-1: stack commands for
> Conform".

## 1. Starting point

- TPL-0 0.4.4 was accepted in game the same day (report-tpl-0-visual §11).
- Board **Conform** (`mockups/6-conform.png`):
  - a "Conform to template" button in the stack panel;
  - a template list;
  - a Changes list: each missing regiment with the province that builds it
    and the days until it joins, each extra regiment "detached into a new
    stack";
  - a summary line "N to build from free soldier pops, M to detach.
    Nothing is disbanded.";
  - Conform and Cancel buttons.
- D12 fixes the behaviour: the template is picked per click; missing
  regiments are built, march and merge; extras detach into a new stack in
  the same province.
- `check_exe.py`: ALL OK.

## 2. What was found (static, C unless marked)

Everything the planner needs already exists as an engine command, posted to
the same queue TPL-0 uses for recruiting:

| step on the board | engine route |
|---|---|
| build a missing regiment | `CConstructUnitCommand`, TPL-0's verified recruit planner |
| detach extras into a new stack | `CCreateUnitCommand` with a new id, then one `CTransferSubUnitCommand` per extra regiment into that id |
| march to the stack | `CMoveCommand` (unit, destination) |
| join | `CMergeCommand` (the target stack first, then the arrivals) |

How the native game does the detach, which we would copy step for step:
- The unit panel's new-stack buttons (`FUN_0079DB10`, `FUN_0079DC70`) pick
  an id on the client, as type `[0x01258A90]+0x1268` and id
  `++[0x01258A9C]`.
- They remember it as pending, post `CCreateUnitCommand`, and once the
  stack exists post Transfers into it.
- `CSplitAndLoadArmyCommand` (`FUN_005E3B50`) does the same inside one
  command.

Stacks and regiments are found by their **registry id** (type + id), never
by pointer. Every command stores ids and re-resolves them when it executes,
which is what makes them safe over a network and a save. A Conform plan
stores the same ids.

Validity checks the engine runs at execution, so a stale plan fails
safely:
- Merge needs every stack to resolve, at least two stacks, and
  `FUN_00513D50`.
- Transfer needs the target to resolve, then `FUN_00513F30`.
- Move checks every step of the path.

The anchor for the button is TGC v2.5.2's own `unitpanel.gui`: window
`unitpanel`, next to `splitinhalf` (254,32) and `newunitbutton` (279,32).
It gets generated from the installed file (R3), like `buildunit.gui`.

## 3. Not yet known (needed before code)

1. **Where a finished construction becomes a regiment, and in which
   stack.** The march-and-join step needs the new regiment's id. Next:
   `CMilitaryConstruction` completion (`FUN_00491620` builds it; its daily
   tick is unknown).
2. **Move's destination argument.** It is pushed as a value; from
   `FUN_005DED20` it looks like a province id or pointer (I). Also the
   meaning of its four flags, and whether one Move to a distant province
   gets the path from the engine. The validity check suggests yes.
3. **The new-stack id counter.** The native UI increments `[0x01258A9C]`
   itself, on the client, before posting. Copying that is the only way to
   create a stack. It is the command's id choice, not simulation state, but
   it is a direct write, so it gets its own guard and log line (R5).
4. **The `CUnitView` window object.** We need its native window object to
   bind the button, and the selected stack (`view+0x28`) for the plan.
   Same technique as `CBuildUnitView` in TPL-0.
5. The four Move flags, and Create's kind values (1 = army is inferred).

## 4. Decision needed: tracking across save/reload (step 6) [user]

Building takes 90-150 days, so a Conform can be in progress when the game
is saved. Commands already in the engine queue and constructions are in the
save. The DLL's note of "this new regiment belongs to that stack, march it
there" is not. Options:

| option | what happens | cost |
|---|---|---|
| **A. Session tracking, re-Conform after a reload (recommended)** | Within a session the DLL marches and merges each finished regiment automatically. After a reload it has forgotten. Pressing Conform on the stack again finds the finished, unattached regiments of the missing types nearby and offers to bring them. | No save format. Nothing can go wrong silently. One extra click after a reload |
| B. Persist in a local file | The DLL writes pending orders to a file next to the templates, keyed by save and country, and resumes after a reload | Needs a reliable save identity (GH-5 not done). Loading another save, or the same save twice, can mix orders |
| C. No automatic march | Conform builds the missing regiments and detaches extras; the user merges the new regiments by hand | Simplest and safest, but not what D12 describes |

## 5. Gates

| gate | result |
|---|---|
| `check_exe.py` | ALL OK |
| others | not run: no code, script or GUI changed |

## 6. Next

- The user's answer on §4.
- Then read-only study of items §3.1, 3.2 and 3.4.
- Then signatures, the pure planner with fixtures (mixed compositions,
  missing/extra, unavailable pops, cancelled construction, missing target,
  bad guards), the GUI and a U-card.
- Board Conform needs no change for option A or C. Option B adds nothing
  visible either.

## 7. Addendum: the user's answer (same day)

The user chose **A** (D13). The DLL tracks pending Conform orders only in
memory. After a reload, Conform on the stack looks for finished,
unattached regiments of the missing types and offers to bring them. That
adds a planner input: idle single-regiment stacks owned by the player, of
the needed types, with their distance or days to the target. They appear on
the Changes list as "marches and joins" lines, as on the board. Nothing is
persisted. The mockup needs no change.

## 8. Second pass: §3.1, §3.2, §3.4 answered (same day)

Table in `symbols.md` §"TPL-1 second pass".

- **§3.1, construction completion.** A finished construction
  (`FUN_00491E80`) creates its own one-regiment stack. The stack's id is
  fixed by the command that started the construction: the TPL-0 recruit
  constructor already allocates it at `CConstructUnitCommand +0x50/+0x54`.
  So the DLL knows, when it recruits, the id of the stack that will appear
  months later. D13's session tracking is a map from that id to the target
  army, and nothing needs searching. The engine's rally-point code shows
  the same pattern: when the stack appears, it posts a Move.
- **§3.2, Move.** The destination is a province id, and the engine finds
  the path. Flags: replace orders, safe path, very safe path, and a fourth
  flag Conform does not need. Conform would use `replace=1` and a normal
  path, matching the rally Move apart from the safe-path choice (open: use
  safe paths like the rally point, recommended).
- **§3.3, the id counter.** For builds this is solved by the native
  constructor TPL-0 already calls. Only the extras' new stack
  (`CCreateUnitCommand`) still needs the DLL to take an id the way the
  native new-stack button does.
- **§3.4, `CUnitView`.**
  - The panel object loads window `unitpanel` and binds its buttons by
    name.
  - The shown stack is `view+0x28`.
  - Destructor: slot 0. Refresh: slot 8, called each frame by the
    secondary slot 9 while the window is visible.
  - So TPL-0's hook pattern applies: capture on update, release on
    destruction, bind our button in the window, read `view+0x28` on click.

### Arrival and merge

The planner posts Move when the new stack exists. It posts Merge (target
first) when both stacks are in the same province, checked each day:
`stack+0xC0` against the target's. If the target has moved by then, it
re-posts Move to its new province. If the target is gone (destroyed,
disbanded or merged away), the new stack stays where it is and the status
line says so. Nothing is disbanded.

### Remaining before code

1. Signatures for every row used, relocation-aware (P24).
2. The pure planner (diff of composition against the template, the
   build/detach/gather lists) with fixtures.
3. The Conform window (route B, generated from TGC's `unitpanel.gui`,
   board Conform) and its U-card.
4. ~~One choice for the user: safe paths or the shortest path.~~ The user
   chose **safe paths**, like the native rally point (D13, same day).

## 9. Addendum: signatures and the pure planner (same day)

**Signatures.** 38 TPL-1 entries are now in `check_exe.SIGNATURES`. They
cover:
- the four command constructors (id, fields, RET);
- the four command vtables;
- the recruit's future stack id;
- the `CUnitView` vtables and slots;
- the native new-stack id counter;
- the stack's country and province fields;
- the registry split, hash and entry layout.

`gen_signatures.py` regenerated `tgcx_signatures.h`. Results:
`check_exe: ALL OK` and `gen_signatures: ALL OK (129 signatures)`. No code
calls any of them yet.

**Planner and tracker.** The new `dll/tgcx/tgcx_conform.h` is pure code: it
does not read or write the game. The DLL does not include it yet, so the
installed 0.4.4 behaves exactly as before.

- `tgcx_CfMakePlan` compares the stack's regiments (registry id and unit
  index) with the template's counts.
  - It keeps the first regiments of each type. Extras are the last ones of
    that type, and they go to one new stack.
  - Regiments the catalogue cannot name are kept and are not counted.
  - Missing regiments are covered first by pending ones, then by idle
    one-regiment stacks (D13 re-Conform, cheapest first), and the rest are
    built through TPL-0's recruit planner.
  - It refuses a stack that already matches, a template too large for the
    stack, and any plan that would empty the stack. Nothing is disbanded.
- `tgcx_CfStep` is the daily state machine for each task, keyed by
  registry ids only.
  - **JOIN** (a built or gathered stack): wait while the construction
    exists. Drop the task as cancelled after two days with neither the
    construction nor the stack. Send one safe-path Move to the target's
    province. Send Move again only if the target changes province. Once
    both are in one province, Merge, at most once per game day. Stop when
    the target is gone, leaving the stack where it is.
  - **FILL** (the extras' new stack): Transfer once the stack exists. Give
    up after a week.

**Fixtures.** The new `tests/tgcx_conform_tests.h` has 31 expectations.
They cover:
- mixed compositions;
- missing and extra regiments;
- an already-matching stack;
- the refusal to empty a stack;
- unnamed regiments;
- pending and idle gathering;
- the build remainder;
- oversized and negative counts;
- a moving target;
- the per-day Merge;
- a cancelled construction;
- a missing target;
- the detach stack and its timeout.

Unavailable pops are already handled by the recruit planner the build counts
feed (TPL-0 fixtures).

| gate | result |
|---|---|
| `build_dll.ps1` | built, no warnings |
| `test_dll.ps1` | `tgcx_tests: ALL OK` (Conform line included), installer 8 OK |
| `check_exe.py` / `gen_signatures.py --check` | ALL OK (129) |
| `test_install_dll.py`, `test_templates_gui.py` | OK |
| `tgc_scan.py` v2.5.2 | anchors and range OK |

**Next:**
1. Native wrappers: the command constructors and posting, the read-only
   registry walk, and the new-stack id the way the native button takes it
   (its own guard and log line).
2. The `CUnitView` hooks.
3. The Conform window, generated from TGC's `unitpanel.gui` (board
   Conform).
4. The U-card.

## 10. Addendum: native wrappers and the unit-panel hooks, DLL 0.5.0 (same day)

**What was checked first** (read-only Ghidra, symbols.md "TPL-1 native
wrappers"):

- Each command is built exactly as its native caller builds it.
  - The extras' stack is the new-stack button's Create, with kind 0 for a
    land stack and no split.
  - The Transfer is the reorganize drop's.
  - The Move is the rally point's: replace, safe path and very safe path.
  - The Merge is the AI merge's list.
- Two earlier notes were wrong:
  - Transfer's argument order is target stack first, then the regiment;
  - the rally Move also sets very safe.
- The new stack id is taken under the engine's own spinlock, as the native
  button takes it.

**New code**, `dll/tgcx/tgcx_conform_native.h`:

- The registry walk and the stack read.
- The four command wrappers, the new-id helper and the land test.
- The daily driver, which steps every tracked task once per game day:
  - JOIN: Move (safe), then Merge.
  - FILL: Transfer, only while the regiment is still in the conformed
    stack and the new stack is beside it.
- `tgcx_CfConformWith`: plan, then one Create, the gathered stacks, and the
  build through TPL-0's recruit.
  - It never sends a second Create while extras are already leaving.
  - Each recruit reports its future stack id through a new optional
    observer on `tgcx_TplRecruitWith`. TPL-0's own calls are unchanged.
- The `CUnitView` refresh/destructor hooks (vtable slots 8 and 0).

The pure tracker now cancels a build only after its construction was seen
and then vanished. Otherwise it waits up to 730 days, because the
construction's identity is still inferred.

**Not reachable yet.** No button calls `tgcx_CfConformWith`, so 0.5.0
cannot post a Conform command. The hooks only describe each newly shown
stack in the log (U-9). That is how the regiment type field and the
registry walk get checked in game before the window is built on them.

**Board deviation recorded in advance.** The board's Changes list gives
"days until it joins". The gather cost is only same province (0) or other
(1), because no path length is read yet. The window will list gathered
stacks with their province and no day count until a path estimate is
studied.

| gate | result |
|---|---|
| `build_dll.ps1` | built, no warnings (0.5.0, SHA-256 `11FAFD22…3A8A`) |
| `test_dll.ps1` | `tgcx_tests: ALL OK` (Conform and Conform native lines), installer 8 OK |
| `check_exe.py` / `gen_signatures.py --check` | ALL OK (139) |
| `test_install_dll.py`, `test_templates_gui.py` | OK |
| `tgc_scan.py` v2.5.2 | anchors and range OK |

Not installed. Next: U-9 (the probe), then the Conform window, generated
from TGC's `unitpanel.gui` (board Conform), and its U-card.

**Installed** (same day, after the user's normal exit). 0.4.4 is backed up
in `before-050-dll\`. The installed proxy matches the build
(`11FAFD22…3A8A`). U-9 is the check.

## 11. Addendum: U-9 result and the province correction (same day)

The user ran U-9 on 0.5.0 (an 1836 France save) and exited normally.
`tgcx.log` has no fault or rejection lines, and the game's `error.log` is
empty.

- `Conform hooks installed`.
- 13 probe lines over 8 stacks, all `registry round trip`.
  - Regiment counts equal `+0x40`.
  - The country equals the player (80).
- Every regiment line is `round trip`, and each land type maps to the
  right unit:
  - hussar 15, artillery 3, guard 14, infantry 16, cuirassier 9,
    dragoon 10.
  - So regiment `+0x38` is the country's unit type.
- A fleet (33 ships) read `land 0`, and its man-o'-wars `unit -1`. The
  land test refuses navies, as intended.
- The user split a stack in game. The new stacks have ids `4713/6884` and
  `4713/6885`: type `0x1269`, the native new-stack id pattern, live.
- The TPL-0 recruit still works: 9 queued, 0 left out.

**Correction (P43).** Every stack logged "province 4280902", which is
`0x415246`, the string "FRA". Stack `+0xC0` is the owner's tag, not the
province.
- The province is `+0xDC` (province object) → `+0x58` (id). Move's
  constructor and the AI merge both read it that way.
- The Create arguments therefore are (tag, country, id, id, province id,
  kind, split). The 0.5.0 wrapper already passed the native values in the
  native order, so only the names were wrong.
- The driver's and planner's province comparisons used `+0xC0`. They would
  have marched to a non-province. They now use `tgcx_CfProvince`.
- New guard `0x1DE8B2` (140 signatures). The fixtures now model the
  province object.

**0.5.1** (SHA-256 `153811EC…FA91`): the fix, plus the probe now logs the
province from `+0xDC` and the tag. All gates pass. It is not installed.
Nothing visible changes from 0.5.0, so a short re-probe (U-9 step 1 only)
can confirm the province ids when convenient.

**0.5.1 installed** (same day, game closed). 0.5.0 is backed up in
`before-051-dll\`. The installed proxy matches the build
(`153811EC…FA91`).
