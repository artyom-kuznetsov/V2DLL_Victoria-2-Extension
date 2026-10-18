// FUN_00a0d760 @ 00a0d760 body=[[00a0d760, 00a0d82b]]


undefined4 * FUN_00a0d760(undefined4 *param_1)

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
  FUN_009fa9f0(param_1,0x101);
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3ec28;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0xf;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_00409350();
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  ExceptionList = local_10;
  return param_1;
}

