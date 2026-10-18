// FUN_008c3260 @ 008c3260 body=[[008c3260, 008c3325] [008c3329, 008c3359] [008c335d, 008c33eb] [008c33ef, 008c341f] [008c3423, 008c343c] [008c3440, 008c354c] [008c3550, 008c357a] [008c357e, 008c35a3] [008c35a7, 008c35dc] [008c35e0, 008c35fc] [008c3600, 008c3720] [008c3724, 008c374e] [008c3752, 008c3777] [008c377b, 008c37b9] [008c37bd, 008c37dc] [008c37e0, 008c38df] [008c38e3, 008c390d] [008c3911, 008c3936] [008c393a, 008c396f] [008c3973, 008c3989] [008c398d, 008c39a7] [008c39ab, 008c39c0]]


/* WARNING: Removing unreachable block (ram,0x008c3622) */
/* WARNING: Removing unreachable block (ram,0x008c3802) */

undefined1 * FUN_008c3260(undefined1 *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  uint local_1e4;
  uint local_1c8;
  uint local_1ac;
  uint local_190;
  uint local_174;
  uint local_158;
  uint local_13c;
  uint local_120;
  uint local_104;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  undefined1 local_8c [4];
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_78 [4];
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b674e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_60 = 1;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (param_3 == '\0') {
    FUN_00409350(&DAT_00e2d64c,2);
    local_8 = 5;
    FUN_009a8ee0(local_24,local_40);
    local_8._0_1_ = 6;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 7;
    FUN_00408ed0();
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00409350("IS_NOT",6);
    local_8 = 1;
    FUN_009a8ee0(local_24,local_40);
    local_8._0_1_ = 2;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 3;
    FUN_00408ed0();
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    local_8._0_1_ = 4;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_2c) {
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  iVar1 = *(int *)(local_64 + 0x1c);
  if (iVar1 == 0) {
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 0x17;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350("POOR_STRATA",0xb);
    local_8._0_1_ = 0x18;
    FUN_009a8ee0(local_78,local_40);
    local_8._0_1_ = 0x19;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0x1a;
    FUN_00988fa0();
    local_8._0_1_ = 0x1b;
    FUN_00988f20();
    local_8._0_1_ = 0x1c;
    FUN_00448aa0();
    if (0xf < local_174) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x1d);
    FUN_009adb70();
    if (local_74 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_48) {
      local_2c = 0xf;
      local_30 = 0;
      local_6c = 0;
      local_70 = 0;
      local_74 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if (iVar1 == 1) {
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 0x10;
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    FUN_00409350("MIDDLE_STRATA",0xd);
    local_8._0_1_ = 0x11;
    FUN_009a8ee0(local_8c,local_a8);
    local_8._0_1_ = 0x12;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0x13;
    FUN_00988fa0();
    local_8._0_1_ = 0x14;
    FUN_00988f20();
    local_8._0_1_ = 0x15;
    FUN_00448aa0();
    if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_009adb70();
    if (local_88 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if (iVar1 == 2) {
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 9;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    FUN_00409350("RICH_STRATA",0xb);
    local_8._0_1_ = 10;
    FUN_009a8ee0(local_24,local_c4);
    local_8._0_1_ = 0xb;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0xc;
    FUN_00988fa0();
    local_8._0_1_ = 0xd;
    FUN_00988f20();
    local_8._0_1_ = 0xe;
    FUN_00448aa0();
    if (0xf < local_1c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_190) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

