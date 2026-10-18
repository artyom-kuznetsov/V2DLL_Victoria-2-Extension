// FUN_00ae86d0 @ 00ae86d0 body=[[00ae86d0, 00ae874f]]


undefined4 FUN_00ae86d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b37f5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iStack_10 = (*(code *)PTR_FUN_00f01b08)
                        (0x1c,0xcb,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&iStack_10);
  uStack_4 = 0;
  if (iStack_10 != 0) {
    uVar1 = FUN_00b0e590(param_1,param_2);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = local_c;
  return 0;
}

