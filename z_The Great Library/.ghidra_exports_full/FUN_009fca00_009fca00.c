// FUN_009fca00 @ 009fca00 body=[[009fca00, 009fca76]]


undefined4 * FUN_009fca00(undefined4 *param_1)

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
  *param_1 = &PTR_FUN_00e3e5d4;
  param_1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0x11] = *(undefined4 *)(in_ECX + 0x44);
  param_1[0x12] = *(undefined4 *)(in_ECX + 0x48);
  param_1[0x18] = 0xf;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  FUN_00408ed0(in_ECX + 0x4c,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

