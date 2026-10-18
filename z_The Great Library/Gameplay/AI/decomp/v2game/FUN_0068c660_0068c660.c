// FUN_0068c660 @ 0068c660 body=[[0068c660, 0068c6a9] [0068c6b0, 0068c8d3] [0068c8d7, 0068c934] [0068c938, 0068ca2d] [0068ca31, 0068cb84] [0068cb88, 0068cbad] [0068cbb1, 0068cbd0] [0068cbd4, 0068cbfe] [0068cc02, 0068cd47] [0068cd4b, 0068cd76] [0068cd7a, 0068cea0] [0068cea4, 0068cedf] [0068cee3, 0068cf0f] [0068cf13, 0068d039] [0068d03d, 0068d060] [0068d069, 0068d249]]


undefined4 FUN_0068c660(int param_1,int param_2)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_248 [116];
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 *local_1a8;
  uint local_1a4 [4];
  undefined4 local_194;
  uint local_190;
  undefined4 *local_188;
  undefined1 *local_184;
  uint local_180 [4];
  undefined4 local_170;
  uint local_16c;
  uint local_164 [4];
  undefined4 local_154;
  uint local_150;
  uint local_148 [4];
  undefined4 local_138;
  uint local_134;
  undefined1 local_12c [20];
  undefined1 local_118 [56];
  undefined1 local_e0 [8];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_50 [60];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba126e;
  local_14 = ExceptionList;
  iVar11 = 0;
  if (0 < (int)(*(int *)(param_1 + 0xbd4) - *(int *)(param_1 + 0xbd0) & 0xfffffffcU)) {
    piVar10 = *(int **)(param_1 + 0xbd0);
    do {
      puVar7 = (undefined4 *)*piVar10;
      if (((*(char *)(puVar7 + 0x4b4) != '\0') && (*(char *)((int)puVar7 + 0x31) == '\0')) &&
         (1 < (int)puVar7[0x393])) {
        local_1c8 = CONCAT44(puVar7,0x68c708);
        ExceptionList = &local_14;
        local_1a8 = puVar7;
        local_188 = puVar7;
        FUN_0053d680();
        puVar7[0x500] = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 0x31) = 0;
          local_1c8 = CONCAT44(0x68c72a,(undefined4)local_1c8);
          FUN_005340a0();
          for (piVar10 = *(int **)(param_1 + 0xbe0);
              (piVar10 != *(int **)(param_1 + 0xbe4) && (*piVar10 != param_2));
              piVar10 = piVar10 + 1) {
          }
          local_1c8 = CONCAT44(0x68c75f,(undefined4)local_1c8);
          FUN_0068f020();
          if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
            local_1c8 = CONCAT44(local_188 + 7,param_2 + 0x1c);
            local_1d0 = CONCAT44(0x68c788,(undefined4)local_1d0);
            uVar6 = FUN_0046ab00();
            local_1c8 = CONCAT44(uVar6,*(undefined4 *)(param_1 + 0xcf4));
            local_1d0 = CONCAT44(0x68c798,(undefined4)local_1d0);
            FUN_00457b00();
          }
        }
        ppuVar1 = *(undefined4 ***)(param_1 + 0xbe4);
        if (&local_1a8 < ppuVar1) {
          ppuVar2 = *(undefined4 ***)(param_1 + 0xbe0);
          if (ppuVar2 <= &local_1a8) {
            if (ppuVar1 == *(undefined4 ***)(param_1 + 0xbe8)) {
              local_1c8 = CONCAT44(0x68c7d6,(undefined4)local_1c8);
              FUN_007b94a0();
            }
            if (*(undefined4 **)(param_1 + 0xbe4) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xbe4) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0xbe0) + ((int)&local_1a8 - (int)ppuVar2 >> 2) * 4);
            }
            goto LAB_0068c817;
          }
        }
        if (ppuVar1 == *(undefined4 ***)(param_1 + 0xbe8)) {
          local_1c8 = CONCAT44(0x68c807,(undefined4)local_1c8);
          FUN_007b94a0();
        }
        if (*(int **)(param_1 + 0xbe4) != (int *)0x0) {
          **(int **)(param_1 + 0xbe4) = (int)local_188;
        }
