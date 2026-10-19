# Combined V2DLL + Army 0.8.2 ZIP - 2026-10-19

User explicitly requested V2DLL included in the ZIP for the fresh-copy test.
Prepared work/Army-Templates-Conform-0.8.2-with-V2DLL.zip. This adds the exact
six-file V2DLL_LATEST_INSTALL distribution at pinned commit
`de66ee615e868a2fb927d6bf8ac7d9172fabdca4` from the local reference repository,
upstream https://github.com/artyom-kuznetsov/V2DLL_Victoria-2-Extension.
It is the distribution previously used for V2D-1, not a claim of latest release.

Root payload: lua51.dll (V2DLL), lua51_real.dll (verified original game Lua),
eventmusic.dll, v2dll_settings.ini, dgVoodoo.conf and watch/music.txt. All are
byte-identical to that Git snapshot. Settings already have plugin loading on.
No dgVoodoo DLL is included. Army package is the existing verified mod-only
0.8.2 payload, with v2dll_mod.dll unchanged from the accepted staged binary.
README documents source, version distinction, prerequisites and manual copying.
No installer, executable, Python runtime or launch scripts are included.

Checked ZIP CRC, each V2DLL file against its source Git blob, original Lua
SHA-256 b2ba1934...a7b0, plugin SHA-256 1ca013f5...a7e43 and proxy SHA-256
0234d89660bb6d1c9a1f471416fe034949638a9333b833a5cc75cd948daf2a33.
A full archive/file hash manifest is stored alongside as .zip.sha256.json.
Third-party files remain only in ignored work/, not git. This is the user's
private test handoff; no public redistribution licence is asserted.

Nothing installed into either game copy. The fresh game folder remains clean
until the user extracts this ZIP beside v2game.exe. Then use its normal launcher
with TGC v2.5.2 + Army selected. No game launched. V2DLL + 0.8.2 runtime check
still pending; the successful 0.8.2 log used our own loader.
