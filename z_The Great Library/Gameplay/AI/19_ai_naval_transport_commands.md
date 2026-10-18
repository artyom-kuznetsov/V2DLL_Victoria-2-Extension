# 19. Naval transport and army movement commands

This volume covers the synchronized commands used to load, merge, split-load,
and unload armies, plus the transport-capacity checks behind them.

## Command IDs

| Command | ID | Class | Execute |
|---|---:|---|---|
| Load army | `0x0579` | `CLoadArmyCommand` | `FUN_005E4530` |
| Unload army | `0x057A` | `CUnloadArmyCommand` | `FUN_005E3480` |
| Merge army/subunits | `0x0410` | `CMergeCommand` | `FUN_005E1590` |
| Split army and load | `0x09A8` | `CSplitAndLoadArmyCommand` | `FUN_005E3B50` |
| Transfer subunit | `0x0412` | `CTransferSubUnitCommand` | volume 16 |
| Create unit/army | `0x041A` | `CCreateUnitCommand` | volume 16 |

Related RTTI vftables:

`CLoadArmyCommand::vftable = 0x00E03694`
`CUnloadArmyCommand::vftable = 0x00E03614`
`CSplitAndLoadArmyCommand::vftable = 0x00E03654`
`CMergeCommand::vftable = 0x00E03514`

In these command constructors, IDs occupy decompiler array fields `param_1[11]`
and `param_1[12]`, corresponding to command bytes `+0x2C/+0x30`.

## FUN_005D77A0: can army board transport

This is the capacity/location gate used by loading.

It succeeds only when all of the following are true:

1. Army and transport are at the same location tag,
   `army+0xC4 == transport+0xC4`.
2. The army has no current target at `army+0x74`.
3. The army has no detached/selected subunit list: `army+0xEC < 1`.
4. It is not already in the movement-recovery state `army+0x104 == 0`.
5. The transport's total capacity is positive:
   `transportData+0x258 / 1000`.
6. Existing load plus the army's transport-weight result from `FUN_005D0650`
   does not exceed capacity.

The check returns false if any condition fails.

## CLoadArmyCommand

`FUN_005E4480(armyPath, transportPath)` constructs command `0x0579`. The two
route-like arguments are copied to:

* army path/command path at `+0x3C`;
* transport path at `+0x64`.

`FUN_005E49A0` validates both resolved army and transport objects. It also calls
`FUN_005AB7F0` to refresh the army task pointer and `FUN_005D77A0` to enforce
capacity.

`FUN_005E4530` executes:

1. Resolve the army and transport.
2. Check that the army is in a valid movable state through virtual `+0x38`.
3. Check that `transportRelated+0x1B4` is empty.
4. Emit an unload/selection-reset notification when required.
5. Call `FUN_005D7810` to attach the army to the transport.
6. Rebuild the map slot with `FUN_004C8580`.

## FUN_005D7810 and FUN_005D78D0: attach/detach

`FUN_005D7810(army, transport)` writes the army into the transport-side linked
list:

* transport `+0x1A4`: first army node;
* transport `+0x1A8`: last node;
* transport `+0x1AC`: loaded-army count;
* army `+0x1B4`: back-pointer to transport.

Then it updates the province visual slot.

`FUN_005D78D0(transport)` removes the army from the list, clears
`army+0x1B4/+0x1A4/+0x1A8`, and rebuilds the visual slot. This is the actual
unload detach routine.

## CUnloadArmyCommand

`FUN_005E33E0(command, armyPath)` constructs command `0x057A`.

`FUN_005E3830` validates only when the army's owner/province is a naval/water
province and the resolved transport back-pointer at `+0x1B4` is nonnull.

`FUN_005E3480` executes:

1. Resolve the loaded army.
2. Emit a generic world-state reset if it was selected.
3. Resolve the current transport from `army+0x1B4`.
4. Call `FUN_005D78D0` to remove it.
5. If it was selected, emit the post-unload map selection update.

## CSplitAndLoadArmyCommand

`FUN_005E3A60(command, sourceArmyPath, selectedCount, transportPath)`
constructs command `0x09A8`. It also allocates a new AI task ID in exactly the
same way as volume 16's army split:

`DAT_0131CA68 = FUN_009C12D0();
DAT_01258A9C += 1;
newId = DAT_01258A90 + 0x1268;`

The fields at `+0x8C/+0x90/+0x94` store that generated ID and counter state.

`FUN_005E41E0` validates:

1. Both source army and transport resolve.
2. `selectedCount+0x8C` is nonzero.
3. Current occupied transport capacity from `FUN_005DC560` is subtracted from
   total capacity at `transportData+0x258 / 1000`.
4. The selected weight must fit into remaining capacity.

`FUN_005E3B50` executes the split-and-board sequence:

1. Resolve source and destination objects twice.
2. Require that both army paths have the same province/state tag at `+0xCC`.
3. Take the first `selectedCount` subunits from the source list.
4. If the remaining transport has capacity, create a new army with
   `CCreateUnitCommand` (`0x041A`).
5. Move each selected subunit with `CTransferSubUnitCommand` (`0x0412`).
6. If the transport is available, create `CLoadArmyCommand` (`0x0579`) and send
   it.
7. Rebuild local selection and province visuals.

This is the AI version of "split selected brigades and immediately embark them".

## CMergeCommand

`FUN_005E13B0(command, nodeList)` constructs command `0x0410`. For each node it
stores `{armyId, countryTag/worldTag, label}` in a list at command
`+0x3C..0x48`.

`FUN_005E1BE0` validates that at least two army objects resolve and that
`FUN_00513D50` accepts the merge.

`FUN_005E1590` executes by iterating the command list. For each current army it
calls `FUN_005D5BC0(current, next)`, emits `subunit_merge`, and advances to the
next node. `FUN_005D5BC0` moves units, repairs target links, transfers loaded
armies when needed, and rebuilds the final army state.

## Movement and transport together

A typical AI amphibious sequence is therefore:

`select/load units
  -> split/transfer commands 0x0412/0x041A
  -> CLoadArmyCommand 0x0579
  -> naval movement to a destination sea/landing node
  -> CUnloadArmyCommand 0x057A
  -> normal province movement 0x02F8`

The higher-level AI chooses the transport and destination, but all visible state
changes pass through these synchronized commands.

