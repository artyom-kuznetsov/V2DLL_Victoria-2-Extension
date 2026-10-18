// FUN_0089fc90 @ 0089fc90 body=[[0089fc90, 0089fde3]]


void FUN_0089fc90(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *unaff_ESI;
  int unaff_EDI;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar2 == '\0') {
    *(undefined4 *)unaff_ESI = 0;
    *(undefined4 *)((int)unaff_ESI + 4) = 0;
    return;
  }
  if (*(int *)(unaff_EDI + 0x28) == 0) {
LAB_0089fd1c:
    if (*(int *)(unaff_EDI + 0x2c) != 0) {
      cVar2 = (**(code **)(**(int **)(unaff_EDI + 0x2c) + 0x34))();
      if (cVar2 != '\0') {
        uVar6 = *(undefined4 *)(unaff_EDI + 0x24);
        iVar5 = *(int *)(*(int *)(unaff_EDI + 0x2c) + 0x50);
        uVar9 = *(undefined4 *)(unaff_EDI + 0x20);
        iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0xa4);
        goto LAB_0089fce9;
      }
    }
    iVar5 = *(int *)(param_1 + 0x14);
    if ((*(int *)(iVar5 + 0x58) == 0) || (*(char *)(*(int *)(iVar5 + 0x68) + 0x40) == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar1 = *(uint *)(iVar5 + 0x58);
      uVar4 = uVar1 - *(int *)(iVar5 + 0x60);
      uVar8 = __alldiv(uVar4 * 0x40000000,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,uVar1 << 0xf,
                       ((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
    }
    lVar7 = __allmul(*(undefined4 *)(unaff_EDI + 0x30),*(undefined4 *)(unaff_EDI + 0x34),
                     *(undefined4 *)(unaff_EDI + 0x20),*(undefined4 *)(unaff_EDI + 0x24));
    *(int *)unaff_ESI = (int)(lVar7 >> 0xf);
    uVar9 = (undefined4)*unaff_ESI;
    uVar6 = (undefined4)((ulonglong)(lVar7 >> 0xf) >> 0x20);
  }
  else {
    cVar2 = (**(code **)(**(int **)(unaff_EDI + 0x28) + 0x20))();
    if (cVar2 == '\0') goto LAB_0089fd1c;
    uVar6 = *(undefined4 *)(unaff_EDI + 0x24);
    iVar5 = *(int *)(*(int *)(unaff_EDI + 0x28) + 0x28);
    uVar9 = *(undefined4 *)(unaff_EDI + 0x20);
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x7c);
LAB_0089fce9:
    lVar7 = __allmul(*(undefined4 *)(iVar3 + iVar5 * 8),*(undefined4 *)(iVar3 + 4 + iVar5 * 8),uVar9
                     ,uVar6);
    *unaff_ESI = lVar7 >> 0xf;
    uVar8 = FUN_00b31c36();
    uVar6 = *(undefined4 *)((int)unaff_ESI + 4);
    uVar9 = (undefined4)*unaff_ESI;
  }
  lVar7 = __allmul(uVar9,uVar6,uVar8);
  *unaff_ESI = lVar7 >> 0xf;
  return;
}

