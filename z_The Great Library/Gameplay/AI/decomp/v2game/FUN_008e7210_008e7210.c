// FUN_008e7210 @ 008e7210 body=[[008e7210, 008e7472]]


bool FUN_008e7210(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  undefined8 uVar5;
  uint local_10;
  int iStack_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x10) < 1) {
        cVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
        if (cVar3 == '\0') {
          return false;
        }
        iVar1 = *(int *)(param_1 + 0x14);
        if ((*(int *)(iVar1 + 0x58) != 0) && (*(char *)(*(int *)(iVar1 + 0x68) + 0x40) != '\0')) {
          uVar2 = *(uint *)(iVar1 + 0x58);
          uVar4 = uVar2 - *(int *)(iVar1 + 0x60);
          __alldiv(uVar4 * 0x40000000,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,uVar2 << 0xf,
                   ((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11);
        }
        cVar3 = FUN_0043e920();
        return cVar3 != '\0';
      }
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
      uVar2 = *(uint *)(iVar1 + 0x1a8);
      if (uVar2 == 0) {
        iStack_c = 0;
        local_10 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + 0x1b8);
        uVar5 = __alldiv(uVar4 << 0x1e,uVar4 >> 2,uVar2 << 0xf,uVar2 >> 0x11);
        local_10 = 0x8000 - (uint)uVar5;
        iStack_c = -(uint)(0x8000 < (uint)uVar5) - (int)((ulonglong)uVar5 >> 0x20);
      }
      if ((iStack_c <= *(int *)(in_ECX + 0x24)) &&
         ((iStack_c < *(int *)(in_ECX + 0x24) || (local_10 < *(uint *)(in_ECX + 0x20))))) {
        return false;
      }
      return true;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
    uVar2 = *(uint *)(iVar1 + 200);
    if (uVar2 == 0) {
      iStack_c = 0;
      local_10 = 0;
    }
    else {
      uVar4 = *(uint *)(iVar1 + 0xd8);
      uVar5 = __alldiv(uVar4 << 0x1e,uVar4 >> 2,uVar2 << 0xf,uVar2 >> 0x11);
      local_10 = 0x8000 - (uint)uVar5;
      iStack_c = -(uint)(0x8000 < (uint)uVar5) - (int)((ulonglong)uVar5 >> 0x20);
    }
    if (iStack_c <= *(int *)(in_ECX + 0x24)) {
      if (iStack_c < *(int *)(in_ECX + 0x24)) {
        return false;
      }
      if (local_10 < *(uint *)(in_ECX + 0x20)) {
        return false;
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    uVar2 = *(uint *)(iVar1 + 0x12e8);
    if (uVar2 == 0) {
      iStack_c = 0;
      local_10 = 0;
    }
    else {
      uVar4 = *(uint *)(iVar1 + 0x12f8);
      uVar5 = __alldiv(uVar4 << 0x1e,uVar4 >> 2,uVar2 << 0xf,uVar2 >> 0x11);
      local_10 = 0x8000 - (uint)uVar5;
      iStack_c = -(uint)(0x8000 < (uint)uVar5) - (int)((ulonglong)uVar5 >> 0x20);
    }
    if ((iStack_c <= *(int *)(in_ECX + 0x24)) &&
       ((iStack_c < *(int *)(in_ECX + 0x24) || (local_10 < *(uint *)(in_ECX + 0x20))))) {
      return false;
    }
  }
  return true;
}

