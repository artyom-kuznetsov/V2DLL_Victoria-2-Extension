// FUN_007d9800 @ 007d9800 body=[[007d9800, 007d98aa]]


undefined4 * FUN_007d9800(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b430f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009f8e80();
  uVar1 = DAT_00f092fc;
  param_1[0x3d] = DAT_00f092fc;
  param_1[0xb] = 0;
  local_8 = 0;
  *param_1 = C3dVisibleObject::vftable;
  param_1[0x3e] = param_2;
  param_1[0x3f] = uVar1;
  param_1[0x45] = 0xf;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x4c] = 0xf;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined2 *)(param_1 + 0x4e) = 0;
  ExceptionList = local_10;
  return param_1;
}

