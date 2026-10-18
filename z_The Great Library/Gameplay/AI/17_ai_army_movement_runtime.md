# 17. Army movement runtime

Volume 16 covered creation of the synchronized AI movement command. This
volume covers what happens when that command executes and how an army receives
a province path.

## CMoveCommand vtable

The RTTI/Ghidra address is:

`CMoveCommand::vftable = 0x00E03394`

The first 16 slots belong to `CMoveCommand`; the next table starts at
`0x00E033D4`.

| Slot | Address | Interpretation |
|---:|---|---|
| 0 | `FUN_005DE730` | deleting destructor |
| 2 | `FUN_005DF0C0` | serialize |
| 4 | `FUN_005DF230` | deserialize/XML callback |
| 6 | `FUN_005DEAE0` | execute command |
| 13 | `FUN_005DF330` | heap copy/factory |
| 14 | `FUN_005DF4B0` | validate before execution |

Command ID remains `0x02F8`.

## FUN_005DF4B0: pre-execution validation

The validator resolves the command's army manager using the ID threshold:

* IDs below `0x1269`: manager `DAT_01258A98`;
* IDs `0x1269` and above: manager `DAT_01258A94`.

It stores the resolved task object in command `+0x3C`. The command is invalid
if the game session/task cannot be resolved. If the route start and end arrays
are identical, the command can still validate only when the explicit length at
`+0x7C` is positive. Otherwise a positive length is required. If the length was
absent, `FUN_005AB7F0` refreshes the task pointer and the game advances one
validation step per route province through `FUN_005D0EB0`.

In short: a movement command must resolve to a live army/task and must carry a
valid nonempty path.

## FUN_005DEAE0: execute movement command

`FUN_005DEAE0` is the virtual execute slot. It resolves the army object with
`FUN_009C16D0`, then checks whether the army already has a movement plan.

The special branch is:

1. Check virtual army method `+0x3C`.
2. Ensure `army+0x104` is zero.
3. Select a destination through `FUN_005CF450`.
4. Call `FUN_005DED20(command, selectedProvince, 1)`.

`FUN_005CF450` chooses a fallback target. For a rebel army, it searches nearby
provinces. For a normal army, it uses virtual predicates and scores adjacent
provinces, rejecting occupied/unsafe choices and preferring closer and more
valuable targets. This is the movement-command fallback, not the higher-level
strategic target planner from volume 12.

The normal branch processes the explicit route stored in the command:

* If `command+0x7C < 1`, every province in the route is passed to
  `FUN_005DED20`; flag `+0x88` is used only for the first province.
* If `command+0x7B` is set, the final route province is stored back into
  `army+0x74`.
* Otherwise `FUN_005D1BB0` consumes the route stored at command `+0x74`.

## FUN_005DED20: move an army to a province

This is the real army movement bridge.

Observed sequence:

1. Return immediately when `DAT_0125882C == 0`; movement is disabled.
2. Resolve the army and store its task object in command `+0x3C`.
3. Select one of three pathfinding policies:
   - `CPathFind` at normal/unsafe conditions;
   - `CSafePathFind` when `command+0x89` is set;
   - `CVerySafePathFind` when `command+0x8A` is set.
4. Convert the target province parameter to a province object.
5. Call `FUN_005B8500` to calculate a path.
6. If a path exists, call `FUN_005D1BB0` to attach it to the army.
7. Store the current world timestamp from `DAT_01259ABC` into
   `army+0xA8/+0xAC`.
8. Emit the movement through virtual methods on `world+0xB24`.
9. Call `FUN_00849E90` for AI cleanup/bookkeeping.

Thus command execution still produces a normal army movement route; it does not
change the province directly.

## FUN_005D1BB0: replace and attach an army route

This function replaces the army's old route with a linked list of province
nodes.

Important effects:

* It clears the old selected target at `army+0x1C`.
* It detaches the army from the old target structure at `army+0x1D`.
* It performs cancellation/recovery checks through `FUN_005CBF30`,
  `FUN_005CBEC0`, and related helpers.
* It converts the route array into nodes of `{provinceId, previousNode, next}`
  and installs the list at `army+0x39..0x3B`.
* If the resulting queue is nonempty, `FUN_005D1FC0` starts movement presentation
  and map bookkeeping.
* It also records a route-distance estimate in `army+0x2A/+0x2B` and propagates
  timestamps to related selected armies.

## FUN_005D1FC0: activate the route

`FUN_005D1FC0` is called after the route queue is installed. It:

1. Detaches the old movement visual at `army+0x43`.
2. Sets the new movement visual from `army+0x44`.
3. Updates rotation with `FUN_005D4420`.
4. Rebuilds province visual/slot state with `FUN_005D4540`.
5. Clears the temporary sprite layer at `army+0x50`.
6. Calls `FUN_004C8580` to move the army from the old province visual bucket to
   the new one.

The simulation state is already represented by the route and army counters; the
remaining calls keep the 3D map, arrows, selection, and province counters in
sync.

## FUN_005D4540: route arrow and province visual rebuild

This function is primarily presentation, but it documents several useful army
fields:

* `army+0x39` points to the first route node.
* `army+0x3B` is the route-node count.
* `army+0x37` is the current army/province object.
* `army+0x41` marks retreat movement.
* Normal movement uses the resource string `moveArrow`.
* Retreat uses `retreatArrow`.
* `army+0x40/+0x50` participate in stacked arrow offsets.
* `army+0x3E` stores a fixed-point duration/ratio and is divided by
  `FUN_005D5680` result.

The function creates visual segments for every province transition, wraps
longitudes around the world width at `DAT_0125870C+0x2ABC`, and attaches arrows
to the new province bucket through `FUN_004C8580`.

## FUN_005D24A0: estimated remaining time

`FUN_005D24A0` estimates remaining movement time:

1. Start with a global value from `world+0xB0C`.
2. If the army has units or a moving state, compute remaining distance between
   `FUN_005D1790(...)` and `army+0xF8`.
3. Divide by speed from `FUN_005D1570`, keeping fixed-point scaling by 1000.
4. Clamp negative values to zero.
5. Multiply whole elapsed units by `0x18` and add to the global estimate.
6. Return at least the existing value in `army+0xAC`.

This is the route ETA helper, with fixed-point values stored as thousandths.

