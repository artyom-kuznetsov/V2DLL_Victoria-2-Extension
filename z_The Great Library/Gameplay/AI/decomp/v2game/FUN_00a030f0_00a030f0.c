// FUN_00a030f0 @ 00a030f0 body=[[00a030f0, 00a031ca]]


undefined4 * FUN_00a030f0(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b492d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009fc530(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3e7b4;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00408ed0(in_ECX + 0x74,0,0xffffffff);
  local_8._0_1_ = 1;
  param_1[0x24] = *(undefined4 *)(in_ECX + 0x90);
  param_1[0x25] = *(undefined4 *)(in_ECX + 0x94);
  param_1[0x26] = *(undefined4 *)(in_ECX + 0x98);
  param_1[0x27] = *(undefined4 *)(in_ECX + 0x9c);
  param_1[0x2d] = 0xf;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_00408ed0(in_ECX + 0xa0,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x34] = 0xf;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  FUN_00408ed0(in_ECX + 0xbc,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

