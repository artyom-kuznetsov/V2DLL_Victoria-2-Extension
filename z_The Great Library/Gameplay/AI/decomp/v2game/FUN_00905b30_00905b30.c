// FUN_00905b30 @ 00905b30  (requested 00905B30, first bytes: 55 8B EC 64 A1 00 00 00)


undefined4 * FUN_00905b30(undefined4 *param_1,undefined4 param_2)

{
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b423cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0xb] = 0x72e;
  param_1[0xc] = 0x72e;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  _local_8 = CONCAT31(uStack_7,2);
  *param_1 = CExecuteDecisionCommand::vftable;
  param_1[0x14] = 0xf;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  FUN_008a88d0();
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

