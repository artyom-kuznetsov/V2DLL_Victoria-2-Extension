// FUN_00a6a8c0 @ 00a6a8c0 body=[[00a6a8c0, 00a6a8fd] [00a6a90c, 00a6a91a] [00a6a91e, 00a6a923] [00a6a935, 00a6a94e]]


void FUN_00a6a8c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      piVar1 = *(int **)(param_1[2] + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        iVar2 = *piVar1;
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar1);
        }
        if (*(int *)(iVar2 + 0xc) == 0) {
          *(undefined4 *)(iVar2 + 0xc) = 0;
          *(undefined4 *)(iVar2 + 0x10) = 0;
          *(undefined4 *)(iVar2 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(int *)(iVar2 + 0xc));
      }
      *(undefined4 *)(param_1[2] + uVar3 * 4) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[1]);
  }
  *param_1 = 0;
  return;
}

