# Compatibility with any TGC version

> **Reference.** Decision D1 (user, 2026-10-12): the submod works with any
> TGC version. This document says how, and what is checked to know it.
> Rules that support it: `AGENTS.md` R1, R3, R4 and R6.
>
> **D1 revised (user, 2026-10-12, after U-2): develop for TGC v2.5.2 only;
> compatibility with other versions is deferred, maybe for good.** What
> still applies: §2's levels and §3's generator, because TGC files cannot
> enter git (R8), so the few files that must be overridden are generated
> from the installed v2.5.2 at install time; and §4's event range. What is
> on hold: §5's matrix, COMPAT-0, and anchors that fail loudly across
> versions (they still fail loudly if v2.5.2 is reinstalled differently).

---

## 1. The problem

A Vic2 submod touches the game in three ways, from least to most fragile:

1. **It adds new files** (decisions, events, localisation, sprites). They
   never clash, except by name (R4).
2. **It uses TGC's names** (a law, an ideology, a government, a GUI
   element). If another TGC version renames it, the script gives no error:
   it just stops having an effect (diagnostic rule, `AGENTS.md` §11).
3. **It overrides a TGC file** with one of its own with the same name. It
   works with the version it was copied from and **silently undoes** the
   changes of any other (P9). That is what TGC's official submods do.

The goal is for the submod to live in (1), control (2) with a tool and
never do (3) by hand.

---

## 2. Three levels, in order of preference

| Level | What | When | Example |
|---|---|---|---|
| **N0 — add** | new `tgcx_*` files | whenever possible | the law negotiation's decisions and events; `interface\tgcx.gfx` with new sprites; a new `windowType` in `interface\tgcx_*.gui` |
| **N1 — generate** | `tools\` reads the file from the installed TGC version, inserts our content next to named anchors and writes the result into the submod | when something has to appear **inside** a TGC window or list and there is no DLL, or when the engine reads a single file (`common\event_modifiers.txt`, `common\on_actions.txt`) | a button in `country_politics.gui`; a national modifier for the ruler |
| **N2 — on the fly** | the DLL finds by name an element of the already built TGC window and hooks its own onto it, or creates its own window from `tgcx_*.gui` | DLL mechanics | the hemicycle on top of the upper-house chart |

N2 touches no TGC file: it is the most compatible, but it requires knowing
how to create GUI elements on the fly (GH-2). V2DLL does a smaller version
of N2: it finds by name buttons that **the mod** put in its `.gui`
(`FE_ACADEMIES_BDSM`) and hooks their click.

### What the engine reads from a single file

In `common\` the engine reads files with fixed names (`on_actions.txt`,
`event_modifiers.txt`, `triggered_modifiers.txt`, `static_modifiers.txt`,
`defines.lua`, `issues.txt`…): a submod that wants to add something **has
to override it** (level N1, generated). To avoid depending on that:

- **Instead of `on_actions`**: events with `mean_time_to_happen` and
  `trigger`, or decisions; they live in our own files (N0).
- **Instead of `triggered_modifiers`**: an event modifier that one of our
  events adds and removes.
- `event_modifiers.txt` does have to be generated (N1) if a new modifier is
  needed: a copy of TGC's + our block at the end, between the markers
  `# >>> tgcx` / `# <<< tgcx`.

---

## 3. The generator (N1) — design

Built in COMPAT-1. Rules:

- **Input:** the installed TGC folder (the one with `common\`,
  `interface\`). **Output:** `submod\TGCX\` + `submod\TGCX\tgcx_manifest.txt`
  with the TGC version (git or the `tgc_scan.py` hash, P2) and the hash of
  every generated file.
- **Operations by anchor, never by line number:** "inside the `windowType`
  named X, after the element named Y, insert Z"; "at the end of the file,
  add block B". Anchors are names (`name = "chart_upper_house"`), which
  change much less than lines.
- **If an anchor is missing, nothing is generated** and the tool exits with
  1, saying which anchor in which file. Never a half-written file.
- **Idempotent:** generating twice gives the same result byte for byte.
- **Runs on the user's machine** whenever TGC changes (as an install step).
  The distributed submod carries the operations, not the generated files.

The anchors the submod needs today are in `GUI_ANCHORS` in
`tools\tgc_scan.py`; they are added there as cards use them.

---

## 4. Our own names and ranges

- The `tgcx_` prefix on everything (R4; provisional, D3).
- **Events:** ids 420 000 000 – 420 999 999. Measured 2026-10-12: no event
  of TGC v2.3.4 or v2.5.2 falls there. TGC uses ids up to 2 000 000 103,
  grouped in millions (0, 1-10, 16, 31, 44, 46, 56, 60, 81, 99, 100, 152,
  190, 370, 666, 888, 1 904 and 2 000 million). `tgc_scan.py` warns if a
  new version occupies the range.
- **Localisation:** `localisation\tgcx_*.csv` files; keys with the prefix.

---

## 5. Version matrix

| version | where | why |
|---|---|---|
| v2.3.4 | `mod\TGC` (installed by the user) | the one the user plays today |
| v2.5.2 | `mod\TGC_v2.5.2\TGC` (clone of the tag) | the latest stable |
| `master` | to be cloned (`git fetch --depth 1 origin master`) | what is coming; added in COMPAT-0 |

Compatibility gate (`AGENTS.md` §11, point 1): `tgc_scan.py` exits with 0
on all of them, the generator produces output with no missing anchors on
all of them, and the submod loads in game with at least the user's version
and the stable one.

---

## 6. Measured 2026-10-12 (v2.3.4 → v2.5.2)

`python tools/tgc_scan.py --diff mod\TGC mod\TGC_v2.5.2\TGC`:

- Ideologies, laws (49 groups with their options) and governments (18):
  **identical**.
- Interface: **3 files** change, `news.gui` (2 lines), `topbar.gui` (6) and
  `core.gfx` (2); the other 34 are identical once CRLF is ignored (P1).
- Anchors in `country_politics.gui`: present in both.

Reading: between nearby versions, what the submod uses barely moves. The
real risks are `topbar.gui` (it changes) and the old versions (v0.9x,
v1.x), which were not measured. This is only the inventory: the full trees
differ in 223 files (P18, measured in SUB-0 with `diff -rq`).
