// FUN_008e6bd0 @ 008e6bd0 body=[[008e6bd0, 008e6bfc]]


uint FUN_008e6bd0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((*(int *)(in_ECX + 0x24) <= *(int *)(uVar1 + 0x144)) &&
     ((*(int *)(in_ECX + 0x24) < *(int *)(uVar1 + 0x144) ||
      (uVar1 = *(uint *)(uVar1 + 0x140), *(uint *)(in_ECX + 0x20) <= uVar1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

