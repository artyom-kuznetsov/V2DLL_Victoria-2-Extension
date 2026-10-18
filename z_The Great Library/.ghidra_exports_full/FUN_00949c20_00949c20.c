// FUN_00949c20 @ 00949c20 body=[[00949c20, 00949ca1] [00949ca5, 00949d4b] [00949d4f, 0094a06a] [0094a06e, 0094a0b3] [0094a0b7, 0094a0dd] [0094a0e1, 0094a206] [0094a20a, 0094a24f] [0094a253, 0094a279] [0094a27d, 0094a2ac] [0094a2b0, 0094a328] [0094a32c, 0094a3ac] [0094a3b0, 0094a429] [0094a42d, 0094a488] [0094a48c, 0094a5ad] [0094a5b1, 0094a5f6] [0094a5fa, 0094a620] [0094a624, 0094a648] [0094a64c, 0094ad7c] [0094ad80, 0094adaf] [0094adb3, 0094addd] [0094ade1, 0094ae0b] [0094ae0f, 0094ae39] [0094ae3d, 0094ae67] [0094ae6b, 0094ae95] [0094ae99, 0094aecb] [0094aecf, 0094b09d] [0094b0a1, 0094b0d0] [0094b0d4, 0094b0fe] [0094b102, 0094b12c] [0094b130, 0094b15a] [0094b15e, 0094b188] [0094b18c, 0094b1b0] [0094b1b4, 0094b1da] [0094b1de, 0094b593] [0094b597, 0094b5c1] [0094b5c5, 0094b5ef] [0094b5f3, 0094b61d] [0094b621, 0094b64b] [0094b64f, 0094b676] [0094b67a, 0094b6a0] [0094b6a4, 0094b746] [0094b74a, 0094b76e] [0094b772, 0094b794] [0094b798, 0094b7a8] [0094b7ac, 0094b7bc] [0094b7c0, 0094b7e5] [0094b7e9, 0094b81e] [0094b822, 0094b877]]


/* WARNING: Removing unreachable block (ram,0x0094b1a7) */
/* WARNING: Removing unreachable block (ram,0x0094b697) */
/* WARNING: Removing unreachable block (ram,0x0094a63f) */

