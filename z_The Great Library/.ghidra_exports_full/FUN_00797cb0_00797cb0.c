// FUN_00797cb0 @ 00797cb0 body=[[00797cb0, 00797d38]]


void FUN_00797cb0(void)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aae9af(0x44);
  uVar2 = 0;
  local_c = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_005ddd50(iVar1,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                         *(undefined4 *)(DAT_012588e8 + 0xb60));
  }
  local_c = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  ExceptionList = pvStack_18;
  return;
}

