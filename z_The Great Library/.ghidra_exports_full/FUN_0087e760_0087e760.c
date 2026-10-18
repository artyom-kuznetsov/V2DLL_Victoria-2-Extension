// FUN_0087e760 @ 0087e760 body=[[0087e760, 0087e8b3]]


void FUN_0087e760(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  
  local_18 = *(undefined4 *)(param_1 + 8);
  local_14 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(in_ECX + 0x28);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (*(char *)(in_ECX + 0x1d) != '\0') {
    iVar1 = *(int *)(param_1 + 0x34);
  }
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4);
  if (*(int *)(in_ECX + 0x24) != 0) {
    local_18 = *(undefined4 *)(in_ECX + 0x20);
    local_14 = *(int *)(in_ECX + 0x24);
  }
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    if (((*(char *)(in_ECX + 0x20) == 'R') && (*(char *)(in_ECX + 0x21) == 'E')) &&
       (*(char *)(in_ECX + 0x22) == 'B')) {
      local_10 = *(uint *)(param_1 + 0x38);
      local_c = *(undefined4 *)(param_1 + 0x3c);
      iVar3 = DAT_01258a94;
      if (local_10 < 0x1269) {
        iVar3 = DAT_01258a98;
      }
      if ((iVar3 != 0) && (iVar3 = FUN_009c1d40(), iVar3 != 0)) {
        if (*(int *)(*(int *)(iVar3 + 0x30) + 0x100) == 6) {
          if (*(int *)(*(int *)(iVar3 + 0x30) + 0xfc) != 6) {
            puVar2 = (undefined4 *)FUN_004e4d40(iVar3,&local_10,iVar1);
            local_18 = *puVar2;
            local_14 = puVar2[1];
          }
        }
        else {
          local_18 = *(undefined4 *)(iVar3 + 0x44);
          local_14 = *(int *)(iVar3 + 0x48);
        }
      }
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_008a8dc0();
    local_18 = *puVar2;
    local_14 = puVar2[1];
  }
  if (local_14 != 0) {
    iVar3 = *(int *)(iVar1 + 0x14c);
    iVar4 = *(int *)(iVar1 + 0x148);
    if (iVar4 != iVar3) {
      do {
        if (*(int *)(iVar4 + 4) == local_14) break;
        iVar4 = iVar4 + 8;
      } while (iVar4 != iVar3);
      if (iVar4 != iVar3) {
        return;
      }
    }
    FUN_004b61a0(iVar1,&local_18,1);
    *(undefined1 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_14 * 4) + 0x1434) = 1;
  }
  return;
}

