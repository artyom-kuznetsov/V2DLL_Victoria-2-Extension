// FUN_005c3e00 @ 005c3e00 body=[[005c3e00, 005c3e6a]]


void FUN_005c3e00(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258828 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x2c);
    local_8 = 0;
    if (iVar1 != 0) {
      DAT_01258828 = FUN_004dada0();
      ExceptionList = local_10;
      return;
    }
    DAT_01258828 = 0;
  }
  ExceptionList = local_10;
  return;
}

