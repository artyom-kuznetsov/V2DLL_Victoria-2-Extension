// FUN_009a0d70 @ 009a0d70 body=[[009a0d70, 009a0db4]]


undefined4 * FUN_009a0d70(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bef8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  FUN_009a2240(param_2);
  ExceptionList = local_10;
  return param_1;
}

