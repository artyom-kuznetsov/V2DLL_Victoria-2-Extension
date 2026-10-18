// FUN_00905700 @ 00905700 body=[[00905700, 00905772]]


undefined4 * FUN_00905700(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b423e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  local_8 = 0;
  *param_1 = CNewsHasEntryTrigger::vftable;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  ExceptionList = local_10;
  return param_1;
}

