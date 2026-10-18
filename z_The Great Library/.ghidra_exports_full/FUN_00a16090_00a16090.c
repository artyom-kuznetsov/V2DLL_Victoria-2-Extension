// FUN_00a16090 @ 00a16090 body=[[00a16090, 00a16165]]


undefined4 * FUN_00a16090(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48f61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3f050;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_8 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 1;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  ExceptionList = local_10;
  return param_1;
}