bool FUN_00949c20(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  int *unaff_ESI;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iStack_310;
  int iStack_30c;
  int iStack_308;
  int *piStack_2f0;
  int iStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  uint uStack_2d8;
  undefined4 local_2d4;
  uint uStack_2d0;
  undefined4 uStack_2c8;
  uint local_2c4;
  undefined4 local_2c0;
  uint uStack_2bc;
  int iStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  int iStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  int iStack_294;
  int *piStack_290;
  int *piStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  uint uStack_278;
  undefined1 uStack_274;
  undefined4 uStack_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_254;
  undefined4 uStack_250;
  uint uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  int iStack_238;
  uint uStack_234;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined4 uStack_224;
  uint uStack_220;
  uint auStack_218 [4];
  undefined4 uStack_208;
  uint uStack_204;
  uint uStack_1fc;
  undefined4 uStack_1ec;
  uint uStack_1e8;
  uint auStack_1e0 [4];
  undefined4 uStack_1d0;
  uint uStack_1cc;
  uint uStack_1c4;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  int *piStack_1a8;
  int iStack_1a4;
  uint uStack_19c;
  int *piStack_198;
  undefined4 uStack_18c;
  uint uStack_188;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  uint uStack_174;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_158;
  undefined4 uStack_148;
  uint uStack_144;
  int iStack_120;
  uint uStack_f8;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_dc;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c0;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint uStack_a4;
  undefined4 uStack_94;
  uint uStack_90;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_6c;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  void *pvStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb4900;
  pvStack_14 = ExceptionList;
  local_2c0 = 0xf;
  local_2c4 = 0;
  local_2d4 = local_2d4 & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_2c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c4 = 0xf;
  uStack_2c8 = 0;
  uStack_2d8 = uStack_2d8 & 0xffffff00;
  cVar2 = FUN_00911760();
  if (cVar2 == '\0') {
    pcVar4 = *(code **)(*piVar3 + 0xbc);
  }
  else {
    pcVar4 = *(code **)(*piVar3 + 0xb8);
  }
  (*pcVar4)();
  uStack_260 = 0xf;
  uStack_264 = 0;
  uStack_274 = 0;
  FUN_00409350();
  puStack_10 = (undefined1 *)0x1;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_264) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_264 = 0xf;
  uStack_268 = 0;
  uStack_278 = uStack_278 & 0xffffff00;
  if (*(char *)((int)piVar3 + 0x67) == '\0') goto LAB_0094a2b0;
  piVar6 = *(int **)(iStack_308 + 0x6c);
  iVar7 = piVar6[5];
  iVar13 = piVar6[3];
  iStack_280 = piVar6[2];
  cVar2 = FUN_00911760();
  if (cVar2 == '\0') goto switchD_00949e7d_caseD_899;
  if (DAT_012589a7 == '\0') {
    if ((iVar7 != iVar13) && (cVar2 = (**(code **)(*piVar6 + 0x6c))(), cVar2 != '\0'))
    goto LAB_00949f79;
LAB_00949dc8:
    iVar13 = (**(code **)(*piVar6 + 0x20))();
    if (iVar13 < 0x81f) {
      if (iVar13 == 0x81e) {
        uVar5 = FUN_0083de70();
      }
      else if (iVar13 == 0x332) {
        uVar5 = FUN_00841640();
      }
      else {
        if (iVar13 == 0x38d) goto LAB_00949f79;
        if (iVar13 != 0x470) goto switchD_00949e7d_caseD_899;
        if ((piVar6[0xb] < 0) || ((piVar6[0xb] < 1 && ((uint)piVar6[10] < 0x28001)))) {
          uVar5 = 0;
        }
        else {
          uVar5 = 100;
        }
      }
      goto LAB_00949f70;
    }
    if (0x9fa < iVar13) {
      if (iVar13 == 0x9fb) {
        uVar5 = FUN_00843b90();
      }
      else {
        if (iVar13 != 0xa02) goto switchD_00949e7d_caseD_899;
        uVar5 = FUN_00843170();
      }
      goto LAB_00949f70;
    }
    if (iVar13 == 0x9fa) {
      uVar5 = FUN_00843a10();
      goto LAB_00949f70;
    }
    switch(iVar13) {
    case 0x897:
    case 0x898:
      cVar2 = FUN_00911760();
      uVar5 = -(uint)(cVar2 != '\0') & 100;
      break;
    default:
      goto switchD_00949e7d_caseD_899;
    case 0x8c6:
      uVar5 = FUN_008419c0();
      break;
    case 0x8c7:
      uVar5 = FUN_00842a00();
      break;
    case 0x8c8:
      uVar5 = FUN_00842a50();
      break;
    case 0x8c9:
      uVar5 = FUN_008430d0();
      break;
    case 0x8ca:
      uVar5 = FUN_008416b0();
      break;
    case 0x8cb:
      uVar5 = FUN_00841900();
      break;
    case 0x8d5:
      uVar5 = FUN_00844050();
      break;
    case 0x8d6:
      uVar5 = FUN_00844140();
    }
LAB_00949f70:
    if (0x31 < (int)uVar5) goto LAB_00949f79;
switchD_00949e7d_caseD_899:
    uStack_2e4 = 0xf;
    uStack_2e8 = 0;
    FUN_00409350();
    pvStack_14 = (void *)0x7;
    uStack_248 = 0xf;
    uStack_24c = 0;
    uStack_25c = uStack_25c & 0xffffff00;
    FUN_00409350();
    pvStack_14._0_1_ = 8;
    FUN_009a8ee0();
    pvStack_14._0_1_ = 9;
    FUN_00475500();
    FUN_009a9880();
    pvStack_14._0_1_ = 10;
    (**(code **)(*piVar3 + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < uStack_22c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_22c = 0xf;
    uStack_230 = 0;
    uStack_240 = uStack_240 & 0xffffff00;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xb);
    FUN_009adb70();
    if (uStack_2d8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_2d8 = 0;
    local_2d4 = 0;
    uStack_2d0 = 0;
    if (0xf < uStack_248) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    if (iVar7 == iVar13) goto LAB_00949dc8;
LAB_00949f79:
    uStack_2e4 = 0xf;
    uStack_2e8 = 0;
    FUN_00409350();
    pvStack_14 = (void *)0x2;
    uStack_248 = 0xf;
    uStack_24c = 0;
    uStack_25c = uStack_25c & 0xffffff00;
    FUN_00409350();
    pvStack_14._0_1_ = 3;
    FUN_009a8ee0();
    pvStack_14._0_1_ = 4;
    FUN_00475500();
    FUN_009a9880();
    pvStack_14._0_1_ = 5;
    (**(code **)(*piVar3 + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < uStack_22c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_22c = 0xf;
    uStack_230 = 0;
    uStack_240 = uStack_240 & 0xffffff00;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,6);
    FUN_009adb70();
    if (uStack_2d8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_2d8 = 0;
    local_2d4 = 0;
    uStack_2d0 = 0;
    if (0xf < uStack_248) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  uStack_25c = uStack_25c & 0xffffff00;
  uStack_2d0 = 0;
  local_2d4 = 0;
  uStack_2d8 = 0;
  if (0xf < uStack_2e4) {
    pvStack_14 = (void *)0xffffffff;
    uStack_248 = 0xf;
    uStack_24c = 0;
    uStack_2d0 = 0;
    local_2d4 = 0;
    uStack_2d8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_0094a2b0:
  pvStack_14 = (void *)0xffffffff;
  uStack_248 = 0xf;
  uStack_24c = 0;
  uStack_25c = uStack_25c & 0xffffff00;
  FUN_00409350();
  pvStack_14 = (void *)0xc;
  piVar3 = (int *)(**(code **)(**(int **)(iStack_308 + 4) + 0x6c))();
  uStack_18 = 0xffffffff;
  piStack_198 = piVar3;
  if (0xf < uStack_24c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_24c = 0xf;
  uStack_250 = 0;
  uStack_260 = uStack_260 & 0xffffff00;
  uStack_2e8 = 0xf;
  iStack_2ec = 0;
  if (*(char *)(*(int *)(iStack_30c + 0x6c) + 0x30) == '\0') {
    FUN_00409350();
    uStack_18 = 0xf;
    piVar6 = (int *)(**(code **)(*piVar3 + 0x34))();
    (**(code **)(*piVar6 + 0x48))();
    uStack_20 = 0xffffffff;
    if ((int *)0xf < piStack_2f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2d4 = 0xf;
    uStack_2d8 = 0;
    uStack_2e8 = uStack_2e8 & 0xffffff00;
    FUN_00409350();
    uStack_20 = 0x10;
    piVar3 = (int *)(**(code **)(*piVar3 + 0x34))();
  }
  else {
    FUN_00409350();
    uStack_18 = 0xd;
    piVar6 = (int *)(**(code **)(*piVar3 + 0x34))();
    (**(code **)(*piVar6 + 0x48))();
    uStack_20 = 0xffffffff;
    if ((int *)0xf < piStack_2f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2d4 = 0xf;
    uStack_2d8 = 0;
    uStack_2e8 = uStack_2e8 & 0xffffff00;
    FUN_00409350();
    uStack_20 = 0xe;
    piVar3 = (int *)(**(code **)(*piVar3 + 0x34))();
  }
  (**(code **)(*piVar3 + 0x48))();
  uStack_28 = 0xffffffff;
  if (0xf < uStack_2dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piStack_2f0 = (int *)((uint)piStack_2f0 & 0xffffff00);
  uStack_2e0 = 0;
  uStack_2dc = 0xf;
  iVar13 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar13 != 0) {
    iStack_178 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x508);
    iStack_17c = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x50c);
    iStack_310 = 0;
    FUN_00409350(&DAT_00dee2cc);
    uStack_28 = 0x11;
    uStack_278 = 0xf;
    uStack_27c = 0;
    piStack_28c = (int *)((uint)piStack_28c & 0xffffff00);
    FUN_00409350("CRISIS_RESOLUTION_RELATIONS");
    uStack_28._0_1_ = 0x12;
    FUN_009a8ee0(&piStack_2f0);
    uStack_28._0_1_ = 0x13;
    iVar7 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined4 *)(iVar7 + 0x74));
    uStack_28._0_1_ = 0x14;
    FUN_00988f20();
    if (0xf < uStack_240) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_240 = 0xf;
    uStack_244 = 0;
    uStack_254 = uStack_254 & 0xffffff00;
    uStack_28._0_1_ = 0x18;
    FUN_009adb70();
    if (iStack_2ec != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iStack_2ec = 0;
    uStack_2e8 = 0;
    uStack_2e4 = 0;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    piStack_28c = (int *)((uint)piStack_28c & 0xffffff00);
    iStack_294 = *(int *)(unaff_ESI[0x1b] + 8);
    iVar7 = *(int *)(unaff_ESI[0x1b] + 0xc);
    iVar8 = FUN_00425a40();
    bVar11 = *(int *)(iVar8 + 4) == iVar7;
    iStack_2b4 = 0;
    bVar12 = !bVar11;
    local_2d4 = CONCAT13(bVar11,(undefined3)local_2d4);
    iStack_2b0 = 0;
    uStack_2ac = 0;
    iStack_2a4 = 0;
    iStack_2a0 = 0;
    uStack_29c = 0;
    piStack_28c = (int *)0x0;
    iStack_288 = 0;
    uStack_284 = 0;
    piStack_2f0 = (int *)0x0;
    iStack_2ec = 0;
    uStack_2e8 = 0;
    uStack_28 = CONCAT31(uStack_28._1_3_,0x1e);
    FUN_0043a750();
    if ((iStack_2a0 - iStack_2a4 & 0xfffffff8U) == 0) {
      FUN_0043a750();
    }
    else {
      FUN_00630060(iStack_2a0,*(undefined4 *)(iVar13 + 0x3c),*(undefined4 *)(iVar13 + 0x40));
    }
    if (iStack_2b4 != iStack_2b0) {
      iVar7 = iStack_2b4;
      do {
        if (*(int *)(iVar7 + 4) == *(int *)(iVar13 + 0x18)) {
          if (iVar7 != iStack_2b0) goto LAB_0094a769;
          break;
        }
        iVar7 = iVar7 + 8;
      } while (iVar7 != iStack_2b0);
    }
    FUN_004d61d0();
LAB_0094a769:
    if (iStack_2a4 != iStack_2a0) {
      iVar7 = iStack_2a4;
      do {
        if (*(int *)(iVar7 + 4) == *(int *)(iVar13 + 0x20)) {
          if (iVar7 != iStack_2a0) goto LAB_0094a7a8;
          break;
        }
        iVar7 = iVar7 + 8;
      } while (iVar7 != iStack_2a0);
    }
    FUN_004d61d0();
LAB_0094a7a8:
    iVar13 = unaff_ESI[0x1b];
    iVar7 = iVar13 + 0x28;
    iStack_1a4 = *(int *)(iVar13 + 0x58) - *(int *)(iVar13 + 0x54) >> 6;
    iVar8 = 0;
    iStack_180 = iVar7;
    if (0 < iStack_1a4) {
      do {
        iVar10 = *(int *)(*(int *)(iVar13 + 0x34) + iVar8 * 4);
        FUN_0094be20();
        iStack_294 = *(int *)(unaff_ESI[0x1b] + 8);
        iVar9 = *(int *)(iVar13 + 0x74);
        iVar1 = *(int *)(iVar13 + 0x78);
        if (iVar9 != iVar1) {
          do {
            if (*(int *)(iVar9 + 4) == *(int *)(unaff_ESI[0x1b] + 0xc)) break;
            iVar9 = iVar9 + 8;
          } while (iVar9 != iVar1);
          if (iVar9 != iVar1) {
            if (iVar10 == 0) {
              iStack_238 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x518);
              piVar3 = (int *)FUN_00950050();
              iVar10 = __alldiv((longlong)*piVar3 * (longlong)iStack_238,1000);
              iStack_310 = iStack_310 + iVar10;
              iStack_294 = *(int *)(unaff_ESI[0x1b] + 8);
              if ((iStack_120 != *(int *)(unaff_ESI[0x1b] + 0xc)) &&
                 ((cVar2 = FUN_0042bb00(), cVar2 != '\0' || (cVar2 = FUN_0042bb00(), cVar2 != '\0'))
                 )) {
                FUN_0042b850();
                FUN_004d61d0();
              }
            }
            else {
              bVar12 = true;
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iStack_1a4);
    }
    iStack_238 = *(int *)(iVar13 + 0x68) - *(int *)(iVar13 + 100) >> 6;
    iVar13 = 0;
    if (0 < iStack_238) {
LAB_0094a94e:
      iVar8 = *(int *)(*(int *)(iVar7 + 0x1c) + iVar13 * 4);
      FUN_0094be20();
      iStack_1a4 = *(int *)(unaff_ESI[0x1b] + 8);
      iVar10 = *(int *)(iVar7 + 0x5c);
      iVar9 = *(int *)(iVar7 + 0x60);
      if (iVar10 != iVar9) {
        do {
          if (*(int *)(iVar10 + 4) == *(int *)(unaff_ESI[0x1b] + 0xc)) break;
          iVar10 = iVar10 + 8;
        } while (iVar10 != iVar9);
        if (iVar10 != iVar9) {
          if (iVar8 == 0) {
            iStack_1a4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x518);
            piVar3 = (int *)FUN_00950050();
            iVar8 = __alldiv((longlong)*piVar3 * (longlong)iStack_1a4,1000);
            iStack_310 = iStack_310 + iVar8;
            iStack_1a4 = *(int *)(unaff_ESI[0x1b] + 8);
            iVar8 = iStack_2b4;
            if (iStack_120 != *(int *)(unaff_ESI[0x1b] + 0xc)) {
              for (; iVar10 = iStack_2a4, iVar8 != iStack_2b0; iVar8 = iVar8 + 8) {
                if (*(int *)(iVar8 + 4) == iStack_120) {
                  iVar9 = iStack_2b4;
                  if (iVar8 != iStack_2b0) goto LAB_0094aa70;
                  break;
                }
              }
              do {
                if (iVar10 == iStack_2a0) break;
                if (*(int *)(iVar10 + 4) == iStack_120) {
                  if (iVar10 != iStack_2a0) {
                    FUN_0042b850();
                    FUN_004d61d0();
                  }
                  break;
                }
                iVar10 = iVar10 + 8;
              } while( true );
            }
          }
          else {
            bVar12 = true;
          }
        }
      }
      goto LAB_0094aaec;
    }
LAB_0094ab07:
    if (bVar12) {
      if (local_2d4._3_1_ == '\0') {
        if ((iStack_288 - (int)piStack_28c & 0xfffffff8U) == 0) {
          FUN_0043a750();
        }
        else {
          FUN_00630060(iStack_288,iStack_2b4,iStack_2b0);
        }
      }
      else if ((iStack_288 - (int)piStack_28c & 0xfffffff8U) == 0) {
        FUN_0043a750();
      }
      else {
        FUN_00630060(iStack_288,iStack_2a4,iStack_2a0);
      }
      FUN_0043a750();
    }
    iVar13 = iStack_2ec - (int)piStack_2f0 >> 3;
    bVar11 = false;
    piVar3 = piStack_2f0;
    iVar7 = iStack_288;
    if (0 < iVar13) {
      do {
        iStack_294 = *piVar3;
        iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar3[1] * 4);
        if ((0 < (int)(*(int *)(iVar8 + 0x9dc) - *(int *)(iVar8 + 0x9d8) & 0xfffffffcU)) &&
           (iStack_294 = *(int *)(unaff_ESI[0x1b] + 8), piVar3[1] != *(int *)(unaff_ESI[0x1b] + 0xc)
           )) {
          uStack_240 = 0xf;
          uStack_244 = 0;
          uStack_254 = uStack_254 & 0xffffff00;
          FUN_00409350(&DAT_00dfc7b4);
          uStack_28._0_1_ = 0x1f;
          uStack_160 = 0xf;
          uStack_164 = 0;
          uStack_174 = uStack_174 & 0xffffff00;
          FUN_00409350(&DAT_00e00658);
          uStack_28._0_1_ = 0x20;
          FUN_00988970(auStack_88);
          uStack_28._0_1_ = 0x21;
          FUN_0055dd40();
          uStack_28._0_1_ = 0x22;
          FUN_00988fa0();
          uStack_28._0_1_ = 0x23;
          FUN_00988f20();
          uStack_28._0_1_ = 0x24;
          FUN_00988f20();
          uStack_28._0_1_ = 0x25;
          FUN_00988f20();
          uStack_28._0_1_ = 0x26;
          FUN_00448aa0();
          if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_3c = 0xf;
          uStack_40 = 0;
          uStack_50 = uStack_50 & 0xffffff00;
          if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_58 = 0xf;
          uStack_5c = 0;
          uStack_6c = uStack_6c & 0xffffff00;
          if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_90 = 0xf;
          uStack_94 = 0;
          uStack_a4 = uStack_a4 & 0xffffff00;
          if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_c8 = 0xf;
          uStack_cc = 0;
          uStack_dc = uStack_dc & 0xffffff00;
          if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_ac = 0xf;
          uStack_b0 = 0;
          uStack_c0 = uStack_c0 & 0xffffff00;
          if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_74 = 0xf;
          uStack_78 = 0;
          auStack_88[0] = auStack_88[0] & 0xffffff00;
          if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_28 = CONCAT31(uStack_28._1_3_,0x1e);
          uStack_160 = 0xf;
          uStack_164 = 0;
          uStack_174 = uStack_174 & 0xffffff00;
          if (0xf < uStack_240) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_240 = 0xf;
          uStack_244 = 0;
          uStack_254 = uStack_254 & 0xffffff00;
          bVar11 = true;
          iVar7 = iStack_288;
        }
        iVar13 = iVar13 + -1;
        piVar3 = piVar3 + 2;
      } while (iVar13 != 0);
    }
    iVar13 = iVar7 - (int)piStack_28c >> 3;
    piVar3 = piStack_28c;
    if (0 < iVar13) {
      do {
        iStack_294 = *piVar3;
        iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar3[1] * 4);
        if ((0 < (int)(*(int *)(iVar7 + 0x9dc) - *(int *)(iVar7 + 0x9d8) & 0xfffffffcU)) &&
           (iStack_294 = *(int *)(unaff_ESI[0x1b] + 8), piVar3[1] != *(int *)(unaff_ESI[0x1b] + 0xc)
           )) {
          uStack_2bc = 0xf;
          local_2c0 = 0;
          uStack_2d0 = uStack_2d0 & 0xffffff00;
          FUN_00409350(&DAT_00dfc7b4);
          uStack_28._0_1_ = 0x27;
          FUN_00409350(&DAT_00e35690);
          uStack_28._0_1_ = 0x28;
          FUN_00988970(auStack_218);
          uStack_28._0_1_ = 0x29;
          FUN_0055dd40();
          uStack_28._0_1_ = 0x2a;
          FUN_00988fa0();
          uStack_28._0_1_ = 0x2b;
          FUN_00988f20();
          uStack_28._0_1_ = 0x2c;
          FUN_00988f20();
          uStack_28._0_1_ = 0x2d;
          FUN_00988f20();
          uStack_28._0_1_ = 0x2e;
          FUN_00448aa0();
          if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_e4 = 0xf;
          uStack_e8 = 0;
          uStack_f8 = uStack_f8 & 0xffffff00;
          if (0xf < uStack_220) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_220 = 0xf;
          uStack_224 = 0;
          uStack_234 = uStack_234 & 0xffffff00;
          if (0xf < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_1e8 = 0xf;
          uStack_1ec = 0;
          uStack_1fc = uStack_1fc & 0xffffff00;
          if (0xf < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_1b0 = 0xf;
          uStack_1b4 = 0;
          uStack_1c4 = uStack_1c4 & 0xffffff00;
          if (0xf < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_1cc = 0xf;
          uStack_1d0 = 0;
          auStack_1e0[0] = auStack_1e0[0] & 0xffffff00;
          if (0xf < uStack_204) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_204 = 0xf;
          uStack_208 = 0;
          auStack_218[0] = auStack_218[0] & 0xffffff00;
          uStack_28 = CONCAT31(uStack_28._1_3_,0x1e);
          if (0xf < uStack_2bc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_2bc = 0xf;
          local_2c0 = 0;
          uStack_2d0 = uStack_2d0 & 0xffffff00;
          bVar11 = true;
        }
        iVar13 = iVar13 + -1;
        piVar3 = piVar3 + 2;
      } while (iVar13 != 0);
    }
    if (bVar12) {
      iVar13 = __alldiv((longlong)
                        (((int)((double)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) /
                               365.0) -
                         (int)((double)((*(int *)(DAT_012586dc + 8) + -43800000) / 0x18) / 365.0)) *
                        1000) * (longlong)iStack_17c,1000);
      iStack_310 = iStack_310 + iVar13 + iStack_178;
    }
    uStack_188 = 0xf;
    uStack_18c = 0;
    uStack_19c = uStack_19c & 0xffffff00;
    uStack_28._0_1_ = 0x2f;
    if (iStack_310 < 1) {
      if (iStack_310 < 0) {
        FUN_00409350(&DAT_00dfc988);
        uStack_28._0_1_ = 0x37;
        uStack_2bc = 0xf;
        local_2c0 = 0;
        uStack_2d0 = uStack_2d0 & 0xffffff00;
        FUN_00409350(&DAT_00df8514);
        uStack_28._0_1_ = 0x38;
        FUN_00988970(&uStack_234);
        uStack_28._0_1_ = 0x39;
        FUN_00988fa0();
        uStack_28._0_1_ = 0x3a;
        FUN_00988f20();
        uStack_28._0_1_ = 0x3b;
        FUN_0042c180(auStack_1e0);
        uStack_28._0_1_ = 0x3c;
        FUN_00988f20();
        uStack_28._0_1_ = 0x3d;
      }
      else {
        FUN_00409350(&DAT_00dfc988);
        uStack_28._0_1_ = 0x3e;
        uStack_2bc = 0xf;
        local_2c0 = 0;
        uStack_2d0 = uStack_2d0 & 0xffffff00;
        FUN_00409350(&DAT_00df8514);
        uStack_28._0_1_ = 0x3f;
        FUN_00988970(&uStack_234);
        uStack_28._0_1_ = 0x40;
        FUN_00988fa0();
        uStack_28._0_1_ = 0x41;
        FUN_00988f20();
        uStack_28._0_1_ = 0x42;
        FUN_0042c180(auStack_1e0);
        uStack_28._0_1_ = 0x43;
        FUN_00988f20();
        uStack_28._0_1_ = 0x44;
      }
    }
    else {
      FUN_00409350(&DAT_00dfc988);
      uStack_28._0_1_ = 0x30;
      uStack_2bc = 0xf;
      local_2c0 = 0;
      uStack_2d0 = uStack_2d0 & 0xffffff00;
      FUN_00409350(&DAT_00df8514);
      uStack_28._0_1_ = 0x31;
      FUN_00988970(&uStack_234);
      uStack_28._0_1_ = 0x32;
      FUN_00988fa0();
      uStack_28._0_1_ = 0x33;
      FUN_00988f20();
      uStack_28._0_1_ = 0x34;
      FUN_0042c180(auStack_1e0);
      uStack_28._0_1_ = 0x35;
      FUN_00988f20();
      uStack_28._0_1_ = 0x36;
    }
    FUN_00408ed0();
    if (0xf < uStack_204) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_204 = 0xf;
    uStack_208 = 0;
    auStack_218[0] = auStack_218[0] & 0xffffff00;
    if (0xf < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1cc = 0xf;
    uStack_1d0 = 0;
    auStack_1e0[0] = auStack_1e0[0] & 0xffffff00;
    if (0xf < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1b0 = 0xf;
    uStack_1b4 = 0;
    uStack_1c4 = uStack_1c4 & 0xffffff00;
    if (0xf < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1e8 = 0xf;
    uStack_1ec = 0;
    uStack_1fc = uStack_1fc & 0xffffff00;
    if (0xf < uStack_220) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_220 = 0xf;
    uStack_224 = 0;
    uStack_234 = uStack_234 & 0xffffff00;
    if (0xf < uStack_2bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_28._0_1_ = 0x2f;
    uStack_2bc = 0xf;
    local_2c0 = 0;
    uStack_2d0 = uStack_2d0 & 0xffffff00;
    if (bVar11) {
      FUN_00448aa0();
    }
    uStack_2bc = 0xf;
    local_2c0 = 0;
    uStack_2d0 = uStack_2d0 & 0xffffff00;
    FUN_00409350("crisis_desc");
    uStack_28 = CONCAT31(uStack_28._1_3_,0x45);
    (**(code **)(*piStack_1a8 + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0(&uStack_19c);
    if (0xf < uStack_2bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_2bc = 0xf;
    local_2c0 = 0;
    uStack_2d0 = uStack_2d0 & 0xffffff00;
    if (0xf < uStack_188) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_188 = 0xf;
    uStack_18c = 0;
    uStack_19c = uStack_19c & 0xffffff00;
    if (piStack_2f0 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (piStack_28c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (iStack_2a4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iStack_2a4 = 0;
    iStack_2a0 = 0;
    uStack_29c = 0;
    if (iStack_2b4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_28 = 0xffffffff;
    iStack_2b4 = 0;
    iStack_2b0 = 0;
    uStack_2ac = 0;
    if (0xf < uStack_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_144 = 0xf;
    uStack_148 = 0;
    uStack_158 = uStack_158 & 0xffffff00;
  }
  uStack_28 = 0xffffffff;
  cVar2 = (**(code **)(*unaff_ESI + 0x20))();
  if (cVar2 != '\0') {
    ExceptionList = pvStack_30;
    return (char)unaff_ESI[0x19] == '\0';
  }
  ExceptionList = pvStack_30;
  return false;
  while (iVar9 = iVar9 + 8, iVar9 != iStack_2b0) {
LAB_0094aa70:
    if (*(int *)(iVar9 + 4) == iStack_120) break;
  }
  piStack_290 = &iStack_2b4;
  iStack_294 = iVar9;
  FUN_0042ba80();
  FUN_004d61d0();
  iVar7 = iStack_180;
LAB_0094aaec:
  iVar13 = iVar13 + 1;
  if (iStack_238 <= iVar13) goto LAB_0094ab07;
  goto LAB_0094a94e;
}

