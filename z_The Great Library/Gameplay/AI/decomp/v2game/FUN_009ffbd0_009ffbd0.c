// FUN_009ffbd0 @ 009ffbd0 body=[[009ffbd0, 009ffc52]]


undefined4 * FUN_009ffbd0(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45cc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3e688;
  param_1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0x11] = *(undefined4 *)(in_ECX + 0x44);
  param_1[0x12] = *(undefined4 *)(in_ECX + 0x48);
  param_1[0x13] = *(undefined4 *)(in_ECX + 0x4c);
  param_1[0x14] = *(undefined4 *)(in_ECX + 0x50);
  param_1[0x1a] = 0xf;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_00408ed0(in_ECX + 0x54,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

