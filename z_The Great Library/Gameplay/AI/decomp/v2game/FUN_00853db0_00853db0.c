// FUN_00853db0 @ 00853db0  (requested 00853DB0, first bytes: 55 8B EC 8B 45 08 53 33)


void FUN_00853db0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[1] == 0) {
    *param_1 = 0;
    return;
  }
  do {
    puVar1 = *(undefined4 **)(param_1[2] + uVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*puVar1);
    }
    *(undefined4 *)(param_1[2] + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < (uint)param_1[1]);
  *param_1 = 0;
  return;
}

