# V2D-082 passed: Army 0.8.2 with V2DLL - 2026-10-19

User: great, it worked. Latest fresh-copy log verifies the successful run after
the canonical TGC map-path correction. **V2D-082 passed for this short Army
single-player check on TGC v2.5.2 with V2DLL 5.82.**

Preserved logs: work/v2d-082-passed-1019/tgcx.log, v2dll.log, summary.json.
The V2DLL log is cumulative; latest successful startup is pid 5572. Earlier
pid 15900 failed on the base-map path and is not evidence of a new failure.

- tgcx.log line 1: TGCX TPL-4 0.8.2 loaded_by=V2DLL plugin API v1.
- Supported exe hash; 146 OK RVA signatures, 7 FOREIGN entries from the
  expected V2DLL-owned sites; no BAD and module gates pass.
- Lines 158/164: army=1 politics=0, fresh settings profile
  TGC252_Fresh082_20261019; templates=1 conform=1.
- Lines 179-181: Create and five Transfers queued together, **5/5 extras
  arrived** in stack 7418, zero remain in source 619.
- Line 253: **five regiments queued**, zero left out, 18 soldier pops.
- V2DLL latest pid 5572 logs the Army v2dll_mod.dll -> ok and Install: done.
- No plugin faults/refusals/rejections/full tables/nonzero failure totals.

No new crash is inferred from the stale 00:43 crash files from the repaired
map-path failure. No later march/merge result is in this snapshot; previous
own-loader tests covered those, but this V2DLL run only proves the actions
above. Politics, separate Ctrl/Alt checks, alternate bases and multiplayer
remain outside this result.

Combined ZIP work/Army-Templates-Conform-0.8.2-with-V2DLL.zip is now backed by
this short fresh-user run. Mod-only ZIP remains available for users with their
own V2DLL. Neither archive contains the base TGC mod; use the canonical TGC
layout. No code/package changes, installs, launches, commits/pushes or external
messages performed during this acceptance/log review.
