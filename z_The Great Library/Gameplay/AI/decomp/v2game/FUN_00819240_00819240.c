// FUN_00819240 @ 00819240 body=[[00819240, 008192bf]]


undefined4 * FUN_00819240(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4af46;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00a2fb10(param_1,in_ECX);
  *param_1 = CUnitstatsBillboardType::vftable;
  param_1[0x52] = 0xf;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  local_8 = 1;
  param_1[0x54] = 0;
  param_1[0x11] = in_ECX + 0x158;
  FUN_00409350("UnitstatsEffect",0xf);
  ExceptionList = local_10;
  return param_1;
}

