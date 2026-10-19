# Separate clean vanilla Army test copy - 2026-10-19

The user corrected the test setup: the earlier clean TGC copy now has their
V2DLL installation, so they requested another fresh copy. Prepared
`work/Victoria-II-clean-vanilla-Army090/`, keeping every existing game copy.

Reconstructed vanilla from D:/Victoria.II.v3.04.Inclu.ALL.DLC: 8,961 base
files, 851,338,278 bytes, every hash verified against its source. Excluded
mods, map cache, screenshots, saved settings, logs and unrelated root files.
Reference v2game.exe SHA-256
`62d48c204364dd706584777c2e2b3c7ab3c5f1dd0170872554943575d53d6648`.

Added our MOD-2 loader (marker 0.8.0), original Lua retained as
lua51_real.dll (`b2ba1934...a7b0`), and generated Army 0.9.0 for vanilla,
plugin named `tgcx.dll` in `mod/tgcx_army_vanilla`. Its hash is
`ee56551e11b5f00537e7d685309f6f7ff848669329a8a405eb1bbc820f2e519b`.
There is no TGC, V2DLL proxy, eventmusic.dll, V2DLL settings or v2dll_mod.dll.
The mod directory contains only the vanilla Army folder and its descriptor.

`fresh-copy-manifest.json` records all source and installed-package hashes;
`FRESH_TEST_README.txt` gives launch/check instructions. Original Lua's source
hash remains verified after renaming. User-confirmed normal exit preceded
installation, and the process gate passed. No existing installation changed.

User opens this copy's victoria2.exe and ticks only Army Templates and
Conform (vanilla). No scripts or installer to run. Vanilla uses the ordinary
Documents/Paradox Interactive/Victoria II preferences folder: no old settings
were copied, but existing preferences and compatible templates may be used.
This is a reconstructed clean local copy, not a newly downloaded installation.

No game launched. MOD-3 runtime check remains pending; instructions-mod-3.md.
