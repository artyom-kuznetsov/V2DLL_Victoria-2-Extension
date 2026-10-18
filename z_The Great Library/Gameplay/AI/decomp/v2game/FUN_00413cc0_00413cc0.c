// FUN_00413cc0 @ 00413cc0 body=[[00413cc0, 00413e00]]


undefined4 * FUN_00413cc0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b47f01;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = in_ECX;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_8 = 3;
  uStack_7 = 0;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 4;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 5;
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 6;
  param_1[0x37] = 0xf;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  _local_8 = CONCAT31(uStack_7,7);
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3f] = 0xf;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x41] = 0;
  param_1[0x42] = DAT_00f17b54;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  ExceptionList = local_10;
  return param_1;
}

