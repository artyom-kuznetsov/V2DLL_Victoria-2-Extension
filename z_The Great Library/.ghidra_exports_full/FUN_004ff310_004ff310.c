// FUN_004ff310 @ 004ff310 body=[[004ff310, 004ff60a] [004ff60e, 004ff6dc] [004ff6e0, 004ff778] [004ff77c, 004ff821] [004ff825, 004ff8dd] [004ff8e1, 004ff928] [004ff930, 004ff9d9] [004ff9dd, 004ffa49] [004ffa4d, 004ffb39] [004ffb3d, 004ffba9] [004ffbad, 004ffc99] [004ffc9d, 004ffd09] [004ffd0d, 004ffdf9] [004ffdfd, 004ffe69] [004ffe6d, 004fff2f] [004fff33, 004fffb6] [004fffba, 00500081] [00500085, 0050009c] [005000a0, 00500151] [00500155, 00500305] [00500309, 005003da] [005003de, 00500813] [00500817, 005009ea] [005009ee, 00500af5] [00500af9, 00500bb7] [00500bbb, 00500bf2] [00500bf6, 00500d74] [00500d7a, 00500db0] [00500db4, 00500f90] [00500f94, 00500fec] [00500ff0, 00501206] [0050120a, 00501458] [00501460, 005014d7] [005014db, 00501659] [0050165d, 005016d3] [005016d7, 00501852] [00501856, 0050188f] [00501893, 005019e6] [005019ea, 00501a3d] [00501a41, 00501a95] [00501aa0, 00501b76]]


/* WARNING: Removing unreachable block (ram,0x00500da0) */
/* WARNING: Removing unreachable block (ram,0x005011fd) */

