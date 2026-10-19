# HEMI-3 - Align the cover to the actual header artwork

2026-10-12. User reports the 0.2.7 cover is approximately two pixels short
and supplies a fresh Politics crop. **0.2.8 corrects the seam; built,
checked and installed on E:, not tested in game.** 0.2.6 remains the
accepted functional hover baseline. The 0.2.7 report remains historical.

## Evidence and cause

Preserved 0.2.7 proxy, install record, descriptor, runtime log and active
error logs in `E:\v2re\logs\tgcx-before-028-1012`. The log has 27 passing
guards and 1438 ordered draws; no blocked/disabled/fault/failed/BAD lines.
Both active error logs are empty. This does not establish unreported U-5
interactions. The supplied screenshot shows the restored title and a
thin seam between its lower border and the cover.

The previous fix used the title text box's y=83/maxHeight=20 to choose
root y=104. That is a text layout limit, not the bottom of the artwork.
Read installed TGC v2.5.2 `country_politics.gfx` and `politics_bg.dds`:
`GFX_bg_politics` is placed at (18,9); the header's last border row is
texture y=91, root y=100. Its first background row is root y=101.
The opaque cover already starts at y=101, so clipping at y=104 exposed
three rows of underlying texture. The user's approximate two-pixel
description identified this overcorrection.

Private texture inspection crop:
`E:\v2re\logs\tgcx-hemi3-header-texture-1012.png`. No TGC art enters git.

## Correction and verification

0.2.8 changes only the top scissor bound from root y=104 to y=101.
Other bounds, cover geometry, seats, hover, native tooltip ownership and
ordered rendering stay as before. No new address/hook or simulation write.
The GPU test now checks the actual header rows through y=100 are untouched
and all three formerly exposed rows y=101..103 have opaque cover pixels.
This extends the previous header-preservation assertion with seam coverage;
scissor-state restoration and native hover/ABI tests remain in place.

Reference SHA/27 signatures, TGC anchors/event range, Release/Win32
`/W4 /WX`, native/real-D3D9 tests, 128 exact Lua exports and eight installer
tests pass. The real GPU fixture BMP was inspected. Production installer
dry run and installation passed with the game closed; original shim retained.
Descriptor marks 0.2.8; install record says DLL-1+HEMI-3. Law scripts unchanged.

Installed/source DLL SHA-256:
`61824e4bc1b72fc5792533ede1cd14ea3f759c458c59d35407cef973db0ccdc5`.
Logs: `E:\v2re\logs\tgcx-hemi3-028-{build,tests,exe}-1012.txt`,
`tgcx-hemi3-028-tgc252-1012.json`, fixture log and install JSON.

## Mockup and remaining evidence

Opened Main (`mockups/1-politics.png`) and compared the supplied crop.
The intended intact header and continuous chart background are unchanged;
no mechanic redesign or mockup re-export needed. Generated beige background
rather than native texture, and native legend order 83/5/12 rather than
Main's 83/12/5, remain documented deviations. No new deviations intended.

Only the user starts the next game. Check that the cover meets the header
border and leaves it intact, and hover still works. Extended U-5 coverage
remains unconfirmed; collect during the same run if convenient. LAW-1 is
still for later discussion and has not started. P32 gains the distinction
between text layout bounds and the actual sprite border; next pitfall P33.
