// FUN_00464b30 @ 00464b30 body=[[00464b30, 00464bbb] [00464bbf, 00464bcf]]


void FUN_00464b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b4d350;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8._0_1_ = 1;
  FUN_00408ed0(&param_4,0,0xffffffff);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004661f0(param_2,param_3);
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

