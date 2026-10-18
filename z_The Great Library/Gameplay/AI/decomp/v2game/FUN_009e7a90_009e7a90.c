// FUN_009e7a90 @ 009e7a90 body=[[009e7a90, 009e7b10] [009e7b14, 009e7b26]]


undefined4 * FUN_009e7a90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EDX;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ba13;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e37db4;
  param_1[1] = param_2;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(in_EDX,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00408ed0(&param_3,0,0xffffffff);
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

