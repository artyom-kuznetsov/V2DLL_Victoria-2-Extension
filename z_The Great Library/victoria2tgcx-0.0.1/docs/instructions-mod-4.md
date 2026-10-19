# MOD-4 - Army 0.9.0 on HPM

2026-10-19 preparation update: work/Victoria-II-HPM-Army090 is ready with
our loader and Army 0.9.0. First user test needs no installation. See
report-mod-4-5-prepared-1019.md. Retain the preparation steps below for future
repairs; do not repeat them over the ready copy without reason.

2026-10-19. Complete vanilla acceptance first. Politics/culture filters wait.

1. Read report-mod-5-1019.md. Obtain fresh normal-exit confirmation and
   check the process before installation. Prepare an isolated HPM copy or
   add an unchanged copy of installed HPM to the fresh vanilla test copy.
   Preserve E:'s accepted installation and all original HPM files.
2. HPM4.5.mod points to missing mod/HPM4.5 (P4). Generate our own fixed
   descriptor with --fix-path mod/HPM, retaining user_dir/replace_path;
   leave the original descriptor intact.
3. Generate via tools/prepare_army_package.py with --loader tgcx for our
   loader, or use the staged V2DLL candidate only in a V2DLL-equipped game.
   Stage outside the game, back up existing package files and verify hashes.
4. User selects only Historical Project Mod 0.4.5 (path fixed) and its Army
   package. Log must show 11 land types, Templates/Conform, Politics off.
5. Test editor pages/icons, Ctrl/Alt, recruitment, missing-regiment Conform,
   excess detachment and save/normal-exit/reload. Test Navy/fleet hiding and
   preserve the appearance in visual-references.md.
6. Preserve logs/screenshots, write a new report and update matrix status.
   Generation is not runtime acceptance. Follow instructions-mod-5.md next.
