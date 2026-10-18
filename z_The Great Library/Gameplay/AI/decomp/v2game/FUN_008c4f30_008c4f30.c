// FUN_008c4f30 @ 008c4f30 body=[[008c4f30, 008c50f0] [008c50f4, 008c511e] [008c5122, 008c5147] [008c514b, 008c5170] [008c5174, 008c5199] [008c519d, 008c51c2] [008c51c6, 008c51fb] [008c51ff, 008c521b] [008c521f, 008c5246] [008c524a, 008c5263] [008c5267, 008c5283] [008c5287, 008c543b] [008c543f, 008c5469] [008c546d, 008c5492] [008c5496, 008c54bb] [008c54bf, 008c54e4] [008c54e8, 008c550d] [008c5511, 008c5546] [008c554a, 008c5566] [008c556a, 008c5594] [008c5598, 008c55b7] [008c55bb, 008c55d7] [008c55db, 008c5600] [008c5604, 008c5619]]


undefined4 FUN_008c4f30(undefined4 param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint local_2a8 [4];
  undefined4 local_298;
  uint local_294;
  uint local_28c;
  undefined4 local_27c;
  uint local_278;
  uint local_270;
  undefined4 local_260;
  uint local_25c;
  uint local_254 [4];
  undefined4 local_244;
  uint local_240;
  uint local_238;
  undefined4 local_228;
  uint local_224;
  uint local_21c;
  undefined4 local_20c;
  uint local_208;
  uint local_200;
  undefined4 local_1f0;
  uint local_1ec;
  uint local_1e4;
  undefined4 local_1d4;
  uint local_1d0;
  uint local_1c8;
  undefined4 local_1b8;
  uint local_1b4;
  uint local_1ac;
  undefined4 local_19c;
  uint local_198;
  uint local_190;
  undefined4 local_180;
  uint local_17c;
  uint local_174;
  undefined4 local_164;
  uint local_160;
  uint local_158;
  undefined4 local_148;
  uint local_144;
  uint local_13c;
  undefined4 local_12c;
  uint local_128;
  uint local_120;
  undefined4 local_110;
  uint local_10c;
  uint local_104;
  undefined4 local_f4;
  uint local_f0;
  uint local_e8;
  undefined4 local_d8;
  uint local_d4;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b67349;
  local_10 = ExceptionList;
  local_18 = 0;
  if (param_3 == '\0') {
    local_10c = 0xf;
    local_110 = 0;
    local_120 = local_120 & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 0xe;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = local_b0 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xf;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x10;
    local_b8 = 0xf;
    local_bc = 0;
    local_cc = local_cc & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    local_14 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x18))(local_2a8);
    local_8._0_1_ = 0x12;
    FUN_009a8ee0(local_40,local_78);
    local_8._0_1_ = 0x13;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0x14;
    FUN_00974c50();
    local_8._0_1_ = 0x15;
    FUN_00988f20();
    local_8._0_1_ = 0x16;
    FUN_00988f20();
    local_8._0_1_ = 0x17;
    FUN_00988f20();
    local_8._0_1_ = 0x18;
    FUN_00988f20();
    local_8._0_1_ = 0x19;
    FUN_00988f20();
    local_18 = 1;
    if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_144 = 0xf;
    local_148 = 0;
    local_158 = local_158 & 0xffffff00;
    if (0xf < local_17c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_17c = 0xf;
    local_180 = 0;
    local_190 = local_190 & 0xffffff00;
    if (0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1b4 = 0xf;
    local_1b8 = 0;
    local_1c8 = local_1c8 & 0xffffff00;
    if (0xf < local_1ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1ec = 0xf;
    local_1f0 = 0;
    local_200 = local_200 & 0xffffff00;
    if (0xf < local_224) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_224 = 0xf;
    local_228 = 0;
    local_238 = local_238 & 0xffffff00;
    if (0xf < local_25c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_25c = 0xf;
    local_260 = 0;
    local_270 = local_270 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x1a);
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    if (0xf < local_294) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_294 = 0xf;
    local_298 = 0;
    local_2a8[0] = local_2a8[0] & 0xffffff00;
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b8 = 0xf;
    local_bc = 0;
    local_cc = local_cc & 0xffffff00;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = local_b0 & 0xffffff00;
    uVar1 = local_10c;
  }
  else {
    local_f0 = 0xf;
    local_f4 = 0;
    local_104 = local_104 & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 1;
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8 = local_e8 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    local_80 = 0xf;
    local_84 = 0;
    local_94 = local_94 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    local_14 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x18))(local_254);
    local_8._0_1_ = 5;
    FUN_009a8ee0(local_2c,local_5c);
    local_8._0_1_ = 6;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 7;
    FUN_00974c50();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00988f20();
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_8._0_1_ = 0xc;
    FUN_00988f20();
    local_18 = 1;
    if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_128 = 0xf;
    local_12c = 0;
    local_13c = local_13c & 0xffffff00;
    if (0xf < local_160) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_160 = 0xf;
    local_164 = 0;
    local_174 = local_174 & 0xffffff00;
    if (0xf < local_208) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_208 = 0xf;
    local_20c = 0;
    local_21c = local_21c & 0xffffff00;
    if (0xf < local_198) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_198 = 0xf;
    local_19c = 0;
    local_1ac = local_1ac & 0xffffff00;
    if (0xf < local_278) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_278 = 0xf;
    local_27c = 0;
    local_28c = local_28c & 0xffffff00;
    if (0xf < local_1d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1d0 = 0xf;
    local_1d4 = 0;
    local_1e4 = local_1e4 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_240) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_240 = 0xf;
    local_244 = 0;
    local_254[0] = local_254[0] & 0xffffff00;
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94 = local_94 & 0xffffff00;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8 = local_e8 & 0xffffff00;
    uVar1 = local_f0;
  }
  if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

