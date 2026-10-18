// FUN_008dbc30 @ 008dbc30 body=[[008dbc30, 008dbd00] [008dbd04, 008dbd2b] [008dbd2f, 008dbde0] [008dbde4, 008dbe1b] [008dbe1f, 008dbe43] [008dbe47, 008dbfa7] [008dbfab, 008dbfd5] [008dbfd9, 008dc003] [008dc007, 008dc031] [008dc035, 008dc05f] [008dc063, 008dc08d] [008dc091, 008dc0bb] [008dc0bf, 008dc0e3] [008dc0e7, 008dc102] [008dc106, 008dc121] [008dc125, 008dc146] [008dc14a, 008dc163]]


undefined4 FUN_008dbc30(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  uint local_180;
  int local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  uint local_16c;
  uint local_164 [4];
  undefined4 local_154;
  uint local_150;
  uint local_148;
  undefined4 local_138;
  uint local_134;
  undefined1 local_128 [4];
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b85d8e;
  local_14 = ExceptionList;
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350("IS_MISSION_OF",0xd);
  local_c = 0;
  FUN_009a8ee0(local_128,local_114);
  local_c._0_1_ = 1;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_c._0_1_ = 4;
  FUN_009adb70();
  if (local_124 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_c._0_1_ = 5;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  if (param_3 != '\0') {
    local_150 = 0xf;
    local_154 = 0;
    local_164[0] = local_164[0] & 0xffffff00;
    FUN_00409350("IS_NOT_MISSION_OF",0x11);
    local_c._0_1_ = 6;
    FUN_009a8ee0(&local_180,local_164);
    local_c._0_1_ = 7;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_c._0_1_ = 8;
    FUN_00408ed0();
    if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_134 = 0xf;
    local_138 = 0;
    local_148 = local_148 & 0xffffff00;
    local_c._0_1_ = 9;
    FUN_009adb70();
    if (local_17c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 5;
    local_17c = 0;
    local_178 = 0;
    local_174 = 0;
    if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_c._0_1_ = 5;
  local_150 = 0xf;
  local_154 = 0;
  local_164[0] = local_164[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfc7b4,3);
  local_c._0_1_ = 10;
  local_134 = 0xf;
  local_138 = 0;
  local_148 = local_148 & 0xffffff00;
  FUN_00409350(&DAT_00df7f68,3);
  local_c._0_1_ = 0xb;
  local_16c = 0xf;
  local_170 = 0;
  local_180 = local_180 & 0xffffff00;
  FUN_00409350(&DAT_00dfc964,3);
  local_c._0_1_ = 0xc;
  FUN_0055dd40();
  local_c._0_1_ = 0xd;
  FUN_008afb90();
  local_c._0_1_ = 0xe;
  FUN_00988fa0();
  local_c._0_1_ = 0xf;
  FUN_00988f20();
  local_c._0_1_ = 0x10;
  FUN_00988f20();
  local_c._0_1_ = 0x11;
  FUN_00988f20();
  local_c._0_1_ = 0x12;
  FUN_00988f20();
  local_c = CONCAT31(local_c._1_3_,0x13);
  FUN_00988f20();
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  if (local_90 < 0x10) {
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_16c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_16c = 0xf;
    local_170 = 0;
    local_180 = local_180 & 0xffffff00;
    if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_134 = 0xf;
    local_138 = 0;
    local_148 = local_148 & 0xffffff00;
    if (local_150 < 0x10) {
      local_150 = 0xf;
      local_154 = 0;
      local_164[0] = local_164[0] & 0xffffff00;
      if (local_20 < 0x10) {
        ExceptionList = local_14;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

