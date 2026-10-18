// FUN_00652a10 @ 00652a10 body=[[00652a10, 00652bbb] [00652bbf, 00652bee] [00652bf2, 00652c1c] [00652c20, 00652c4a] [00652c4e, 00652c72] [00652c76, 00652c9f] [00652ca3, 00652db9] [00652dbd, 00652de6] [00652dea, 00652e0b] [00652e0f, 00652e3b] [00652e3f, 00652e81] [00652e85, 00652eb3] [00652ece, 00652fa0] [00652fa4, 00652fcf] [00652fd3, 00652ffd] [00653001, 0065302d] [00653031, 0065309a] [0065309e, 00653747] [0065374b, 00653774] [00653778, 006537a6] [006537aa, 006537d7]]


/* WARNING: Removing unreachable block (ram,0x00652f97) */
/* WARNING: Removing unreachable block (ram,0x00652c69) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00652a10(int *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uStack_2a0;
  undefined1 **ppuStack_29c;
  char *pcStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  int iVar13;
  int iStack_274;
  uint uStack_238;
  undefined1 *puStack_234;
  int *piStack_230;
  int iStack_22c;
  uint uStack_224;
  undefined4 uStack_220;
  uint uStack_214;
  uint uStack_210;
  int iStack_20c;
  undefined4 uStack_208;
  undefined4 *******pppppppuStack_200;
  uint uStack_1fc;
  uint uStack_1ec;
  uint uStack_1e8;
  undefined1 auStack_1e4 [4];
  uint uStack_1e0;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  uint uStack_1a0;
  undefined4 uStack_190;
  uint uStack_18c;
  uint uStack_184;
  undefined4 uStack_174;
  uint uStack_170;
  uint uStack_168;
  undefined4 uStack_158;
  uint uStack_154;
  uint uStack_14c;
  undefined4 uStack_13c;
  uint uStack_138;
  uint uStack_130;
  undefined4 uStack_120;
  uint uStack_11c;
  uint uStack_114;
  undefined4 uStack_104;
  uint uStack_100;
  char acStack_f8 [152];
  undefined **ppuStack_60;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5a0e3;
  local_14 = ExceptionList;
  if (((char)param_1[0x76e] == '\0') || (DAT_013f0854 != 0)) {
LAB_006537aa:
    *(undefined1 *)(param_1 + 0x76e) = 0;
    if (0 < DAT_013f0854) {
      DAT_013f0854 = DAT_013f0854 + -1;
    }
  }
  else {
    ExceptionList = &local_14;
    pcVar4 = (char *)(**(code **)(*param_1 + 0x58))();
    uStack_170 = 0xf;
    uStack_174 = 0;
    uStack_184 = uStack_184 & 0xffffff00;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    FUN_00409350();
    uStack_c = 0;
    if ((char)param_1[0x17] != '\0') {
      FUN_00409350();
    }
    uStack_1b0 = 0xf;
    uStack_1b4 = 0;
    uStack_1c4 = uStack_1c4 & 0xffffff00;
    FUN_00409350();
    uStack_c._0_1_ = 1;
    FUN_00409350();
    uStack_c._0_1_ = 2;
    FUN_0043acd0();
    uStack_c._0_1_ = 3;
    FUN_00988fa0();
    uStack_c._0_1_ = 4;
    FUN_00988f20();
    uStack_c._0_1_ = 5;
    FUN_00988f20();
    uStack_c._0_1_ = 6;
    FUN_00988f20();
    if (0xf < uStack_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_138 = 0xf;
    uStack_13c = 0;
    uStack_14c = uStack_14c & 0xffffff00;
    if (0xf < uStack_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_100 = 0xf;
    uStack_104 = 0;
    uStack_114 = uStack_114 & 0xffffff00;
    if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_154 = 0xf;
    uStack_158 = 0;
    uStack_168 = uStack_168 & 0xffffff00;
    if (0xf < uStack_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_11c = 0xf;
    uStack_120 = 0;
    uStack_130 = uStack_130 & 0xffffff00;
    uStack_c._0_1_ = 0xd;
    if (0xf < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1b0 = 0xf;
    uStack_1b4 = 0;
    uStack_1c4 = uStack_1c4 & 0xffffff00;
    iStack_274 = 1;
    do {
      uStack_c._0_1_ = 0xd;
      uStack_210 = 0xf;
      uStack_214 = 0;
      uStack_224 = uStack_224 & 0xffffff00;
      FUN_00409350();
      uStack_1e8 = 0xf;
      uStack_1ec = 0;
      uStack_1fc = uStack_1fc & 0xffffff00;
      uStack_c._0_1_ = 0xf;
      uStack_290 = 0x652d12;
      pcVar4 = __itoa(iStack_274,acStack_f8,10);
      do {
        cVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      FUN_00409350();
      uStack_c._0_1_ = 0x10;
      FUN_00988f20();
      uStack_c = CONCAT31(uStack_c._1_3_,0x11);
      pcVar4 = (char *)FUN_00988f20();
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar4 = *(char **)pcVar4;
      }
      if (((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) || (iVar5 = PHYSFS_exists(), iVar5 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (0xf < uStack_18c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_18c = 0xf;
      uStack_190 = 0;
      uStack_1a0 = uStack_1a0 & 0xffffff00;
      if (0xf < uStack_238) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_238 = 0xf;
      if (0xf < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_c._0_1_ = 0xd;
      uStack_1e8 = 0xf;
      uStack_1ec = 0;
      uStack_1fc = uStack_1fc & 0xffffff00;
      if (0xf < uStack_210) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (!bVar2) {
        if (iStack_274 < 10000) {
          uStack_210 = 0xf;
          uStack_214 = 0;
          uStack_224 = uStack_224 & 0xffffff00;
          FUN_00409350();
          uStack_1e8 = 0xf;
          uStack_1ec = 0;
          uStack_1fc = uStack_1fc & 0xffffff00;
          uStack_c._0_1_ = 0x13;
          uStack_290 = 0x652f1c;
          pcVar4 = __itoa(iStack_274,acStack_f8,10);
          do {
            cVar3 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar3 != '\0');
          FUN_00409350();
          uStack_c._0_1_ = 0x14;
          FUN_00988f20();
          uStack_c._0_1_ = 0x15;
          FUN_00988f20();
          uStack_c._0_1_ = 0x16;
          uStack_290 = 0x652f90;
          FUN_00408ed0();
          if (0xf < uStack_18c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_18c = 0xf;
          uStack_190 = 0;
          uStack_1a0 = uStack_1a0 & 0xffffff00;
          if (0xf < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_c._0_1_ = 0xd;
          uStack_1e8 = 0xf;
          uStack_1ec = 0;
          uStack_1fc = uStack_1fc & 0xffffff00;
          if (0xf < uStack_210) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_210 = 0xf;
          uStack_214 = 0;
          uStack_224 = uStack_224 & 0xffffff00;
          FUN_00409350();
          uStack_c = CONCAT31(uStack_c._1_3_,0x17);
          if (DAT_00f20c18 == (int *)0x0) {
            DAT_00f20c18 = (int *)FUN_00aae9af();
            if (DAT_00f20c18 == (int *)0x0) {
              DAT_00f20c18 = (int *)0x0;
            }
            else {
              *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
            }
          }
          (**(code **)(*DAT_00f20c18 + 0x34))();
          if (0xf < uStack_214) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_1c8 = 0;
          uStack_1c4 = 0;
          uStack_1c0 = 0;
          puStack_10._0_1_ = 0x18;
          piStack_230 = (int *)FUN_00aae9af();
          puStack_10._0_1_ = 0x19;
          if (piStack_230 == (int *)0x0) {
            piStack_230 = (int *)0x0;
          }
          else {
            iVar5 = *(int *)(DAT_0125870c + 0x2ac0);
            iVar13 = *(int *)(DAT_0125870c + 0x2abc);
            piStack_230[1] = iVar13;
            piStack_230[2] = iVar5;
            *piStack_230 = (int)&PTR_FUN_00e3ba2c;
            piStack_230[8] = 0;
            *(undefined1 *)(piStack_230 + 9) = 1;
            piStack_230[3] = 3;
            piStack_230[4] = 0x18;
            piStack_230[5] = 0x1000000;
            piStack_230[6] = iVar13 * 3;
            iVar5 = FUN_00aad56b();
            piStack_230[8] = iVar5;
          }
          puStack_10._0_1_ = 0x18;
          puStack_234 = *(undefined1 **)(DAT_0125870c + 0x2abc);
          iVar5 = *(int *)(DAT_0125870c + 0x2ac0);
          iVar13 = 0;
          if (0 < iVar5) {
            iStack_20c = iVar5 + -1;
            do {
              iStack_22c = 0;
              if (0 < (int)puStack_234) {
                do {
                  iVar1 = *(int *)(DAT_0125870c + 0x212c);
                  iVar11 = iStack_22c;
                  if (*(int *)(iVar1 + 4) + -1 < iStack_22c) {
                    iVar11 = *(int *)(iVar1 + 4) + -1;
                  }
                  iVar10 = iVar13;
                  if (iVar13 < 0) {
                    iVar10 = 0;
                  }
                  if (*(int *)(iVar1 + 8) + -1 < iVar10) {
                    iVar10 = *(int *)(iVar1 + 8) + -1;
                  }
                  iVar11 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) +
                                   (uint)*(ushort *)
                                          (*(int *)(iVar1 + 0x18) * iVar10 +
                                           *(int *)(iVar1 + 0xc) * iVar11 + *(int *)(iVar1 + 0x20))
                                   * 4);
                  if (((iVar11 != 0) && (0 < *(int *)(iVar11 + 0xb4))) &&
                     (iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(iVar11 + 0xb4) * 4
                                      ), *(char *)(iVar11 + 0x2a) != '\0')) {
                    cVar3 = (**(code **)(*(int *)param_1[7] + 0x28))();
                    if (cVar3 == '\0') {
                      if (*(int *)(iVar1 + 0x134) != 0) {
                        uStack_208 = *(undefined4 *)(iVar1 + 0x128);
                        FUN_004fb5c0();
                      }
                    }
                    else if (*(int *)(iVar1 + 300) != 0) {
                      if ((*(int *)(iVar1 + 300) <
                           *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) &&
                         (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(iVar1 + 300) * 4) == 0)
                         ) {
                        uStack_208 = *(undefined4 *)(iVar1 + 0x128);
                        iVar11 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 300) * 4);
                        if ((*(char *)(iVar11 + 0xcf5) != '\0') ||
                           (*(char *)(iVar11 + 0xcf4) != '\0')) {
                          uStack_208 = *(undefined4 *)(iVar1 + 0x128);
                          iVar11 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 300) * 4);
                          uStack_1ac = *(undefined4 *)(iVar11 + 0xcf8);
                          local_1a8 = *(undefined4 *)(iVar11 + 0xcfc);
                          uStack_290 = 0x65333b;
                          cVar3 = FUN_006875e0();
                          if ((cVar3 == '\0') || (cVar3 = FUN_0042bb00(), cVar3 != '\0')) {
                            uStack_208 = *(undefined4 *)(iVar11 + 0xcf8);
                            FUN_004fb5c0();
                          }
                        }
                      }
                      else {
                        uStack_208 = *(undefined4 *)(iVar1 + 0x128);
                        FUN_004fb5c0();
                      }
                    }
                  }
                  iVar11 = iStack_22c;
                  puVar12 = (undefined1 *)
                            (piStack_230[3] * iStack_22c + piStack_230[6] * iStack_20c +
                            piStack_230[8]);
                  uVar6 = FUN_009b6d50();
                  iStack_22c = iVar11 + 1;
                  *puVar12 = (char)uVar6;
                  puVar12[1] = (char)((uint)uVar6 >> 8);
                  puVar12[2] = (char)((uint)uVar6 >> 0x10);
                } while (iStack_22c < (int)puStack_234);
              }
              iStack_20c = iStack_20c + -1;
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar5);
          }
          iVar5 = FUN_00aae9af();
          puStack_10._0_1_ = 0x1c;
          if (iVar5 == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puStack_234 = (undefined1 *)&uStack_2a0;
            uStack_290 = 0;
            uStack_2a0 = uStack_2a0 & 0xffffff00;
            FUN_00409350(&DAT_00ded94d,0);
            puVar7 = (undefined4 *)FUN_00992740(iVar5,auStack_1e4,1);
          }
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x18);
          uStack_290 = puVar7[0xc];
          uStack_294 = 0x653615;
          PHYSFS_setBuffer();
          piVar9 = piStack_230;
          (**(code **)(*piStack_230 + 8))();
          uStack_290 = 0x653630;
          (**(code **)*puVar7)();
          uStack_290 = 1;
          uStack_294 = 0x65363a;
          (**(code **)*piVar9)();
          uStack_294 = 0xc;
          pcStack_298 = "eu3idler.cpp";
          uStack_220 = 0xf;
          uStack_224 = 0;
          puStack_234 = (undefined1 *)((uint)puStack_234 & 0xffffff00);
          ppuStack_29c = (undefined1 **)0x65365a;
          FUN_00409350();
          uStack_294 = 3;
          ppuStack_29c = &puStack_234;
          pcStack_298 = (char *)0x9f3;
          uStack_1c = 0x1d;
          uStack_2a0 = 0x65367a;
          uVar8 = FUN_004015b0();
          uStack_294 = 0;
          pcStack_298 = (char *)0x10;
          ppuStack_29c = (undefined1 **)0xe092e8;
          uStack_1c = 0x1e;
          uStack_2a0 = uVar8;
          FUN_00987d50();
          if (uStack_1ec < 0x10) {
            pppppppuStack_200 = &pppppppuStack_200;
          }
          piVar9 = (int *)FUN_00418e30(uVar8,pppppppuStack_200);
          FUN_00408be0(piVar9);
          bVar2 = false;
          if (((*(byte *)(*(int *)(*piVar9 + 4) + 0xc + (int)piVar9) & 6) == 0) &&
             (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar9 + 4) + 0x38 + (int)piVar9) + 0x34))()
             , iVar5 == -1)) {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_00401120();
          }
          uStack_c = CONCAT31(uStack_c._1_3_,0x1d);
          FUN_00987ac0();
          ppuStack_60 = std::ios_base::vftable;
          FUN_00aad52d();
          if (0xf < uStack_210) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          DAT_013f0854 = 10;
          *(undefined1 *)((int)param_1 + 0x1db9) = 1;
          if (0xf < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_1cc = 0xf;
          uStack_1d0 = 0;
          uStack_1e0 = uStack_1e0 & 0xffffff00;
          if (0xf < uStack_170) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          goto LAB_006537aa;
        }
        break;
      }
      iStack_274 = iStack_274 + 1;
    } while (iStack_274 < 10000);
    if (0xf < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1cc = 0xf;
    uStack_1d0 = 0;
    uStack_1e0 = uStack_1e0 & 0xffffff00;
    if (0xf < uStack_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

