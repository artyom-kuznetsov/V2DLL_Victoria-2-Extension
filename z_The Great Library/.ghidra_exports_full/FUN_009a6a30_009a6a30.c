// FUN_009a6a30 @ 009a6a30 body=[[009a6a30, 009a6ace]]


undefined4 * FUN_009a6a30(undefined4 *param_1,undefined4 param_2)

{
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3df1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e387f8;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  param_1[0xd] = param_2;
  param_1[0xc] = in_EDX;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0x10000;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  if (in_EDX != 0) {
    FUN_00408ed0(in_EDX + 0x40,0,0xffffffff);
  }
  DAT_01258a84 = DAT_01258a84 + 1;
  ExceptionList = local_10;
  return param_1;
}

