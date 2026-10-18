// FUN_00901350 @ 00901350 body=[[00901350, 00901390]]


uint FUN_00901350(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = *(uint *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) +
                     0x358);
    if ((int)(uVar1 + *(int *)(in_ECX + 0x1c) * 0x18) <= *(int *)(DAT_012588e8 + 0xb0c)) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}

