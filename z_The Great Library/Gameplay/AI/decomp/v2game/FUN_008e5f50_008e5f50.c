// FUN_008e5f50 @ 008e5f50 body=[[008e5f50, 008e5f7c]]


uint FUN_008e5f50(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((*(int *)(in_ECX + 0x24) <= *(int *)(uVar1 + 0x134)) &&
     ((*(int *)(in_ECX + 0x24) < *(int *)(uVar1 + 0x134) ||
      (uVar1 = *(uint *)(uVar1 + 0x130), *(uint *)(in_ECX + 0x20) <= uVar1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

