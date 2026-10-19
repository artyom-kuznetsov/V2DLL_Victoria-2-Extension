# U-8: extended cases on 0.6.3 (2026-10-18)

> **Report**, not rewritten. Installed candidate unchanged: **TGCX TPL-1
> 0.6.3** (DLL and submod) on E:, TGC v2.5.2. Nothing was built or
> installed in this session. **Every open extended U-8 case passed in game.**

## 1. Scope

The U-8 short check, recruit and save/reload were already accepted
(`report-tpl-0-visual-1017.md` §9-11, `report-tpl-0-runtime-1017.md`).
Open before this session (`instructions-u-8.md`, `report-tpl-0-visual-1017.md`
§7 and §11):

1. a one-regiment template;
2. repeated Recruit clicks while paused;
3. a partial recruit (more regiments than free soldier pops);
4. a full close and reopen of Military;
5. a preference reload in a fresh game process.

Also checked: a `Template recruit: 0 queued, 2 left out, 17 soldier pops`
line (twice) in the morning's `tgcx.log` (05:11-05:20, FRA, 1836-01-01,
the TPL-1 visual session), for the `1 Inf / 1 Art` template.

The user ran two game processes, both France 1836-01-01, and launched and
exited the game each time (normal exit). Evidence (private, outside git):
`E:\v2re\logs\tgcx-u8-ext-1018\`:

| folder | contents |
|---|---|
| `baseline\` | `tgcx.log`, `tgcx_templates.txt` and game `logs\` before the run (the 05:11 session) |
| `run\` | run 1: `tgcx.log` (17:16-17:19), templates file, game logs, the user's five screenshots (`1.webp`-`5.webp`) |
| `run2\` | run 2: `tgcx.log`, templates file, game logs |

## 2. Results

| # | Case | Result | Evidence |
|---|---|---|---|
| 1 | One-regiment template (`1 Inf`) | **pass** | Screenshot 1: editor `1 Inf: composition`, row "1 regiment, 90 Days", footer "1 regiment, 3,000 men, ready in 90 days", Units Being Built `(+1)` with one French Infantry (Besançon). Log: one `Template regiment infantry province=432 … tag=FRA`, then `Template recruit: 1 queued, 0 left out, 17 soldier pops` |
| 2 | Repeated click while paused | **pass** | Screenshot 1, still 1836-01-01: status "Unpause once before recruiting another template." The log has no second `Template recruit` that day, and the queue stayed at `(+1)` |
| 3 | Partial recruit (`103 Inf`) | **pass** | Screenshots 2 and 5 (1836-01-02): status "22 orders queued; 81 left out", queue header `(+23)` = 1 + 22. Log: `Template recruit: 22 queued, 81 left out, 18 soldier pops` and 22 `Template regiment` lines over 17 provinces (23 in total for the run, matching the header). Screenshot 4: the native infantry list is empty afterwards, so the free capacity was really used up rather than under-reported |
| 4 | Close and reopen Military | **pass** | Screenshot 3: Military overview after closing, army header `(+23)`. Screenshot 4: Build Army reopens on the native folder, with our tab present. Screenshot 5: Templates panel back in the same place (log `Templates anchor: root local 336,20, screen 1104,490 through 2 owner levels` on every opening), gold ring on the selected template, miniatures ×4/×4/×1, ×1/×1, ×1, ×103, footer and status preserved. No stale icons (P42) |
| 5 | Fresh-process reload | **pass** | Run 1 started with `loaded=2` and ended with 4 templates in `tgcx_templates.txt` (`1 Inf` and `103 Inf` added). Run 2, a new process and a new game: `Templates local file: … loaded=4 editable=1`; the user confirms all four are listed. No `.pending` file left |
| — | `1 Inf / 1 Art` on a fresh France start | **pass** | Run 2: `Template regiment artillery province=432`, `Template regiment infantry province=401`, `Template recruit: 2 queued, 0 left out, 17 soldier pops`; the user saw 2 orders queued and in process |

Logs, both runs: `error.log` and `system_error.log` are empty; no
`error`/`exception` in `game.log` or `system.log`; `tgcx.log` has no read
fault, refused command, rejected guard or `not queued` line. Version line
`TGCX TPL-1 0.6.3` both times.

## 3. The morning's "0 queued, 2 left out"

Not reproduced: the same template on a fresh France start queued both
regiments. **Diagnosis (I):** the result depends on the save's state. The
`17 soldier pops` in that line counts pops with free regiment capacity that
can build *some* land unit (`tgcx_TplScanImpl`), not pops that can build the
requested types. The planner (`tgcx_TplMakePlan`) only counts a pop for
infantry or artillery if `FUN_005141D0` accepts that type for it. In the
morning's save, which had already been used for Conform tests that build
regiments, the remaining free pops could build other types but no infantry
or artillery. Case 3 shows the left-out count is accurate when capacity
runs out.

No fix is needed. **Proposed only if it recurs:** a read-only diagnostic
that logs, for each requested unit type, the eligible free capacity the
planner computed (`eligible[u]`), so a "left out" can be explained from the
log alone. Not built.

## 4. Mockup (R10)

The screenshots match board 5 (`mockups/5-templates.png`) as accepted in
`report-tpl-0-visual-1017.md` §11. No new difference. The deviations
retained in that report's §4 still apply. One more observation, already
covered there: Military reopens on the native first folder, not on
Templates. That state belongs to the native view.

## 5. Status and follow-ups

- **U-8: all extended cases passed on 0.6.3.** With the earlier acceptance,
  U-8 is complete. TPL-0 needs no further game evidence.
- No new pitfall. P46 is still the next number.
- Nothing installed, nothing changed in the installed game. Only this report
  was written in the repository. `NEXT.md`, `ROADMAP.md` and `SUBAGENTS.md`
  are left to the parent session.
