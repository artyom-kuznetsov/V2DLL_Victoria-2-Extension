// FUN_009d6ea0 @ 009d6ea0 body=[[009d6ea0, 009d6efe]]


undefined4 * FUN_009d6ea0(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3dfae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  local_8 = 2;
  FUN_009d7290(param_2);
  ExceptionList = local_10;
  return param_1;
}

