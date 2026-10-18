// FUN_0041da20 @ 0041da20 body=[[0041da20, 0041daa7]]


undefined1 * FUN_0041da20(undefined1 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b60b69;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00527d10(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4));
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  *param_1 = 1;
  FUN_00409350("Upper house updated.",0x14);
  ExceptionList = local_10;
  return param_1;
}

