// FUN_0067d730 @ 0067d730 body=[[0067d730, 0067d781]]


undefined4 * FUN_0067d730(undefined4 param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b44e79;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_8 = 0;
  FUN_004e9b90();
  ExceptionList = local_10;
  return param_2;
}

