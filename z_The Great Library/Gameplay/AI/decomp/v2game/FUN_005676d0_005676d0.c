// FUN_005676d0 @ 005676d0 body=[[005676d0, 00567737]]


void FUN_005676d0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_0125880c == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x74);
    local_8 = 0;
    if (iVar1 != 0) {
      DAT_0125880c = FUN_00567560(iVar1);
      ExceptionList = local_10;
      return;
    }
    DAT_0125880c = 0;
  }
  ExceptionList = local_10;
  return;
}

