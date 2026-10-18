// FUN_00689420 @ 00689420  (requested 0068A830, first bytes: 55 8B EC 6A FF 68 B6 BB)


void FUN_00689420(int param_1)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 ****ppppuVar7;
  undefined4 extraout_ECX_06;
  undefined4 *puVar8;
  int *piVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined **local_7a0 [48];
  undefined **local_6e0 [48];
  undefined **local_620 [48];
  undefined **local_560 [48];
  undefined **local_4a0 [48];
  undefined **local_3e0 [48];
  undefined **local_320 [19];
  uint local_2d4;
  undefined4 local_2c4;
  uint local_2c0;
  uint local_2b8;
  undefined4 local_2a8;
  uint local_2a4;
  uint local_29c;
  undefined4 local_28c;
  uint local_288;
  uint local_280 [4];
  undefined4 local_270;
  uint local_26c;
  uint local_264;
  undefined4 local_254;
  uint local_250;
  uint local_248 [4];
  undefined4 local_238;
  uint local_234;
  uint local_22c;
  undefined4 local_21c;
  uint local_218;
  undefined4 ***local_210 [4];
  undefined4 local_200;
  uint local_1fc;
  undefined4 ***local_1f0 [4];
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 ***local_1d0 [4];
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 ***local_1b0 [4];
  undefined4 local_1a0;
  uint local_19c;
  undefined4 ***local_190 [4];
  undefined4 local_180;
  uint local_17c;
  undefined4 ***local_170 [4];
  undefined4 local_160;
  uint local_15c;
  uint local_14c [4];
  undefined4 local_13c;
  uint local_138;
  uint local_130 [4];
  undefined4 local_120;
  uint local_11c;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined4 ***local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int local_30;
  undefined4 *local_2c;
  int *local_28;
  int *local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b8bbb6;
  local_10 = ExceptionList;
  local_1c = 1;
  ExceptionList = &local_10;
  ppvVar2 = &local_10;
  if (4 < (int)(*(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) & 0xfffffffcU)) {
    do {
      ExceptionList = ppvVar2;
      local_8 = 0xffffffff;
      piVar9 = *(int **)(*(int *)(param_1 + 0xacc) + local_1c * 4);
      local_28 = piVar9;
      if ((piVar9[0x56] == 0) && (0 < *(int *)(*(int *)(piVar9[0x46] + DAT_01258720 * 4) + 0x20))) {
        local_11c = 0xf;
        local_120 = 0;
        local_130[0] = local_130[0] & 0xffffff00;
        FUN_00409350("gamestate.cpp",0xd);
        pcVar13 = " but no port is set in this province. ";
        local_8 = 0;
        iVar5 = piVar9[0x16];
        pcVar11 = " : Navalbase defined for #";
        FUN_0043acd0(param_1 + 0xb0c,local_1d0);
        local_8._0_1_ = 1;
        uVar4 = FUN_004015b0(local_130,0xd33,0x10004,pcVar11,iVar5,pcVar13);
        local_8._0_1_ = 4;
        ppppuVar7 = (undefined4 ****)local_1d0[0];
        if (local_1bc < 0x10) {
          ppppuVar7 = local_1d0;
        }
        local_24 = (int *)FUN_00418e30(uVar4,ppppuVar7);
        local_8._0_1_ = 3;
        if (0xf < local_1bc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_1d0[0]);
        }
        local_1bc = 0xf;
        local_1c0 = 0;
        local_1d0[0] = (undefined4 ***)((uint)local_1d0[0] & 0xffffff00);
        uVar4 = FUN_00418e30(local_24);
        uVar4 = FUN_00455470(uVar4);
        uVar4 = FUN_00418e30(uVar4);
        FUN_00401280(uVar4);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_00987ac0(local_3e0);
        local_3e0[0] = std::ios_base::vftable;
        FUN_00aad52d(local_3e0);
        local_8 = 0xffffffff;
        if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_130[0]);
        }
        iVar5 = *(int *)(piVar9[0x46] + DAT_01258720 * 4);
        *(undefined4 *)(iVar5 + 0x20) = 0;
        iVar1 = *(int *)(*(int *)(iVar5 + 0x18) + 0xc4);
        local_11c = 0xf;
        local_120 = 0;
        local_130[0] = local_130[0] & 0xffffff00;
        if (iVar1 * 1000 < 0) {
          *(int *)(iVar5 + 0x20) = iVar1 * 1000;
        }
        if (*(int *)(iVar5 + 0x20) < 0) {
          *(undefined4 *)(iVar5 + 0x20) = 0;
        }
        *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar5 + 0x20);
      }
      local_8 = 0xffffffff;
      if (piVar9[0x4d] != piVar9[0x4b]) {
        local_30 = piVar9[0x4c];
        iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar9[0x4d] * 4);
        if ((piVar9[0x4b] == *(int *)(iVar5 + 0x20)) ||
           (((*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + piVar9[0x4b] * 4) + 0x34) == 0 &&
             ((((char)piVar9[0x4a] != 'R' || (*(char *)((int)piVar9 + 0x129) != 'E')) ||
              (*(char *)((int)piVar9 + 0x12a) != 'B')))) &&
            (((*(char *)(iVar5 + 0x1c) != 'R' || (*(char *)(iVar5 + 0x1d) != 'E')) ||
             (*(char *)(iVar5 + 0x1e) != 'B')))))) {
          local_ac = 0xf;
          local_b0 = 0;
          local_c0[0] = local_c0[0] & 0xffffff00;
          FUN_00409350("gamestate.cpp",0xd);
          local_8 = 5;
          local_18 = (int *)(**(code **)(*piVar9 + 0x1c))
                                      (local_248," )   (Owner = ",piVar9 + 0x4a," ) (Controller = ",
                                       piVar9 + 0x4c," ) when not at war.");
          puVar10 = &DAT_00dfbfa4;
          local_8._0_1_ = 6;
          iVar5 = piVar9[0x16];
          pcVar11 = " : Inconsistency in owner/controller for #";
          FUN_0043acd0(param_1 + 0xb0c,local_1b0);
          local_8._0_1_ = 7;
          uVar4 = FUN_004015b0(local_c0,0xd3a,0x10004,pcVar11,iVar5,puVar10);
          local_8._0_1_ = 10;
          ppppuVar7 = (undefined4 ****)local_1b0[0];
          if (local_19c < 0x10) {
            ppppuVar7 = local_1b0;
          }
          local_24 = (int *)FUN_00418e30(uVar4,ppppuVar7);
          local_8._0_1_ = 9;
          if (0xf < local_19c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_1b0[0]);
          }
          local_19c = 0xf;
          local_1a0 = 0;
          local_1b0[0] = (undefined4 ***)((uint)local_1b0[0] & 0xffffff00);
          uVar4 = FUN_00418e30(local_24);
          uVar4 = FUN_00455470(uVar4);
          uVar4 = FUN_00418e30(uVar4);
          piVar6 = local_18;
          if (0xf < (uint)local_18[5]) {
            piVar6 = (int *)*local_18;
          }
          uVar4 = FUN_00418e30(uVar4,piVar6,piVar6);
          uVar4 = FUN_00418e30(uVar4);
          uVar4 = FUN_00418e30(uVar4);
          uVar4 = FUN_00418e30(uVar4);
          uVar4 = FUN_00418e30(uVar4);
          uVar4 = FUN_00418e30(uVar4);
          FUN_00401280(uVar4);
          local_8 = CONCAT31(local_8._1_3_,6);
          FUN_00987ac0(local_6e0);
          local_6e0[0] = std::ios_base::vftable;
          FUN_00aad52d(local_6e0);
          if (0xf < local_234) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_248[0]);
          }
          local_8 = 0xffffffff;
          local_234 = 0xf;
          local_238 = 0;
          local_248[0] = local_248[0] & 0xffffff00;
          if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_c0[0]);
          }
          local_ac = 0xf;
          local_b0 = 0;
          local_c0[0] = local_c0[0] & 0xffffff00;
        }
      }
      local_8 = 0xffffffff;
      if (*(char *)(piVar9[0x17] + 0x2a) != '\0') {
        local_20 = (undefined4 *)0x0;
        if (DAT_0131bb34 == (int *)0x0) {
          local_2c = (undefined4 *)FUN_00aae9af(0x188);
          local_8 = 0xb;
          if (local_2c == (undefined4 *)0x0) {
            local_18 = (int *)0x0;
          }
          else {
            local_18 = (int *)FUN_0041a160();
            piVar9 = local_28;
          }
          local_8 = 0xc;
          local_2c = (undefined4 *)0x0;
          if ((local_18 != DAT_0131bb34) && (local_24 = DAT_0131bb34, DAT_0131bb34 != (int *)0x0)) {
            FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_24);
          }
          DAT_0131bb34 = local_18;
        }
        local_8 = 0xffffffff;
        iVar5 = DAT_0131bb34[4] - DAT_0131bb34[3] >> 2;
        if (0 < iVar5) {
          local_18 = (int *)piVar9[0x65];
          puVar8 = local_20;
          local_28 = (int *)iVar5;
          do {
            for (iVar5 = *local_18; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x27c)) {
              puVar8 = (undefined4 *)((int)puVar8 + *(int *)(iVar5 + 0x58));
            }
            local_18 = local_18 + 4;
            local_28 = (int *)((int)local_28 + -1);
          } while (local_28 != (int *)0x0);
          local_28 = (int *)0x0;
          if (puVar8 != (undefined4 *)0x0) goto LAB_00689aef;
        }
        local_c8 = 0xf;
        local_cc = 0;
        local_dc[0] = local_dc[0] & 0xffffff00;
        FUN_00409350("gamestate.cpp",0xd);
        local_8 = 0xd;
        puVar8 = (undefined4 *)(**(code **)(*piVar9 + 0x1c))(local_280," has no population.");
        puVar12 = &DAT_00ded950;
        local_8._0_1_ = 0xe;
        FUN_0043acd0(param_1 + 0xb0c,local_190);
        local_8._0_1_ = 0xf;
        uVar4 = FUN_004015b0(local_dc,0xd4e,0x10004,puVar12);
        local_8._0_1_ = 0x12;
        ppppuVar7 = (undefined4 ****)local_190[0];
        if (local_17c < 0x10) {
          ppppuVar7 = local_190;
        }
        local_20 = (undefined4 *)FUN_00418e30(uVar4,ppppuVar7);
        local_8._0_1_ = 0x11;
        if (0xf < local_17c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_190[0]);
        }
        local_17c = 0xf;
        local_180 = 0;
        local_190[0] = (undefined4 ***)((uint)local_190[0] & 0xffffff00);
        uVar4 = FUN_00418e30(local_20);
        if (0xf < (uint)puVar8[5]) {
          puVar8 = (undefined4 *)*puVar8;
        }
        uVar4 = FUN_00418e30(uVar4,puVar8,extraout_ECX);
        uVar4 = FUN_00418e30(uVar4);
        FUN_00401280(uVar4);
        local_8 = CONCAT31(local_8._1_3_,0xe);
        FUN_00987ac0(local_560);
        local_560[0] = std::ios_base::vftable;
        FUN_00aad52d(local_560);
        if (0xf < local_26c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_280[0]);
        }
        local_8 = 0xffffffff;
        local_26c = 0xf;
        local_270 = 0;
        local_280[0] = local_280[0] & 0xffffff00;
        if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_dc[0]);
        }
        local_c8 = 0xf;
        local_cc = 0;
        local_dc[0] = local_dc[0] & 0xffffff00;
      }
