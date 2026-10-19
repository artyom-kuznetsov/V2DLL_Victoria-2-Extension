# Army 0.9.0 compatibility candidate - 2026-10-19

The user confirmed Ctrl/Alt-click works (TPL-3), prioritised Army compatibility
over Politics, and deferred primary/accepted-culture filtering (TPL-5).
Their current screenshot replaces the old Conform mockup as the visual target:
see `visual-references.md`. The native army-style layout is retained.

## Implementation

One Win32 DLL reads `tgcx_tpl_units.txt` generated for the selected base.
The generator resolves vanilla plus base overrides and `replace_path`, reads
land-unit keys/build times/icons and the effective unit-strip frame count,
then produces matching Templates/Conform rows, pages and art. The old TGC
catalogue remains only as the legacy 0.8.2 fallback for the exact
`mod/tgcx_army_tgc252` path without metadata.

Limits: 1..256 catalogue types and engine indices below 1024. Recruitability
uses a bounded bitset instead of a 64-bit mask; keys resolve to live country
unit pointers. Missing/extra active types, invalid metadata or simultaneous
Army packages refuse operations. No engine address or simulation-write route
was added: recruitment, detach, movement and merge still use engine commands.

Persistence stores keys. Carry-over skips incompatible libraries; an existing
file with unknown types is preserved and editing refused. Custom labels are
readable English derived from keys; special mod localisation is not imported.

`tools/prepare_army_package.py` prepares files for an installed base descriptor
in a new output folder, validates the executable and current DLL, supports
either loader, and never installs or launches. Recipients need no scripts or
installer. HPM gets our own path-fixed descriptor; its original is unchanged.

## Measured preparation matrix

| Base | Land types | Strip frames | Maximum land icon |
|---|---:|---:|---:|
| Vanilla 3.04 | 11 | 21 | 20 |
| HPM 0.4.5 | 11 | 21 | 20 |
| TGC v2.3.4 | 11 | 21 | 20 |
| TGC v2.5.2 | 11 | 21 | 20 |
| DoD Fan Fork | 13 | 24 | 23 |

Every row passed generation and effective sprite/font checks. DoD's extra
`horse_artillery` and `regular` appear in metadata and Conform icons; both
opening buttons now use effective frame counts instead of hardcoded 21.
All 27 TGC art files are byte-identical to the accepted 0.8.2 bundle.

Outputs: `work/army-090-candidate/`, one mod-only ZIP and one with pinned
V2DLL per base. CRC, all archive entries, plugin and manifests verified.
All use DLL SHA-256
`ee56551e11b5f00537e7d685309f6f7ff848669329a8a405eb1bbc820f2e519b`.
`matrix.json` records sizes/hashes; 89 effective unit/interface input files
per base remained unchanged. Six V2DLL files reused unchanged from the
accepted bundle, upstream commit `de66ee615e868a2fb927d6bf8ac7d9172fabdca4`
(5.82); this is not a latest-release claim.

## Validation and remaining limits

`check_exe.py` passed before address-dependent work. Build and 153 generated
signatures pass. Python: 5 catalogue, 5 Templates GUI, 5 Conform GUI, 6 base
and 10 package tests pass (31). Native fixtures cover 20 custom types over
three pages, engine indices 700+, Conform mapping, invalid/mismatched metadata,
persistence, existing commands/window lifecycle, relocated hooks and real
D3D9 rendering. All pass, plus 12 installer/Lua/plugin tests. D3D9 fixtures
ran outside the sandbox to permit graphics-device creation.

0.9.0 **has not passed an in-game check on any base yet**. HFM is absent.
Arbitrary mod versions are not all measured; changed unit/GUI add-ons require
regeneration from their effective combined base. Only the reference 3.04
executable is supported. Multiplayer untested. Politics and culture filtering
remain deferred.

After normal-exit confirmation, added 40 verified vanilla package files to
the existing TGC/V2DLL test copy (`work/army-090-vanilla-install-1019`). The
user requested a separate copy because that one has V2DLL. It is retained;
the actual vanilla test target is now in `report-mod-3-fresh-1019.md`.

No game launched/terminated, original game/base edits, commit, push, subagents
or external send. Third-party artifacts remain under ignored `work/`.
