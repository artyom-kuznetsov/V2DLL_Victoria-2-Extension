// FUN_00a2ef00 @ 00a2ef00 body=[[00a2ef00, 00a2efbf]]


undefined4 * FUN_00a2ef00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52616;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009d9070(param_1,param_2);
  local_8 = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *param_1 = &PTR_FUN_00e3ff08;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x5c] = 0xf;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  FUN_00409350("animated",8);
  uVar1 = DAT_00f092fc;
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = uVar1;
  param_1[0x54] = unaff_EDI;
  param_1[9] = unaff_EDI;
  param_1[1] = *(undefined4 *)(unaff_EDI + 0x24);
  FUN_00409350(&DAT_00e12e7c,2);
  ExceptionList = local_10;
  return param_1;
}

