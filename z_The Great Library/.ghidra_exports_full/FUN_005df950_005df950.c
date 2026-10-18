// FUN_005df950 @ 005df950 body=[[005df950, 005df9c6]]


undefined4 * FUN_005df950(undefined4 *param_1)

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
  *param_1 = CCancelMovementCommand::vftable;
  param_1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0x11] = *(undefined4 *)(in_ECX + 0x44);
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(in_ECX + 0x48,0,0xffffffff);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(in_ECX + 100);
  ExceptionList = local_10;
  return param_1;
}

