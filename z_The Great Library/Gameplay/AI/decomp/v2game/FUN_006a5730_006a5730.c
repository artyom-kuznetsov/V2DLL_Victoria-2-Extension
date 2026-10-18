// FUN_006a5730 @ 006a5730 body=[[006a5730, 006a579e]]


undefined4 FUN_006a5730(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x38);
    }
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                    *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0xbe4) * 4);
  }
  if (iVar1 != 0) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb4))(iVar1);
  }
  return 1;
}

