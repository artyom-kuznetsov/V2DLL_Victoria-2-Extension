// FUN_005853e0 @ 005853e0 body=[[005853e0, 00585486]]


undefined4 *
FUN_005853e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  param_1[0xb] = 0x6fd;
  param_1[0xc] = 0x6fd;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = CCreateColonyCommand::vftable;
  FUN_00a15730(param_1 + 0xf,param_2);
  param_1[0x19] = param_3;
  param_1[0x1a] = param_4;
  ExceptionList = local_10;
  return param_1;
}

