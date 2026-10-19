# Fresh-copy TGC map-path repair - 2026-10-19

The first V2DLL + Army launch failed with the screenshot's C++ file exception:
`map/../mod/TGC/map/definition.csv` could not be opened. This was a mistake in
our prepared fresh-copy layout, not evidence of an Army transfer failure.

## Cause and startup evidence

Fresh copy had TGC under mod/TGC_v2.5.2/TGC, named by its descriptor. However,
TGC's unchanged map/default.map explicitly sets definitions to
../mod/TGC/map/definition.csv. That path bypasses the descriptor's selected
folder. Source E: also has an existing mod/TGC folder, masking the dependency
in the working install; the deliberately clean copy did not.

Search across TGC text/map/gui/gfx/lua/csv files found this one mod/TGC path.
The failing logs are preserved at work/fresh-TGC-path-fix/failed-run-logs/.
They confirm:
- TGCX TPL-4 0.8.2 loaded_by=V2DLL plugin API v1;
- V2DLL's fresh Install header is version 5.82;
- ModLoader .../mod/tgcx_army_tgc252/v2dll_mod.dll -> ok;
- army=1 politics=0; templates=1 conform=1; supported executable hash.
Thus startup/plugin initialization succeeded, while game loading failed on
base map data. V2D-082 gameplay is still untested, not passed.

## Repair

Prepared a byte-identical TGC copy outside the game folder. After the user
confirmed the error dialog/game were closed, checked game-process absence,
verified resolved move paths stay within the intended prepared/fresh folders,
and moved the prepared copy into fresh mod/TGC. Changed only the generated
fresh-copy TGC descriptor's path from mod/TGC_v2.5.2/TGC to mod/TGC. Display
name, filename, user_dir and every other descriptor byte are unchanged.
No TGC content file was edited. The old nested TGC folder remains, unused.
Both original working installs and V2DLL/Army binaries are unchanged.

Verified all 16,411 canonical TGC files byte-identical to the retained copy.
Resolved root/map/../mod/TGC/map/definition.csv and confirmed it exists at the
canonical location. Old descriptor and applied-fix.json are retained in
work/fresh-TGC-path-fix/. The original fresh-copy manifest is a creation-time
snapshot; the installed V2DLL/Army and this later layout change intentionally
are not represented by that baseline manifest. README now notes the correction.

No game launched. Retry through the same normal launcher, selecting Army +
TGC v2.5.2. Combined ZIP itself is unchanged: the missing path belongs to the
base layout, and does not require a different Army/V2DLL binary.
New pitfall P52; next P53. No commit/push/subagents/external send.
