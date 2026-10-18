// FUN_00632b40 @ 00632b40 body=[[00632b40, 00632c13]]


void FUN_00632b40(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int unaff_ESI;
  undefined4 uVar5;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar2 = FUN_00aae9af(0x9c);
  uVar5 = 0;
  local_c = 0;
  if (iVar2 != 0) {
    uVar5 = FUN_006321a0(iVar2,param_1,unaff_ESI,param_2);
  }
  local_c = 0xffffffff;
  iVar2 = *(int *)(unaff_ESI + 8);
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = uVar5;
    puVar3[1] = iVar2;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0xc);
  *(undefined4 **)(unaff_ESI + 8) = puVar3;
  *(int *)(unaff_ESI + 0xc) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_ESI + 4) = puVar3;
  }
  else {
    *(undefined4 **)(iVar2 + 8) = puVar3;
  }
  piVar4 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x34))();
  (**(code **)(*piVar4 + 0x48))(&DAT_00f0bafc);
  FUN_006332e0(unaff_ESI);
  (**(code **)(*param_1 + 0x48))();
  ExceptionList = pvStack_18;
  return;
}