LAB_00689aef:
      local_1c = local_1c + 1;
      ppvVar2 = ExceptionList;
    } while (local_1c < *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2);
  }
  local_8 = 0xffffffff;
  local_28 = (int *)0x1;
  if (4 < (int)(*(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) & 0xfffffffcU)) {
    do {
      local_18 = *(int **)(*(int *)(param_1 + 0xadc) + (int)local_28 * 4);
      if (((*(char *)((int)local_18 + 0x1c) != 'R') || (*(char *)((int)local_18 + 0x1d) != 'E')) ||
         (*(char *)((int)local_18 + 0x1e) != 'B')) {
        local_24 = (int *)DAT_01258a48;
        local_1c = 1;
        if (4 < (int)(*(int *)(DAT_01258a48 + 0x4c) - *(int *)(DAT_01258a48 + 0x48) & 0xfffffffcU))
        {
          do {
            iVar5 = *(int *)(*(int *)((int)local_24 + 0x48) + local_1c * 4);
            cVar3 = (**(code **)(**(int **)(*(int *)((int)local_18 + 0x850) +
                                           *(int *)(iVar5 + 0x50) * 4) + 0x34))();
            if (cVar3 == '\0') {
              local_58 = 0xf;
              local_5c = 0;
              local_6c[0] = local_6c[0] & 0xffffff00;
              FUN_00409350("gamestate.cpp",0xd);
              local_8 = 0x13;
              local_2c = (undefined4 *)FUN_00974c50(iVar5);
              local_8._0_1_ = 0x14;
              puVar8 = (undefined4 *)FUN_004f97a0(" has no social reform defined for ");
              puVar12 = &DAT_00ded950;
              local_8._0_1_ = 0x15;
              FUN_0043acd0(param_1 + 0xb0c,local_50);
              local_8._0_1_ = 0x16;
              uVar4 = FUN_004015b0(local_6c,0xd5d,0x10004,puVar12);
              local_8._0_1_ = 0x19;
              ppppuVar7 = (undefined4 ****)local_50[0];
              if (local_3c < 0x10) {
                ppppuVar7 = local_50;
              }
              local_20 = (undefined4 *)FUN_00418e30(uVar4,ppppuVar7);
              local_8._0_1_ = 0x18;
              if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_50[0]);
              }
              local_3c = 0xf;
              local_40 = 0;
              local_50[0] = (undefined4 ***)((uint)local_50[0] & 0xffffff00);
              uVar4 = FUN_00418e30(local_20);
              if (0xf < (uint)puVar8[5]) {
                puVar8 = (undefined4 *)*puVar8;
              }
              uVar4 = FUN_00418e30(uVar4,puVar8,extraout_ECX_00);
              uVar4 = FUN_00418e30(uVar4);
              puVar8 = local_2c;
              if (0xf < (uint)local_2c[5]) {
                puVar8 = (undefined4 *)*local_2c;
              }
              uVar4 = FUN_00418e30(uVar4,puVar8);
              FUN_00401280(uVar4);
              local_8 = CONCAT31(local_8._1_3_,0x15);
              FUN_00987ac0(local_320);
              local_320[0] = std::ios_base::vftable;
              FUN_00aad52d(local_320);
              if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_a4);
              }
              local_90 = 0xf;
              local_94 = 0;
              local_a4 = local_a4 & 0xffffff00;
              if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_88);
              }
              local_8 = 0xffffffff;
              local_74 = 0xf;
              local_78 = 0;
              local_88 = local_88 & 0xffffff00;
              if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_6c[0]);
              }
            }
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)((int)local_24 + 0x4c) - *(int *)((int)local_24 + 0x48) >> 2);
        }
        local_1c = 1;
        if (4 < (int)(*(int *)((int)local_24 + 0x3c) - *(int *)((int)local_24 + 0x38) & 0xfffffffcU)
           ) {
          do {
            iVar5 = *(int *)(*(int *)((int)local_24 + 0x38) + local_1c * 4);
            cVar3 = (**(code **)(**(int **)(*(int *)((int)local_18 + 0x860) +
                                           *(int *)(iVar5 + 0x50) * 4) + 0x34))();
            if (cVar3 == '\0') {
              local_58 = 0xf;
              local_5c = 0;
              local_6c[0] = local_6c[0] & 0xffffff00;
              FUN_00409350("gamestate.cpp",0xd);
              local_8 = 0x1a;
              local_20 = (undefined4 *)FUN_00974c50(iVar5);
              local_8._0_1_ = 0x1b;
              puVar8 = (undefined4 *)FUN_004f97a0(" has no political reform defined for ");
              puVar12 = &DAT_00ded950;
              local_8._0_1_ = 0x1c;
              FUN_0043acd0(param_1 + 0xb0c,local_50);
              local_8._0_1_ = 0x1d;
              uVar4 = FUN_004015b0(local_6c,0xd63,0x10004,puVar12);
              local_8._0_1_ = 0x20;
              ppppuVar7 = (undefined4 ****)local_50[0];
              if (local_3c < 0x10) {
                ppppuVar7 = local_50;
              }
              local_2c = (undefined4 *)FUN_00418e30(uVar4,ppppuVar7);
              local_8._0_1_ = 0x1f;
              if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_50[0]);
              }
              local_3c = 0xf;
              local_40 = 0;
              local_50[0] = (undefined4 ***)((uint)local_50[0] & 0xffffff00);
              uVar4 = FUN_00418e30(local_2c);
              if (0xf < (uint)puVar8[5]) {
                puVar8 = (undefined4 *)*puVar8;
              }
              uVar4 = FUN_00418e30(uVar4,puVar8,extraout_ECX_01);
              uVar4 = FUN_00418e30(uVar4);
              puVar8 = local_20;
              if (0xf < (uint)local_20[5]) {
                puVar8 = (undefined4 *)*local_20;
              }
              uVar4 = FUN_00418e30(uVar4,puVar8);
              FUN_00401280(uVar4);
              local_8 = CONCAT31(local_8._1_3_,0x1c);
              FUN_00987ac0(local_320);
              local_320[0] = std::ios_base::vftable;
              FUN_00aad52d(local_320);
              if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_88);
              }
              local_74 = 0xf;
              local_78 = 0;
              local_88 = local_88 & 0xffffff00;
              if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_a4);
              }
              local_8 = 0xffffffff;
              local_90 = 0xf;
              local_94 = 0;
              local_a4 = local_a4 & 0xffffff00;
              if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_6c[0]);
              }
            }
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)((int)local_24 + 0x3c) - *(int *)((int)local_24 + 0x38) >> 2);
        }
        if (*(int *)((int)local_18 + 0xe40) == 0) {
          local_58 = 0xf;
          local_5c = 0;
          local_6c[0] = local_6c[0] & 0xffffff00;
          FUN_00409350("gamestate.cpp",0xd);
          local_8 = 0x21;
          puVar8 = (undefined4 *)FUN_004f97a0(" has no tech school defined.");
          puVar12 = &DAT_00ded950;
          local_8._0_1_ = 0x22;
          FUN_0043acd0(param_1 + 0xb0c,local_50);
          local_8._0_1_ = 0x23;
          uVar4 = FUN_004015b0(local_6c,0xd66,0x10004,puVar12);
          local_8._0_1_ = 0x26;
          ppppuVar7 = (undefined4 ****)local_50[0];
          if (local_3c < 0x10) {
            ppppuVar7 = local_50;
          }
          local_2c = (undefined4 *)FUN_00418e30(uVar4,ppppuVar7);
          local_8._0_1_ = 0x25;
          if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_50[0]);
          }
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = (undefined4 ***)((uint)local_50[0] & 0xffffff00);
          uVar4 = FUN_00418e30(local_2c);
          if (0xf < (uint)puVar8[5]) {
            puVar8 = (undefined4 *)*puVar8;
          }
          uVar4 = FUN_00418e30(uVar4,puVar8,extraout_ECX_02);
          uVar4 = FUN_00418e30(uVar4);
          FUN_00401280(uVar4);
          local_8 = CONCAT31(local_8._1_3_,0x22);
          FUN_00987ac0(local_320);
          local_320[0] = std::ios_base::vftable;
          FUN_00aad52d(local_320);
          if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_88);
          }
          local_8 = 0xffffffff;
          local_74 = 0xf;
          local_78 = 0;
          local_88 = local_88 & 0xffffff00;
          if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_6c[0]);
          }
        }
        cVar3 = (**(code **)(**(int **)((int)local_18 + 0x84c) + 0x20))();
        if (cVar3 == '\0') {
          local_58 = 0xf;
          local_5c = 0;
          local_6c[0] = local_6c[0] & 0xffffff00;
          FUN_00409350("gamestate.cpp",0xd);
          local_8 = 0x27;
          puVar8 = (undefined4 *)FUN_004f97a0(" has no ruling party defined.");
          puVar12 = &DAT_00ded950;
          local_8._0_1_ = 0x28;
          FUN_0043acd0(param_1 + 0xb0c,local_50);
          local_8._0_1_ = 0x29;
          uVar4 = FUN_004015b0(local_6c,0xd68,0x10004,puVar12);
          local_8._0_1_ = 0x2c;
          ppppuVar7 = (undefined4 ****)local_50[0];
          if (local_3c < 0x10) {
            ppppuVar7 = local_50;
          }
          local_2c = (undefined4 *)FUN_00418e30(uVar4,ppppuVar7);
          local_8._0_1_ = 0x2b;
          if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_50[0]);
          }
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = (undefined4 ***)((uint)local_50[0] & 0xffffff00);
          uVar4 = FUN_00418e30(local_2c);
          if (0xf < (uint)puVar8[5]) {
            puVar8 = (undefined4 *)*puVar8;
          }
          uVar4 = FUN_00418e30(uVar4,puVar8,extraout_ECX_03);
          uVar4 = FUN_00418e30(uVar4);
          FUN_00401280(uVar4);
          local_8 = CONCAT31(local_8._1_3_,0x28);
          FUN_00987ac0(local_320);
          local_320[0] = std::ios_base::vftable;
          FUN_00aad52d(local_320);
          if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_88);
          }
          local_8 = 0xffffffff;
          local_74 = 0xf;
          local_78 = 0;
          local_88 = local_88 & 0xffffff00;
          if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_6c[0]);
          }
        }
        piVar9 = local_18;
        iVar5 = FUN_005e64b0();
        if (*(int *)(iVar5 + 8) == 0) {
          local_100 = 0xf;
          local_104 = 0;
          local_114[0] = local_114[0] & 0xffffff00;
          FUN_00409350("gamestate.cpp",0xd);
          local_8 = 0x2d;
          puVar8 = (undefined4 *)FUN_004f97a0(" has no historical parties defined.");
          puVar12 = &DAT_00ded950;
          local_8._0_1_ = 0x2e;
          FUN_0043acd0(param_1 + 0xb0c,local_210);
          local_8._0_1_ = 0x2f;
          uVar4 = FUN_004015b0(local_114,0xd6a,0x10004,puVar12);
          local_8._0_1_ = 0x32;
          ppppuVar7 = (undefined4 ****)local_210[0];
          if (local_1fc < 0x10) {
            ppppuVar7 = local_210;
          }
          local_2c = (undefined4 *)FUN_00418e30(uVar4,ppppuVar7);
          local_8._0_1_ = 0x31;
          if (0xf < local_1fc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_210[0]);
          }
          local_1fc = 0xf;
          local_200 = 0;
          local_210[0] = (undefined4 ***)((uint)local_210[0] & 0xffffff00);
          uVar4 = FUN_00418e30(local_2c);
          if (0xf < (uint)puVar8[5]) {
            puVar8 = (undefined4 *)*puVar8;
          }
          uVar4 = FUN_00418e30(uVar4,puVar8,extraout_ECX_04);
          uVar4 = FUN_00418e30(uVar4);
          FUN_00401280(uVar4);
          local_8 = CONCAT31(local_8._1_3_,0x2e);
          FUN_00987ac0(local_4a0);
          local_4a0[0] = std::ios_base::vftable;
          FUN_00aad52d(local_4a0);
          if (0xf < local_250) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_264);
          }
          local_8 = 0xffffffff;
          local_250 = 0xf;
          local_254 = 0;
          local_264 = local_264 & 0xffffff00;
          if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_114[0]);
          }
          local_100 = 0xf;
          local_104 = 0;
          local_114[0] = local_114[0] & 0xffffff00;
          piVar9 = local_18;
        }
        if ((0 < (int)(*(int *)((int)piVar9 + 0x9dc) - *(int *)((int)piVar9 + 0x9d8) & 0xfffffffcU))
           && (local_1c = 1,
              4 < (int)(*(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) & 0xfffffffcU))) {
          do {
            iVar5 = *(int *)(*(int *)((int)local_18 + 0xbe8) +
                            *(int *)(*(int *)(*(int *)(param_1 + 0xadc) + local_1c * 4) + 0x20) * 4)
            ;
            if (*(int *)(iVar5 + 0x34) != 0) {
              if (*(int *)(iVar5 + 0x20) == 0) {
                if (*(int *)(iVar5 + 0x24) != 0) {
                  local_e4 = 0xf;
                  local_e8 = 0;
                  local_f8[0] = local_f8[0] & 0xffffff00;
                  FUN_00409350("gamestate.cpp",0xd);
                  local_8 = 0x3a;
                  local_20 = (undefined4 *)FUN_004f97a0(" has a vassal-relationship when at WAR.");
                  local_8._0_1_ = 0x3b;
                  puVar8 = (undefined4 *)FUN_004f97a0(" and ");
                  puVar12 = &DAT_00ded950;
                  local_8._0_1_ = 0x3c;
                  FUN_0043acd0(param_1 + 0xb0c,local_1f0);
                  local_8._0_1_ = 0x3d;
                  uVar4 = FUN_004015b0(local_f8,0xd7a,0x10004,puVar12);
                  local_8._0_1_ = 0x40;
                  ppppuVar7 = (undefined4 ****)local_1f0[0];
                  if (local_1dc < 0x10) {
                    ppppuVar7 = local_1f0;
                  }
                  local_2c = (undefined4 *)FUN_00418e30(uVar4,ppppuVar7);
                  local_8._0_1_ = 0x3f;
                  if (0xf < local_1dc) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_1f0[0]);
                  }
                  local_1dc = 0xf;
                  local_1e0 = 0;
                  local_1f0[0] = (undefined4 ***)((uint)local_1f0[0] & 0xffffff00);
                  uVar4 = FUN_00418e30(local_2c);
                  if (0xf < (uint)puVar8[5]) {
                    puVar8 = (undefined4 *)*puVar8;
                  }
                  uVar4 = FUN_00418e30(uVar4,puVar8,extraout_ECX_06);
                  uVar4 = FUN_00418e30(uVar4);
                  puVar8 = local_20;
                  if (0xf < (uint)local_20[5]) {
                    puVar8 = (undefined4 *)*local_20;
                  }
                  uVar4 = FUN_00418e30(uVar4,puVar8,puVar8);
                  uVar4 = FUN_00418e30(uVar4);
                  FUN_00401280(uVar4);
                  local_8 = CONCAT31(local_8._1_3_,0x3c);
                  FUN_00987ac0(local_7a0);
                  local_7a0[0] = std::ios_base::vftable;
                  FUN_00aad52d(local_7a0);
                  if (0xf < local_288) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_29c);
                  }
                  local_288 = 0xf;
                  local_28c = 0;
                  local_29c = local_29c & 0xffffff00;
                  if (0xf < local_2c0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_2d4);
                  }
                  local_8 = 0xffffffff;
                  local_2c0 = 0xf;
                  local_2c4 = 0;
                  local_2d4 = local_2d4 & 0xffffff00;
                  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_f8[0]);
                  }
                  local_e4 = 0xf;
                  local_e8 = 0;
                  local_f8[0] = local_f8[0] & 0xffffff00;
                }
              }
              else {
                local_138 = 0xf;
                local_13c = 0;
                local_14c[0] = local_14c[0] & 0xffffff00;
                FUN_00409350("gamestate.cpp",0xd);
                local_8 = 0x33;
                local_20 = (undefined4 *)FUN_004f97a0(" has an alliance when at WAR.");
                local_8._0_1_ = 0x34;
                puVar8 = (undefined4 *)FUN_004f97a0(" and ");
                puVar12 = &DAT_00ded950;
                local_8._0_1_ = 0x35;
                FUN_0043acd0(param_1 + 0xb0c,local_170);
                local_8._0_1_ = 0x36;
                uVar4 = FUN_004015b0(local_14c,0xd78,0x10004,puVar12);
                local_8._0_1_ = 0x39;
                ppppuVar7 = (undefined4 ****)local_170[0];
                if (local_15c < 0x10) {
                  ppppuVar7 = local_170;
                }
                local_2c = (undefined4 *)FUN_00418e30(uVar4,ppppuVar7);
                local_8._0_1_ = 0x38;
                if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_170[0]);
                }
                local_15c = 0xf;
                local_160 = 0;
                local_170[0] = (undefined4 ***)((uint)local_170[0] & 0xffffff00);
                uVar4 = FUN_00418e30(local_2c);
                if (0xf < (uint)puVar8[5]) {
                  puVar8 = (undefined4 *)*puVar8;
                }
                uVar4 = FUN_00418e30(uVar4,puVar8,extraout_ECX_05);
                uVar4 = FUN_00418e30(uVar4);
                puVar8 = local_20;
                if (0xf < (uint)local_20[5]) {
                  puVar8 = (undefined4 *)*local_20;
                }
                uVar4 = FUN_00418e30(uVar4,puVar8,puVar8);
                uVar4 = FUN_00418e30(uVar4);
                FUN_00401280(uVar4);
                local_8 = CONCAT31(local_8._1_3_,0x35);
                FUN_00987ac0(local_620);
                local_620[0] = std::ios_base::vftable;
                FUN_00aad52d(local_620);
                if (0xf < local_2a4) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_2b8);
                }
                local_2a4 = 0xf;
                local_2a8 = 0;
                local_2b8 = local_2b8 & 0xffffff00;
                if (0xf < local_218) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_22c);
                }
                local_8 = 0xffffffff;
                local_218 = 0xf;
                local_21c = 0;
                local_22c = local_22c & 0xffffff00;
                if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_14c[0]);
                }
                local_138 = 0xf;
                local_13c = 0;
                local_14c[0] = local_14c[0] & 0xffffff00;
              }
            }
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2);
        }
      }
      local_28 = (int *)((int)local_28 + 1);
    } while ((int)local_28 < *(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2);
  }
  ExceptionList = local_10;
  return;
}

