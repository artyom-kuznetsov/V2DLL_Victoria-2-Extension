// FUN_00750610 @ 00750610 body=[[00750610, 007506c3]]


void FUN_00750610(void)

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
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xffffffff;
  FUN_0073cba0(0,*(undefined4 *)(in_ECX + 0xdc));
  ExceptionList = local_10;
  return;
}

