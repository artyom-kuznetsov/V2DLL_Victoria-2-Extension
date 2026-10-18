// FUN_009c2d80 @ 009c2d80 body=[[009c2d80, 009c2de7]]


void FUN_009c2d80(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258aa4 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x70);
    local_8 = 0;
    if (iVar1 != 0) {
      DAT_01258aa4 = FUN_009c1ee0(iVar1);
      ExceptionList = local_10;
      return;
    }
    DAT_01258aa4 = 0;
  }
  ExceptionList = local_10;
  return;
}

