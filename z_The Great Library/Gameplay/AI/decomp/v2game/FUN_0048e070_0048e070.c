// FUN_0048e070 @ 0048e070 body=[[0048e070, 0048e08b] [0048e095, 0048e11a]]


void FUN_0048e070(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  piVar1 = *(int **)(param_1 + 4);
  while (piVar1 != (int *)0x0) {
    iVar4 = 0;
    iVar2 = *piVar1;
    iVar3 = *(int *)(iVar2 + 0x5c);
    piVar1 = (int *)piVar1[2];
    local_8 = (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24;
    if (0 < local_8) {
      do {
        iVar3 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                 *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 200) + 4 + iVar4) * 4) +
                        0xe8);
        if ((iVar3 != 0) && (iVar3 != param_1)) {
          FUN_0048e260(1);
        }
        iVar4 = iVar4 + 0x24;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
}

