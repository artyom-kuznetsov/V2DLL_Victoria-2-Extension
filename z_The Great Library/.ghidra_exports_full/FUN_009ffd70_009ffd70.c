// FUN_009ffd70 @ 009ffd70 body=[[009ffd70, 009ffe1d] [009ffe21, 009ffe38] [009ffe3c, 009ffe50]]


undefined4 * FUN_009ffd70(undefined4 *param_1,uint param_2)

{
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint in_stack_00000038;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b56770;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_8._0_1_ = 2;
  FUN_00408ed0(&param_2,0,0xffffffff);
  local_8._0_1_ = 1;
  FUN_009fa9f0(param_1,0xd7);
  local_8 = CONCAT31(local_8._1_3_,3);
  *param_1 = &PTR_FUN_00e3e6c4;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00408ed0();
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = param_2 & 0xffffff00;
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

