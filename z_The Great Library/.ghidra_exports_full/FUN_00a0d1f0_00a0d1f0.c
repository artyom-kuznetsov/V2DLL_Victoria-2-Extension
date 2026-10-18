// FUN_00a0d1f0 @ 00a0d1f0 body=[[00a0d1f0, 00a0d278]]


undefined4 * FUN_00a0d1f0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4619b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0xff;
  param_1[0xc] = 0xff;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  *param_1 = &PTR_FUN_00e3ebb0;
  ExceptionList = local_10;
  return param_1;
}

