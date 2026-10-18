// FUN_0045ed20 @ 0045ed20 body=[[0045ed20, 0045edcf]]


undefined4 * FUN_0045ed20(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4619b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CNewsOnPrinting::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x11] = 0x18d;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x10] = CAndTrigger::vftable;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x18] = 0x18d;
  param_1[0x17] = CEffect::vftable;
  ExceptionList = local_10;
  return param_1;
}

