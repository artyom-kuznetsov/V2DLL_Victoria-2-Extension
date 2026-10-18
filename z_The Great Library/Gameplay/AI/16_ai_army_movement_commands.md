# 16. Army movement and command layer

This volume covers the layer between the AI military planners and actual
world-state changes. The planner chooses a task and province. The functions
below create or reshape an army, calculate a province path, and submit the
appropriate `CCommand` to the synchronized command stream.

Addresses are VA. Offsets are hexadecimal byte offsets unless written as an
array index from a decompiler.

## High-level flow

```text
CAIPlan / military task
  -> FUN_00852A00
  -> FUN_00826AA0, build a path to the selected province
     -> FUN_005B8500, province pathfinding
     -> CMoveCommand, command 0x02F8
     -> FUN_00826D20, fallback if no usable path
  -> FUN_00849E90, AI bookkeeping after issuing the movement
```

Army composition and allocation are handled separately by volumes 12 and 13.
This volume documents the command execution boundary.

## FUN_00852A00: issue movement for an army task

`FUN_00852A00(task, army)` is a small wrapper. It calls:

1. `FUN_00826AA0(...)`, the movement-command builder.
2. `FUN_00849E90()`, post-command AI/bookkeeping.

The planner calls this when it wants an existing or newly formed army to move
toward the task objective.

## FUN_00826AA0: build and send a move command

`FUN_00826AA0` performs the validity checks and creates the synchronized
move command.

The observed sequence is:

1. Call `FUN_005CC3E0()`, a general busy/precondition check.
2. Query the army/task virtual method at object offset `+0x38`.
3. Verify that the current task/country and target country differ by comparing
   the country object identity at offset `+0x58`.
4. Check task state fields at `+0x41` and `+0x1D`.
5. Require that the relevant plan/list size, task offset `+0x10`, is at least
   one.
6. Call `FUN_005B8500()` to construct a province path.
7. If a path exists:
   - detach/clear the previous path or plan node through `FUN_009C2EC0()`;
   - construct `CMoveCommand` with `FUN_005DE8E0()`;
   - submit it through the command dispatcher at `world+0x0B24+0x44`, followed
     by `+0x38+0x18`.
8. If no path exists, call `FUN_00826D20()` to cancel/reset the movement and
   return the army to a recoverable AI state.

In practical terms, this function is not a direct teleport or direct mutation of
army position. It translates an AI decision into a synchronized movement order.

## FUN_005B8500: province pathfinding

`FUN_005B8500` searches for a path through provinces using AI strategy objects
and virtual methods rather than the simple GUI route helper.

Important observed behavior:

* It starts the search from the side of the target country.
* Neighboring provinces are obtained through state adjacency data at
  approximately `state+0xC8` and `state+0xCC`.
* Each adjacency record is `0x24` bytes.
* For a province, `province+0x58` is the province index and `province+0x5C` is
  the owning/administrative state pointer.
* Distances are accumulated as a 64-bit fixed-point value.
* Global tuning data at `DAT_0125FC18` participates in cost accumulation.
* The algorithm keeps a parent link and replaces a province's predecessor when a
  lower accumulated cost is found.
* The result is restored into the output list parameter:
  - output `+0x00`: path/list;
  - output `+0x08`: path length/count.

The function therefore behaves like a Dijkstra/BFS-style lowest-cost province
search. The exact land/naval accessibility predicates are still in virtual
strategy callbacks and need their own volume if we want modding-visible rules.

## CMoveCommand

`FUN_005DE8E0` is the constructor.

Observed constructor facts:

* The final vftable is `CMoveCommand::vftable`.
* It derives from `CCommand`.
* Command ID fields `this+0x2C` and `this+0x30` are set to `0x02F8`.
* `FUN_0079DE40` copies the selected path/route into the command at
  `this+0x3C`.
* Fields at approximately `this+0x64..0x6C` hold movement/path data.
* Fields at `this+0x88..0x8C` hold task parameters.
* The first province/state and movement flags occupy roughly
  `this+0x8C..0x90`.
* The constructor reads the originating AI object through a virtual call and
  stores a country/task identifier from `ai+0xDC` into `this+0x8C`.

The command is therefore self-contained: it carries the path and enough source
task/country context for the simulation side to execute and validate the move.

The actual per-tick execution of `0x02F8` is the next boundary that must be
reverse engineered.

## FUN_00826D20: no-path fallback and movement reset

When `FUN_00826AA0` cannot obtain a path, `FUN_00826D20` prevents an army from
remaining logically attached to an impossible march.

Observed behavior:

1. Return immediately if `army+0x0EC <= 0`.
2. Do nothing if `army+0x104` is already nonzero; the army is already in the
   recovery/reset state.
3. Validate the current task/army association at `army+0x74`.
4. Clear or detach the task-side army pointer at `army+0x144`.
5. Construct `CCancelMovementCommand` with `FUN_005DF690()`.
   - Its command ID is `0x02FA`.
