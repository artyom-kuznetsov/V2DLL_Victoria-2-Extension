# TPL-0: 0.4.1 placement confirmed; 0.4.2 board-5 detail pass (2026-10-17)

> **Report**, not rewritten. 0.4.1 placement is **confirmed in game**.
> 0.4.2 is **installed on E:, done, not tested in game**.

## 1. 0.4.1 game evidence

The user ran the short U-8 check and sent two screenshots, saying "looks
better but still a bit off from the mockup". They are kept with the log in
`work/tgcx-u8-0411/` (private).

- `tgcx.log`: `TGCX TPL-0 0.4.1`, panel found, local file `editable=1`,
  and three times `Templates anchor: root local 336,20, screen 1104,490
  through 2 owner levels`. Predicted from the GUI file and the 0.4.0
  screenshot: (1103,487). P40's owner chain is now **R**.
- Screenshot 1: the panel covers the Build Army column, its title is on the
  build header, Units Being Built is on the right, and the footer runs
  under both columns. Screenshot 2 (Build Navy): the panel is hidden and
  the native navy list shows.
- **Not checked:** the queue was empty, so clicks on queue entries through
  the panel's transparent right part were not tested. Close/reopen was
  not shown.

## 2. Differences from board 5 seen on 0.4.1

Compared with `mockups/5-templates.png` and its source
(`E:\v2re\mockups\project\Templates.dc.html`, which names the native sprites
and positions):

1. Empty template slots drew as dark rows. Cause: the DLL hid them through
   the window show/hide guard, which does not match a button's class, so
   the call did nothing (silently, by design of the guard).
2. No selection ring; the selected name was only yellow.
3. Custom flat rows instead of the native `province_recruit_group_button`
   and `province_recruit_button`.
4. No composition miniatures (×4, ×1…) in the slot rows.
5. Text formats: "Base 90 days" instead of "90 Days"; slot detail on one
   line instead of regiments left and days right; summary "27000 men; base
   120 days"; a status sentence different from the board's.
6. Editor heading "Composition (1 / 2)" instead of "<name>: composition".
7. Small 16 px arrows and black counts; the board has 24 px arrows and
   white `vic_18` counts.
8. The red box in the footer is the board's **Delete**; 0.4.1 had a close
   cross there and Delete in the editor heading.
9. The list pager (1 / 1) showed with only one page.
10. A native scrollbar showed between the columns.
11. The Templates tab was a resized infantry folder with a "T".

## 3. 0.4.2 changes

`tools/tgcx_templates_gui.py` (layout and assets) and
`dll/tgcx/tgcx_templates_gui.h` (labels):

- Board-5 geometry in panel coordinates (build root minus (5,69)), using
  the native sprites by name: the group button for template rows, the
  recruit button for composition rows, `bp_button_add`,
  `bp_button_remove`, `button_standard_177`, and `GFX_unit_strip`
  frames (scale 0.66 for miniatures) instead of baked copies.
- Covers and the ring are **windows** declared after the buttons. The DLL
  shows or hides them with the verified window method: a ring on the
  selected row, a background patch on each empty row and on a single-page
  pager. Visibility is cached per element and cleared when the native GUI
  is rebuilt.
- Miniatures: the non-empty groups in catalogue order, up to four, with
  "×N"; the leading icon is the largest group (`tgcx_TplMinis`).
- Texts: "N regiments" and "D Days"; "<name>: composition"; summary "N
  regiments, N,000 men, ready in D days"; the board's status sentence.
- Delete is in the footer; the close button is removed (another native
  folder closes the panel, as on the board). The column is 405 px wide, so
  it covers the native scrollbar. The tab is redrawn from the board's
  folder SVG, with a gold frame while the panel is open.
- Version marker `TGCX TPL-0 0.4.2`; the installer accepts 0.4.0/0.4.1 as
  known installed proxies.

Unchanged: placement (P40), recruit/command path, local preference file,
guards (91 signatures).

## 4. Retained deviations (R10)

| difference | reason |
|---|---|
| fixed layout: four slot places, then New Template | board 5 shows exactly four templates; with fewer, it would move New Template up. Moving native buttons needs an unverified setter, so empty places are covered instead |
| pager arrows on the New Template row when there are more than four templates | twelve local slots (D12) |
| page arrows and "1/2" on the composition heading | TGC has 11 land types; eight rows fit |
| zero counts are white, not greyed | GUI text colour codes have no grey; disabled arrows likewise not greyed |
| native first folder may look selected while Templates is open | that state belongs to the native view; the DLL does not change it |
| "Units Being Built" header and queue rows are native | the board's queue column is the native one by design |
| "ready in D days" is the base build time | the board's wording; recruit-time modifiers are not applied (100 % in the tested save) |

## 5. Verification

| gate | result |
|---|---|
| `check_exe.py` | ALL OK |
| `build_dll.ps1` / `test_dll.ps1` | built; `tgcx_tests: ALL OK` (new miniature/leading-icon cases); 8 installer tests OK |
| `test_templates_gui.py` | 5 OK: injection preserved, every `GFX_` sprite exists in the installed tables, strip frames 1–21, covers/ring after the buttons they cover, assets and installer round trip |
| `test_install_dll.py` | 8 OK |
| `tgc_scan.py` v2.5.2 | anchors and range OK |
| static preview | `E:\v2re\logs\tgcx-tpl-place-1017\tgcx_tpl_042_comparison.png`: board 5 beside the generated assets with approximate fonts. **Not game evidence** |

## 6. Installation and rollback

