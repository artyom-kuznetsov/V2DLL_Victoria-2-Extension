// FUN_008ba9f0 @ 008ba9f0 body=[[008ba9f0, 008baaa1] [008baaa5, 008babb4] [008babb8, 008babe2] [008babe6, 008bac0b] [008bac0f, 008bac44] [008bac48, 008bac5e] [008bac62, 008bac7d] [008bac81, 008bac97] [008bac9b, 008bad91] [008bad95, 008badbf] [008badc3, 008bade8] [008badec, 008bae21] [008bae25, 008bae3b] [008bae3f, 008bae5a] [008bae5e, 008bae74] [008bae78, 008bae94] [008bae98, 008baead]]


undefined4 FUN_008ba9f0(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint local_f0;
  int local_e4;
  uint local_c0;
  uint local_a4;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b677e2;
  local_10 = ExceptionList;
  local_28 = 0;
  local_2c = DAT_01259abc;
  ExceptionList = &local_10;
  FUN_00424670();
  FUN_009c5310();
  local_8 = 1;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_8._0_1_ = 4;
  FUN_009adb70();
  local_8._0_1_ = 3;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 3;
  if (local_e4 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (param_3 == '\0') {
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_8._0_1_ = uVar1;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8._0_1_ = 0xd;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 0xe;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("THE_MONTH_IS_AFTER",0x12);
    local_8._0_1_ = 0xf;
    FUN_009a8ee0(local_24,local_64);
    local_8._0_1_ = 0x10;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x14);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80[0] = local_80[0] & 0xffffff00;
  }
  else {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8._0_1_ = 5;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 6;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350("THE_MONTH_IS_BEFORE",0x13);
    local_8._0_1_ = 7;
    FUN_009a8ee0(local_24,local_80);
    local_8._0_1_ = 8;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00988f20();
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64[0] = local_64[0] & 0xffffff00;
  }
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_50 = 0xf;
  local_54 = 0;
  local_6c = 0xf;
  local_70 = 0;
  if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

