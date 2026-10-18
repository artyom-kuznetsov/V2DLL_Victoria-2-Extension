# 05. Ledger list and linegraph pages

This volume documents the ledger page renderer around `FUN_0069C520`,
`FUN_0069C6F0`, and `FUN_0069E250`. Addresses are VA from `v2game.exe` 3.04.

Raw decompilations are already present in
`../Gameplay/AI/decomp/v2game`.

## Page selection

`FUN_0069C520` reads the current ledger-page record:

`record = currentLedgerPage + pageId * 0x58`

The field at `record+0x40` selects the renderer:

| `record+0x40` | Renderer |
|---|---|
| zero | linegraph page, `FUN_0069C6F0` |
| nonzero | table/list page, `FUN_0069E250` |

The two GUI layouts are selected by literal name:

* `ledger_sort_buttons`
* `default_listbox`
* `ledger_linegraph_legend`
* `ledger_linegraphs`

## Table/list page: FUN_0069E250

The function builds one ledger page from a `0x58`-byte page record. The page
record holds callbacks, column metadata, chart visibility data, and a callback
used to fetch values. The UI context is at `state+0x28`; the current page id is
at `state+0x34`; the page-record table begins at `state+0x3C`.

The observed resource names are:

* `ledger_default_textbox`
* `ledger_default_textbox_right`
* `ledger_linechart`
* `ledger_legend_plupp`
* `ledger_legend_checkbox`

`FUN_00698CB0` resolves GUI children named `t00..	99`, and
`FUN_00698DC0` resolves chart objects named `i00..i99`. Thus header cells,
legend entries, and charts are indexed rather than hard-coded.

### Header/value pass

The first loop fills ten header cells: five left-aligned text boxes and five
right-aligned text boxes. For each cell it calls the page-record callback and
formats the value according to a type field observed as `local_128`.

Value conversion:

| Type | Display/chart conversion |
|---:|---|
| 5 | fixed-point value / 1000 |
| 6 | formatted currency/value; chart uses fixed-point / 1000 |
| 7 | scaled by 100000 / 1000, i.e. percent-like fixed point |
| 8-10 | 32.32-style fixed point; multiplied by `3.0517578125e-05` |
| 11 | signed 32-bit integer |
| 12 | helper `FUN_009C9E20` |
| 13 | helper `FUN_009C9C70`; chart treats value as unsigned |
| 14 | helper `FUN_0043ACD0` |

Types 5-7 and 11-14 also produce the numeric value used by line charts.
Types 3-4 are display-only in this pass.

### Legend and chart pass

After the ten header cells, the function resolves the chart container and
iterates the data series stored as a vector at `state+0x68..0x6C`.

For every series it creates:

1. a `ledger_legend_plupp` color marker;
2. a `ledger_default_textbox`;
3. a `ledger_legend_checkbox`.

The checkbox state comes from the page-record visibility array. If the series is
hidden, only legend controls are updated. If visible, the function loops over
the page's point count, calls the page callback for each point, converts the
returned color/value record, and adds it to the chart object.

`FUN_009D93B0` converts chart points to screen points. Each source record is
0x20 bytes; the output record is 0x10 bytes. It divides the source value by the
chart scale and stores the resulting float with the original screen coordinates.

At the end, if a chart maximum exists, the function rounds the new maximum to
thousandths and notifies the chart object. Finally it calls the chart's refresh
method at vtable offset `+0x6C`.

## Linegraph page: FUN_0069C6F0

`FUN_0069C6F0` builds the header/legend side of the linegraph layout. It uses
the same `0x58`-byte page record, creates indexed text controls, and prepares
the legend used by the chart view. It is called directly by `FUN_0069C520`
when `record+0x40 == 0`.

## Modding implications

To add a ledger page without replacing UI files, the game expects a new
`0x58`-byte page record plus:

* ten header values in the record callback;
* one or more series IDs in the state vector;
* a visibility flag per series;
* a point-count field and a callback returning chart points;
* the corresponding GUI resources listed above.

Changing only text or color is safe at the UI layer. Adding a column or series
requires matching changes in the page record and GUI layout. The renderer does
not magically create indexed controls if they are absent.

