// FUN_0067d940 @ 0067d940 body=[[0067d940, 0067d9bd]]


void FUN_0067d940(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_012588e8 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (**(code **)*DAT_012588e8)(1);
    DAT_012588e8 = (undefined4 *)0x0;
  }
  iVar1 = FUN_00aae9af(0xd28);
  local_8 = 0;
  if (iVar1 != 0) {
    DAT_012588e8 = (undefined4 *)FUN_0067d9c0(iVar1);
    ExceptionList = local_10;
    return;
  }
  DAT_012588e8 = (undefined4 *)0x0;
  ExceptionList = local_10;
  return;
}

