// FUN_009a0cb0 @ 009a0cb0 body=[[009a0cb0, 009a0d54] [009a0d58, 009a0d6c]]


undefined4 * FUN_009a0cb0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 in_EDX;
  undefined1 in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3bf39;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e38524;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  local_8 = 1;
  uStack_7 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = param_2;
  param_1[0xd0] = 0xf;
  param_1[0xcf] = 0;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  FUN_00408ed0(in_EDX,0,0xffffffff);
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  _local_8 = CONCAT31(uStack_7,3);
  FUN_009a2240(&param_3);
  *(undefined1 *)(param_1 + 0xd6) = in_stack_0000001c;
  param_1[0xd7] = 0;
  if (param_3 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

