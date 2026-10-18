// FUN_00a357f0 @ 00a357f0 body=[[00a357f0, 00a3587d]]


undefined4 * FUN_00a357f0(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48be9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  *param_1 = &PTR_FUN_00e404d4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_8 = 3;
  FUN_00a35e90(in_ECX + 0x3c);
  FUN_004134a0(in_ECX + 0x4c);
  FUN_009beeb0(in_ECX + 0x5c);
  param_1[0x1b] = *(undefined4 *)(in_ECX + 0x6c);
  ExceptionList = local_10;
  return param_1;
}

