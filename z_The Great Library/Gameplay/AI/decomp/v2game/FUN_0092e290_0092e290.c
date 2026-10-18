// FUN_0092e290 @ 0092e290 body=[[0092e290, 0092e2ec] [0092e2f0, 0092e335] [0092e33c, 0092e3a4] [0092e3ae, 0092e6f2] [0092e6f6, 0092e721] [0092e725, 0092e82d] [0092e831, 0092e85c] [0092e860, 0092e998] [0092e99c, 0092e9bd] [0092e9c1, 0092e9e8] [0092e9ec, 0092eb1f] [0092eb23, 0092eb43] [0092eb47, 0092edd0]]


void FUN_0092e290(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_168 [112];
  undefined4 uStack_f8;
  uint *puStack_f4;
  uint *puStack_f0;
  uint *puStack_ec;
  int iStack_dc;
  int iStack_d8;
  uint auStack_c8 [4];
  undefined4 uStack_b8;
  uint uStack_b4;
  uint auStack_ac [4];
  undefined4 uStack_9c;
  uint uStack_98;
  undefined1 *puStack_90;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  undefined1 auStack_50 [60];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b969ba;
  piVar1 = *(int **)(param_1 + 0x50);
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  do {
    do {
      if (piVar1 == (int *)0x0) {
        if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
          puStack_ec = (uint *)0x92e3d6;
          cVar7 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x18))();
          if (cVar7 != '\0') {
            piVar1 = *(int **)(param_1 + 0xa8);
            for (puStack_ec = *(uint **)(DAT_012588e8 + 0xa84);
                (puStack_ec != (uint *)0x0 && ((int *)*puStack_ec != piVar1));
                puStack_ec = (uint *)puStack_ec[2]) {
            }
            puStack_f0 = (uint *)0x92e412;
            FUN_005f2ae0();
            puStack_ec = (uint *)0x92e41b;
            (**(code **)(*piVar1 + 0x2c))();
            puStack_ec = (uint *)0x1;
            puStack_f0 = (uint *)0x92e425;
            (**(code **)*piVar1)();
          }
        }
        if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
          puStack_ec = (uint *)0x92e436;
          cVar7 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x18))();
          if (cVar7 != '\0') {
            piVar1 = *(int **)(param_1 + 0x2c);
            for (puStack_ec = *(uint **)(DAT_012588e8 + 0xa84);
                (puStack_ec != (uint *)0x0 && ((int *)*puStack_ec != piVar1));
                puStack_ec = (uint *)puStack_ec[2]) {
            }
            puStack_f0 = (uint *)0x92e468;
            FUN_005f2ae0();
            puStack_ec = (uint *)0x92e471;
            (**(code **)(*piVar1 + 0x2c))();
            puStack_ec = (uint *)0x1;
            puStack_f0 = (uint *)0x92e47b;
            (**(code **)*piVar1)();
          }
        }
        if (*(int **)(param_1 + 0x30) != (int *)0x0) {
          puStack_ec = (uint *)0x92e48c;
          cVar7 = (**(code **)(**(int **)(param_1 + 0x30) + 0x18))();
          if (cVar7 != '\0') {
            piVar1 = *(int **)(param_1 + 0x30);
            for (puStack_ec = *(uint **)(DAT_012588e8 + 0xa84);
                (puStack_ec != (uint *)0x0 && ((int *)*puStack_ec != piVar1));
                puStack_ec = (uint *)puStack_ec[2]) {
            }
            puStack_f0 = (uint *)0x92e4c2;
            FUN_005f2ae0();
            puStack_ec = (uint *)0x92e4cb;
            (**(code **)(*piVar1 + 0x2c))();
            puStack_ec = (uint *)0x1;
            puStack_f0 = (uint *)0x92e4d5;
            (**(code **)*piVar1)();
          }
        }
        piVar1 = *(int **)(param_1 + 0x28);
        if ((piVar1 != (int *)0x0) && (piVar1[3] == *(int *)(param_1 + 0xc))) {
          puStack_ec = (uint *)0x92e4fc;
          cVar7 = (**(code **)(*piVar1 + 0x18))();
          if (cVar7 != '\0') {
            piVar1 = *(int **)(param_1 + 0x28);
            for (puStack_ec = *(uint **)(DAT_012588e8 + 0xa84);
                (puStack_ec != (uint *)0x0 && ((int *)*puStack_ec != piVar1));
                puStack_ec = (uint *)puStack_ec[2]) {
            }
            puStack_f0 = (uint *)0x92e532;
            FUN_005f2ae0();
            puStack_ec = (uint *)0x92e53b;
            (**(code **)(*piVar1 + 0x2c))();
            puStack_ec = (uint *)0x1;
            puStack_f0 = (uint *)0x92e545;
            (**(code **)*piVar1)();
          }
        }
        if (*(int **)(param_1 + 0x20) != (int *)0x0) {
          puStack_ec = (uint *)0x92e55a;
          cVar7 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
          if (cVar7 != '\0') {
            piVar1 = *(int **)(param_1 + 0x20);
            iStack_dc = piVar1[2];
            iStack_d8 = piVar1[3];
            if (iStack_d8 == *(int *)(param_1 + 0xc)) {
              iStack_dc = piVar1[4];
              iStack_d8 = piVar1[5];
            }
            for (puStack_ec = *(uint **)(DAT_012588e8 + 0xa84);
                (puStack_ec != (uint *)0x0 && ((int *)*puStack_ec != piVar1));
                puStack_ec = (uint *)puStack_ec[2]) {
            }
            puStack_f0 = (uint *)0x92e5b4;
            FUN_005f2ae0();
            puStack_ec = (uint *)0x92e5bd;
            (**(code **)(*piVar1 + 0x2c))();
            puStack_ec = (uint *)0x1;
            puStack_f0 = (uint *)0x92e5c7;
            (**(code **)*piVar1)();
            puStack_90 = *(undefined1 **)(DAT_012588e8 + 0xb5c);
            puStack_ec = *(uint **)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4)
            ;
            puStack_f0 = (uint *)0x92e5ee;
            puVar8 = (undefined4 *)FUN_005061e0();
            puStack_ec = (uint *)0x5;
            puStack_f0 = (uint *)0xdfdeac;
            uStack_b4 = 0xf;
            uStack_b8 = 0;
            auStack_c8[0] = auStack_c8[0] & 0xffffff00;
            puStack_f4 = (uint *)0x92e610;
            FUN_00409350();
            uStack_c = 0;
            puStack_ec = (uint *)0x92e624;
            puStack_ec = (uint *)FUN_0055dd40();
            puStack_f0 = auStack_c8;
            puStack_f4 = auStack_88;
            uStack_c._0_1_ = 1;
            uStack_f8 = 0x92e63c;
            iVar9 = FUN_00424aa0();
            uStack_c._0_1_ = 2;
            iVar4 = puVar8[1];
            puStack_ec = (uint *)0x44;
            puStack_f0 = (uint *)0x92e656;
            puVar10 = (undefined1 *)FUN_00aae9af();
            uStack_c._0_1_ = 3;
            uVar6 = (undefined1)uStack_c;
            uStack_c._0_1_ = 3;
            puStack_90 = puVar10;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = (undefined1 *)0x0;
              uStack_c._0_1_ = uVar6;
            }
            else {
              puStack_ec = (uint *)0xffffffff;
              puStack_f0 = (uint *)0x0;
              *(undefined4 *)(puVar10 + 0x14) = 0xf;
              *(undefined4 *)(puVar10 + 0x10) = 0;
              *puVar10 = 0;
              uStack_f8 = 0x92e686;
              puStack_f4 = (uint *)iVar9;
              FUN_00408ed0();
              puStack_ec = (uint *)0xffffffff;
              uStack_c._0_1_ = 4;
              puStack_f0 = (uint *)0x0;
              puStack_f4 = (uint *)(iVar9 + 0x1c);
              *(undefined4 *)(puVar10 + 0x30) = 0xf;
              *(undefined4 *)(puVar10 + 0x2c) = 0;
              puVar10[0x1c] = 0;
              uStack_f8 = 0x92e6ad;
              FUN_00408ed0();
              *(int *)(puVar10 + 0x38) = iVar4;
              *(undefined4 *)(puVar10 + 0x3c) = 0;
              puVar10[0x40] = 0;
            }
            iVar9 = puVar8[2];
            puVar8[1] = puVar10;
            puVar8[2] = iVar9 + 1;
            if (iVar9 == 0) {
              *puVar8 = puVar10;
            }
            else {
              *(undefined1 **)(iVar4 + 0x3c) = puVar10;
            }
            puStack_ec = (uint *)0x92e6e2;
            FUN_00a39a80();
            if (0xf < uStack_98) {
              puStack_ec = (uint *)auStack_ac[0];
                    /* WARNING: Subroutine does not return */
              puStack_f0 = (uint *)&UNK_0092e6f3;
              FUN_00aae91b();
            }
            uStack_c = 0xffffffff;
            uStack_98 = 0xf;
            uStack_9c = 0;
            auStack_ac[0] = auStack_ac[0] & 0xffffff00;
            if (0xf < uStack_b4) {
              puStack_ec = (uint *)auStack_c8[0];
                    /* WARNING: Subroutine does not return */
              puStack_f0 = (uint *)&UNK_0092e722;
              FUN_00aae91b();
            }
            puStack_ec = (uint *)0x9;
            puStack_f0 = (uint *)0xdfe8c8;
            uStack_b4 = 0xf;
            uStack_b8 = 0;
            auStack_c8[0] = auStack_c8[0] & 0xffffff00;
            puStack_f4 = (uint *)0x92e745;
            FUN_00409350();
            uStack_c = 5;
            puStack_ec = (uint *)0x92e75f;
            puStack_ec = (uint *)FUN_0055dd40();
            puStack_f0 = auStack_c8;
            puStack_f4 = auStack_88;
            uStack_c._0_1_ = 6;
            uStack_f8 = 0x92e777;
            iVar9 = FUN_00424aa0();
            uStack_c._0_1_ = 7;
            iVar4 = puVar8[1];
            puStack_ec = (uint *)0x44;
            puStack_f0 = (uint *)0x92e791;
            puVar10 = (undefined1 *)FUN_00aae9af();
            uStack_c._0_1_ = 8;
            uVar6 = (undefined1)uStack_c;
            uStack_c._0_1_ = 8;
            puStack_90 = puVar10;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = (undefined1 *)0x0;
              uStack_c._0_1_ = uVar6;
            }
            else {
              puStack_ec = (uint *)0xffffffff;
              puStack_f0 = (uint *)0x0;
              *(undefined4 *)(puVar10 + 0x14) = 0xf;
              *(undefined4 *)(puVar10 + 0x10) = 0;
              *puVar10 = 0;
              uStack_f8 = 0x92e7c1;
              puStack_f4 = (uint *)iVar9;
              FUN_00408ed0();
              uStack_c._0_1_ = 9;
              puStack_ec = (uint *)0xffffffff;
              puStack_f0 = (uint *)0x0;
              puStack_f4 = (uint *)(iVar9 + 0x1c);
              *(undefined4 *)(puVar10 + 0x30) = 0xf;
              *(undefined4 *)(puVar10 + 0x2c) = 0;
              puVar10[0x1c] = 0;
              uStack_f8 = 0x92e7e8;
              FUN_00408ed0();
              *(int *)(puVar10 + 0x38) = iVar4;
              *(undefined4 *)(puVar10 + 0x3c) = 0;
              puVar10[0x40] = 0;
            }
            iVar9 = puVar8[2];
            puVar8[1] = puVar10;
            puVar8[2] = iVar9 + 1;
            if (iVar9 == 0) {
              *puVar8 = puVar10;
            }
            else {
              *(undefined1 **)(iVar4 + 0x3c) = puVar10;
            }
            puStack_ec = (uint *)0x92e81d;
            FUN_00a39a80();
            if (0xf < uStack_98) {
              puStack_ec = (uint *)auStack_ac[0];
                    /* WARNING: Subroutine does not return */
              puStack_f0 = (uint *)&UNK_0092e82e;
              FUN_00aae91b();
            }
            uStack_c = 0xffffffff;
            uStack_98 = 0xf;
            uStack_9c = 0;
            auStack_ac[0] = auStack_ac[0] & 0xffffff00;
            if (0xf < uStack_b4) {
              puStack_ec = (uint *)auStack_c8[0];
                    /* WARNING: Subroutine does not return */
              puStack_f0 = (uint *)&UNK_0092e85d;
              FUN_00aae91b();
            }
            puStack_ec = (uint *)0x11;
            puStack_f0 = (uint *)0xdfde98;
            uStack_b4 = 0xf;
            uStack_b8 = 0;
            auStack_c8[0] = auStack_c8[0] & 0xffffff00;
            puStack_f4 = (uint *)0x92e881;
            FUN_00409350();
            uStack_c = 10;
            puStack_ec = (uint *)0x9;
            puStack_f0 = (uint *)0xdf2728;
            uStack_98 = 0xf;
            uStack_9c = 0;
            auStack_ac[0] = auStack_ac[0] & 0xffffff00;
            puStack_f4 = (uint *)0x92e8a8;
            FUN_00409350();
            uStack_c._0_1_ = 0xb;
            puStack_ec = (uint *)0x92e8b5;
            FUN_006a4f40();
            puStack_ec = auStack_c8;
            puStack_f0 = auStack_88;
            puStack_f4 = (uint *)0x92e8c4;
            puStack_ec = (uint *)FUN_00424ce0();
            puStack_f0 = auStack_ac;
            puStack_f4 = (uint *)auStack_50;
            uStack_c._0_1_ = 0xc;
            uStack_f8 = 0x92e8df;
            iVar9 = FUN_00424aa0();
            uStack_c._0_1_ = 0xd;
            iVar4 = puVar8[1];
            puStack_ec = (uint *)0x44;
            puStack_f0 = (uint *)0x92e8f9;
            puVar10 = (undefined1 *)FUN_00aae9af();
            uStack_c._0_1_ = 0xe;
            uVar6 = (undefined1)uStack_c;
            uStack_c._0_1_ = 0xe;
            puStack_90 = puVar10;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = (undefined1 *)0x0;
              uStack_c._0_1_ = uVar6;
            }
            else {
              puStack_ec = (uint *)0xffffffff;
              puStack_f0 = (uint *)0x0;
              *(undefined4 *)(puVar10 + 0x14) = 0xf;
              *(undefined4 *)(puVar10 + 0x10) = 0;
              *puVar10 = 0;
              uStack_f8 = 0x92e929;
              puStack_f4 = (uint *)iVar9;
              FUN_00408ed0();
              uStack_c._0_1_ = 0xf;
              puStack_ec = (uint *)0xffffffff;
              puStack_f0 = (uint *)0x0;
              puStack_f4 = (uint *)(iVar9 + 0x1c);
              *(undefined4 *)(puVar10 + 0x30) = 0xf;
              *(undefined4 *)(puVar10 + 0x2c) = 0;
              puVar10[0x1c] = 0;
              uStack_f8 = 0x92e950;
              FUN_00408ed0();
              *(int *)(puVar10 + 0x38) = iVar4;
              *(undefined4 *)(puVar10 + 0x3c) = 0;
              puVar10[0x40] = 0;
            }
            iVar9 = puVar8[2];
            puVar8[1] = puVar10;
            puVar8[2] = iVar9 + 1;
            if (iVar9 == 0) {
              *puVar8 = puVar10;
            }
            else {
              *(undefined1 **)(iVar4 + 0x3c) = puVar10;
            }
            puStack_ec = (uint *)0x92e988;
            FUN_00a39a80();
            if (0xf < uStack_74) {
              puStack_ec = (uint *)auStack_88[0];
                    /* WARNING: Subroutine does not return */
              puStack_f0 = (uint *)&UNK_0092e999;
              FUN_00aae91b();
            }
            uStack_74 = 0xf;
            uStack_78 = 0;
            auStack_88[0] = auStack_88[0] & 0xffffff00;
            if (0xf < uStack_98) {
              puStack_ec = (uint *)auStack_ac[0];
                    /* WARNING: Subroutine does not return */
              puStack_f0 = (uint *)&UNK_0092e9be;
              FUN_00aae91b();
            }
            uStack_c = 0xffffffff;
            uStack_98 = 0xf;
            uStack_9c = 0;
            uVar5 = auStack_ac[0] >> 8;
            auStack_ac[0] = uVar5 << 8;
            if (0xf < uStack_b4) {
              puStack_ec = (uint *)auStack_c8[0];
                    /* WARNING: Subroutine does not return */
              puStack_f0 = (uint *)&UNK_0092e9e9;
              FUN_00aae91b();
            }
            uStack_b4 = 0xf;
            uStack_b8 = 0;
            auStack_c8[0] = auStack_c8[0] & 0xffffff00;
            if (iStack_d8 == *(int *)(DAT_012588e8 + 0xb60)) {
              puStack_ec = (uint *)0x0;
              puStack_f0 = (uint *)&DAT_00ded94d;
              uStack_98 = 0xf;
              uStack_9c = 0;
              auStack_ac[0] = uVar5 << 8;
              puStack_f4 = (uint *)0x92ea28;
              FUN_00409350();
              uStack_c = 0x10;
              puStack_ec = (uint *)0xb;
              puStack_f0 = (uint *)0xe349b4;
              uStack_b4 = 0xf;
              uStack_b8 = 0;
              auStack_c8[0] = auStack_c8[0] & 0xffffff00;
              puStack_f4 = (uint *)0x92ea4f;
              FUN_00409350();
              uStack_c._0_1_ = 0x11;
              puStack_90 = auStack_168;
              uVar12 = *(undefined4 *)
                        (*(int *)(DAT_012588e8 + 0xacc) +
                        *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4)
                                + 0xbe4) * 4);
              uVar16 = *(undefined4 *)(param_1 + 0xc);
              uVar15 = *(undefined4 *)(param_1 + 8);
              uVar14 = 0;
              puVar13 = auStack_ac;
              FUN_006a4f40(puVar8,uVar12,puVar13,0,iStack_dc,iStack_d8,uVar15,uVar16);
              uVar11 = FUN_006a55b0();
              FUN_006a7ed0(auStack_168,uVar11,puVar8,uVar12,puVar13,uVar14,iStack_dc,iStack_d8,
                           uVar15,uVar16);
              uStack_c._0_1_ = 0x12;
              FUN_006a4f40();
              uVar12 = FUN_006a4f40();
              uStack_c = CONCAT31(uStack_c._1_3_,0x11);
              FUN_004e9540(uVar12);
              if (0xf < uStack_b4) {
                puStack_ec = (uint *)auStack_c8[0];
                    /* WARNING: Subroutine does not return */
                puStack_f0 = (uint *)&UNK_0092eb20;
                FUN_00aae91b();
              }
              uStack_b4 = 0xf;
              uStack_b8 = 0;
              auStack_c8[0] = auStack_c8[0] & 0xffffff00;
              if (0xf < uStack_98) {
                puStack_ec = (uint *)auStack_ac[0];
                    /* WARNING: Subroutine does not return */
                puStack_f0 = (uint *)&UNK_0092eb44;
                FUN_00aae91b();
              }
            }
            else {
              if (*(int *)(param_1 + 0xc) == *(int *)(DAT_012588e8 + 0xb60)) {
                puStack_ec = (uint *)0x92eb72;
                FUN_009885d0();
                uStack_c = 0x13;
                puStack_ec = (uint *)0x92eb8b;
                FUN_009885d0();
                uStack_c._0_1_ = 0x14;
                puStack_90 = auStack_168;
                uVar12 = *(undefined4 *)
                          (*(int *)(DAT_012588e8 + 0xacc) +
                          *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iStack_d8 * 4) + 0xbe4) * 4
                          );
                uVar16 = *(undefined4 *)(param_1 + 0xc);
                uVar15 = *(undefined4 *)(param_1 + 8);
                uVar14 = 0;
                puVar13 = auStack_c8;
                FUN_006a4f40(puVar8,uVar12,puVar13,0,iStack_dc,iStack_d8,uVar15,uVar16);
                uVar11 = FUN_006a55b0();
                FUN_006a7ed0(auStack_168,uVar11,puVar8,uVar12,puVar13,uVar14,iStack_dc,iStack_d8,
                             uVar15,uVar16);
                uStack_c._0_1_ = 0x15;
                FUN_006a4f40();
                uVar12 = FUN_006a4f40();
                uStack_c = CONCAT31(uStack_c._1_3_,0x14);
              }
              else {
                puStack_ec = (uint *)0x92ec41;
                FUN_009885d0();
                uStack_c = 0x16;
                puStack_ec = (uint *)0x92ec5a;
                FUN_009885d0();
                uStack_c._0_1_ = 0x17;
                puStack_90 = auStack_168;
                uVar12 = *(undefined4 *)
                          (*(int *)(DAT_012588e8 + 0xacc) +
                          *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iStack_d8 * 4) + 0xbe4) * 4
                          );
                uVar16 = *(undefined4 *)(param_1 + 0xc);
                uVar15 = *(undefined4 *)(param_1 + 8);
                uVar14 = 0;
                puVar13 = auStack_c8;
                FUN_006a4f40(puVar8,uVar12,puVar13,0,iStack_dc,iStack_d8,uVar15,uVar16);
                uVar11 = FUN_006a55b0();
                FUN_006a7ed0(auStack_168,uVar11,puVar8,uVar12,puVar13,uVar14,iStack_dc,iStack_d8,
                             uVar15,uVar16);
                uStack_c._0_1_ = 0x18;
                FUN_006a4f40();
                uVar12 = FUN_006a4f40();
                uStack_c = CONCAT31(uStack_c._1_3_,0x17);
              }
              FUN_004e9540(uVar12);
              puStack_ec = (uint *)0x92ed15;
              FUN_00408ad0();
              puStack_ec = (uint *)0x92ed1e;
              FUN_00408ad0();
            }
          }
        }
        if (*(int *)(param_1 + 0x1c) != 0) {
          iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x14) * 4) +
                          0xcfc);
          if ((((iVar4 == 0) || (iVar4 != *(int *)(param_1 + 0xc))) ||
              (*(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2 <=
               *(int *)(param_1 + 0x14))) ||
             ((*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(param_1 + 0x14) * 4) != 0 ||
              (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                   *(int *)(param_1 + 0x14) * 4) + 0xbe8) +
                                 iVar4 * 4) + 0x70) == '\0')))) {
            *(undefined4 *)(param_1 + 0x18) = 0x2d2d2d;
            *(undefined4 *)(param_1 + 0x1c) = 0;
          }
        }
        ExceptionList = pvStack_14;
        return;
      }
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      puStack_ec = (uint *)0x92e2dc;
      cVar7 = (**(code **)(*piVar2 + 0x18))();
    } while (cVar7 == '\0');
    for (puStack_ec = *(uint **)(param_1 + 0x50); puStack_ec != (undefined4 *)0x0;
        puStack_ec = (uint *)puStack_ec[2]) {
      if ((int *)*puStack_ec == piVar2) {
        if (puStack_ec != (undefined4 *)0x0) {
          if (*(char *)(param_1 + 0x5c) == '\0') {
            iVar4 = puStack_ec[1];
            iVar9 = puStack_ec[2];
            if (iVar4 != 0) {
              *(int *)(iVar4 + 8) = iVar9;
            }
            if (iVar9 != 0) {
              *(int *)(iVar9 + 4) = iVar4;
            }
            if (puStack_ec == *(undefined4 **)(param_1 + 0x50)) {
              *(int *)(param_1 + 0x50) = iVar9;
            }
            if (puStack_ec == *(undefined4 **)(param_1 + 0x54)) {
              *(int *)(param_1 + 0x54) = iVar4;
            }
                    /* WARNING: Subroutine does not return */
            puStack_f0 = (uint *)&UNK_0092e336;
            FUN_00aae91b();
          }
          *(undefined1 *)(puStack_ec + 3) = 1;
        }
        break;
      }
    }
    iVar4 = DAT_012588e8;
    for (puStack_ec = *(uint **)(DAT_012588e8 + 0xa84); puStack_ec != (undefined4 *)0x0;
        puStack_ec = (uint *)puStack_ec[2]) {
      if ((int *)*puStack_ec == piVar2) {
        if (puStack_ec != (undefined4 *)0x0) {
          if (*(char *)(DAT_012588e8 + 0xa90) == '\0') {
            iVar9 = puStack_ec[1];
            iVar3 = puStack_ec[2];
            if (iVar9 != 0) {
              *(int *)(iVar9 + 8) = iVar3;
            }
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = iVar9;
            }
            if (puStack_ec == *(undefined4 **)(iVar4 + 0xa84)) {
              *(int *)(iVar4 + 0xa84) = iVar3;
            }
            if (puStack_ec == *(undefined4 **)(iVar4 + 0xa88)) {
              *(int *)(iVar4 + 0xa88) = iVar9;
            }
                    /* WARNING: Subroutine does not return */
            puStack_f0 = (uint *)&UNK_0092e3a5;
            FUN_00aae91b();
          }
          *(undefined1 *)(puStack_ec + 3) = 1;
        }
        break;
      }
    }
    puStack_ec = (uint *)0x1;
    puStack_f0 = (uint *)0x92e3b8;
    (**(code **)*piVar2)();
  } while( true );
}

