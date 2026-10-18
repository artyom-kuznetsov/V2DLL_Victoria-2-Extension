// FUN_00a13b00 @ 00a13b00 body=[[00a13b00, 00a13bb4]]


undefined4 * FUN_00a13b00(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41441;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  *param_1 = &PTR_FUN_00e3ef3c;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_009d5e10(in_ECX + 0x3c);
  local_8 = CONCAT31(local_8._1_3_,4);
  param_1[0x1e] = *(undefined4 *)(in_ECX + 0x78);
  param_1[0x1f] = *(undefined4 *)(in_ECX + 0x7c);
  param_1[0x20] = *(undefined4 *)(in_ECX + 0x80);
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  FUN_00408ed0(in_ECX + 0x84,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

