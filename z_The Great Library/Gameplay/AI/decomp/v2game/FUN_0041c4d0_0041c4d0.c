// FUN_0041c4d0 @ 0041c4d0 body=[[0041c4d0, 0041c557]]


undefined1 * FUN_0041c4d0(undefined1 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b60b69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  DAT_01258a08 = 1 - DAT_01258a08;
  DAT_0125873e = 1;
  DAT_012587e0 = 1;
  DAT_012589a7 = 1;
  DAT_012587e2 = 1;
  DAT_012586f3 = 1;
  FUN_00409350("Developer status enabled.",0x19);
  *param_1 = 1;
  ExceptionList = local_10;
  return param_1;
}

