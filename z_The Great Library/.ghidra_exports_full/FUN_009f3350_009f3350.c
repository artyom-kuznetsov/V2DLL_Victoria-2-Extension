// FUN_009f3350 @ 009f3350 body=[[009f3350, 009f33b0]]


undefined4 * FUN_009f3350(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b526d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009f2ba0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3d08c;
  param_1[0x15] = 0xffffffff;
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return param_1;
}

