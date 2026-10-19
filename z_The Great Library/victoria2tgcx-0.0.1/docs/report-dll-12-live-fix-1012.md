# DLL-1 / HEMI-1: live diagnosis and 0.2.2 repair

2026-10-12. **0.2.2 installed, not tested in game.** Supersedes the unresolved
diagnosis in `report-dll-12-fix-1012.md`; prior reports remain immutable.

While the user ran 0.2.1, the agent read process memory with OpenProcess /
ReadProcessMemory only. No live memory was written. PID 33260, reference
executable base 0x007D0000. Evidence remains outside git:
`E:\v2re\logs\tgcx-u5-live-021-1012.json` and
`E:\v2re\logs\tgcx-u5-021-failed-1012.log`.

## Confirmed mismatches

1. Active renderer 0x0ED3CC20 has vtable **0x011E9B8C**, which is base +
   **RVA 0xA19B8C**, the `CEU3Graphics` primary table already catalogued
   in `rtti-classes.md`. The earlier repair expected the base renderer
   table RVA 0xA38324. Its log explicitly reports
   `Hemicycle blocked: native renderer identity`. This is a proven blocker
   in 0.2.1; it was not a guard in 0.2.0.
2. Politics view 0x4DBCE550 has the expected table (RVA 0xA0E458).
   Native root 0x549570C8 has table RVA 0xA3C0D8, visible byte 1, and the
   expected show/hide functions. At resolution **2560 x 1440**, root
   `+0x250` contains **(768,470)**, matching the native window in the
   supplied screenshot. It is already in screen coordinates. The earlier
   code added half the screen again, placing the overlay at (2048,1190)
   rather than over the upper-house pie. The earlier inference from the
   centred-position setter did not describe the initialized live root.

0.2.2 accepts the hash/signature-guarded base and CEU3Graphics renderer
families. A nineteenth shared signature checks the CEU3Graphics table:
VA 0x00E19B8C / RVA 0xA19B8C; disk bytes
`D0077E00202E9A0060097E0090DC9900`, with generated HIGHLOW relocations.
It reads the root's absolute position directly. Bounds, visibility,
identity, vector and colour checks remain enforced. Rendering still uses
the final engine Present path and captured viewport from 0.2.1.

## Runtime data and cadence now verified

Paused UK 1836: country index 29, tag ENG, upper-house vector length 10,
null slot 0 zero, sum 32767. Live name lookup / read-only inspection agrees:

| index | ideology | raw share |
|---|---|---|
| 1 | conservative | 27197 |
| 2 | reactionary | 1638 |
| 3 | tribalist | 0 |
| 4 | fascist | 0 |
| 5 | anarcho_liberal | 0 |
| 6 | liberal | 3932 |
| 7 | anarchist | 0 |
| 8 | communist | 0 |
| 9 | socialist | 0 |

The named objects match CIdeology table RVA 0xA36774. The null object is
`noIdeology`, index 0, table RVA 0xA367FC. RGB values read correctly, including
conservative (10,10,250), reactionary (30,30,100) and liberal (255,255,0)
when converted from normalized floats. These are runtime evidence for
GH-2's mapping/bounds/colour fields; the fixture order is no longer the
only evidence. Repeated unchanged-date samples and increasing
`final_frames` counters establish paused cadence in 0.2.1. Drawing still
failed there; do not mark the renderer/hemicycle game test passed.

## Gates and installation

- Reference executable SHA-256 and **19 signatures: ALL OK**.
- Installed TGC v2.5.2 scan passed earlier in this same follow-up.
- Release/Win32 `/MT /W4 /WX` build: zero warnings, 128 Lua forwards.
- Native suite: passed with real D3D9, CEU3Graphics fixture, absolute
  (30,60) root placement, and exact live (768,470) coordinates at
  2560 x 1440. Native entry, GPU pixels, viewport restoration, paused
  cadence, visibility, state preservation and Reset checks pass.
- Eight installer/Lua tests passed. Temporary-folder tests now isolate
  their mocked process state from an unrelated running real game; the
  explicit active-game rejection test remains in place. Production
  installation still requires the real game closed.
- User confirmed a normal exit. Installer dry run and installation passed.
  Source/installed SHA-256:
  `c2ea4d11bd1b09069e6bad3740a55ced4539296e3ef50ce68f9ba50f0df2b365`.
  Original lua51_real.dll and tested DLL-0 .off hashes are unchanged.

No simulation writes, executable disk changes or TGC overrides. No commit.
Geometry/mechanic and mockup deviations are unchanged from the original
implementation report. In-game screenshot/layout/hover, reload and
Alt-Tab acceptance of **0.2.2** remain pending. General window-reposition
behavior is not claimed verified by this one live root measurement.
Next: `instructions-u-5.md`, one session; keep the game open if it fails.
