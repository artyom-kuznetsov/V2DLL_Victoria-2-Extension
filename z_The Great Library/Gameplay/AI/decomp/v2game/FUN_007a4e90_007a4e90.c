// FUN_007a4e90 @ 007a4e90 body=[[007a4e90, 007a4f19]]


undefined4 * FUN_007a4e90(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3df1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_00f0d880;
  param_1[3] = DAT_00f0d884;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  FUN_009c1390(&DAT_00f0d880);
  *param_1 = CServerMessagehandler::vftable;
  param_1[0xc] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = 0xf;
  *(undefined1 *)(param_1 + 0xd) = 0;
  ExceptionList = local_10;
  return param_1;
}

