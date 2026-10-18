// FUN_008e6590 @ 008e6590 body=[[008e6590, 008e65bc]]


uint FUN_008e6590(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((*(int *)(in_ECX + 0x24) <= *(int *)(uVar1 + 0x13c)) &&
     ((*(int *)(in_ECX + 0x24) < *(int *)(uVar1 + 0x13c) ||
      (uVar1 = *(uint *)(uVar1 + 0x138), *(uint *)(in_ECX + 0x20) <= uVar1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

