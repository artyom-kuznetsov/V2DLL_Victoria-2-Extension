// FUN_00a53a70 @ 00a53a70 body=[[00a53a70, 00a53b11]]


undefined4 * FUN_00a53a70(undefined4 *param_1)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48988;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  local_8 = 0;
  param_1[0x16] = in_ECX;
  *param_1 = &PTR_FUN_00e41960;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  FUN_00409350("gfx\\FX\\linechart.fx",0x13);
  param_1[0x20] = DAT_00f17898;
  *(undefined2 *)(param_1 + 0x21) = 1;
  ExceptionList = local_10;
  return param_1;
}

