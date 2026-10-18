// FUN_00a3eb40 @ 00a3eb40 body=[[00a3eb40, 00a3eb94]]


void FUN_00a3eb40(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x160);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00a7bfa0(param_1);
  }
  ExceptionList = local_10;
  return;
}

