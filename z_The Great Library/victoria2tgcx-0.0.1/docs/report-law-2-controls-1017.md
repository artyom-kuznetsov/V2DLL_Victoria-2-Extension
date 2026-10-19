# LAW-2 controls and Bill board layout — 0.3.4 (2026-10-17)

**Status: done, not tested in game.** Installed on `E:` after normal game
exit; every automatic gate passes. Mockup fidelity (R10) needs the user's
side-by-side screenshot check; nothing below is game evidence.

## What the user asked

"Start step 1 and 2, perhaps 3" of the 2026-10-16 NEXT: implement the Bill
against `mockups/2-negotiation.png`, finish the controls (generic guarded
dispatch, Withdraw, Vote, Audience, per-bloc Abstain / Aye / Promise, the
5/25 lot selector), then Crown/debt status and automatic favour collection.
All three steps were implemented.

## What changed

### Script (`tools/gen_law_catalog.py`)

- Decisions the DLL sends with no fresh-count guard of their own
  (`tgcx_audience`, `tgcx_withdraw`, `tgcx_call_vote`,
  `tgcx_collect_favours`) now check their `potential` and `allow` inside the
  effect. The native decision click (`FUN_006DCE10`) does not test them, so a
  stale or repeated command does nothing. Purchases and promises already did
  this (fresh guard). New pitfall P38.
- Count writes GUI metadata: `tgcx_gui_ruling` (ruling ideology index),
  `tgcx_gui_government` (index into the legislature list),
  `tgcx_gui_crown_veto`, `tgcx_gui_crown_signs`. The audience sets
  `tgcx_gui_crown_signs`. All are cleared with the bill.
- The monthly tick keeps LAW-0's factors and also records each factor's part
  of the rate in `tgcx_gui_rate_<prestige|house|order|franchise|leader>`, and
  counts collections in `tgcx_favours_ticks`.
- Two new tests (27 catalogue tests): stale vote/audience/withdraw commands
  are no-ops; ticks count up, a second collection in the month is a no-op,
  and the breakdown sums to the rate.

### Generator (`tools/tgcx_bill_gui.py`)

- The window is the board's 900 x 772, at the board's coordinates.
- The background is composed at staging time from installed textures:
  - TGC's `main_bg` as a 9-slice frame;
  - `bg_politics` green header strips, pill headers and table art;
  - our own panels and sections;
  - the generic leader portrait;
  - a drawn favour medallion.
