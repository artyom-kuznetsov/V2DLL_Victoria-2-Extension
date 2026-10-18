// FUN_0076b930 @ 0076b930 body=[[0076b930, 0076ba5c]]


void FUN_0076b930(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  puVar2 = (undefined4 *)(unaff_EDI + 0x308);
  *puVar2 = *(undefined4 *)(unaff_EDI + 0x30c);
  FUN_005edf10(puVar2);
  *(undefined4 *)(DAT_012588e8 + 0xb0c) = *puVar2;
  FUN_00688050();
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
  FUN_007fcbd0(iVar1 + 0x20bc);
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
  FUN_00819830();
  iVar1 = FUN_00475500();
  *(undefined4 *)(iVar1 + 0xec) = 0xff9a;
  iVar1 = FUN_00475500();
  *(undefined4 *)(iVar1 + 0xf0) = 2;
  puVar2 = (undefined4 *)FUN_00754640();
  iVar1 = FUN_00aae9af(0xf0);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0072ab10(iVar1,*puVar2);
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  ExceptionList = local_10;
  return;
}

