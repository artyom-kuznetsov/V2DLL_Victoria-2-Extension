// FUN_0055a790 @ 0055a790 body=[[0055a790, 0055aa17] [0055aa1b, 0055ab06] [0055ab0a, 0055ac3f] [0055ac43, 0055ace1] [0055ace5, 0055ad5c] [0055ad60, 0055adb0] [0055adb4, 0055adcc] [0055add0, 0055b392] [0055b396, 0055b3de] [0055b3e2, 0055b3fe] [0055b407, 0055b42d] [0055b431, 0055b45d] [0055b461, 0055b5a0] [0055b5a4, 0055b5e9] [0055b5ed, 0055b613] [0055b617, 0055b641] [0055b645, 0055b66f] [0055b673, 0055b69f] [0055b6a3, 0055b7fa] [0055b7fe, 0055b842] [0055b846, 0055b86c] [0055b870, 0055b8a2] [0055b8a6, 0055b936] [0055b93a, 0055ba9d] [0055baa1, 0055bad0] [0055bad4, 0055bafe] [0055bb02, 0055bb2c] [0055bb30, 0055bb5c] [0055bb60, 0055bbed] [0055bbf1, 0055bc9a] [0055bc9e, 0055bd3a] [0055bd3e, 0055bd53] [0055bd57, 0055bd85] [0055bd89, 0055bdb1] [0055bdb5, 0055bde2] [0055bde6, 0055bf6c] [0055bf70, 0055c036] [0055c03a, 0055c073] [0055c077, 0055c135] [0055c13e, 0055c1f8] [0055c201, 0055c239] [0055c240, 0055c33e] [0055c342, 0055c37b] [0055c37f, 0055c3ad] [0055c3b1, 0055c3c7]]


