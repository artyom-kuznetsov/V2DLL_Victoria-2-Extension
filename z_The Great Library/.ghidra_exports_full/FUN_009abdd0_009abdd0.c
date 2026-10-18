// FUN_009abdd0 @ 009abdd0 body=[[009abdd0, 009abe28]]


undefined4 * FUN_009abdd0(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bdb3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e38f1c;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  local_8 = 1;
  FUN_00408ed0(param_2,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

