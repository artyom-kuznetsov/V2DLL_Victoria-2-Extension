// FUN_009dc380 @ 009dc380 body=[[009dc380, 009dc456] [009dc45a, 009dc46e]]


undefined4 * FUN_009dc380(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4eecb;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&param_3,0,0xffffffff);
  FUN_009d7860(param_2);
  *param_1 = &PTR_FUN_00e3bae0;
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x1414] = 0;
  param_1[0x1415] = 0x5000;
  FUN_00408ed0();
  FUN_00408ed0();
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  FUN_00408ed0(&param_3,0,0xffffffff);
  FUN_009dc510(param_2);
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

