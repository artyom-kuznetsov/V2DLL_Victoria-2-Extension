# 18. Siege and province combat

This volume documents the siege side of land warfare. The same combat class
family is used for fortress/siege and naval combat; `CSiegeCombat` and
`CNavalCombat` share most base-class slots.

## Class tables

Observed RTTI-derived vftables:

`CSiegeCombat::vftable = 0x00E02434`
`CNavalCombat::vftable = 0x00E023C4`

Shared/combat slots of interest:

| Slot | Siege address | Naval address | Role |
|---:|---|---|---|
| 5 | `FUN_0059C0D0` | `FUN_0059C0D0` | attach armies and province |
| 6 | `FUN_0059C630` | `FUN_005A9AD0` | casualty/fall check |
| 12 | `FUN_005AA190` | `FUN_005A9D30` | progress-threshold check |
| 14 | `FUN_005A9040` | `FUN_005A9040` | combat over/cleanup |
| 15 | `FUN_0059CA40` | `FUN_0059CA40` | daily combat tick |
| 16 | `FUN_005A9600` | `FUN_005A9600` | set province/world object |
| 17 | `FUN_005AB650` | `FUN_0059C320` | can unit join/check side |

The common base object stores both sides at approximately:

* `this+0x10`: first combatant side;
* `this+0x14`: second combatant side;
* `this+0x18`: province/world target;
* `this+0x1C`: fortification/control parameter;
* `this+0x29`: active/attached flag;
* `this+0x34`: siege progress, fixed-point thousandths.

## FUN_0059C0D0: attach armies

The function marks the combat object active at `+0x29`, iterates both army
lists, and writes the combat pointer into each army:

* attacker-style side: `army+0x70`;
* defender-style side: `army+0x74`.

For the fortress case it also writes the combat object into
`province+0x10C`. This is how arrival/occupation logic finds an active siege.

## FUN_0059CA40: daily siege tick

`FUN_0059CA40` is the main execution slot and returns:

* `1` when combat ends;
* `0` when combat continues to the next tick.

Observed flow:

1. Return immediately if either combatant container at `side+0x28` is empty.
2. Call `FUN_0059C3D0` to update current combat data.
3. Increment tick counter at `this+0x20` (decompiler field `this[8]`).
4. Initialize/randomize combat round state when required.
5. Call `FUN_00594800` both ways to perform brigade damage rolls.
6. Recalculate both side aggregates.
7. Handle retreat, reinforcement, and side-membership visuals.
8. Check whether a side is empty:
   - If the first side is empty, the second side wins.
   - If the second side is empty, the first side wins.
   - Winning is applied by `FUN_00595660`, then full resolution by
     `FUN_005A0180`, then army cleanup by `FUN_00595760`.
9. If both sides remain, check the ten-percent fort-progress threshold.

The progress threshold is explicit: one side's remaining strength is compared
with `otherStrength * 1000 / 10000`, i.e. ten percent. If the opponent is below
that ratio, the stronger side wins.

## FUN_0059C630: separate fort-progress check

`FUN_0059C630` performs a pure check without rolling combat damage.

1. Convert both side strengths with `FUN_005DC0E0`.
2. If a side has no defensive virtual support, halve its strength
   (`strength * 1000 / 2000`).
3. For each side, compare the opponent against half of its own strength.
4. A side becomes unable to continue when its strength is zero or lower than
   half of the opposing effective strength.
5. The first side able to win calls `FUN_00595660 -> FUN_005A0180 ->
   FUN_00595760` and returns `1`.

Thus there are two surrender paths: direct annihilation in the daily tick and
fort-progress threshold comparison.

## FUN_005A9D30: threshold used by naval/base combat

The naval slot 12 is similar:

1. Skip when debug/world flag `world+0xD11` is set or fort parameter is `-1`.
2. Convert both sides.
3. Compare side A against `param * 1000` and side B against the same value.
4. On success, select the winning side, call the standard
   `FUN_00595660 -> FUN_005A0180 -> FUN_00595760` sequence, and return `1`.

## FUN_005A0180: resolve losses, occupation, and events

