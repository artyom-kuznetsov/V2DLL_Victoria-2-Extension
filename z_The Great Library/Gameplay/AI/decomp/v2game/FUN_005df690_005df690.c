// FUN_005df690 @ 005df690  (requested 005DF690, first bytes: 55 8B EC 64 A1 00 00 00)


undefined4 * FUN_005df690(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

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
  param_1[0xb] = 0x303;
  param_1[0xc] = 0x303;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = CCancelMovementCommand::vftable;
  FUN_0079de40(param_1 + 0xf,param_2);
  *(undefined1 *)(param_1 + 0x19) = param_3;
  ExceptionList = local_10;
  return param_1;
}

