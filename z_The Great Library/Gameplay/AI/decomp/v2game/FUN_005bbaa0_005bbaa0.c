// FUN_005bbaa0 @ 005bbaa0 body=[[005bbaa0, 005bbb80] [005bbb84, 005bbc0c] [005bbc10, 005bbcfd] [005bbd01, 005bbd1e] [005bbd22, 005bbd5c] [005bbd60, 005bbd7d] [005bbd81, 005bbef8] [005bbefc, 005bbf26] [005bbf2a, 005bbf4f] [005bbf53, 005bbf72] [005bbf76, 005bbf8c] [005bbf90, 005bbfbe] [005bbfc2, 005bbfe3] [005bbfe7, 005bc00c] [005bc010, 005bc039] [005bc03d, 005bc19e] [005bc1a2, 005bc1bd] [005bc1c1, 005bc1dd] [005bc1e1, 005bc206] [005bc20a, 005bc22f] [005bc233, 005bc26a] [005bc26e, 005bc28f] [005bc293, 005bc2b8] [005bc2bc, 005bc2e1] [005bc2e7, 005bc2ff] [005bc303, 005bc328] [005bc32c, 005bc34e] [005bc352, 005bc3e4] [005bc3e8, 005bc477] [005bc47b, 005bc50a] [005bc50e, 005bc59d] [005bc5a1, 005bc64f] [005bc653, 005bc701] [005bc705, 005bc778] [005bc77c, 005bc853] [005bc857, 005bc872] [005bc876, 005bc8a1] [005bc8a5, 005bc919] [005bc91d, 005bc991] [005bc995, 005bca09] [005bca0d, 005bca9f] [005bcaa3, 005bcb35] [005bcb39, 005bcbca] [005bcbce, 005bcc46] [005bcc4a, 005bcd02] [005bcd06, 005bcd25] [005bcd29, 005bcd50] [005bcd54, 005bcd78] [005bcd7c, 005bcdbb] [005bcdbf, 005bcdde] [005bcde2, 005bce9c] [005bcea0, 005bcfe7] [005bcfeb, 005bd00a] [005bd00e, 005bd02c] [005bd030, 005bd07f] [005bd083, 005bd09e] [005bd0a2, 005bd0be] [005bd0c7, 005bd0df] [005bd0e3, 005bd10c] [005bd110, 005bd124]]


