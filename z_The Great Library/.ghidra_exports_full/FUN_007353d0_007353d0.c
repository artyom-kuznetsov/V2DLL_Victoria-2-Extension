// FUN_007353d0 @ 007353d0 body=[[007353d0, 00735545] [00735550, 007355bb] [007355bf, 00735828] [0073582c, 0073583c] [00735840, 007359bd] [007359cf, 00735a69] [00735a6d, 00735b2e] [00735b32, 00735b8c] [00735b90, 00735bb5] [00735bb9, 00735bd1]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00735544) */
/* WARNING: Removing unreachable block (ram,0x00735550) */
/* WARNING: Removing unreachable block (ram,0x0073558d) */
/* WARNING: Removing unreachable block (ram,0x00735590) */
/* WARNING: Type propagation algorithm not settling */

void FUN_007353d0(int param_1,int *param_2,int *param_3)

{
  undefined1 *******pppppppuVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined1 ******ppppppuVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  code *pcVar11;
  char *pcVar12;
  undefined1 *******pppppppuVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined1 *puVar16;
  size_t *psVar17;
  size_t *psVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int *piVar24;
  size_t asStack_c0 [4];
  uint local_a0 [4];
  int *local_90;
  uint local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 *******local_78;
  uint local_74;
  undefined4 local_70;
  undefined1 local_6c [8];
  undefined8 local_64;
  undefined1 *******local_5c;
  undefined1 *******local_58;
  undefined1 *******local_54;
  int local_50;
  undefined4 local_4c [3];
  undefined8 *local_40;
  int local_3c;
  uint local_38;
  undefined1 *local_30;
  undefined1 *******local_2c;
  uint *local_28;
  uint *local_24;
  undefined1 *******local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b61f9f;
  local_10 = ExceptionList;
  local_90 = *(int **)(param_1 + 0x70);
  local_24 = DAT_012588e8;
  local_28 = (uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x74) * 4) + 0x9d8);
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x6c) != 0) {
    local_20[1] = *(undefined1 ********)(*(int *)(param_1 + 0x6c) + 0x58);
    asStack_c0[3] = 0x735450;
    ExceptionList = &local_10;
    FUN_004e9b90();
    local_28 = local_a0;
  }
  if (DAT_0125fdd8 == (undefined4 *)0x0) {
    asStack_c0[3] = 0x1c;
    asStack_c0[2] = 0x735464;
    local_2c = (undefined1 *******)FUN_00aae9af();
    local_8._0_1_ = 1;
    if (local_2c == (undefined1 *******)0x0) {
      asStack_c0[3] = 0;
    }
    else {
      asStack_c0[3] = 0x735479;
      asStack_c0[3] = FUN_008b0060();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    asStack_c0[2] = 0x735487;
    FUN_005c2810();
  }
  puVar7 = DAT_0125fdd8;
  iVar21 = (int)(DAT_0125fdd8[4] - DAT_0125fdd8[3]) >> 2;
  asStack_c0[3] = 0x7354a4;
  puVar16 = &stack0xffffff50 + iVar21 * -8;
  psVar17 = (size_t *)(&stack0xffffff50 + iVar21 * -8);
  local_20[2] = (undefined1 *******)(&stack0xffffff50 + iVar21 * -4);
  asStack_c0[3 - iVar21] = 0x7354ae;
  asStack_c0[iVar21 * -2 + 3] = iVar21 * 4;
  asStack_c0[iVar21 * -2 + 2] = 1;
  asStack_c0[iVar21 * 0xfffffffeU + 1] = (size_t)(&stack0xffffff50 + iVar21 * -8);
  local_30 = &stack0xffffff50 + iVar21 * -8;
  asStack_c0[iVar21 * -2] = 0x7354bc;
  _memset((void *)asStack_c0[iVar21 * 0xfffffffeU + 1],asStack_c0[iVar21 * -2 + 2],
          asStack_c0[iVar21 * -2 + 3]);
  iVar23 = *(int *)(param_1 + 0x6c);
  asStack_c0[iVar21 * -2 + 3] = iVar21 * 4;
  pppppppuVar13 = local_20[2];
  if (iVar23 == 0) {
    asStack_c0[iVar21 * -2 + 2] = 0;
    asStack_c0[iVar21 * 0xfffffffeU + 1] = (size_t)pppppppuVar13;
    asStack_c0[iVar21 * -2] = 0x7354d4;
    _memset((void *)asStack_c0[iVar21 * 0xfffffffeU + 1],asStack_c0[iVar21 * -2 + 2],
            asStack_c0[iVar21 * -2 + 3]);
    iVar23 = 0;
    psVar17 = (size_t *)(&stack0xffffff50 + iVar21 * -8);
    if (0 < iVar21) {
      do {
        pcVar11 = *(code **)(**(int **)(puVar7[3] + iVar23 * 4) + 0x24);
        psVar17 = (size_t *)(puVar16 + -4);
        *(undefined4 *)(puVar16 + -4) = 0x7354ed;
        cVar5 = (*pcVar11)();
        if ((cVar5 != '\0') &&
           (*(int *)(*(int *)(puVar7[3] + iVar23 * 4) + 0x28) == *(int *)(param_1 + 0xc4))) {
          *(undefined4 *)((int)local_20[2] + iVar23 * 4) = 1;
        }
        iVar23 = iVar23 + 1;
        puVar16 = (undefined1 *)psVar17;
      } while (iVar23 < (int)(puVar7[4] - puVar7[3]) >> 2);
    }
  }
  else {
    asStack_c0[iVar21 * -2 + 2] = 0xff;
    asStack_c0[iVar21 * 0xfffffffeU + 1] = (size_t)pppppppuVar13;
    asStack_c0[iVar21 * -2] = 0x73552a;
    _memset((void *)asStack_c0[iVar21 * 0xfffffffeU + 1],asStack_c0[iVar21 * -2 + 2],
            asStack_c0[iVar21 * -2 + 3]);
  }
  local_20[1] = (undefined1 *******)0x0;
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  piVar24 = (int *)*param_3;
  if (piVar24 != (int *)param_3[1]) {
    piVar10 = (int *)param_3[1];
    for (piVar22 = piVar24; piVar22 != piVar10; piVar22 = piVar22 + 4) {
      if (*piVar22 != 0) {
        *(int *)((int)psVar17 + -4) = *piVar22;
                    /* WARNING: Subroutine does not return */
        *(undefined **)((int)psVar17 + -8) = &UNK_007355bc;
        FUN_00aae91b();
      }
      *piVar22 = 0;
      piVar22[1] = 0;
      piVar22[2] = 0;
    }
    param_3[1] = (int)piVar24;
  }
  pppppppuVar13 = (undefined1 *******)0x0;
  local_40 = (undefined8 *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar24 = (int *)*local_28;
  if (*(char *)(param_1 + 0x78) == '\0') {
    local_5c = (undefined1 *******)0x0;
    local_58 = (undefined1 *******)0x0;
    local_54 = (undefined1 *******)0x0;
    local_8 = CONCAT31(local_8._1_3_,3);
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(undefined4 *)((int)psVar17 + -4) = 0x7356ec;
      FUN_00a513f0();
      if (local_58 != (undefined1 *******)0x0) {
        *local_58 = (undefined1 ******)0x6;
      }
      local_58 = local_58 + 1;
      local_20[0] = (undefined1 *******)0x7;
      if ((local_20 < local_58) && (local_5c <= local_20)) {
        iVar23 = (int)local_20 - (int)local_5c;
        if (local_58 == local_54) {
          *(undefined4 *)((int)psVar17 + -4) = 0x735729;
          FUN_00a513f0();
        }
        if (local_58 != (undefined1 *******)0x0) {
          *local_58 = local_5c[iVar23 >> 2];
        }
      }
      else {
        if (local_58 == local_54) {
          *(undefined4 *)((int)psVar17 + -4) = 0x735747;
          FUN_00a513f0();
        }
        if (local_58 != (undefined1 *******)0x0) {
          *local_58 = (undefined1 ******)0x7;
        }
      }
      local_58 = local_58 + 1;
    }
    while (((int *)*local_28 <= piVar24 && (piVar24 < (int *)local_28[1]))) {
      pppppppuVar1 = *(undefined1 ********)(local_24[0x2b3] + *piVar24 * 4);
      *(undefined1 *********)((int)psVar17 + -4) = &local_5c;
      *(undefined8 ***)((int)psVar17 + -8) = &local_40;
      *(undefined1 ********)((int)psVar17 + -0xc) = pppppppuVar1;
      local_90 = piVar24 + 1;
      local_2c = pppppppuVar1;
      *(undefined4 *)((int)psVar17 + -0x10) = 0x735796;
      FUN_004b8470();
      iVar23 = (local_3c - (int)local_40) / 0xc;
      piVar24 = piVar24 + 1;
      if (0 < iVar23) {
        *(undefined1 ********)((int)psVar17 + -4) =
             (undefined1 *******)(iVar23 + (int)pppppppuVar13);
        local_20[1] = (undefined1 *******)(iVar23 + (int)pppppppuVar13);
        *(undefined4 *)((int)psVar17 + -8) = 0x7357bf;
        FUN_00737e10();
        puVar14 = local_40;
        pppppppuVar13 = local_20[1];
        piVar24 = local_90;
        if (0 < iVar23) {
          do {
            iVar21 = *(int *)(*(int *)((int)puVar14 + 4) + 0x24);
            iVar2 = *(int *)((int)local_20[2] + iVar21 * 4);
            *(undefined4 *)(local_30 + iVar21 * 4) = 0;
            if (iVar2 != 0) {
              local_84 = *puVar14;
              local_74 = 0xffffffff;
              local_70 = 0xffffffff;
              local_7c = *(undefined4 *)(puVar14 + 1);
              local_78 = local_2c;
              *(undefined4 *)((int)psVar17 + -4) = 0x735808;
              FUN_007383a0();
            }
            iVar23 = iVar23 + -1;
            puVar14 = (undefined8 *)((int)puVar14 + 0xc);
            pppppppuVar13 = local_20[1];
            piVar24 = local_90;
          } while (iVar23 != 0);
        }
      }
    }
    if (local_5c != (undefined1 *******)0x0) {
      *(undefined1 ********)((int)psVar17 + -4) = local_5c;
                    /* WARNING: Subroutine does not return */
      *(undefined **)((int)psVar17 + -8) = &UNK_00735829;
      FUN_00aae91b();
    }
  }
  else {
    while (((int *)*local_28 <= piVar24 && (piVar24 < (int *)local_28[1]))) {
      pppppppuVar1 = *(undefined1 ********)(local_24[0x2b3] + *piVar24 * 4);
      *(undefined1 ********)((int)psVar17 + -4) = pppppppuVar1;
      local_90 = piVar24 + 1;
      local_20[1] = pppppppuVar1;
      *(undefined4 *)((int)psVar17 + -8) = 0x735631;
      FUN_004b81d0();
      iVar23 = (local_3c - (int)local_40) / 0xc;
      piVar24 = piVar24 + 1;
      if (0 < iVar23) {
        *(undefined1 ********)((int)psVar17 + -4) =
             (undefined1 *******)(iVar23 + (int)pppppppuVar13);
        local_2c = (undefined1 *******)(iVar23 + (int)pppppppuVar13);
        *(undefined4 *)((int)psVar17 + -8) = 0x73565a;
        FUN_00737e10();
        puVar14 = local_40;
        pppppppuVar13 = local_2c;
        piVar24 = local_90;
        if (0 < iVar23) {
          do {
            pppppppuVar13 = local_20[1];
            iVar21 = *(int *)(*(int *)((int)puVar14 + 4) + 0x24);
            iVar2 = *(int *)((int)local_20[2] + iVar21 * 4);
            *(undefined4 *)(local_30 + iVar21 * 4) = 0;
            if (iVar2 != 0) {
              local_64 = *puVar14;
              local_5c = *(undefined1 ********)(puVar14 + 1);
              uVar8 = (undefined4)local_64;
              *(undefined4 *)((int)psVar17 + -4) = 0;
              local_54 = (undefined1 *******)0xffffffff;
              local_58 = pppppppuVar13;
              *(undefined4 *)((int)psVar17 + -8) = 0x7356a2;
              ppppppuVar6 = (undefined1 ******)FUN_00965930();
              *(undefined4 *)((int)psVar17 + -4) = 0;
              *(undefined4 *)((int)psVar17 + -8) = uVar8;
              local_20[0] = (undefined1 *******)ppppppuVar6;
              *(undefined4 *)((int)psVar17 + -0xc) = 0x7356ad;
              local_50 = FUN_00965870();
              local_50 = local_50 - (int)local_20[0];
              *(undefined4 *)((int)psVar17 + -4) = 0x7356be;
              FUN_007383a0();
            }
            iVar23 = iVar23 + -1;
            puVar14 = (undefined8 *)((int)puVar14 + 0xc);
            pppppppuVar13 = local_2c;
            piVar24 = local_90;
          } while (iVar23 != 0);
        }
      }
    }
  }
  local_8 = local_8 & 0xffffff00;
  if (local_40 != (undefined8 *)0x0) {
    *(undefined8 **)((int)psVar17 + -4) = local_40;
                    /* WARNING: Subroutine does not return */
    *(undefined **)((int)psVar17 + -8) = &UNK_0073583d;
    FUN_00aae91b();
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar23 = param_2[1];
    iVar21 = *param_2;
    if (0 < (iVar23 - iVar21) / 0x18) {
      local_2c = (undefined1 *******)((uint)local_2c & 0xffffff00);
      *(undefined1 ********)((int)psVar17 + -4) = local_2c;
      *(int *)((int)psVar17 + -8) = (iVar23 - iVar21) / 0x18;
      *(int *)((int)psVar17 + -0xc) = iVar23;
      *(int *)((int)psVar17 + -0x10) = iVar21;
      *(undefined4 *)((int)psVar17 + -0x14) = 0x735897;
      FUN_007387f0();
      local_24 = *(uint **)(*(int *)(*param_2 + 0xc) + 0x16c);
      puVar3 = (uint *)((param_2[1] - *param_2) / 0x18);
      puVar15 = (uint *)0x1;
      local_20[1] = (undefined1 *******)0x0;
      if (0 < (int)puVar3) {
        local_20[0] = (undefined1 *******)0x0;
        local_20[2] = (undefined1 *******)0x18;
        do {
          local_28 = (uint *)0x0;
          if ((int)puVar15 < (int)puVar3) {
            local_28 = *(uint **)(*(int *)((int)local_20[2] + *param_2 + 0xc) + 0x16c);
          }
          if ((local_24 != local_28) || (puVar15 == puVar3)) {
            local_40 = (undefined8 *)0x0;
            local_3c = 0;
            local_38 = 0;
            local_8 = CONCAT31(local_8._1_3_,4);
            *(uint **)((int)psVar17 + -4) = puVar15;
            *(undefined4 *)((int)psVar17 + -8) = 0x73592a;
            FUN_00737e10();
            puVar3 = puVar15;
            if (0 < (int)puVar15) {
              do {
                local_24 = puVar3;
                *(undefined4 *)((int)psVar17 + -4) = 0x735943;
                FUN_007383a0();
                local_24 = (uint *)((int)local_24 + -1);
                puVar3 = local_24;
              } while (local_24 != (uint *)0x0);
            }
            *(undefined4 *)((int)psVar17 + -4) = 0x735958;
            FUN_007382f0();
            puVar14 = local_40;
            uVar8 = *(undefined4 *)((int)local_40 + 0xc);
            iVar23 = (int)local_20[0] + *param_2;
            local_74 = (param_3[1] - *param_3 >> 4) + -1;
            *(undefined8 **)((int)psVar17 + -4) = &local_84;
            local_78 = (undefined1 *******)uVar8;
            *(int *)((int)psVar17 + -8) = iVar23;
            local_70 = 0xffffffff;
            *(undefined4 *)((int)psVar17 + -0xc) = 0x735988;
            FUN_00737fd0();
            puVar3 = local_28;
            *(undefined8 **)((int)psVar17 + -4) = puVar14;
            local_24 = puVar3;
            local_8 = local_8 & 0xffffff00;
                    /* WARNING: Subroutine does not return */
            local_20[0] = (undefined1 *******)((int)local_20[2] + 0x18);
            local_20[1] = (undefined1 *******)((int)puVar15 + 1);
            local_20[2] = (undefined1 *******)((int)local_20[2] + 0x18);
            *(undefined **)((int)psVar17 + -8) = &UNK_007359be;
            FUN_00aae91b();
          }
          local_20[2] = (undefined1 *******)((int)local_20[2] + 0x18);
          puVar15 = (uint *)((int)puVar15 + 1);
        } while ((int)puVar15 <= (int)puVar3);
      }
    }
    if (DAT_0125fdd8 == (undefined4 *)0x0) {
      *(undefined4 *)((int)psVar17 + -4) = 0x1c;
      *(undefined4 *)((int)psVar17 + -8) = 0x7359f3;
      puVar7 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 5;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0x1ff;
        *puVar7 = 0;
        *(undefined4 *)((int)psVar17 + -4) = 0x7fc;
        psVar18 = (size_t *)((int)psVar17 + -8);
        *(undefined4 *)((int)psVar17 + -8) = 0x735a23;
        uVar8 = FUN_00aad56b();
        *psVar18 = puVar7[1] * 4;
        psVar18[-1] = 0;
        psVar18[-2] = uVar8;
        puVar7[2] = uVar8;
        psVar18[-3] = 0x735a38;
        _memset((void *)psVar18[-2],psVar18[-1],*psVar18);
        psVar17 = psVar18 + 1;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
      }
      puVar4 = DAT_0125fdd8;
      local_8 = CONCAT31(local_8._1_3_,6);
      if ((puVar7 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
        *(undefined4 **)((int)psVar17 + -4) = DAT_0125fdd8;
        *(undefined4 *)((int)psVar17 + -8) = 0x735a64;
        FUN_005c1a70();
        *(undefined4 **)((int)psVar17 + -4) = puVar4;
                    /* WARNING: Subroutine does not return */
        *(undefined **)((int)psVar17 + -8) = &UNK_00735a6a;
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      DAT_0125fdd8 = puVar7;
    }
    puVar7 = DAT_0125fdd8;
    iVar23 = DAT_0125fdd8[3];
    piVar24 = DAT_0125fdd8 + 3;
    iVar21 = 0;
    if (0 < (int)(DAT_0125fdd8[4] - iVar23 & 0xfffffffcU)) {
      do {
        pcVar11 = *(code **)(**(int **)(iVar23 + iVar21 * 4) + 0x24);
        puVar19 = (undefined4 *)((int)psVar17 + -4);
        psVar17 = (size_t *)((int)psVar17 + -4);
        *puVar19 = 0x735aa3;
        cVar5 = (*pcVar11)();
        if ((cVar5 != '\0') &&
           (iVar23 = *(int *)(*piVar24 + iVar21 * 4), *(int *)(iVar23 + 0x28) != 0)) {
          uVar8 = *(undefined4 *)(iVar23 + 0x28);
          local_74 = 0xf;
          local_78 = (undefined1 *******)0x0;
          local_88 = local_88 & 0xffffff00;
          *(undefined4 *)((int)psVar17 + -4) = 10;
          *(undefined1 **)((int)psVar17 + -8) = local_6c;
          *(undefined4 *)((int)psVar17 + -0xc) = uVar8;
          local_8._0_1_ = 7;
          *(undefined4 *)((int)psVar17 + -0x10) = 0x735ae0;
          pcVar9 = __itoa(*(int *)((int)psVar17 + -0xc),*(char **)((int)psVar17 + -8),
                          *(int *)((int)psVar17 + -4));
          pcVar12 = pcVar9;
          do {
            cVar5 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar5 != '\0');
          *(int *)((int)psVar17 + -4) = (int)pcVar12 - (int)(pcVar9 + 1);
          *(char **)((int)psVar17 + -8) = pcVar9;
          *(undefined4 *)((int)psVar17 + -0xc) = 0x735afe;
          FUN_00409350();
          *(uint **)((int)psVar17 + -4) = &local_88;
          local_8._0_1_ = 8;
          *(undefined4 *)((int)psVar17 + -8) = 0x735b16;
          FUN_00988fa0();
          local_8._0_1_ = 10;
          if (0xf < local_74) {
            *(uint *)((int)psVar17 + -4) = local_88;
                    /* WARNING: Subroutine does not return */
            *(undefined **)((int)psVar17 + -8) = &UNK_00735b2f;
            FUN_00aae91b();
          }
          iVar23 = *(int *)(local_30 + iVar21 * 4);
          pcVar11 = *(code **)(**(int **)(param_1 + 0x60) + 0x34);
          *(undefined4 **)((int)psVar17 + -4) = local_4c;
          local_74 = 0xf;
          local_78 = (undefined1 *******)0x0;
          local_88 = local_88 & 0xffffff00;
          puVar20 = (undefined1 *)((int)psVar17 + -8);
          *(undefined4 *)((int)psVar17 + -8) = 0x735b62;
          piVar10 = (int *)(*pcVar11)();
          if (iVar23 == 0) {
            pcVar11 = *(code **)(*piVar10 + 0xb8);
          }
          else {
            pcVar11 = *(code **)(*piVar10 + 0xbc);
          }
          psVar17 = (size_t *)(puVar20 + -4);
          *(undefined4 *)(puVar20 + -4) = 0x735b7a;
          (*pcVar11)();
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_38) {
            *(undefined4 *)((int)psVar17 + -4) = local_4c[0];
                    /* WARNING: Subroutine does not return */
            *(undefined **)((int)psVar17 + -8) = &UNK_00735b8d;
            FUN_00aae91b();
          }
        }
        iVar23 = *piVar24;
        iVar21 = iVar21 + 1;
      } while (iVar21 < puVar7[4] - iVar23 >> 2);
    }
  }
  if (local_a0[0] == 0) {
    ExceptionList = local_10;
    return;
  }
  *(uint *)((int)psVar17 + -4) = local_a0[0];
                    /* WARNING: Subroutine does not return */
  *(undefined **)((int)psVar17 + -8) = &UNK_00735bb6;
  FUN_00aae91b();
}

