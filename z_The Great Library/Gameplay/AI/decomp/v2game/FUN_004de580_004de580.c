// FUN_004de580 @ 004de580 body=[[004de580, 004de5ea]]


void FUN_004de580(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258734 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x170);
    local_8 = 0;
    if (iVar1 != 0) {
      DAT_01258734 = FUN_004de5f0(iVar1);
      ExceptionList = local_10;
      return;
    }
    DAT_01258734 = 0;
  }
  ExceptionList = local_10;
  return;
}

