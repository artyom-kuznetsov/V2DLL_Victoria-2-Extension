# TPL-0 / U-8: working recruit and save/reload checkpoint (2026-10-17)

**Functional prototype accepted by the user on 0.4.0. Visual placement and
fidelity remain open.** The user supplied two game screenshots and said:
"gui still looks improveable but the prototype works. second screenshot
is from save and reload". This does not close all U-8 checks or R10.
No code, build, installation, game control, commit or push in this update.

## Evidence

Original 2560x1440 screenshots and current log/preference snapshots are
retained in `work/tgcx-u8-1017/` (ignored, private game art). Files:
`01-recruited.png`, `02-save-reload.png`, `tgcx.log`, `tgcx_templates.txt`,
`game-logs/`, and a SHA-256 evidence manifest.

- The saved composition is **4 infantry + 4 artillery + 1 hussar**:
  nine regiments, 27,000 nominal men. Do not confuse this with the earlier
  proposed six-regiment example in the U-card.
- Both screenshots show the native Units Being Built count **(+9)** and
  matching entries: four infantry, four Heavy Armament (the displayed
  artillery name) and one hussar. The second is after save/reload according
  to the user. The composition remains visible in the editor.
- Proxy log identifies `TGCX TPL-0 0.4.0`, **91 OK runtime signatures**, nine
  regiment command lines with tag ENG (4 artillery, 1 hussar, 4 infantry),
  and `Template recruit: 9 queued, 0 left out, 25 soldier pops`.
- The log discovers two successive native view/root pairs, consistent
  with rebuilding the interface across the reported reload. It is not
  proof of a fresh process restart or of every close/naval/tab path.
- The local template file contains the same three counts. Current copied
  `error.log` and `system_error.log` are both **0 bytes**. Logs are a
  snapshot; the agent did not start or stop the game.

## Visual comparison with board 5

Opened `mockups/5-templates.png` and compared it with both screenshots.
The main new failure is placement: the promoted Templates panel is at
the upper left of the screen, detached from Military's Build Army column.
Its title overlays the top bar. The original recruit list remains visible
in the Military window instead of being covered by the Templates panel;
the footer reaches across the intervening map rather than sitting below
the two columns. All remain visible after the reload.

The candidate's use of build-root matrix translation as screen coordinates
was **not runtime-confirmed by the static fixture**. A nested parent
translation is a plausible cause, not yet established. The reference
fixture tested a root already in screen coordinates, so it could not catch
this parent-coordinate mismatch. Do not repeat the earlier placement
claim as if it proved correct game placement.

Other polish stays open as listed in the panel report: border/selection,
tab marker, miniature composition icons, paging/spacing and button art.
Functional acceptance does not imply approval of those visual differences.

## Next

1. Repair the panel's placement against the real nested Military/build
   window hierarchy; keep the working recruit/persistence paths intact.
2. Extend the placement regression to include a translated parent. Use
   native coordinate conversion or a verified full parent transform; do
   not guess another fixed screen offset. Guard any new native entry.
3. Match board 5, then obtain a new side-by-side screenshot. Preserve
   closing/tab/naval handling when the promoted panel is corrected.
4. Remaining U-8 checks: insufficient pops/partial recruitment, repeated
   paused clicks, one-regiment case, full close/tab/naval coverage, fresh
   process preference reload and completed units. None is claimed here.
5. TPL-1 Conform remains after the TPL-0 visual repair/acceptance. U-7 is
   still separate. The installed build remains 0.4.0 with its existing
   paired 0.3.5 rollback.
