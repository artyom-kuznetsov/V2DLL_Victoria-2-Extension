// FUN_00a0fe50 @ 00a0fe50 body=[[00a0fe50, 00a0ff16]]


undefined4 * FUN_00a0fe50(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b550b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xffffffff;
  FUN_009fa9f0(param_1,0x11b);
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3ecdc;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00409350();
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x2b] = 0;
  ExceptionList = local_10;
  return param_1;
}

