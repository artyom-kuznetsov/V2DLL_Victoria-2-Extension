// FUN_004f6370 @ 004f6370 body=[[004f6370, 004f63e4] [004f63e8, 004f6403] [004f6407, 004f641a]]


undefined4 * FUN_004f6370(undefined4 *param_1,uint param_2)

{
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint in_stack_00000038;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3cfab;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *param_1 = 1;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00408ed0(&stack0x00000024,0,0xffffffff);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = param_2 & 0xffffff00;
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000024);
  }
  ExceptionList = local_10;
  return param_1;
}