6. Submit it through the same dispatcher used by `CMoveCommand`.
7. Reattach the army to the recovery/source-side AI lists through virtual
   callbacks at approximately `+0x1A4` and `+0x1B4`.
8. Store the detached army reference into `warPlan+0x13C`.

This is the anti-stuck path: the movement is cancelled in the synchronized
stream, then the army is handed back to the planner instead of continuing to
reference an unreachable target.

## Army creation: FUN_0084FC60 and CCreateUnitCommand

`FUN_0084FC60` registers a new AI army/task unit.

It constructs `CCreateUnitCommand` through `FUN_0057DB30`, fills command-local
fields, and submits the command through `world+0x0B24+0x44`, followed by
`+0x38+0x18`.

`FUN_0057DB30`, the `CCreateUnitCommand` constructor, uses command ID
`0x041A`. Relevant fields:

* `+0x3C` and `+0x40`: ownership/task identifiers;
* `+0x48..0x5C`: unit/location parameters;
* `+0x5D`: boolean creation flag.

This is how an AI-side split or reinforcement becomes a real simulation-visible
new unit.

## Army/task transfer: FUN_0084FD10

`FUN_0084FD10(unit, newTaskId)` moves a subunit or army between two AI task
collections while keeping their aggregate strength synchronized.

Observed sequence:

1. Select the task manager:
   - IDs below `0x1269`: `DAT_01258A98`;
   - IDs `0x1269` and above: `DAT_01258A94`.
2. Validate the active game session with `FUN_009C1D40()`.
3. Detach the unit from its old task list.
4. Subtract its strength at `unit+0x3C` from `oldTask+0x8C`.
5. Insert it into the new task list at `newTask+0x94`.
6. Increment the new task count at `newTask+0x98`.
7. Add `unit+0x3C` to `newTask+0x8C`.
8. Construct `CTransferSubUnitCommand` through `FUN_005E1EE0()` and send it.

`CTransferSubUnitCommand` has command ID `0x0412`. Its subunit/list payload is
at approximately `+0x3C`; transfer parameters occupy `+0x64..0x68`.

Thus the AI planner keeps a mirrored aggregate of task power at `task+0x8C`,
while the actual ownership change is issued as a synchronized command.

## FUN_0082DC50: obtain an army for a task

`FUN_0082DC50` reconciles the number and location of armies assigned to a
military task.

High-level behavior:

1. Enumerate armies available at the source.
2. Move armies whose location/province fits the destination requirement.
3. Use `FUN_0084FD10` for each real transfer.
4. Recalculate source and destination counts and aggregate power.
5. If there are more suitable armies than needed, leave or transfer the excess
   rather than splitting it at this stage.
6. Return the number of armies actually transferred.

This function is the main glue between task allocation and the unit-transfer
command.

## FUN_00828F90: split an army

`FUN_00828F90` creates a new army from an existing one and can move part of its
subunits into that new army.

Observed sequence:

1. Allocate a fresh command/task ID with `FUN_009C12D0()`.
2. Increment the global AI army counter at `DAT_01258A9C`.
3. Compute the new ID as `DAT_01258A90 + 0x1268`.
4. Call the virtual factory/clone method at `this+0xE8`.
5. Register the new army through `FUN_0084FC60`.
6. Add a history/link node containing the new ID, current parent ID, and owner
   to `army+0xCC..0xD4`.
7. If fewer than `param_2` units are required, move the selected units into the
   new task with `FUN_0084FD10`.

The generated ID range strongly suggests that AI-created split armies use the
same `0x1269` task-ID threshold as ordinary army task IDs.

## FUN_0082E190: move or dissolve part of an army

`FUN_0082E190` transfers an exact amount of subunit strength to another task.

Behavior:

1. Read the army's subunit collection at `army+0x98`.
2. If the whole army is smaller than or equal to the required amount, transfer
   the entire army.
3. Otherwise perform two passes with `FUN_004E9B90()`, recalculating strength on
   both sides.
4. Select the subunit with the lowest transfer score.
5. Call `FUN_0084FD10(unit, newTaskId)`.
6. Repeat until the requested quantity has been moved.
7. Return the quantity actually transferred.

This avoids splitting by arbitrary index: the AI chooses the least valuable or
least suitable subunit first.

## Current conclusions

The wartime movement pipeline is already strongly command-driven:

* Planning data is changed only in AI-local structures.
* Real movement, creation, cancellation, and transfer are submitted as commands
  in the `0x02F8`, `0x0412`, `0x041A`, and `0x02FA` range.
* The AI keeps mirrored task strength/counters that must stay synchronized with
  real command execution.
* Failed route construction does not silently drop the order; it explicitly
  cancels movement and returns the army to the planner.

The next required layer is execution of these command IDs: who processes them,
how the destination province is validated, when movement completes, and how
arrival triggers combat, siege, occupation, or retreat.

