// FUN_009f24c0 @ 009f24c0 body=[[009f24c0, 009f254a]]


undefined4 * FUN_009f24c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3d044;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

