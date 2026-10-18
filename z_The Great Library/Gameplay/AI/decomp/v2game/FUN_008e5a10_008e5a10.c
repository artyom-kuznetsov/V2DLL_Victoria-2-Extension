// FUN_008e5a10 @ 008e5a10 body=[[008e5a10, 008e5adb]]


undefined4 FUN_008e5a10(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar2 != '\0') {
    iVar5 = *(int *)(param_1 + 0x14);
    uVar1 = *(uint *)(iVar5 + 0x180);
    iVar4 = *(int *)(iVar5 + 0x260);
    iVar3 = *(int *)(iVar5 + 0x264);
    if ((iVar3 < 1) && (iVar3 < 0)) {
      bVar6 = iVar4 != 0;
      iVar4 = -iVar4;
      iVar3 = -(iVar3 + (uint)bVar6);
    }
    if (iVar4 == 0 && iVar3 == 0) {
      if (uVar1 != 0 || *(int *)(iVar5 + 0x184) != 0) {
        uVar7 = FUN_00b31c36();
        iVar5 = (int)((ulonglong)uVar7 >> 0x20);
        if ((*(int *)(in_ECX + 0x24) <= iVar5) &&
           ((*(int *)(in_ECX + 0x24) < iVar5 || (*(uint *)(in_ECX + 0x20) < (uint)uVar7)))) {
          return 1;
        }
        return 0;
      }
    }
    else {
      uVar7 = __alldiv(uVar1 << 0xf,*(int *)(iVar5 + 0x184) << 0xf | uVar1 >> 0x11,iVar4,iVar3);
      iVar5 = (int)((ulonglong)uVar7 >> 0x20);
      if ((*(int *)(in_ECX + 0x24) <= iVar5) &&
         ((*(int *)(in_ECX + 0x24) < iVar5 || (*(uint *)(in_ECX + 0x20) <= (uint)uVar7)))) {
        return 1;
      }
    }
  }
  return 0;
}