`FUN_005A0180` is the large general combat-resolution function. It is too large
to treat as one formula in this volume, but the cross-references and emitted
calls establish its role:

* It is called from all terminal combat paths.
* It iterates combatant units and calculates per-unit casualties.
* It emits synchronized province/world updates and extensive event/history
  records.
* It updates province state identifiers at roughly `province+0x134` and related
  occupation fields.
* It runs scripted `on_siege_won` behavior and builds local/global notifications.
* It marks the combat state as finished near the end:
  `resultState+0x30 = 2`.

Callers include:

* siege progress winner: `FUN_0059C630`;
* daily combat end: `FUN_0059CA40`;
* unit-leave/detach path: `FUN_005A9640`;
* threshold checks: `FUN_005A9D30`.

## FUN_00595660 and FUN_00595760

`FUN_00595660(winSide)` selects the surviving side and stores the winner before
full resolution.

`FUN_00595760` walks `combat+0x28` participants and clears their combat
references through `FUN_0068AA10`. It is the final detach step after
occupation/losses have been synchronized.

## FUN_005A9640: unit leaves or side dissolves

When a unit detaches, the function clears `unit+0x70` for attacker mode or
`unit+0x74` for defender mode. If the unit was in a one-member side, it calls
`FUN_005A0180` first so the side does not disappear without combat resolution.
It then calls `FUN_005D1360` and clears both side containers.

## FUN_005AB650: can unit join siege

For the siege class, `FUN_005AB650(unit)` checks:

1. The current army container is nonempty.
2. The candidate unit's country tag matches the target province context, except
   when allied-war/rebel exceptions apply.
3. The opposite side accepts the unit through its virtual `+0x40` method.
4. The unit has no active separate combat at `unit+0x70`.
5. The unit's army detachment/member count at `unit+0xEC` is below one.

If all checks pass, `FUN_005A9610` attaches the unit and, for defender mode,
calls `FUN_005D0FE0(1)`.

+## Combat arithmetic helpers

### FUN_00595DB0: side aggregate and casualty sampling

This function produces a side strength used by the daily combat tick.

For land combat mode `2`, it first walks every subunit and applies pending
casualty fields before rolling new losses:

`strength0 = field0F - pending0F
strength1 = field10 - pending10`

Each destroyed point is credited to the owning country array at
`countrySide + unitType * 4` and to the combat total at `this+0x54`.

Then `FUN_005DC330` processes all remaining units. For each brigade type it
draws the next value from the global random table at
`DAT_0125FDD8 + 0x0C + type * 4` and adds the sampled result to the side
total.

### FUN_005C0160: one subunit casualty conversion

This helper converts pending losses into final losses and a random strength
contribution:

1. Clamp each pending value to the corresponding current value.
2. Subtract pending values from the two live strength fields.
3. For regular units, run the experience/promotion path using global defines at
   `DAT_012586DC+0x20+0x14` and country/technology multipliers.
4. Return approximately `pendingLoss * unitModifier / 1000`.
5. Reset both pending-loss fields to zero.

### FUN_00594800: visible combat modifiers

Despite being called from the combat tick, this function is not the direct
damage roll. It rebuilds the ordered combat-report modifier list.

It records:

* base province/army context;
* leader bonus when nonzero;
* special land-combat flag from country data at approximately
  `country+0xBCC+0x2A4/0x2A5`;
* terrain penalty from `province+0x14+0x98` as a negative fixed-point value;
* river crossing as approximately `-1.0`;
* amphibious/rebel crossing as approximately `-2.0`;
* dig-in bonus after scaling by eligible strength and the minimum opposing
  morale field at `unit+0x184`.

The dig-in calculation also uses the threshold at
`DAT_012586DC+0x20+0xC4` and a random `0..999` component.


## Practical result

The wartime loop is:

`army arrives -> province+0x10C = CSiegeCombat -> daily FUN_0059CA40 ->
casualties and retreats -> side empty or ten-percent threshold ->
FUN_005A0180 -> province occupation/event state -> FUN_00595760`

AI target planners do not directly own the siege; they observe province/army
state, send movement, and later select new targets once occupation changes the
map.

