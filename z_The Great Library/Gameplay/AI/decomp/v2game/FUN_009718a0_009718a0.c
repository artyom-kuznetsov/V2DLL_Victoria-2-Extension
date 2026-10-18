// FUN_009718a0 @ 009718a0 body=[[009718a0, 0097190d]]


void FUN_009718a0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258a30 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x7c);
    local_8 = 0;
    if (iVar1 != 0) {
      DAT_01258a30 = FUN_009717f0();
      ExceptionList = local_10;
      return;
    }
    DAT_01258a30 = 0;
  }
  ExceptionList = local_10;
  return;
}

