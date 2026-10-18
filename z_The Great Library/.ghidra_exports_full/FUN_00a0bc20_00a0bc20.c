// FUN_00a0bc20 @ 00a0bc20 body=[[00a0bc20, 00a0bcc5]]


undefined4 *
FUN_00a0bc20(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

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
  param_1[0xb] = 0xfd;
  param_1[0xc] = 0xfd;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = param_2;
  *(undefined2 *)(param_1 + 10) = param_3;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3eb38;
  FUN_00a0bcd0();
  param_1[0x23] = param_4;
  ExceptionList = local_10;
  return param_1;
}

