// FUN_009023f0 @ 009023f0 body=[[009023f0, 00902460]]


undefined4 * FUN_009023f0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b42408;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_8 = 0;
  *param_1 = CPartyLoyaltyTrigger::vftable;
  param_1[10] = 0;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return param_1;
}

