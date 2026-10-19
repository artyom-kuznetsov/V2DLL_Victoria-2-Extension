# MOD-3 vanilla Conform button correction - 2026-10-19

The user reports Templates working but Conform not opening in the separate
vanilla/own-loader 0.9.0 test copy. Fresh log confirms reference executable,
11-type catalogue, Templates and Conform hooks, player-owned land stacks
and discovered Conform window/tab. No open/click-fault log is present.
Templates queued **2 regiments, 0 omitted**, confirming recruitment on vanilla.
Full Conform and save/reload acceptance remains pending.

## Cause and repair (P53)

The generated opening button retained TGC's (222,68) location. Vanilla's
native header controls are 26px higher: unitattrition_icon is (245,42),
whereas TGC's is (245,68). The old button lies under vanilla's statistics
row and is covered instead of sitting in the header's free cell.

`opening_rect()` now reads the effective unitpanel.gui, finds the direct
unitattrition_icon and puts our 20x20 button 23px to its left (3px gap), at
its y position. Missing/ambiguous anchors fail preparation. Originals are
unchanged; this changes only our generated tab position. Existing TGC
opening coordinates and the Conform window design are retained.

| Base | Opening button | Files changed against previous candidate |
|---|---|---:|
| Vanilla | (222,42), was (222,68) | 2 |
| HPM 0.4.5 | (222,42), was (222,68) | 2 |
| TGC v2.3.4 | (222,68), unchanged | 0 |
| TGC v2.5.2 | (222,68), unchanged | 0 |
| DoD Fan Fork | (222,42), was (222,68) | 2 |

DoD was initially described as retaining the old position in commentary;
the measured effective GUI shows it also needs the higher-header correction.

## Validation and installation

Six Conform GUI tests pass, including real vanilla/TGC positions and a
synthetic mod override shifted to (300,83). Five catalogue/pagination tests
and ten package tests pass. The reference executable check passes. All five
base packages were regenerated; ZIP CRC and every entry verified. TGC
package files compare byte-for-byte unchanged, including art. DLL unchanged:
`ee56551e11b5f00537e7d685309f6f7ff848669329a8a405eb1bbc820f2e519b`.
No native test rerun needed for this generator-only correction.

Current sharing candidates: `work/army-090-conform-fix/`, same mod-only/
pinned-V2DLL options. Previous work/army-090-candidate outputs retained as
superseded preparation evidence. User still runs no scripts or installer.

After fresh normal-exit confirmation and process gate, installed exactly
`interface/unitpanel.gui` and `tgcx_conform_layout.txt` in the fresh vanilla
Army package. Verified each file differs only by the tab y coordinate.
Backup/evidence: `work/army-090-conform-fix-install-1019/` (old GUI, original
manifest, failing-run log, screenshot and before/after hashes). Current
fresh-copy manifest updated. No DLL, original game/base or other package
file changed. E: and the prior TGC/V2DLL game copies remain intact.

Next: user retries the small infantry button in the selected army header,
left of attrition. Inspect new log for Conform window opened, then check
missing/excess handling and save/reload. No launch/termination, commit,
push, subagents or external send during this repair.
