// FUN_00a06450 @ 00a06450 body=[[00a06450, 00a064fd] [00a06501, 00a06518] [00a0651c, 00a06530]]


undefined4 * FUN_00a06450(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 in_stack_00000028;
  uint in_stack_0000003c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b560f0;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_8._0_1_ = 2;
  FUN_00408ed0(&param_3,0,0xffffffff);
  local_8._0_1_ = 1;
  FUN_009fa9f0(param_1,0xf1);
  local_8 = CONCAT31(local_8._1_3_,3);
  *param_1 = &PTR_FUN_00e3e958;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00408ed0();
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  in_stack_00000020 = 0xf;
  in_stack_0000001c = 0;
  param_3 = param_3 & 0xffffff00;
  if (0xf < in_stack_0000003c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

