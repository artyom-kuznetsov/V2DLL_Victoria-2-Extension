# Universal Army - DoD GUI accepted; land flag corrected in 0.10.4

2026-10-19. User confirms 0.10.3 "works now", then reports all apparently
reachable recruitment excluded, so no missing regiments build. This accepts
the short DoD Universal interface check; it does not accept full Army
compatibility or the land-reach implementation.

## Runtime evidence

Preserved full 0.10.3 log before further launcher use:
work/universal-0103-dod-route-failed-1019/tgcx.log, **24,978 bytes**,
SHA256 `2ecaf02ae7cd2dab980a23a51ed8212fa38446621edb6d53511ecab78e52e4e5`.
Subtree activation and Conform open events confirm accessible controls.
Stack 52: 3/3 extras transferred successfully; **18/18 soldier pops
excluded, 0 recruited, 4 left out**. The user identifies those land sources
as reachable. No native cleanup fault was logged.

## Cause and correction

Our interpretation of map province +0x2A was reversed: **nonzero means
land; zero means water**. The new guard rejected land before running a
route query. The earlier synthetic fixture repeated that same mistaken
assumption, so its passing result did not validate field semantics.

Independent native evidence: FUN_005B9810 (RVA0x1B9810), with naval-kind
predicate true, accepts two zero-flag endpoints, rejects two nonzero-flag
endpoints, and permits mixed endpoints only when the nonzero endpoint's
map+0xDC points to the water province. These are native coastal/port edges.
Read-only exports: work/conform-land-native-policy-abi-1019.txt and
work/conform-reach-policy-1019.txt. No whole-executable investigation.

0.10.4 corrects both endpoint checks and every returned path-node check.
The existing directional native route query, land-only scope, cleanup,
shared preview/recruit logic and pending tracking remain. It does not
disable reachability checks or admit water. GUI/art unchanged from accepted
0.10.3; no new simulation writes or commands introduced.

## Validation

- Reference executable hash and **172 signatures ALL OK**; corrected the
  signature's misleading sea-flag description without changing its bytes.
- MSVC x86 build and full native/reference-window/GPU suite **ALL OK**;
  **12 installer/Lua tests passed**.
- Corrected route fixtures mark land=1, water=0 and cover reachable land,
  same province, rejected query, water path node, water origin/destination,
  cleanup and local shortage despite overseas capacity.
- New independent regression executes actual native coastal-policy bytes
  on synthetic provinces, with blockade/final-access predicates stubbed
  permissive. Water-water passes; land-land fails for a navy; unlinked
  land-water fails; correctly linked ports pass in either direction.
  This independently establishes polarity rather than mirroring the fix.
- It does not prove the integrated native route query on a live mainland
  army. Repeat the user's exact failed case next; preserve real log.

Logs: work/universal-0104-build.txt, universal-0104-tests.txt. No extra GUI
test repetition: layout/art did not change and the native suite covers the
retained activation/foreground behavior.

## Artifacts and installation

ZIP work/Army-Templates-Conform-Universal-0.10.4.zip: **1,041,843 bytes**.
SHA256 `2e1d8cf974f2a7eea92e82067c0f505c891d0b517f8e7c9b60fb9696c029dff1`.
Logic SHA256 `b53621609425f9c75135ba2fade947a6bf93197bcc14ec30182b105b9f7bba67`.
CRC/manifest verified. Only logic pair/version differ from 0.10.3 payload.

After fresh normal-exit confirmation, process/executable gates passed.
Updated three Universal copies: **37/37 files each verified identical**.
Full 0.10.3 rollback at work/universal-land-flag-before-0104/<copy>/;
installed evidence work/universal-0104-installed.json. Old 0.9.0 packages
and root loaders checked unchanged; E: and TGC/V2DLL copy untouched.
No game launch/termination, commit/push or subagents. 0.10.4 game check pending.

## User's optimization question

Verified current code: local template TXT loads once per process through
tgcx_tpl_loaded, then edits write/update the in-memory library. Package
metadata is read during initialization. Universal builds its catalogue once
from the game's already-loaded unit database, not by reparsing mod unit TXT
files. Live country/pop eligibility and route queries are refreshed for
preview/actions; province results cache across pops within that snapshot.
Do not cache free capacity or diplomatic/path access indefinitely.
