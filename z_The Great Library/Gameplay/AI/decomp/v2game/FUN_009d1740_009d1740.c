// FUN_009d1740 @ 009d1740 body=[[009d1740, 009d17aa]]


void FUN_009d1740(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258ab8 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0xb0);
    local_8 = 0;
    if (iVar1 != 0) {
      DAT_01258ab8 = FUN_009d1290(iVar1);
      ExceptionList = local_10;
      return;
    }
    DAT_01258ab8 = 0;
  }
  ExceptionList = local_10;
  return;
}

