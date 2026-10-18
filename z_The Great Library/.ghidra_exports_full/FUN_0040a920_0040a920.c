// FUN_0040a920 @ 0040a920 body=[[0040a920, 0040a9bc]]


undefined4 * FUN_0040a920(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b49173;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0xa15;
  param_1[0xc] = 0xa15;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = CBattlePlanSendCommand::vftable;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  FUN_0040a9c0(param_1);
  ExceptionList = local_10;
  return param_1;
}

