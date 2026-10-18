// FUN_00913230 @ 00913230 body=[[00913230, 009132c2]]


undefined4 * FUN_00913230(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = DAT_01259abc;
  puStack_c = &LAB_00b3cc48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0x2d2d2d;
  param_1[1] = 0x18d;
  param_1[3] = 0;
  param_1[4] = 0x2d2d2d;
  param_1[5] = 0;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  local_8 = 0;
  *param_1 = CNullDiplomaticAction::vftable;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return param_1;
}

