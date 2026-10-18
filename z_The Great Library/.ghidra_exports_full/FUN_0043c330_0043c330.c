// FUN_0043c330 @ 0043c330 body=[[0043c330, 0043c383]]


void FUN_0043c330(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b1c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CFlags::vftable;
  param_1[9] = CFlags::vftable;
  local_8 = 0;
  FUN_0043c390();
  local_8 = 0xffffffff;
  FUN_0043c580();
  ExceptionList = local_10;
  return;
}

