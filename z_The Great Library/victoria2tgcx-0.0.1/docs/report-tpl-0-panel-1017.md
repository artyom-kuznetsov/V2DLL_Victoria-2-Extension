# TPL-0: native Templates panel and first recruit (2026-10-17)

**0.4.0 is installed on E:. Done, not tested in game.** U-8 is required
before runtime recruitment or visual acceptance can be claimed. The game
was neither launched nor exited. LAW-2 0.3.5 remains unconfirmed in game;
its installed submod files are byte-identical in this candidate.

## 1. Delivered

- Native Templates tab in the Military screen's large Build Army view.
  Native template rows, New/Delete, composition steppers, page controls,
  Recruit and Close. The right-hand engine queue is inherited unchanged.
- Eleven TGC v2.5.2 land types, eight editor rows per page; four templates
  per list page, twelve local slots, up to 128 regiments per template.
  Templates start empty; no example composition is silently saved.
- Names from the composition (D12), for example `4 Inf / 1 Art / 1 Hus`.
  Every edit is saved atomically to the Windows Documents known folder:
  `Paradox Interactive\Victoria II\TGC252_TGCX\tgcx_templates.txt`.
  These are local preferences shared across countries/games, outside saves.
  Unit script keys are persisted rather than runtime indices. Invalid,
  unknown-version or unreadable files are preserved; editing is disabled.
  A stale `.pending` file is preserved and blocks another write.
- `tgcx_InstallTemplatesGui` enables the guarded recruit module and native
  view update/destructor hooks. Clicking Recruit maps composition keys to
  the player's unit types and sends one `CConstructUnitCommand` per
  regiment that fits. The planner uses engine pop capacity and eligibility.
  It reports orders queued and regiments left out, not final execution.
  The engine still validates each command when it executes (R5).
- Another template batch is blocked until game time advances, to avoid
  planning repeatedly against the same paused soldier-pop capacity.
  Native recruiting outside this panel can still race with a batch; the
  engine's validity check remains authoritative.
- Separate contexts for native build views; promoted children hide when
  their parent closes, changes to naval mode or is destroyed. The same
  tested foreground/packed-position path as the Bill is used (P37).

## 2. Generation and source boundary

`tools/tgcx_templates_gui.py` generates our fragment, unit metadata, sprite
definitions, localisation and private textures. `install_submod.py` inserts
the fragment at `build_unit_view_large`. TGC v2.5.2 inherits `buildunit.gui`
from vanilla; the installer uses that effective file, preferring a TGC
override if present. Original bytes outside the insertion are retained.
No game/TGC file or texture enters git. Default script-only installation
still omits the GUI when no fragment is supplied (R3/R6/R8).

The new panel is offscreen without the DLL; its small Templates tab is
visible but inactive. Script-only loading and native recruiting remain.
Every new name carries `tgcx_`; native tab names occur only as lookup keys.

## 3. Evidence and gates

Read-only Ghidra confirmed the update/destructor table and view offsets;
four new relocation-aware guards bring the runtime signature count to 91.
Details and VA-to-RVA conversions are in `symbols.md`, TPL-0 panel section.

| Gate | Result |
|---|---|
| `check_exe.py`; `gen_signatures.py --check` | ALL OK; reference SHA; 91 runtime signatures |
| `tgc_scan.py` on installed v2.5.2 | anchors and reserved range OK |
| `build_dll.ps1` | Release/Win32, warnings treated as errors, passed |
| `test_dll.ps1` | native fixtures ALL OK, real D3D9 pixel/state/layering tests, 8 DLL installer/Lua tests |
| New native fixtures | local-file round trip, invalid/overflow/duplicate keys, truncated input, atomic-write failure, stale pending file, view lifetimes, relocated hooks and guard rejection |
| Reference-engine window fixture | actual native foreground/position functions put the panel at root matrix + (5,69); offscreen placement refused |
| `test_templates_gui.py` | 4 tests: base-byte preservation, anchors, catalogue/layout, installed assets, inherited-file fallback, TGC override precedence and installer rollback |
| Existing Python gates | 27 catalogue, 8 Bill GUI, 10 submod installer; LAW-0 and one-command law runner all pass |
| Installation | both dry runs passed, game closed; installed DLL equals build, original Lua hash retained; all pre-existing submod files unchanged |

The sandbox could not create the real D3D9 device (`8876086A`); the same
suite passed outside it. Initial staging exposed a missing generated
directory and an icon-size mismatch; both were corrected. The installer
test caught the old release-card metadata and it now records TPL-0.

Private evidence: `E:\v2re\logs\tgcx-tpl-panel-1017\`, including the stage,
Ghidra output, native fixture log and static visual comparison. The law
runner bundle is `work/tgcx-tpl-evidence/` (ignored). Its copied historical
game logs are not evidence of 0.4.0 working.

## 4. R10 comparison and deviations

Opened `mockups/5-templates.png` and visually checked a static composition
of the generated assets with the installed bitmap fonts. The preview and
side-by-side image are private evidence, **not game screenshots**. U-8 must
compare the real panel, ordering, hit targets and queue with the board.

1. A compact 24-pixel Templates tab uses an infantry/T marker. Keeping all
   eleven native land tabs leaves this width at the end of their row.
2. Composition-derived names replace the board's illustrative custom names:
   this is the user's approved D12 choice.
3. Times explicitly say **base days**, from installed unit definitions;
   exact completion under country modifiers and goods supply is unconfirmed.
4. The editor pages eight rows; the list pages four templates. Bounds are
   twelve templates and 128 regiments, matching the bounded recruit planner.
5. A leading unit icon and the composition name replace the board's separate
   miniature icon/count strip. Dynamic icon-frame setters have not been
   studied; the leading icon uses named native child visibility instead.
6. Selection uses the row name's colour, rather than a gold border. Native
   selected-frame control is deferred until its ABI is guarded.
7. Native small close art replaces the board's square red crosses; generated
   single-frame button art has no promised custom hover/pressed animation.
8. Only the Military screen's large build view gets this panel. The compact
   province view retains native recruiting; its layout lacks the board's
   adjacent right queue. Small/offscreen layouts refuse to open the panel.
9. New/Delete and paging controls occupy space above the composition. The
   native queue, tabs and outer frame retain their installed coordinates.

These are implementation/layout limits, not new simulation rules. No
further mechanic decision was taken, and Conform is still TPL-1.

## 5. Installation and rollback

| Item | SHA-256 / location |
|---|---|
| Installed/build 0.4.0 DLL | `2dcbf718950554df5a3cd7dffe14c471ea10c9d591d6957a07875bf1af939d1b` |
| Generated buildunit GUI | `9e3d23ab253c78cf7c8534ecfa148a21bb429dc6c74002d986bbdeb52bd2e47b` |
| Prior 0.3.5 DLL | `before-dll/lua51.dll`, `bec50bb774395f02f71c041c134e0a626b6723b4fd8259b7d402ed8a3890bbc7` |
| Complete prior submod source | `before-submod/` |

Paths in the last two rows are under the private evidence directory.
After a normal user exit, reinstall `before-submod` with the submod
installer and install `before-dll/lua51.dll` using the DLL installer's
`--source`. Restore both together. Keep the new candidate as the rollback
of that operation. The local template preference file need not be removed.

## 6. Next

Run U-8 (`instructions-u-8.md`). Fix and document any runtime or visual
failure before starting Conform. After the user accepts TPL-0, follow
`instructions-tpl-1.md` for scoped stack/move/merge/detach research. D5
still defers multiplayer testing; the engine-command restriction remains.
