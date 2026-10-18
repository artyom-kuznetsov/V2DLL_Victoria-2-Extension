// FUN_008cf580 @ 008cf580 body=[[008cf580, 008cf7ef] [008cf7f3, 008cf81d] [008cf821, 008cf846] [008cf84a, 008cf86f] [008cf873, 008cf898] [008cf89c, 008cf8c1] [008cf8c5, 008cf8ea] [008cf8ee, 008cf923] [008cf927, 008cf943] [008cf947, 008cf971] [008cf975, 008cf994] [008cf998, 008cf9b4] [008cf9b8, 008cfb9d] [008cfba1, 008cfbcb] [008cfbcf, 008cfbf4] [008cfbf8, 008cfc1d] [008cfc21, 008cfc46] [008cfc4a, 008cfc6f] [008cfc73, 008cfc98] [008cfc9c, 008cfcd1] [008cfcd5, 008cfcf1] [008cfcf5, 008cfd19] [008cfd1d, 008cfd36] [008cfd3a, 008cfd59] [008cfd5d, 008cfd82] [008cfd86, 008cfd9b]]


undefined4 FUN_008cf580(undefined4 param_1,int param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  int *piVar8;
  uint local_2e4 [4];
  undefined4 local_2d4;
  uint local_2d0;
  uint local_2c8;
  undefined4 local_2b8;
  uint local_2b4;
  uint local_2ac;
  undefined4 local_29c;
  uint local_298;
  uint local_290;
  undefined4 local_280;
  uint local_27c;
  uint local_274;
  undefined4 local_264;
  uint local_260;
  uint local_258;
  undefined4 local_248;
  uint local_244;
  uint local_23c;
  undefined4 local_22c;
  uint local_228;
  uint local_220 [4];
  undefined4 local_210;
  uint local_20c;
  uint local_204;
  undefined4 local_1f4;
  uint local_1f0;
  uint local_1e8;
  undefined4 local_1d8;
  uint local_1d4;
  uint local_1cc;
  undefined4 local_1bc;
  uint local_1b8;
  uint local_1b0;
  undefined4 local_1a0;
  uint local_19c;
  uint local_194;
  undefined4 local_184;
  uint local_180;
  uint local_178;
  undefined4 local_168;
  uint local_164;
  uint local_15c;
  undefined4 local_14c;
  uint local_148;
  uint local_140;
  undefined4 local_130;
  uint local_12c;
  uint local_124 [4];
  undefined4 local_114;
  uint local_110;
  uint local_108 [4];
  undefined4 local_f8;
  uint local_f4;
  undefined4 local_ec;
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
  puStack_c = &LAB_00b66dff;
  local_10 = ExceptionList;
  local_14 = 0;
  piVar8 = *(int **)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008cf61a;
    local_ec = *(undefined4 *)(param_2 + 0x2c);
    iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                    *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0x30) * 4) +
                            0xbe4) * 4);
  }
  else {
    local_ec = *(undefined4 *)(*(int *)(param_2 + 0x24) + 8);
    iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                    *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                     *(int *)(*(int *)(param_2 + 0x24) + 0xc) * 4) + 0xbe4) * 4);
  }
  piVar8 = *(int **)(iVar5 + 0x16c);
