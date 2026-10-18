// FUN_00a0f580 @ 00a0f580 body=[[00a0f580, 00a0f630]]


undefined4 * FUN_00a0f580(undefined4 *param_1)

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
  FUN_009fa9f0(param_1,0x119);
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3ec64;
  FUN_00a16090();
  ExceptionList = local_10;
  return param_1;
}

