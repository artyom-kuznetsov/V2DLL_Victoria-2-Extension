// FUN_00879a00 @ 00879a00 body=[[00879a00, 00879a59]]


undefined4 * FUN_00879a00(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b424d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = 0x18d;
  *(undefined2 *)(param_1 + 7) = 0;
  local_8 = 0;
  *param_1 = CAddAIStrategyEffect::vftable;
  FUN_0085a2e0(param_1 + 8);
  ExceptionList = local_10;
  return param_1;
}

