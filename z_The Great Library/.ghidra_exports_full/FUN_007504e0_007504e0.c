// FUN_007504e0 @ 007504e0 body=[[007504e0, 00750601]]


void FUN_007504e0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4b9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xffffffff;
  FUN_0073c930(0);
  FUN_00409350();
  local_8 = 2;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xffffffff;
  FUN_0073c930(1);
  ExceptionList = local_10;
  return;
}

