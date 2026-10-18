// FUN_00a7d560 @ 00a7d560 body=[[00a7d560, 00a7d5a8]]


void FUN_00a7d560(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a618;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00a7d0c0();
  local_8 = 0xffffffff;
  FUN_00a7c4f0();
  ExceptionList = local_10;
  return;
}

