// FUN_006a88f0 @ 006a88f0 body=[[006a88f0, 006a8a34]]


bool FUN_006a88f0(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int *in_EAX;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *unaff_EDI;
  undefined1 local_8 [4];
  
  piVar3 = param_1;
  iVar6 = *in_EAX;
  if (iVar6 != 0) {
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        piVar3 = (int *)(**(code **)(*param_1 + 0x50))(&param_1);
        piVar4 = (int *)(**(code **)(*unaff_EDI + 0x50))(local_8);
        return *piVar4 < *piVar3;
      }
      return false;
    }
    puVar5 = (undefined4 *)(**(code **)(*unaff_EDI + 0x20))();
    if (0xf < (uint)puVar5[5]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    iVar6 = FUN_00aaf0c5(puVar5);
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x20))();
    if (0xf < (uint)puVar5[5]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    iVar7 = FUN_00aaf0c5(puVar5);
    if (iVar6 != iVar7) {
      return iVar6 < iVar7;
    }
    (**(code **)(*piVar3 + 0x20))();
    (**(code **)(*unaff_EDI + 0x20))();
    uVar1 = FUN_0098ab20();
    return (bool)uVar1;
  }
  cVar2 = FUN_005cc390();
  if ((cVar2 == '\0') && (cVar2 = FUN_005cc390(), cVar2 != '\0')) {
    return true;
  }
  piVar4 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                    0x7b4);
  if (piVar4 != (int *)0x0) {
    iVar6 = 0;
    piVar8 = piVar4;
    do {
      if (unaff_EDI == (int *)*piVar8) goto LAB_006a8a0f;
      piVar8 = (int *)piVar8[2];
      iVar6 = iVar6 + 1;
    } while (piVar8 != (int *)0x0);
  }
  iVar6 = -1;
LAB_006a8a0f:
  iVar7 = 0;
  for (; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    if (piVar3 == (int *)*piVar4) goto LAB_006a8a26;
    iVar7 = iVar7 + 1;
  }
  iVar7 = -1;
LAB_006a8a26:
  return iVar6 < iVar7;
}

