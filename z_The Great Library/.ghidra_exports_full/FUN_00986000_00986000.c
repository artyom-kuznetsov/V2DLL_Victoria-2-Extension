// FUN_00986000 @ 00986000 body=[[00986000, 0098611e]]


undefined4 * FUN_00986000(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a594;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d9800(param_1,in_ECX);
  *param_1 = &PTR_FUN_00e375e8;
  param_1[0x4f] = in_ECX;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  uVar1 = DAT_00f092dc;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  param_1[0x5b] = DAT_00f092dc;
  param_1[0x5c] = uVar1;
  param_1[0x62] = 0xf;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x69] = 0xf;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x6b] = DAT_00f092fc;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  ExceptionList = local_10;
  return param_1;
}

