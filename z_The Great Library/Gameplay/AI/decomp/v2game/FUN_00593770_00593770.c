// FUN_00593770 @ 00593770 body=[[00593770, 005937c3]]


undefined1 * FUN_00593770(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e5b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  ExceptionList = local_10;
  return param_1;
}