/* WARNING: Removing unreachable block (ram,0x0055a804) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0055a790(uint *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined1 *puVar4;
  uint3 uVar5;
  undefined1 uVar6;
  char cVar7;
  int *piVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int iVar11;
  uint3 *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined4 *******pppppppuVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  uint3 *_Str1;
  char *pcVar22;
  int *piVar23;
  undefined4 local_360;
  uint local_35c;
  uint *local_358;
  int *local_354 [2];
  int *local_34c;
  char cStack_345;
  uint local_344;
  uint auStack_340 [4];
  undefined4 uStack_330;
  uint uStack_32c;
  uint *local_324;
  undefined1 auStack_320 [4];
  undefined1 *puStack_31c;
  undefined1 *puStack_318;
  undefined4 uStack_314;
  uint uStack_30c;
  undefined4 uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f0;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  uint uStack_2d4;
  undefined4 uStack_2c4;
  uint uStack_2c0;
  undefined4 *puStack_2b8;
  uint auStack_2b0 [4];
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined4 uStack_294;
  undefined4 uStack_28c;
  uint uStack_288;
  undefined4 uStack_278;
  uint uStack_274;
  uint uStack_270;
  undefined4 *******local_26c [3];
  undefined4 uStack_260;
  uint uStack_25c;
  uint uStack_258;
  undefined4 uStack_254;
  undefined4 *******local_250 [4];
  uint uStack_240;
  uint uStack_23c;
  uint uStack_234;
  undefined4 uStack_224;
  uint uStack_220;
  uint uStack_218;
  undefined4 uStack_208;
  uint uStack_204;
  undefined1 auStack_1fc [20];
  uint uStack_1e8;
  char acStack_1e0 [120];
  undefined **ppuStack_168;
  int aiStack_120 [66];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00baed61;
  pvStack_14 = ExceptionList;
  local_344 = 0;
  pvVar10 = (void *)param_1[1];
  ExceptionList = &pvStack_14;
  if (pvVar10 != (void *)param_1[2]) {
    ExceptionList = &pvStack_14;
    FID_conflict__memcpy(pvVar10,(void *)param_1[2],0);
    param_1[2] = (uint)pvVar10;
  }
  puVar14 = param_1 + 5;
  local_358 = (uint *)0x40;
  do {
    if (*puVar14 != puVar14[1]) {
      puVar14[1] = *puVar14;
    }
    puVar14 = puVar14 + 4;
    local_358 = (uint *)((int)local_358 + -1);
  } while (local_358 != (uint *)0x0);
  local_324 = (uint *)FUN_00aae9af();
  local_c = 0;
  if (local_324 == (uint *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    local_360 = 0x2d2d2d;
    piVar8 = (int *)FUN_004f6a10();
  }
  local_c = 0xffffffff;
  ppiVar2 = (int **)param_1[2];
  local_34c = piVar8;
  if ((&local_34c < ppiVar2) && (ppiVar3 = (int **)param_1[1], ppiVar3 <= &local_34c)) {
    if (ppiVar2 == (int **)param_1[3]) {
      FUN_007b94a0();
    }
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[2] =
           *(undefined4 *)(param_1[1] + ((int)&local_34c - (int)ppiVar3 >> 2) * 4);
    }
  }
  else {
    if (ppiVar2 == (int **)param_1[3]) {
      FUN_007b94a0();
    }
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[2] = piVar8;
    }
  }
  param_1[2] = param_1[2] + 4;
  *param_1 = 1;
  puVar9 = (undefined4 *)param_1[0x26];
  DAT_00f20bf8 = 9999;
  local_360 = 0x585858;
  local_35c = 0;
  if ((&local_360 < puVar9) && (puVar19 = (undefined4 *)param_1[0x25], puVar19 <= &local_360)) {
    if (puVar9 == (undefined4 *)param_1[0x27]) {
      FUN_00810820();
    }
    puVar9 = (undefined4 *)(param_1[0x25] + ((int)&local_360 - (int)puVar19 >> 3) * 8);
    puVar19 = (undefined4 *)param_1[0x26];
    if (puVar19 != (undefined4 *)0x0) {
      *puVar19 = *puVar9;
      puVar19[1] = puVar9[1];
    }
  }
  else {
    if (puVar9 == (undefined4 *)param_1[0x27]) {
      FUN_00810820();
    }
    puVar14 = (uint *)param_1[0x26];
    if (puVar14 != (uint *)0x0) {
      *puVar14 = local_360;
      puVar14[1] = 0;
    }
  }
  param_1[0x26] = param_1[0x26] + 8;
  FUN_004367c0();
  local_c = 1;
  FUN_00436780();
  local_c._0_1_ = 2;
  local_324 = *(uint **)(DAT_012586e0 + 0x44);
  if (local_324 == (uint *)0x1) {
    FUN_00408ed0();
  }
  if (DAT_0131bd5c == (undefined4 *)0x0) {
    local_354[1] = (int *)FUN_00aae9af();
    local_c._0_1_ = 3;
    if (local_354[1] == (int *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = (undefined4 *)FUN_008b0060();
    }
    local_c = CONCAT31(local_c._1_3_,4);
    local_354[1] = (undefined4 *)0x0;
    if ((puVar9 != DAT_0131bd5c) && (DAT_0131bd5c != (undefined4 *)0x0)) {
      FUN_0090cd00();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 2;
    DAT_0131bd5c = puVar9;
  }
  uVar21 = (int)(DAT_0131bd5c[4] - DAT_0131bd5c[3]) >> 2;
  uVar20 = DAT_0125dd50 - DAT_0125dd4c >> 4;
  if (uVar21 < uVar20) {
    FUN_0055cff0(&DAT_0125dd4c,local_354 + 1,uVar21 * 0x10 + DAT_0125dd4c,DAT_0125dd50);
  }
  else if (uVar20 < uVar21) {
    FUN_00463070();
    FUN_0055dbb0(DAT_0125dd50);
    DAT_0125dd50 = DAT_0125dd50 + (uVar21 - (DAT_0125dd50 - DAT_0125dd4c >> 4)) * 0x10;
  }
  if (DAT_0131bd5c == (undefined4 *)0x0) {
    local_354[1] = (int *)FUN_00aae9af();
    local_c._0_1_ = 5;
    if (local_354[1] == (int *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = (undefined4 *)FUN_008b0060();
    }
    local_c = CONCAT31(local_c._1_3_,6);
    local_354[1] = (undefined4 *)0x0;
    if ((puVar9 != DAT_0131bd5c) && (DAT_0131bd5c != (undefined4 *)0x0)) {
      FUN_0090cd00();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 2;
    DAT_0131bd5c = puVar9;
  }
  uVar21 = (int)(DAT_0131bd5c[4] - DAT_0131bd5c[3]) >> 2;
  uVar20 = DAT_0125dcdc - DAT_0125dcd8 >> 4;
  if (uVar21 < uVar20) {
    FUN_0055cff0(&DAT_0125dcd8,local_354 + 1,uVar21 * 0x10 + DAT_0125dcd8,DAT_0125dcdc);
  }
  else if (uVar20 < uVar21) {
    FUN_00463070();
    FUN_0055dbb0(DAT_0125dcdc);
    DAT_0125dcdc = DAT_0125dcdc + (uVar21 - (DAT_0125dcdc - DAT_0125dcd8 >> 4)) * 0x10;
  }
  local_34c = (int *)0x0;
  local_354[0] = (int *)0x0;
  while( true ) {
    if (DAT_0131bd5c == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)FUN_00aae9af();
      local_c._0_1_ = 7;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9[1] = 0x1ff;
        *puVar9 = 0;
        local_354[1] = puVar9;
        pvVar10 = (void *)FUN_00aad56b();
        puVar9[2] = pvVar10;
        _memset(pvVar10,0,puVar9[1] * 4);
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
      }
      local_c = CONCAT31(local_c._1_3_,8);
      local_354[1] = (undefined4 *)0x0;
      if ((puVar9 != DAT_0131bd5c) && (DAT_0131bd5c != (undefined4 *)0x0)) {
        FUN_0090cd00();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c._0_1_ = 2;
      DAT_0131bd5c = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)FUN_00aae9af();
        local_c._0_1_ = 9;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          puVar9[1] = 0x1ff;
          *puVar9 = 0;
          local_354[1] = puVar9;
          pvVar10 = (void *)FUN_00aad56b();
          puVar9[2] = pvVar10;
          _memset(pvVar10,0,puVar9[1] * 4);
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
        }
        local_c = CONCAT31(local_c._1_3_,10);
        local_354[1] = (undefined4 *)0x0;
        if ((puVar9 != DAT_0131bd5c) && (DAT_0131bd5c != (undefined4 *)0x0)) {
          FUN_0090cd00();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c._0_1_ = 2;
        DAT_0131bd5c = puVar9;
      }
    }
    if ((int)(DAT_0131bd5c[4] - DAT_0131bd5c[3]) >> 2 <= (int)local_34c) break;
    uStack_32c = 0xf;
    uStack_330 = 0;
    auStack_340[0] = auStack_340[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_c._0_1_ = 0xb;
    FUN_00a840b0();
    local_c._0_1_ = 2;
    if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_32c = 0xf;
    uStack_330 = 0;
    auStack_340[0] = auStack_340[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_c._0_1_ = 0xc;
    FUN_00a840b0();
    local_c._0_1_ = 2;
    uVar6 = (undefined1)local_c;
    local_c._0_1_ = 2;
    if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34c = (int *)((int)local_34c + 1);
    local_354[0] = local_354[0] + 4;
    local_c._0_1_ = uVar6;
  }
  cStack_345 = '\0';
  uVar6 = (undefined1)local_c;
LAB_0055add0:
  do {
    do {
      while( true ) {
        local_c._0_1_ = uVar6;
        piVar8 = (int *)param_2[7];
        if ((char)piVar8[0x44] == '\0') {
          iVar11 = (**(code **)(*piVar8 + 4))();
          piVar8[2] = iVar11;
          if (iVar11 == 0) {
            piVar8[3] = 0x13;
          }
          *(undefined1 *)(piVar8 + 0x44) = 1;
        }
        piVar8 = piVar8 + 3;
        piVar23 = aiStack_120;
        for (iVar11 = 0x41; iVar11 != 0; iVar11 = iVar11 + -1) {
          *piVar23 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar23 = piVar23 + 1;
        }
        if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) {
          iVar11 = 0;
          if (0 < (int)*param_1) {
            do {
              FUN_005047c0();
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)*param_1);
          }
          local_358 = (uint *)0x0;
          if (0 < (int)*param_1) {
            do {
              if (1 < (int)local_358) {
                local_324 = param_1 + 1;
                iVar11 = (int)local_358 * 4;
                if (*(char *)(*(int *)(iVar11 + *local_324) + 0x93c) == '\0') {
                  uStack_32c = 0xf;
                  uStack_330 = 0;
                  auStack_340[0] = auStack_340[0] & 0xffffff00;
                  FUN_00409350("countrydatabase.cpp",0x13);
                  local_c._0_1_ = 0x47;
                  uVar17 = FUN_004015b0();
                  local_c._0_1_ = 0x48;
                  iVar11 = *(int *)(*local_324 + iVar11);
                  pcVar22 = (char *)(iVar11 + 0x1c);
                  pcVar16 = pcVar22;
                  do {
                    cVar7 = *pcVar16;
                    pcVar16 = pcVar16 + 1;
                  } while (cVar7 != '\0');
                  FUN_00987d50(uVar17,pcVar22,(int)pcVar16 - (iVar11 + 0x1d));
                  FUN_00418e30(uVar17);
                  FUN_00401280();
                  local_c._0_1_ = 0x47;
                  FUN_00987ac0();
                  ppuStack_168 = std::ios_base::vftable;
                  FUN_00aad52d();
                  local_c._0_1_ = 2;
                  if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b();
                  }
                }
              }
              local_358 = (uint *)((int)local_358 + 1);
            } while ((int)local_358 < (int)*param_1);
          }
          (**(code **)*param_2)();
          if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_270);
          }
          uStack_25c = 0xf;
          uStack_260 = 0;
          uStack_270 = uStack_270 & 0xffffff00;
          if (uStack_240 < 0x10) {
            ExceptionList = pvStack_18;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_254);
        }
        FUN_009a1440();
        uVar6 = (undefined1)local_c;
        if (param_2[8] != 0xa44) break;
        DAT_00f20bf8 = *param_1;
        cStack_345 = '\x01';
      }
      _Str1 = (uint3 *)(param_2 + 9);
      puVar12 = _Str1;
      do {
        uVar5 = *puVar12;
        puVar12 = (uint3 *)((int)puVar12 + 1);
      } while ((char)uVar5 != '\0');
    } while ((int)puVar12 - ((int)param_2 + 0x25) != 3);
    uVar20 = (int)*(char *)((int)param_2 + 0x26) + (int)*(char *)((int)param_2 + 0x25) +
             (int)(char)*_Str1 & 0x3f;
    local_358 = param_1 + uVar20 * 4 + 5;
    iVar11 = (int)(param_1[uVar20 * 4 + 6] - param_1[uVar20 * 4 + 5]) >> 3;
    local_354[0] = (int *)0x0;
    if (0 < iVar11) {
      do {
        iVar13 = __strnicmp((char *)_Str1,(char *)(*local_358 + (int)local_354[0] * 8),3);
        if (iVar13 == 0) {
          puStack_2b8 = *(undefined4 **)(*local_358 + (int)local_354[0] * 8);
          iVar11 = *(int *)(*local_358 + 4 + (int)local_354[0] * 8);
          goto LAB_0055aedf;
        }
        local_354[0] = (int *)((int)local_354[0] + 1);
      } while ((int)local_354[0] < iVar11);
    }
    uStack_294 = 0x2d2d2d;
    iVar11 = 0;
    puStack_2b8 = (undefined4 *)0x2d2d2d;
LAB_0055aedf:
    if (iVar11 != 0) {
      uStack_32c = 0xf;
      uStack_330 = 0;
      auStack_340[0] = auStack_340[0] & 0xffffff00;
      FUN_00409350("countrydatabase.cpp",0x13);
      local_c._0_1_ = 0x45;
      uVar17 = FUN_004015b0();
      local_c._0_1_ = 0x46;
      FUN_00987d50(uVar17,"Duplicate Country Tag - ",0x18);
      FUN_00418e30(uVar17);
      FUN_00401280();
      local_c._0_1_ = 0x45;
      FUN_00987ac0();
      ppuStack_168 = std::ios_base::vftable;
      FUN_00aad52d();
      local_c._0_1_ = 2;
      uVar6 = (undefined1)local_c;
      if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto LAB_0055add0;
    }
    local_35c = *param_1;
    local_360 = (uint)*_Str1;
    local_354[1] = (int *)FUN_00aae9af();
    local_c._0_1_ = 0xd;
    if (local_354[1] == (int *)0x0) {
      local_34c = (int *)0x0;
    }
    else {
      local_34c = (int *)FUN_004f6a10();
    }
    local_c = CONCAT31(local_c._1_3_,2);
    ppiVar2 = (int **)param_1[2];
    puVar14 = param_1 + 1;
    local_354[0] = local_34c;
    if ((local_354 < ppiVar2) && (ppiVar3 = (int **)*puVar14, ppiVar3 <= local_354)) {
      local_358 = (uint *)((int)local_354 - (int)ppiVar3 >> 2);
      if (ppiVar2 == (int **)param_1[3]) {
        uVar20 = (int)ppiVar2 - (int)ppiVar3 >> 2;
        if (0x3ffffffe < uVar20) goto LAB_0055c201;
        if ((uint)((int)param_1[3] - (int)ppiVar3 >> 2) < uVar20 + 1) {
          FUN_004bf300();
        }
      }
      if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[2] = *(undefined4 *)(*puVar14 + (int)local_358 * 4);
      }
    }
    else {
      if (ppiVar2 == (int **)param_1[3]) {
        uVar20 = (int)((int)ppiVar2 - *puVar14) >> 2;
        if (0x3ffffffe < uVar20) goto LAB_0055c201;
        if ((uint)((int)((int)param_1[3] - *puVar14) >> 2) < uVar20 + 1) {
          FUN_004bf300();
        }
      }
      if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[2] = local_34c;
      }
    }
    param_1[2] = param_1[2] + 4;
    if (cStack_345 != '\0') {
      puVar9 = (undefined4 *)param_1[0x106];
      if ((&local_360 < puVar9) && (puVar19 = (undefined4 *)param_1[0x105], puVar19 <= &local_360))
      {
        local_358 = (uint *)((int)&local_360 - (int)puVar19 >> 3);
        if (puVar9 == (undefined4 *)param_1[0x107]) {
          uVar20 = (int)puVar9 - (int)puVar19 >> 3;
          if (0x1ffffffe < uVar20) goto LAB_0055c201;
          if ((uint)((int)param_1[0x107] - (int)puVar19 >> 3) < uVar20 + 1) {
            FUN_004237e0();
          }
        }
        puVar15 = (uint *)(param_1[0x105] + (int)local_358 * 8);
        puVar14 = (uint *)param_1[0x106];
        if (puVar14 != (uint *)0x0) {
          *puVar14 = *puVar15;
          uVar20 = puVar15[1];
LAB_0055b137:
          puVar14[1] = uVar20;
        }
      }
      else {
        if (puVar9 == (undefined4 *)param_1[0x107]) {
          uVar20 = (int)((int)puVar9 - param_1[0x105]) >> 3;
          if (0x1ffffffe < uVar20) goto LAB_0055c201;
          if ((uint)((int)((int)param_1[0x107] - param_1[0x105]) >> 3) < uVar20 + 1) {
            FUN_004237e0();
          }
        }
        puVar14 = (uint *)param_1[0x106];
        if (puVar14 != (uint *)0x0) {
          *puVar14 = local_360;
          uVar20 = local_35c;
          goto LAB_0055b137;
        }
      }
      param_1[0x106] = param_1[0x106] + 8;
    }
    *param_1 = *param_1 + 1;
    puVar14 = param_1 + ((int)(char)local_360 + (int)local_360._2_1_ + (int)local_360._1_1_ & 0x3fU)
                        * 4 + 5;
    puVar9 = (undefined4 *)puVar14[1];
    if ((&local_360 < puVar9) && (puVar19 = (undefined4 *)*puVar14, puVar19 <= &local_360)) {
      local_358 = (uint *)((int)&local_360 - (int)puVar19 >> 3);
      if (puVar9 == (undefined4 *)puVar14[2]) {
        uVar20 = (int)puVar9 - (int)puVar19 >> 3;
        if (0x1ffffffe < uVar20) {
LAB_0055c201:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad();
        }
        if ((uint)((int)puVar14[2] - (int)puVar19 >> 3) < uVar20 + 1) {
          FUN_004237e0();
        }
      }
      puVar1 = (uint *)(*puVar14 + (int)local_358 * 8);
      puVar15 = (uint *)puVar14[1];
      if (puVar15 != (uint *)0x0) {
        *puVar15 = *puVar1;
        uVar20 = puVar1[1];
LAB_0055b230:
        puVar15[1] = uVar20;
      }
    }
    else {
      if (puVar9 == (undefined4 *)puVar14[2]) {
        uVar20 = (int)((int)puVar9 - *puVar14) >> 3;
        if (0x1ffffffe < uVar20) goto LAB_0055c201;
        if ((uint)((int)((int)puVar14[2] - *puVar14) >> 3) < uVar20 + 1) {
          FUN_004237e0();
        }
      }
      puVar15 = (uint *)puVar14[1];
      if (puVar15 != (uint *)0x0) {
        *puVar15 = local_360;
        uVar20 = local_35c;
        goto LAB_0055b230;
      }
    }
    puVar14[1] = puVar14[1] + 8;
    pcVar16 = (char *)&local_360;
    uStack_32c = 0xf;
    uStack_330 = 0;
    auStack_340[0] = auStack_340[0] & 0xffffff00;
    do {
      cVar7 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar7 != '\0');
    FUN_00409350(&local_360,(int)pcVar16 - ((int)&local_360 + 1));
    local_c._0_1_ = 0xe;
    pcVar16 = (char *)&local_360;
    uStack_2dc = 0xf;
    uStack_2e0 = 0;
    uStack_2f0 = uStack_2f0 & 0xffffff00;
    do {
      cVar7 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar7 != '\0');
    FUN_00409350(&local_360,(int)pcVar16 - ((int)&local_360 + 1));
    local_c._0_1_ = 0xf;
    FUN_009a8ee0(auStack_320,auStack_340);
    local_c._0_1_ = 0x10;
    puVar9 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      local_354[1] = (int *)FUN_00aae9af();
      local_c._0_1_ = 0x11;
      if (local_354[1] == (int *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)FUN_00475150();
      }
      local_c._0_1_ = 0x12;
      local_354[1] = (int *)0x0;
      if ((puVar9 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar9;
    local_c._0_1_ = 0x10;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    local_c._0_1_ = 0x13;
    FUN_0055ce50();
    FUN_00408ed0();
    if (0xf < uStack_29c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_29c = 0xf;
    uStack_2a0 = 0;
    auStack_2b0[0] = auStack_2b0[0] & 0xffffff00;
    local_c._0_1_ = 0x14;
    FUN_009adb70();
    puVar4 = puStack_31c;
    if (puStack_31c != (undefined1 *)0x0) {
      while( true ) {
        if (puVar4 == puStack_318) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < *(uint *)(puVar4 + 0x14)) break;
        *(undefined4 *)(puVar4 + 0x14) = 0xf;
        *(undefined4 *)(puVar4 + 0x10) = 0;
        *puVar4 = 0;
        puVar4 = puVar4 + 0x20;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_31c = (undefined1 *)0x0;
    puStack_318 = (undefined1 *)0x0;
    uStack_314 = 0;
    if (0xf < uStack_2dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 2;
    uStack_2dc = 0xf;
    uStack_2e0 = 0;
    uStack_2f0 = uStack_2f0 & 0xffffff00;
    if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_32c = 0xf;
    uStack_330 = 0;
    auStack_340[0] = auStack_340[0] & 0xffffff00;
    FUN_00409350(&DAT_00dffe64,4);
    local_c._0_1_ = 0x15;
    pcVar16 = (char *)&local_360;
    uStack_2c0 = 0xf;
    uStack_2c4 = 0;
    uStack_2d4 = uStack_2d4 & 0xffffff00;
    do {
      cVar7 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar7 != '\0');
    FUN_00409350(&local_360,(int)pcVar16 - ((int)&local_360 + 1));
    local_c._0_1_ = 0x16;
    pcVar16 = (char *)&local_360;
    uStack_2dc = 0xf;
    uStack_2e0 = 0;
    uStack_2f0 = uStack_2f0 & 0xffffff00;
    do {
      cVar7 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar7 != '\0');
    FUN_00409350(&local_360,(int)pcVar16 - ((int)&local_360 + 1));
    local_c._0_1_ = 0x17;
    uVar17 = FUN_00988f20();
    local_c._0_1_ = 0x18;
    FUN_009a8ee0(auStack_320,uVar17);
    local_c._0_1_ = 0x19;
    iVar11 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar11 + 0x6c),*(undefined8 *)(iVar11 + 0x74));
    local_c._0_1_ = 0x1a;
    FUN_0055ce50();
    FUN_00408ed0();
    if (0xf < uStack_29c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_29c = 0xf;
    uStack_2a0 = 0;
    auStack_2b0[0] = auStack_2b0[0] & 0xffffff00;
    local_c._0_1_ = 0x1b;
    FUN_009adb70();
    if (puStack_31c != (undefined1 *)0x0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_31c = (undefined1 *)0x0;
    puStack_318 = (undefined1 *)0x0;
    uStack_314 = 0;
    if (0xf < uStack_274) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_274 = 0xf;
    uStack_278 = 0;
    uStack_288 = uStack_288 & 0xffffff00;
    if (0xf < uStack_2dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_2dc = 0xf;
    uStack_2e0 = 0;
    uStack_2f0 = uStack_2f0 & 0xffffff00;
    if (0xf < uStack_2c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 2;
    uStack_2c0 = 0xf;
    uStack_2c4 = 0;
    uStack_2d4 = uStack_2d4 & 0xffffff00;
    if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (DAT_0131bd5c == (undefined4 *)0x0) {
      local_354[1] = (int *)FUN_00aae9af();
      local_c._0_1_ = 0x1c;
      if (local_354[1] != (int *)0x0) {
        FUN_008b0060();
      }
      local_c._0_1_ = 2;
      FUN_00972090();
    }
    local_354[0] = (int *)0x0;
    local_354[1] = (int *)((int)(DAT_0131bd5c[4] - DAT_0131bd5c[3]) >> 2);
    if (0 < (int)local_354[1]) {
      local_358 = (uint *)0x0;
      uVar6 = (undefined1)local_c;
      do {
        local_c._0_1_ = uVar6;
        uStack_2dc = 0xf;
        uStack_2e0 = 0;
        uStack_2f0 = uStack_2f0 & 0xffffff00;
        FUN_00409350(&DAT_00defd44,1);
        local_c._0_1_ = 0x1d;
        pcVar16 = (char *)&local_360;
        uStack_2c0 = 0xf;
        uStack_2c4 = 0;
        uStack_2d4 = uStack_2d4 & 0xffffff00;
        do {
          cVar7 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar7 != '\0');
        FUN_00409350(&local_360,(int)pcVar16 - ((int)&local_360 + 1));
        local_c._0_1_ = 0x1e;
        uStack_28c = FUN_00988f20();
        local_c._0_1_ = 0x1f;
        puVar9 = DAT_0131bd5c;
        if (DAT_0131bd5c == (undefined4 *)0x0) {
          puStack_2b8 = (undefined4 *)FUN_00aae9af();
          local_c._0_1_ = 0x20;
          if (puStack_2b8 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            puVar9 = (undefined4 *)FUN_008b0060();
          }
          local_c = CONCAT31(local_c._1_3_,0x21);
          puStack_2b8 = (undefined4 *)0x0;
          if ((puVar9 != DAT_0131bd5c) && (DAT_0131bd5c != (undefined4 *)0x0)) {
            FUN_0090cd00();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        DAT_0131bd5c = puVar9;
        local_c._0_1_ = 0x1f;
        FUN_00988f20();
        if (0xf < uStack_2f8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_2f8 = 0xf;
        uStack_2fc = 0;
        uStack_30c = uStack_30c & 0xffffff00;
        if (0xf < uStack_2c0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_2c0 = 0xf;
        uStack_2c4 = 0;
        uStack_2d4 = uStack_2d4 & 0xffffff00;
        local_c._0_1_ = 0x25;
        if (0xf < uStack_2dc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_2dc = 0xf;
        uStack_2e0 = 0;
        uStack_2f0 = uStack_2f0 & 0xffffff00;
        FUN_009a8ee0(auStack_320,auStack_1fc);
        local_c._0_1_ = 0x26;
        iVar11 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar11 + 0x6c),*(undefined8 *)(iVar11 + 0x74));
        local_c._0_1_ = 0x29;
        FUN_009adb70();
        local_c._0_1_ = 0x28;
        if (puStack_31c != (undefined1 *)0x0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puStack_31c = (undefined1 *)0x0;
        puStack_318 = (undefined1 *)0x0;
        uStack_314 = 0;
        uStack_2f8 = 0xf;
        uStack_2fc = 0;
        uStack_30c = uStack_30c & 0xffffff00;
        FUN_00409350(&DAT_00dffe64,4);
        local_c._0_1_ = 0x2a;
        uStack_2dc = 0xf;
        uStack_2e0 = 0;
        uStack_2f0 = uStack_2f0 & 0xffffff00;
        FUN_00409350(&DAT_00defd44,1);
        local_c._0_1_ = 0x2b;
        pcVar16 = (char *)&local_360;
        uStack_2c0 = 0xf;
        uStack_2c4 = 0;
        uStack_2d4 = uStack_2d4 & 0xffffff00;
        do {
          cVar7 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar7 != '\0');
        FUN_00409350(&local_360,(int)pcVar16 - ((int)&local_360 + 1));
        local_c._0_1_ = 0x2c;
        FUN_00988f20();
        local_c._0_1_ = 0x2d;
        uVar6 = (undefined1)local_c;
        local_c._0_1_ = 0x2d;
        if (DAT_0131bd5c == (undefined4 *)0x0) {
          puStack_2b8 = (undefined4 *)FUN_00aae9af();
          local_c._0_1_ = 0x2e;
          if (puStack_2b8 != (undefined4 *)0x0) {
            FUN_008b0060();
          }
          local_c._0_1_ = 0x2d;
          FUN_00972090();
          uVar6 = (undefined1)local_c;
        }
        local_c._0_1_ = uVar6;
        FUN_00988f20();
        local_c._0_1_ = 0x2f;
        FUN_00988f20();
        if (0xf < uStack_204) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_204 = 0xf;
        uStack_208 = 0;
        uStack_218 = uStack_218 & 0xffffff00;
        if (0xf < uStack_220) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_220 = 0xf;
        uStack_224 = 0;
        uStack_234 = uStack_234 & 0xffffff00;
        if (0xf < uStack_2c0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_2c0 = 0xf;
        uStack_2c4 = 0;
        uStack_2d4 = uStack_2d4 & 0xffffff00;
        if (0xf < uStack_2dc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_2dc = 0xf;
        uStack_2e0 = 0;
        uStack_2f0 = uStack_2f0 & 0xffffff00;
        local_c._0_1_ = 0x35;
        if (0xf < uStack_2f8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_2f8 = 0xf;
        uStack_2fc = 0;
        uStack_30c = uStack_30c & 0xffffff00;
        FUN_009a8ee0(auStack_320,auStack_2b0);
        local_c._0_1_ = 0x36;
        iVar11 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar11 + 0x6c),*(undefined8 *)(iVar11 + 0x74));
        local_c._0_1_ = 0x39;
        FUN_009adb70();
        local_c._0_1_ = 0x38;
        if (puStack_31c != (undefined1 *)0x0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puStack_31c = (undefined1 *)0x0;
        puStack_318 = (undefined1 *)0x0;
        uStack_314 = 0;
        cVar7 = FUN_00416db0();
        puVar14 = local_358;
        if (cVar7 == '\0') {
          FUN_00a840b0();
        }
        else {
          pcVar16 = (char *)&local_360;
          uStack_2f8 = 0xf;
          uStack_2fc = 0;
          uStack_30c = uStack_30c & 0xffffff00;
          do {
            cVar7 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar7 != '\0');
          FUN_00409350(&local_360,(int)pcVar16 - ((int)&local_360 + 1));
          puVar14 = local_358;
          local_c._0_1_ = 0x3a;
          FUN_0055ce50();
          FUN_00a840b0();
          local_c._0_1_ = 0x38;
          if (0xf < uStack_2f8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        cVar7 = FUN_00416db0();
        if (cVar7 == '\0') {
          FUN_00a840b0();
        }
        else {
          pcVar16 = (char *)&local_360;
          uStack_2f8 = 0xf;
          uStack_2fc = 0;
          uStack_30c = uStack_30c & 0xffffff00;
          do {
            cVar7 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar7 != '\0');
          FUN_00409350(&local_360,(int)pcVar16 - ((int)&local_360 + 1));
          local_c._0_1_ = 0x3b;
          FUN_0055ce50();
          FUN_00a840b0();
          if (0xf < uStack_2f8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        if (0xf < uStack_274) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_274 = 0xf;
        uStack_278 = 0;
        uStack_288 = uStack_288 & 0xffffff00;
        if (0xf < uStack_29c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_29c = 0xf;
        uStack_2a0 = 0;
        auStack_2b0[0] = auStack_2b0[0] & 0xffffff00;
        if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c._0_1_ = 2;
        uVar6 = (undefined1)local_c;
        local_c._0_1_ = 2;
        uStack_32c = 0xf;
        uStack_330 = 0;
        auStack_340[0] = auStack_340[0] & 0xffffff00;
        if (0xf < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_354[0] = (int *)((int)local_354[0] + 1);
        local_358 = puVar14 + 4;
      } while ((int)local_354[0] < (int)local_354[1]);
    }
    if (param_2[0x8a] == 3) {
      (**(code **)(*local_34c + 0xc))();
      uVar6 = (undefined1)local_c;
    }
    else {
      if (local_324 == (uint *)0x2) {
        pppppppuVar18 = local_250[0];
        if (uStack_23c < 0x10) {
          pppppppuVar18 = local_250;
        }
        _sprintf(acStack_1e0,"%s/%s",pppppppuVar18);
        if ((acStack_1e0[0] == '\0') || (iVar11 = PHYSFS_exists(), iVar11 == 0)) {
          pppppppuVar18 = local_26c[0];
          if (uStack_258 < 0x10) {
            pppppppuVar18 = local_26c;
          }
          goto LAB_0055bec8;
        }
      }
      else {
        pppppppuVar18 = local_26c[0];
        if (uStack_258 < 0x10) {
          pppppppuVar18 = local_26c;
        }
LAB_0055bec8:
        _sprintf(acStack_1e0,"%s/%s",CONCAT44(param_2 + 0x8b,pppppppuVar18));
      }
      puVar9 = (undefined4 *)FUN_00aae9af();
      local_c._0_1_ = 0x3c;
      uVar6 = (undefined1)local_c;
      local_c._0_1_ = 0x3c;
      puStack_2b8 = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
        local_c._0_1_ = uVar6;
      }
      else {
        uStack_2c0 = 0xf;
        uStack_2c4 = 0;
        uStack_2d4 = uStack_2d4 & 0xffffff00;
        FUN_00409350("UNNAMED_SESSION",0xf);
        local_c = CONCAT31(local_c._1_3_,0x3d);
        local_344 = local_344 | 1;
        puVar19 = (undefined4 *)FUN_00aae9af();
        local_354[1] = puVar19;
        local_c = 0x3e;
        if (puVar19 == (undefined4 *)0x0) {
          puVar19 = (undefined4 *)0x0;
        }
        else {
          pcVar16 = acStack_1e0;
          uStack_2f8 = 0xf;
          uStack_2fc = 0;
          uStack_30c = uStack_30c & 0xffffff00;
          do {
            cVar7 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar7 != '\0');
          FUN_00409350(acStack_1e0,(int)pcVar16 - (int)(acStack_1e0 + 1));
          local_c = CONCAT31(local_c._1_3_,0x3f);
          local_344 = local_344 | 2;
          FUN_0098ffc0();
          *puVar19 = &PTR_FUN_00e37c3c;
        }
        *puVar9 = &PTR_FUN_00e38524;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *(undefined1 *)(puVar9 + 4) = 0;
        local_c._0_1_ = 0x41;
        local_c._1_3_ = 0;
        puVar9[7] = puVar19;
        *(undefined1 *)(puVar9 + 5) = 0;
        puVar9[0xd0] = 0xf;
        puVar9[0xcf] = 0;
        *(undefined1 *)(puVar9 + 0xcb) = 0;
        FUN_00408ed0();
        puVar9[0xd2] = 0;
        puVar9[0xd3] = 0;
        puVar9[0xd4] = 0;
        *(undefined1 *)(puVar9 + 0xd6) = 1;
        puVar9[0xd7] = 0;
      }
      if ((local_344 & 2) != 0) {
        local_344 = local_344 & 0xfffffffd;
        if (0xf < uStack_2f8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_2f8 = 0xf;
        uStack_2fc = 0;
        uStack_30c = uStack_30c & 0xffffff00;
      }
      local_c = 2;
      if ((local_344 & 1) != 0) {
        local_344 = local_344 & 0xfffffffe;
        if (0xf < uStack_2c0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_2c0 = 0xf;
        uStack_2c4 = 0;
        uStack_2d4 = uStack_2d4 & 0xffffff00;
      }
      (**(code **)(*local_34c + 0xc))();
      if (puVar9 != (undefined4 *)0x0) {
        (**(code **)*puVar9)();
      }
      pcVar16 = (char *)&local_360;
      uStack_32c = 0xf;
      uStack_330 = 0;
      auStack_340[0] = auStack_340[0] & 0xffffff00;
      do {
        cVar7 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      } while (cVar7 != '\0');
      FUN_00409350(&local_360,(int)pcVar16 - ((int)&local_360 + 1));
      local_c._0_1_ = 0x44;
      FUN_0055ce50();
      pcVar16 = acStack_1e0;
      do {
        cVar7 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      } while (cVar7 != '\0');
      FUN_00409350(acStack_1e0,(int)pcVar16 - (int)(acStack_1e0 + 1));
      local_c._0_1_ = 2;
      uVar6 = (undefined1)local_c;
      local_c._0_1_ = 2;
      if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  } while( true );
}

