# 10. Economic core: complete price, credit and bankruptcy layer

This volume closes the remaining core economic questions left by volumes
00-09. It adds the exact target-price curve, state purchase credit, loan
commands, interest payment and bankruptcy. Addresses are VA in
`v2game.exe` 3.04.

A full function inventory is stored in:

`economy_function_catalog.tsv`

It contains **285 functions** classified as direct `Economy` or
`Graph:Economy` by the semantic catalog. The file is sorted by body size.

## Scope map

The economic cluster spans market code, country finance, construction, factory
and RGO code, commands, trade UI and trigger predicates. The largest systems are:

| Address family | Main area |
|---|---|
| `0047xxxx` | market records, goods pools, fixed-point helpers |
| `0048xxxx` | world market day, price queue, buyers, factory revenue |
| `0049xxxx/004Axxxx/004Fxxxx` | construction and factory projects |
| `004Cxxxx/004Dxxxx/004Exxxx` | states, buildings, employment, factories |
| `0050xxxx/0051xxxx` | country daily budget and queues |
| `0052xxxx` | loans, creditors, debt interest, bankruptcy |
| `0056xxxx` | goods and RGO definitions |
| `0058xxxx` | synchronized economic commands |
| `0071xxxx/0072xxxx/0073xxxx` | trade/market UI |
| `0086xxxx` | construction messages/UI |
| `008Exxxx` | economic trigger predicates |

The raw source for every function in the TSV is present under
`AI/decomp/v2game`.

## Market ratio

Before `FUN_00482610`, `FUN_00482930` computes:

`ratio15 = (demand * 32768) / supply`

The operand order was confirmed from disassembly:

* dividend: `market+0x218` vector, demand;
* divisor: `market+0x050` vector, supply;
* result: 64-bit fixed15, i.e. `1.0 == 0x8000`.

The value is passed as a 64-bit argument to `FUN_00482610`. The function
returns another fixed15 value, the desired price multiplier.

## FUN_00482610: target-price curve

The decompiler flattens the x87 code, but disassembly confirms a piecewise
threshold table followed by a smooth high-demand formula.

Thresholds are rounded to nearest int64 before comparison. Outputs are floats
converted to fixed15 by `FUN_00408D50`, which performs:

`round(value * 32768 + sign(value) * 0.5)`

The vanilla table is therefore:

| Demand / supply ratio | Target multiplier |
|---:|---:|
| below 0.05003 | 0.223 |
| below 0.06601 | 0.258 |
| below 0.08301 | 0.288 |
| below 0.10003 | 0.316 |
| below 0.111 | 0.333 |
| below 0.125 | 0.353 |
| below 0.142 | 0.377 |
| below 0.166 | 0.408 |
| below 0.200 | 0.447 |
| below 0.250 | 0.577 |
| below 0.333 | 0.500 |
| below 0.500 | 0.700 |
| below 0.666 | 0.816 |
| below 0.816 | 0.816 |

The non-monotonic vanilla segment around `0.25 -> 0.333` is real code, not a
decompiler artifact.

### High-demand formula

If `ratio15 >= 0.816 * 32768`, `FUN_0048C080` runs:

`r = ratio15 / 32768`
`target15 = ratio15 + round(16384 * sqrt(r))`

Equivalently, as a real-number target:

`target = r + 0.5 * sqrt(r)`

The square-root helper is `FUN_00B35500`. `FUN_0048C080` multiplies by
`1/32768`, takes the square root, selects the positive `0.5` coefficient,
multiplies it by `32768`, adds the original `ratio15`, and rounds back to
int64.

Thus the low/middle range is a hard table, while the high range is smooth and
unbounded.

## Daily price movement

After `FUN_00482610`, `FUN_00482930` computes:

`desiredPrice15 = currentPrice15 * targetMultiplier15 / 32768`

The actual new price does not jump immediately. The function compares the
desired price with `market+0x2C8`, inserts or updates a node in the delayed
queue at `market+0x334`, and advances by the vanilla step loaded from
`RVA 0xE5B9E0`.

The modded alternatives documented in `06_price_formula.md` replace exactly
this movement point:

* `TRADE_PRICE_DELTA_PERCENTUAL`: move by a percentage of current price;
* `TRADE_PRICE_DELTA_EXPONENTIAL`: scale the step by the distance to target.

## State stockpile purchases and credit

`FUN_00487410` buys state stockpile goods. When the treasury cannot cover the
purchase:

* if `world+0x0D1C == 0`, the vanilla code force-raises `country+0xE78` to the
  required amount;
* if `world+0x0D1C != 0`, it calls `FUN_00522910`, the loan/credit path.

The credit path is controlled by the same flag used for the state-credit mode in
V2BDSM.

### FUN_00522910: borrow remaining purchase money

Conceptually:

`FUN_00522910(country, allowCommandRefresh, amountLow, amountHigh)`

The amount is the remaining unpaid purchase cost in internal fixed15 units.

Algorithm:

1. Check whether the borrower may draw from its domestic/own capacity using
   `FUN_00523130`.
2. If allowed, subtract that capacity with `FUN_00522820`.
3. Walk the creditor vector `country+0xE8C..0xE90`.
4. For every existing creditor:
   - check eligibility with `FUN_00523130`;
   - calculate remaining capacity with `FUN_00522820`;
   - if the creditor is the local player and the available amount changes, mark
     UI refresh state.
5. Remove exhausted creditor rows with `FUN_0054C6E0`.
6. If money still remains, open a generic/global loan slot and continue.
7. If the amount is fully paid, return success; otherwise return failure.

