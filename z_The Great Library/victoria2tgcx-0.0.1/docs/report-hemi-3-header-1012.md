# HEMI-3 - Hover acceptance and Upper House header repair

2026-10-12. **0.2.6 hover works in game, confirmed by the user.**
The user supplied a Politics crop and reported that the overlay overlaps
the Upper House block. **0.2.7 fixes the cover bounds, built and installed
on E:; this visual correction is not yet tested in game.**

## Accepted runtime evidence

Preserved 0.2.6 DLL, descriptor, install record, accepted runtime log,
empty error logs and acceptance metadata in
`E:\v2re\logs\tgcx-before-027-1012` before replacement. DLL SHA-256:
`35465f6375813b8b3e71a71560fa382e31ccd3aba69ec35ded35e5155f3aba94`.
The log has all 27 guards OK, 6116 final frames, 5555 ordered draws,
native Politics show/hide and hover lines for Conservative index 1/slice 0,
Liberal index 6/slice 2 and Reactionary index 2/slice 1. There are no
blocked/disabled/fault/failed/BAD lines; both active TGC252_TGCX error logs
are zero bytes. Repeated snapshots remain at January 1, 1836.

The supplied screenshot shows the UK hemicycle and native 83/5/12 legend.
The user's description establishes functional hover acceptance; individual
gap, popup, view-switch, date-advance, reload and Alt-Tab outcomes were not
reported and are not inferred from that description or from fixture tests.

## Diagnosis and correction

Opened Main (`mockups/1-politics.png`) and compared the supplied screenshot
with installed TGC v2.5.2 `country_politics.gui`. Its Upper House title is
at root y=83 with maximum height 20. The opaque pie cover began at y=101
and its three-pixel feather reached y=98, painting across the bottom of
the title strip. Ordered rendering protects later windows but does not
protect an earlier header from an oversized cover.

0.2.7 clips chart drawing to root x=[37,162), y=[104,209), intersected with
the framebuffer. The cover's feather therefore stays below the header,
left of the native legend and above the reform row. Captured D3D state
restores both the previous scissor rectangle and enable flag. Seat geometry,
allocation, colours, native scalar hover and structured tooltip ownership
remain as in the accepted 0.2.6. No new hook/address or simulation write.
New pitfall P32 records the feather-boundary issue.

## Checks and installation

- Reference executable/hash and 27 byte guards: pass.
- TGC v2.5.2 anchors and reserved event range: pass.
- Release/Win32 MSVC `/W4 /WX`: pass.
- Native and real D3D9 tests, including all existing hover/ABI checks: pass.
- GPU readback checks the full native header and reform row are untouched,
  cover core/fringe still draw, and scissor state is restored: pass.
- Eight installer/Lua tests and 128 exact exports: pass.
- Fixture BMP visually inspected. Production installer dry run passed;
  installation completed with the game closed, original Lua shim retained.

Installed/source 0.2.7 DLL SHA-256:
`6c83fb8c4ff47efd2df6d8e5aefedd4f028c12d4423491dbf53975aa3635eb40`.
Original shim remains
`b2ba19343691f22d1af1417f9a7cbaeae74ba820a2a412f5a6cdea271cc1a7b0`.
Descriptor marks 0.2.7; install record says DLL-1+HEMI-3. Logs and install
metadata: `E:\v2re\logs\tgcx-hemi3-027-{build,tests,exe}-1012.txt`,
`tgcx-hemi3-027-tgc252-1012.json`, `tgcx-hemi3-027-install-1012.json`.
Law scripts/data did not change; their prior passing checks remain valid.

## Mockup and next evidence

Main has an intact title above the hemicycle. Clipping restores that
boundary; no mechanic or mockup redesign/re-export is needed. Generated
beige background rather than native texture and native legend order
83/5/12 rather than Main's 83/12/5 remain documented deviations. Other
Main ruler/law elements belong to future cards.

Only the user launches the next run. Check the complete title strip,
native legend and reform row and confirm hover still works. Collect any
remaining U-5 integration coverage during the same run if convenient;
do not relabel those checks passed without evidence. 0.2.6 is now the
retained working baseline. LAW-1 remains a later discussion, not started.
