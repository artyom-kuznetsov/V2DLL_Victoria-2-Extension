// FUN_009ae160 @ 009ae160 body=[[009ae160, 009ae222]]


undefined4 * FUN_009ae160(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41be9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009eb500(param_1 + 7,0x3f490fdb,DAT_00f092fc,0x3dcccccd,DAT_00f07eb0);
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  local_8 = 1;
  param_1[2] = param_2;
  param_1[4] = 0;
  uVar1 = DAT_00f092fc;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = param_3;
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  FUN_009ae320(param_1);
  ExceptionList = local_10;
  return param_1;
}

