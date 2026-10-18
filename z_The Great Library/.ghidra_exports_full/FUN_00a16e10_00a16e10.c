// FUN_00a16e10 @ 00a16e10 body=[[00a16e10, 00a16ea0]]


undefined4 * FUN_00a16e10(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48f36;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3f0c4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0xd] = 1;
  param_1[0x13] = 0xf;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined1 *)(param_1 + 0x15) = 0;
  ExceptionList = local_10;
  return param_1;
}

