// FUN_006840f0 @ 006840f0 body=[[006840f0, 00684877] [00684880, 006848ec] [006848f0, 00684b03] [00684b07, 00684b51] [00684b55, 00684b84] [00684b88, 00684bbc] [00684bc0, 00684d19] [00684d1d, 00684d4c] [00684d50, 00685394] [00685398, 006853b1] [006853b5, 006853d9] [006853dd, 0068541e]]


/* WARNING: Removing unreachable block (ram,0x0068444c) */
/* WARNING: Removing unreachable block (ram,0x006844ae) */
/* WARNING: Removing unreachable block (ram,0x006846fe) */
/* WARNING: Removing unreachable block (ram,0x0068538f) */
/* WARNING: Removing unreachable block (ram,0x0068469c) */

void FUN_006840f0(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  void **ppvVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint *puVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  undefined4 uStack_248;
  code *pcStack_244;
  undefined1 auStack_240 [100];
  undefined4 uStack_1dc;
  undefined1 *puStack_1d8;
  int **ppiStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  int *piStack_1a4;
  int aiStack_198 [2];
  int aiStack_190 [2];
  int *piStack_188;
  int *piStack_184;
  int *piStack_180;
  int *piStack_178;
  int *piStack_174;
  int *piStack_170;
  undefined1 *puStack_168;
  uint auStack_160 [4];
  undefined4 uStack_150;
  uint uStack_14c;
  uint auStack_144 [4];
  undefined4 uStack_134;
  uint uStack_130;
  int iStack_128;
  int *local_124;
  int *local_120;
  undefined1 auStack_118 [4];
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint auStack_104 [4];
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined1 auStack_e8 [56];
  uint local_b0 [7];
  undefined4 local_94;
  undefined1 auStack_88 [116];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb7a88;
  local_14 = ExceptionList;
  if (*(char *)(DAT_012588e8 + 0xd11) == '\0') {
    ppvVar3 = &local_14;
    if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
      piVar14 = *(int **)(param_1 + 0xb3c);
      ExceptionList = &local_14;
      while (piVar14 != (int *)0x0) {
        iVar7 = *piVar14;
        piVar14 = (int *)piVar14[2];
        if (((*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) & 0xfffffff8U) != 0) &&
           ((*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) & 0xfffffff8U) != 0)) {
          puVar10 = *(undefined4 **)(iVar7 + 0x3c);
          local_120 = (int *)*puVar10;
          puVar1 = *(undefined4 **)(iVar7 + 0x2c);
          iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + puVar10[1] * 4);
          if ((*(char *)(iVar6 + 0xcf5) != '\0') || (*(char *)(iVar6 + 0xcf4) != '\0')) {
            uStack_1c8 = CONCAT44(1,puVar10[1]);
            uStack_1d0 = CONCAT44(*puVar10,iVar7);
            ppiStack_1d4 = (int **)0x6841ab;
            FUN_00936070();
          }
          local_120 = (int *)*puVar1;
          iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + puVar1[1] * 4);
          if ((*(char *)(iVar6 + 0xcf5) != '\0') || (*(char *)(iVar6 + 0xcf4) != '\0')) {
            uStack_1c8 = CONCAT44(1,puVar1[1]);
            uStack_1d0 = CONCAT44(*puVar1,iVar7);
            ppiStack_1d4 = (int **)0x6841e4;
            FUN_00936070();
          }
        }
      }
      piVar14 = *(int **)(param_1 + 0xb3c);
      while (ppvVar3 = ExceptionList, piVar14 != (int *)0x0) {
        iVar7 = *piVar14;
        piVar14 = (int *)piVar14[2];
        if (((*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) & 0xfffffff8U) != 0) &&
           ((*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) & 0xfffffff8U) != 0)) {
          uStack_1c8 = CONCAT44(0x684232,(char *)uStack_1c8);
          FUN_0093c350();
          uStack_1c8 = CONCAT44(0x684239,(char *)uStack_1c8);
          iVar6 = FUN_0093bcc0();
          if (iVar6 == 0) {
            uStack_1c8 = **(undefined8 **)(iVar7 + 0x2c);
            uStack_1d0 = **(undefined8 **)(iVar7 + 0x3c);
            ppiStack_1d4 = (int **)local_b0;
            puStack_1d8 = (undefined1 *)0x684262;
            FUN_00916900();
            local_c = 0;
            local_94 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
            uStack_1c8 = 0x4000684287;
            iVar7 = FUN_00aae9af();
            local_c._0_1_ = 1;
            local_124 = (int *)iVar7;
            if (iVar7 == 0) {
              piVar9 = (int *)0x0;
            }
            else {
              uStack_1c8 = CONCAT44(0x6842b2,(char *)uStack_1c8);
              uVar8 = (**(code **)(local_b0[0] + 0x30))();
              uStack_1c8 = CONCAT44(uVar8,iVar7);
              uStack_1d0 = CONCAT44(0x6842b9,(undefined4)uStack_1d0);
              piVar9 = (int *)FUN_0090f620();
            }
            local_c = (uint)local_c._1_3_ << 8;
            uStack_1c8 = CONCAT44(0x6842d0,(char *)uStack_1c8);
            (**(code **)(*piVar9 + 0x18))();
            uStack_1c8 = 0x1006842da;
            (**(code **)*piVar9)();
            local_c = 2;
            uStack_1c8 = CONCAT44(auStack_88,0x6842f2);
            FUN_00427800();
            local_c = 0xffffffff;
          }
        }
      }
    }
    ExceptionList = ppvVar3;
    piVar14 = *(int **)(param_1 + 0xb3c);
    iVar7 = DAT_012588e8;
    while (piVar14 != (int *)0x0) {
      iVar6 = *piVar14;
      piVar14 = (int *)piVar14[2];
      if (((*(int *)(iVar6 + 0x30) - *(int *)(iVar6 + 0x2c) & 0xfffffff8U) == 0) ||
         ((*(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c) & 0xfffffff8U) == 0)) {
        uStack_1c8 = CONCAT44(iVar6 + 0x3c,iVar6 + 0x2c);
        uStack_1d0 = CONCAT44(param_1,0x684363);
        local_124 = piVar14;
        cVar4 = FUN_00683d20();
        uStack_1c8 = CONCAT44(iVar6 + 0x2c,iVar6 + 0x3c);
        uStack_1d0 = CONCAT44(param_1,0x68437e);
        cVar5 = FUN_00683d20();
        if ((cVar5 != '\x01') && ((cVar4 != '\x01' && (*(char *)(iVar6 + 8) == '\0')))) {
          piStack_178 = (int *)0x0;
          piStack_174 = (int *)0x0;
          piStack_170 = (int *)0x0;
          piStack_188 = (int *)0x0;
          piStack_184 = (int *)0x0;
          piStack_180 = (int *)0x0;
          iStack_128 = 0;
          piStack_1a4 = (int *)0x0;
          local_c = 5;
          uVar16 = *(int *)(iVar6 + 0x30) - *(int *)(iVar6 + 0x2c);
          while ((uVar16 & 0xfffffff8) != 0) {
            aiStack_190[0] = **(int **)(iVar6 + 0x2c);
            aiStack_190[1] = (*(int **)(iVar6 + 0x2c))[1];
            if (aiStack_190 < piStack_1a4) {
              iVar7 = (int)aiStack_190 >> 3;
              if (piStack_1a4 == (int *)0x0) {
                uStack_1c8 = 0x100684461;
                FUN_004237e0();
              }
              else {
                *piStack_1a4 = *(int *)(iVar7 * 8);
                piStack_1a4[1] = *(int *)(iVar7 * 8 + 4);
              }
            }
            else if (piStack_1a4 == (int *)0x0) {
              uStack_1c8 = 0x1006844c3;
              FUN_004237e0();
            }
            else {
              *piStack_1a4 = aiStack_190[0];
              piStack_1a4[1] = aiStack_190[1];
            }
            uStack_1c8 = CONCAT44(1,aiStack_190[1]);
            piStack_1a4 = piStack_1a4 + 2;
            uStack_1d0 = CONCAT44(aiStack_190[0],iVar6);
            ppiStack_1d4 = (int **)0x6844f9;
            FUN_009351c0();
            if ((aiStack_190 < piStack_174) && (piStack_178 <= aiStack_190)) {
              iVar7 = (int)aiStack_190 - (int)piStack_178 >> 3;
              if (piStack_174 == piStack_170) {
                uVar16 = (int)piStack_174 - (int)piStack_178 >> 3;
                if (0x1ffffffe < uVar16) goto LAB_00685415;
                uVar16 = uVar16 + 1;
                uVar15 = (int)piStack_170 - (int)piStack_178 >> 3;
                if (uVar15 < uVar16) {
                  if (0x1fffffff - (uVar15 >> 1) < uVar15) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = uVar15 + (uVar15 >> 1);
                  }
                  if (uVar15 < uVar16) {
                    uVar15 = uVar16;
                  }
                  uStack_1c8 = CONCAT44(uVar15,0x684568);
                  FUN_004237e0();
                }
              }
              if (piStack_174 != (int *)0x0) {
                *piStack_174 = piStack_178[iVar7 * 2];
                piStack_174[1] = piStack_178[iVar7 * 2 + 1];
              }
            }
            else {
              if (piStack_174 == piStack_170) {
                uVar16 = (int)piStack_174 - (int)piStack_178 >> 3;
                if (0x1ffffffe < uVar16) goto LAB_00685415;
                uVar16 = uVar16 + 1;
                uVar15 = (int)piStack_170 - (int)piStack_178 >> 3;
                if (uVar15 < uVar16) {
                  if (0x1fffffff - (uVar15 >> 1) < uVar15) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = uVar15 + (uVar15 >> 1);
                  }
                  if (uVar15 < uVar16) {
                    uVar15 = uVar16;
                  }
                  uStack_1c8 = CONCAT44(uVar15,0x6845d5);
                  FUN_004237e0();
                }
              }
              if (piStack_174 != (int *)0x0) {
                *piStack_174 = aiStack_190[0];
                piStack_174[1] = aiStack_190[1];
              }
            }
            piStack_174 = piStack_174 + 2;
            if (*(int *)(DAT_012588e8 + 0xb60) == aiStack_190[1]) {
              iStack_128 = 1;
            }
            iVar7 = DAT_012588e8;
            uVar16 = *(int *)(iVar6 + 0x30) - *(int *)(iVar6 + 0x2c);
          }
          uVar16 = *(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c);
          while ((uVar16 & 0xfffffff8) != 0) {
            aiStack_198[0] = **(int **)(iVar6 + 0x3c);
            aiStack_198[1] = (*(int **)(iVar6 + 0x3c))[1];
            if (aiStack_198 < piStack_1a4) {
              iVar7 = (int)aiStack_198 >> 3;
              if (piStack_1a4 == (int *)0x0) {
                uStack_1c8 = 0x1006846b1;
                FUN_004237e0();
              }
              else {
                *piStack_1a4 = *(int *)(iVar7 * 8);
                piStack_1a4[1] = *(int *)(iVar7 * 8 + 4);
              }
            }
            else if (piStack_1a4 == (int *)0x0) {
              uStack_1c8 = 0x100684713;
              FUN_004237e0();
            }
            else {
              *piStack_1a4 = aiStack_198[0];
              piStack_1a4[1] = aiStack_198[1];
            }
            uStack_1c8 = CONCAT44(1,aiStack_198[1]);
            piStack_1a4 = piStack_1a4 + 2;
            uStack_1d0 = CONCAT44(aiStack_198[0],iVar6);
            ppiStack_1d4 = (int **)0x684749;
            FUN_00936070();
            if ((aiStack_198 < piStack_184) && (piStack_188 <= aiStack_198)) {
              iVar7 = (int)aiStack_198 - (int)piStack_188 >> 3;
              if (piStack_184 == piStack_180) {
                uVar16 = (int)piStack_184 - (int)piStack_188 >> 3;
                if (0x1ffffffe < uVar16) {
LAB_00685415:
                  uStack_1c8 = 0xdeda300068541f;
                    /* WARNING: Subroutine does not return */
                  FUN_00aad3ad();
                }
                uVar16 = uVar16 + 1;
                uVar15 = (int)piStack_180 - (int)piStack_188 >> 3;
                if (uVar15 < uVar16) {
                  if (0x1fffffff - (uVar15 >> 1) < uVar15) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = uVar15 + (uVar15 >> 1);
                  }
                  if (uVar15 < uVar16) {
                    uVar15 = uVar16;
                  }
                  uStack_1c8 = CONCAT44(uVar15,0x6847b8);
                  FUN_004237e0();
                }
              }
              if (piStack_184 != (int *)0x0) {
                *piStack_184 = piStack_188[iVar7 * 2];
                piStack_184[1] = piStack_188[iVar7 * 2 + 1];
              }
            }
            else {
              if (piStack_184 == piStack_180) {
                uVar16 = (int)piStack_184 - (int)piStack_188 >> 3;
                if (0x1ffffffe < uVar16) goto LAB_00685415;
                uVar16 = uVar16 + 1;
                uVar15 = (int)piStack_180 - (int)piStack_188 >> 3;
                if (uVar15 < uVar16) {
                  if (0x1fffffff - (uVar15 >> 1) < uVar15) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = uVar15 + (uVar15 >> 1);
                  }
                  if (uVar15 < uVar16) {
                    uVar15 = uVar16;
                  }
                  uStack_1c8 = CONCAT44(uVar15,0x684825);
                  FUN_004237e0();
                }
              }
              if (piStack_184 != (int *)0x0) {
                *piStack_184 = aiStack_198[0];
                piStack_184[1] = aiStack_198[1];
              }
            }
            piStack_184 = piStack_184 + 2;
            if (*(int *)(DAT_012588e8 + 0xb60) == aiStack_198[1]) {
              iStack_128 = 2;
            }
            iVar7 = DAT_012588e8;
            uVar16 = *(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c);
          }
          piVar14 = (int *)0x0;
          while (piVar14 < piStack_1a4) {
            iVar13 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar14[1] * 4);
            local_120 = piVar14 + 2;
            piVar14 = local_120;
            if (*(char *)(iVar7 + 0xd1c) != '\0') {
              uStack_1c8 = CONCAT44(iVar13,iVar7 + 0xab4);
              uStack_1d0 = CONCAT44(0x6848cb,(undefined4)uStack_1d0);
              FUN_005b53d0();
              iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar13 + 0x20) * 4) +
                              0x9e8);
              while (iVar7 != 0) {
                iVar7 = *(int *)(iVar7 + 8);
                uStack_1c8 = CONCAT44(0x684909,(char *)uStack_1c8);
                FUN_004b7c50();
              }
              uStack_1c8 = CONCAT44(0x684918,(char *)uStack_1c8);
              FUN_005dbd90();
              piVar14 = local_120;
              iVar7 = DAT_012588e8;
            }
          }
          if ((((int)piStack_174 - (int)piStack_178 & 0xfffffff8U) != 0) &&
             (((int)piStack_184 - (int)piStack_188 & 0xfffffff8U) != 0)) {
            uStack_1c8 = CONCAT44(*(undefined4 *)
                                   (*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0xb60) * 4),
                                  0x684976);
            puVar10 = (undefined4 *)FUN_005061e0();
            uStack_1c8 = 0x1100dfdcc0;
            uStack_130 = 0xf;
            uStack_134 = 0;
            auStack_144[0] = auStack_144[0] & 0xffffff00;
            uStack_1d0 = CONCAT44(0x6849a8,(undefined4)uStack_1d0);
            FUN_00409350();
            local_c._0_1_ = 6;
            uStack_1c8 = 0x900df2728;
            uStack_f0 = 0xf;
            uStack_f4 = 0;
            auStack_104[0] = auStack_104[0] & 0xffffff00;
            uStack_1d0 = CONCAT44(0x6849d9,(undefined4)uStack_1d0);
            FUN_00409350();
            uStack_1c8 = CONCAT44(auStack_144,auStack_118);
            local_c._0_1_ = 7;
            uStack_1d0 = CONCAT44(0x6849f3,(undefined4)uStack_1d0);
            FUN_009a8ee0();
            local_c._0_1_ = 8;
            uStack_1c8 = CONCAT44(0x684a02,(char *)uStack_1c8);
            iVar7 = FUN_00475500();
            uStack_1d0 = *(undefined8 *)(iVar7 + 0x6c);
            uStack_1c8 = *(undefined8 *)(iVar7 + 0x74);
            ppiStack_1d4 = (int **)0x684a25;
            uVar8 = FUN_009a9880();
            uStack_1c8 = CONCAT44(uVar8,auStack_104);
            local_c._0_1_ = 9;
            uStack_1d0 = CONCAT44(auStack_e8,0x684a43);
            iVar7 = FUN_00424aa0();
            local_c._0_1_ = 10;
            puStack_168 = (undefined1 *)puVar10[1];
            uStack_1c8 = 0x4400684a5b;
            puVar11 = (undefined1 *)FUN_00aae9af();
            local_c._0_1_ = 0xb;
            uVar2 = (undefined1)local_c;
            local_c._0_1_ = 0xb;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = (undefined1 *)0x0;
              local_c._0_1_ = uVar2;
            }
            else {
              uStack_1c8 = 0xffffffff00000000;
              *(undefined4 *)(puVar11 + 0x14) = 0xf;
              *(undefined4 *)(puVar11 + 0x10) = 0;
              *puVar11 = 0;
              uStack_1d0 = CONCAT44(iVar7,0x684a8d);
              FUN_00408ed0();
              local_c._0_1_ = 0xc;
              uStack_1c8 = 0xffffffff00000000;
              *(undefined4 *)(puVar11 + 0x30) = 0xf;
              *(undefined4 *)(puVar11 + 0x2c) = 0;
              puVar11[0x1c] = 0;
              uStack_1d0 = CONCAT44(iVar7 + 0x1c,0x684ab6);
              FUN_00408ed0();
              *(undefined1 **)(puVar11 + 0x38) = puStack_168;
              *(undefined4 *)(puVar11 + 0x3c) = 0;
              puVar11[0x40] = 0;
            }
            iVar7 = puVar10[2];
            puVar10[1] = puVar11;
            puVar10[2] = iVar7 + 1;
            if (iVar7 == 0) {
              *puVar10 = puVar11;
            }
            else {
              *(undefined1 **)((int)puStack_168 + 0x3c) = puVar11;
            }
            uStack_1c8 = CONCAT44(0x684af3,(char *)uStack_1c8);
            FUN_00a39a80();
            if (0xf < uStack_14c) {
              uStack_1c8 = CONCAT44(auStack_160[0],&UNK_00684b04);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_14c = 0xf;
            uStack_150 = 0;
            auStack_160[0] = auStack_160[0] & 0xffffff00;
            local_c._0_1_ = 0xd;
            uStack_1c8 = CONCAT44(0x684b2e,(char *)uStack_1c8);
            FUN_009adb70();
            if (iStack_114 != 0) {
              uStack_1c8 = CONCAT44(0x684b45,(char *)uStack_1c8);
              FUN_009e6a80();
              uStack_1c8 = CONCAT44(iStack_114,&UNK_00684b52);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            iStack_114 = 0;
            uStack_110 = 0;
            uStack_10c = 0;
            if (0xf < uStack_f0) {
              uStack_1c8 = CONCAT44(auStack_104[0],&UNK_00684b85);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c._0_1_ = 5;
            uVar2 = (undefined1)local_c;
            local_c._0_1_ = 5;
            uStack_f0 = 0xf;
            uStack_f4 = 0;
            auStack_104[0] = auStack_104[0] & 0xffffff00;
            if (0xf < uStack_130) {
              uStack_1c8 = CONCAT44(auStack_144[0],&UNK_00684bbd);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            if (iStack_128 == 1) {
              uStack_1c8._4_4_ = 0xb;
              uStack_1c8._0_4_ = "COUNTRYSIDE";
              uStack_130 = 0xf;
              uStack_134 = 0;
              auStack_144[0] = auStack_144[0] & 0xffffff00;
              uStack_1d0 = CONCAT44(0x684bff,(undefined4)uStack_1d0);
              FUN_00409350();
              uStack_1d0 = 0;
              uStack_1c8 = (ulonglong)uStack_1c8._4_4_ << 0x20;
              ppiStack_1d4 = &piStack_188;
              local_c._0_1_ = 0xf;
              puStack_1d8 = (undefined1 *)0x684c26;
              FUN_0043a750();
              ppiStack_1d4 = (int **)auStack_160;
              local_c._0_1_ = 0xe;
              puStack_1d8 = (undefined1 *)0x684c38;
              uVar8 = FUN_00683df0();
              uStack_1c8 = CONCAT44(uVar8,auStack_144);
              local_c._0_1_ = 0x10;
              uStack_1d0 = CONCAT44(auStack_e8,0x684c59);
              iVar7 = FUN_00424aa0();
              local_c._0_1_ = 0x11;
              puStack_168 = (undefined1 *)puVar10[1];
              uStack_1c8 = 0x4400684c71;
              puVar11 = (undefined1 *)FUN_00aae9af();
              local_c._0_1_ = 0x12;
              uVar2 = (undefined1)local_c;
              local_c._0_1_ = 0x12;
              if (puVar11 == (undefined1 *)0x0) {
                puVar11 = (undefined1 *)0x0;
                local_c._0_1_ = uVar2;
              }
              else {
                uStack_1c8 = 0xffffffff00000000;
                *(undefined4 *)(puVar11 + 0x14) = 0xf;
                *(undefined4 *)(puVar11 + 0x10) = 0;
                *puVar11 = 0;
                uStack_1d0 = CONCAT44(iVar7,0x684ca3);
                FUN_00408ed0();
                local_c._0_1_ = 0x13;
                uStack_1c8 = 0xffffffff00000000;
                *(undefined4 *)(puVar11 + 0x30) = 0xf;
                *(undefined4 *)(puVar11 + 0x2c) = 0;
                puVar11[0x1c] = 0;
                uStack_1d0 = CONCAT44(iVar7 + 0x1c,0x684ccc);
                FUN_00408ed0();
                *(undefined1 **)(puVar11 + 0x38) = puStack_168;
                *(undefined4 *)(puVar11 + 0x3c) = 0;
                puVar11[0x40] = 0;
              }
              iVar7 = puVar10[2];
              puVar10[1] = puVar11;
              puVar10[2] = iVar7 + 1;
              if (iVar7 == 0) {
                *puVar10 = puVar11;
              }
              else {
                *(undefined1 **)((int)puStack_168 + 0x3c) = puVar11;
              }
              uStack_1c8 = CONCAT44(0x684d09,(char *)uStack_1c8);
              FUN_00a39a80();
              if (0xf < uStack_14c) {
                uStack_1c8 = CONCAT44(auStack_160[0],&UNK_00684d1a);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_c._0_1_ = 5;
              uStack_14c = 0xf;
              uStack_150 = 0;
              uVar16 = auStack_160[0] >> 8;
              auStack_160[0] = uVar16 << 8;
              if (0xf < uStack_130) {
                uStack_1c8 = CONCAT44(auStack_144[0],&UNK_00684d4d);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              uStack_1c8 = 0xded94d;
              uStack_14c = 0xf;
              uStack_150 = 0;
              auStack_160[0] = uVar16 << 8;
              uStack_1d0 = CONCAT44(0x684d6c,(undefined4)uStack_1d0);
              FUN_00409350();
              local_c._0_1_ = 0x14;
              uStack_1c8 = CONCAT44(0x684d82,(char *)uStack_1c8);
              FUN_009885d0();
              piVar14 = piStack_188;
              puStack_168 = auStack_240;
              local_c._0_1_ = 0x15;
              uStack_248 = 0;
              pcStack_244 = (code *)0x0;
              uVar8 = *(undefined4 *)(DAT_012588e8 + 0xb60);
              uVar18 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
              iVar7 = piStack_188[1];
              iVar13 = *piStack_188;
              uVar20 = 0;
              puVar19 = auStack_160;
              uVar17 = 0;
              FUN_006a4f40(puVar10,0,puVar19,0,iVar13,iVar7,uVar18,uVar8);
              uVar12 = FUN_006a55b0();
              FUN_006a7ed0(puStack_168,uVar12,puVar10,uVar17,puVar19,uVar20,iVar13,iVar7,uVar18,
                           uVar8);
              local_c._0_1_ = 0x16;
              puStack_168 = (undefined1 *)*piVar14;
              uStack_248 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + piVar14[1] * 4);
              pcStack_244 = FUN_00506770;
              uVar8 = FUN_006a4f40();
              local_c = CONCAT31(local_c._1_3_,0x15);
              FUN_0042bb30(uVar8);
              uStack_1c8 = CONCAT44(0x684e40,(char *)uStack_1c8);
              FUN_00408ad0();
            }
            else {
              local_c._0_1_ = uVar2;
              if (iStack_128 == 2) {
                uStack_1c8 = CONCAT44(0x684e60,(char *)uStack_1c8);
                FUN_009885d0();
                puStack_1d8 = (undefined1 *)&uStack_1d0;
                local_c._0_1_ = 0x17;
                ppiStack_1d4 = &piStack_178;
                uStack_1dc = 0x684e7c;
                FUN_0042b800();
                ppiStack_1d4 = (int **)auStack_144;
                puStack_1d8 = (undefined1 *)0x684e89;
                uVar8 = FUN_00683df0();
                uStack_1c8 = CONCAT44(uVar8,auStack_160);
                local_c._0_1_ = 0x18;
                uStack_1d0 = CONCAT44(auStack_e8,0x684ea5);
                FUN_00424aa0();
                local_c._0_1_ = 0x19;
                iVar7 = puVar10[1];
                uStack_1c8 = 0x4400684eb9;
                iVar13 = FUN_00aae9af();
                local_c._0_1_ = 0x1a;
                if (iVar13 == 0) {
                  uVar8 = 0;
                }
                else {
                  uStack_1c8 = CONCAT44(iVar7,iVar13);
                  uStack_1d0 = CONCAT44(0x684ed5,(undefined4)uStack_1d0);
                  uVar8 = FUN_0042b900();
                }
                iVar13 = puVar10[2];
                puVar10[1] = uVar8;
                puVar10[2] = iVar13 + 1;
                if (iVar13 == 0) {
                  *puVar10 = uVar8;
                }
                else {
                  *(undefined4 *)(iVar7 + 0x3c) = uVar8;
                }
                uStack_1c8 = CONCAT44(0x684efc,(char *)uStack_1c8);
                FUN_00a39a80();
                uStack_1c8 = CONCAT44(0x684f05,(char *)uStack_1c8);
                FUN_00408ad0();
                local_c._0_1_ = 5;
                uStack_1c8 = CONCAT44(0x684f16,(char *)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x684f24,(char *)uStack_1c8);
                FUN_009885d0();
                local_c._0_1_ = 0x1b;
                uStack_1c8 = CONCAT44(0x684f3a,(char *)uStack_1c8);
                FUN_009885d0();
                local_c._0_1_ = 0x1c;
                puStack_168 = (undefined1 *)&uStack_248;
                uStack_248 = 0;
                pcStack_244 = (code *)0x0;
                uVar8 = *(undefined4 *)(DAT_012588e8 + 0xb60);
                uVar18 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                iVar7 = piStack_178[1];
                iVar13 = *piStack_178;
                uVar20 = 0;
                puVar19 = auStack_144;
                uVar17 = 0;
                FUN_006a4f40(puVar10,0,puVar19,0,iVar13,iVar7,uVar18,uVar8);
                uVar12 = FUN_006a55b0();
                FUN_006a7ed0(auStack_240,uVar12,puVar10,uVar17,puVar19,uVar20,iVar13,iVar7,uVar18,
                             uVar8);
                local_c._0_1_ = 0x1d;
                puStack_168 = (undefined1 *)*piStack_188;
                uStack_248 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + piStack_188[1] * 4);
                pcStack_244 = FUN_00506770;
                uVar8 = FUN_006a4f40();
                local_c = CONCAT31(local_c._1_3_,0x1c);
              }
              else {
                uStack_1c8 = CONCAT44(0x684ff6,(char *)uStack_1c8);
                FUN_009885d0();
                puStack_1d8 = (undefined1 *)&uStack_1d0;
                local_c._0_1_ = 0x1e;
                ppiStack_1d4 = &piStack_178;
                uStack_1dc = 0x685012;
                FUN_0042b800();
                ppiStack_1d4 = (int **)auStack_144;
                puStack_1d8 = (undefined1 *)0x68501f;
                uVar8 = FUN_00683df0();
                uStack_1c8 = CONCAT44(uVar8,auStack_160);
                local_c._0_1_ = 0x1f;
                uStack_1d0 = CONCAT44(auStack_e8,0x68503d);
                FUN_00424aa0();
                local_c._0_1_ = 0x20;
                iVar7 = puVar10[1];
                uStack_1c8 = 0x4400685051;
                iVar13 = FUN_00aae9af();
                local_c._0_1_ = 0x21;
                if (iVar13 == 0) {
                  uVar8 = 0;
                }
                else {
                  uStack_1c8 = CONCAT44(iVar7,iVar13);
                  uStack_1d0 = CONCAT44(0x68506d,(undefined4)uStack_1d0);
                  uVar8 = FUN_0042b900();
                }
                iVar13 = puVar10[2];
                puVar10[1] = uVar8;
                puVar10[2] = iVar13 + 1;
                if (iVar13 == 0) {
                  *puVar10 = uVar8;
                }
                else {
                  *(undefined4 *)(iVar7 + 0x3c) = uVar8;
                }
                uStack_1c8 = CONCAT44(0x685094,(char *)uStack_1c8);
                FUN_00a39a80();
                uStack_1c8 = CONCAT44(0x68509d,(char *)uStack_1c8);
                FUN_00408ad0();
                local_c._0_1_ = 5;
                uStack_1c8 = CONCAT44(0x6850ae,(char *)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x6850bc,(char *)uStack_1c8);
                FUN_009885d0();
                puStack_1d8 = (undefined1 *)&uStack_1d0;
                local_c._0_1_ = 0x22;
                ppiStack_1d4 = &piStack_188;
                uStack_1dc = 0x6850d8;
                FUN_0042b800();
                ppiStack_1d4 = (int **)auStack_144;
                puStack_1d8 = (undefined1 *)0x6850e5;
                uVar8 = FUN_00683df0();
                uStack_1c8 = CONCAT44(uVar8,auStack_160);
                local_c._0_1_ = 0x23;
                uStack_1d0 = CONCAT44(auStack_e8,0x685101);
                FUN_00424aa0();
                local_c._0_1_ = 0x24;
                iVar7 = puVar10[1];
                uStack_1c8 = 0x4400685115;
                iVar13 = FUN_00aae9af();
                local_c._0_1_ = 0x25;
                if (iVar13 == 0) {
                  uVar8 = 0;
                }
                else {
                  uStack_1c8 = CONCAT44(iVar7,iVar13);
                  uStack_1d0 = CONCAT44(0x685131,(undefined4)uStack_1d0);
                  uVar8 = FUN_0042b900();
                }
                iVar13 = puVar10[2];
                puVar10[1] = uVar8;
                puVar10[2] = iVar13 + 1;
                if (iVar13 == 0) {
                  *puVar10 = uVar8;
                }
                else {
                  *(undefined4 *)(iVar7 + 0x3c) = uVar8;
                }
                uStack_1c8 = CONCAT44(0x685158,(char *)uStack_1c8);
                FUN_00a39a80();
                uStack_1c8 = CONCAT44(0x685161,(char *)uStack_1c8);
                FUN_00408ad0();
                local_c._0_1_ = 5;
                uStack_1c8 = CONCAT44(0x685172,(char *)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x685180,(char *)uStack_1c8);
                FUN_009885d0();
                local_c._0_1_ = 0x26;
                uStack_1c8 = CONCAT44(0x685195,(char *)uStack_1c8);
                uVar8 = FUN_0055dd40();
                uStack_1c8 = CONCAT44(uVar8,auStack_160);
                local_c._0_1_ = 0x27;
                uStack_1d0 = CONCAT44(auStack_e8,0x6851b0);
                FUN_00424aa0();
                local_c._0_1_ = 0x28;
                iVar7 = puVar10[1];
                uStack_1c8 = 0x44006851c4;
                iVar13 = FUN_00aae9af();
                local_c._0_1_ = 0x29;
                if (iVar13 == 0) {
                  uVar8 = 0;
                }
                else {
                  uStack_1c8 = CONCAT44(iVar7,iVar13);
                  uStack_1d0 = CONCAT44(0x6851e0,(undefined4)uStack_1d0);
                  uVar8 = FUN_0042b900();
                }
                iVar13 = puVar10[2];
                puVar10[1] = uVar8;
                puVar10[2] = iVar13 + 1;
                if (iVar13 == 0) {
                  *puVar10 = uVar8;
                }
                else {
                  *(undefined4 *)(iVar7 + 0x3c) = uVar8;
                }
                uStack_1c8 = CONCAT44(0x685207,(char *)uStack_1c8);
                FUN_00a39a80();
                uStack_1c8 = CONCAT44(0x685210,(char *)uStack_1c8);
                FUN_00408ad0();
                local_c._0_1_ = 5;
                uStack_1c8 = CONCAT44(0x685221,(char *)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x68522f,(char *)uStack_1c8);
                FUN_009885d0();
                local_c._0_1_ = 0x2a;
                uStack_1c8 = CONCAT44(0x685245,(char *)uStack_1c8);
                FUN_009885d0();
                piVar14 = piStack_188;
                local_c._0_1_ = 0x2b;
                puStack_168 = (undefined1 *)&uStack_248;
                uStack_248 = 0;
                pcStack_244 = (code *)0x0;
                iVar7 = piStack_188[1];
                iVar13 = *piStack_188;
                iVar22 = piStack_178[1];
                iVar21 = *piStack_178;
                uVar12 = 0;
                puVar19 = auStack_144;
                uVar18 = 0;
                FUN_006a4f40(puVar10,0,puVar19,0,iVar21,iVar22,iVar13,iVar7);
                uVar8 = FUN_006a55b0();
                FUN_006a7ed0(auStack_240,uVar8,puVar10,uVar18,puVar19,uVar12,iVar21,iVar22,iVar13,
                             iVar7);
                local_c._0_1_ = 0x2c;
                puStack_168 = (undefined1 *)*piVar14;
                uStack_248 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + piVar14[1] * 4);
                pcStack_244 = FUN_00506770;
                uVar8 = FUN_006a4f40();
                local_c = CONCAT31(local_c._1_3_,0x2b);
              }
              FUN_0042bb30(uVar8);
              uStack_1c8 = CONCAT44(0x6852fa,(char *)uStack_1c8);
              FUN_00408ad0();
            }
            local_c = CONCAT31(local_c._1_3_,5);
            uStack_1c8 = CONCAT44(0x68530b,(char *)uStack_1c8);
            FUN_00408ad0();
          }
          for (piVar14 = *(int **)(param_1 + 0xb3c); (piVar14 != (int *)0x0 && (*piVar14 != iVar6));
              piVar14 = (int *)piVar14[2]) {
          }
          uStack_1c8 = CONCAT44(piVar14,0x68533c);
          FUN_005f2ae0();
          iVar7 = *(int *)(param_1 + 0xb50);
          uStack_1c8 = 0x1000685349;
          piVar14 = (int *)FUN_00aae9af();
          if (piVar14 == (int *)0x0) {
            piVar14 = (int *)0x0;
          }
          else {
            *piVar14 = iVar6;
            piVar14[1] = iVar7;
            piVar14[2] = 0;
            *(undefined1 *)(piVar14 + 3) = 0;
          }
          iVar6 = *(int *)(param_1 + 0xb54);
          *(int **)(param_1 + 0xb50) = piVar14;
          *(int *)(param_1 + 0xb54) = iVar6 + 1;
          if (iVar6 == 0) {
            *(int **)(param_1 + 0xb4c) = piVar14;
          }
          else {
            *(int **)(iVar7 + 8) = piVar14;
          }
          if (piStack_188 != (int *)0x0) {
            uStack_1c8 = CONCAT44(piStack_188,&UNK_006853b2);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_c = 0xffffffff;
          piStack_188 = (int *)0x0;
          piStack_184 = (int *)0x0;
          piStack_180 = (int *)0x0;
          if (piStack_178 != (int *)0x0) {
            uStack_1c8 = CONCAT44(piStack_178,&UNK_006853da);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          piStack_178 = (int *)0x0;
          piStack_174 = (int *)0x0;
          piStack_170 = (int *)0x0;
          piVar14 = local_124;
          iVar7 = DAT_012588e8;
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

