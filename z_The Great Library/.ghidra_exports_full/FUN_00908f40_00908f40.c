// FUN_00908f40 @ 00908f40 body=[[00908f40, 00908fc1]]


undefined4 * FUN_00908f40(undefined4 *param_1)

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
  *param_1 = CSelectEventOptionCommand::vftable;
  param_1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0x11] = *(undefined4 *)(in_ECX + 0x44);
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(in_ECX + 0x48,0,0xffffffff);
  param_1[0x19] = *(undefined4 *)(in_ECX + 100);
  FUN_008a88d0();
  ExceptionList = local_10;
  return param_1;
}

