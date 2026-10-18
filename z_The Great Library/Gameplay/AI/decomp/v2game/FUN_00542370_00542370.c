// FUN_00542370 @ 00542370 body=[[00542370, 0054261b] [00542620, 00542659] [00542660, 005429c7] [005429d0, 00542a38] [00542a42, 00542a5b] [00542a5f, 00542a72] [00542a7e, 00542abe] [00542ac2, 00542ae4] [00542ae8, 00542b12] [00542b16, 00542b82] [00542b89, 00542b9d] [00542ba1, 00542bb9]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00542370(int param_1)

{
  code *pcVar1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  undefined1 *puVar19;
  undefined1 *puVar21;
  size_t *psVar23;
  size_t *psVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  int iVar27;
  int iVar28;
  uint *puVar29;
  int *piVar30;
  undefined4 *puVar31;
  int *piVar32;
  undefined8 uVar33;
  int aiStack_d4 [3];
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  int local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  undefined4 local_44;
  int *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int *local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar20;
  undefined4 *puVar22;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba1c06;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125eadc == (int *)0x0) {
    aiStack_d4[2] = 0x9c;
    aiStack_d4[1] = 0x5423a4;
    ExceptionList = &local_10;
    aiStack_d4[2] = FUN_00aae9af();
    local_8 = 0;
    local_30 = (int *)aiStack_d4[2];
    if (aiStack_d4[2] == 0) {
      uVar10 = 0;
    }
    else {
      aiStack_d4[1] = 0x5423bb;
      uVar10 = FUN_00576fe0();
    }
    local_8 = 0xffffffff;
    aiStack_d4[1] = 0x5423cc;
    aiStack_d4[2] = uVar10;
    FUN_0057ab10();
  }
  piVar16 = DAT_0125eadc;
  local_3c = DAT_0125eadc;
  iVar27 = DAT_0125eadc[1] - *DAT_0125eadc >> 2;
  aiStack_d4[2] = 0x5423ec;
  iVar12 = iVar27 * -4;
  local_38 = &stack0xffffff38 + iVar12;
  puVar31 = (undefined4 *)(&stack0xffffff38 + iVar12);
  puVar19 = &stack0xffffff38 + iVar12;
  iVar28 = iVar27;
  puVar21 = &stack0xffffff38 + iVar12;
  local_2c = iVar27;
  if (0 < iVar27) {
    for (; puVar21 = local_38, iVar28 != 0; iVar28 = iVar28 + -1) {
      *puVar31 = 0;
      puVar31 = puVar31 + 1;
    }
  }
  local_38 = puVar21;
  iVar28 = DAT_0125eadc[8] - DAT_0125eadc[7] >> 2;
  local_4c = (int *)0x0;
  local_48 = (int *)0x0;
  local_44 = 0;
  if (iVar28 != 0) {
    aiStack_d4[2 - iVar27] = 0x54241d;
    FUN_0068ecf0();
    piVar15 = local_48;
    iVar11 = (int)local_48 - (int)local_4c;
    aiStack_d4[2 - iVar27] = param_1;
    aiStack_d4[1 - iVar27] = (int)piVar15;
    aiStack_d4[-iVar27] = 0x542436;
    FUN_0054b7c0();
    local_48 = piVar15 + (iVar28 - (iVar11 >> 4)) * 4;
  }
  local_8 = 1;
  local_20[1] = (int *)0x0;
  puVar21 = &stack0xffffff38 + iVar12;
  if (0 < local_2c) {
    do {
      piVar15 = *(int **)(*piVar16 + (int)local_20[1] * 4);
      pcVar1 = *(code **)(*piVar15 + 0x20);
      puVar20 = (undefined4 *)(puVar19 + -4);
      puVar19 = puVar19 + -4;
      local_20[0] = piVar15;
      *puVar20 = 0x542474;
      cVar9 = (*pcVar1)();
      if (cVar9 != '\0') {
        *(int **)(puVar19 + -4) = piVar15 + 0xc5;
        *(undefined4 *)(puVar19 + -8) = 0x54248b;
        iVar12 = FUN_005c2ad0();
        puVar29 = (uint *)(local_4c + (*(int *)(iVar12 + 0x40) + -1) * 4);
        ppiVar2 = (int **)puVar29[1];
        if ((local_20 < ppiVar2) && (ppiVar3 = (int **)*puVar29, ppiVar3 <= local_20)) {
          if (ppiVar2 == (int **)puVar29[2]) {
            uVar13 = (int)ppiVar2 - (int)ppiVar3 >> 2;
            if (0x3ffffffe < uVar13) {
LAB_005425db:
              *(char **)(puVar19 + -4) = "vector<T> too long";
                    /* WARNING: Subroutine does not return */
              *(undefined4 *)(puVar19 + -8) = 0x5425e5;
              FUN_00aad3ad();
            }
            uVar13 = uVar13 + 1;
            uVar17 = (int)puVar29[2] - (int)ppiVar3 >> 2;
            if (uVar17 < uVar13) {
              if (0x3fffffff - (uVar17 >> 1) < uVar17) {
                uVar17 = 0;
              }
              else {
                uVar17 = uVar17 + (uVar17 >> 1);
              }
              if (uVar17 < uVar13) {
                uVar17 = uVar13;
              }
              *(uint *)(puVar19 + -4) = uVar17;
              *(undefined4 *)(puVar19 + -8) = 0x5424ed;
              FUN_004bf300();
              piVar16 = local_3c;
            }
          }
          if ((undefined4 *)puVar29[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar29[1] =
                 *(undefined4 *)(*puVar29 + ((int)local_20 - (int)ppiVar3 >> 2) * 4);
          }
        }
        else {
          if (ppiVar2 == (int **)puVar29[2]) {
            uVar13 = (int)((int)ppiVar2 - *puVar29) >> 2;
            if (0x3ffffffe < uVar13) goto LAB_005425db;
            uVar13 = uVar13 + 1;
            uVar17 = (int)((int)puVar29[2] - *puVar29) >> 2;
            if (uVar17 < uVar13) {
              if (0x3fffffff - (uVar17 >> 1) < uVar17) {
                uVar17 = 0;
              }
              else {
                uVar17 = uVar17 + (uVar17 >> 1);
              }
              if (uVar17 < uVar13) {
                uVar17 = uVar13;
              }
              *(uint *)(puVar19 + -4) = uVar17;
              *(undefined4 *)(puVar19 + -8) = 0x542545;
              FUN_004bf300();
              piVar16 = local_3c;
            }
          }
          if ((undefined4 *)puVar29[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar29[1] = piVar15;
          }
        }
        puVar29[1] = puVar29[1] + 4;
      }
      local_20[1] = (int *)((int)local_20[1] + 1);
      puVar21 = puVar19;
    } while ((int)local_20[1] < local_2c);
  }
  local_34 = *(undefined4 *)(param_1 + 0x1428);
  if (*(int *)(param_1 + 0x142c) == 0) {
    local_20[2] = (int *)((int)local_48 - (int)local_4c >> 4);
    if (0 < (int)local_20[2]) {
      piVar16 = *(int **)(DAT_012588e8 + 0xbe0);
      iVar12 = *(int *)(DAT_012588e8 + 0xbe4) - (int)piVar16 >> 2;
      piVar15 = local_4c;
      do {
        piVar4 = (int *)*piVar15;
        piVar14 = (int *)(piVar15[1] - (int)piVar4 >> 2);
        piVar30 = piVar16;
        iVar28 = iVar12;
        local_20[1] = piVar14;
        if (0 < iVar12) {
          do {
            local_54 = iVar28;
            piVar32 = (int *)0x0;
            iVar28 = 0;
            if (0 < (int)piVar14) {
              piVar18 = piVar4;
              do {
                if (*(int *)(*(int *)(*(int *)(*piVar30 + 0xbcc) + 0x2b8) +
                            *(int *)(*piVar18 + 0x2e4) * 4) == 0) break;
                iVar28 = iVar28 + 1;
                piVar32 = (int *)((int)piVar32 + 1);
                piVar18 = piVar18 + 1;
              } while (iVar28 < (int)piVar14);
            }
            if ((int)piVar32 < (int)local_20[1]) {
              local_20[1] = piVar32;
            }
            local_20[0] = piVar30 + 1;
            local_54 = local_54 + -1;
            piVar30 = local_20[0];
            iVar28 = local_54;
          } while (local_54 != 0);
        }
        iVar28 = 0;
        piVar30 = piVar4;
        if (0 < (int)piVar14) {
          do {
            bVar6 = iVar28 < (int)local_20[1];
            iVar28 = iVar28 + 1;
            *(uint *)(local_38 + *(int *)(*piVar30 + 0x2e4) * 4) = (uint)bVar6;
            piVar30 = piVar30 + 1;
          } while (iVar28 < (int)piVar14);
        }
        piVar15 = piVar15 + 4;
        local_20[2] = (int *)((int)local_20[2] + -1);
        local_50 = piVar4;
        local_30 = (int *)iVar12;
        local_28 = piVar16;
      } while (local_20[2] != (int *)0x0);
    }
  }
  else {
    iVar12 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x142c) * 4) + 0xbcc)
    ;
    iVar28 = 0;
    if (0 < local_2c) {
      do {
        piVar16 = *(int **)(*local_3c + iVar28 * 4);
        pcVar1 = *(code **)(*piVar16 + 0x20);
        puVar22 = (undefined4 *)(puVar21 + -4);
        puVar21 = puVar21 + -4;
        *puVar22 = 0x5425b7;
        cVar9 = (*pcVar1)();
        if (cVar9 != '\0') {
          *(undefined4 *)(local_38 + iVar28 * 4) =
               *(undefined4 *)(*(int *)(iVar12 + 0x2b8) + piVar16[0xb9] * 4);
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 < local_2c);
    }
  }
  *(int **)(puVar21 + -4) = &local_24;
  *(int ***)(puVar21 + -8) = local_20 + 2;
  *(int *)(puVar21 + -0xc) = param_1;
  local_20[2] = (int *)0x0;
  local_24 = 0;
  *(undefined4 *)(puVar21 + -0x10) = 0x5426df;
  FUN_00547030();
  piVar16 = local_20[2];
  *(undefined4 *)(puVar21 + -4) = 0;
  *(undefined4 *)(puVar21 + -8) = 1000;
  *(int *)(puVar21 + -0xc) = (int)piVar16 >> 0x1f;
  *(int **)(puVar21 + -0x10) = piVar16;
  *(undefined4 *)(puVar21 + -0x14) = 0x5426f0;
  uVar33 = __allmul();
  iVar12 = local_24;
  *(int *)(puVar21 + -4) = local_24 >> 0x1f;
  *(int *)(puVar21 + -8) = iVar12;
  *(undefined8 *)(puVar21 + -0x10) = uVar33;
  *(undefined4 *)(puVar21 + -0x14) = 0x542701;
  iVar28 = __alldiv();
  *(int **)(puVar21 + -4) = &local_24;
  *(int ***)(puVar21 + -8) = local_20 + 2;
  *(int *)(puVar21 + -0xc) = param_1;
  local_20[2] = (int *)0x0;
  local_24 = 0;
  *(undefined4 *)(puVar21 + -0x10) = 0x542717;
  FUN_00547100();
  piVar16 = local_20[2];
  *(undefined4 *)(puVar21 + -4) = 0;
  *(undefined4 *)(puVar21 + -8) = 1000;
  *(int *)(puVar21 + -0xc) = (int)piVar16 >> 0x1f;
  *(int **)(puVar21 + -0x10) = piVar16;
  *(undefined4 *)(puVar21 + -0x14) = 0x542728;
  uVar33 = __allmul();
  iVar12 = local_24;
  *(int *)(puVar21 + -4) = local_24 >> 0x1f;
  *(int *)(puVar21 + -8) = iVar12;
  *(undefined8 *)(puVar21 + -0x10) = uVar33;
  *(undefined4 *)(puVar21 + -0x14) = 0x542739;
  iVar27 = __alldiv();
  iVar12 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xa8);
  iVar11 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xa4) - iVar12;
  *(undefined4 *)(puVar21 + -4) = 0;
  *(undefined4 *)(puVar21 + -8) = 1000;
  *(longlong *)(puVar21 + -0x10) = (longlong)iVar11 * (longlong)iVar27;
  *(undefined4 *)(puVar21 + -0x14) = 0x542764;
  iVar27 = __alldiv();
  local_30 = (int *)(iVar27 + iVar12);
  *(undefined4 *)(puVar21 + -4) = 0;
  *(undefined4 *)(puVar21 + -8) = 1000;
  *(longlong *)(puVar21 + -0x10) = (longlong)iVar11 * (longlong)iVar28;
  *(undefined4 *)(puVar21 + -0x14) = 0x54277b;
  iVar28 = __alldiv();
  puVar8 = local_38;
  local_28 = (int *)(iVar28 + iVar12);
  piVar15 = (int *)((int)local_48 - (int)local_4c >> 4);
  piVar16 = local_4c;
  if (0 < (int)piVar15) {
    do {
      local_20[2] = piVar15;
      local_20[0] = piVar16;
      iVar12 = (local_20[0][1] - *local_20[0] >> 2) + -1;
      if (-1 < iVar12) {
        piVar16 = (int *)(*local_20[0] + iVar12 * 4);
        iVar28 = iVar12;
        do {
          if (0 < *(int *)(puVar8 + *(int *)(*piVar16 + 0x2e4) * 4)) {
            cVar9 = *(char *)(*piVar16 + 0x38c);
            *(int **)(puVar21 + -4) = piVar16;
            *(float *)(puVar21 + -4) = ((float)iVar28 + 0.0005) * 1000.0;
            if (cVar9 == '\0') {
              *(undefined4 *)(puVar21 + -8) = 0x542986;
              FUN_00401000();
              *(undefined4 *)(puVar21 + -4) = 0x54298e;
              iVar28 = FUN_00b31c00();
              lVar7 = (longlong)iVar28 * (longlong)(int)local_28;
            }
            else {
              *(undefined4 *)(puVar21 + -8) = 0x542974;
              FUN_00401000();
              *(undefined4 *)(puVar21 + -4) = 0x54297c;
              iVar28 = FUN_00b31c00();
              lVar7 = (longlong)iVar28 * (longlong)(int)local_30;
            }
            *(undefined4 *)(puVar21 + -4) = 0;
            *(undefined4 *)(puVar21 + -8) = 1000;
            *(longlong *)(puVar21 + -0x10) = lVar7;
            *(undefined4 *)(puVar21 + -0x14) = 0x54299f;
            iVar28 = __alldiv();
            if (iVar28 / 1000 < iVar12) {
              piVar16 = (int *)(*local_20[0] + iVar12 * 4);
              iVar12 = iVar12 - iVar28 / 1000;
              do {
                iVar28 = *piVar16;
                piVar16 = piVar16 + -1;
                iVar12 = iVar12 + -1;
                *(undefined4 *)(puVar8 + *(int *)(iVar28 + 0x2e4) * 4) = 0;
              } while (iVar12 != 0);
            }
            break;
          }
          piVar16 = piVar16 + -1;
          iVar28 = iVar28 + -1;
        } while (-1 < iVar28);
      }
      local_20[0] = local_20[0] + 4;
      local_20[2] = (int *)((int)local_20[2] + -1);
      piVar16 = local_20[0];
      piVar15 = local_20[2];
    } while (local_20[2] != (int *)0x0);
  }
  iVar12 = *(int *)(param_1 + 0xbcc);
  iVar28 = 0;
  if (0 < local_2c) {
    do {
      iVar27 = *(int *)(*local_3c + iVar28 * 4);
      iVar11 = *(int *)(local_38 + iVar28 * 4);
      local_20[2] = *(int **)(iVar27 + 0x2e4);
      if ((iVar11 != *(int *)(*(int *)(iVar12 + 0x2b8) + (int)local_20[2] * 4)) &&
         (*(char *)(DAT_012588e8 + 0xd1c) != '\0')) {
        local_30 = *(int **)(DAT_012586f4 + 8);
        iVar5 = *(int *)(DAT_012588e8 + 0xcf4);
        *(int *)(puVar21 + -4) = *(int *)(iVar12 + 0x2d8) + 0x1c;
        local_28 = (int *)iVar5;
        *(int *)(puVar21 + -8) = iVar27;
        *(undefined4 *)(puVar21 + -0xc) = 0x542855;
        uVar10 = FUN_00469980();
        piVar16 = local_28;
        *(undefined4 *)(puVar21 + -4) = uVar10;
        *(int **)(puVar21 + -8) = piVar16;
        *(undefined4 *)(puVar21 + -0xc) = 0x54285f;
        FUN_00457b00();
      }
      iVar28 = iVar28 + 1;
      *(int *)(*(int *)(iVar12 + 0x2b8) + (int)local_20[2] * 4) = iVar11;
    } while (iVar28 < local_2c);
  }
  *(int *)(puVar21 + -4) = iVar12;
  *(undefined1 *)(param_1 + 0x12d0) = 1;
  *(undefined4 *)(puVar21 + -8) = 0x542881;
  FUN_00568c80();
  *(int *)(puVar21 + -4) = param_1;
  *(undefined4 *)(puVar21 + -8) = 0x542887;
  FUN_00508330();
  *(int *)(puVar21 + -4) = param_1;
  psVar23 = (size_t *)(puVar21 + -8);
  *(undefined4 *)(puVar21 + -8) = 0x54288d;
  FUN_0050ea30();
  *(undefined4 *)((int)psVar23 + -4) = 0;
  *(undefined4 *)((int)psVar23 + -8) = 0x54289b;
  FUN_008a8650();
  *(undefined4 *)((int)psVar23 + -4) = 0xb;
  *(char **)((int)psVar23 + -8) = "on_civilize";
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  *(undefined4 *)((int)psVar23 + -0xc) = 0x5428ca;
  FUN_00409350();
  local_8._0_1_ = 2;
  if (DAT_0131a584 == (int *)0x0) {
    *(undefined4 *)((int)psVar23 + -4) = 0x1c;
    *(undefined4 *)((int)psVar23 + -8) = 0x5428e3;
    piVar16 = (int *)FUN_00aae9af();
    local_30 = piVar16;
    local_8._0_1_ = 3;
    if (piVar16 == (int *)0x0) {
      local_20[1] = (int *)0x0;
    }
    else {
      piVar16[1] = 0x1ff;
      *piVar16 = 0;
      *(undefined4 *)((int)psVar23 + -4) = 0x7fc;
      psVar24 = (size_t *)((int)psVar23 + -8);
      *(undefined4 *)((int)psVar23 + -8) = 0x542917;
      iVar12 = FUN_00aad56b();
      *psVar24 = piVar16[1] * 4;
      psVar24[-1] = 0;
      psVar24[-2] = iVar12;
      piVar16[2] = iVar12;
      psVar24[-3] = 0x54292c;
      _memset((void *)psVar24[-2],psVar24[-1],*psVar24);
      psVar23 = psVar24 + 1;
      piVar16[3] = 0;
      piVar16[4] = 0;
      piVar16[5] = 0;
      local_20[1] = piVar16;
    }
    piVar16 = DAT_0131a584;
    local_8._0_1_ = 2;
    if ((local_20[1] != DAT_0131a584) && (DAT_0131a584 != (int *)0x0)) {
      piVar15 = (int *)DAT_0131a584[3];
      iVar12 = DAT_0131a584[4] - (int)piVar15 >> 2;
      if (iVar12 != 0) {
        local_20[2] = piVar15;
        local_30 = piVar15 + iVar12;
        while (local_20[2] != piVar15 + iVar12) {
          iVar28 = *local_20[2];
          if (iVar28 != 0) {
            if (*(int *)(iVar28 + 0x20) != 0) {
              *(int *)((int)psVar23 + -4) = *(int *)(iVar28 + 0x20);
                    /* WARNING: Subroutine does not return */
              *(undefined **)((int)psVar23 + -8) = &UNK_00542a39;
              FUN_00aae91b();
            }
            *(undefined4 *)(iVar28 + 0x20) = 0;
            *(undefined4 *)(iVar28 + 0x24) = 0;
            *(undefined4 *)(iVar28 + 0x28) = 0;
            if (0xf < *(uint *)(iVar28 + 0x18)) {
              *(undefined4 *)((int)psVar23 + -4) = *(undefined4 *)(iVar28 + 4);
                    /* WARNING: Subroutine does not return */
              *(undefined **)((int)psVar23 + -8) = &UNK_00542a5c;
              FUN_00aae91b();
            }
            *(undefined4 *)(iVar28 + 0x18) = 0xf;
            *(undefined4 *)(iVar28 + 0x14) = 0;
            *(int *)((int)psVar23 + -4) = iVar28;
            *(undefined1 *)(iVar28 + 4) = 0;
                    /* WARNING: Subroutine does not return */
            *(undefined **)((int)psVar23 + -8) = &UNK_00542a73;
            FUN_00aae91b();
          }
          local_20[2] = local_20[2] + 1;
        }
      }
      iVar12 = DAT_0131a584[4];
      iVar28 = DAT_0131a584[3];
      if (iVar28 != iVar12) {
        *(undefined4 *)((int)psVar23 + -4) = 0;
        *(int *)((int)psVar23 + -8) = iVar12;
        *(int *)((int)psVar23 + -0xc) = iVar28;
        *(undefined4 *)((int)psVar23 + -0x10) = 0x542aa8;
        FID_conflict__memcpy
                  (*(void **)((int)psVar23 + -0xc),*(void **)((int)psVar23 + -8),
                   *(size_t *)((int)psVar23 + -4));
        piVar16[4] = iVar28;
      }
      if (piVar16[3] != 0) {
        *(int *)((int)psVar23 + -4) = piVar16[3];
                    /* WARNING: Subroutine does not return */
        *(undefined **)((int)psVar23 + -8) = &UNK_00542abf;
        FUN_00aae91b();
      }
      *(int **)((int)psVar23 + -4) = piVar16;
      piVar16[3] = 0;
      piVar16[4] = 0;
      piVar16[5] = 0;
      *(undefined4 *)((int)psVar23 + -8) = 0x542ad3;
      FUN_0057afc0();
      *(int *)((int)psVar23 + -4) = piVar16[2];
      puVar25 = (undefined4 *)((int)psVar23 + -8);
      *(undefined4 *)((int)psVar23 + -8) = 0x542adc;
      FUN_00aaea59();
      *puVar25 = piVar16;
                    /* WARNING: Subroutine does not return */
      puVar25[-1] = &UNK_00542ae5;
      FUN_00aae91b();
    }
    DAT_0131a584 = local_20[1];
  }
  local_8._0_1_ = 2;
  *(uint **)((int)psVar23 + -4) = local_70;
  *(int **)((int)psVar23 + -8) = DAT_0131a584;
  *(undefined4 *)((int)psVar23 + -0xc) = 0x542b00;
  FUN_008b2680();
  local_8 = CONCAT31(local_8._1_3_,1);
  if (0xf < local_5c) {
    *(uint *)((int)psVar23 + -4) = local_70[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)((int)psVar23 + -8) = &UNK_00542b13;
    FUN_00aae91b();
  }
  iVar12 = *(int *)(param_1 + 0xcdc);
  if ((*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) &&
     (0xc < (int)(*(int *)(iVar12 + 0xd84) - *(int *)(iVar12 + 0xd80) & 0xfffffffcU))) {
    pcVar1 = *(code **)(**(int **)(*(int *)(iVar12 + 0xd80) + 0xc) + 0x1c);
    puVar26 = (undefined4 *)((int)psVar23 + -4);
    psVar23 = (size_t *)((int)psVar23 + -4);
    *puVar26 = 0x542b54;
    cVar9 = (*pcVar1)();
    if (cVar9 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)(iVar12 + 0xd80) + 0xc) + 0x58) = 1;
    }
  }
  piVar16 = local_4c;
  if (local_4c != (int *)0x0) {
    while( true ) {
      if (piVar16 == local_48) {
        *(int **)((int)psVar23 + -4) = local_4c;
                    /* WARNING: Subroutine does not return */
        *(undefined **)((int)psVar23 + -8) = &UNK_00542b9e;
        FUN_00aae91b();
      }
      if (*piVar16 != 0) break;
      *piVar16 = 0;
      piVar16[1] = 0;
      piVar16[2] = 0;
      piVar16 = piVar16 + 4;
    }
    *(int *)((int)psVar23 + -4) = *piVar16;
                    /* WARNING: Subroutine does not return */
    *(undefined **)((int)psVar23 + -8) = &UNK_00542b83;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

