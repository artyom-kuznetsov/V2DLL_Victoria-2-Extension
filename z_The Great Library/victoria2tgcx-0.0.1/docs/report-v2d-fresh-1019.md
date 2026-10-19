# Fresh Victoria II + TGC test copy - 2026-10-19

User requested a fresh game folder to install V2DLL/Army as a new user and
chose clean game + TGC v2.5.2. Prepared:
`work/Victoria-II-clean-TGC252/` (1.131 GiB, 25,380 payload files plus manifest).

Base source: D:/Victoria.II.v3.04.Inclu.ALL.DLC (original Lua, unmodified 3.04).
TGC source: E:/Victoria.II.v3.04.Inclu.ALL.DLC/mod/TGC_v2.5.2/TGC.
Copied base game directories and runtime files, plus only stable TGC. Excluded
other mods, cached map data, old settings, logs, screenshots, git metadata,
TGCX/V2DLL files and installation records. No existing installation changed.

Original lua51.dll SHA-256 b2ba19343691f22d1af1417f9a7cbaeae74ba820a2a412f5a6cdea271cc1a7b0.
v2game.exe SHA-256 62d48c204364dd706584777c2e2b3c7ab3c5f1dd0170872554943575d53d6648.
check_exe on destination: ALL OK. Verified 25,378 copied base/TGC files against
their source hashes. The two deliberate new/changed payload files are the README
and this copy's TGC descriptor. Manifest records file hashes and source paths.

The copied TGC descriptor retains its display name and installed path but uses
user_dir TGC252_Fresh082_20261019. That Documents profile did not exist when
checked. No old saves/settings/templates are copied. This isolates TGC testing;
vanilla without a selected mod still uses the ordinary vanilla Documents
profile (explained in README). The base engine/game files themselves are not
claimed to be a newly downloaded retail installation; this is a clean local
copy reconstructed from the user's installations with verified binary hashes.

No V2DLL, Army or Politics is installed in the fresh copy. No game launched.
User can start victoria2.exe in this folder and install the author's normal
V2DLL distribution, then the separate files-only Army package below.

## Army V2DLL package

`work/Army-Templates-Conform-0.8.2-mod-only.zip` (547,159 bytes).
Only mod/ plus README; no installer/runtime/launch scripts. Plugin is the
accepted staged 0.8.2 DLL unchanged, renamed v2dll_mod.dll. The package marker
records 0.8.2. Interface/art bytes are the previous verified TGC v2.5.2 output.
ZIP CRC and source DLL hash pass. No V2DLL distribution is bundled.

Current E: log used our MOD-2 loader. Thus accepted Army 0.8.2 does not yet mean
V2DLL + 0.8.2 passed. The previous v2dll.log is stale (2026-10-18) and reports
5.82; it must not be used as proof of the fresh test's version. Inspect the new
run's loaded_by=V2DLL plugin API v1 marker and upstream version Install header.
Next: instructions-v2d-082.md (card V2D-082).

Nothing installed into E:, no game launch/exit, no commit/push/subagents and no
external send during this preparation. All copied third-party game/base
material and binary artifacts are in ignored work/, never git.