LAB_0068c817:
        iVar11 = DAT_012588e8;
        *(int *)(param_1 + 0xbe4) = *(int *)(param_1 + 0xbe4) + 4;
        if (*(char *)(iVar11 + 0xd1c) != '\0') {
          local_1c8 = 0;
          local_1d0 = CONCAT44(0x68c836,(undefined4)local_1d0);
          uVar6 = FUN_009b7950();
          local_1c8 = CONCAT44(uVar6,0x68c843);
          FUN_008a8650();
          local_90 = local_188[7];
          local_8c = local_188[8];
          local_1c8 = 0x1300e0ad6c;
          local_190 = 0xf;
          local_194 = 0;
          local_1a4[0] = local_1a4[0] & 0xffffff00;
          local_1d0 = CONCAT44(0x68c87b,(undefined4)local_1d0);
          FUN_00409350();
          local_c = 0;
          iVar11 = DAT_0131a584;
          if (DAT_0131a584 == 0) {
            local_1c8 = 0x1c0068c892;
            iVar11 = FUN_00aae9af();
            local_c._0_1_ = 1;
            if (iVar11 == 0) {
              iVar11 = 0;
            }
            else {
              local_1c8 = CONCAT44(0x68c8ac,(undefined4)local_1c8);
              iVar11 = FUN_008b0060();
            }
            iVar3 = DAT_0131a584;
            local_c = (uint)local_c._1_3_ << 8;
            if ((iVar11 != DAT_0131a584) && (DAT_0131a584 != 0)) {
              local_1c8 = CONCAT44(DAT_0131a584,0x68c8ce);
              FUN_008b2740();
              local_1c8 = CONCAT44(iVar3,&UNK_0068c8d4);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          DAT_0131a584 = iVar11;
          local_1c8 = CONCAT44(local_1a4,0x68c8e8);
          iVar11 = FUN_008b3060();
          if (iVar11 != 0) {
            local_1c8 = CONCAT44(local_98,iVar11);
            local_1d0 = CONCAT44(0x68c8fa,(undefined4)local_1d0);
            iVar11 = FUN_008b24f0();
            if (iVar11 != 0) {
              local_1c8._4_4_ = local_98;
              local_1d0 = CONCAT44(0x68c90e,(undefined4)local_1d0);
              uVar6 = FUN_008a6620();
              local_1c8 = CONCAT44(local_1c8._4_4_,uVar6);
              local_1d0 = CONCAT44(0x68c919,(undefined4)local_1d0);
              FUN_008a8120();
            }
          }
          local_c = 0xffffffff;
          if (0xf < local_190) {
            local_1c8 = CONCAT44(local_1a4[0],&UNK_0068c935);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (param_2 != 0) {
            local_1c8 = 0;
            local_1d0 = CONCAT44(0x68c948,(undefined4)local_1d0);
            uVar6 = FUN_009b7950();
            local_1c8 = CONCAT44(uVar6,0x68c955);
            FUN_008a8650();
            local_d8 = *(undefined4 *)(param_2 + 0x1c);
            local_d4 = *(undefined4 *)(param_2 + 0x20);
            local_1c8 = 0x1400e0ad80;
            local_190 = 0xf;
            local_194 = 0;
            local_1a4[0] = local_1a4[0] & 0xffffff00;
            local_1d0 = CONCAT44(0x68c98c,(undefined4)local_1d0);
            FUN_00409350();
            local_c = 7;
            if (DAT_0131a584 == 0) {
              local_1c8 = 0x1c0068c9a6;
              iVar11 = FUN_00aae9af();
              local_c._0_1_ = 8;
              if (iVar11 == 0) {
                uVar6 = 0;
              }
              else {
                local_1c8 = CONCAT44(0x68c9c0,(undefined4)local_1c8);
                uVar6 = FUN_008b0060();
              }
              local_c = CONCAT31(local_c._1_3_,7);
              local_1c8 = CONCAT44(uVar6,0x68c9d2);
              FUN_008b2fa0();
            }
            local_1c8 = CONCAT44(local_1a4,0x68c9e1);
            iVar11 = FUN_008b3060();
            if (iVar11 != 0) {
              local_1c8 = CONCAT44(local_e0,iVar11);
              local_1d0 = CONCAT44(0x68c9f3,(undefined4)local_1d0);
              iVar11 = FUN_008b24f0();
              if (iVar11 != 0) {
                local_1c8._4_4_ = local_e0;
                local_1d0 = CONCAT44(0x68ca07,(undefined4)local_1d0);
                uVar6 = FUN_008a6620();
                local_1c8 = CONCAT44(local_1c8._4_4_,uVar6);
                local_1d0 = CONCAT44(0x68ca12,(undefined4)local_1d0);
                FUN_008a8120();
              }
            }
            local_c = 0xffffffff;
            if (0xf < local_190) {
              local_1c8 = CONCAT44(local_1a4[0],&UNK_0068ca2e);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_1c8 = CONCAT44(param_2,0x68ca3a);
            puVar7 = (undefined4 *)FUN_005061e0();
            local_1c8 = 0xa00e0ad98;
            local_190 = 0xf;
            local_194 = 0;
            local_1a4[0] = local_1a4[0] & 0xffffff00;
            local_1d0 = CONCAT44(0x68ca60,(undefined4)local_1d0);
            local_1a8 = puVar7;
            FUN_00409350();
            local_c = 0xe;
            local_1c8 = CONCAT44(0x68ca78,(undefined4)local_1c8);
            uVar6 = FUN_004f97a0();
            local_c._0_1_ = 0xf;
            local_1c8 = 0xffffffff00000000;
            local_150 = 0xf;
            local_154 = 0;
            local_164[0] = local_164[0] & 0xffffff00;
            local_1d0 = CONCAT44(local_1a4,0x68caa3);
            FUN_00408ed0();
            local_c._0_1_ = 0x10;
            local_1c8 = 0xffffffff00000000;
            local_134 = 0xf;
            local_138 = 0;
            local_148[0] = local_148[0] & 0xffffff00;
            local_1d0 = CONCAT44(uVar6,0x68cad4);
            FUN_00408ed0();
            local_c._0_1_ = 0x11;
            iVar11 = puVar7[1];
            local_1c8 = 0x440068caea;
            puVar8 = (undefined1 *)FUN_00aae9af();
            local_c._0_1_ = 0x12;
            uVar5 = (undefined1)local_c;
            local_c._0_1_ = 0x12;
            local_184 = puVar8;
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = (undefined1 *)0x0;
              local_c._0_1_ = uVar5;
            }
            else {
              local_1c8 = 0xffffffff00000000;
              *(undefined4 *)(puVar8 + 0x14) = 0xf;
              *(undefined4 *)(puVar8 + 0x10) = 0;
              *puVar8 = 0;
              local_1d0 = CONCAT44(local_164,0x68cb1a);
              FUN_00408ed0();
              local_c._0_1_ = 0x13;
              local_1c8 = 0xffffffff00000000;
              *(undefined4 *)(puVar8 + 0x30) = 0xf;
              *(undefined4 *)(puVar8 + 0x2c) = 0;
              puVar8[0x1c] = 0;
              local_1d0 = CONCAT44(local_148,0x68cb41);
              FUN_00408ed0();
              *(int *)(puVar8 + 0x38) = iVar11;
              *(undefined4 *)(puVar8 + 0x3c) = 0;
              puVar8[0x40] = 0;
            }
            iVar3 = puVar7[2];
            puVar7[1] = puVar8;
            puVar7[2] = iVar3 + 1;
            if (iVar3 == 0) {
              *puVar7 = puVar8;
            }
            else {
              *(undefined1 **)(iVar11 + 0x3c) = puVar8;
            }
            if (0xf < local_134) {
              local_1c8 = CONCAT44(local_148[0],&UNK_0068cb85);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_134 = 0xf;
            local_138 = 0;
            local_148[0] = local_148[0] & 0xffffff00;
            if (0xf < local_150) {
              local_1c8 = CONCAT44(local_164[0],&UNK_0068cbae);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_150 = 0xf;
            local_154 = 0;
            local_164[0] = local_164[0] & 0xffffff00;
            if (0xf < local_16c) {
              local_1c8 = CONCAT44(local_180[0],&UNK_0068cbd1);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c = 0xffffffff;
            local_16c = 0xf;
            local_170 = 0;
            local_180[0] = local_180[0] & 0xffffff00;
            if (0xf < local_190) {
              local_1c8 = CONCAT44(local_1a4[0],&UNK_0068cbff);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_1c8 = 0xa00e0ada4;
            local_190 = 0xf;
            local_194 = 0;
            local_1a4[0] = local_1a4[0] & 0xffffff00;
            local_1d0 = CONCAT44(0x68cc22,(undefined4)local_1d0);
            FUN_00409350();
            local_c = 0x14;
            local_1c8 = CONCAT44(0x68cc39,(undefined4)local_1c8);
            uVar6 = FUN_004f97a0();
            local_c._0_1_ = 0x15;
            local_1c8 = 0xffffffff00000000;
            local_150 = 0xf;
            local_154 = 0;
            local_164[0] = local_164[0] & 0xffffff00;
            local_1d0 = CONCAT44(local_1a4,0x68cc64);
            FUN_00408ed0();
            local_c._0_1_ = 0x16;
            local_1c8 = 0xffffffff00000000;
            local_134 = 0xf;
            local_138 = 0;
            local_148[0] = local_148[0] & 0xffffff00;
            local_1d0 = CONCAT44(uVar6,0x68cc95);
            FUN_00408ed0();
            local_c._0_1_ = 0x17;
            iVar11 = puVar7[1];
            local_1c8 = 0x440068ccab;
            puVar8 = (undefined1 *)FUN_00aae9af();
            local_c._0_1_ = 0x18;
            uVar5 = (undefined1)local_c;
            local_c._0_1_ = 0x18;
            local_184 = puVar8;
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = (undefined1 *)0x0;
              local_c._0_1_ = uVar5;
            }
            else {
              local_1c8 = 0xffffffff00000000;
              *(undefined4 *)(puVar8 + 0x14) = 0xf;
              *(undefined4 *)(puVar8 + 0x10) = 0;
              *puVar8 = 0;
              local_1d0 = CONCAT44(local_164,0x68ccdb);
              FUN_00408ed0();
              local_c._0_1_ = 0x19;
              local_1c8 = 0xffffffff00000000;
              *(undefined4 *)(puVar8 + 0x30) = 0xf;
              *(undefined4 *)(puVar8 + 0x2c) = 0;
              puVar8[0x1c] = 0;
              local_1d0 = CONCAT44(local_148,0x68cd02);
              FUN_00408ed0();
              *(int *)(puVar8 + 0x38) = iVar11;
              *(undefined4 *)(puVar8 + 0x3c) = 0;
              puVar8[0x40] = 0;
            }
            iVar3 = puVar7[2];
            puVar7[1] = puVar8;
            puVar7[2] = iVar3 + 1;
            if (iVar3 == 0) {
              *puVar7 = puVar8;
            }
            else {
              *(undefined1 **)(iVar11 + 0x3c) = puVar8;
            }
            local_1c8 = CONCAT44(0x68cd37,(undefined4)local_1c8);
            FUN_00a39a80();
            if (0xf < local_16c) {
              local_1c8 = CONCAT44(local_180[0],&UNK_0068cd48);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c = 0xffffffff;
            local_16c = 0xf;
            local_170 = 0;
            local_180[0] = local_180[0] & 0xffffff00;
            if (0xf < local_190) {
              local_1c8 = CONCAT44(local_1a4[0],&UNK_0068cd77);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_1c8 = 0x1000df2714;
            local_190 = 0xf;
            local_194 = 0;
            local_1a4[0] = local_1a4[0] & 0xffffff00;
            local_1d0 = CONCAT44(0x68cd9b,(undefined4)local_1d0);
            FUN_00409350();
            local_c = 0x1a;
            local_1c8 = 0x900df2728;
            local_16c = 0xf;
            local_170 = 0;
            local_180[0] = local_180[0] & 0xffffff00;
            local_1d0 = CONCAT44(0x68cdc2,(undefined4)local_1d0);
            FUN_00409350();
            local_1c8 = CONCAT44(local_1a4,local_12c);
            local_c._0_1_ = 0x1b;
            local_1d0 = CONCAT44(0x68cddc,(undefined4)local_1d0);
            FUN_009a8ee0();
            local_c._0_1_ = 0x1c;
            local_1c8 = CONCAT44(0x68cded,(undefined4)local_1c8);
            iVar11 = FUN_00475500();
            local_1d0 = *(undefined8 *)(iVar11 + 0x6c);
            local_1c8 = *(undefined8 *)(iVar11 + 0x74);
            uStack_1d4 = 0x68ce12;
            uVar6 = FUN_009a9880();
            local_1c8 = CONCAT44(uVar6,local_180);
            local_c._0_1_ = 0x1d;
            local_1d0 = CONCAT44(local_50,0x68ce2d);
            FUN_00424aa0();
            local_c._0_1_ = 0x1e;
            iVar11 = puVar7[1];
            local_1c8 = 0x440068ce45;
            local_184 = (undefined1 *)FUN_00aae9af();
            local_c._0_1_ = 0x1f;
            if (local_184 == (undefined1 *)0x0) {
              uVar6 = 0;
            }
            else {
              local_1c8 = CONCAT44(iVar11,local_184);
              local_1d0 = CONCAT44(0x68ce65,(undefined4)local_1d0);
              uVar6 = FUN_0042b900();
            }
            iVar3 = puVar7[2];
            puVar7[1] = uVar6;
            puVar7[2] = iVar3 + 1;
            if (iVar3 == 0) {
              *puVar7 = uVar6;
            }
            else {
              *(undefined4 *)(iVar11 + 0x3c) = uVar6;
            }
            local_1c8 = CONCAT44(0x68ce90,(undefined4)local_1c8);
            FUN_00a39a80();
            if (0xf < local_150) {
              local_1c8 = CONCAT44(local_164[0],&UNK_0068cea1);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_150 = 0xf;
            local_154 = 0;
            local_164[0] = local_164[0] & 0xffffff00;
            local_c = CONCAT31(local_c._1_3_,0x20);
            local_1c8 = CONCAT44(0x68cec8,(undefined4)local_1c8);
            FUN_009adb70();
            local_1c8 = CONCAT44(0x68cecf,(undefined4)local_1c8);
            FUN_004d8540();
            puVar7 = local_188;
            if (0xf < local_16c) {
              local_1c8 = CONCAT44(local_180[0],&UNK_0068cee0);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c = 0xffffffff;
            local_16c = 0xf;
            local_170 = 0;
            uVar4 = local_180[0] >> 8;
            local_180[0] = uVar4 << 8;
            if (0xf < local_190) {
              local_1c8 = CONCAT44(local_1a4[0],&UNK_0068cf10);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_190 = 0xf;
            local_194 = 0;
            local_1a4[0] = local_1a4[0] & 0xffffff00;
            if (*(int *)(param_2 + 0x20) == *(int *)(DAT_012588e8 + 0xb60)) {
              local_1c8 = 0xded94d;
              local_16c = 0xf;
              local_170 = 0;
              local_180[0] = uVar4 << 8;
              local_1d0 = CONCAT44(0x68cf57,(undefined4)local_1d0);
              FUN_00409350();
              local_c = 0x21;
              local_1c8 = 0x1800e0adb0;
              local_190 = 0xf;
              local_194 = 0;
              local_1a4[0] = local_1a4[0] & 0xffffff00;
              local_1d0 = CONCAT44(0x68cf82,(undefined4)local_1d0);
              FUN_00409350();
              local_1c8 = 0x55a780;
              local_184 = auStack_248;
              local_c._0_1_ = 0x22;
              uVar17 = 0;
              uVar6 = local_188[8];
              uVar16 = 0x2d2d2d;
              uVar15 = local_188[7];
              uVar14 = 0;
              puVar13 = local_180;
              uVar12 = 0;
              puVar7 = local_1a8;
              FUN_006a4f40(local_1a8,0,puVar13,0,uVar15,uVar6,0x2d2d2d,0);
              uVar9 = FUN_006a55b0();
              FUN_006a7ed0(auStack_248,uVar9,puVar7,uVar12,puVar13,uVar14,uVar15,uVar6,uVar16,uVar17
                          );
              local_c._0_1_ = 0x23;
              FUN_006a4f40();
              local_c = CONCAT31(local_c._1_3_,0x22);
              FUN_004933c0();
              if (0xf < local_190) {
                local_1c8 = CONCAT44(local_1a4[0],&UNK_0068d03a);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_190 = 0xf;
              local_194 = 0;
              local_1a4[0] = local_1a4[0] & 0xffffff00;
              if (0xf < local_16c) {
                local_1c8 = CONCAT44(local_180[0],&UNK_0068d061);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
            }
            else {
              if (local_188[8] == *(int *)(DAT_012588e8 + 0xb60)) {
                local_1c8 = CONCAT44(0x68d084,(undefined4)local_1c8);
                FUN_009885d0();
                local_c = 0x24;
                local_1c8 = CONCAT44(0x68d09d,(undefined4)local_1c8);
                FUN_009885d0();
                local_c._0_1_ = 0x25;
                local_1c8 = 0x55a780;
                local_184 = auStack_248;
                uVar17 = 0;
                uVar6 = puVar7[8];
                uVar15 = puVar7[7];
                uVar16 = 0x2d2d2d;
                uVar14 = 0;
                puVar13 = local_1a4;
                uVar12 = 0;
                puVar7 = local_1a8;
                FUN_006a4f40(local_1a8,0,puVar13,0,uVar15,uVar6,0x2d2d2d,0);
                uVar9 = FUN_006a55b0();
                FUN_006a7ed0(auStack_248,uVar9,puVar7,uVar12,puVar13,uVar14,uVar15,uVar6,uVar16,
                             uVar17);
                local_c._0_1_ = 0x26;
                FUN_006a4f40();
                local_c = CONCAT31(local_c._1_3_,0x25);
                FUN_004933c0();
                local_1c8 = CONCAT44(0x68d147,(undefined4)local_1c8);
                FUN_00408ad0();
              }
              else {
                local_1c8 = CONCAT44(0x68d15c,(undefined4)local_1c8);
                FUN_009885d0();
                local_c = 0x27;
                local_1c8 = CONCAT44(0x68d178,(undefined4)local_1c8);
                FUN_009885d0();
                local_c._0_1_ = 0x28;
                local_1c8 = 0x55a780;
                local_184 = auStack_248;
                uVar17 = 0;
                uVar6 = puVar7[8];
                uVar15 = puVar7[7];
                uVar16 = 0x2d2d2d;
                uVar14 = 0;
                puVar8 = local_118;
                uVar12 = 0;
                puVar7 = local_1a8;
                FUN_006a4f40(local_1a8,0,puVar8,0,uVar15,uVar6,0x2d2d2d,0);
                uVar9 = FUN_006a55b0();
                FUN_006a7ed0(auStack_248,uVar9,puVar7,uVar12,puVar8,uVar14,uVar15,uVar6,uVar16,
                             uVar17);
                local_c._0_1_ = 0x29;
                FUN_006a4f40();
                local_c = CONCAT31(local_c._1_3_,0x28);
                FUN_004933c0();
                local_1c8 = CONCAT44(0x68d225,(undefined4)local_1c8);
                FUN_00408ad0();
              }
              local_1c8 = CONCAT44(0x68d231,(undefined4)local_1c8);
              FUN_00408ad0();
            }
          }
        }
        ExceptionList = local_14;
        return 1;
      }
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar11 < *(int *)(param_1 + 0xbd4) - *(int *)(param_1 + 0xbd0) >> 2);
  }
  return 0;
}

