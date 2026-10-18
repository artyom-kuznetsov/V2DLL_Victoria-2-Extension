// FUN_00979200 @ 00979200 body=[[00979200, 0097926b]]


void FUN_00979200(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258a50 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x70);
    local_8 = 0;
    if (iVar1 != 0) {
      DAT_01258a50 = FUN_00979190();
      ExceptionList = local_10;
      return;
    }
    DAT_01258a50 = 0;
  }
  ExceptionList = local_10;
  return;
}

