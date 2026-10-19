# Army Universal 0.10.4 - runtime acceptance and release readiness

2026-10-19. User confirms land fix "worked", then asks whether/how to
release. Assessment only: no publication, repository visibility change,
commit/push, external message, license selection or game changes authorized
or performed by this assessment.

## Runtime evidence

Full successful DoD log preserved in work/universal-0104-dod-passed-1019/
with events.json; log 21,471 bytes, SHA256
`02c269f1b59e2c79c01a3e2e38561f2fd5a19e989ece7047baa070fd86696013`.
MOD-6 0.10.4 loaded. Scoped recruitment excluded four soldier pops;
five recruits queued, none omitted, from twelve available pops. Stack52
detached2/2 extras, built5, zero failed. Four new stacks5622/5634/5631/5625
have join entries; stack5628 is marching in the final snapshot. User accepts
the short behavior; do not claim that this snapshot proves the fifth join,
the exact reason each excluded province failed, all straits/access cases,
reload persistence or multiplayer.

DoD Universal controls and short land-filter/recruit/detach/march/merge are
now user-accepted. Vanilla/HPM0.9 tests remain earlier baselines; those are
not evidence of Universal0.10.4 integration. TGC and V2DLL acceptance on
0.8.2 likewise does not validate Universal. HFM absent. Multiplayer deferred.

## Conclusion

Technically plausible beta candidate for a limited tested target, **not a
finished public universal release as-is**. A test build can be distributed
only within whatever redistribution permissions cover its contents; a
private/beta label does not resolve provenance. Do not upload the full
game test copies, base mods, original lua51_real.dll or RE/Ghidra outputs.

## Release gates

1. **Same-payload runtime matrix:** Universal vanilla/HPM short tests,
   TGC2.5.2 regression and clean install on another PC. V2DLL integration
   tested if advertised; otherwise label pending. Explicit save/reload,
   Navy/fleet hide/reopen, repeated selection and one disconnected-colony
   case. Do not gate a single-player beta on multiplayer or deferred culture
   filters. Unsupported mods/executable hashes stay clearly untested.
2. **Rights/provenance:** ZIP contains28 DDS files, including native game/
   base-derived composites and original drawn elements. Generators source
   panel crops, rows, buttons, arrows and strip figures from effective
   game/base assets (tools/tgcx_templates_gui.py, tgcx_conform_gui.py).
   Establish applicable redistribution permission or replace/reference the
   affected assets. No permission is inferred from a renamed/generated file.
3. **Borrowed code:** loader/GUI/hooks have marked V2DLL-derived sections;
   current AGENTS13/D6 explicitly records personal-use scope. Pinned local
   V2DLL5d6f894 has no license file; live upstream root/README checked on
   2026-10-19 also shows no explicit license. Its README encourages modder
   reuse, but this assessment does not treat that as a complete license
   clearance. Obtain clear permission/terms for the borrowed portions, or
   replace them; do not merely redistribute upstream V2DLL in a public ZIP.
4. **User-owned license decision:** no project LICENSE/NOTICE/CREDITS found
   and none in the ZIP. User chooses license for original work after scope
   of third-party material is resolved. Credits alone are not a substitute
   for redistribution rights. Inventory all provenance before licensing.
5. **Release files:** standalone README with exact supported3.04 hash,
   own-loader/V2DLL instructions, update/uninstall and coexistence limits;
   version/changelog, credits/permissions, checksums, known issues and
   bug-report steps. Current ZIP README is explicitly prototype-only and
   still says no game integration proof, now superseded by short DoD result.
   Preserve historical ZIP; build a separate release candidate after gates.
6. **Publish after explicit authorization:** a versioned ZIP attached to a
   GitHub prerelease is suitable. No installer or recipient scripts needed.
   Mark beta, list tested bases/executable precisely and multiplayer untested.
   The existing remote is github.com/azha2005/victoria2tgcx; a repository or
   destination decision remains the user's, with explicit push approval.

## Sources inspected

- Local AGENTS.md13/D6/R8, generated-art code and from-V2DLL markers.
- Current ZIP manifest:28 DDS, no license/credits files, no game executable.
- Upstream: https://github.com/artyom-kuznetsov/V2DLL_Victoria-2-Extension
  (root/README checked2026-10-19; no explicit license found).
- GitHub's licensing guidance:
  https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/licensing-a-repository
  explains that a public source repository does not itself provide general
  reproduction/distribution permission. This is release preparation, not
  an individualized legal opinion about mod distribution.

Next implementation/testing instructions remain instructions-mod-6.md;
publication preparation steps are instructions-release-0.md. Do not start
art replacement, license selection or external permission requests merely
because this assessment identified them.
