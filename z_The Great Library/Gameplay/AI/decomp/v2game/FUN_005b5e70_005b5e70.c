// FUN_005b5e70 @ 005b5e70 body=[[005b5e70, 005b5ed9] [005b5edd, 005b5eef]]


undefined4 * FUN_005b5e70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EDX;
  uint in_stack_00000020;
  undefined1 in_stack_00000028;
  undefined1 in_stack_0000002c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d3c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CTraitDefinition::vftable;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  local_8 = 1;
  param_1[9] = in_EDX;
  param_1[8] = param_2;
  FUN_00408ed0(&param_3,0,0xffffffff);
  *(undefined1 *)(param_1 + 10) = in_stack_00000028;
  *(undefined1 *)((int)param_1 + 0x29) = in_stack_0000002c;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

