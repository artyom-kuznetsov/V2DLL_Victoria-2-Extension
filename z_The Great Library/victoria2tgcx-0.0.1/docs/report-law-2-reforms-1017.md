# LAW-2 Bill buttons, Reforms tab and Decisions tidy-up — 0.3.5 (2026-10-17)

**Status: done, not tested in game.** Installed on `E:` (the game was not
running); every automatic gate passes. Nothing below is game evidence.

## What the user asked

After the 0.3.4 screenshots ("this is splendid"):

- "can you implement the buttons now?": the Bill's native buttons were
  invisible in game.
- "it should look like the mockup also in the political reform tab and
  without 50 different cluttered decisions".
- "wrap that up and i'd like to actually move on to the army templates".

## What the 0.3.4 screenshots showed

1. **The Bill's text-sprite buttons drew nothing.** These are the standard
   111/144/177 buttons and the sort headers. Checkboxes and the close button
   (sprite types) were fine. Every native use of a text-sprite button
   declares `buttonText` and `buttonFont`; ours declared neither. TGC's own
   `reform_option` uses `buttonText = ""`.
2. **Every decision the DLL sent opened a "decision taken" popup,** including
   the monthly "Collect political favours!".
3. **The Decisions tab listed every `tgcx_` decision:**
   - 46 bill presentations;
   - the purchases;
   - Count, Withdraw, Vote, Audience and Collect.

## What changed

### Bill buttons (`tools/tgcx_bill_gui.py`)

- **Text-sprite buttons now declare text and font.** Every
  `GFX_button_standard_*` and `GFX_sortbutton_*` button now declares
  `buttonText=""` and `buttonFont="vic_18_black"`, as the native ones do. The
  label stays in our text box above the button, so the DLL can change it.
- **The Open Bill button is gone from the screen.** It moved to x=30000,
  where it is only the DLL's probe for our GUI: board 1 has no such button.
  The Bill opens from the Reforms tab (below), and still opens by itself when
  a bill becomes active.

### Reforms tab (board 1, `dll/tgcx/tgcx_reforms.h`)

**The tan row on the board is the native enabled reform button.** Free Press
in the board is `GFX_politics_reform_select`, measured at (197,182,131), the
same pixels as the texture. Native rows show it only when their button is
enabled. So the DLL changes one thing: which rows are enabled.

- **Row hook** (`FUN_006DA930`, RVA `0x2DB22D`). After the engine decides a
  row's enable byte (`[ebp-0x11]`, `+0xB8` enable / `+0xBC` disable), the
  DLL may set it.
  - **With an open bill,** only the bill's target row is lit. That is
    exactly the board: Free Press tan, everything else as native.
  - **With no bill,** every one-step catalogue reform the chamber blocks
    today is lit. These are only offered where:
    - a chamber exists (`tgcx_gui_legislature`, now written by every favour
      collection);
    - no `tgcx_bill_cooldown` runs.
  - Rows the engine already allows stay native, and their state is
    recorded.
- **Click hook** (`FUN_006DC990`, the reform twin of the decision click,
  RVA `0x2DC990`, `RET 4`):
  - **A natively allowed row** keeps the native reform.
  - **A row the DLL lit:**
    - with a bill open, the click opens the Bill;
    - otherwise it sends `tgcx_bill_<group>_<up|down>` through the engine's
      decision command. The Bill then opens by itself when the bill becomes
      active.
  - **The native reform command is never sent** for a row the chamber
    blocks.
- **The option keys come from the generated header.** `--header` now writes
  `tgcx_bill_group_keys`, `tgcx_bill_group_political` and
  `tgcx_bill_option_keys`. The engine names each option by its key, a
  std::string at option +0x34 (`FUN_00975ED0`).

### Decisions tab

- **Decisions list hook.** `FUN_006DB2E0` builds the list in two loops
  (RVA `0x2DB52A`, `0x2DB5E8`). The DLL skips every decision whose name,
  the std::string at +8 (`FUN_005C2AD0`), starts with `tgcx_`.
- **The hook is conditional.** It applies only while our Bill GUI is loaded,
  the screen fits it, and the Reforms hooks are installed. In every other
  case the Decisions tab is unchanged, so the script-only fallback holds
  (R6).
- **This had to be the DLL: the script cannot hide these decisions.** The
  engine validates every decision command against its `potential` and
  `allow` (`CExecuteDecisionCommand` slot 14, `FUN_00906B40`). A decision
  hidden by script would also reject the DLL's own commands. P39 corrects
  P38 on this.

### Decision popups

- **The popup is skipped for decisions the DLL sent.**
  - The engine posts the message through `FUN_00906F00`, called at RVA
    `0x506691`. That call takes the message by value and returns with
    `RET 0x8C`.
  - Each DLL dispatch adds one expected message (at most 4; cleared after
    10 s).
  - For that one call, the poster's own gate byte (VA `0x00F07DA6`) is
    cleared, so the poster takes its native early exit, which still destroys
    its argument. The byte is restored at once.
