// FUN_0057afc0 @ 0057afc0 body=[[0057afc0, 0057afe8] [0057aff2, 0057b016]]


void FUN_0057afc0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[1] == 0) {
    *param_1 = 0;
    return;
  }
  do {
    iVar1 = *(int *)(param_1[2] + uVar2 * 4);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *(undefined4 *)(param_1[2] + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < (uint)param_1[1]);
  *param_1 = 0;
  return;
}

