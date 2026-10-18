// FUN_00698bc0 @ 00698bc0 body=[[00698bc0, 00698c42]]


undefined1 *
FUN_00698bc0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e5b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x20] = 0;
  FUN_00408ed0(param_4,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x3c) = param_5;
  ExceptionList = local_10;
  return param_1;
}

