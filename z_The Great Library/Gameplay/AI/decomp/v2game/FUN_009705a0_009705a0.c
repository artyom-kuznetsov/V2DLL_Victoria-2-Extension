// FUN_009705a0 @ 009705a0 body=[[009705a0, 00970674]]


undefined4 * FUN_009705a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b583cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CGovernment::vftable;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  local_8 = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8._0_1_ = 1;
  param_1[0x10] = param_3;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_3 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_009720e0(&param_3);
  param_1[0x16] = 0;
  local_8._0_1_ = 2;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar1 = FUN_009902d0(param_2,0);
  param_1[8] = uVar1;
  ExceptionList = local_10;
  return param_1;
}

