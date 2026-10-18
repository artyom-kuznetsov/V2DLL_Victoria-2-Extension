// FUN_009012c0 @ 009012c0 body=[[009012c0, 00901300]]


uint FUN_009012c0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = *(uint *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) +
                     0x354);
    if (*(int *)(DAT_012588e8 + 0xb0c) < (int)(uVar1 + *(int *)(in_ECX + 0x1c) * 0x18)) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}