void FUN_004ff310(uint param_1)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  uint *puVar5;
  char *pcVar6;
  int *piVar7;
  int in_ECX;
  int *piVar8;
  int iVar9;
  int iVar10;
  int unaff_EBX;
  int unaff_ESI;
  char *pcVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  int iStack_320;
  uint uStack_31c;
  int iStack_308;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uStack_2cc;
  uint local_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  undefined1 *puStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  undefined4 uStack_29c;
  uint local_298;
  undefined4 uStack_294;
  uint uStack_290;
  uint auStack_28c [3];
  uint uStack_280;
  undefined4 uStack_270;
  uint uStack_26c;
  undefined4 uStack_268;
  uint auStack_264 [4];
  undefined4 uStack_254;
  uint uStack_250;
  uint uStack_24c;
  undefined4 uStack_248;
  char acStack_244 [184];
  uint uStack_18c;
  undefined4 uStack_17c;
  uint uStack_178;
  undefined4 uStack_128;
  undefined4 uStack_124;
  char acStack_120 [4];
  undefined4 local_11c;
  char local_118 [176];
  void *pvStack_68;
  undefined4 uStack_60;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5fadb;
  pvStack_14 = ExceptionList;
  piVar13 = (int *)0x0;
  local_2c4 = 0;
  local_298 = *(uint *)(in_ECX + 0x1c);
  if (((*(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2 <=
        *(int *)(in_ECX + 0x20)) ||
      (ExceptionList = &pvStack_14,
      *(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(in_ECX + 0x20) * 4) != 0)) &&
     ((*(char *)(in_ECX + 0x1c) != 'R' ||
      ((*(char *)(in_ECX + 0x1d) != 'E' ||
       (ExceptionList = &pvStack_14, *(char *)(in_ECX + 0x1e) != 'B')))))) {
    ExceptionList = &pvStack_14;
    FUN_009a0940();
    FUN_004013e0();
    FUN_004013e0();
  }
  FUN_009a0940();
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_11c = 399;
  }
  else {
    local_11c = 0xc;
  }
  _sprintf(local_118,"%lld");
  FUN_0099ff90();
  FUN_004013e0();
  if (in_ECX != -0x1b0) {
    piVar13 = (int *)(in_ECX + 0x1d4);
  }
  FUN_009a0940();
  (**(code **)(*piVar13 + 4))();
  if (in_ECX == -0x1dc) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = (int *)(in_ECX + 0x200);
  }
  FUN_009a0940();
  (**(code **)(*piVar13 + 4))();
  FUN_009a0940();
  uStack_124 = 0xc;
  _sprintf(acStack_120,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  uStack_2cc = 0;
  if (0 < (*(int *)(in_ECX + 0x188) - *(int *)(in_ECX + 0x184)) / 0x1c) {
    unaff_ESI = 0;
    do {
      FUN_009a0940();
      FUN_0099f770();
      unaff_ESI = unaff_ESI + 0x1c;
      uStack_2cc = uStack_2cc + 1;
    } while ((int)uStack_2cc < (*(int *)(in_ECX + 0x188) - *(int *)(in_ECX + 0x184)) / 0x1c);
  }
  iVar18 = *(int *)(in_ECX + 0xe3c);
  if (iVar18 != 0) {
    FUN_009a0940();
    if (*(char *)(param_1 + 0xc) == '\0') {
      FUN_0098fad0();
    }
    else {
      uStack_124 = 0xc;
      _sprintf(acStack_120,"%d");
    }
    FUN_0099ff90();
    FUN_00990880();
    pvStack_14 = (void *)0x0;
    uStack_124 = 0x10;
    __snprintf(acStack_120,0xff,"%s");
    FUN_0099ff90();
    pvStack_14 = (void *)0xffffffff;
    unaff_ESI = iVar18;
    if (0xf < uStack_24c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  piVar13 = *(int **)(unaff_EBX + 0xbcc);
  FUN_009a0940();
  (**(code **)(*piVar13 + 4))();
  piVar13 = *(int **)(unaff_EBX + 0x4c4);
  while (piVar13 != (int *)0x0) {
    piVar7 = (int *)piVar13[0xb];
    FUN_009a0940();
    (**(code **)(*piVar13 + 4))();
    piVar13 = piVar7;
  }
  if (1 < (int)((double)((*(int *)(unaff_EBX + 0x9c) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0();
    uStack_18 = 1;
    FUN_009a0940();
    FUN_0099f770();
    uStack_18 = 0xffffffff;
    if (0xf < uStack_26c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_26c = 0xf;
    uStack_270 = 0;
    uStack_280 = uStack_280 & 0xffffff00;
  }
  if (1 < (int)((double)((*(int *)(unaff_EBX + 0x660) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0();
    uStack_18 = 2;
    FUN_009a0940();
    FUN_0099f770();
    uStack_18 = 0xffffffff;
    if (0xf < uStack_290) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_290 = 0xf;
    uStack_294 = 0;
    uStack_2a4 = uStack_2a4 & 0xffffff00;
  }
  if (5 < (int)((double)((*(int *)(unaff_EBX + 0x664) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0();
    uStack_18 = 3;
    FUN_009a0940();
    FUN_0099f770();
    uStack_18 = 0xffffffff;
    if (0xf < uStack_250) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_009a0940();
    uStack_128 = 0xc;
    _sprintf((char *)&uStack_124,"%d");
    FUN_0099ff90();
    FUN_00990880();
    uStack_18 = 4;
    uStack_128 = 0x10;
    __snprintf((char *)&uStack_124,0xff,"%s");
    FUN_0099ff90();
    uStack_18 = 0xffffffff;
    if (0xf < uStack_250) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_250 = 0xf;
    uStack_254 = 0;
    auStack_264[0] = auStack_264[0] & 0xffffff00;
    unaff_EBX = unaff_ESI;
  }
  uVar3 = DAT_01258a48;
  iVar18 = 1;
  if (4 < (int)(*(int *)(DAT_01258a48 + 0x4c) - *(int *)(DAT_01258a48 + 0x48) & 0xfffffffcU)) {
    do {
      uStack_2cc = *(uint *)(*(int *)(uVar3 + 0x48) + iVar18 * 4);
      cVar4 = (**(code **)(**(int **)(*(int *)(unaff_EBX + 0x850) + iVar18 * 4) + 0x34))();
      if (cVar4 != '\0') {
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 0x850) + iVar18 * 4) + 0x30);
        FUN_009a0940();
        FUN_00990880();
        uStack_18 = 5;
        uStack_248 = uVar1;
        __snprintf(acStack_244,0xff,"%s");
        FUN_0099ff90();
        uStack_18 = 0xffffffff;
        if (0xf < uStack_2ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_00990880();
        uStack_18 = 6;
        uStack_248 = 0x10;
        __snprintf(acStack_244,0xff,"%s");
        FUN_0099ff90();
        uStack_18 = 0xffffffff;
        if (0xf < uStack_2ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      iVar18 = iVar18 + 1;
      unaff_EBX = unaff_ESI;
    } while (iVar18 < *(int *)(uVar3 + 0x4c) - *(int *)(uVar3 + 0x48) >> 2);
  }
  iVar18 = 1;
  if (4 < (int)(*(int *)(uVar3 + 0x3c) - *(int *)(uVar3 + 0x38) & 0xfffffffcU)) {
    do {
      uStack_2cc = *(uint *)(*(int *)(uVar3 + 0x38) + iVar18 * 4);
      cVar4 = (**(code **)(**(int **)(*(int *)(unaff_EBX + 0x860) + iVar18 * 4) + 0x34))();
      if (cVar4 != '\0') {
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 0x860) + iVar18 * 4) + 0x30);
        FUN_009a0940();
        FUN_00990880();
        uStack_18 = 7;
        uStack_248 = uVar1;
        __snprintf(acStack_244,0xff,"%s");
        FUN_0099ff90();
        uStack_18 = 0xffffffff;
        if (0xf < uStack_2ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_00990880();
        uStack_18 = 8;
        uStack_248 = 0x10;
        __snprintf(acStack_244,0xff,"%s");
        FUN_0099ff90();
        uStack_18 = 0xffffffff;
        if (0xf < uStack_2ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      iVar18 = iVar18 + 1;
      unaff_EBX = unaff_ESI;
    } while (iVar18 < *(int *)(uVar3 + 0x3c) - *(int *)(uVar3 + 0x38) >> 2);
  }
  iVar18 = 1;
  if (4 < (int)(*(int *)(uVar3 + 0x6c) - *(int *)(uVar3 + 0x68) & 0xfffffffcU)) {
    do {
      uStack_2cc = *(uint *)(*(int *)(uVar3 + 0x68) + iVar18 * 4);
      cVar4 = (**(code **)(**(int **)(*(int *)(unaff_EBX + 0x880) + iVar18 * 4) + 0x34))();
      if (cVar4 != '\0') {
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 0x880) + iVar18 * 4) + 0x30);
        FUN_009a0940();
        FUN_00990880();
        uStack_18 = 9;
        uStack_248 = uVar1;
        __snprintf(acStack_244,0xff,"%s");
        FUN_0099ff90();
        uStack_18 = 0xffffffff;
        if (0xf < uStack_2ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_00990880();
        uStack_18 = 10;
        uStack_248 = 0x10;
        __snprintf(acStack_244,0xff,"%s");
        FUN_0099ff90();
        uStack_18 = 0xffffffff;
        if (0xf < uStack_2ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      iVar18 = iVar18 + 1;
      unaff_EBX = unaff_ESI;
    } while (iVar18 < *(int *)(uVar3 + 0x6c) - *(int *)(uVar3 + 0x68) >> 2);
  }
  iVar18 = 1;
  if (4 < (int)(*(int *)(uVar3 + 0x5c) - *(int *)(uVar3 + 0x58) & 0xfffffffcU)) {
    do {
      uStack_2cc = *(uint *)(*(int *)(uVar3 + 0x58) + iVar18 * 4);
      cVar4 = (**(code **)(**(int **)(*(int *)(unaff_EBX + 0x870) + iVar18 * 4) + 0x34))();
      if (cVar4 != '\0') {
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 0x870) + iVar18 * 4) + 0x30);
        FUN_009a0940();
        FUN_00990880();
        uStack_18 = 0xb;
        uStack_248 = uVar1;
        __snprintf(acStack_244,0xff,"%s");
        FUN_0099ff90();
        uStack_18 = 0xffffffff;
        if (0xf < uStack_2ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_00990880();
        uStack_18 = 0xc;
        uStack_248 = 0x10;
        __snprintf(acStack_244,0xff,"%s");
        FUN_0099ff90();
        uStack_18 = 0xffffffff;
        if (0xf < uStack_2ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      iVar18 = iVar18 + 1;
      unaff_EBX = unaff_ESI;
    } while (iVar18 < *(int *)(uVar3 + 0x5c) - *(int *)(uVar3 + 0x58) >> 2);
  }
  FUN_009a0940();
  (**(code **)(*(int *)(unaff_EBX + 0x8b0) + 4))();
  if (1 < (int)((double)((*(int *)(unaff_EBX + 0x4bc) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0();
    uStack_1c = 0xd;
    FUN_009a0940();
    FUN_0099f770();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (1 < (int)((double)((*(int *)(unaff_EBX + 0x4c0) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0();
    uStack_1c = 0xe;
    FUN_009a0940();
    FUN_0099f770();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  cVar4 = (**(code **)(**(int **)(unaff_EBX + 0x84c) + 0x20))();
  if (cVar4 != '\0') {
    FUN_009a0940();
    uStack_24c = 0x14;
    _sprintf((char *)&uStack_248,"%u");
    FUN_0099ff90();
    FUN_00990880();
    uStack_1c = 0xf;
    uStack_24c = 0x10;
    __snprintf((char *)&uStack_248,0xff,"%s");
    FUN_0099ff90();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar18 = *(int *)(uVar3 + 0x83c);
  while (iVar18 != 0) {
    iVar18 = *(int *)(iVar18 + 8);
    FUN_009a0940();
    uStack_24c = 0x14;
    _sprintf((char *)&uStack_248,"%u");
    FUN_0099ff90();
    FUN_00990880();
    uStack_1c = 0x10;
    uStack_24c = 0x10;
    __snprintf((char *)&uStack_248,0xff,"%s");
    FUN_0099ff90();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar9 = 1;
  iVar18 = *(int *)(uVar3 + 0xfc0) - *(int *)(uVar3 + 0xfbc) >> 3;
  if (1 < iVar18) {
    piVar13 = *(int **)(uVar3 + 0xfbc);
    do {
      if (piVar13[2] != 0 || piVar13[3] != 0) {
        FUN_009a0940();
        (**(code **)(*(int *)(uVar3 + 0xf74) + 4))();
        break;
      }
      iVar9 = iVar9 + 1;
      piVar13 = piVar13 + 2;
    } while (iVar9 < iVar18);
  }
  iVar9 = 1;
  iVar18 = *(int *)(uVar3 + 0xf10) - *(int *)(uVar3 + 0xf0c) >> 3;
  if (1 < iVar18) {
    piVar13 = *(int **)(uVar3 + 0xf0c);
    do {
      if (piVar13[2] != 0 || piVar13[3] != 0) {
        FUN_009a0940();
        (**(code **)(*(int *)(uVar3 + 0xec4) + 4))();
        break;
      }
      iVar9 = iVar9 + 1;
      piVar13 = piVar13 + 2;
    } while (iVar9 < iVar18);
  }
  iVar9 = 1;
  iVar18 = *(int *)(uVar3 + 0xf68) - *(int *)(uVar3 + 0xf64) >> 3;
  if (1 < iVar18) {
    piVar13 = *(int **)(uVar3 + 0xf64);
    do {
      if (piVar13[2] != 0 || piVar13[3] != 0) {
        FUN_009a0940();
        (**(code **)(*(int *)(uVar3 + 0xf1c) + 4))();
        break;
      }
      iVar9 = iVar9 + 1;
      piVar13 = piVar13 + 2;
    } while (iVar9 < iVar18);
  }
  puVar12 = *(undefined4 **)(uVar3 + 0x66c);
  while (puVar12 != (undefined4 *)0x0) {
    piVar13 = (int *)*puVar12;
    puVar12 = (undefined4 *)puVar12[2];
    FUN_009a0940();
    (**(code **)(*piVar13 + 4))();
  }
  if (1 < (int)((double)((*(int *)(uVar3 + 0x668) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0();
    uStack_1c = 0x11;
    FUN_009a0940();
    FUN_0099f770();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (*(int *)(uVar3 + 0x680) != 0) {
    FUN_009a0940();
    if (*(char *)(param_1 + 0xc) == '\0') {
      FUN_0098fad0();
    }
    else {
      uStack_24c = 0xc;
      _sprintf((char *)&uStack_248,"%d");
    }
    FUN_0099ff90();
    FUN_00990880();
    uStack_1c = 0x12;
    uStack_24c = 0x10;
    __snprintf((char *)&uStack_248,0xff,"%s");
    FUN_0099ff90();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (*(int *)(uVar3 + 0x65c) != 0) {
    puStack_2a8 = &stack0xfffffd14;
    FUN_0099f1e0();
  }
  FUN_009a0940();
  FUN_0099f770();
  cVar4 = (**(code **)(**(int **)(uVar3 + 0xbd0) + 0x2c))();
  if (cVar4 != '\0') {
    FUN_009a0940();
    FUN_004013e0();
    FUN_004013e0();
  }
  puStack_2a8 = &stack0xfffffd14;
  FUN_0099f1e0();
  puStack_2a8 = &stack0xfffffd14;
  FUN_0099f1e0();
  puVar12 = *(undefined4 **)(uVar3 + 0x4d8);
  while (puVar12 != (undefined4 *)0x0) {
    piVar13 = (int *)*puVar12;
    puVar12 = (undefined4 *)puVar12[2];
    FUN_009a0940();
    (**(code **)(*piVar13 + 4))();
  }
  piVar13 = *(int **)(*(int *)(uVar3 + 0xa0) + 8);
  FUN_009a0940();
  (**(code **)(*piVar13 + 4))();
  piVar13 = *(int **)(*(int *)(uVar3 + 0xa0) + 4);
  FUN_009a0940();
  (**(code **)(*piVar13 + 4))();
  piVar13 = (int *)**(undefined4 **)(uVar3 + 0xa0);
  FUN_009a0940();
  uVar14 = param_1;
  (**(code **)(*piVar13 + 4))();
  piVar13 = (int *)**(undefined4 **)(uVar3 + 0x1234);
  FUN_009a0940();
  (**(code **)(*piVar13 + 4))();
  piVar13 = *(int **)(*(int *)(uVar3 + 0x1234) + 4);
  FUN_009a0940();
  (**(code **)(*piVar13 + 4))();
  piVar13 = *(int **)(*(int *)(uVar3 + 0x1234) + 8);
  FUN_009a0940();
  (**(code **)(*piVar13 + 4))();
  piVar13 = *(int **)(*(int *)(uVar3 + 0x1234) + 0xc);
  FUN_009a0940();
  (**(code **)(*piVar13 + 4))();
  FUN_009a0940();
  if (*(char *)(param_1 + 0xc) == '\0') {
    uStack_268 = 399;
  }
  else {
    uStack_268 = 0xc;
  }
  _sprintf((char *)auStack_264,"%lld");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  if (*(char *)(param_1 + 0xc) == '\0') {
    uStack_268 = 399;
  }
  else {
    uStack_268 = 0xc;
  }
  _sprintf((char *)auStack_264,"%lld");
  FUN_0099ff90();
  FUN_004013e0();
  uVar16 = uVar14;
  FUN_0099f470();
  FUN_0099f470();
  puVar12 = *(undefined4 **)(uVar14 + 0xbd4);
  while (puVar12 != (undefined4 *)0x0) {
    piVar13 = (int *)*puVar12;
    puVar12 = (undefined4 *)puVar12[2];
    FUN_009a0940();
    (**(code **)(*piVar13 + 4))();
  }
  piVar13 = *(int **)(uVar14 + 0x7b4);
  while (piVar13 != (int *)0x0) {
    piVar7 = (int *)*piVar13;
    piVar13 = (int *)piVar13[2];
    cVar4 = (**(code **)(*piVar7 + 0x38))();
    if ((((cVar4 != '\0') &&
         (iVar18 = (**(code **)(*piVar7 + 0x2c))(), *(int *)(iVar18 + 0x1b4) == 0)) ||
        (cVar4 = (**(code **)(*piVar7 + 0x3c))(), cVar4 != '\0')) ||
       (cVar4 = (**(code **)(*piVar7 + 0x40))(), cVar4 != '\0')) {
      FUN_009a0940();
      (**(code **)(piVar7[2] + 4))();
    }
  }
  iVar18 = 0;
  if (0 < (int)(*(int *)(uVar14 + 0xbec) - *(int *)(uVar14 + 0xbe8) & 0xfffffffcU)) {
    do {
      piVar13 = (int *)(*(int *)(uVar14 + 0xbe8) + iVar18 * 4);
      iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*piVar13 + 0xc) * 4);
      if (0 < (int)(*(int *)(iVar9 + 0x9dc) - *(int *)(iVar9 + 0x9d8) & 0xfffffffcU)) {
        iVar9 = *piVar13;
        local_2c4 = *(uint *)(iVar9 + 8);
        uStack_2c0 = *(undefined4 *)(iVar9 + 0xc);
        puVar5 = &local_2c4;
        auStack_28c[0] = 0xf;
        uStack_290 = 0;
        uStack_2a0 = uStack_2a0 & 0xffffff00;
        do {
          uVar14 = *puVar5;
          puVar5 = (uint *)((int)puVar5 + 1);
        } while ((char)uVar14 != '\0');
        FUN_00409350();
        uStack_38 = 0x13;
        uVar14 = uVar16;
        FUN_0099f160();
        uStack_38 = 0xffffffff;
        if (0xf < auStack_28c[0]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        auStack_28c[0] = 0xf;
        uStack_290 = 0;
        uStack_2a0 = uStack_2a0 & 0xffffff00;
        uVar16 = uVar14;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(uVar14 + 0xbec) - *(int *)(uVar14 + 0xbe8) >> 2);
  }
  FUN_00501b80();
  FUN_00501b80();
  FUN_00501b80();
  puVar12 = *(undefined4 **)(uVar14 + 0xce4);
  while (puVar12 != (undefined4 *)0x0) {
    puVar15 = (undefined4 *)puVar12[2];
    piVar13 = (int *)*puVar12;
    FUN_009a0940();
    FUN_0099fe90();
    (**(code **)(*piVar13 + 0x20))();
    FUN_009a0940();
    (**(code **)(*piVar13 + 4))();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0();
    }
    puVar12 = puVar15;
    uVar14 = uVar16;
    if (*(int *)(param_1 + 4) != -1) {
      FUN_004013e0();
      FUN_004013e0();
      puVar12 = puVar15;
      uVar14 = uVar16;
    }
  }
  FUN_009a0940();
  FUN_0099fe90();
  iVar18 = 0;
  if (0 < (int)(*(int *)(uVar14 + 0x1550) - *(int *)(uVar14 + 0x154c) & 0xfffffffcU)) {
    do {
      cVar4 = (**(code **)(**(int **)(iVar18 * 4 + *(int *)(uVar14 + 0x154c)) + 0x2c))();
      if (cVar4 != '\0') {
        if (DAT_0131bd5c == 0) {
          local_2c4 = FUN_00aae9af();
          uStack_38 = 0x14;
          if (local_2c4 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_008b0060();
          }
          uStack_38 = 0x15;
          local_2c4 = 0;
          if ((iVar9 != DAT_0131bd5c) && (DAT_0131bd5c != 0)) {
            FUN_0090cd00();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_38 = 0xffffffff;
          DAT_0131bd5c = iVar9;
        }
        FUN_0099fa00();
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(uVar14 + 0x1550) - *(int *)(uVar14 + 0x154c) >> 2);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0();
  }
  if (*(int *)(param_1 + 4) != -1) {
    FUN_004013e0();
    FUN_004013e0();
  }
  if ((*(int *)(uVar14 + 0xc00) != 0) &&
     (cVar4 = (**(code **)(**(int **)(uVar14 + 0xc00) + 0x18))(), cVar4 != '\0')) {
    FUN_009a0940();
    (**(code **)(*(int *)(uVar14 + 0xbf8) + 4))();
  }
  FUN_0043acd0();
  uStack_38 = 0x16;
  FUN_009a0940();
  FUN_0099f770();
  uStack_38 = 0xffffffff;
  if (0xf < uStack_2cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_2b0 = 0xf;
  uStack_2b4 = 0;
  local_2c4 = local_2c4 & 0xffffff00;
  FUN_00409350();
  uStack_38 = 0x17;
  uVar17 = 1;
  cVar4 = FUN_00416db0();
  if (cVar4 == '\0') {
    auStack_28c[0] = 0xf;
    uStack_290 = 0;
    uStack_2a0 = uStack_2a0 & 0xffffff00;
    FUN_00409350();
    uStack_38 = 0x18;
    uVar17 = 3;
    cVar4 = FUN_00416db0();
    bVar2 = true;
    if (cVar4 == '\0') goto LAB_00500b9b;
  }
  bVar2 = false;
LAB_00500b9b:
  if ((uVar17 & 2) != 0) {
    uVar17 = uVar17 & 0xfffffffd;
    if (0xf < auStack_28c[0]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    auStack_28c[0] = 0xf;
    uStack_290 = 0;
    uStack_2a0 = uStack_2a0 & 0xffffff00;
  }
  uStack_38 = 0xffffffff;
  if (((uVar17 & 1) != 0) && (0xf < uStack_2b0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (bVar2) {
    FUN_009a0940();
    FUN_0099f770();
  }
  FUN_009a0940();
  (**(code **)(*(int *)(uVar14 + 0x20c) + 4))();
  FUN_009a0940();
  (**(code **)(*(int *)(uVar14 + 0x364) + 4))();
  iVar18 = (**(code **)(**(int **)(uVar14 + 0xcdc) + 0x58))();
  if (*(int *)(iVar18 + 4) == *(int *)(uVar14 + 0x20)) {
    FUN_0043cd10();
  }
  iVar18 = *(int *)(uVar14 + 0x1584) - *(int *)(uVar14 + 0x1580) >> 3;
  iVar9 = 0;
  if (0 < iVar18) {
    piVar13 = *(int **)(uVar14 + 0x1580);
    do {
      if ((0 < piVar13[1]) || ((-1 < piVar13[1] && (*piVar13 != 0)))) {
        FUN_0043a9a0();
        break;
      }
      iVar9 = iVar9 + 1;
      piVar13 = piVar13 + 2;
    } while (iVar9 < iVar18);
  }
  if (0 < (int)(*(int *)(uVar14 + 0xe18) - *(int *)(uVar14 + 0xe14) & 0xfffffff8U)) {
    uStack_44._1_3_ = 0;
    pcVar6 = *(char **)(param_1 + 0xe14);
    while ((uStack_44._0_1_ = 0x19, *(char **)(param_1 + 0xe14) <= pcVar6 &&
           (pcVar6 < *(char **)(param_1 + 0xe18)))) {
      pcVar11 = pcVar6 + 8;
      local_298 = 0xf;
      uStack_29c = 0;
      uStack_2ac = uStack_2ac & 0xffffff00;
      do {
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
      FUN_00409350();
      uStack_44._0_1_ = 0x1a;
      FUN_00a840b0();
      uStack_44._0_1_ = 0x19;
      pcVar6 = pcVar11;
      if (0xf < local_298) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    FUN_00457540();
    uStack_44 = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x120) != '\0') {
    FUN_0099f470();
  }
  if (*(int *)(param_1 + 0xe40) != 0) {
    if (DAT_0125eadc == 0) {
      iVar18 = FUN_00aae9af();
      uStack_44 = 0x1b;
      if (iVar18 != 0) {
        FUN_00576fe0();
      }
      uStack_44 = 0xffffffff;
      FUN_0057ab10();
    }
    FUN_009a0940();
    FUN_0099f770();
  }
  cVar4 = (**(code **)(**(int **)(param_1 + 0xe64) + 0x18))();
  if (cVar4 != '\0') {
    FUN_009a0940();
    FUN_0099f770();
  }
  if (*(int *)(param_1 + 0xe5c) != 0) {
    FUN_009a0940();
    FUN_0099fe90();
    iVar18 = *(int *)(param_1 + 0xe54);
    while (iVar18 != 0) {
      iVar18 = *(int *)(iVar18 + 8);
      FUN_0099f770();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0();
    }
    if (*(int *)(param_1 + 4) != -1) {
      FUN_004013e0();
      FUN_004013e0();
    }
  }
  FUN_0099f1e0();
  piVar13 = *(int **)(param_1 + 0xe88);
  if (piVar13 != (int *)0x0) {
    FUN_009a0940();
    (**(code **)(*piVar13 + 4))();
  }
  FUN_0099f310();
  FUN_0043acd0();
  uStack_44 = 0x1c;
  FUN_009a0940();
  FUN_0099f770();
  uStack_44 = 0xffffffff;
  if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  for (puVar12 = *(undefined4 **)(param_1 + 0xe8c);
      (*(undefined4 **)(param_1 + 0xe8c) <= puVar12 && (puVar12 < *(undefined4 **)(param_1 + 0xe90))
      ); puVar12 = puVar12 + 1) {
    piVar13 = (int *)*puVar12;
    FUN_009a0940();
    (**(code **)(*piVar13 + 4))();
  }
  iVar9 = 0;
  iVar18 = *(int *)(param_1 + 0x1594) - *(int *)(param_1 + 0x1590) >> 2;
  if (0 < iVar18) {
    do {
      piVar13 = *(int **)(*(int *)(param_1 + 0x1590) + iVar9 * 4);
      FUN_009a0940();
      (**(code **)(*piVar13 + 4))();
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar18);
  }
  iVar10 = 1;
  iVar9 = *(int *)(param_1 + 0x11d0) - *(int *)(param_1 + 0x11cc) >> 3;
  if (1 < iVar9) {
    piVar13 = *(int **)(param_1 + 0x11cc);
    do {
      if (piVar13[2] != 0 || piVar13[3] != 0) {
        FUN_009a0940();
        (**(code **)(*(int *)(param_1 + 0x1184) + 4))();
        break;
      }
      iVar10 = iVar10 + 1;
      piVar13 = piVar13 + 2;
    } while (iVar10 < iVar9);
  }
  cVar4 = (**(code **)(**(int **)(param_1 + 0x12b0) + 0x38))();
  if (cVar4 != '\0') {
    FUN_009a0940();
    FUN_0099f770();
  }
  FUN_009a0940();
  (**(code **)(*(int *)(param_1 + 0x1244) + 4))();
  FUN_009a0940();
  FUN_0099fe90();
  iStack_308 = 0;
  if (0 < (*(int *)(param_1 + 0x12a4) - *(int *)(param_1 + 0x12a0)) / 0x18) {
    do {
      FUN_0099f160();
      iStack_308 = iStack_308 + 1;
    } while (iStack_308 < (*(int *)(iVar18 + 0x12a4) - *(int *)(iVar18 + 0x12a0)) / 0x18);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0();
  }
  if (*(int *)(param_1 + 4) != -1) {
    FUN_004013e0();
    FUN_004013e0();
  }
  FUN_0099f470();
  if (*(int *)(iVar18 + 0x1400) != DAT_01259abc) {
    FUN_0043acd0();
    uStack_48 = 0x1d;
    FUN_009a0940();
    FUN_0099f770();
    uStack_48 = 0xffffffff;
  }
  for (puVar12 = *(undefined4 **)(iVar18 + 0xe44); puVar12 != (undefined4 *)0x0;
      puVar12 = (undefined4 *)puVar12[2]) {
    piVar13 = (int *)*puVar12;
    FUN_009a0940();
    (**(code **)(*piVar13 + 4))();
  }
  FUN_0099f1e0();
  if (*(int *)(iVar18 + 0x1440) != 0 || *(int *)(iVar18 + 0x1444) != 0) {
    FUN_0099f310();
  }
  iStack_308 = 0;
  piVar13 = (int *)(iVar18 + 0x1448);
  do {
    if ((*piVar13 != 0x8000) || (piVar13[1] != 0)) {
      FUN_0099f310();
    }
    iStack_308 = iStack_308 + 1;
    piVar13 = piVar13 + 2;
  } while (iStack_308 < 3);
  piVar13 = (int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x7f4) + *(int *)(iVar18 + 0x20) * 8);
  if (*piVar13 != 0 || piVar13[1] != 0) {
    FUN_0099f310();
  }
  iVar9 = *(int *)(iVar18 + 0x20);
  iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3f4);
  FUN_009a0940();
  (**(code **)(*(int *)(iVar9 * 0x58 + iVar10) + 4))();
  iVar9 = *(int *)(iVar18 + 0x20);
  iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x404);
  FUN_009a0940();
  uStack_31c = param_1;
  (**(code **)(*(int *)(iVar9 * 0x58 + iVar10) + 4))();
  iVar9 = *(int *)(iVar18 + 0x20);
  iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x424);
  FUN_009a0940();
  (**(code **)(*(int *)(iVar9 * 0x58 + iVar10) + 4))();
  iVar9 = *(int *)(iVar18 + 0x20);
  iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x4e4);
  FUN_009a0940();
  (**(code **)(*(int *)(iVar9 * 0x58 + iVar10) + 4))();
  iVar9 = *(int *)(iVar18 + 0x20);
  iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x7d4);
  FUN_009a0940();
  (**(code **)(*(int *)(iVar9 * 0x58 + iVar10) + 4))();
  iVar9 = *(int *)(iVar18 + 0x20);
  iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x5a4);
  FUN_009a0940();
  (**(code **)(*(int *)(iVar9 * 0x58 + iVar10) + 4))();
  FUN_009a0940();
  FUN_0099fe90();
  iStack_320 = 0;
  iVar9 = *(int *)(DAT_0125870c + 0x2a8c) - *(int *)(DAT_0125870c + 0x2a88) >> 2;
  if (0 < iVar9) {
    do {
      cVar4 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) +
                                              *(int *)(iVar18 + 0x20) * 0x10) + iStack_320 * 4) +
                          0x34))();
      if (cVar4 != '\0') {
        FUN_009888f0();
        uStack_60 = 0x1e;
        FUN_0099fa00(param_1);
        uStack_60 = 0xffffffff;
        if (0xf < local_298) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_298 = 0xf;
        uStack_29c = 0;
        uStack_2ac = uStack_2ac & 0xffffff00;
      }
      iStack_320 = iStack_320 + 1;
    } while (iStack_320 < iVar9);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0(param_1);
  }
  if (*(int *)(param_1 + 4) != -1) {
    FUN_004013e0();
    FUN_004013e0();
  }
  if (0 < *(int *)(iVar18 + 0x14a4)) {
    FUN_009a0940();
    FUN_0099fe90();
    for (piVar13 = *(int **)(iVar18 + 0x149c); piVar13 != (int *)0x0; piVar13 = (int *)piVar13[2]) {
      piVar7 = (int *)(*piVar13 + 0x98);
      iVar9 = 0;
      piVar8 = piVar7;
      do {
        if (*piVar8 == *(int *)(iVar18 + 0x20)) break;
        iVar9 = iVar9 + 1;
        piVar8 = piVar8 + 7;
      } while (iVar9 < 4);
      iVar9 = 0;
      do {
        if ((*piVar7 != 0) && (*piVar7 == *(int *)(iVar18 + 0x20))) {
          if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
            FUN_009a08a0(param_1);
          }
          FUN_009888f0();
          uStack_60 = 0x1f;
          uStack_290 = 0xf;
          __snprintf((char *)auStack_28c,0xff,"%s");
          FUN_0099ff90();
          uStack_60 = 0xffffffff;
          if (0xf < uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          FUN_004013e0();
          FUN_009888f0();
          uStack_60 = 0x20;
          uStack_290 = 0xf;
          __snprintf((char *)auStack_28c,0xff,"%s");
          FUN_0099ff90();
          uStack_60 = 0xffffffff;
          if (0xf < uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          FUN_004013e0();
          break;
        }
        iVar9 = iVar9 + 1;
        piVar7 = piVar7 + 7;
      } while (iVar9 < 4);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1);
    }
    if (*(int *)(param_1 + 4) != -1) {
      FUN_004013e0();
      FUN_004013e0();
    }
  }
  piVar7 = *(int **)(iVar18 + 0x13f0);
  piVar13 = piVar7 + (*(int *)(iVar18 + 0x13f4) - (int)piVar7 >> 2);
  iVar9 = 0;
  if (piVar7 != piVar13) {
    do {
      iVar9 = iVar9 + *piVar7;
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar13);
    if (iVar9 != 0) {
      FUN_009a0940();
      FUN_0099fe90();
      iStack_320 = 0;
      iVar9 = *(int *)(iVar18 + 0x13f4) - *(int *)(iVar18 + 0x13f0) >> 2;
      if (0 < iVar9) {
        do {
          if (*(int *)(iStack_320 * 4 + *(int *)(iVar18 + 0x13f0)) != 0) {
            pcVar6 = &stack0xfffffcec;
            uStack_2b4 = 0xf;
            uStack_2b8 = 0;
            do {
              cVar4 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar4 != '\0');
            FUN_00409350(&stack0xfffffcec);
            uStack_60 = 0x21;
            FUN_009888f0();
            uStack_60 = CONCAT31(uStack_60._1_3_,0x22);
            FUN_0099fa00(param_1);
            if (0xf < local_298) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_60 = 0xffffffff;
            local_298 = 0xf;
            uStack_29c = 0;
            uStack_2ac = uStack_2ac & 0xffffff00;
            if (0xf < uStack_2b4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          iStack_320 = iStack_320 + 1;
        } while (iStack_320 < iVar9);
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
        FUN_009a08a0(param_1);
      }
      if (*(int *)(param_1 + 4) != -1) {
        FUN_004013e0();
        FUN_004013e0();
      }
    }
  }
  if (*(char *)(iVar18 + 0x129c) != '\0') {
    FUN_0099f470();
  }
  FUN_0043a9a0();
  FUN_0043a9a0();
  piVar13 = *(int **)(iVar18 + 0x156c);
  if (piVar13 != (int *)0x0) {
    FUN_009a0940();
    (**(code **)(*piVar13 + 4))();
  }
  iVar10 = 0;
  iVar9 = *(int *)(iVar18 + 0x1574) - *(int *)(iVar18 + 0x1570) >> 2;
  if (0 < iVar9) {
    do {
      piVar13 = *(int **)(*(int *)(iVar18 + 0x1570) + iVar10 * 4);
      FUN_009a0940();
      (**(code **)(*piVar13 + 4))();
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  FUN_0043c870(*(undefined4 *)(iVar18 + 100));
  FUN_0043acd0(iVar18 + 0x78);
  uStack_60 = 0x23;
  FUN_009a0940();
  FUN_0099f770(param_1);
  uStack_60 = 0xffffffff;
  if (0xf < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_0043acd0(iVar18 + 0x7c);
  uStack_60 = 0x24;
  FUN_009a0940();
  FUN_0099f770(param_1);
  uStack_60 = 0xffffffff;
  if (0xf < uStack_178) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_178 = 0xf;
  uStack_17c = 0;
  uStack_18c = uStack_18c & 0xffffff00;
  FUN_0099f1e0();
  iVar18 = 0;
  if (0 < (int)(*(int *)(uStack_31c + 0x15b0) - *(int *)(uStack_31c + 0x15ac) & 0xfffffffcU)) {
    do {
      piVar13 = *(int **)(*(int *)(uStack_31c + 0x15ac) + iVar18 * 4);
      FUN_009a0940();
      (**(code **)(*piVar13 + 4))();
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(uStack_31c + 0x15b0) - *(int *)(uStack_31c + 0x15ac) >> 2);
  }
  if (0 < (int)(*(int *)(uStack_31c + 0x15e0) - *(int *)(uStack_31c + 0x15dc) & 0xfffffffcU)) {
    iVar18 = 0;
    do {
      piVar13 = *(int **)(*(int *)(uStack_31c + 0x15dc) + iVar18 * 4);
      FUN_009a0940();
      (**(code **)(*piVar13 + 4))();
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(uStack_31c + 0x15e0) - *(int *)(uStack_31c + 0x15dc) >> 2);
  }
  FUN_0099f470();
  if (*(int *)(uStack_31c + 0x15fc) != 0) {
    FUN_009a0940();
    FUN_0099f770(param_1);
  }
  ExceptionList = pvStack_68;
  return;
}

