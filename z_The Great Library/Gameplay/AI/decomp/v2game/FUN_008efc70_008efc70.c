// FUN_008efc70 @ 008efc70 body=[[008efc70, 008efcb7]]


uint FUN_008efc70(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = **(uint **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xa0);
  if ((*(int *)(in_ECX + 0x24) <= *(int *)(uVar1 + 0x14)) &&
     ((*(int *)(in_ECX + 0x24) < *(int *)(uVar1 + 0x14) ||
      (uVar1 = *(uint *)(uVar1 + 0x10), *(uint *)(in_ECX + 0x20) <= uVar1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

