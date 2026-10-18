// FUN_008e7890 @ 008e7890 body=[[008e7890, 008e7ab9]]


bool FUN_008e7890(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint local_10;
  int iStack_c;
  
  iVar3 = *(int *)(in_ECX + 0x28);
  if (*(char *)(in_ECX + 0x18) != '\0') {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x14) + 0x68);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar6 = *(uint *)(in_ECX + 0x20);
    iVar7 = *(int *)(in_ECX + 0x24);
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    uVar5 = *(uint *)(*(int *)(iVar4 + 0x1338) + *(int *)(iVar3 + 0x28) * 4);
    if (uVar5 == 0) {
      iStack_c = 0;
      local_10 = 0;
    }
    else {
      uVar1 = *(uint *)(*(int *)(iVar4 + 0x1340) + *(int *)(iVar3 + 0x28) * 4);
      uVar8 = __alldiv(uVar1 << 0x1e,uVar1 >> 2,uVar5 << 0xf,uVar5 >> 0x11);
      local_10 = 0x8000 - (uint)uVar8;
      iStack_c = -(uint)(0x8000 < (uint)uVar8) - (int)((ulonglong)uVar8 >> 0x20);
    }
    if (iVar7 < iStack_c) {
      return true;
    }
    if ((iVar7 <= iStack_c) && (uVar6 <= local_10)) {
      return true;
    }
    return false;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x10) < 1) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
      if (cVar2 == '\0') {
        return false;
      }
      iVar3 = *(int *)(param_1 + 0x14);
      if ((*(int *)(iVar3 + 0x58) != 0) && (*(char *)(*(int *)(iVar3 + 0x68) + 0x40) != '\0')) {
        uVar6 = *(uint *)(iVar3 + 0x58);
        uVar5 = uVar6 - *(int *)(iVar3 + 0x60);
        __alldiv(uVar5 * 0x40000000,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,uVar6 << 0xf,
                 ((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11);
      }
      cVar2 = FUN_0043e920();
      return cVar2 != '\0';
    }
    iVar3 = *(int *)(iVar3 + 0x28);
    iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    uVar6 = *(uint *)(*(int *)(iVar4 + 0x1f8) + iVar3 * 4);
    uVar5 = *(uint *)(in_ECX + 0x20);
    iVar7 = *(int *)(in_ECX + 0x24);
    if (uVar6 != 0) {
      iVar4 = *(int *)(iVar4 + 0x200);
      goto LAB_008e79af;
    }
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x28);
    iVar4 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
    uVar6 = *(uint *)(*(int *)(iVar4 + 0x118) + iVar3 * 4);
    uVar5 = *(uint *)(in_ECX + 0x20);
    iVar7 = *(int *)(in_ECX + 0x24);
    if (uVar6 != 0) {
      iVar4 = *(int *)(iVar4 + 0x120);
LAB_008e79af:
      uVar1 = *(uint *)(iVar4 + iVar3 * 4);
      uVar8 = __alldiv(uVar1 << 0x1e,uVar1 >> 2,uVar6 << 0xf,uVar6 >> 0x11);
      local_10 = 0x8000 - (uint)uVar8;
      iStack_c = -(uint)(0x8000 < (uint)uVar8) - (int)((ulonglong)uVar8 >> 0x20);
      goto LAB_008e79db;
    }
  }
  iStack_c = 0;
  local_10 = 0;
LAB_008e79db:
  if ((iStack_c <= iVar7) && ((iStack_c < iVar7 || (local_10 < uVar5)))) {
    return false;
  }
  return true;
}

