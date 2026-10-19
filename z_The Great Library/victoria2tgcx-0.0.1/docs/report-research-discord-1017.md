# Report: Discord research material and smedley_kernel (2026-10-17)

> **Report**, not rewritten. Read-only research; no code, build or install
> changed. New symbols are recorded in `symbols.md` ("External research
> cross-check").

## 1. What was supplied

The user collected material from the Victoria 2 modding Discord into
`v2moddingsv/` (kept out of git, R8: third-party, no licence):

| file | content |
|---|---|
| `discord.txt` | the posts: method (find a save value with Cheat Engine, ×2¹⁵, subtract the field offset), a link to smedley_kernel, and the TGC team's VS Code extension "Victorian Tools" (language server for script validation) |
| `internal data storage.txt` | struct notes: POP, RGO, production type, province, province-RGO, regiment, army, regiment type, ship |
| `internal data storage (1).txt` | superset of the above, plus country, loan, factory, artisan, pop linked-list pointers and value encodings |
| `v2game.CT`, `v2game (1).CT` | Cheat Engine tables (621 / 893 entries) with the same structs as offset groups. **No Lua or assembler scripts** (checked: 0 `LuaScript`/`AssemblerScript` elements). Heap addresses are from one session and meaningless; only offsets and the `v2game.exe+…` statics carry over |

The authors do not state their build. Section 3 shows it is ours.

## 2. smedley_kernel

<https://github.com/shenso/smedley_kernel>, "a victoria 2 SDK" (plugin
loader and C++ headers), **LGPL-3.0**, last push 2024-03-16. Its
`models/v2/classes/CCountry.toml` gives 59 `CCountry` method RVAs with
calling convention and `this` register. Unlike V2DLL and TGC it has a
licence; anything taken from it still gets a `// from smedley_kernel:
<file>` comment (same rule as R8 for V2DLL) and LGPL obligations apply if
the DLL is ever published. Most class pages (`CUnit`, `CSubUnit`,
`CLeader`) are empty stubs; `CUpperHouse` is a country tag plus a
`vector<fixed_point<int64,48,15>>` seats, which agrees with our U-4 mapping.

## 3. Is it our build? Yes

Measured against `E:\v2re\bin\v2game.exe` (SHA-256 `62d48c20…`, R2):

- **All 59 smedley `CCountry` RVAs land on a function start** (preceded by
  `CC`/`C3`/`90` padding; 57 begin `55 8B EC`, the two `GetMovement` overloads begin with a direct load). Python script over the PE,
  2026-10-17.
- The CT statics `v2game.exe+A45C28` / `+A45C30` are `.rdata` doubles
  163840.5 and 6554.1, i.e. 5.0 and 0.2 in 2¹⁵ units: plausible max/min
  relative price. `+E5B9E0`, `+E587F4`, `+E5D758` are in uninitialised
  `.data`, next to our `g_countryManager` (RVA `0xE587E4`).
- Ten functions decompiled with `ghidra/DecompileAt.java` (output
  `E:\v2re\logs\smedley-check-1017.txt`, outside git). Every field they
  touch matches the CT or our earlier findings:

