// FUN_008c20b0 @ 008c20b0 body=[[008c20b0, 008c2127]]


uint FUN_008c20b0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if ((char)uVar1 == '\0') goto LAB_008c211e;
    uVar1 = *(uint *)(*(int *)(DAT_012587e4 + 4) +
                     *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300) * 4);
  }
  else {
    uVar1 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  }
  if (*(int *)(uVar1 + 0xbd0) == *(int *)(in_ECX + 0x1c)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
LAB_008c211e:
  return uVar1 & 0xffffff00;
}

