// FUN_00476130 @ 00476130 body=[[00476130, 004761c2]]


undefined4 * FUN_00476130(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40536;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  local_8 = 1;
  *param_1 = 0xffffffff;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0xffffffff;
  ExceptionList = local_10;
  return param_1;
}

