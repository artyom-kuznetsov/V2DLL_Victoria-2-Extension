// FUN_008d6a30 @ 008d6a30 body=[[008d6a30, 008d6aac] [008d6ab0, 008d6ad7]]


uint FUN_008d6a30(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[4];
  if (0 < iVar1) {
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4) + 0x5c);
    param_1 = (int *)((*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
    iVar3 = 0;
    if (0 < (int)param_1) {
      param_1 = (int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4) +
                                         0x5c) + 200) + 4);
      do {
        if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *param_1 * 4) + 300) == 0) {
          return CONCAT31((int3)((uint)param_1 >> 8),1);
        }
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 9;
      } while (iVar3 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
    }
  }
  return (uint)param_1 & 0xffffff00;
}

