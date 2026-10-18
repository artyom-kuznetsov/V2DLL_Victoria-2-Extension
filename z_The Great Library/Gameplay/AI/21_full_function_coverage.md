# 21. Full function coverage

This volume records the closed raw-decompilation coverage of Victoria 2
version 3.04.

## Result

| Category | Count |
|---|---:|
| Ghidra function entries | 63,855 |
| Real executable function bodies | 18,267 |
| Real functions exported as C | 18,267 |
| Caller reports | 18,267 |
| Failed decompilations | 0 |
| Unwind entries / non-code pseudo-functions | 45,588 |

The strict Ghidra inventory reports:

`total=63855 real=18267 coveredReal=18267 missingReal=0 ignoredUnwind=45588`

## Boundary used

`0x00B364C0` is the beginning of the dense unwind/pseudo-function region.
Functions named `Unwin*` and all entries at or above this boundary are
excluded from the executable-body corpus. The first retained function is at
`0x00401000`; the corpus extends through the real code region ending before
`0x00B364C0`.

## Files

Raw files are stored in:

`Gameplay/AI/decomp/v2game`

Naming:

`FUN_<entrypoint>_<entrypoint>.c`
`FUN_<entrypoint>_<entrypoint>.c.callers.txt`

The C file header preserves Ghidra's original symbol name, entry point, and
body range. Therefore named functions are searchable even when the filename
uses the normalized entry-point form.

Inventories:

* `function_catalog.tsv` — all real functions, names, and body sizes;
* `all_functions_inventory.tsv` — all Ghidra entries including unwind;
* `21_full_function_coverage.md` — this coverage record.

## Batch verification

The remaining corpus was exported in the following missing-index batches:

`0-499, 500-2999, 3000-5499, 5500-7999, 8000-10499, 10500-12999, 13000-15499, 15500-17999, 18000-18004`

Ten large functions failed in the normal 12-second batch budget and were
retried with a 240-second budget:

`00639120, 006592F0, 00662010, 0069C6F0, 006C2E50,
0070EC60, 00740050, 007ED4D0, 009796B0, 00A93BFC`

An additional legacy file at `0056F850` was rebuilt with a 128 MB
decompiler payload limit after its original export exceeded the default
response buffer. Its rebuilt source is 179,527 characters.

After these retries, the corpus contains no `DECOMPILE FAILED` markers.

## Meaning of coverage

This is full raw decompilation coverage, not a claim that every one of the
18,267 functions already has a human-readable semantic essay. The Great
Library's thematic volumes document gameplay, AI, war, movement, transport,
economy, market, and interface logic where relevant. The raw corpus now
guarantees that no real executable function is missing from the project.

