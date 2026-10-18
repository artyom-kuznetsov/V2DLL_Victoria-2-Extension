// FUN_007abda0 @ 007abda0 body=[[007abda0, 007abe3a] [007abe3e, 007abec3] [007abec7, 007abf3f] [007abf43, 007abfa6] [007abfaa, 007ac00c] [007ac010, 007ac096] [007ac09a, 007ac0c0] [007ac0c4, 007ac249] [007ac24d, 007ac3c6] [007ac3ca, 007ac3eb] [007ac3ef, 007ac41c] [007ac420, 007ac499] [007ac49d, 007ac5a3] [007ac5a7, 007ac5d4] [007ac5d8, 007ac5f7] [007ac5fb, 007ac625] [007ac629, 007ac6a2] [007ac6a6, 007ac747] [007ac74b, 007ac77f] [007ac783, 007ac7a8] [007ac7b0, 007acaf3] [007acaf7, 007acb27] [007acb2b, 007acb61] [007acb65, 007acbda]]


/* WARNING: Removing unreachable block (ram,0x007ac7f2) */
/* WARNING: Removing unreachable block (ram,0x007ac890) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007abda0(int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int _Value;
  short *psVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 unaff_ESI;
  uint uVar13;
  uint unaff_EDI;
  bool bVar14;
  int *piStack_1a4;
  int **ppiStack_1a0;
  uint *puStack_19c;
  int *apiStack_198 [6];
  uint uStack_180;
  uint *puStack_17c;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  int iStack_148;
  uint uStack_144;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint auStack_110 [7];
  int *piStack_f4;
  int iStack_ec;
  char acStack_e8 [4];
  int iStack_e4;
  uint uStack_e0;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  int iStack_c0;
  undefined1 uStack_a4;
  uint uStack_9c;
  uint uStack_94;
  uint auStack_90 [7];
  char acStack_74 [8];
  undefined1 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  undefined4 uStack_48;
  uint local_44;
  void *local_40;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b50068;
  pvStack_14 = ExceptionList;
  puStack_17c = (uint *)0xd;
  uStack_180 = 0xe17e04;
  local_40 = (void *)0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  apiStack_198[5] = (int *)0x7abdf6;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  puStack_17c = &local_54;
  uStack_180 = 0x7abe12;
  uStack_c8 = (**(code **)(*DAT_01258a80 + 0x48))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_44) {
    uStack_180 = uStack_58;
                    /* WARNING: Subroutine does not return */
    apiStack_198[5] = (int *)&UNK_007abe3b;
    FUN_00aae91b();
  }
  uStack_180 = 0x11;
  apiStack_198[5] = (int *)0xe17e14;
  local_44 = 0xf;
  uStack_48 = 0;
  uStack_58 = uStack_58 & 0xffffff00;
  auStack_90[5] = 0xf;
  auStack_90[4] = 0;
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  apiStack_198[4] = (int *)0x7abe7b;
  FUN_00409350();
  puStack_10 = (undefined1 *)0x1;
  uStack_180 = (uint)auStack_90;
  apiStack_198[5] = (int *)0x7abe9b;
  iStack_c0 = (**(code **)(*DAT_01258a80 + 0x48))();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < auStack_90[4]) {
    apiStack_198[5] = (int *)uStack_94;
                    /* WARNING: Subroutine does not return */
    apiStack_198[4] = (int *)&UNK_007abec4;
    FUN_00aae91b();
  }
  apiStack_198[5] = (int *)0xc;
  apiStack_198[4] = (int *)0xe17d58;
  auStack_90[4] = 0xf;
  auStack_90[3] = 0;
  uStack_94 = uStack_94 & 0xffffff00;
  uStack_154 = 0xf;
  uStack_158 = 0;
  uStack_168 = uStack_168 & 0xffffff00;
  apiStack_198[3] = (int *)0x7abef8;
  FUN_00409350();
  pvStack_14 = (void *)0x2;
  apiStack_198[5] = (int *)&uStack_168;
  apiStack_198[4] = (int *)0x7abf12;
  iVar5 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  apiStack_198[4] = param_1 + 0x44;
  apiStack_198[3] = (int *)0x7abf24;
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))();
  uStack_1c = 0xffffffff;
  if (0xf < uStack_15c) {
                    /* WARNING: Subroutine does not return */
    apiStack_198[2] = (int *)&UNK_007abf40;
    FUN_00aae91b();
  }
  apiStack_198[3] = (int *)0xc;
  apiStack_198[2] = (int *)0xe0ef14;
  uStack_15c = 0xf;
  uStack_160 = 0;
  apiStack_198[1] = (int *)0x7abf5f;
  FUN_00409350();
  uStack_1c = 3;
  apiStack_198[3] = (int *)&stack0xfffffe90;
  apiStack_198[2] = (int *)0x7abf79;
  iVar5 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  apiStack_198[2] = param_1 + 0x44;
  apiStack_198[1] = (int *)0x7abf8b;
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))();
  uStack_24 = 0xffffffff;
  if (0xf < uStack_164) {
                    /* WARNING: Subroutine does not return */
    apiStack_198[0] = (int *)&UNK_007abfa7;
    FUN_00aae91b();
  }
  apiStack_198[1] = (int *)0xf;
  apiStack_198[0] = (int *)0xe17db0;
  uStack_164 = 0xf;
  uStack_168 = 0;
  puStack_19c = (uint *)0x7abfc5;
  FUN_00409350();
  uStack_24 = 4;
  apiStack_198[1] = (int *)&stack0xfffffe88;
  apiStack_198[0] = (int *)0x7abfdf;
  iVar5 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  apiStack_198[0] = param_1 + 0x44;
  puStack_19c = (uint *)0x7abff1;
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))();
  uStack_2c = 0xffffffff;
  if (0xf < uStack_16c) {
    puStack_19c = (uint *)uStack_180;
                    /* WARNING: Subroutine does not return */
    ppiStack_1a0 = (int **)&UNK_007ac00d;
    FUN_00aae91b();
  }
  puStack_19c = (uint *)0x5;
  ppiStack_1a0 = (int **)0xe17bac;
  uStack_180 = uStack_180 & 0xffffff00;
  piStack_1a4 = (int *)0x7ac02c;
  FUN_00409350();
  uStack_2c = 5;
  puStack_19c = (uint *)0x14;
  ppiStack_1a0 = (int **)0xe17b94;
  iStack_148 = 0xf;
  iStack_14c = 0;
  uStack_15c = uStack_15c & 0xffffff00;
  piStack_1a4 = (int *)0x7ac053;
  FUN_00409350();
  uStack_2c = CONCAT31(uStack_2c._1_3_,6);
  puStack_19c = &uStack_15c;
  ppiStack_1a0 = (int **)0x7ac06a;
  piVar6 = (int *)(**(code **)(*(int *)param_1[0x13] + 0x6c))();
  ppiStack_1a0 = apiStack_198 + 5;
  piStack_1a4 = (int *)0x7ac078;
  iVar5 = (**(code **)(*piVar6 + 0x34))();
  piStack_1a4 = param_1 + 0x18;
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))();
  if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_38 = 0xffffffff;
  uStack_154 = 0xf;
  uStack_158 = 0;
  uStack_168 = uStack_168 & 0xffffff00;
  if (0xf < (unaff_EDI & 0xffffff00)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (DAT_0125eadc == (int *)0x0) {
    uStack_118 = FUN_00aae9af();
    uStack_38 = 7;
    if (uStack_118 != 0) {
      FUN_00576fe0();
    }
    uStack_38 = 0xffffffff;
    FUN_0057ab10();
  }
  uVar13 = DAT_0125eadc[0xf] - DAT_0125eadc[0xe] >> 2;
  apiStack_198[0] = (int *)0x0;
  iStack_148 = 0;
  piVar6 = DAT_0125eadc;
  uStack_118 = uVar13;
  if (0 < (int)uVar13) {
    do {
      iVar5 = iStack_148;
      piVar9 = *(int **)(piVar6[0xe] + iStack_148 * 4);
      cVar4 = (**(code **)(*piVar9 + 8))();
      if (cVar4 != '\0') {
        iStack_14c = 0;
        puStack_17c = (uint *)0x0;
        apiStack_198[3] = (int *)((uint)apiStack_198[3] & 0xffffff00);
        FUN_00409350();
        uStack_38 = 8;
        iVar5 = *DAT_01258a80;
        _Value = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
        piVar6 = (int *)(**(code **)(iVar5 + 0x2c))();
        ppiVar1 = (int **)param_1[0x3f];
        apiStack_198[0] = piVar6;
        if (apiStack_198 < ppiVar1) {
          ppiVar2 = (int **)param_1[0x3e];
          if (apiStack_198 < ppiVar2) goto LAB_007ac203;
          if (ppiVar1 == (int **)param_1[0x40]) {
            FUN_007b94a0();
          }
          if ((undefined4 *)param_1[0x3f] != (undefined4 *)0x0) {
            *(undefined4 *)param_1[0x3f] =
                 *(undefined4 *)(param_1[0x3e] + ((int)apiStack_198 - (int)ppiVar2 >> 2) * 4);
          }
        }
        else {
LAB_007ac203:
          if (ppiVar1 == (int **)param_1[0x40]) {
            FUN_007b94a0();
          }
          if ((uint *)param_1[0x3f] != (uint *)0x0) {
            *(uint *)param_1[0x3f] = (uint)piVar6;
          }
        }
        uVar13 = auStack_110[6];
        param_1[0x3f] = param_1[0x3f] + 4;
        local_40 = (void *)0xffffffff;
        if (0xf < uStack_180) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_128 = *(undefined4 *)(auStack_110[6] + 100);
        uStack_124 = *(undefined4 *)(auStack_110[6] + 0x68);
        psVar7 = (short *)(**(code **)(**(int **)(param_1[0x3e] + -4 +
                                                 (param_1[0x3f] - param_1[0x3e] >> 2) * 4) + 0x60))
                                    ();
        uStack_cc = *(uint *)(uVar13 + 100);
        uStack_130 = CONCAT22((short)*(undefined4 *)(uVar13 + 0x68),
                              *psVar7 * (short)piStack_1a4 + (short)uStack_12c);
        uVar11 = uStack_130;
        (**(code **)(**(int **)(param_1[0x3e] + -4 + (param_1[0x3f] - param_1[0x3e] >> 2) * 4) +
                    0x18))(uStack_130);
        auStack_110[1] = 0xf;
        auStack_110[0] = 0;
        uStack_120 = uStack_120 & 0xffffff00;
        uStack_48 = 9;
        pcVar8 = __itoa(_Value,acStack_74,10);
        pcVar12 = pcVar8;
        do {
          cVar4 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar4 != '\0');
        FUN_00409350(pcVar8,(int)pcVar12 - (int)(pcVar8 + 1));
        uStack_48 = 10;
        uStack_164 = 0xf;
        uStack_168 = 0;
        FUN_00409350("techview_folder",0xf);
        uStack_48._0_1_ = 0xb;
        piVar6 = (int *)FUN_00988f20(&uStack_120);
        uStack_48 = CONCAT31(uStack_48._1_3_,0xc);
        piStack_1a4 = piVar6;
        (**(code **)(*(int *)param_1[0x13] + 0xbc))
                  (piVar6,*(undefined4 *)
                           (param_1[0x3e] + -4 + (param_1[0x3f] - param_1[0x3e] >> 2) * 4));
        if (0xf < uStack_144) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_158);
        }
        uStack_144 = 0xf;
        iStack_148 = 0;
        uStack_158 = uStack_158 & 0xffffff00;
        if ((int *)0xf < piVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_180);
        }
        uStack_50 = 0xffffffff;
        uStack_180 = uStack_180 & 0xffffff00;
        if (0xf < uStack_114) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_128);
        }
        apiStack_198[2] = (int *)0xf;
        apiStack_198[1] = (int *)0x0;
        piStack_1a4 = (int *)((uint)piStack_1a4 & 0xffffff00);
        FUN_00409350("folder_button",0xd);
        uStack_50 = 0xd;
        iVar5 = (**(code **)(**(int **)(param_1[0x3e] + -4 +
                                       (param_1[0x3f] - param_1[0x3e] >> 2) * 4) + 0x34))
                          (&piStack_1a4);
        (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x23);
        uStack_58 = 0xffffffff;
        if ((int *)0xf < apiStack_198[0]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(apiStack_198 + 3);
        }
        iStack_14c = 0xf;
        uStack_150 = 0;
        uStack_160 = uStack_160 & 0xffffff00;
        FUN_00409350("folder_button",0xd);
        uStack_58 = 0xe;
        piVar9 = (int *)(**(code **)(**(int **)(param_1[0x3e] + -4 +
                                               (param_1[0x3f] - param_1[0x3e] >> 2) * 4) + 0x34))
                                  (&uStack_160);
        puStack_19c = (uint *)0xf;
        ppiStack_1a0 = (int **)0x0;
        uStack_5c = 0xf;
        pcVar8 = __itoa((int)piVar6,(char *)(auStack_90 + 2),10);
        pcVar12 = pcVar8;
        do {
          cVar4 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar4 != '\0');
        FUN_00409350(pcVar8,(int)pcVar12 - (int)(pcVar8 + 1));
        uStack_5c = 0x10;
        puStack_17c = (uint *)0x0;
        apiStack_198[3] = (int *)((uint)apiStack_198[3] & 0xffffff00);
        FUN_00409350("techview_folder",0xf);
        uStack_5c = 0x11;
        uVar10 = FUN_00988f20(&stack0xfffffe50);
        uStack_5c = 0x12;
        (**(code **)(*piVar9 + 0x78))(uVar10);
        if ((int *)0xf < piStack_f4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_110[2]);
        }
        piStack_f4 = (int *)0xf;
        auStack_110[6] = 0;
        auStack_110[2] = auStack_110[2] & 0xffffff00;
        if (0xf < puStack_17c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(apiStack_198[2]);
        }
        puStack_17c = (uint *)0xf;
        uStack_180 = 0;
        apiStack_198[2] = (int *)((uint)apiStack_198[2] & 0xffffff00);
        if (0xf < ppiStack_1a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uVar11);
        }
        uStack_60 = 0xffffffff;
        ppiStack_1a0 = (int **)0xf;
        piStack_1a4 = (int *)0x0;
        if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_168);
        }
        uStack_154 = 0xf;
        uStack_158 = 0;
        uStack_168 = uStack_168 & 0xffffff00;
        FUN_00409350("folder_icon",0xb);
        uStack_60 = 0x13;
        piVar6 = (int *)(**(code **)(**(int **)(param_1[0x3e] + -4 +
                                               (param_1[0x3f] - param_1[0x3e] >> 2) * 4) + 0x44))
                                  (&uStack_168);
        (**(code **)(*piVar6 + 0x48))(unaff_ESI);
        uStack_68 = 0xffffffff;
        if (0xf < uStack_15c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(0);
        }
        uStack_15c = 0xf;
        uStack_160 = 0;
        piVar6 = (int *)0x0;
        FUN_00409350("folder_category",0xf);
        uStack_68 = 0x14;
        piVar9 = *(int **)(param_1[0x3e] + -4 + (param_1[0x3f] - param_1[0x3e] >> 2) * 4);
        (**(code **)*puStack_19c)(auStack_110);
        uStack_6c = 0x15;
        (**(code **)(*piVar9 + 0x3c))(&stack0xfffffe8c);
        FUN_00408ed0();
        FUN_00a5ecc0();
        if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_38 = 0xffffffff;
        uStack_cc = 0xf;
        uStack_d0 = 0;
        uStack_e0 = uStack_e0 & 0xffffff00;
        if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        apiStack_198[0] = (int *)((int)apiStack_198[0] + 1);
        iVar5 = iRam00000020 - iRam0000001c >> 2;
        apiStack_198[1] = (int *)0x0;
        iStack_c0 = iVar5;
        if (0 < iVar5) {
          do {
            piVar9 = *(int **)(iRam0000001c + (int)apiStack_198[1] * 4);
            piStack_f4 = piVar9;
            cVar4 = (**(code **)(*piVar9 + 8))();
            uVar13 = uRam00000027;
            if (cVar4 != '\0') {
              uVar3 = piVar9[0x15];
              iVar5 = FUN_00414bd0();
              bVar14 = false;
              if (iVar5 == 0) {
                if (uVar3 < uVar13) {
                  uVar13 = 0xffffffff;
                }
                else {
                  uVar13 = (uint)(uVar3 != uVar13);
                }
                bVar14 = uVar13 == 0;
              }
              if (bVar14) {
                iStack_14c = iStack_14c + 1;
              }
              uStack_144 = 0;
              iStack_ec = iRam00000004 - _DAT_00000000 >> 2;
              apiStack_198[2] = (int *)0x0;
              if (0 < iStack_ec) {
                do {
                  piVar9 = *(int **)(_DAT_00000000 + (int)apiStack_198[2] * 4);
                  cVar4 = (**(code **)(*piVar9 + 0x20))();
                  if (cVar4 != '\0') {
                    uVar13 = piStack_f4[6];
                    uVar3 = piVar9[0xc9];
                    iVar5 = FUN_00414bd0();
                    bVar14 = false;
                    if (iVar5 == 0) {
                      if (uVar3 < uVar13) {
                        uVar13 = 0xffffffff;
                      }
                      else {
                        uVar13 = (uint)(uVar3 != uVar13);
                      }
                      bVar14 = uVar13 == 0;
                    }
                    if (bVar14) {
                      uStack_144 = uStack_144 + 1;
                    }
                  }
                  apiStack_198[2] = (int *)((int)apiStack_198[2] + 1);
                } while ((int)apiStack_198[2] < iStack_ec);
              }
              uVar13 = param_1[0x43];
              if (param_1[0x43] <= (int)uStack_144) {
                uVar13 = uStack_144;
              }
              param_1[0x43] = uVar13;
              iVar5 = iStack_c0;
            }
            apiStack_198[1] = (int *)((int)apiStack_198[1] + 1);
          } while ((int)apiStack_198[1] < iVar5);
        }
        iVar5 = param_1[0x42];
        if (param_1[0x42] <= iStack_14c) {
          iVar5 = iStack_14c;
        }
        param_1[0x42] = iVar5;
        uVar13 = uStack_118;
        iVar5 = iStack_148;
      }
      iStack_148 = iVar5 + 1;
    } while (iStack_148 < (int)uVar13);
  }
  FUN_007afc10();
  apiStack_198[0] = (int *)0x0;
  if (0 < param_1[0x42]) {
    iVar5 = 0;
    do {
      uStack_120 = *(uint *)(iStack_e4 + 100);
      uStack_11c = *(uint *)(iStack_e4 + 0x68);
      uStack_118 = uStack_120;
      uStack_114 = uStack_11c;
      FUN_007a92a0();
      psVar7 = (short *)(**(code **)(**(int **)(iVar5 + param_1[0x3a]) + 0x60))();
      piVar6 = (int *)CONCAT22((undefined2)uStack_118,
                               *psVar7 * (short)puStack_19c + (short)uStack_124);
      (**(code **)(**(int **)(iVar5 + param_1[0x3a]) + 0x18))();
      auStack_110[3] = 0xf;
      auStack_110[2] = 0;
      uStack_118 = uStack_118 & 0xffffff00;
      local_40 = (void *)0x16;
      pcVar8 = __itoa((int)ppiStack_1a0,acStack_e8,10);
      pcVar12 = pcVar8;
      do {
        cVar4 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar4 != '\0');
      FUN_00409350(pcVar8);
      local_40 = (void *)0x17;
      auStack_90[0] = 0xf;
      uStack_94 = 0;
      uStack_a4 = 0;
      FUN_00409350("group");
      local_40._0_1_ = 0x18;
      uVar11 = FUN_00988f20();
      local_40 = (void *)CONCAT31(local_40._1_3_,0x19);
      (**(code **)(*(int *)param_1[0x13] + 0xbc))(uVar11);
      if (0xf < uStack_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_50 = 0xf;
      local_54 = 0;
      uStack_64 = uStack_64 & 0xffffff00;
      if (0xf < auStack_90[2]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_38 = 0xffffffff;
      auStack_90[2] = 0xf;
      auStack_90[1] = 0;
      uStack_9c = uStack_9c & 0xffffff00;
      if (0xf < auStack_110[5]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      apiStack_198[0] = (int *)((int)apiStack_198[0] + 1);
      iVar5 = iVar5 + 0x24;
      auStack_110[5] = 0xf;
      auStack_110[4] = 0;
      auStack_110[0] = auStack_110[0] & 0xffffff00;
    } while ((int)apiStack_198[0] < param_1[0x42]);
  }
  param_1[0x17] = *(int *)(*piVar6 + 4);
  (**(code **)(*(int *)(param_1[0x13] + 0x18) + 0x34))();
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x2c))();
  ExceptionList = local_40;
  return;
}

