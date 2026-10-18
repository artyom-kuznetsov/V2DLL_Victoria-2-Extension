// FUN_009a70f0 @ 009a70f0 body=[[009a70f0, 009a7112] [009a7116, 009a711c]]


undefined4 * FUN_009a70f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_stack_00000020;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  return param_1;
}

