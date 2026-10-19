# TPL-1 visual candidate 0.6.3 - 2026-10-17

Status: installed on E:, tested and accepted in game (332x594 native
army-panel look and flush placement beside the unit panel).

## Lifetime repair

The baseline log is preserved at `E:\v2re\logs\tgcx-tpl1-1017\baseline-before-063.log`
and `work/tpl-063/baseline-062.log`. Faults appear at lines 314 and 553;
the latter follows a new native window on view B8C62698, root BBBC3B70.
That view address appears with different roots earlier in the run.
The old log cannot establish the exact faulting operation.

The root-change branch used to hide the cached previous window before
resetting it. It now discards that pointer without invoking a potentially
destroyed child. Stack identity reads are separately guarded and must round
trip through the registry before ownership or virtual land tests. This check
runs each tick, including when the raw stack pointer has not changed, and
on Open clicks. Disabled panels can recover on root or selection changes;
clicks on a disabled panel are rejected. Tick runs on the captured GUI thread.
The last-resort SEH guard now reports the failing named stage and pointers.
Synthetic tests cover registry removal, freed memory and root replacement
with an invalid previous child. They pass. These are demonstrated fixes to
unsafe paths, not proof that either caused both historical faults. Runtime
reproduction remains required before calling the original fault resolved.

## Visual reference and deviations (R10)

The user supplied an army-composition screenshot during this session and
asked for that look. Preserved privately in `work/tpl-063/user-army-reference.png`.
Board 6 was opened and compared; the mechanic is unchanged, so no mechanic
mockup republish is needed. The user's screenshot supplies the styling target.

| Element | Candidate and difference from board 6 |
|---|---|
| Frame/background | Native 332px army parchment, recessed bottom footer tray and gold border from GFX_unit_bottom_bg; top and bottom gold braided headers and green title strip from GFX_unit_toppanel_bg; GFX_unit_bg_28 section divider for Changes. Replaces the flat board background at the user's request. |
| Title/close | Left-aligned Arial14 and native 20x20 GFX_unit_close, like the army panel; shorter generic title because army names are not read by the verified interface. |
| Template/change rows | Native 317x30 GFX_unit_entry_bg in both lists with the clean dual-tone middle band extended over the right POP/bar columns, unit-strip icons and selection border. Pale army rows replace the board's blue template rows. |
| Size & placement | 332x594 (exact native unit-panel width), placed flush beside the unit panel at (x+331, y+26) so its top gold braided border aligns with unitpanel_bg. Still allows eight change rows and four templates. |
| Actions | Native 148x28 steel/gold unit-panel footer buttons (GFX_unit_gunboat_diplo_button) for Conform/Cancel sitting inside the recessed bottom tray. |
| Open button | Existing 20x20 infantry button in the stack panel free cell; the board's wide button cannot fit the native stack header. |
| Content | Composition names per D12, generic build/detach locations, four templates per page. Existing mechanic limitations retained. |

`work/tpl-063/army-preview-v2.png` is a composited asset/layout preview with
example data and approximate Windows fonts.

## Gates and artifacts

- check_exe ALL OK; 144 runtime signatures unchanged.
- TGC v2.5.2 scan: anchors and event range OK.
- Release Win32 build, full native/reference-window/real D3D9 suite ALL OK.
- 18 GUI tests passed; five Conform tests passed again after 332x594 army styling.
- LAW-0 scripted scenario ALL OK; law catalogue, ten submod installer and
  eight DLL installer/Lua tests passed.
- Both final installation dry runs passed.
- Stage preserves stage-062's law scripts, modifiers and other assets.
  Generated buildunit.gui and country_politics.gui hashes are unchanged.

Stage: `E:\v2re\logs\tgcx-tpl1-1017\stage-063`.
DLL retained beside it as `lua51-063.dll`.
DLL SHA256: `723179ae98c67a5acc71a0c5ab47d3fd66e4b43d350c318b4b9d8931add0e700`.
Generated unitpanel.gui SHA256: `4d5b20c6e0cea62b8a5e7c37b18d60c2bf3597effe67001a39805c1afdbf9dd0`.

Next: `instructions-tpl-1-063-check.md`. No new numbered pitfall is
assigned while the original fault remains unlocalized; next remains P46.

## Installation - 2026-10-17 / 2026-10-18

User authorized installation and confirmed exit. Installed 0.6.3 on E: and
subsequently refined the 332x594 native army-panel assets and flush `(x+331, y+26)`
placement. Paired backups retained at `E:\v2re\logs\tgcx-tpl-place-1017\before-063-dll`,
`before-063-submod`, and `before-063b-submod`. Installed DLL and all three GUI
hashes match the candidate values; original Lua hash matches the installation record.

## Player acceptance - 2026-10-18

User verified the 332x594 army-style Conform window in game with a screenshot
and confirmed flush placement beside the unit panel ("works great! commit and push").
Commit and push are authorized. No additional mechanic selected or started.
