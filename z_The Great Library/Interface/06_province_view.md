# 06. Province View

This volume documents the main Province View update layer. Addresses are VA in
`v2game.exe` 3.04. Raw decompilations are in
`../Gameplay/AI/decomp/v2game`.

The screen is not driven by one monolithic update. Three large functions cover
different layers:

| Function | Size | Role |
|---|---:|---|
| `FUN_007443D0` | 16,488 bytes | control dispatcher for named Province View controls |
| `FUN_00740050` | 16,832 bytes | owner, presence, admin efficiency and construction |
| `FUN_0074AA90` | 14,022 bytes | military panel, RGO icon, war/allied/puppet targets |

## Common view state

Observed fields in the Province View object:

| Offset | Meaning |
|---:|---|
| `+0x20` | UI/window context used by `FUN_00740050` |
| `+0x24` | current province object |
| `+0x130` | UI/window context used by `FUN_0074AA90` |
| `+0x134` | selected province in the military panel |
| `+0x2C` | observer/callback state for dynamically created flags |
| `+0x68..0x6C` | vector of ledger/data series used by linegraph variants |

Province View also caches small records per province:

`record = provinceId * 0xB0 + DAT_01258728`

The cache is lazily allocated. Several functions read the record at `+0x08`,
`+0x80`, and neighboring offsets instead of repeatedly recomputing UI values.

## FUN_007443D0: named-control dispatcher

`FUN_007443D0(view, param2, control)` receives one Province View control and
compares its textual name with `FUN_00AAFE90`. The function then refreshes that
control from the province object.

The first state check is important: if the map/province state byte at
`mapState+0x67` is set, it calls `FUN_00749750` and `FUN_00459820`, then returns.
Otherwise it resolves the selected province, allocates the `0xB0`-byte per-province
cache if needed, and reads the `province_statistics` GUI context.

Control names handled in this function:

| Control | Behavior |
|---|---|
| `controller_flag` | draws the controller flag for an occupied province |
| `flashpoint_indicator` | uses province crisis/flashpoint state at `province+0x188`, reading `+0x280` |
| `occupation_flag` | draws occupier flag |
| `occupation_icon` | draws occupation icon |
| `occupation_progress` | updates occupation progress |
| `owner` | draws owner flag/name context |
| `admin` | shows administration from `country+0xC0/+0xC4` |
| `national_focus` | updates National Focus control |
| `slave_state_icon` | toggles slave-state visual |
| `colony_button` | updates colony action button |
| `prov_terrain` | resolves terrain from `province+0x5C+0x14` |
| `liferating` / `liferating_overlay` | updates life-rating value and overlay |
| `expand`, `expand_text`, `building_progress`, `underconstruction_icon` | updates factory expansion state |
| `build_icon`, `build_army`, `build_navy`, `army_progress`, `army_text`, `navy_progress`, `navy_text`, `army_size` | military construction panel |
| `rallypoint_icon`, `rallypoint_checkbox`, `rallypoint_checkbox_naval`, `rallypoint_merge_checkbox`, `rallypoint_merge_checkbox_naval` | rally points |
| `goods_type`, `income`, `produced`, `employment_ratio`, `rgo_population`, `rgo_percent` | RGO/resource panel |
| `crime_icon`, `crime`, `crime_name`, `crimefight_icon`, `crimefight_percent` | crime panel |
| `total_population_icon`, `total_population`, `supply_limit`, `migration_icon`, `migration`, `growth_icon`, `rebel_icon`, `rebel_percent` | demographics |
| `country_flag`, `open_popscreen`, `build_factory_button`, `party_loyalty` | owner/opening/pop politics controls |
| `workforce_chart`, `culture_chart`, `ideology_chart` | dynamic pie/bar charts |

The chart handlers read the country/pop aggregation vectors and convert each
visible slice into the chart control. When no visible slice exists, the control
is cleared rather than left with stale data.

## FUN_00740050: owner and construction layer

`FUN_00740050(view)` updates the owner and construction part of Province View.

Main steps:

1. Resolve `province_statistics` from `view+0x20`.
2. Resolve the current owner from `province+300`.
3. Cache the selected per-province UI record.
4. Update `owner_icon`, `owner_presence`, and `admin_efficiency`.
5. Loop over construction projects in `province+0xD8` and update expansion
   controls.
6. If no matching project exists, clear `building_progress`, `expand_text`, and
   `underconstruction_icon`, then hide or disable `expand`.
7. If a matching project exists, show `building_progress`, text, icon, and the
   expansion button.

Admin efficiency is calculated from two country values:

`country+0xC0 and country+0xC4`

They are multiplied together with the fixed-point factor `0x320000`, then the
result is arithmetic-shifted right by `0x0F`. The UI formatter receives that
result.

The function also distinguishes the local player, ally, enemy, and neutral owner
presence by changing GUI visibility/methods rather than creating a separate
control set.

## FUN_0074AA90: military target panel

`FUN_0074AA90(view, province)` updates the military side panel.

Sequence:

1. Store the new province at `view+0x134`.
2. If it differs from the previous value, call `FUN_0074A6A0` to reset/rebuild
   dependent controls.
3. Resolve the `0xB0`-byte cache record for the province.
4. Update `goods_type` from the province RGO data in the cache.
5. Build target lists named `war_targets`, `allied_targets`, and
   `puppet_targets`.
6. For each target entry, create a `0x28`-byte entry object, resolve its
   country flag, attach tooltip/callback state, and add it to the corresponding
   GUI list.
7. Finally update `selected_military_icon`, using frame `1` or `2`.

The source of the target vector is the owner country object at
`province+300`; one vector is read at country offset `+0x356..+0x357`. The
function does not alter diplomacy: it renders existing war, ally, and puppet
target state.

## Practical modding notes

* Control names are part of the binary contract. Renaming a control in a
  `.gui` file disables only that branch of `FUN_007443D0`; stale data remains on
  screen.
* Adding a new named control requires a matching branch here or the control is
  ignored.
* The per-province `0xB0` cache is reused between frames, so direct external
  mutation of province fields should invalidate or update the underlying data
  before Province View is opened.
* Chart controls expect aggregated slices in the same fixed-point style used by
  the rest of the UI; a zero-count vector is a valid empty state.

