// FUN_00a0f4f0 @ 00a0f4f0 body=[[00a0f4f0, 00a0f57e]]


undefined4 * FUN_00a0f4f0(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4914b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009fc530(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3ec28;
  param_1[0x1d] = *(undefined4 *)(in_ECX + 0x74);
  param_1[0x1e] = *(undefined4 *)(in_ECX + 0x78);
  param_1[0x24] = 0xf;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_00408ed0(in_ECX + 0x7c,0,0xffffffff);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004134a0(in_ECX + 0x98);
  ExceptionList = local_10;
  return param_1;
}

