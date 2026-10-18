# Function semantic catalog

This catalog turns the complete raw decompilation corpus into a searchable
system-level index. It covers the same boundary as volume 21: all
**18,267 real executable functions**. The 45,588 unwind/Ghidra pseudo-entries
remain excluded.

## Files

| File | Contents |
|---|---|
| `function_semantic_catalog.tsv` | one row per real function |
| `function_semantic_summary.tsv` | exact direct and call-graph category counts |
| `top_functions_by_cluster.tsv` | 20 largest functions in each normalized cluster |
| `largest_unclassified_functions.tsv` | 200 largest functions without a useful system label |
| `clusters/cluster_*.tsv` | full normalized clusters |

Catalog columns:

`address, name, size, inCalls, outCalls, primaryCategory, tags, symbols, strings`

## Categories

| Normalized category | Functions |
|---|---:|
| UI | 1,538 |
| AI | 992 |
| Diplomacy | 696 |
| Military | 520 |
| EngineNet | 500 |
| Scripting | 477 |
| Province | 356 |
| POP | 319 |
| Economy | 285 |
| Technology | 63 |
| Politics | 49 |
| Evidence only, not assignable safely | 2,224 |
| Unclassified generic/engine tail | 10,248 |
| **Total** | **18,267** |

A `Graph:` prefix in the raw TSV means direct string/symbol evidence was absent,
but the function inherited a category through its immediate call graph. The
normalized tables above merge direct and graph-derived labels.

## Method

For every real function the Ghidra script collects:

1. outgoing calls and callers;
2. referenced symbol names and vftables;
3. referenced string literals;
4. body size.

A direct-evidence pass assigns a primary category from symbols and string
identifiers. A second pass propagates a category from classified callers or
callees. The graph vote is weighted by `1/sqrt(edgeCount)`, so one huge
dispatcher does not swallow every utility function. A label is accepted only if
the best vote is at least 1.35 times the runner-up.

## Interpretation

This is a semantic index, not proof that every function's algorithm is fully
explained. It is designed to answer three questions quickly:

1. Which raw functions belong to a system?
2. Which are the largest important functions in that system?
3. Which remaining functions deserve manual decompilation first?

The `Unclassified` tail is expected to contain CRT/runtime helpers, renderer and
resource code, generic containers, compiler-generated routines, and small
functionality islands with no useful strings. `EvidenceOnly` rows have symbols
or strings, but the evidence is too generic for an automatic game-system label.

