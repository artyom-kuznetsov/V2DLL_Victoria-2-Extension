// FUN_008ff830 @ 008ff830 body=[[008ff830, 008ffa05]]


ulonglong FUN_008ff830(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint local_10;
  int iStack_c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0xc) == 0) {
        uVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
        if ((char)uVar6 == '\0') {
          return uVar6 & 0xffffffffffffff00;
        }
        iVar4 = *(int *)(*(int *)(in_ECX + 0x28) + 0x28);
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 0x188);
        uVar2 = *(uint *)(*(int *)(iVar3 + 0x118) + iVar4 * 4);
        if (uVar2 == 0) {
          uVar6 = FUN_0043e920();
          return uVar6;
        }
        uVar1 = *(uint *)(*(int *)(iVar3 + 0x120) + iVar4 * 4);
        __alldiv(uVar1 << 0x1e,uVar1 >> 2,uVar2 << 0xf,uVar2 >> 0x11);
        uVar6 = FUN_0043e920();
        return uVar6;
      }
      iVar4 = *(int *)(*(int *)(in_ECX + 0x28) + 0x28);
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
      uVar2 = *(uint *)(*(int *)(iVar3 + 0x1338) + iVar4 * 4);
      if (uVar2 != 0) {
        iVar3 = *(int *)(iVar3 + 0x1340);
        goto LAB_008ff887;
      }
    }
    else {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x28) + 0x28);
      iVar3 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) +
                      0x188);
      uVar2 = *(uint *)(*(int *)(iVar3 + 0x118) + iVar4 * 4);
      if (uVar2 != 0) {
        iVar3 = *(int *)(iVar3 + 0x120);
LAB_008ff887:
        uVar1 = *(uint *)(iVar3 + iVar4 * 4);
        uVar5 = __alldiv(uVar1 << 0x1e,uVar1 >> 2,uVar2 << 0xf,uVar2 >> 0x11);
        local_10 = 0x8000 - (uint)uVar5;
        iStack_c = -(uint)(0x8000 < (uint)uVar5) - (int)((ulonglong)uVar5 >> 0x20);
        goto LAB_008ff8b3;
      }
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x28) + 0x28);
    iVar3 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(param_1 + 0x10) * 4);
    uVar2 = *(uint *)(*(int *)(iVar3 + 0x1f8) + iVar4 * 4);
    if (uVar2 != 0) {
      iVar3 = *(int *)(iVar3 + 0x200);
      goto LAB_008ff887;
    }
  }
  iStack_c = 0;
  local_10 = 0;
LAB_008ff8b3:
  if ((iStack_c <= *(int *)(in_ECX + 0x24)) &&
     ((iStack_c < *(int *)(in_ECX + 0x24) || (local_10 < *(uint *)(in_ECX + 0x20))))) {
    return 0;
  }
  return 1;
}

