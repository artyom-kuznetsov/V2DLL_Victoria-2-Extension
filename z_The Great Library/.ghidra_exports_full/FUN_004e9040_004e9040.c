// FUN_004e9040 @ 004e9040 body=[[004e9040, 004e90ed] [004e90f1, 004e9108] [004e910c, 004e9120]]


undefined4 FUN_004e9040(undefined4 param_1)

{
  int iVar1;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b75283;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("ORG_EXPLANATION_TT",0x12);
  local_8 = 1;
  FUN_009a8ee0(local_28,local_44);
  local_8._0_1_ = 2;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_14 = 1;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

