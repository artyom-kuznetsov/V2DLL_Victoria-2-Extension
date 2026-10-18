// FUN_008ca9e0 @ 008ca9e0 body=[[008ca9e0, 008caa12]]


uint FUN_008ca9e0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (uVar1 = *(uint *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4),
     *(char *)(uVar1 + 0x170) == *(char *)(in_ECX + 0x1c))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

