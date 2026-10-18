// FUN_00a028b0 @ 00a028b0 body=[[00a028b0, 00a02967]]


undefined4 * FUN_00a028b0(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b415e6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  *param_1 = &PTR_FUN_00e3e778;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_004134a0(in_ECX + 0x3c);
  local_8._0_1_ = 2;
  param_1[0x13] = *(undefined4 *)(in_ECX + 0x4c);
  param_1[0x14] = *(undefined4 *)(in_ECX + 0x50);
  param_1[0x15] = *(undefined4 *)(in_ECX + 0x54);
  param_1[0x16] = *(undefined4 *)(in_ECX + 0x58);
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00408ed0(in_ECX + 0x5c,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,3);
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_00408ed0(in_ECX + 0x78,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

