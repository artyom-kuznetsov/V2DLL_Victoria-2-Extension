// FUN_0073f110 @ 0073f110 body=[[0073f110, 0073f1bf]]


void FUN_0073f110(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b503c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00409350("province_buildings",0x12);
  local_8 = 0xffffffff;
  FUN_0073cba0(1,*(undefined4 *)(in_ECX + 0x24));
  ExceptionList = local_10;
  return;
}