- **The player's own decisions are untouched.**

### Script (`tools/gen_law_catalog.py`)

- Collecting favours writes `tgcx_gui_legislature` (1 when the government
  has a voting chamber).

## Static evidence (C static; runtime unconfirmed)

The Ghidra output is in `E:\v2re\logs\tgcx-law2-reforms-1017\`, files
`refs-*.txt`, `dec-*.txt` and `dis-*.txt`. It was produced by two new
read-only scripts, `ghidra/tgcx_FindRefs.java` and `ghidra/tgcx_Disasm.java`.
Fourteen new runtime guards bring the total to 62.

| what | RVA | finding |
|---|---|---|
| reform click `FUN_006DC990` | `0x2DC990`, `0x2DCCEE` | prologue `push ebp/mov ebp,esp/and esp,-8`; element +0x14 prefix + option key; builds `CSetPolitical/SocialReformCommand`; `RET 4` |
| reform rows `FUN_006DA930` | `0x2DB00E`, `0x2DB02D`, `0x2DB0AE`, `0x2DB22D` | frame -0x3C option, -0x1C group, -0x18 country; current law via country +0x850 (social) / +0x860 (political) indexed by group +0x50; enable byte [ebp-0x11] |
| issue option name | `0x575F15` | std::string at +0x34 |
| decisions list `FUN_006DB2E0` | `0x2DB52A`, `0x2DB5E8` | each decision: +0x18 enabled, then `potential`, then `allow` |
| decision name | `0x1C2B15` | std::string at +8 |
| decision command validity `FUN_00906B40` | (research) | evaluates `potential` (+0x24) and `allow` (+0x40) |
| decision message `FUN_00906F00` | `0x506690`, `0x506F00`, `0x506F55`, `0x507542` | player branch call; gate byte `0x00F07DA6` jumps to the destructor/epilogue; `RET 0x8C` |
| GUI window vtable | `0xA3C0D8` (VA `0x00E3C0D8`) | slot 6 position `0x5E3BA0`, 13 button, 15 text, 17 icon `0x5E4D40`, 27 window |

## Checks run (2026-10-17)

| check | result |
|---|---|
| `python tools/check_exe.py` | ALL OK, SHA-256 OK |
| `python tools/gen_signatures.py` | ALL OK, 62 signatures |
| `tools/build_dll.ps1` | Release build, no warnings |
| `tools/test_dll.ps1` | `tgcx_tests: ALL OK` (new: string reads, key lookups, offers, row hook on a synthetic frame, click fallbacks, Decisions filter, bounded message count) and 8 installer/Lua tests OK |
| `python tools/test_bill_gui.py` | 8 OK (new: text-sprite buttons declare text/font; Open Bill off-screen; header option keys) |
| `python tools/test_law_catalog.py` | 27 OK (collect writes `tgcx_gui_legislature`) |
| `python tools/test_gen_laws.py` | ALL OK |
| `python tools/test_install_submod.py` | 10 OK |
| `python tools/tgcx_check_laws.py` | all automatic gates passed |

## Installed

| item | value |
|---|---|
| DLL 0.3.5 SHA-256 | `bec50bb774395f02f71c041c134e0a626b6723b4fd8259b7d402ed8a3890bbc7` (equal to the build) |
| generated `country_politics.gui` | `41cb93566f404dc22a3d504128fc8a1126a0aec51a99f16d3a961b4a13e5b8ce` |
| stage | `E:\v2re\logs\tgcx-law2-reforms-1017\stage` |
| rollback | 0.3.4 DLL `…\before\lua51.dll` (SHA `2792cbd1…`); 0.3.4 submod `…\before-submod` |

## Deviations from the boards (R10), with reasons

The ten deviations of `report-law-2-controls-1017.md` stand. In addition:

1. **With no bill open, several rows are tan.** The board shows the
   open-bill state, where only the target is lit; that case matches. With
   no bill, the tan rows are the reforms a bill can be presented for, which
   is the native meaning of an enabled row.
2. **A lit row keeps the engine's tooltip.** The engine explains why the
   reform cannot be enacted directly. Native tooltip slot 10 stays
   untouched (AGENTS §6).
3. **A bill that TGC's own `allow` forbids is refused silently.** The row is
   lit, but the engine rejects the command and nothing happens. The log
   records the request. The DLL cannot evaluate TGC's triggers.
4. **Without the DLL, or on screens below 900 x 772,** the Decisions tab
   lists every `tgcx_` decision as before (R6).

## Not done or not known

- **None of this is confirmed in game:**
  - that `buttonText=""` makes the buttons draw;
  - the row, click, list and message hooks;
  - that the engine executes a DLL-sent decision synchronously enough for
    the message count to match. If it does not, a popup may still appear,
    which is harmless.
- **No mockup change was needed.** Board 1 already shows the Reforms-tab
  route and no Open Bill button.
- Multiplayer is not tested (D5). The hooks change only the GUI and
  messages; the bill is still a synchronised decision command.
