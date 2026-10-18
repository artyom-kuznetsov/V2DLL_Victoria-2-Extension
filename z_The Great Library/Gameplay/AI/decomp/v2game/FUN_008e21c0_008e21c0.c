// FUN_008e21c0 @ 008e21c0 body=[[008e21c0, 008e2331]]


bool FUN_008e21c0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int local_1c;
  
  local_1c = *(int *)(in_ECX + 0x1c);
  iVar4 = *(int *)(param_1 + 0xc);
  if (*(char *)(in_ECX + 0x20) != '\0') {
    iVar3 = DAT_01258a94;
    if (*(uint *)(param_1 + 0x38) < 0x1269) {
      iVar3 = DAT_01258a98;
    }
    if ((iVar3 != 0) && (iVar3 = FUN_009c1d40(), iVar3 != 0)) {
      local_1c = *(int *)(iVar3 + 0x4c);
    }
  }
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) != '\0') {
      iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    iVar4 = FUN_008a8dc0();
    iVar4 = *(int *)(iVar4 + 4);
  }
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar4 = FUN_009692c0();
      return local_1c == iVar4;
    }
    if (*(int *)(param_1 + 0x10) < 1) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
      if (cVar2 == '\0') {
        return false;
      }
      return local_1c == *(int *)(*(int *)(param_1 + 0x14) + 0x6c);
    }
    iVar4 = FUN_009692c0();
    return local_1c == iVar4;
  }
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x6c);
  if (*(int *)(iVar4 + 0xe64) != iVar3) {
    for (piVar1 = *(int **)(iVar4 + 0xe54); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (*piVar1 == iVar3) {
        return true;
      }
    }
    if (iVar3 != *(int *)(iVar4 + 0xe64)) {
      return false;
    }
  }
  return true;
}

