// FUN_008bcd80 @ 008bcd80 body=[[008bcd80, 008bcee0] [008bcee4, 008bcf0e] [008bcf12, 008bcf37] [008bcf3b, 008bcf70] [008bcf74, 008bcf90] [008bcf94, 008bcfb8] [008bcfbc, 008bcfd5] [008bcfd9, 008bd117] [008bd11b, 008bd145] [008bd149, 008bd16e] [008bd172, 008bd1a7] [008bd1ab, 008bd1c7] [008bd1cb, 008bd1ef] [008bd1f3, 008bd20f] [008bd213, 008bd238] [008bd23c, 008bd251]]


undefined4 FUN_008bcd80(undefined4 param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint local_1c4 [4];
  undefined4 local_1b4;
  uint local_1b0;
  uint local_1a8;
  undefined4 local_198;
  uint local_194;
  uint local_18c;
  undefined4 local_17c;
  uint local_178;
  uint local_170;
  undefined4 local_160;
  uint local_15c;
  uint local_154;
  undefined4 local_144;
  uint local_140;
  uint local_138;
  undefined4 local_128;
  uint local_124;
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b66ee1;
  local_10 = ExceptionList;
  local_14 = 0;
  piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x1c) * 4);
  if (param_3 == '\0') {
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 10;
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xb;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    (**(code **)(*piVar1 + 0x1c))(local_1c4);
    local_8._0_1_ = 0xd;
    FUN_009a8ee0(local_3c,local_74);
    local_8._0_1_ = 0xe;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_108 = 0xf;
    local_10c = 0;
    local_11c = local_11c & 0xffffff00;
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_140 = 0xf;
    local_144 = 0;
    local_154 = local_154 & 0xffffff00;
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_178 = 0xf;
    local_17c = 0;
    local_18c = local_18c & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1b0 = 0xf;
    local_1b4 = 0;
    local_1c4[0] = local_1c4[0] & 0xffffff00;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
    uVar2 = local_b4;
  }
  else {
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 1;
    local_7c = 0xf;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    (**(code **)(*piVar1 + 0x1c))(local_100);
    local_8._0_1_ = 4;
    FUN_009a8ee0(local_28,local_58);
    local_8._0_1_ = 5;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_15c = 0xf;
    local_160 = 0;
    local_170 = local_170 & 0xffffff00;
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_124 = 0xf;
    local_128 = 0;
    local_138 = local_138 & 0xffffff00;
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_194 = 0xf;
    local_198 = 0;
    local_1a8 = local_1a8 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100[0] = local_100[0] & 0xffffff00;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    uVar2 = local_d0;
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

