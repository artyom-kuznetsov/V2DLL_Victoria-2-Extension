// FUN_008cffc0 @ 008cffc0 body=[[008cffc0, 008d01ae] [008d01b2, 008d01dc] [008d01e0, 008d0205] [008d0209, 008d022e] [008d0232, 008d0257] [008d025b, 008d0280] [008d0284, 008d02a9] [008d02ad, 008d02e2] [008d02e6, 008d0302] [008d0306, 008d0330] [008d0334, 008d0356] [008d035a, 008d0373] [008d0377, 008d054c] [008d0550, 008d057a] [008d057e, 008d05a3] [008d05a7, 008d05cc] [008d05d0, 008d05f5] [008d05f9, 008d061e] [008d0622, 008d0647] [008d064b, 008d0680] [008d0684, 008d06a0] [008d06a4, 008d06ce] [008d06d2, 008d06f1] [008d06f5, 008d0711] [008d0715, 008d073a] [008d073e, 008d0753]]


undefined4 FUN_008cffc0(undefined4 param_1,int param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  uint local_2dc [4];
  undefined4 local_2cc;
  uint local_2c8;
  uint local_2c0;
  undefined4 local_2b0;
  uint local_2ac;
  uint local_2a4;
  undefined4 local_294;
  uint local_290;
  uint local_288;
  undefined4 local_278;
  uint local_274;
  uint local_26c;
  undefined4 local_25c;
  uint local_258;
  uint local_250;
  undefined4 local_240;
  uint local_23c;
  uint local_234;
  undefined4 local_224;
  uint local_220;
  uint local_218 [4];
  undefined4 local_208;
  uint local_204;
  uint local_1fc;
  undefined4 local_1ec;
  uint local_1e8;
  uint local_1e0;
  undefined4 local_1d0;
  uint local_1cc;
  uint local_1c4;
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
  uint local_11c [4];
  undefined4 local_10c;
  uint local_108;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
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
  puStack_c = &LAB_00b66caf;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == '\0') {
    local_108 = 0xf;
    local_10c = 0;
    local_11c[0] = local_11c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 0xf;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x10;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x12;
    piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    uVar4 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))(local_2dc);
    local_8._0_1_ = 0x13;
    FUN_009a8ee0(local_3c,local_74);
    local_8._0_1_ = 0x14;
    iVar5 = FUN_00475500();
    uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x15;
    uVar7 = (**(code **)(*piVar1 + 0x1c))();
    local_8._0_1_ = 0x16;
    FUN_00988fa0(uVar7);
    local_8._0_1_ = 0x17;
    FUN_00988f20(local_c8);
    local_8._0_1_ = 0x18;
    FUN_00988f20(uVar6);
    local_8._0_1_ = 0x19;
    FUN_00988f20(local_ac);
    local_8._0_1_ = 0x1a;
    FUN_00988f20(uVar4);
    local_8._0_1_ = 0x1b;
    FUN_00988f20(local_11c);
    local_14 = 1;
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_154);
    }
    local_140 = 0xf;
    local_144 = 0;
    local_154 = local_154 & 0xffffff00;
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_18c);
    }
    local_178 = 0xf;
    local_17c = 0;
    local_18c = local_18c & 0xffffff00;
    if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1c4);
    }
    local_1b0 = 0xf;
    local_1b4 = 0;
    local_1c4 = local_1c4 & 0xffffff00;
    if (0xf < local_1e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1fc);
    }
    local_1e8 = 0xf;
    local_1ec = 0;
    local_1fc = local_1fc & 0xffffff00;
    if (0xf < local_220) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_234);
    }
    local_220 = 0xf;
    local_224 = 0;
    local_234 = local_234 & 0xffffff00;
    if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_26c);
    }
    local_258 = 0xf;
    local_25c = 0;
    local_26c = local_26c & 0xffffff00;
    if (0xf < local_290) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2a4);
    }
    local_290 = 0xf;
    local_294 = 0;
    local_2a4 = local_2a4 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38);
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    if (0xf < local_2c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2dc[0]);
    }
    local_2c8 = 0xf;
    local_2cc = 0;
    local_2dc[0] = local_2dc[0] & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c8[0]);
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_ac[0]);
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    uVar2 = local_11c[0];
    uVar3 = local_108;
  }
  else {
    local_ec = 0xf;
    local_f0 = 0;
    local_100[0] = local_100[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 1;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    uVar4 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))(local_218);
    local_8._0_1_ = 5;
    FUN_009a8ee0(local_28,local_90);
    local_8._0_1_ = 6;
    iVar5 = FUN_00475500();
    uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 7;
    uVar7 = (**(code **)(*piVar1 + 0x1c))();
    local_8._0_1_ = 8;
    FUN_00988fa0(uVar7);
    local_8._0_1_ = 9;
    FUN_00988f20(local_e4);
    local_8._0_1_ = 10;
    FUN_00988f20(uVar6);
    local_8._0_1_ = 0xb;
    FUN_00988f20(local_58);
    local_8._0_1_ = 0xc;
    FUN_00988f20(uVar4);
    local_8._0_1_ = 0xd;
    FUN_00988f20(local_100);
    local_14 = 1;
    if (0xf < local_274) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_288);
    }
    local_274 = 0xf;
    local_278 = 0;
    local_288 = local_288 & 0xffffff00;
    if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_170);
    }
    local_15c = 0xf;
    local_160 = 0;
    local_170 = local_170 & 0xffffff00;
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_138);
    }
    local_124 = 0xf;
    local_128 = 0;
    local_138 = local_138 & 0xffffff00;
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1a8);
    }
    local_194 = 0xf;
    local_198 = 0;
    local_1a8 = local_1a8 & 0xffffff00;
    if (0xf < local_23c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_250);
    }
    local_23c = 0xf;
    local_240 = 0;
    local_250 = local_250 & 0xffffff00;
    if (0xf < local_1cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1e0);
    }
    local_1cc = 0xf;
    local_1d0 = 0;
    local_1e0 = local_1e0 & 0xffffff00;
    if (0xf < local_2ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c0);
    }
    local_2ac = 0xf;
    local_2b0 = 0;
    local_2c0 = local_2c0 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_24);
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_204) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_218[0]);
    }
    local_204 = 0xf;
    local_208 = 0;
    local_218[0] = local_218[0] & 0xffffff00;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e4[0]);
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_90[0]);
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    uVar2 = local_100[0];
    uVar3 = local_ec;
  }
  if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar2);
  }
  ExceptionList = local_10;
  return param_1;
}

