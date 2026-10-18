// FUN_008e2c90 @ 008e2c90 body=[[008e2c90, 008e2e01]]


uint FUN_008e2c90(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  bool bVar4;
  undefined4 local_1c;
  
  local_1c = *(uint *)(in_ECX + 0x1c);
  iVar3 = 0;
  if (*(char *)(in_ECX + 0x20) != '\0') {
    iVar1 = DAT_01258a94;
    if (*(uint *)(param_1 + 0x38) < 0x1269) {
      iVar1 = DAT_01258a98;
    }
    if (iVar1 != 0) {
      iVar1 = FUN_009c1d40();
      if (iVar1 != 0) {
        local_1c = *(uint *)(*(int *)(iVar1 + 0x4c) + 0x50);
      }
    }
  }
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) != '\0') {
      iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    iVar3 = FUN_008a8dc0();
    iVar3 = *(int *)(iVar3 + 4);
  }
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar2 = *(uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xe64);
      if (*(uint *)(uVar2 + 0x50) == local_1c) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      goto LAB_008e2df7;
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if ((char)uVar2 == '\0') goto LAB_008e2df7;
    bVar4 = *(uint *)(*(int *)(*(int *)(param_1 + 0x14) + 0x6c) + 0x50) == local_1c;
  }
  else {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar2 = *(uint *)(*(int *)(DAT_012587e4 + 4) + iVar3 * 4);
      if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                           0xe64) + 0x50) == *(int *)(*(int *)(uVar2 + 0xe64) + 0x50)) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      goto LAB_008e2df7;
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if ((char)uVar2 == '\0') goto LAB_008e2df7;
    local_1c = *(uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar3 * 4) + 0xe64);
    bVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x6c) + 0x50) == *(int *)(local_1c + 0x50);
  }
  uVar2 = local_1c;
  if (bVar4) {
    return CONCAT31((int3)(local_1c >> 8),1);
  }
LAB_008e2df7:
  return uVar2 & 0xffffff00;
}

