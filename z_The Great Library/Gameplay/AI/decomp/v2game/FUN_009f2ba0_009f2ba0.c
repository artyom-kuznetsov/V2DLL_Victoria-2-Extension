// FUN_009f2ba0 @ 009f2ba0 body=[[009f2ba0, 009f2c28]]


undefined4 * FUN_009f2ba0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ec78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3cffc;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3d068;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  ExceptionList = local_10;
  return param_1;
}

