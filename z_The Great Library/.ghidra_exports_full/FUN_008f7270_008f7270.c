// FUN_008f7270 @ 008f7270 body=[[008f7270, 008f7354]]


uint FUN_008f7270(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x10) == 0) goto LAB_008f734c;
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
      local_10 = *(int *)(iVar1 + 0x130);
      iVar3 = iVar1 + 0x1a8;
      iVar1 = *(int *)(iVar1 + 0x134);
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) +
                      0x188);
      local_10 = *(int *)(iVar3 + 0x58);
      iVar1 = *(int *)(iVar3 + 0x5c);
      iVar3 = iVar3 + 200;
    }
    uVar2 = *(uint *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
  }
  else {
    local_10 = *(int *)(param_1 + 8);
    uVar2 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    iVar3 = uVar2 + 0x12e8;
  }
  if ((iVar3 != 0) && (uVar2 != 0)) {
    FUN_0096a200(&local_10);
    if (*(char *)(in_ECX + 0x1c) == '\0') {
      if (local_10 == 0 && local_c == 0) {
        return 1;
      }
    }
    else if ((-1 < local_c) && ((0 < local_c || (local_10 != 0)))) {
      return 1;
    }
    return 0;
  }
LAB_008f734c:
  return uVar2 & 0xffffff00;
}

