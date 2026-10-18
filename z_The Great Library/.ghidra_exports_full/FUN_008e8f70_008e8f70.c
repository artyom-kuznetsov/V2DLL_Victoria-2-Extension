// FUN_008e8f70 @ 008e8f70 body=[[008e8f70, 008e8fec]]


uint FUN_008e8f70(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x10) < 1) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 100);
    }
    else {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    }
    iVar1 = *(int *)(iVar1 + 300);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0x1234) + 0xc);
  if ((*(int *)(in_ECX + 0x24) <= *(int *)(uVar2 + 0xc)) &&
     ((*(int *)(in_ECX + 0x24) < *(int *)(uVar2 + 0xc) ||
      (uVar2 = *(uint *)(uVar2 + 8), *(uint *)(in_ECX + 0x20) <= uVar2)))) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}

