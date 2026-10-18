// FUN_009a28c0 @ 009a28c0 body=[[009a28c0, 009a2922] [009a2926, 009a2938]]


undefined4 * FUN_009a28c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e473;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  local_8 = 1;
  param_1[2] = param_2;
  FUN_00408ed0(&param_3,0,0xffffffff);
  *param_1 = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

