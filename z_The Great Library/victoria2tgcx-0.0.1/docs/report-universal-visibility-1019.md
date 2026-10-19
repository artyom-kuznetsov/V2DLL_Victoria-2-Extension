# Universal Army - missing DoD controls, 0.10.2 candidate

2026-10-19. User's first Universal test was DoD 0.10.1: game opened,
but Army controls were missing. **Failed visual/function entry gate**,
not a game-load crash. No Universal base is accepted yet.

## Evidence and diagnosis

Initial DoD tgcx.log read: 14,976 bytes, timestamp 02:26:21. It recorded
the Universal package plus DoD, modules enabled, 13 live land types and
successful construction of both shared root pairs. No click/open messages
followed. This proves initialization and named-root creation, not display.
During investigation a later read found that file replaced with a 133-byte
Lua-only loader message. Preserve the initial observed excerpt and current
game logs in work/universal-dod-missing-1019; do not attribute that later
message to the failed gameplay run or claim its original full log retained.

The independent entry roots were positioned and shown without the native
foreground promotion used by the accepted body windows. Thus they could
remain behind the host's opaque panel. Their independent lifetime also
requires explicitly hiding them when a host disappears, unlike the old
nested fragments. 0.10.2 corrects those omissions. The first run provided
no per-placement diagnostics, so the exact live ordering/placement outcome
must still be confirmed in the retry; do not call the visual defect closed.

## Change

- Native slot 11 promotes a hidden entry on initial display/reopen before
  slot 6 positions it. Visible entries retain scene order during polling,
  allowing a later dialog to stay above them.
- Universal Conform entry hides when its host hides; Templates' independent
  roots hide in province-scoped views. Existing Navy/fleet handling remains.
- Placement logs now distinguish native folder/getter, attrition lookup/
  getter, root screen-chain and position/foreground refusals. Failures are
  limited per root/stage; success logs include entry pointer and pixels.
- Land-reach fix retained. GUI definitions/art and simulation commands
  unchanged. Existing per-base 0.9.0 packages retained.

Static recheck: work/universal-{missing-controls,scene-link,root-hide,
control-vtables}-1019.txt, read-only Ghidra. Native CFixedWindow show only
sets visible flags; position does not reorder siblings; foreground unlinks
and appends to the scene. Addresses already guarded; no new RVA required.

## Checks and delivery

Reference hash/169 guards and x86 build pass. Native/reference-window/GPU
suite ALL OK; 12 installer tests and 8 Python tests (universal 2, Conform 6)
pass. New regression executes actual reference position/show/foreground/
unlink/append code: initially hidden entry behind an opaque host, reopening,
and preserving a later dialog during regular visible updates. This catches
the omitted first-show promotion. It does not prove the live screen result.

ZIP work/Army-Templates-Conform-Universal-0.10.2.zip: **1,041,372 bytes**,
SHA256 `28314c6606fad1e2d23672d9826abf5b65882624bcb14975808b4ff640d542c6`.
Logic SHA256 `d2f6a18490a1cd9c05fabd90f86e99cc66d917633b58798ac7fb656eaa6a6857`.
CRC/manifest checked. Only logic pair/version differ from 0.10.1 mod payload.

After fresh user normal-exit confirmation, process and executable gates
passed; all three Universal test copies updated and 37/37 files each
verified identical. Old 0.9.0 logic/root loaders checked unchanged.
Backup full 0.10.1 Universal package, descriptor, notes, manifest/log:
work/universal-visibility-before-0102/<copy>/. Installation record:
work/universal-0102-installed.json. No game launched/terminated, commit,
push or subagent. E: and TGC/V2DLL copy untouched.

Next: DoD retry first, inspect entry display/clickability and stage logs
before broader compatibility or land-reach testing. instructions-mod-6.md.
