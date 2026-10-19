# MOD-6 - Universal Army 0.10.0 prototype

2026-10-19. Implemented, built, automatically checked and installed in the
three isolated test copies after fresh normal-exit confirmation.
**Not yet tested in game.** No game was launched or terminated.

## Shared package

The same `tgcx_army_universal` folder and descriptor serve the active base.
There are no generated buildunit.gui, unitpanel.gui or Politics GUI
replacements, no per-base unit metadata and no dependency/user_dir/
replace_path. Shared additive tgcx_army.gui defines Templates and Conform
roots and entry controls. The DLL constructs them through the native
named-window factory. Simulation operations retain engine commands.

The live country/unit database supplies land keys, icons and build times.
Existing preferred keys retain their order; extra keys sort after them.
Library persistence stays keyed by unit name. Bounds, duplicate keys,
invalid icon/time fields and changed live catalogues refuse use.
Generic icon slots receive live frames through the native API.

The logic is included byte-identically as tgcx.dll for our loader and
v2dll_mod.dll for V2DLL's plugin mechanism. This is one shared package.
The included root loader is for clean installations with original Lua
retained as lua51_real.dll; do not overwrite an existing V2DLL installation.
Universal integration with either loader still needs a game check.

## GUI and ownership

Static ABI/ownership evidence is recorded in symbols.md. The factory
receives a borrowed game string and null parent (RET 8), registers the
new root with the native GUI manager and initializes native controls.
Replaced/dead views release our roots by hiding them and invoking native
deferred subtree release. A direct scalar destructor would leave the
manager's registration dangling (P54). No registry/render arrays are edited.

Current Conform styling is preserved. Templates uses a 20x20 compact entry
after native unit folders. Dense rows such as DoD use the title band above
the row (x=370, y=7 for measured row y=31). The obsolete selected-tab
overlay is omitted. This deliberately deviates from the older 34px tab
to address the overlap complaint. Final placement/clickability/appearance
need user observation. No mechanic changed or remote mockup was republished.

## Automated evidence

- Reference executable SHA256 and all **164 signatures: ALL OK**.
- MSVC x86 loader/logic build passed.
- Native/reference-window/GPU suite and **12 installer/Lua tests passed**.
- **34 Python tests passed**: Templates GUI 5, Conform GUI 6, catalogue 5,
  packages 10, universal layout 2 and base profiles 6.
- Fixtures cover custom live indices/frames, time rounding, catalogue
  refusal, factory ABI, deferred release, invalid context, actual native
  button position getter bytes and icon frame-forwarding bytes.
- ZIP CRC/manifest and effective sprite/font dependencies checked against
  vanilla, HPM, TGC 2.3.4/2.5.2 and DoD. HFM absent/unmeasured.

Fixtures prove their exercised boundaries. Real shared-root construction,
schema loading, drawing/input and sustained native cleanup are game gates,
documented in instructions-mod-6.md. Universal is not yet runtime-proven.

## Artifacts and installation

`work/Army-Templates-Conform-Universal-0.10.0.zip`: **1,037,796 bytes**.
SHA256: `60da0ea1fd9202cc859308479a832afc5a81318b7c48061384528e228045d6c8`.
Logic SHA256: `1c3c518f78cf5baa77ddbdb0f2f11eb5f39dfab87739636e426e1597c9cdf596`.
Builder: tools/build_universal_army.py. Accepted private art is read from
ignored staging and not added to git. ZIP has no scripts, installer or
game executable. Existing private game art is not cleared for publication.

After fresh user confirmation, process/executable gates passed. Added and
hash-verified **37 identical package files per copy** in:

- work/Victoria-II-clean-vanilla-Army090
- work/Victoria-II-HPM-Army090
- work/Victoria-II-DoDFF-Army090

Evidence: work/universal-010-installed.json and per-copy
universal-army-installed-sha256.json / UNIVERSAL_ARMY_TEST.txt.
Existing 0.9.0 logic and root loader hashes checked unchanged. Installation
only adds the package/descriptor and test notes. Base/game files and
original Lua retained. E: accepted 0.8.2 and the TGC/V2DLL copy untouched.

Ordinary launcher: untick old Army; select **Army Templates and Conform
(Universal)** plus the base, if any. Test vanilla first, then DoD and HPM.
Rollback by unticking Universal and reticking accepted old Army. Never
select two Army packages. No game launch, commit or push performed.
