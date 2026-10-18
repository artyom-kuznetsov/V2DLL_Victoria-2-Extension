// FUN_0073f260 @ 0073f260 body=[[0073f260, 0073f2f4]]


void FUN_0073f260(void)

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
  FUN_0073cd50(1);
  ExceptionList = local_10;
  return;
}

