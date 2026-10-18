// FUN_00a04ad0 @ 00a04ad0 body=[[00a04ad0, 00a04b6c] [00a04b70, 00a04b8b] [00a04b8f, 00a04ba1]]


void FUN_00a04ad0(undefined4 param_1,uint param_2)

{
  undefined4 *unaff_ESI;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint in_stack_00000038;
  undefined1 in_stack_00000040;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b56148;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_8._0_1_ = 2;
  FUN_00408ed0(&param_2,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_009fa9f0(unaff_ESI,0xef);
  *unaff_ESI = &PTR_FUN_00e3e8e0;
  unaff_ESI[0x1d] = param_1;
  *(undefined1 *)(unaff_ESI + 0x1e) = in_stack_00000040;
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
  return;
}

