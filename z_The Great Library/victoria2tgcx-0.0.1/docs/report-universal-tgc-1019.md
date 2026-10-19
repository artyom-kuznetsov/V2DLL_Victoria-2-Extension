# Universal 0.10.4: three-base acceptance and TGC installation

2026-10-19. The user confirms Universal works on vanilla, HPM and DoD,
then requests a TGC copy test. After fresh normal-exit confirmation and
the process gate, the identical package was added to the existing isolated
TGC 2.5.2 + V2DLL 5.82 copy. TGC gameplay validation remains pending.

## Acceptance evidence

Preserved available logs and the user's statement in
`work/universal-0104-confirmed-three-bases/`. HPM has a 0.10.4 header,
five recruits with zero omitted, all five excess transfers arriving and
all five recruited stacks joining. DoD's earlier accepted land correction
is recorded in report-universal-land-flag-1019.md and
work/universal-0104-dod-passed-1019/. Vanilla's latest log was overwritten
by a Lua-only launcher run; its acceptance is user-reported. Do not infer
full extended coverage from these short checks or request them again.

## Installation and verification

Target: `work/Victoria-II-clean-TGC252`. Preparation and installation
records: `work/universal-tgc-0104-prepared/plan.json` and `installed.json`.
The existing canonical `mod/TGC` layout and TGC descriptor/profile remain.
The hardcoded map/../mod/TGC/map/definition.csv resolves (P52).

- Supported executable checked: 172 signatures and SHA-256 ALL OK.
- 37/37 installed Universal files match the staged package and the same
  0.10.4 payload installed in the three accepted copies.
- Logic tgcx.dll and V2DLL alias v2dll_mod.dll SHA-256:
  b53621609425f9c75135ba2fade947a6bf93197bcc14ec30182b105b9f7bba67.
- Existing V2DLL 5.82 lua51.dll SHA-256:
  0234d89660bb6d1c9a1f471416fe034949638a9333b833a5cc75cd948daf2a33.
- Protected executable, original Lua, proxy, V2DLL settings, descriptor,
  map anchors and every retained Army 0.8.2/0.9.0 package file match their
  pre-installation hashes. No base or loader replacement.
- V2DLL settings retain LOCAL_MOD_CONFIG=0 and LOAD_DLL_FROM_MOD_FOLDER=1.
  Native GUI sprite/font dependencies and V2Mod_Init export checked.
- Added only Universal's folder/descriptor and a test note/hash manifest.
  Old logs preserved in preparation previous-logs/. No game launched.

The unchanged ZIP is work/Army-Templates-Conform-Universal-0.10.4.zip,
1,041,843 bytes; SHA-256
2e1d8cf974f2a7eea92e82067c0f505c891d0b517f8e7c9b60fb9696c029dff1.
No rebuild or additional regression run was needed for identical files.

## Player test and limits

Open victoria2.exe in the target folder. Select only **Army Templates and
Conform (Universal)** and **TGC v2.5.2 (stable)**; untick both older Army
entries. The normal launcher puts Army first for V2DLL plugin lookup.
Expect MOD-6 0.10.4 loaded_by=V2DLL plugin API v1 and 11 live land types.
Check Templates/editor/icons/recruitment and Conform/land recruitment,
detach and march/merge. Preserve Logs/tgcx.log and Logs/v2dll.log after
normal exit. Detailed steps: instructions-mod-6.md.

Rollback is selection-only: untick Universal and retick Army(TGC)0.8.2.
The previous 0.8.2 V2DLL success does not establish Universal acceptance.
TGC Universal/V2DLL, extended edge cases, recipient installation and public
release provenance/documentation remain separate gates. No publication,
commit, push, external messages or subagents used.
