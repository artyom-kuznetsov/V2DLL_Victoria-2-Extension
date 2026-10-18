// FUN_005e2b30 @ 005e2b30 body=[[005e2b30, 005e2be5] [005e2be9, 005e2bfc]]


undefined4 * FUN_005e2b30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b45b26;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0xb] = 0x422;
  param_1[0xc] = 0x422;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 2;
  *param_1 = CRenameUnitCommand::vftable;
  FUN_0079de40(param_1 + 0xf,param_2);
  _local_8 = CONCAT31(uStack_7,3);
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  FUN_00408ed0(&param_3,0,0xffffffff);
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