| smedley name | RVA | what the code does | agrees with |
|---|---|---|---|
| `SetResearchPoints` | `0x1366F0` | writes `+0xE3C`, clamps by `daily_research_points` (`0x138150`); uncivilised (`+0x12D0`=0) uses a define | CT "research points +0xE3C" |
| `SetLeadership` | `0x139380` | writes int64 at `+0x7D0/+0x7D4`, clamps negatives to 0 | CT "leadership +0x7D0" |
| `AddPrestige` | `0x1341A0` | `+0xEA0 += delta`, positive deltas scaled by `(1000 + [[+0xBCC]+0x288])/1000`, floor 0 | "prestige int32/10³"; offset is new |
| `AddLeader` | `0x10E760` | prepends a 16-byte node to the list at `+0xBD4` (head) / `+0xBD8` (tail) / `+0xBDC` (count) | our `+0xBD4` leader list, now **C** |
| `AddUnit` | `0x113C80` | appends a 16-byte node to `+0x7B4` (head) / `+0x7B8` (tail) / `+0x7BC` (count) | new: the country's unit list |
| `RefreshSubUnits` | `0x108330` | iterates from `+0x7B4` | same list |
| `PayBackLoan` | `0x1238D0` | walks the pointer vector `+0xE8C/+0xE90`, subtracts from treasury `+0xE78/+0xE7C` | CT "loan vector +0xE8C", our treasury |
| `RearrangeUpperHouse` | `0x127D10` | reads/writes the int64 vector at `+0x8C0/+0x8C4` | our `CUpperHouse` (`+0x8B0`) `+0x10/+0x14` |
| `Westernize` | `0x142370` | sets `+0x12D0`=1, fires `on_civilize` | our civilized byte. smedley also gives `WithdrawFromTreasury` this RVA: that name is wrong |
| `AddTimedModifier` | `0x1114D0` | reads the current date `g_world+0xB0C` to compute the expiry | our `+0x4D8` timed-modifier list (not re-traced here) |

smedley gives `SetPrimaryCulture` the same RVA as `SetLeadership`; the
decompile shows leadership, so `SetPrimaryCulture` is wrong too. The other
smedley RVAs are recorded as **I** until a card reads them.

The pop's next pointer `+0x27C` agrees with our own TPL-0 reading of
`FUN_004B81D0` (`symbols.md`).

## 4. What is useful, by mechanic

| mechanic | useful | status |
|---|---|---|
| **TPL-1 Conform** | country unit list `+0x7B4/+0x7B8/+0x7BC`; army `+0x40` regiment count, `+0xDC` province, `+0x114` name (MSVC string, inline under 16 chars); regiment `+0x30` pop, `+0x38` type, `+0x3C` strength, `+0x40` organisation (thousandths), `+0x34` experience; regiment type `+0x28` icon | list **C**; army/regiment fields **I (external)**: read-only, check in TPL-1's own research |
| **Law favours (D11)** | prestige `+0xEA0` (int32 thousandths, **C**); pop consciousness `+0x118`, militancy `+0x120` (int64 2¹⁵); plurality `+0x1A8`, suppression `+0x15A0` | the rate inputs can be read without script variables |
| **Charts (ECO-A/B)** | military score `+0x1A0`, research points, leadership, loans (`+0x10` rate, `+0x18` amount), good prices vector and good `+0x30` base price, RGO/factory/artisan income fields, min/max relative price statics | most is **I (external)**; enough to plan charts |
| **Hemicycle** | `RearrangeUpperHouse` RVA `0x127D10`: the place the chamber is recomputed, a candidate hook for "redraw only when changed" | **C** for the vector it touches |
| **Rulers** | `AddLeader` shows the leader-list node layout | calling it would change state: **R5**, only through an engine command |
| **Script work** | "Victorian Tools" VS Code extension (TGC team): validation of `tgcx_` script files | not installed; the user decides |

**R5 caution.** smedley's API calls state-changing functions directly
(`AddPrestige`, `AddLeader`, `AddTimedModifier`, `TakeLoan`). For us these
names only explain what the engine does. The DLL keeps reading directly and
changing state only through `C*Command` or script.

## 5. Discrepancies inside the material

- `internal data storage.txt` puts the pop issue vector at `+0xA8`; the
  newer CT has `+0xA4`. Unresolved; not needed now.
- The prose says "POP mil & con are int32 / 2¹⁵", the struct tables say
  int64 at `+0x118/+0x120`. Treat as int64 until read in code.
- The older `.txt` lists clergymen and poor strata both at `+0x1C0`; the
  newer one corrects clergymen to `+0x1BC`.

## 6. Not done

- No new signature in `tools/check_exe.py`: nothing here is used by our
  code yet. When a card uses one of these RVAs it adds the signature then.
- The army/regiment/pop/economy offsets were not traced in Ghidra; they
  stay **I (external)**.
