// FUN_00907d40 @ 00907d40  (requested 00907D40, first bytes: 55 8B EC 64 A1 00 00 00)


undefined4 * FUN_00907d40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 in_stack_00000054;
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
  param_1[0xb] = 0x3e4;
  param_1[0xc] = 0x3e4;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = CSelectEventOptionCommand::vftable;
  FUN_00a15730(param_1 + 0xf,param_2);
  param_1[0x19] = in_stack_00000054;
  FUN_008a88d0();
  ExceptionList = local_10;
  return param_1;
}