Staged in `E:\v2re\logs\tgcx-tpl-place-1017\stage` (copy of `submod/`, law
release, Bill GUI, Templates GUI). Game not running. Installed submod
(28 files + 3 generated; old `tgcx_tpl_row/icon_*/plus/close/recruit`
assets removed) and DLL SHA-256
`BDC3FBF9AB1712DFE24F10F37DC069E490075E11786D54B0A4D72DD219C9A24C`.
Rollback to 0.4.1: submod `before-042-submod\`, DLL
`before-042-dll\lua51.dll` (`350299EF…`), both in the same folder.

## 7. Open

- Game screenshot of 0.4.2 against board 5.
- Queue clicks through the panel; close/reopen; one-regiment and partial
  recruits; fresh-process reload (U-8).

## 8. Addendum: 0.4.2 game check (same day)

The user's 0.4.2 screenshot (`work/tgcx-u8-042/`) shows the list, gold
ring, empty-row covers, miniatures, heading and footer Delete as intended
("works great"), but **the Recruit button does not show and cannot be
used**. Cause (P41): `GFX_button_standard_177` is a `textSpriteType`.
Fix: back to a generated `spriteType` copy (`tgcx_tpl_recruit`, 177x34),
plus a test against special sprite types. Submod only; the DLL is
unchanged. Staged; installation waits for a normal game exit.

## 9. Addendum: sprites after close/reopen (same day)

During the same session the user saw every unit-icon place, empty rows
included, draw the same wrong icon, and the blue template-row art vanish
(screenshot kept in `work/tgcx-u8-042/`). `error.log` was empty. Cause
(P42): showing the panel window re-shows all its child windows, while the
DLL's visibility cache still held the states from before the close, so
nothing was re-hidden. The first opening was correct because the cache
started empty. The native sprites were not at fault.

Fix, **0.4.3** (DLL): the cache is cleared each time the panel is shown.
Gates: `build_dll.ps1`, `test_dll.ps1` (`tgcx_tests: ALL OK`),
`test_templates_gui.py` 5 OK, `test_install_dll.py` 8 OK, `check_exe.py`
ALL OK, `tgc_scan.py` OK. Built DLL SHA-256
`215AA40596FE10B5081F2B77A16F4565B578222662D5BA49C39E7273373C88D4`; the
installer now requires `TGCX TPL-0 0.4.3` and accepts 0.4.2 as installed.
**Not installed** (the game was running); install with the P41 submod
after a normal exit. Done, not tested in game.

### Installation of 0.4.3 (same day, after a normal exit)

- Submod from `stage\` (29 files + 3 generated). Our fragment uses
  `tgcx_tpl_recruit`, and `GFX_button_standard_177` no longer appears in
  it. Rollback: `before-043-submod\`.
- DLL `215AA405…88D4` installed. Rollback: `before-043-dll\lua51.dll`
  (0.4.2, `BDC3FBF9…A24C`).
- Both folders are in `E:\v2re\logs\tgcx-tpl-place-1017\`.
- **Done, not tested in game.**

## 10. Addendum: 0.4.3 game check and the navy tab (same day)

The user ran 0.4.3: "works great but it still clips over build navy".
The first screenshot (`work/tgcx-u8-043/`) shows Build Navy with our
Templates tab drawn over the last navy unit folder; navy has more folders
than army. The second (described, not saved) shows Build Army Templates
after switching folders. The icons and covers are correct (P42 fixed),
Recruit Template is visible and queued "9 orders queued; 0 left out", and
Units Being Built lists them (P41 fixed). **Recruit through the panel is
confirmed in game.** Clicks on queue entries were not reported.

Fix, **0.4.4**:
- The tab is now a window, `tgcx_tpl_tab`, with the open button as its
  only child. The DLL hides it whenever the view is not live; that covers
  navy mode (`view+0x78` land flag clear).
- It is shown again each tick while live, because showing the root
  re-shows its subtree (P42).
- Button lookups are flat, so the open button is bound inside the tab
  window. An off-screen marker button, `tgcx_tpl_marker`, keeps the silent
  large-view check.
- A new test checks that layout.

Gates:
- `build_dll.ps1` and `test_dll.ps1`: `tgcx_tests: ALL OK`, 8 installer
  tests OK.
- `test_templates_gui.py`: 5 OK.
- `check_exe.py`: ALL OK.
- `tgc_scan.py`: OK.

DLL SHA-256
`39AAFB4729EB6DA004C2D12F37C0207481813C9A3EC6BFCBB092E968079272FB`. The
submod is staged; both wait for a normal game exit. On a navy-first
reopen, the tab may flash for one tick (at most 100 ms) before it is
hidden. **Done, not tested in game.**

### Installation of 0.4.4 (same day, after a normal exit)

- Submod from `stage\` (29 files + 3 generated). The generated
  `buildunit.gui` has `tgcx_tpl_marker` and the `tgcx_tpl_tab` window;
  its SHA-256 is `269E603E…9DF7`. Rollback: `before-044-submod\`.
- DLL `39AAFB47…72FB` installed. Rollback: `before-044-dll\lua51.dll`
  (0.4.3, `215AA405…88D4`).
- **Done, not tested in game.**

## 11. 0.4.4 accepted in game (same day)

The user ran the 0.4.4 short check: "works flawlessly. checked the button
too".
- Build Navy has no Templates tab; Build Army still has it.
- Queue entries in Units Being Built, and their cancel button, respond
  through the panel.

With §9-10 (Recruit and reopen on 0.4.3), the **U-8 short check is
accepted**. Extended U-8 cases remain unconfirmed: close and reopen
Military, a one-regiment template, a partial recruit, and a reload in a
fresh process. The user moved on to TPL-1 (Conform).
