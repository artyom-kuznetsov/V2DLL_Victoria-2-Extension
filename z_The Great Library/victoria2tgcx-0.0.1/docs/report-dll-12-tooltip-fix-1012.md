# DLL-1 / HEMI-1: crash after first draw, tooltip repair

2026-10-12. **0.2.2 drew the hemicycle and crashed. 0.2.3 installed,
not tested in game.** Supplements the earlier reports without rewriting them.

## Crash evidence and defect

User: "it showed up and it crashed". Preserved log:
`E:\v2re\logs\tgcx-u5-022-crash-1012.log`. It confirms first draw,
ENG, 100 seats/seven rows, root (768,470), vector length 10. Rendering
placement is now established by both the log and user description, but
stability/visual acceptance failed.

Windows produced `C:\Users\JC\AppData\Local\CrashDumps\v2game.exe.34328.dmp`.
Parsed read-only; details outside git:
`E:\v2re\logs\tgcx-u5-022-crash-details-1012.json`. Access violation
0xC0000005, executable base 0x007D0000, fault RVA **0x6B15A7**
(preferred VA 0x00AB15A7), in memcpy's REP MOVSD. ESI is 0x01A00000,
EDI 0xB31690AC and ECX 0x0067E7D8: an invalid large copy. Frame-pointer
walk includes return RVAs 0x8F8C, 0x115FC, 0x30C584, 0x269CF9, 0x248511,
0x25633E and 0x5DF966; this is an engine tooltip-copy path, not a GPU fault.

Scoped Ghidra at preferred VA 0x0070C584 (RVA 0x30C584) identifies the
controller tooltip routine FUN_0070A340 (RVA 0x30A340). The copy helper
FUN_004115D0 (RVA 0x115D0, return at RVA 0x115FC) copies string-bearing
fields at offsets **0, 0x1C and 0x38**, then fields +0x54 and +0x58.
Its result is a structured tooltip. The earlier hook incorrectly treated
the result as a single 24-byte string, wrote only that much and skipped
the native constructor. Returning partially initialized fields explains
the invalid subsequent copy. This ABI assumption was a concrete defect;
the synthetic FakeTip test mirrored the assumption and did not validate
the actual engine object. The dump and engine helper provide strong
causal evidence; stable game acceptance of the repair remains pending.

Private scoped export: `E:\v2re\logs\dll12-crash-stack.txt`.
These addresses are studied read-only; none becomes a new patch site.

## Repair and validation

0.2.3 removes the tooltip-suppression hook and its guessed string writes
entirely. CPoliticsView slot 10 is left pointing to the native engine
function. Show/hide/destructor hooks, final presentation drawing, guarded
CEU3Graphics identity and absolute window coordinates remain. The drawn
hemicycle seat tooltip still works through our independent GDI/D3D overlay.

A regression test asserts that renderer installation leaves slot 10
unchanged. The misleading single-string construction tests were removed.
The native tooltip can now coexist with the drawn tooltip; this is a
prototype mockup deviation. The game constructs/copies its normal result
and the DLL does not modify that object's layout or ownership. Suppressing
that tooltip again requires a separately verified full ABI, not a guessed
buffer initialization. No mechanic change or mockup re-export is needed.

Reference hash + **19 signatures ALL OK**; Release/Win32 `/MT /W4 /WX`
zero-warning build passed. Real D3D9 tests for placement, native entry,
viewport/state restoration, pause, hide and Reset passed; native tooltip
pointer regression passed; all eight installer/Lua checks passed. TGC
v2.5.2 scan already passed in this follow-up. No multiplayer test (D5).

The crashed game was closed; installer dry run and replacement passed.
Installed/source SHA-256:
`c34965b92131150c0430960e051312c3ab142ad458ed75db182d0922ea3c7bc6`.
Original lua51_real.dll and tested DLL-0 backup remain intact. No executable
disk change, simulation writes, TGC file copying, or commit.

Next: one U-5 run of 0.2.3, opening Politics and hovering seats for 20
seconds first, then view switch/reload/Alt-Tab in that same session if
stable. Do not mark either renderer/hemicycle card tested until it passes.
