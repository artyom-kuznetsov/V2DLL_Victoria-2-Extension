// FUN_008e3a30 @ 008e3a30 body=[[008e3a30, 008e3b06]]


ulonglong FUN_008e3a30(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_1c;
  
  iVar2 = DAT_00f0dddc;
  local_1c = *(int *)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x20) != '\0') {
    iVar1 = DAT_01258a94;
    if (*(uint *)(param_1 + 0x38) < 0x1269) {
      iVar1 = DAT_01258a98;
    }
    if (iVar1 != 0) {
      iVar1 = FUN_009c1d40();
      if (iVar1 != 0) {
        local_1c = *(int *)(iVar1 + 0x50);
      }
    }
  }
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) != '\0') {
      iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    iVar2 = FUN_008a8dc0();
    iVar2 = *(int *)(iVar2 + 4);
  }
  if (iVar2 != 0) {
    return (ulonglong)
           CONCAT31((int3)((uint)*(int *)(param_1 + 0x14) >> 8),
                    *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4) + 0xe68) ==
                    *(int *)(*(int *)(param_1 + 0x14) + 0x70));
  }
  return CONCAT44(local_1c,CONCAT31((int3)((uint)*(int *)(param_1 + 0x14) >> 8),
                                    local_1c == *(int *)(*(int *)(param_1 + 0x14) + 0x70)));
}

