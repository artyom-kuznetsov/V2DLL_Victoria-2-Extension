// FUN_009a9f20 @ 009a9f20 body=[[009a9f20, 009a9f9f]]


undefined4 * FUN_009a9f20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41cd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e38ecc;
  param_1[1] = param_2;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(in_EDX,0,0xffffffff);
  *param_1 = &PTR_FUN_00e38f08;
  param_1[9] = *in_ECX;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_8 = 1;
  FUN_009a97b0();
  ExceptionList = local_10;
  return param_1;
}

