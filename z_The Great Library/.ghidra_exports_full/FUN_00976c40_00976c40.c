// FUN_00976c40 @ 00976c40 body=[[00976c40, 00976ce8]]


undefined4 * FUN_00976c40(undefined4 *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41f9b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  *param_1 = CModifier::vftable;
  FUN_005dac60();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_8 = 1;
  FUN_005daad0(param_1 + 6,param_2 + 0x18);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x2c);
  local_8 = 2;
  *param_1 = CNationalValue::vftable;
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_00408ed0(param_2 + 0x30,0,0xffffffff);
  param_1[0x13] = *(undefined4 *)(param_2 + 0x4c);
  ExceptionList = local_10;
  return param_1;
}