LAB_008cf61a:
  if (param_3 == '\0') {
    local_110 = 0xf;
    local_114 = 0;
    local_124[0] = local_124[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 0xf;
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x10;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x12;
    piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    uVar4 = (**(code **)(*piVar8 + 0x18))(local_2e4);
    local_8._0_1_ = 0x13;
    FUN_009a8ee0(local_3c,local_90);
    local_8._0_1_ = 0x14;
    iVar5 = FUN_00475500();
    uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x15;
    uVar7 = (**(code **)(*piVar1 + 0x1c))();
    local_8._0_1_ = 0x16;
    FUN_00988fa0(uVar7);
    local_8._0_1_ = 0x17;
    FUN_00988f20(local_74);
    local_8._0_1_ = 0x18;
    FUN_00988f20(uVar6);
    local_8._0_1_ = 0x19;
    FUN_00988f20(local_c8);
    local_8._0_1_ = 0x1a;
    FUN_00988f20(uVar4);
    local_8._0_1_ = 0x1b;
    FUN_00988f20(local_124);
    local_14 = 1;
    if (0xf < local_148) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_15c);
    }
    local_148 = 0xf;
    local_14c = 0;
    local_15c = local_15c & 0xffffff00;
    if (0xf < local_180) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_194);
    }
    local_180 = 0xf;
    local_184 = 0;
    local_194 = local_194 & 0xffffff00;
    if (0xf < local_1b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1cc);
    }
    local_1b8 = 0xf;
    local_1bc = 0;
    local_1cc = local_1cc & 0xffffff00;
    if (0xf < local_1f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_204);
    }
    local_1f0 = 0xf;
    local_1f4 = 0;
    local_204 = local_204 & 0xffffff00;
    if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_23c);
    }
    local_228 = 0xf;
    local_22c = 0;
    local_23c = local_23c & 0xffffff00;
    if (0xf < local_260) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_274);
    }
    local_260 = 0xf;
    local_264 = 0;
    local_274 = local_274 & 0xffffff00;
    if (0xf < local_298) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2ac);
    }
    local_298 = 0xf;
    local_29c = 0;
    local_2ac = local_2ac & 0xffffff00;
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
    if (0xf < local_2d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2e4[0]);
    }
    local_2d0 = 0xf;
    local_2d4 = 0;
    local_2e4[0] = local_2e4[0] & 0xffffff00;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_90[0]);
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c8[0]);
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    uVar2 = local_124[0];
    uVar3 = local_110;
  }
  else {
    local_f4 = 0xf;
    local_f8 = 0;
    local_108[0] = local_108[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 1;
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    uVar4 = (**(code **)(*piVar8 + 0x18))(local_220);
    local_8._0_1_ = 5;
    FUN_009a8ee0(local_28,local_58);
    local_8._0_1_ = 6;
    iVar5 = FUN_00475500();
    uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 7;
    uVar7 = (**(code **)(*piVar1 + 0x1c))();
    local_8._0_1_ = 8;
    FUN_00988fa0(uVar7);
    local_8._0_1_ = 9;
    FUN_00988f20(local_ac);
    local_8._0_1_ = 10;
    FUN_00988f20(uVar6);
    local_8._0_1_ = 0xb;
    FUN_00988f20(local_e4);
    local_8._0_1_ = 0xc;
    FUN_00988f20(uVar4);
    local_8._0_1_ = 0xd;
    FUN_00988f20(local_108);
    local_14 = 1;
    if (0xf < local_164) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_178);
    }
    local_164 = 0xf;
    local_168 = 0;
    local_178 = local_178 & 0xffffff00;
    if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_140);
    }
    local_12c = 0xf;
    local_130 = 0;
    local_140 = local_140 & 0xffffff00;
    if (0xf < local_27c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_290);
    }
    local_27c = 0xf;
    local_280 = 0;
    local_290 = local_290 & 0xffffff00;
    if (0xf < local_19c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1b0);
    }
    local_19c = 0xf;
    local_1a0 = 0;
    local_1b0 = local_1b0 & 0xffffff00;
    if (0xf < local_244) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_258);
    }
    local_244 = 0xf;
    local_248 = 0;
    local_258 = local_258 & 0xffffff00;
    if (0xf < local_1d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1e8);
    }
    local_1d4 = 0xf;
    local_1d8 = 0;
    local_1e8 = local_1e8 & 0xffffff00;
    if (0xf < local_2b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c8);
    }
    local_2b4 = 0xf;
    local_2b8 = 0;
    local_2c8 = local_2c8 & 0xffffff00;
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
    if (0xf < local_20c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_220[0]);
    }
    local_20c = 0xf;
    local_210 = 0;
    local_220[0] = local_220[0] & 0xffffff00;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_ac[0]);
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e4[0]);
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    uVar2 = local_108[0];
    uVar3 = local_f4;
  }
  if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar2);
  }
  ExceptionList = local_10;
  return param_1;
}

