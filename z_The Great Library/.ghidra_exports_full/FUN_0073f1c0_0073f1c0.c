// FUN_0073f1c0 @ 0073f1c0 body=[[0073f1c0, 0073f254]]


void FUN_0073f1c0(void)

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
  FUN_00409350("province_buildings",0x12);
  local_8 = 0xffffffff;
  FUN_0073cd50(0);
  ExceptionList = local_10;
  return;
}

