// FUN_008cb2b0 @ 008cb2b0 body=[[008cb2b0, 008cb2e6]]


uint FUN_008cb2b0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (uVar1 = *(uint *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4),
     (*(int *)(uVar1 + 0x158) != 0) == (bool)*(char *)(in_ECX + 0x1c))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

