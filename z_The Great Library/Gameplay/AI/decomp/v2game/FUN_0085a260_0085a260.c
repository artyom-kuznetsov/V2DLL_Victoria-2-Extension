// FUN_0085a260 @ 0085a260 body=[[0085a260, 0085a2c4] [0085a2c8, 0085a2da]]


undefined4 * FUN_0085a260(undefined4 *param_1,undefined4 param_2)

{
  undefined4 in_EDX;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c713;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CStringIntInt::vftable;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  local_8 = 1;
  param_1[2] = in_EDX;
  FUN_00408ed0(&param_2,0,0xffffffff);
  param_1[10] = in_stack_00000024;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

