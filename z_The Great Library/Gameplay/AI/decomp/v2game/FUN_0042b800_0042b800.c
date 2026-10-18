// FUN_0042b800 @ 0042b800 body=[[0042b800, 0042b846]]


undefined4 * FUN_0042b800(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b288;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  FUN_0043a750(param_2);
  ExceptionList = local_10;
  return param_1;
}

