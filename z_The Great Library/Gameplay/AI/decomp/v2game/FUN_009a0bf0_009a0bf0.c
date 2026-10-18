// FUN_009a0bf0 @ 009a0bf0 body=[[009a0bf0, 009a0c7c]]


undefined4 * FUN_009a0bf0(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bf5b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e38524;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  local_8 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = param_2;
  param_1[0xd0] = 0xf;
  param_1[0xcf] = 0;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  FUN_00408ed0(in_EDX,0,0xffffffff);
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined1 *)(param_1 + 0xd6) = param_3;
  param_1[0xd7] = 0;
  ExceptionList = local_10;
  return param_1;
}

