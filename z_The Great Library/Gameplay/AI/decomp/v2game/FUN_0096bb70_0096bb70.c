// FUN_0096bb70 @ 0096bb70 body=[[0096bb70, 0096bbe7]]


void FUN_0096bb70(void)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  if (DAT_01258a2c == 0) {
    ExceptionList = &local_14;
    iVar1 = FUN_00aae9af(0x3f0);
    local_c = 0;
    if (iVar1 != 0) {
      DAT_01258a2c = FUN_0096bbf0();
      ExceptionList = local_14;
      return;
    }
    DAT_01258a2c = 0;
  }
  ExceptionList = local_14;
  return;
}

