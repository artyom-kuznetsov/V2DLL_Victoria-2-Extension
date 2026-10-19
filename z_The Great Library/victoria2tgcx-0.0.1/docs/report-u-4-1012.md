# U-4 — DLL-0 in-game verification, 2026-10-12

**DLL-0 and U-4 passed their startup/upper-house comparison gate.** The
user reports that every checklist step worked, including saving and
loading. The four screenshots show the United Kingdom on 1 January and
6 January 1836, with 83.0% Conservative, 5.0% Reactionary and 12.0% Liberal.
The screenshot attachments remain in the conversation; no game art is
added to git.

## Evidence read directly

Original log: `E:\Victoria.II.v3.04.Inclu.ALL.DLC\Logs\tgcx.log`.
Preserved byte-for-byte outside git as `E:\v2re\logs\tgcx-u4-1012.log`.
Measured with `Get-Item`: 1,801 bytes, last written 2026-10-12 18:43:38.
No game process was running when this report was prepared.

The log records:

- Actual executable base `0x007D0000`, distinct from preferred `0x00400000`.
- Reference SHA-256 and all eight signatures `OK`, including the two
  ASLR-adjusted operands (P24).
- Tick CALL installed, with `protection_restored=1`, `cache_flushed=1`.
- One upper-house sample at `hours=59883384`, year 1836, day of year 2.
- `tag=ENG`, `world_tag=ENG`, player and country indices both 29;
  human vector length 685, `human_marker=1`.
- Country pointer `0x2962E420`; upper-house object `0x2962ECD0`, exactly
  country `+0x8B0`; array pointer `0x2D409428`.
- Upper-house vtable `0x011CD7DC`, minus loaded base = RVA `0x009FD7DC`;
  at preferred base this is VA `0x00DFD7DC`, matching the inferred class.
- No `BAD`, access fault or invalid share diagnostics.

`TGC252_TGCX\logs\error.log` and `system_error.log` in the user's Victoria II
Documents folder are both **zero bytes**. `game.log` records a single-player
launch at **1836.1.6** for the United Kingdom, corroborating the reported
reload. The January 6 save exists (34,517,225 bytes, `Get-Item`); it was
not copied into the repository or parsed as a new subsystem.

## Upper-house comparison

Percentages below were calculated with Python from the logged raw values,
using `100 * raw / 32768`.

| runtime index | raw value | exact percentage (rounded here to six decimals) | screenshot | confirmed ideology |
|---|---:|---:|---:|---|
| 1 | 27,197 | 82.998657% | 83.0% | Conservative |
| 2 | 1,638 | 4.998779% | 5.0% | Reactionary |
| 6 | 3,932 | 11.999512% | 12.0% | Liberal |

Indices 0, 3, 4, 5, 7 and 8 were zero in the nine-entry snapshot. Their
ideology identities are **not established by this observation**.

Sum: **32,767 / 32,768 = 0.999969482421875**, one fixed-point unit below
1.0. This is consistent with per-share quantization of the displayed
83/5/12 composition. An exact integer sum of 32,768 must not be required
as the only passing condition for real data.

The logger's `candidate=` labels are expressly unconfirmed file-order
guesses. The test disproves that order: index 1 is Conservative rather
than its candidate Reactionary, index 2 is Reactionary rather than
Tribalist, and index 6 is Liberal rather than Anarchist. Documentation
now records the three observed mappings. No candidate is silently
promoted into a complete runtime mapping.

## What is confirmed, and what remains

- **R:** upper house at country `+0x8B0`, its class vtable, shares pointer
  at `+0x10`, 2^15 fixed-point interpretation for these entries, correct
  player selection, and runtime indices 1/2/6 identified above.
- **User-confirmed stability:** launcher/main menu, several days of play,
  save/load, no reported crash or freeze. Main-menu behavior is supported
  by the user's checklist report, not by timestamped menu telemetry.
- **Still unknown:** total allocation length and remaining ideology
  mappings. Nine declared ideologies do not prove nine physical array
  entries; a reserved slot or another ordering remains possible.
- **Sampling limitation:** the retained DLL log contains only the January
  2 sample, although the game reached January 6 and reloaded. It does not
  independently prove repeated sampling while paused or after reload.
  Before relying on this call as a general per-frame service, DLL-1 must
  verify invocation cadence and add a justified render/frame tick if
  necessary. This is not evidence of a crash, nor proof that sampling
  stopped because of one particular cause.
- **Multiplayer:** not tested (D5).

DLL-0 has no visible interface. The screenshots appropriately retain the
game's pie chart; the mockup's hemicycle belongs to HEMI-1. No new UI
deviation or mechanic change was introduced by this test.

## Next card

`docs/instructions-dll-1.md`: first resolve the frame-cadence uncertainty,
then establish read-only D3D9 drawing and Politics visibility for a small
test rectangle. Full ideology mapping is required before HEMI-1, not
before this rectangle. REA remains recorded for later GH-4/templates.
