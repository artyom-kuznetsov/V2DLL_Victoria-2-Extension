# MOD-0 report: what the launcher does with several mods

2026-10-18. Card MOD-0 (D15), from `instructions-mod-0.md`. The user ran the
game; the agent only read files. Run 1 was on DLL 0.6.4, runs 2-3 on 0.7.0;
the submod is 0.6.4 throughout. Evidence is in
`E:\v2re\logs\tgcx-mod0-1018\` (`cmdlines.txt`, `before\`, `run1\`, `run2\`,
`run3\`).

## 1. Command lines (`cmdlines.txt`, WMI `Win32_Process` every 2 s)

| Run | Ticked | `v2game.exe` arguments |
|---|---|---|
| 1 | TGC v2.5.2, TGCX | `-mod=mod/TGC_v2.5.2.mod -mod=mod/TGCX.mod` |
| 2 | TGC v2.5.2, TGCX, TGC Units - Organized Stacks | `-mod=mod/TGCOrganizedStacks.mod -mod=mod/TGC_v2.5.2.mod -mod=mod/TGCX.mod` |
| 3 | TGCX only | `-mod=mod/TGCX.mod` |

The 0.7.0 game check (19:26) and an extra start at 20:05 match run 1. The
V2D-1 hand launch (19:38) is the only time TGCX came first next to another
mod.

## 2. Answers

| # | Question | Answer | Evidence |
|---|---|---|---|
| Q1 | What the launcher passes | **One `-mod=` per ticked mod, nothing else.** A mod comes after the mods it depends on. A mod whose dependency is not ticked comes **first** (Organized Stacks names `"TGC - The Grand Combination"`, the v2.3.4 name, which was not ticked). TGCX is never first except when it is alone | §1 |
| Q2 | Three mods at once | **They load and the game starts, with no warning.** The user reports "works well". Settings folder: `TGC252_TGCX`, the same as two mods (Organized Stacks has no `user_dir`). `error.log` and `system_error.log` are empty | `run2\logs\` |
| Q3 | Order of two submods of the same base | Not decided by the base they share. Organized Stacks is placed by its own (unticked) dependency, ahead of TGC. **Not verified:** whether its `history\units` files took effect. TGC has `replace_path = "history"`. V2D-1 showed that a mod listed before TGC still kept its `decisions\` and `events\` (§3) | §1, `TGC_v2.5.2.mod` |
| Q4 | Dependency installed but not ticked | **The launcher does not enforce it.** No warning; it passes only `-mod=mod/TGCX.mod`. The base is **vanilla** (`setup.log` loads vanilla's events and no TGC file). Settings folder `TGCX`. **The game crashed right after loading** (§4) | `run3\` |

## 3. Load order and `replace_path` (P19 to recheck)

P19 (2026-10-12) says a submod loaded before TGC is hidden by TGC's
`replace_path`. V2D-1 (`report-v2d-1-1018.md` §2) ran with TGCX **before**
TGC, yet TGCX's decisions ran and its bill was presented. Either
`replace_path` only hides the base game's files and not an earlier mod's, or
the engine loads in an order other than the argument order. MOD-2 needs to
know which. A short read-only check is enough: compare `setup.log` for
TGCX-first against TGC-first. The run 2 and V2D-1 `setup.log`s are already
saved.

## 4. Run 3 crash (cause inferred, not confirmed)

- `time.log`: `Total loadtime was 51.0568 seconds`. `game.log`: history
  executed to 1836, cities initialised. So the load finished.
- `tgcx.log` (0.7.0): every module installed (153 OK) and the two D3D9
  device tables were hooked. But there is **no `render final_frames` line**.
  Every other run logs one at the first frame of the main menu. So the game
  stopped before its first GUI frame reached TGCX's stage hook.
- No Windows Error Reporting record and no dump: the game's own handler
  ended the process.
- **Likely cause:** TGCX's `interface\country_politics.gui` is generated
  from TGC's. It uses **14 sprites only TGC defines** (`GFX_politics_*`
  reform icons: `border_policy`, `centralization`, `child_labor`,
  `citizens_rights`, …). Vanilla has none of them. Measured with a script
  over vanilla's, TGC's and TGCX's `.gfx` names. The fonts used do exist in
  vanilla's `core.gfx`. `buildunit.gui` and `unitpanel.gui` use no missing
  sprite.
- `common\event_modifiers.txt` is TGC's plus ours, so on vanilla it replaces
  vanilla's too.
- The DLL is not ruled out. A run 3 with `tgcx.dll` set aside would settle
  it in two minutes.

This is not a TGCX bug against its design: D1 targets TGC v2.5.2, and
`TGCX.mod` names it as a dependency. It is a launcher fact that MOD-2 must
design around (P49).

## 5. What it means

- **MOD-2 (installer and packages):**
  - Files generated from a base (`.gui`, `event_modifiers.txt`) must never
    load without that base. The launcher will not stop it.
  - Each package should either be generated per base (installed for the
    base it was generated from), or keep its overrides out of files the
    other bases define.
  - The DLL should only act when one of our packages is in the `-mod=`
    list: the folder-lookup plan from the V2D-2 discussion.
- **D16 / V2DLL:** the first `-mod=` can be TGC or a third mod that TGCX
  does not control (Organized Stacks). So V2DLL's first-mod lookup can
  never find TGCX in a normal launch. This makes the request to search
  every `-mod=` stronger. V2DLL also writes `common\defines_v2dll.txt` into
  that first mod (P48).
- **Settings folders:** the folder name joins the ticked mods' `user_dir`s
  (`TGC252` + `TGCX`). A package with its own `user_dir` would move the
  templates file (`TGC252_TGCX\tgcx_templates.txt`) to another folder. The
  package names and save folder are still an open D15 sub-decision.

## 6. R1 check

- `sha256sum -c` of `before\mod-hashes.txt` (917 files: the `.mod` files,
  `mod\TGCX\`, and TGC's top level, `common\` and `interface\`): all OK.
- The only extra file seen today was V2DLL's `defines_v2dll.txt` from V2D-1,
  already moved out (P48).
- `mod\TGCOrganizedStacks\` was not in the baseline. None of its 9 files is
  dated today.

## 7. Open

- Q3: whether Organized Stacks' units applied. In game, look at the opening
  British army: its regiments are grouped into organised stacks.
- P19 recheck (§3).
- The run 3 cause (§4). Optional: rerun with the DLL set aside.
- Run 2's `tgcx.log` was overwritten by run 3's. Its `run2\logs\` are saved.
