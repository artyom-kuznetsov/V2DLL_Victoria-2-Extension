// FUN_005ebec0 @ 005ebec0 body=[[005ebec0, 005ebf7d]]


undefined4 * FUN_005ebec0(undefined4 param_1)

{
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 *local_7c;
  undefined4 *local_28;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f92e;
  local_10 = ExceptionList;
  uStack_80 = param_1;
  uStack_84 = 0x5ebeea;
  ExceptionList = &local_10;
  FUN_005e8a60();
  local_8 = 0;
  *local_7c = CInvestmentChange::vftable;
  uStack_80 = 0x5ebf05;
  FUN_00413490();
  local_8._0_1_ = 1;
  uStack_80 = 0x5ebf14;
  FUN_00413490();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_28 = DAT_012587e4;
  local_14 = *DAT_012587e4;
  local_18 = (undefined1 *)&uStack_84;
  FUN_00409800();
  FUN_004bea40();
  local_1c = (undefined1 *)&uStack_84;
  FUN_00409800();
  FUN_004bea40();
  ExceptionList = local_10;
  return local_7c;
}

