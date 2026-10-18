// FUN_0051f990 @ 0051f990 body=[[0051f990, 0051fb57]]


void FUN_0051f990(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int unaff_EDI;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9fb7b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined4 *)(unaff_EDI + 0x130) = 0;
  *(undefined4 *)(unaff_EDI + 0xde8) = 1;
  if (DAT_0125fdd8 == 0) {
    iVar4 = FUN_00aae9af(0x1c);
    local_c = 0;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_008b0060();
    }
    local_c = 0xffffffff;
    FUN_005c2810(uVar5);
  }
  iVar4 = *(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) >> 2;
  if (*(int *)(unaff_EDI + 0x144) - *(int *)(unaff_EDI + 0x140) >> 2 < iVar4) {
    FUN_0068ea30(iVar4);
  }
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      *(undefined4 *)(*(int *)(unaff_EDI + 0x140) + iVar6 * 4) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  piVar7 = *(int **)(unaff_EDI + 0x7b4);
  *(undefined4 *)(unaff_EDI + 0x164) = 0;
  *(undefined4 *)(unaff_EDI + 0x168) = 0;
  *(undefined4 *)(unaff_EDI + 0x170) = 0;
  while (piVar7 != (int *)0x0) {
    piVar2 = (int *)*piVar7;
    piVar7 = (int *)piVar7[2];
    *(int *)(unaff_EDI + 0x130) = *(int *)(unaff_EDI + 0x130) + piVar2[0x10] * 1000;
    cVar3 = (**(code **)(*piVar2 + 0x3c))();
    if (cVar3 != '\0') {
      piVar2 = (int *)piVar2[0xe];
      while (piVar2 != (int *)0x0) {
        iVar4 = *(int *)(*piVar2 + 0x38);
        piVar2 = (int *)piVar2[2];
        piVar1 = (int *)(*(int *)(unaff_EDI + 0x140) + *(int *)(iVar4 + 0x24) * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(unaff_EDI + 0x164) = *(int *)(unaff_EDI + 0x164) + *(int *)(iVar4 + 0xa8);
        *(int *)(unaff_EDI + 0x170) = *(int *)(unaff_EDI + 0x170) + *(int *)(iVar4 + 0xac);
      }
    }
  }
  *(undefined4 *)(unaff_EDI + 0x168) = *(undefined4 *)(unaff_EDI + 0x164);
  piVar7 = *(int **)(unaff_EDI + 0x9d8);
  while ((*(int **)(unaff_EDI + 0x9d8) <= piVar7 && (piVar7 < *(int **)(unaff_EDI + 0x9dc)))) {
    iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar7 * 4);
    piVar7 = piVar7 + 1;
    if (*(int *)(iVar4 + 0xe0) != 0) {
      piVar2 = *(int **)(iVar4 + 0xd8);
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        cVar3 = (**(code **)(*piVar1 + 0x34))();
        if ((cVar3 != '\0') && (iVar4 = piVar1[0x22], *(char *)(iVar4 + 0x3a) != '\0')) {
          piVar1 = (int *)(*(int *)(unaff_EDI + 0x140) + *(int *)(iVar4 + 0x24) * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(unaff_EDI + 0x168) = *(int *)(unaff_EDI + 0x168) + *(int *)(iVar4 + 0xa8);
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

