// FUN_007e8dc0 @ 007e8dc0 body=[[007e8dc0, 007e8e79]]


undefined4 * FUN_007e8dc0(undefined4 *param_1)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4afb4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00a28650(param_1);
  local_8 = 0;
  param_1[0x68] = in_ECX;
  *param_1 = CMaskedSpriteType::vftable;
  param_1[0x6e] = 0xf;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 1;
  param_1[0x75] = 0xf;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x82] = 0xf;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x84] = 0xffffffff;
  param_1[0x85] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x91) = 0;
  ExceptionList = local_10;
  return param_1;
}

