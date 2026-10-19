# TPL-1 0.6.3 installation and player check

2026-10-17. Read `report-tpl-1-visual-1017.md`. Candidate is staged and all
automatic gates pass. Update: steps 1-4 completed; 0.6.3 is installed on E: with verified hashes and paired backups. Continue at step 5.

1. Obtain the user's confirmation of a normal game exit. Only the player
   launches/exits the game. The process check alone does not prove normal exit.
2. Back up the installed lua51.dll and tgcx_dll_install.json (verify actual
   record filename in install_dll.py) to a new
   `E:\v2re\logs\tgcx-tpl-place-1017\before-063-dll` folder. Verify hashes.
3. Run both installers with --dry-run again. DLL source:
   `E:\v2re\logs\tgcx-tpl1-1017\lua51-063.dll`; submod source:
   `E:\v2re\logs\tgcx-tpl1-1017\stage-063`.
4. Install DLL with --source above, and submod with --source above and
   --backup `E:\v2re\logs\tgcx-tpl-place-1017\before-063-submod`.
   Verify installed hashes against the report. Do not regenerate laws.
5. Player opens Conform on a land army. Capture the window and compare it
   beside the supplied army screenshot and board 6. Check title, row text,
   miniature icons, selection, pager, hover, close, Conform and Cancel.
6. Build missing regiments and let them march/merge, then detach extras.
   Repeatedly switch armies, close/reopen and select newly created stacks.
   Conform must stay usable. Check tgcx.log for guarded GUI faults, including
   new stage and pointer diagnostics; error.log must have no new errors.
7. If a fault remains, preserve the log before another launch and use the
   named step to localize it. Do not claim the historical fault fixed solely
   from the synthetic fixtures. Record every visual deviation and acceptance.
8. Roll back using the paired before-063 DLL/submod sources if necessary,
   after a confirmed normal exit. Update NEXT/ROADMAP/SUBAGENTS and report.

Later player cards remain U-8 extended checks (`instructions-u-8.md`,
`instructions-tpl-0.md`) and U-7 (`instructions-u-7.md`). No commit, push or
subagents unless asked.

Acceptance update (2026-10-17): user reports "works" on 0.6.3 and authorizes commit/push. Steps 5-6 short acceptance recorded; detailed extended checks and screenshot evidence are optional follow-up.
