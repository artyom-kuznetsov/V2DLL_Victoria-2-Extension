// FUN_00a874c0 @ 00a874c0 body=[[00a874c0, 00a8750a]]


void FUN_00a874c0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a53b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_007e1ad0();
  local_8 = 0xffffffff;
  FUN_00a5c580();
  ExceptionList = local_10;
  return;
}

