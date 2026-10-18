// FUN_007b47e0 @ 007b47e0 body=[[007b47e0, 007b48d3]]


undefined1 * FUN_007b47e0(undefined1 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c934;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(in_ECX,0,0xffffffff);
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x20] = 0;
  FUN_00408ed0(in_ECX + 0x20,0,0xffffffff);
  local_8._0_1_ = 1;
  *(undefined4 *)(param_1 + 0x50) = 0xf;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x3c] = 0;
  FUN_00408ed0(in_ECX + 0x3c,0,0xffffffff);
  local_8._0_1_ = 2;
  *(undefined4 *)(param_1 + 0x6c) = 0xf;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x58] = 0;
  FUN_00408ed0(in_ECX + 0x58,0,0xffffffff);
  local_8._0_1_ = 3;
  *(undefined4 *)(param_1 + 0x88) = 0xf;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x74] = 0;
  FUN_00408ed0(in_ECX + 0x74,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined4 *)(param_1 + 0xa4) = 0xf;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x90] = 0;
  FUN_00408ed0(in_ECX + 0x90,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

