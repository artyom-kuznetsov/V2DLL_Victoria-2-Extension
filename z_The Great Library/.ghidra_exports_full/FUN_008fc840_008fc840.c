// FUN_008fc840 @ 008fc840 body=[[008fc840, 008fc9d8]]


undefined4 FUN_008fc840(int param_1)

{
  char cVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
      uVar2 = *(uint *)(iVar3 + 0x1a8);
      if (uVar2 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar3 + 0x1d0);
      goto LAB_008fc887;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = FUN_0043e920();
      if (cVar1 != '\0') {
        return 1;
      }
      return 0;
    }
    uVar2 = *(uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x12e8) /
            10000;
    if (uVar2 == 0) {
      uVar5 = 0;
      goto LAB_008fc8ab;
    }
    uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                              0x1310) + *(int *)(*(int *)(in_ECX + 0x28) + 0x50) * 4) / 10000;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
    uVar2 = *(uint *)(iVar3 + 200);
    if (uVar2 == 0) {
      return 0;
    }
    iVar3 = *(int *)(iVar3 + 0xf0);
LAB_008fc887:
    uVar4 = *(uint *)(iVar3 + *(int *)(*(int *)(in_ECX + 0x28) + 0x50) * 4);
  }
  uVar5 = __alldiv(uVar4 << 0x1e,uVar4 >> 2,uVar2 << 0xf,uVar2 >> 0x11);
LAB_008fc8ab:
  lVar6 = __allmul(uVar5,0x320000,0);
  iVar3 = (int)((ulonglong)(lVar6 >> 0xf) >> 0x20);
  if ((*(int *)(in_ECX + 0x24) <= iVar3) &&
     ((*(int *)(in_ECX + 0x24) < iVar3 || (*(uint *)(in_ECX + 0x20) <= (uint)(lVar6 >> 0xf))))) {
    return 1;
  }
  return 0;
}

