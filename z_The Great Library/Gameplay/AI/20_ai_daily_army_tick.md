# 20. Daily army tick, movement progress, arrival and attrition

This volume closes the runtime loop between a route installed by
`FUN_005D1BB0` and the next visible province. It also documents the daily
attrition roll.

## Main function

`FUN_005D25C0(army)` is the daily movement/army update. It returns:

* `1` when the final movement phase completed;
* `0` while movement is still in progress or was interrupted.

### Early state

1. Return if the army has fewer than one unit at `army+0x10`.
2. Return if the current world date at `world+0xB0C` is earlier than the
   army's scheduled departure/time field `army+0x2A`.
3. If the first route node equals the current province, remove it. If the node is
   flagged as selected at `routeNode+0x0C`, mark the special selected state and
   reset progress for this tick.
4. Resolve:
   - current province object from `army+0x39`;
   - next province object from `army+0x3A`.

## Speed and route distance

`FUN_005D1570(army, output)` calculates today's movement speed.

Main rules:

* Crossing between land and sea uses base speed `1000`.
* The base movement value comes from `army+0x29+0xB8`.
* Adjacent-province terrain/infrastructure data multiplies it:
  `(terrainEntry+0x10 + 1000) * base / 1000`.
* Adjacency type `1` or `2` applies another multiplier from
  `army+0x98`.
* The destination province infrastructure at `province+0x2B8` applies
  `(infrastructure + 1000) / 1000`.
* Naval movement uses the define at `DAT_012586DC+0x20+0x1C`; land movement
  uses `+0x20`.
* A country/technology multiplier from `army+0x36+0x48+0x30` is applied last.

`FUN_005D1750`/`FUN_005D1790` calculate remaining distance to the next
province. If army and destination are on different land/sea surfaces and the
army is moving, the distance is `12000`; otherwise it comes from adjacency
data with a river/crossing multiplier. The result is fixed-point thousandths.

## Progress accumulation

Each tick:

`army+0x3E += FUN_005D1570(army)`

Negative accumulated progress is clamped to zero.

For a normal move:

* `army+0x22` is cleared.
* Arrow progress is accumulated in `army+0x40`.
* Percentage progress is stored in `army+0x3F` and capped at `100`.

For retreat movement, `army+0x1D` is nonzero. The function returns until
accumulated progress exceeds remaining distance, then clamps progress to that
distance.

## Arrival checks

Before accepting arrival, the function checks hostile presence and province
control:

* `FUN_005CBDE0` detects a combat/interaction condition.
* `FUN_004C3E90` validates the destination state.
* `FUN_005B9690` rejects a province controlled by a hostile side.

If the move is blocked, `FUN_005D1890` resets/cancels the route and the
function returns without changing province.

If progress has not reached distance, the army remains in transit. If current
date is earlier than `army+0x2B`, the army waits at the route boundary.

## Final hop

When progress reaches distance and the schedule allows it, the first route node
is removed.

* If the route queue becomes empty, the move is complete and `army+0x41` is
  cleared.
* If `army+0x3C` flags a selected/manual hop, the node is marked and normal
  automatic movement stops until selection is resolved.

Then the function handles arrival:

1. Normal destination: set the new province context with `FUN_005CB2C0`.
2. Reset siege/occupation counter at `province+0x1B8` when appropriate.
3. Rebuild army/province visual buckets with `FUN_004C8580`.
4. Refresh movement sprites and progress with `FUN_005D4540`.
5. Reset arrow progress at `army+0x50`, percentage at `+0x3F` and progress
   at `+0x40`.

## Naval boarding on arrival

If the arrived context is naval, the function iterates transports and checks
capacity with `FUN_005D77A0`. On success it calls:

`FUN_005D3980(army, transport, routeNode)`

This routine:

1. Attaches the army to the transport with `FUN_005D7810`.
2. Sets `army+0x38` to the transport context.
3. Updates selection and local player notifications.
4. Emits a scripted/localized boarding event for the local observer.
5. Clears invalid selection state through `FUN_009A63F0`.

If the army was already loaded and the flag at `army+0x84` applies, arrival
can instead unload it with `FUN_005D78D0` and reattach it to a transport if
capacity still allows.

## FUN_005D1890: route reset

`FUN_005D1890` cancels the active route:

* stores the current timestamp in `army+0x2A/+0x2B`;
* clears route first/last/count at `+0x39/+0x3A/+0x3B`;
* clears selected route state;
* resets accumulated progress to a random base and arrow offset;
* refreshes movement visual and province bucket;
* removes the army from hostile occupied-province tracking when required.

It is the common "stop movement" helper, not only an error path.

## Daily attrition: FUN_005D0670

`FUN_005D0670(army, output)` performs the daily attrition roll.

Preconditions:

* No current target at `army+0x1D`.
* Attrition enabled by `army+0x59 == 0`.
* Global movement/attrition flag `world+0xD1C` is set in the normal caller
  `FUN_005C92A0`.

The army's virtual method `+0x78` supplies the attrition rate. The code
scales that rate by a random `0..10` factor and compares another random
`0..1` value against the result. Thus the rate is not a simple deterministic
daily percentage.

For each subunit:

* Normal subunits use a seeded modular check:
  `(subunit+0x0C * globalRandom) % 10 < scaledRate/1000`.
* A selected loss reduces strength at `subunit+0x0F` by roughly
  `maxStrength * scaledRate / 1000` through `FUN_005C02F0`.
* If remaining strength is below the sampled threshold, the subunit is destroyed
  with `FUN_0068A900`.
* Combat/selected subunits can instead accumulate a pending loss at
  `subunit+0x1B` and immediately convert it through `FUN_005C0160`.

The second output parameter accumulates the latter class of losses. If at least
one subunit is destroyed, the function emits a province-dated attrition event.
If `army+0x10` reaches zero, the army is removed; if it was at sea, the
transport list is also cleaned.

## Call sites

* `FUN_005C92A0` calls attrition for an idle army, then reinforces or updates
  siege counters as needed.
* `FUN_005D25C0` calls attrition at the end of a movement tick when the army
  is moving or the current province requests it.
* After attrition, `FUN_005D25C0` still processes remaining route links and
  returns whether movement completed.

## Result

At this point the wartime runtime is closed:

`AI order -> CMoveCommand -> army route -> daily progress -> arrival ->
combat/siege or transport boarding -> attrition -> next AI target`

