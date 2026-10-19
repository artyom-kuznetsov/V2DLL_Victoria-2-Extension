# U-11 report: short game check of LAW-3 (0.6.4)

2026-10-18. Card: `docs/instructions-u-11.md`. Build: 0.6.4 (`TGCX LAW-3
0.6.4`, DLL SHA-256 `90dd6cb9…3ced`), installed on E: the same day after a
normal exit. Rollback: `E:\v2re\logs\tgcx-law3-1018\before-064-dll\` and
`before-064-submod\` (0.6.3). Log baseline: `…\u11-baseline\`.

The user ran United Kingdom, 1836, TGC v2.5.2 + TGCX, in two sessions (a
second game from 1 January) and sent five screenshots.

**Result: passed, with one small text defect (G1).** LAW-3's F1, F2, F3 and
D14 work in game.

## Steps

| Step | Result | Evidence |
|---|---|---|
| 1. Start | pass | `tgcx.log`: `TGCX LAW-3 0.6.4`; `Reforms rows rebuild=1 reform delay gate=1`; `Decisions alert filter installed`. No rejected guard, no read fault (`grep`, 0 matches) |
| 2. Load test gone (F3) | pass | no load-test file installed; `game.log` names Denmark "Denmark" |
| 3. Reforms tab, no bill (D14) | pass | screenshot 3 (3 Feb 1836): 15 rows lit, each the next step forward (Trinket Minimum Wage, 14 Hour Work Day, Limited Safety Regulations, Low Subsidies, Trinket Pensions, Acceptable School System, Incarceration, Child Labour Illegal, Secret Ballots, UH Two per State, All Unions Allowed, Weighted Universal Voting, All Allowed Rights, Free Press…); U-7 had about 38. No backward step lit. Log, first session: `lit=15 (ours=15) dark=80 active=0`. Clicking Weighted Universal Voting and Free Press started bills |
| 4. Bill open (F1) | pass | screenshots 1-2 (Press Rights): only Free Press lit; log `lit=1 (ours=0) dark=94 active=1` |
| 5. Top-bar tooltip (F2) | pass | screenshot 2: only TGC's decisions (Open TGC's Setup, Pax Britannica, Webster-Ashburton Treaty, Mediate Belgian Independence); log `Decisions alert skips tgcx_bill_slavery_down` |
| 6. Bill text (deviation 2) | pass, with G1 | screenshot 4 (Vote Franchise): no overprint. Closeness rows read `Universal Weighted Vo...`; the transition line uses the small font. **G1:** the arrow between the two laws is missing |
| 7. Withdraw | behaves as designed; the instruction was wrong | screenshot 5: no row lit after Withdraw; log `lit=0 (ours=0) dark=95`. Withdraw adds `tgcx_bill_cooldown` for 365 days (`tgcx_withdraw` effect; `law-design.md` §7), and the offer requires no cooldown. U-11 step 7 expected the rows to light again; that ignored the cooldown |
| 8. New month | pass (log only) | monthly `Favours collection requested` on 1 Feb, 4 Mar, 4 Apr and 5 May with no popup reported; no screenshot |
| 9. Exit | pass | `error.log` and `system_error.log` empty (0 bytes) |

## Findings

### G1: the transition arrow is missing in the small font

`Arial12_bold.fnt` has no glyph 187 (`»`); `vic_18.fnt` has it (`grep 'char
id=187'`, 2026-10-18). The Bill's small transition line therefore shows
`Wealth Voting  Universal Weighted Voting`. Also, `tools/tgcx_bill_gui.py`
`text_width` measures a missing glyph as a space.

Fix (small): when the chosen font lacks `»`, use `>` (present in both),
and make the DLL write the separator the generator chose. A test should
check that every character of a fitted line exists in its font.

### G2: withdrawal starts the 365-day cooldown

This is the LAW-1 design, not a LAW-3 defect. As a result, after Withdraw
the Reforms tab offers nothing for a year. If the user wants withdrawal to
be free, or shorter, that is a design change: a **[user]** decision.

### G3 (minor, unexplained): the log tally on the second game

When Politics first opened in the second game, the log says `lit=3 (ours=0)
dark=282` (three builds, one row lit each). That matches the previous game's
offer (an active bill, its target only) still being in effect for the first
builds. The screenshot taken then shows the correct 15 rows, but no later
tally line records that rebuild. Possible cause: `tgcx_reform_offer` is not
reset when a new game loads. It is harmless in this run. To look at with G1:
reset the offer when the country changes, and log the rebuild tally.

## Mockup comparison (R10)

- Board 1: the in-game tab lights the offered rows instead of drawing the
  board's badges. That is reforms deviation 1 of
  `report-law-2-reforms-1017.md`, unchanged. The set of offered reforms now
  follows D14 as the board shows.
- Board 2: the Bill matches as in U-7, apart from the listed deviations. G1
  is new.

## Next

- G1 (and G3's reset) as a small 0.6.5. After that, LAW-2/LAW-3 can close.
- G2 only if the user wants it changed.
- Then, per `NEXT.md`: the V2DLL mod-slot decision, then MOD-0..MOD-5 (D15).
