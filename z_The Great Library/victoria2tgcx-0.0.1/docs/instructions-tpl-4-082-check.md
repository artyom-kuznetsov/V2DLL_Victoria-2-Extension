# TPL-4: check immediate detach in 0.8.2

2026-10-19. Installed on E:, both packages; loader remains 0.8.0.
Only the user launches and exits the game.

1. Select TGC v2.5.2 and Army; Politics is optional for this Conform test.
2. Load a save and choose an army with at least one regiment to keep and
   several extras relative to the chosen template. Keep it stationary and
   out of battle for this check.
3. Press Conform once. Unpause for two or three game days, then pause.
4. Pass: extras are in another stack beside it, without a second Conform.
5. If possible, repeat where missing regiments also need recruiting; extras
   should leave before recruitment completes.
6. Exit normally and report the outcome. Preserve E:/Victoria.II.v3.04.Inclu.ALL.DLC/Logs/tgcx.log.

Expected marker: TGCX TPL-4 0.8.2. Queue line: Create then N of M extra
transfers queued together. Result: N of M extras arrived, zero still in source.
If it fails, inspect first-extra +40/+42 flags and any destination-disappeared
line. Do not infer success from the queue line. Build has only fixture proof.

If another repair is necessary, keep R5 engine commands, run check_exe first,
read report-tpl-4-1019.md, and target the new log evidence. Do not reinstall
while the game is running. Retain before-082-submod for rollback.
