// FUN_009ac650 @ 009ac650 body=[[009ac650, 009ac69e]]


undefined4 * FUN_009ac650(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b467d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  FUN_00a840b0();
  ExceptionList = local_10;
  return param_1;
}

