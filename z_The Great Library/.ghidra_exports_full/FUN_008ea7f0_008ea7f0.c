// FUN_008ea7f0 @ 008ea7f0 body=[[008ea7f0, 008ea853]]


undefined4 FUN_008ea7f0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x10) < 1) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 100);
    }
    else {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    }
    iVar1 = *(int *)(iVar1 + 300);
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(iVar1 + 0x12b0) == *(int *)(in_ECX + 0x1c));
}

