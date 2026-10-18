// FUN_008dda40 @ 008dda40 body=[[008dda40, 008dda85]]


uint FUN_008dda40(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  if ((*(int *)(in_ECX + 0x24) <= *(int *)(uVar1 + 0xe7c)) &&
     ((*(int *)(in_ECX + 0x24) < *(int *)(uVar1 + 0xe7c) ||
      (uVar1 = *(uint *)(uVar1 + 0xe78), *(uint *)(in_ECX + 0x20) <= uVar1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

