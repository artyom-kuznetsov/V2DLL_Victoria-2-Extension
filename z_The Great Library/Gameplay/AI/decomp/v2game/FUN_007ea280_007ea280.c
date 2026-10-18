// FUN_007ea280 @ 007ea280 body=[[007ea280, 007ea2d9]]


void FUN_007ea280(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x1ac);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00817110(DAT_012589b8);
  }
  ExceptionList = local_10;
  return;
}

