// FUN_00473110 @ 00473110 body=[[00473110, 00473173] [00473177, 00473189]]


undefined4 * FUN_00473110(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EDX;
  uint in_stack_00000020;
  undefined1 in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d3c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CRuleDefinition::vftable;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  local_8 = 1;
  param_1[9] = in_EDX;
  param_1[8] = param_2;
  FUN_00408ed0(&param_3,0,0xffffffff);
  *(undefined1 *)(param_1 + 10) = in_stack_00000028;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