- A 256 x 512 atlas holds:
  - the checked checkbox, closeness rows, selected and target markers, the
    ideal diamond, `plupp`;
  - greyed 111/144/177 buttons;
  - one law icon per catalogue group (TGC's own Politics reform icon).
- Both are written as uncompressed A8R8G8B8 DDS. Nothing from the game enters
  git (R3, R8).
- The GUI declares, in this order:
  1. the background button;
  2. 20 native buttons (4 sort headers, close, 3 mode checkboxes, 2 lot
     checkboxes, 6 card buttons, Audience, Recount, Withdraw, Call the Vote);
  3. the overlay marker;
  4. 129 text boxes.
  This order puts every text above the DLL overlay.
- `--header` writes, in one generated header:
  - the button and text tables (`TGCX_B_*`, `TGCX_T_*`);
  - option names, indices and ideals per bill;
  - prices, debt numbers, government names and the distrust list.
  The DLL and the GUI therefore cannot drift apart.

### DLL (`dll/tgcx/tgcx_bill.h`, 0.3.4)

- **Generic guarded dispatch:** `tgcx_BillDispatch` accepts only `tgcx_`
  names made of `[a-z0-9_]` and sends them through the native decision click.
- **Every click re-reads the script state and rebuilds the view.** A card
  that now shows another bloc sends nothing. The script guards remain the
  authority.
- **Cards** are sorted by the header buttons:
  - Bloc sorts by seats;
  - Closeness puts the most opposed first;
  - Affinity puts the most friendly first (the board's order, the default);
  - Votes puts the most Nay first.

  Clicking the active key again pages through more than three blocs.
- **Card buttons:**

  | Stance | Button A | Button B |
  |---|---|---|
  | −1 or −2 | Abstain | — |
  | −1 and above | — | Aye |
  | −2 | — | Promise (disabled while a debt to that bloc is owed) |

  - The 5- or 25-seat lot is chosen with the lot checkboxes.
  - A broken promise doubles the price and uses the `_x2` decision.
  - With nothing to buy, the card shows the board's "Votes Aye on its own:
    nothing to buy."
  - Unaffordable buttons, and lots larger than the remaining Nay seats, are
    greyed.
- **Timers** come from the country's timed-modifier list (static evidence,
  below):
  - the debate gives "Introduced <date>" and keeps Call the Vote disabled
    ("Vote from <date>");
  - the debt deadline and broken-promise modifiers fill the Debts panel;
  - the favour tick drives automatic collection.
- **The Crown:**
  - the government's name;
  - "Distrusts/Trusts the <ruling bloc>";
  - For/Against with "would sign/would veto";
  - "May veto (monarchy)", or "Cannot veto";
  - Audience granted or not asked.
- **Status line:** "Would pass N to M[, but the Crown would veto]", "Would
  fail", "Tied" or "No quorum".
- **Negotiation log:** abstentions bought, Aye votes bought, promises and the
  audience, as observed from the script state. Each line carries the game
  date and its favour cost, and the newest four are kept.
- **Drawing,** after the marker in the native GUI pass:
  - the background patches the chart marker and every hidden button;
  - disabled buttons get the greyed sprite;
  - checks, the law icon, ideology-tinted card dots, closeness rows and card
    rules are drawn;
  - the seats are drawn in three modes: By vote (vote colour), By bloc
    (ideology colour) or Both (ideology ring, vote centre).
  - Textures go into the managed pool from `mod\TGCX\gfx\interface` and are
    reloaded when the device changes.
  - Without the textures, the patch falls back to a flat panel.
- **Automatic favours (D11):**
  1. The DLL acts only while game time advances (the date changes) and the
     loaded mods define `tgcx_favours_tick` (engine modifier table).
  2. When that modifier is absent from the country, the DLL sends
     `tgcx_collect_favours`.
  3. The request stays pending until the modifier appears; it is retried after
     two game days and reset on a country change.
  4. The decision's effect re-checks itself, so duplicates do nothing.
  5. The Decisions entry remains the manual fallback.
- **Screen size:** below 900 x 772 the Bill stays hidden and Decisions remain.

## Static evidence (C static; not yet confirmed at runtime)

Ghidra output: `E:\v2re\logs\tgcx-law2-controls-1017\modifier-1.txt`,
`modifier-2.txt`. Six new runtime guards (48 in total; `check_exe.py` 81 OK):

| what | RVA | finding |
|---|---|---|
| `has_country_modifier` evaluate `FUN_008CD8C0` | `0x4CD8E2` | walks `CCountry+0x4D8` (node +0 item, +8 next), compares item +8 to the modifier; permanent list at +0x4E8 |
| `CTimedModifier` vtable | `0x9F9978` | item type in that list; `FUN_0044E340` saves item +0xC as the modifier's date (expiry) |
| modifier lookup `FUN_005661B0` | `0x1661D6` / `0x1661F5` / `0x166234` | hash `(h + signed c) * 61` over buckets +4 / table +8; node +0 object, +4 next; name std::string at object +0x30, length +0x40 |
| manager global | `0x4EC00` | `FUN_0044EC00` stores it at VA `0x0125A69C` (RVA `0xE5A69C`) |

## Checks run (2026-10-17)

| check | result |
|---|---|
| `python tools/check_exe.py` | 81 OK, SHA-256 OK |
| `python tools/gen_signatures.py` | ALL OK, 48 signatures |
| `python tools/test_law_catalog.py` | 27 OK |
| `python tools/test_bill_gui.py` | 6 OK: board size, button/text order versus the header, art sizes, an icon in every group cell |
| `python tools/test_gen_laws.py` | ALL OK |
| `python tools/test_install_submod.py` | 10 OK |
| `tools/test_dll.ps1` | `tgcx_tests: ALL OK` and 8 installer/Lua tests OK |
| `python tools/tgcx_check_laws.py` | 7 gates passed |

`tools/test_dll.ps1` covers the Bill model, card plans, prices, lots, twins,
promises and debts, the timers, the log, guarded dispatch and favour pacing.
It also runs the reference engine's window placement at 900 x 772,
1920 x 1080 and 2560 x 1440, and refuses 1280 x 720. Real D3D9 checks cover
the seats, the background patch, the greyed sprite and that nothing is drawn
outside the Bill.

An offline preview (the staged background, the native button sprites and
approximate fonts) placed next to the board matched its layout; it is not
game evidence.

## Installed

| item | value |
|---|---|
| DLL 0.3.4 SHA-256 | `2792cbd1bf32b201471b…` (equal to the build) |
| generated `country_politics.gui` | `f7cdd86c8f51349008ed0223c36f0e3b96252c3241026439372b42e7d11c8fe5` |
| `tgcx_bill_bg.dds` | `1a04b5a217415b0497ae30d958e9a39a4f48eb21863167994be42e912fb8f8b4` |
| `tgcx_bill_atlas.dds` | `1aef3daabf60017fd3fd25a945eefd4f2ad7ff8d3101a9b0226e4b83177f5b07` |
| stage | `E:\v2re\logs\tgcx-law2-controls-1017\stage` |
| rollback | 0.3.3 DLL `…\before\lua51.dll` (SHA `9483ea3a…`); previous submod `…\before-submod` |

## Deviations from the board (R10), with reasons

1. **"Reset" is "Recount".** Resetting purchases has no script mechanic;
   the bar's first button recounts.
2. **The Crown shows the government's name, not the monarch's (William IV).**
   The ruler's name is not exposed to script or yet mapped in the
   executable (the rulers card).
3. **The bloc cards show "N seats" without a percentage.** The board's
   percentage has no defined source in the mechanic.
4. **The negotiation log lasts one session.** It is observed by the DLL and
   is not saved; reloading starts it empty.
5. **No favour tooltip.** The source line lists the positive parts of the
   rate instead.
6. **The ideal diamond shows only within the three option rows displayed.**
   The board shows three rows.
7. **Colour codes (§G/§R/§Y) are unverified.** They are written into native
   text boxes and may print literally; to check in game.
8. **Fonts are the engine's** (`vic_title`, `vic_22`, `vic_18`, `Arial12`
   families). Grey text uses black fonts.
9. **Outside the frame the window is transparent** except `main_bg`'s own
   shadow. The title "Bill" sits on the shadow as on the board.
10. **Screens below 900 x 772 do not show the Bill.** The board is that
    size.

## Not done or not known

- Everything is unconfirmed in game:
  - the timed-modifier read and the expiry meaning of +0xC;
  - texture loading in the game's device;
  - colour codes;
  - automatic collection in a running game, and its save/load and
    country-change behaviour.
- Multiplayer is not tested (D5).
