// FUN_00435ea0 @ 00435ea0 body=[[00435ea0, 00435f01]]


void FUN_00435ea0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x404);
  local_8 = 0;
  if (iVar1 != 0) {
    DAT_012586e0 = FUN_00435f10(iVar1);
    ExceptionList = local_10;
    return;
  }
  DAT_012586e0 = 0;
  ExceptionList = local_10;
  return;
}

