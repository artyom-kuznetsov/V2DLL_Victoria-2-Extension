// FUN_007508f0 @ 007508f0 body=[[007508f0, 0075098a]]


void FUN_007508f0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56738;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xffffffff;
  FUN_0073cd50(0);
  ExceptionList = local_10;
  return;
}