undefined1 * FUN_005bbaa0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int in_ECX;
  undefined1 local_1f0 [8];
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  int local_1d4;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1cc;
  undefined1 local_1c8 [8];
  undefined4 uStack_1c0;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined4 local_1a0 [4];
  int local_190;
  uint local_18c;
  uint local_184 [4];
  int local_174;
  uint local_170;
  uint local_168 [4];
  int local_158;
  uint local_154;
  uint local_14c [4];
  int local_13c;
  uint local_138;
  undefined4 local_130;
  uint local_12c [4];
  undefined4 local_11c;
  uint local_118;
  uint local_110;
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [4];
  int local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_38;
  undefined1 *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b8e8b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_130 = 1;
  local_14 = in_ECX;
  if (param_4 == '\0') {
    puStack_1cc = (undefined1 *)0x0;
    local_1b4 = CONCAT44(local_1b4._4_4_,0xf);
    local_1bc = local_1bc & 0xffffffff;
    puStack_1d0 = &DAT_00ded94d;
    local_1c8[0] = 0;
    local_1d4 = 0x5bbb11;
    FUN_00409350();
    iVar4 = local_14;
    puStack_1cc = (undefined1 *)0x0;
    puStack_1d0 = (undefined1 *)0x1;
    local_8 = 1;
    local_1d4 = *(undefined4 *)(local_14 + 0xb0);
    local_34 = local_1f0;
    local_1dc = 0xf;
    uStack_1e4._4_4_ = 0;
    local_1f0[0] = 0;
    FUN_00409350("MAX_STRENGTH",0xc);
    local_8 = local_8 & 0xffffff00;
    uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
    local_1b4 = 0xffffffff00000000;
    local_8 = 2;
    local_1bc = CONCAT44(uVar3,0x5bbb6f);
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
      local_1b4 = CONCAT44(local_30[0],&UNK_005bbb81);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_1cc = (undefined1 *)0x0;
    local_1b4 = CONCAT44(local_1b4._4_4_,0xf);
    local_1bc = local_1bc & 0xffffffff;
    puStack_1d0 = &DAT_00ded94d;
    local_1c8[0] = 0;
    local_1d4 = 0x5bbb9f;
    FUN_00409350();
    puStack_1cc = (undefined1 *)0x1;
    puStack_1d0 = (undefined1 *)0x1;
    local_8 = 3;
    local_1d4 = *(undefined4 *)(iVar4 + 0xb4);
    local_34 = local_1f0;
    local_1dc = 0xf;
    uStack_1e4._4_4_ = 0;
    local_1f0[0] = 0;
    FUN_00409350("DEFAULT_ORG",0xb);
    local_8 = local_8 & 0xffffff00;
    uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
    local_1b4 = 0xffffffff00000000;
    local_8 = 4;
    local_1bc = CONCAT44(uVar3,0x5bbbfb);
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
      local_1b4 = CONCAT44(local_30[0],&UNK_005bbc0d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1b4 = 0x400dff69c;
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    local_1bc = CONCAT44(0x5bbc34,(undefined4)local_1bc);
    FUN_00409350();
    local_1b4 = CONCAT44(local_a0,local_4c);
    local_8 = 5;
    local_1bc = CONCAT44(0x5bbc4b,(undefined4)local_1bc);
    FUN_009a8ee0();
    local_8._0_1_ = 6;
    local_1b4 = CONCAT44(0x5bbc57,(undefined4)local_1b4);
    iVar4 = FUN_00475500();
    local_1bc = *(undefined8 *)(iVar4 + 0x6c);
    local_1b4 = *(undefined8 *)(iVar4 + 0x74);
    uStack_1c0 = 0x5bbc7d;
    puStack_1cc = (undefined1 *)FUN_009a9880();
    local_8._0_1_ = 7;
    puStack_1d0 = (undefined1 *)0x5bbc94;
    FUN_00988fa0();
    puStack_1cc = (undefined1 *)0x0;
    puStack_1d0 = (undefined1 *)0x0;
    local_8._0_1_ = 8;
    local_1d4 = *(undefined4 *)(local_14 + 0xc0);
    local_34 = local_1f0;
    local_1dc = 0xf;
    uStack_1e4._4_4_ = 0;
    local_1f0[0] = 0;
    FUN_00409350("BUILD_TIME",10);
    local_8._0_1_ = 7;
    uVar3 = FUN_005bb7d0(local_68,param_2,param_3);
    local_1b4 = 0xffffffff00000000;
    local_8._0_1_ = 9;
    local_1bc = CONCAT44(uVar3,0x5bbcef);
    FUN_00448aa0();
    if (0xf < local_54) {
      local_1b4 = CONCAT44(local_68[0],&UNK_005bbcfe);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_c4) {
      local_1b4 = CONCAT44(local_d8[0],&UNK_005bbd1f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,10);
    local_1b4 = CONCAT44(0x5bbd45,(undefined4)local_1b4);
    FUN_009adb70();
    if (local_48 != 0) {
      local_1b4 = CONCAT44(0x5bbd54,(undefined4)local_1b4);
      FUN_009e6a80();
      local_1b4 = CONCAT44(local_48,&UNK_005bbd5d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    if (0xf < local_8c) {
      local_1b4 = CONCAT44(local_a0[0],&UNK_005bbd7e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_1b4 = CONCAT44(local_68,1);
    local_1bc = CONCAT44(local_168,local_14 + 200);
    local_8 = 0xb;
    uStack_1c0 = 0x5bbdad;
    FUN_00561d10();
    local_8._0_1_ = 0xc;
    if (1 < local_158) {
      local_1b4 = 0x100dee2cc;
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8[0] = local_d8[0] & 0xffffff00;
      local_1bc = CONCAT44(0x5bbde7,(undefined4)local_1bc);
      FUN_00409350();
      local_8._0_1_ = 0xd;
      local_1b4 = 0x100dee2cc;
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      local_1bc = CONCAT44(0x5bbe0f,(undefined4)local_1bc);
      FUN_00409350();
      local_8._0_1_ = 0xe;
      local_1b4 = 0xa00e02780;
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4[0] = local_f4[0] & 0xffffff00;
      local_1bc = CONCAT44(0x5bbe37,(undefined4)local_1bc);
      FUN_00409350();
      local_1b4 = CONCAT44(local_f4,local_4c);
      local_8._0_1_ = 0xf;
      local_1bc = CONCAT44(0x5bbe4b,(undefined4)local_1bc);
      FUN_009a8ee0();
      local_8._0_1_ = 0x10;
      local_1b4 = CONCAT44(0x5bbe56,(undefined4)local_1b4);
      iVar4 = FUN_00475500();
      local_1bc = *(undefined8 *)(iVar4 + 0x6c);
      local_1b4 = *(undefined8 *)(iVar4 + 0x74);
      uStack_1c0 = 0x5bbe78;
      uVar3 = FUN_009a9880();
      local_8._0_1_ = 0x11;
      local_1b4 = CONCAT44(uVar3,0x5bbe88);
      FUN_00988f20();
      local_8._0_1_ = 0x12;
      local_1b4 = CONCAT44(local_a0,0x5bbea0);
      FUN_00988f20();
      local_8._0_1_ = 0x13;
      local_1b4 = CONCAT44(local_168,0x5bbeb8);
      FUN_00988f20();
      local_8._0_1_ = 0x14;
      local_1b4 = CONCAT44(local_d8,0x5bbed0);
      uVar3 = FUN_00988f20();
      local_1b4 = 0xffffffff00000000;
      local_8._0_1_ = 0x15;
      local_1bc = CONCAT44(uVar3,0x5bbee0);
      FUN_00448aa0();
      if (0xf < local_fc) {
        local_1b4 = CONCAT44(local_110,&UNK_005bbef9);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0xf;
      local_100 = 0;
      local_110 = local_110 & 0xffffff00;
      if (0xf < local_118) {
        local_1b4 = CONCAT44(local_12c[0],&UNK_005bbf27);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_118 = 0xf;
      local_11c = 0;
      local_12c[0] = local_12c[0] & 0xffffff00;
      if (0xf < local_a8) {
        local_1b4 = CONCAT44(local_bc[0],&UNK_005bbf50);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      if (0xf < local_70) {
        local_1b4 = CONCAT44(local_84[0],&UNK_005bbf73);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      if (0xf < local_1c) {
        local_1b4 = CONCAT44(local_30[0],&UNK_005bbf8d);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      local_8._0_1_ = 0x16;
      local_1b4 = CONCAT44(0x5bbfa7,(undefined4)local_1b4);
      FUN_009adb70();
      if (local_48 != 0) {
        local_1b4 = CONCAT44(0x5bbfb6,(undefined4)local_1b4);
        FUN_009e6a80();
        local_1b4 = CONCAT44(local_48,&UNK_005bbfbf);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      if (0xf < local_e0) {
        local_1b4 = CONCAT44(local_f4[0],&UNK_005bbfe4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4[0] = local_f4[0] & 0xffffff00;
      if (0xf < local_8c) {
        local_1b4 = CONCAT44(local_a0[0],&UNK_005bc00d);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0xc;
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      if (0xf < local_c4) {
        local_1b4 = CONCAT44(local_d8[0],&UNK_005bc03a);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = 0xc;
    local_1b4 = CONCAT44(local_68,3);
    local_1bc = CONCAT44(local_184,local_14 + 0x120);
    uStack_1c0 = 0x5bc059;
    FUN_00561d10();
    local_8._0_1_ = 0x17;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0x17;
    if (1 < local_174) {
      local_1b4 = 0x100dee2cc;
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8[0] = local_d8[0] & 0xffffff00;
      local_1bc = CONCAT44(0x5bc093,(undefined4)local_1bc);
      FUN_00409350();
      local_8._0_1_ = 0x18;
      local_1b4 = 0x100dee2cc;
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4[0] = local_f4[0] & 0xffffff00;
      local_1bc = CONCAT44(0x5bc0bb,(undefined4)local_1bc);
      FUN_00409350();
      local_8._0_1_ = 0x19;
      local_1b4 = 0xb00e0278c;
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      local_1bc = CONCAT44(0x5bc0e3,(undefined4)local_1bc);
      FUN_00409350();
      local_1b4 = CONCAT44(local_a0,local_4c);
      local_8._0_1_ = 0x1a;
      local_1bc = CONCAT44(0x5bc0f7,(undefined4)local_1bc);
      FUN_009a8ee0();
      local_8._0_1_ = 0x1b;
      local_1b4 = CONCAT44(0x5bc102,(undefined4)local_1b4);
      iVar4 = FUN_00475500();
      local_1bc = *(undefined8 *)(iVar4 + 0x6c);
      local_1b4 = *(undefined8 *)(iVar4 + 0x74);
      uStack_1c0 = 0x5bc127;
      uVar3 = FUN_009a9880();
      local_8._0_1_ = 0x1c;
      local_1b4 = CONCAT44(uVar3,0x5bc13a);
      FUN_00988f20();
      local_8._0_1_ = 0x1d;
      local_1b4 = CONCAT44(local_f4,0x5bc152);
      FUN_00988f20();
      local_8._0_1_ = 0x1e;
      local_1b4 = CONCAT44(local_184,0x5bc167);
      FUN_00988f20();
      local_8._0_1_ = 0x1f;
      local_1b4 = CONCAT44(local_d8,0x5bc17c);
      uVar3 = FUN_00988f20();
      local_1b4 = 0xffffffff00000000;
      local_8._0_1_ = 0x20;
      local_1bc = CONCAT44(uVar3,0x5bc18c);
      FUN_00448aa0();
      if (0xf < local_1c) {
        local_1b4 = CONCAT44(local_30[0],&UNK_005bc19f);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_70) {
        local_1b4 = CONCAT44(local_84[0],&UNK_005bc1be);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      if (0xf < local_a8) {
        local_1b4 = CONCAT44(local_bc[0],&UNK_005bc1de);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      if (0xf < local_118) {
        local_1b4 = CONCAT44(local_12c[0],&UNK_005bc207);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_118 = 0xf;
      local_11c = 0;
      local_12c[0] = local_12c[0] & 0xffffff00;
      if (0xf < local_fc) {
        local_1b4 = CONCAT44(local_110,&UNK_005bc230);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0xf;
      local_100 = 0;
      local_110 = local_110 & 0xffffff00;
      local_8._0_1_ = 0x21;
      local_1b4 = CONCAT44(0x5bc253,(undefined4)local_1b4);
      FUN_009adb70();
      if (local_48 != 0) {
        local_1b4 = CONCAT44(0x5bc262,(undefined4)local_1b4);
        FUN_009e6a80();
        local_1b4 = CONCAT44(local_48,&UNK_005bc26b);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      if (0xf < local_8c) {
        local_1b4 = CONCAT44(local_a0[0],&UNK_005bc290);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      if (0xf < local_e0) {
        local_1b4 = CONCAT44(local_f4[0],&UNK_005bc2b9);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4[0] = local_f4[0] & 0xffffff00;
      uVar2 = (undefined1)local_8;
      if (0xf < local_c4) {
        local_1b4 = CONCAT44(local_d8[0],&UNK_005bc2e2);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = uVar2;
    if (0xf < local_170) {
      local_1b4 = CONCAT44(local_184[0],&UNK_005bc300);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_170 = 0xf;
    local_174 = 0;
    local_184[0] = local_184[0] & 0xffffff00;
    if (0xf < local_154) {
      local_1b4 = CONCAT44(local_168[0],&UNK_005bc329);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_154 = 0xf;
    local_158 = 0;
    local_168[0] = local_168[0] & 0xffffff00;
    if (0xf < local_54) {
      local_1b4 = CONCAT44(local_68[0],&UNK_005bc34f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  puStack_1cc = (undefined1 *)0x0;
  local_1b4 = CONCAT44(local_1b4._4_4_,0xf);
  local_1bc = local_1bc & 0xffffffff;
  puStack_1d0 = &DAT_00ded94d;
  local_1c8[0] = 0;
  local_1d4 = 0x5bc372;
  FUN_00409350();
  iVar4 = local_14;
  puStack_1cc = (undefined1 *)0x2;
  puStack_1d0 = (undefined1 *)0x1;
  local_8 = 0x22;
  local_1d4 = *(undefined4 *)(local_14 + 0x228);
  local_34 = local_1f0;
  local_1dc = 0xf;
  uStack_1e4._4_4_ = 0;
  local_1f0[0] = 0;
  FUN_00409350("RECONAISSANCE",0xd);
  local_8 = local_8 & 0xffffff00;
  uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
  local_8 = 0x23;
  local_1b4 = 0xffffffff00000000;
  local_1bc = CONCAT44(uVar3,0x5bc3d3);
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    local_1b4 = CONCAT44(local_30[0],&UNK_005bc3e5);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_1cc = (undefined1 *)0x0;
  local_1b4 = CONCAT44(local_1b4._4_4_,0xf);
  local_1bc = local_1bc & 0xffffffff;
  puStack_1d0 = &DAT_00ded94d;
  local_1c8[0] = 0;
  local_1d4 = 0x5bc407;
  FUN_00409350();
  puStack_1cc = (undefined1 *)0x2;
  puStack_1d0 = (undefined1 *)0x1;
  local_8 = 0x24;
  local_1d4 = *(undefined4 *)(iVar4 + 0x22c);
  local_34 = local_1f0;
  local_1dc = 0xf;
  uStack_1e4._4_4_ = 0;
  local_1f0[0] = 0;
  FUN_00409350("SIEGE",5);
  local_8 = local_8 & 0xffffff00;
  uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
  local_1b4 = 0xffffffff00000000;
  local_8 = 0x25;
  local_1bc = CONCAT44(uVar3,0x5bc466);
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    local_1b4 = CONCAT44(local_30[0],&UNK_005bc478);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_1cc = (undefined1 *)0x0;
  local_1b4 = CONCAT44(local_1b4._4_4_,0xf);
  local_1bc = local_1bc & 0xffffffff;
  puStack_1d0 = &DAT_00ded94d;
  local_1c8[0] = 0;
  local_1d4 = 0x5bc49a;
  FUN_00409350();
  puStack_1cc = (undefined1 *)0x2;
  puStack_1d0 = (undefined1 *)0x1;
  local_8 = 0x26;
  local_1d4 = *(undefined4 *)(iVar4 + 0x230);
  local_34 = local_1f0;
  local_1dc = 0xf;
  uStack_1e4._4_4_ = 0;
  local_1f0[0] = 0;
  FUN_00409350("ATTACK",6);
  local_8 = local_8 & 0xffffff00;
  uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
  local_1b4 = 0xffffffff00000000;
  local_8 = 0x27;
  local_1bc = CONCAT44(uVar3,0x5bc4f9);
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    local_1b4 = CONCAT44(local_30[0],&UNK_005bc50b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_1cc = (undefined1 *)0x0;
  local_1b4 = CONCAT44(local_1b4._4_4_,0xf);
  local_1bc = local_1bc & 0xffffffff;
  puStack_1d0 = &DAT_00ded94d;
  local_1c8[0] = 0;
  local_1d4 = 0x5bc52d;
  FUN_00409350();
  puStack_1cc = (undefined1 *)0x2;
  puStack_1d0 = (undefined1 *)0x1;
  local_8 = 0x28;
  local_1d4 = *(undefined4 *)(iVar4 + 0x234);
  local_34 = local_1f0;
  local_1dc = 0xf;
  uStack_1e4._4_4_ = 0;
  local_1f0[0] = 0;
  FUN_00409350("DEFENCE",7);
  local_8 = local_8 & 0xffffff00;
  uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
  local_1b4 = 0xffffffff00000000;
  local_8 = 0x29;
  local_1bc = CONCAT44(uVar3,0x5bc58c);
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    local_1b4 = CONCAT44(local_30[0],&UNK_005bc59e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = local_1c8;
  puStack_1cc = (undefined1 *)0x1;
  local_1b4 = CONCAT44(local_1b4._4_4_,0xf);
  local_1bc = local_1bc & 0xffffffff;
  puStack_1d0 = &DAT_00df9644;
  local_1c8[0] = 0;
  local_1d4 = 0x5bc5c1;
  FUN_00409350();
  puStack_1cc = (undefined1 *)0x0;
  puStack_1d0 = (undefined1 *)0x1;
  local_8 = 0x2a;
  uStack_1e4._0_4_ = *(int *)(iVar4 + 0x238);
  uStack_1d8 = 0;
  uStack_1e4._4_4_ = (int)uStack_1e4 >> 0x1f;
  local_1dc = 100000;
  uStack_1e8 = 0x5bc5e6;
  uStack_1e4 = __allmul();
  uStack_1d8 = 0;
  local_1dc = 1000;
  uStack_1e8 = 0x5bc5f3;
  __alldiv();
  local_1dc = 0xf;
  uStack_1e4._4_4_ = 0;
  local_1f0[0] = 0;
  FUN_00409350("DISCIPLINE",10);
  local_8 = local_8 & 0xffffff00;
  uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
  local_1b4 = 0xffffffff00000000;
  local_8 = 0x2b;
  local_1bc = CONCAT44(uVar3,0x5bc63e);
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    local_1b4 = CONCAT44(local_30[0],&UNK_005bc650);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = local_1c8;
  puStack_1cc = (undefined1 *)0x1;
  local_1b4 = CONCAT44(local_1b4._4_4_,0xf);
  local_1bc = local_1bc & 0xffffffff;
  puStack_1d0 = &DAT_00df9644;
  local_1c8[0] = 0;
  local_1d4 = 0x5bc673;
  FUN_00409350();
  puStack_1cc = (undefined1 *)0x0;
  puStack_1d0 = (undefined1 *)0x1;
  local_8 = 0x2c;
  uStack_1e4._0_4_ = *(int *)(iVar4 + 0x23c);
  uStack_1d8 = 0;
  uStack_1e4._4_4_ = (int)uStack_1e4 >> 0x1f;
  local_1dc = 100000;
  uStack_1e8 = 0x5bc698;
  uStack_1e4 = __allmul();
  uStack_1d8 = 0;
  local_1dc = 1000;
  uStack_1e8 = 0x5bc6a5;
  __alldiv();
  local_1dc = 0xf;
  uStack_1e4._4_4_ = 0;
  local_1f0[0] = 0;
  FUN_00409350("SUPPORT",7);
  local_8 = local_8 & 0xffffff00;
  uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
  local_1b4 = 0xffffffff00000000;
  local_8 = 0x2d;
  local_1bc = CONCAT44(uVar3,0x5bc6f0);
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    local_1b4 = CONCAT44(local_30[0],&UNK_005bc702);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_1cc = &DAT_00ded94d;
  puStack_1d0 = (undefined1 *)0x5bc717;
  FUN_004471e0();
  puStack_1cc = (undefined1 *)0x0;
  puStack_1d0 = (undefined1 *)0x1;
  local_8 = 0x2e;
  local_1d4 = *(undefined4 *)(iVar4 + 0x240);
  local_34 = local_1f0;
  FUN_004471e0("Maneuver");
  local_8 = local_8 & 0xffffff00;
  uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
  local_1b4 = 0xffffffff00000000;
  local_8 = 0x2f;
  local_1bc = CONCAT44(uVar3,0x5bc767);
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    local_1b4 = CONCAT44(local_30[0],&UNK_005bc779);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1b4 = 0x300e027e0;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_1bc = CONCAT44(0x5bc798,(undefined4)local_1bc);
  FUN_00409350();
  local_1b4 = CONCAT44(local_68,local_4c);
  local_8 = 0x30;
  local_1bc = CONCAT44(0x5bc7ac,(undefined4)local_1bc);
  FUN_009a8ee0();
  local_8._0_1_ = 0x31;
  local_1b4 = CONCAT44(0x5bc7b7,(undefined4)local_1b4);
  iVar4 = FUN_00475500();
  local_1bc = *(undefined8 *)(iVar4 + 0x6c);
  local_1b4 = *(undefined8 *)(iVar4 + 0x74);
  uStack_1c0 = 0x5bc7d9;
  puStack_1cc = (undefined1 *)FUN_009a9880();
  local_8._0_1_ = 0x32;
  puStack_1d0 = (undefined1 *)0x5bc7f0;
  FUN_00988fa0();
  puStack_1cc = (undefined1 *)0x2;
  puStack_1d0 = (undefined1 *)0x1;
  local_8._0_1_ = 0x33;
  local_1d4 = *(undefined4 *)(local_14 + 0xb8);
  local_34 = local_1f0;
  FUN_004471e0("MAXIMUM_SPEED");
  local_8._0_1_ = 0x32;
  uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
  local_8._0_1_ = 0x34;
  local_1b4 = 0xffffffff00000000;
  local_1bc = CONCAT44(uVar3,0x5bc845);
  FUN_00448aa0();
  if (local_1c < 0x10) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_70) {
      local_1b4 = CONCAT44(local_84[0],&UNK_005bc873);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_8._0_1_ = 0x30;
    local_1b4 = CONCAT44(local_4c,0x5bc890);
    FUN_009a9740();
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_54) {
      local_1b4 = CONCAT44(local_68[0],&UNK_005bc8a2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_1cc = &DAT_00ded94d;
    puStack_1d0 = (undefined1 *)0x5bc8b7;
    FUN_004471e0();
    puStack_1cc = (undefined1 *)0x2;
    puStack_1d0 = (undefined1 *)0x1;
    local_8 = 0x35;
    local_1d4 = *(undefined4 *)(local_14 + 0x248);
    FUN_004471e0("GUN_POWER");
    local_8 = local_8 & 0xffffff00;
    uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
    local_1b4 = 0xffffffff00000000;
    local_8 = 0x36;
    local_1bc = CONCAT44(uVar3,0x5bc908);
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
      local_1b4 = CONCAT44(local_30[0],&UNK_005bc91a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_1cc = &DAT_00ded94d;
    puStack_1d0 = (undefined1 *)0x5bc92f;
    FUN_004471e0();
    puStack_1cc = (undefined1 *)0x2;
    puStack_1d0 = (undefined1 *)0x1;
    local_8 = 0x37;
    local_1d4 = *(undefined4 *)(local_14 + 0x25c);
    FUN_004471e0("TORPEDO_ATTACK");
    local_8 = local_8 & 0xffffff00;
    uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
    local_1b4 = 0xffffffff00000000;
    local_8 = 0x38;
    local_1bc = CONCAT44(uVar3,0x5bc980);
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
      local_1b4 = CONCAT44(local_30[0],&UNK_005bc992);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_1cc = &DAT_00ded94d;
    puStack_1d0 = (undefined1 *)0x5bc9a7;
    FUN_004471e0();
    puStack_1cc = (undefined1 *)0x2;
    puStack_1d0 = (undefined1 *)0x1;
    local_8 = 0x39;
    local_1d4 = *(undefined4 *)(local_14 + 0x244);
    FUN_004471e0(&DAT_00e01e20);
    local_8 = local_8 & 0xffffff00;
    uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
    local_1b4 = 0xffffffff00000000;
    local_8 = 0x3a;
    local_1bc = CONCAT44(uVar3,0x5bc9f8);
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
      local_1b4 = CONCAT44(local_30[0],&UNK_005bca0a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_1cc = &DAT_00ded94d;
    puStack_1d0 = (undefined1 *)0x5bca1f;
    FUN_004471e0();
    puStack_1cc = (undefined1 *)0x0;
    puStack_1d0 = (undefined1 *)0x1;
    local_8 = 0x3b;
    uStack_1e4._0_4_ = *(int *)(local_14 + 0x24c);
    uStack_1d8 = 0;
    uStack_1e4._4_4_ = (int)uStack_1e4 >> 0x1f;
    local_1dc = 100000;
    uStack_1e8 = 0x5bca47;
    uStack_1e4 = __allmul();
    uStack_1d8 = 0;
    local_1dc = 1000;
    uStack_1e8 = 0x5bca54;
    __alldiv();
    FUN_004471e0("FIRE_RANGE");
    local_8 = local_8 & 0xffffff00;
    uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
    local_1b4 = 0xffffffff00000000;
    local_8 = 0x3c;
    local_1bc = CONCAT44(uVar3,0x5bca8e);
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
      local_1b4 = CONCAT44(local_30[0],&UNK_005bcaa0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_1cc = &DAT_00df9644;
    puStack_1d0 = (undefined1 *)0x5bcab5;
    FUN_004471e0();
    puStack_1cc = (undefined1 *)0x0;
    puStack_1d0 = (undefined1 *)0x1;
    local_8 = 0x3d;
    uStack_1e4._0_4_ = *(int *)(local_14 + 0x250);
    uStack_1d8 = 0;
    uStack_1e4._4_4_ = (int)uStack_1e4 >> 0x1f;
    local_1dc = 100000;
    uStack_1e8 = 0x5bcadd;
    uStack_1e4 = __allmul();
    uStack_1d8 = 0;
    local_1dc = 1000;
    uStack_1e8 = 0x5bcaea;
    __alldiv();
    FUN_004471e0("EVASION");
    local_8 = local_8 & 0xffffff00;
    uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
    local_1b4 = 0xffffffff00000000;
    local_8 = 0x3e;
    local_1bc = CONCAT44(uVar3,0x5bcb24);
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
      local_1b4 = CONCAT44(local_30[0],&UNK_005bcb36);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_1cc = &DAT_00df9644;
    puStack_1d0 = (undefined1 *)0x5bcb4b;
    FUN_004471e0();
    puStack_1cc = (undefined1 *)0x0;
    puStack_1d0 = (undefined1 *)0x0;
    local_8 = 0x3f;
    uStack_1e4._0_4_ = *(int *)(local_14 + 0xc4);
    uStack_1d8 = 0;
    uStack_1e4._4_4_ = (int)uStack_1e4 >> 0x1f;
    local_1dc = 100000;
    uStack_1e8 = 0x5bcb72;
    uStack_1e4 = __allmul();
    uStack_1d8 = 0;
    local_1dc = 1000;
    uStack_1e8 = 0x5bcb7f;
    __alldiv();
    FUN_004471e0("SUPPLY_CONSUMPTION");
    local_8 = local_8 & 0xffffff00;
    uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
    local_1b4 = 0xffffffff00000000;
    local_8 = 0x40;
    local_1bc = CONCAT44(uVar3,0x5bcbb9);
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (local_1c < 0x10) {
      puStack_1cc = &DAT_00ded94d;
      puStack_1d0 = (undefined1 *)0x5bcbe0;
      FUN_004471e0();
      local_8 = 0x41;
      puStack_1cc = (undefined1 *)0x0;
      local_1d4 = *(int *)(local_14 + 0xa8) * 1000;
      puStack_1d0 = (undefined1 *)0x0;
      FUN_004471e0("SUPPLY_LOAD");
      local_8 = local_8 & 0xffffff00;
      uVar3 = FUN_005bb7d0(local_30,param_2,param_3);
      local_1b4 = 0xffffffff00000000;
      local_8 = 0x42;
      local_1bc = CONCAT44(uVar3,0x5bcc35);
      FUN_00448aa0();
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_1c) {
        local_1b4 = CONCAT44(local_30[0],&UNK_005bcc47);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1b4 = CONCAT44(local_1a0,local_14 + 0x70);
      local_1bc = CONCAT44(0x5bcc5d,(undefined4)local_1bc);
      FUN_005db4c0();
      local_8._0_1_ = 0x43;
      local_8._1_3_ = 0;
      if (local_190 != 0) {
        local_1b4 = CONCAT44(0x5bcc80,(undefined4)local_1b4);
        FUN_009885d0();
        local_8._0_1_ = 0x44;
        local_1b4 = CONCAT44(0x5bcc91,(undefined4)local_1b4);
        FUN_009885d0();
        local_1b4 = CONCAT44(local_68,local_4c);
        local_8._0_1_ = 0x45;
        local_1bc = CONCAT44(0x5bcca1,(undefined4)local_1bc);
        FUN_009a8ee0();
        local_8._0_1_ = 0x46;
        local_1b4 = CONCAT44(0x5bccad,(undefined4)local_1b4);
        iVar4 = FUN_00475500();
        local_1bc = *(undefined8 *)(iVar4 + 0x6c);
        local_1b4 = *(undefined8 *)(iVar4 + 0x74);
        uStack_1c0 = 0x5bccd0;
        FUN_009a9880();
        local_8._0_1_ = 0x47;
        local_1b4 = CONCAT44(local_bc,0x5bcce5);
        uVar3 = FUN_00988f20();
        local_1b4 = 0xffffffff00000000;
        local_8._0_1_ = 0x48;
        local_1bc = CONCAT44(uVar3,0x5bccf4);
        FUN_00448aa0();
        if (0xf < local_1c) {
          local_1b4 = CONCAT44(local_30[0],&UNK_005bcd03);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_70) {
          local_1b4 = CONCAT44(local_84[0],&UNK_005bcd26);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_70 = 0xf;
        local_74 = 0;
        local_84[0] = local_84[0] & 0xffffff00;
        local_8._0_1_ = 0x45;
        local_1b4 = CONCAT44(local_4c,0x5bcd43);
        FUN_009a9740();
        if (0xf < local_54) {
          local_1b4 = CONCAT44(local_68[0],&UNK_005bcd51);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x43;
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if (0xf < local_a8) {
          local_1b4 = CONCAT44(local_bc[0],&UNK_005bcd79);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1b4 = CONCAT44(0x5bcd89,(undefined4)local_1b4);
        FUN_009885d0();
        local_8._0_1_ = 0x49;
        local_1b4 = CONCAT44(local_84,0x5bcd9e);
        uVar3 = FUN_00988f20();
        local_1b4 = 0xffffffff00000000;
        local_8._0_1_ = 0x4a;
        local_1bc = CONCAT44(uVar3,0x5bcdad);
        FUN_00448aa0();
        if (0xf < local_1c) {
          local_1b4 = CONCAT44(local_30[0],&UNK_005bcdbc);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x43;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_70) {
          local_1b4 = CONCAT44(local_84[0],&UNK_005bcddf);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_8._0_1_ = 0x43;
      local_1b4 = CONCAT44(local_14c,local_14 + 0x88);
      local_1bc = CONCAT44(0x5bcdf7,(undefined4)local_1bc);
      FUN_005db4c0();
      local_8._0_1_ = 0x4b;
      uVar2 = (undefined1)local_8;
      local_8._0_1_ = 0x4b;
      if (local_13c != 0) {
        local_1b4 = CONCAT44(0x5bce17,(undefined4)local_1b4);
        FUN_009885d0();
        local_8._0_1_ = 0x4c;
        local_1b4 = CONCAT44(0x5bce28,(undefined4)local_1b4);
        FUN_009885d0();
        local_1b4 = CONCAT44(local_84,local_4c);
        local_8._0_1_ = 0x4d;
        local_1bc = CONCAT44(0x5bce38,(undefined4)local_1bc);
        FUN_009a8ee0();
        local_8._0_1_ = 0x4e;
        local_1b4 = CONCAT44(0x5bce44,(undefined4)local_1b4);
        iVar4 = FUN_00475500();
        local_1bc = *(undefined8 *)(iVar4 + 0x6c);
        local_1b4 = *(undefined8 *)(iVar4 + 0x74);
        uStack_1c0 = 0x5bce6a;
        FUN_009a9880();
        local_8._0_1_ = 0x4f;
        local_1b4 = CONCAT44(local_bc,0x5bce7f);
        uVar3 = FUN_00988f20();
        local_1b4 = 0xffffffff00000000;
        local_8._0_1_ = 0x50;
        local_1bc = CONCAT44(uVar3,0x5bce8e);
        FUN_00448aa0();
        if (0xf < local_1c) {
          local_1b4 = CONCAT44(local_30[0],&UNK_005bce9d);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        local_1b4 = CONCAT44(0x5bceb8,(undefined4)local_1b4);
        FUN_00408ad0();
        local_8._0_1_ = 0x4d;
        local_1b4 = CONCAT44(local_4c,0x5bcec5);
        FUN_009a9740();
        local_1b4 = CONCAT44(0x5bcecd,(undefined4)local_1b4);
        FUN_00408ad0();
        local_8._0_1_ = 0x4b;
        local_1b4 = CONCAT44(0x5bcedc,(undefined4)local_1b4);
        FUN_00408ad0();
        local_1b4 = CONCAT44(0x5bceec,(undefined4)local_1b4);
        FUN_009885d0();
        local_8._0_1_ = 0x51;
        local_1b4 = CONCAT44(local_12c,0x5bcf04);
        uVar3 = FUN_00988f20();
        local_1b4 = 0xffffffff00000000;
        local_8._0_1_ = 0x52;
        local_1bc = CONCAT44(uVar3,0x5bcf13);
        FUN_00448aa0();
        local_1b4 = CONCAT44(0x5bcf1a,(undefined4)local_1b4);
        FUN_00408ad0();
        local_8._0_1_ = 0x4b;
        local_1b4 = CONCAT44(0x5bcf29,(undefined4)local_1b4);
        FUN_00408ad0();
        uVar2 = (undefined1)local_8;
      }
      local_8._0_1_ = uVar2;
      iVar4 = DAT_0125870c;
      local_38 = *(int **)(DAT_0125870c + 0x2248);
      puVar5 = (uint *)(DAT_0125870c + 0x2248);
      uVar2 = (undefined1)local_8;
      do {
        local_8._0_1_ = uVar2;
        if ((local_38 < (int *)*puVar5) || (*(int **)(iVar4 + 0x224c) <= local_38)) {
          if (0xf < local_138) {
            local_1b4 = CONCAT44(local_14c[0],&UNK_005bd0e0);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_138 = 0xf;
          local_13c = 0;
          local_14c[0] = local_14c[0] & 0xffffff00;
          if (local_18c < 0x10) {
            ExceptionList = local_10;
            return param_1;
          }
          local_1b4 = CONCAT44(local_1a0[0],&UNK_005bd10d);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        piVar1 = (int *)*local_38;
        local_38 = local_38 + 1;
        local_1b4 = CONCAT44(local_bc,*(int *)(local_14 + 0x60) + piVar1[0xc] * 0x18);
        local_1bc = CONCAT44(0x5bcf7b,(undefined4)local_1bc);
        FUN_005db4c0();
        local_8._0_1_ = 0x53;
        if (local_ac != 0) {
          local_1b4 = 0x200df9638;
          local_54 = 0xf;
          local_58 = 0;
          local_68[0] = local_68[0] & 0xffffff00;
          local_1bc = CONCAT44(0x5bcfa7,(undefined4)local_1bc);
          FUN_00409350();
          local_8._0_1_ = 0x54;
          local_1b4 = CONCAT44(local_84,0x5bcfb8);
          (**(code **)(*piVar1 + 0x18))();
          local_8._0_1_ = 0x55;
          local_1b4 = CONCAT44(local_68,0x5bcfca);
          uVar3 = FUN_00988f20();
          local_1b4 = 0xffffffff00000000;
          local_8._0_1_ = 0x56;
          local_1bc = CONCAT44(uVar3,0x5bcfd9);
          FUN_00448aa0();
          if (0xf < local_1c) {
            local_1b4 = CONCAT44(local_30[0],&UNK_005bcfe8);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (0xf < local_70) {
            local_1b4 = CONCAT44(local_84[0],&UNK_005bd00b);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0x53;
          local_70 = 0xf;
          local_74 = 0;
          local_84[0] = local_84[0] & 0xffffff00;
          if (0xf < local_54) {
            local_1b4 = CONCAT44(local_68[0],&UNK_005bd02d);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1b4 = 0x100dee2cc;
          local_54 = 0xf;
          local_58 = 0;
          local_68[0] = local_68[0] & 0xffffff00;
          local_1bc = CONCAT44(0x5bd04c,(undefined4)local_1bc);
          FUN_00409350();
          local_8._0_1_ = 0x57;
          local_1b4 = CONCAT44(local_68,0x5bd062);
          uVar3 = FUN_00988f20();
          local_1b4 = 0xffffffff00000000;
          local_8._0_1_ = 0x58;
          local_1bc = CONCAT44(uVar3,0x5bd071);
          FUN_00448aa0();
          if (0xf < local_1c) {
            local_1b4 = CONCAT44(local_30[0],&UNK_005bd080);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (0xf < local_54) {
            local_1b4 = CONCAT44(local_68[0],&UNK_005bd09f);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        local_8._0_1_ = 0x4b;
        uVar2 = (undefined1)local_8;
        local_8._0_1_ = 0x4b;
        if (0xf < local_a8) {
          local_1b4 = CONCAT44(local_bc[0],&UNK_005bd0bf);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      } while( true );
    }
    local_1b4 = CONCAT44(local_30[0],&UNK_005bcbcb);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1b4 = CONCAT44(local_30[0],&UNK_005bc854);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

