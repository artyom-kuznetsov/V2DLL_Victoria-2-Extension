# HPM and DoD isolated Army test copies - 2026-10-19

User approved the recommended sequence: HPM and DoD checks, then universal
Army package development. Prepared two separate copies and, after fresh
normal-exit confirmation plus process gate, installed our own loader and
Army 0.9.0. The accepted vanilla copy, prior TGC/V2DLL copy and E: remain
unchanged. No game launched or terminated.

| Test copy under work/ | Source files verified | Base payload bytes | Land types | Conform button |
|---|---:|---:|---:|---|
| Victoria-II-HPM-Army090 | 17,324 | 1,118,371,868 | 11 | (222,42) |
| Victoria-II-DoDFF-Army090 | 19,802 | 1,524,932,607 | 13 | (222,42) |

Sources: clean vanilla from D:/Victoria.II.v3.04.Inclu.ALL.DLC plus unchanged
installed HPM and DoD folders from E:. Counts include the copied base
descriptor; byte totals cover vanilla/mod payload before that descriptor.
Excluded other mods, old settings/saves, map caches and Git metadata. Every
copied payload file's hash matched its source. Explicit map-definition paths
were checked to avoid P52. No changes to original base data.

HPM's original HPM4.5.mod still points to missing mod/HPM4.5. Our generated
`tgcx_base_hpm4.5.mod` points to mod/HPM, display **Historical Project Mod
0.4.5 (path fixed)**, retaining user_dir HPM and replace_path. Select this
fixed entry together with its Army package, leaving the original unticked.
DoD retains its descriptor and user_dir DoDFF. Existing Documents preferences
may be reused; no preferences were copied into the game folders.

Army was regenerated against each copied base using the P53 header fix and
`--loader tgcx`. Both have the same accepted vanilla 0.9.0 logic hash
`ee56551e11b5f00537e7d685309f6f7ff848669329a8a405eb1bbc820f2e519b`.
Our loader hash is `9290d4a88719687b9ee183173746eec7bdaae9cf898671e3f296d4244c21360c`;
original Lua retained as lua51_real.dll. No V2DLL plugin/proxy was installed.

All 40 HPM and 39 DoD new Army/descriptor files were verified against staged
payloads. Both reference executable checks pass. Each folder contains its
`fresh-copy-manifest.json` and `FRESH_TEST_README.txt`; summary evidence is
`work/hpm-dod-090-prepared.json` and `work/hpm-dod-090-installed.json`.
Staged own-loader packages are work/army-090-HPM-own-loader and
work/army-090-DoDFF-own-loader.

Next user check: HPM first, then DoD. Templates recruitment, Conform missing/
excess, detach completion, march/merge, library save/reload and native panel
visibility. DoD adds Regular/Horse Artillery, which should be exercised where
recruitable. No runtime acceptance for either base is claimed yet.

## Universal package: initial read-only work

After check_exe passed, inspected CUnitView construction and three CEU3Gui
factory entries in read-only Ghidra. The constructor requests `unitpanel`
through a virtual factory; CEU3Gui slot 11 resolves names and calls a native
constructor before spatial registration. This is a candidate route for
shared additive GUI definitions. Concrete ownership, child attachment,
cleanup, call ABI and dynamic sprite assignment remain unverified.

Evidence/VA-to-RVA conversions are in docs/symbols.md, MOD-6 preliminary
section. Pseudocode/headless logs remain ignored under work/mod6-*. No new
function was called or hooked by the DLL. Ghidra needed normal preference
write access outside the sandbox; the game executable and analysis project
were read-only. This is research progress, not a universal build.

No commit, push, subagents, publication or external send. Current native
Conform appearance and deferred culture/Politics scope are retained.
