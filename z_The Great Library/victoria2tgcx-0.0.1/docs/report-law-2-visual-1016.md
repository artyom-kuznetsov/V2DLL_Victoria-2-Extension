# LAW-2 0.3.3 visual acceptance

2026-10-16. User supplied the corrected in-game screenshot and accepted it
("awesome"), then requested it be saved. **0.3.3 position, projected chart
placement and foreground layering are visually accepted.** This closes the
reported layout defect, not the entire unfinished law mechanic.

Original 2560x1440 PNG retained byte-identically:
`mockups/u7/tgcx-law2-033-layout-accepted-2026-10-16.png`.
SHA-256: `d8699777135e5ce3c1774e000a63736aa8d9f30a0b4892d42fea90384a0deb63`.
The Bill is centred, fully visible and above Politics. Its projected chart
is inside the left Projected Vote panel, totals are 10 Aye / 0 Abstain /
90 Nay, and native party labels do not cross its Crown/lower controls.
The screenshot was compared with the agreed Bill board: repaired position,
chart area and unobstructed lower controls now align with that structure.
Flat programmatic art, compact bloc rows and missing full controls/debt/
Crown detail remain the previously documented prototype deviations.

Retained DLL/game logs: `work/law2-layout-1016/accepted-033` (ignored R8).
DLL identifies 0.3.3; first ordered chart origin is (864,380), totals 10/0/90.
A native Count request is logged. That confirms callback entry; it does not
independently establish report ordering or complete command acceptance.
The user's earlier movement feedback supports the movable-window path;
0.3.3 drag-following/report/close-reopen coverage beyond this screenshot
is not inferred. No new game launch or exit was automated.

The implementation/gates/rollback are in `report-law-2-live-1016.md`.
Keep 0.3.3 as the current visual baseline and retain earlier payloads.
Full Bill negotiation controls and automatic favour collection remain
unfinished; continue them only in the next selected law session.
