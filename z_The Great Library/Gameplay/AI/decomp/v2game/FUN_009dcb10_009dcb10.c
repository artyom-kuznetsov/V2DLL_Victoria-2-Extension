// FUN_009dcb10 @ 009dcb10 body=[[009dcb10, 009dcbc7]]


undefined4 * FUN_009dcb10(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = DAT_00f092fc;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b497db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CTextBlock::vftable;
  param_1[1] = 0x18d;
  param_1[3] = 0x18d;
  param_1[2] = CColor::vftable;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  ExceptionList = local_10;
  return param_1;
}

