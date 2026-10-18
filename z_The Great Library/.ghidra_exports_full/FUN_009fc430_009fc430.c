// FUN_009fc430 @ 009fc430 body=[[009fc430, 009fc52f]]


undefined4 * FUN_009fc430(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4170f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009fc530(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3e598;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00408ed0(in_ECX + 0x74,0,0xffffffff);
  local_8._0_1_ = 1;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_00408ed0(in_ECX + 0x90,0,0xffffffff);
  local_8._0_1_ = 2;
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_00408ed0(in_ECX + 0xac,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,3);
  param_1[0x32] = *(undefined4 *)(in_ECX + 200);
  param_1[0x33] = *(undefined4 *)(in_ECX + 0xcc);
  param_1[0x34] = *(undefined4 *)(in_ECX + 0xd0);
  param_1[0x35] = *(undefined4 *)(in_ECX + 0xd4);
  param_1[0x3b] = 0xf;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  FUN_00408ed0(in_ECX + 0xd8,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

