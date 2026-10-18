// FUN_0057eb00 @ 0057eb00 body=[[0057eb00, 0057ebb0] [0057ebb4, 0057ebc7]]


undefined4 *
FUN_0057eb00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b461fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0xb] = 0xa59;
  param_1[0xc] = 0xa59;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  _local_8 = CONCAT31(uStack_7,2);
  param_1[0xf] = param_2;
  *param_1 = CIgnoreDecisionCommand::vftable;
  param_1[0x10] = param_3;
  param_1[0x16] = 0xf;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_00408ed0(&param_4,0,0xffffffff);
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4);
  }
  ExceptionList = local_10;
  return param_1;
}

