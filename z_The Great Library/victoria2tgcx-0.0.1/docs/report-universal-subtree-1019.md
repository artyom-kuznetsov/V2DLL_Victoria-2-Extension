# Universal Army - DoD 0.10.2 failure and 0.10.3 subtree candidate

2026-10-19. User: "universal still fails in dod". Treat the 0.10.2 retry
as failed. No Universal version/base is runtime-accepted.

## Preserved runtime evidence

Full failed log saved before further launcher use:
work/universal-dod-0102-failed-1019/tgcx.log, 29,113 bytes, SHA256
`2480a5808cb4c89afb215effc28b96afe04c069f5251f1061f11d64155be3c1f`.
It confirms MOD-6 0.10.2, shared roots constructed, and entry positions
including Conform (222,192) and Templates (1474,497). There are no entry
placement refusals or successful open/click events. Foreground positioning
was insufficient. The earlier 0.10.2 repair did not close the visible gate.

## Native evidence and correction

CFixedWindow primary Show at VA 0x009E4450 (RVA 0x5E4450) sets only the
root visible flag and renderer flag. CGui secondary Show at VA 0x009E4490
(RVA 0x5E4490), on **window+0x18**, walks the window's controls, vectors and
subwindows and invokes their Show methods too. A nested native host supplies
that traversal for old fragments; Universal's independent roots need their
own activation. CEU3Button Show (VA 0x009EFEF0, RVA 0x5EFEF0) sets its
visible byte and calls its renderer's Show. Static exports remain ignored:
work/universal-0103-show-tree.txt, show-abi.txt and button-show.txt.

0.10.3 activates the subtree when a Universal window transitions from hidden
to shown, retaining checked primary show/hide for regular visible polling.
Repeating subtree Show every poll would re-show intentionally hidden covers
and selection rings (P42), so transitions are explicit. This applies to
entry roots and body/child windows. Unknown secondary methods refuse Show.
Existing foreground and host-hide correction retained; entry success logs
now say `entry activated` with a `subtree` flag. Land-reach fix retained.

This repairs a reproduced native visibility distinction, but the precise
live controls still need user verification. Do not claim 0.10.3 works in
DoD based on fixtures or the root-visible flag alone.

## Verification and installation

Reference executable/hash **172 signatures ALL OK**. Added secondary Show,
secondary Show/Hide table and native button activation signatures. x86
build passed. Native/reference-window/GPU suite ALL OK; **12 installer/Lua
tests** and **8 Python tests** (universal 2, Conform 6) passed. The real
reference subtree/button/renderer Show bytes execute on synthetic native
objects: root-only Show leaves a hidden button inactive; subtree Show
activates both; polling preserves deliberately hidden children; reopen
activates again. Existing scene-order and command regressions still pass.
Test logs: work/universal-0103-build.txt and universal-0103-tests.txt.

ZIP work/Army-Templates-Conform-Universal-0.10.3.zip, **1,041,868 bytes**,
SHA256 `df259a13eb92915f263ec8a90d40969f3bbf73e88502926500a3134ec26a4b4c`.
Logic SHA256 `ea9453576cce5c2906847855011d8887ca2a0b341dfceed47d7370f94b9fcd45`.
ZIP manifest/CRC checked; only logic pair/version changed from 0.10.2 mod
payload. GUI/art unchanged, no installer/scripts/executable in delivery.

After fresh normal-exit confirmation, process and executable gates passed.
All three Universal test copies updated; **37/37 files per copy** verified
identical. Old 0.9.0 packages/loaders checked unchanged. Full previous
Universal backup and pre-update log in work/universal-subtree-before-0103/.
Installation record work/universal-0103-installed.json. E: and TGC/V2DLL
copy untouched. No game launch/termination, commit, push or delegation.

Next: DoD-first retry under instructions-mod-6.md, first visible/clickable
entry controls, then body controls/pages. Preserve fresh log before another
launcher run. Recruitment/land-reach checks wait until GUI access works.
