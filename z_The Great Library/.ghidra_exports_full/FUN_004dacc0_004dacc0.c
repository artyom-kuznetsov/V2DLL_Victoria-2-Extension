// FUN_004dacc0 @ 004dacc0 body=[[004dacc0, 004dad30]]


void FUN_004dacc0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258730 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x140);
    local_8 = 0;
    if (iVar1 != 0) {
      DAT_01258730 = FUN_004dac50();
      ExceptionList = local_10;
      return;
    }
    DAT_01258730 = 0;
  }
  ExceptionList = local_10;
  return;
}