`FUN_005225A0` computes available loan capacity. It uses:

* `country+0xA60+0x3C0`, a loan/credit modifier;
* a global define from `DAT_012586DC+0x10`;
* the creditor country treasury aggregate at `creditor+0xE88`;
* the borrower multiplier `country+0x1560/+0x1564`;
* an existing `CCreditor` row at `country+0xE8C`, if present.

A country under the post-bankruptcy cooling period, or an invalid foreign
creditor, has zero available capacity.

### FUN_00523400: execute a loan

`FUN_00523400` is the actual transfer primitive. It verifies that the loan is
permitted, that a hostile/rebel relationship does not block it, and that the
creditor has enough remaining capacity.

On success it:

1. Adds the loan principal to `creditor+0xE88+0x18/+0x1C`.
2. Adds the same amount to the existing `CCreditor` record, or creates one:
   - `record+0x08` borrower tag;
   - `record+0x0C` creditor country id;
   - `record+0x18/+0x1C` principal/balance;
   - `record+0x20` active flag.
3. Adds the money to `borrower+0xE78`, the treasury.
4. Installs the new creditor row in `borrower+0xE8C..0xE90`.
5. Refreshes dependent lists with `FUN_0054C6E0`.

The user-facing synchronized commands are:

| Command | ID | Class |
|---|---:|---|
| take loan | `0x0833` | `CTakeLoanCommand` |
| pay back loan | `0x0834` | `CPayBackLoanCommand` |

Constructors are `FUN_0058B900` and `FUN_0058BCF0`; heap helpers are
`FUN_0058BBA0` and `FUN_0058C010`.

## Debt interest: FUN_00523C30

`FUN_00523C30` is called from the country budget path and processes the
creditor vector. It is the loan-interest layer.

For every `CCreditor` row:

`interest = principalField * rateField / 0xF0000`

If the borrower is not the creditor country, the amount is additionally scaled
by `country+0xA60+0xA0`. The calculation is fixed15-aware.

Then the country attempts to pay:

1. If treasury covers the interest:
   - `FUN_00525770(5, amount)` subtracts treasury or takes an emergency loan;
   - if the creditor is another country, its budget aggregate at
     `creditor+0xE88+0x20` receives the payment;
   - `creditorRecord+0x18/+0x1C` is increased;
   - `creditorRecord+0x20` is set to active/paid.
2. If treasury does not cover it:
   - the unpaid deficit is accumulated;
   - `FUN_00525770(5, remainingTreasury)` pays what is available;
   - the creditor row is deactivated;
   - a default event is generated if the creditor is another country.

`FUN_00525770` is the common expense payer. If treasury is insufficient and
credit mode is enabled, it calls `FUN_00522910` for the deficit. If borrowing
fails, treasury is clamped to zero and the requested expense amount is added to
budget category `5`, the debt/interest bucket.

## Bankruptcy trigger

After all creditors are processed, `FUN_00523C30` compares accumulated unpaid
interest with the constant at `0x00E45F08`, equal to `3.7768`. The comparison
is in internal units, so even a tiny positive unpaid remainder can pass the
threshold once rounded.

If exceeded, `FUN_005241F0` runs.

### FUN_005241F0: bankruptcy/default effects

The function uses `country+0xE9C` as the last/default date marker.

If the current date is before `lastDate + defineDays * 2182`, the code treats
the situation as a repeated/default-window event and walks the creditor list. If
an affected relation still exists, it fires the second-default event/message.

After the cooling interval, it applies two timed country modifiers:

* `bad_debter`;
* `in_bankrupcy`.

Durations are taken from the global define block and converted from define days
to internal ticks.

Then it performs the economic collapse pass:

1. Stores the current date in `country+0xE9C`.
2. Decays the bankruptcy counter at `country+0xEA0`.
3. Iterates provinces and factories.
4. For invalid factories, destroys the object with `FUN_0053E7C0`.
5. For closeable factories, adds factory money at `factory+0xB8` back to
   country aggregates and removes the factory from `province+0xD8`.
6. Issues `CDestroyStateBuildingCommand`, command id `0x0913`, for qualifying
   state buildings.
7. Synchronizes construction/project buffers and planned stockpiles.
8. Calls `FUN_0050EA30` and `FUN_00520150` to rebuild country economic state.
9. Creates `BANKRUPTCY` for the local player or `THEY_BANKRUPTCY` for another
   country.

This is why bankruptcy is not a single treasury reset: it closes factories,
cancels state buildings, installs modifiers and broadcasts a newspaper/event
record.

## Relationship to existing volumes

* `00_market_cycle.md`: daily market ordering remains authoritative.
* `04_market_buyers.md`: state purchase order and home/world pools remain
  authoritative. This volume adds the credit branch left open there.
* `06_price_formula.md`: movement queue remains authoritative. This volume
  replaces the old “all branches unknown” note with the complete target curve.
* `09_country_budget_tick.md`: taxes/subsidies/POP payouts remain there. This
  volume adds what happens when expenses or state purchases exceed treasury.

## Closed checks

* `FUN_00482610`: all branches reconstructed.
* `FUN_0048C080`: high-demand formula reconstructed.
* `FUN_00522910`: credit path reconstructed.
* `FUN_00523400`: loan transfer reconstructed.
* `FUN_00523C30`: interest/default flow reconstructed.
* `FUN_005241F0`: bankruptcy effects reconstructed.
* Economy cluster inventory: 285 functions stored in TSV.

