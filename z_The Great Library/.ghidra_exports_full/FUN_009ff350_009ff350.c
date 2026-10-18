// FUN_009ff350 @ 009ff350 body=[[009ff350, 009ff41e]]


undefined4 * FUN_009ff350(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49331;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009fc530(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3e610;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00408ed0(in_ECX + 0x74,0,0xffffffff);
  local_8._0_1_ = 1;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_00408ed0(in_ECX + 0x90,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x2b] = *(undefined4 *)(in_ECX + 0xac);
  param_1[0x2c] = *(undefined4 *)(in_ECX + 0xb0);
  param_1[0x2d] = *(undefined4 *)(in_ECX + 0xb4);
  param_1[0x33] = 0xf;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  FUN_00408ed0(in_ECX + 0xb8,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

