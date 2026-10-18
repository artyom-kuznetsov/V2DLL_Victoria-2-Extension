// FUN_008bbf00 @ 008bbf00 body=[[008bbf00, 008bbf8a]]


uint FUN_008bbf00(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if ((char)uVar1 != '\0') {
      uVar1 = *(uint *)(*(int *)(DAT_012587e4 + 4) +
                       *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300) * 4);
      if (*(int *)(in_ECX + 0x1c) <= *(int *)(uVar1 + 0x4d4)) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
    }
  }
  else {
    uVar1 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    if (*(int *)(in_ECX + 0x1c) <= *(int *)(uVar1 + 0x4d4)) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}

