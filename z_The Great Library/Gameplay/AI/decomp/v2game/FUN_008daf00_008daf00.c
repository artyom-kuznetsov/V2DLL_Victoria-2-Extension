// FUN_008daf00 @ 008daf00 body=[[008daf00, 008dafd3] [008dafd7, 008daffe] [008db002, 008db0ba] [008db0be, 008db0f5] [008db0f9, 008db11d] [008db121, 008db282] [008db286, 008db2b0] [008db2b4, 008db2de] [008db2e2, 008db30c] [008db310, 008db33a] [008db33e, 008db368] [008db36c, 008db396] [008db39a, 008db3be] [008db3c2, 008db3dd] [008db3e1, 008db3fc] [008db400, 008db421] [008db425, 008db43e]]


undefined4 FUN_008daf00(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
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
  undefined1 local_12c [4];
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  undefined4 local_fc;
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
  puStack_10 = &LAB_00b85e5e;
  local_14 = ExceptionList;
  local_fc = 0;
  local_104 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350("IS_MISSION_TARGET",0x11);
  local_c = 0;
  FUN_009a8ee0(local_12c,local_118);
  local_c._0_1_ = 1;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_c._0_1_ = 4;
  FUN_009adb70();
  if (local_128 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  local_c._0_1_ = 5;
  if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_104 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  if (param_3 == *(char *)(in_ECX + 0x1c)) {
    local_150 = 0xf;
    local_154 = 0;
    local_164[0] = local_164[0] & 0xffffff00;
    FUN_00409350("IS_NOT_MISSION_TARGET",0x15);
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
  FUN_0055dd40();
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

