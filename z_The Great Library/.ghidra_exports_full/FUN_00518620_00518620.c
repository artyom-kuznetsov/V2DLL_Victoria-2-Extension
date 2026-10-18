// FUN_00518620 @ 00518620 body=[[00518620, 0051879c] [005187a0, 005187cc] [005187d0, 005188df] [005188e3, 00518910] [00518914, 00518a03] [00518a07, 00518a28] [00518a2c, 00518b36] [00518b40, 00518e69] [00518e70, 00518f09] [00518f10, 00519015] [0051901f, 005190ba] [005190c4, 00519165] [0051916f, 00519276] [0051927a, 00519290]]


void FUN_00518620(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_1e0 [88];
  undefined4 uStack_188;
  char *pcStack_184;
  undefined4 uStack_180;
  undefined1 local_17c;
  undefined4 uStack_178;
  uint *puStack_174;
  int iStack_170;
  int local_150;
  int local_14c;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_12c;
  uint local_128;
  uint local_120 [4];
  undefined4 local_110;
  uint local_10c;
  int *local_104;
  undefined4 local_fc;
  undefined **local_f8;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb7ed1;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((param_4 != *(int *)(param_1 + 0x20)) &&
     (ExceptionList = &pvStack_14, *(int *)(param_1 + 0x20) != *(int *)(DAT_012588e8 + 0xb60))) {
    local_104 = *(int **)(DAT_012588e8 + 0xb5c);
    ExceptionList = &pvStack_14;
    puVar3 = (undefined4 *)FUN_005061e0();
    local_10c = 0xf;
    local_110 = 0;
    local_120[0] = local_120[0] & 0xffffff00;
    FUN_00409350();
    local_c = 0;
    FUN_004f97a0();
    local_c._0_1_ = 1;
    iStack_170 = 0x5186d8;
    FUN_00424aa0();
    local_c._0_1_ = 2;
    iVar7 = puVar3[1];
    puVar4 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 3;
    uVar2 = (undefined1)local_c;
    local_c._0_1_ = 3;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
      local_c._0_1_ = uVar2;
    }
    else {
      *(undefined4 *)(puVar4 + 0x14) = 0xf;
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *puVar4 = 0;
      iStack_170 = 0x518722;
      FUN_00408ed0();
      local_c._0_1_ = 4;
      *(undefined4 *)(puVar4 + 0x30) = 0xf;
      *(undefined4 *)(puVar4 + 0x2c) = 0;
      puVar4[0x1c] = 0;
      iStack_170 = 0x51874b;
      FUN_00408ed0();
      *(int *)(puVar4 + 0x38) = iVar7;
      *(undefined4 *)(puVar4 + 0x3c) = 0;
      puVar4[0x40] = 0;
    }
    iVar12 = puVar3[2];
    puVar3[1] = puVar4;
    puVar3[2] = iVar12 + 1;
    if (iVar12 == 0) {
      *puVar3 = puVar4;
    }
    else {
      *(undefined1 **)(iVar7 + 0x3c) = puVar4;
    }
    FUN_00a39a80();
    if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    local_128 = 0xf;
    local_12c = 0;
    local_13c = local_13c & 0xffffff00;
    if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_10c = 0xf;
    local_110 = 0;
    local_120[0] = local_120[0] & 0xffffff00;
    FUN_00409350();
    local_c = 5;
    FUN_0055dd40();
    local_c._0_1_ = 6;
    iStack_170 = 0x518823;
    FUN_00424aa0();
    local_c._0_1_ = 7;
    iVar7 = puVar3[1];
    puVar4 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 8;
    uVar2 = (undefined1)local_c;
    local_c._0_1_ = 8;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
      local_c._0_1_ = uVar2;
    }
    else {
      *(undefined4 *)(puVar4 + 0x14) = 0xf;
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *puVar4 = 0;
      iStack_170 = 0x51886e;
      FUN_00408ed0();
      local_c._0_1_ = 9;
      *(undefined4 *)(puVar4 + 0x30) = 0xf;
      *(undefined4 *)(puVar4 + 0x2c) = 0;
      puVar4[0x1c] = 0;
      iStack_170 = 0x518896;
      FUN_00408ed0();
      *(int *)(puVar4 + 0x38) = iVar7;
      *(undefined4 *)(puVar4 + 0x3c) = 0;
      puVar4[0x40] = 0;
    }
    iVar12 = puVar3[2];
    puVar3[1] = puVar4;
    puVar3[2] = iVar12 + 1;
    if (iVar12 == 0) {
      *puVar3 = puVar4;
    }
    else {
      *(undefined1 **)(iVar7 + 0x3c) = puVar4;
    }
    FUN_00a39a80();
    if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    local_128 = 0xf;
    local_12c = 0;
    local_13c = local_13c & 0xffffff00;
    if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_10c = 0xf;
    local_110 = 0;
    local_120[0] = local_120[0] & 0xffffff00;
    FUN_00409350();
    local_c = 10;
    local_128 = 0xf;
    local_12c = 0;
    local_13c = local_13c & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0xb;
    uVar19 = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    uVar17 = *(undefined4 *)(param_1 + 0x1c);
    uVar18 = 0x2d2d2d;
    uVar16 = 0;
    puVar15 = local_120;
    uVar14 = 0;
    FUN_006a4f40(puVar3,0,puVar15,0,uVar17,uVar6,0x2d2d2d,0);
    uVar5 = FUN_006a55b0();
    FUN_006a7ed0(auStack_1e0,uVar5,puVar3,uVar14,puVar15,uVar16,uVar17,uVar6,uVar18,uVar19);
    local_c._0_1_ = 0xc;
    uVar6 = FUN_006a4f40();
    local_c = CONCAT31(local_c._1_3_,0xb);
    FUN_0042bb30(uVar6);
    if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_128 = 0xf;
    local_12c = 0;
    local_13c = local_13c & 0xffffff00;
    if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_110 = 0;
    local_10c = 0xf;
    local_120[0] = local_120[0] & 0xffffff00;
  }
  local_fc = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_c = 0xd;
  FUN_009beeb0();
  iStack_170 = param_1 + 0x1c;
  puStack_174 = &local_13c;
  local_c = 0xe;
  uStack_178 = 0x518aa6;
  FUN_004b5a90();
  piVar13 = *(int **)(param_1 + 0x9d8);
  if (DAT_0131bb34 == 0) {
    iVar7 = FUN_00aae9af();
    local_c._0_1_ = 0xf;
    if (iVar7 != 0) {
      FUN_0041a160();
    }
    local_c = CONCAT31(local_c._1_3_,0xe);
    FUN_00423700();
  }
  iVar7 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  while ((*(int **)(param_1 + 0x9d8) <= piVar13 && (piVar13 < *(int **)(param_1 + 0x9dc)))) {
    iVar12 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar13 * 4);
    piVar13 = piVar13 + 1;
    local_104 = piVar13;
    if (0 < iVar7) {
      iVar11 = 0;
      local_150 = iVar7;
      do {
        iVar8 = *(int *)(iVar11 + *(int *)(iVar12 + 0x194));
        piVar13 = local_104;
        while (local_104 = piVar13, iVar8 != 0) {
          iVar8 = *(int *)(iVar8 + 0x27c);
          FUN_00957af0();
          piVar13 = local_104;
        }
        iVar11 = iVar11 + 0x10;
        local_150 = local_150 + -1;
      } while (local_150 != 0);
    }
  }
  local_f4 = 0x18d;
  local_f8 = CActiveMission::vftable;
  if (DAT_01258a04 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_00aae9af();
    local_c._0_1_ = 0x10;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uStack_180 = 10;
      pcStack_184 = "no_mission";
      local_17c = 0;
      uStack_188 = 0x518bd6;
      FUN_00409350();
      uStack_180 = 0x518bdb;
      FUN_008af980();
      *puVar3 = CNullMission::vftable;
    }
    local_c = CONCAT31(local_c._1_3_,0xe);
    DAT_01258a04 = puVar3;
  }
  local_f0 = DAT_01258a04;
  FUN_008a8650();
  FUN_008a8650();
  local_5c = DAT_01259abc;
  piVar13 = DAT_012587e4;
  local_58 = 0x2d2d2d;
  local_54 = 0;
  iVar7 = *(int *)(DAT_012587e4[1] + param_4 * 4);
  *(undefined4 *)(iVar7 + 0xbfc) = local_f4;
  *(undefined4 **)(iVar7 + 0xc00) = local_f0;
  *(undefined4 *)(iVar7 + 0xc08) = local_e8;
  *(undefined4 *)(iVar7 + 0xc0c) = local_e4;
  *(undefined4 *)(iVar7 + 0xc10) = local_e0;
  *(undefined4 *)(iVar7 + 0xc14) = local_dc;
  *(undefined4 *)(iVar7 + 0xc18) = local_d8;
  *(undefined4 *)(iVar7 + 0xc1c) = local_d4;
  *(undefined1 *)(iVar7 + 0xc20) = local_d0;
  *(undefined1 *)(iVar7 + 0xc21) = local_cf;
  *(undefined4 *)(iVar7 + 0xc24) = local_cc;
  *(undefined4 *)(iVar7 + 0xc28) = local_c8;
  *(undefined4 *)(iVar7 + 0xc2c) = local_c4;
  *(undefined4 *)(iVar7 + 0xc30) = local_c0;
  *(undefined4 *)(iVar7 + 0xc34) = local_bc;
  *(undefined4 *)(iVar7 + 0xc38) = local_b8;
  *(undefined4 *)(iVar7 + 0xc3c) = local_b4;
  *(undefined4 *)(iVar7 + 0xc40) = local_b0;
  *(undefined4 *)(iVar7 + 0xc44) = local_ac;
  *(undefined4 *)(iVar7 + 0xc48) = local_a8;
  *(undefined4 *)(iVar7 + 0xc50) = local_a0;
  *(undefined4 *)(iVar7 + 0xc54) = local_9c;
  *(undefined4 *)(iVar7 + 0xc58) = local_98;
  *(undefined4 *)(iVar7 + 0xc5c) = local_94;
  *(undefined4 *)(iVar7 + 0xc60) = local_90;
  *(undefined4 *)(iVar7 + 0xc64) = local_8c;
  *(undefined1 *)(iVar7 + 0xc68) = local_88;
  *(undefined1 *)(iVar7 + 0xc69) = local_87;
  *(undefined4 *)(iVar7 + 0xc6c) = local_84;
  *(undefined4 *)(iVar7 + 0xc70) = local_80;
  *(undefined4 *)(iVar7 + 0xc74) = local_7c;
  *(undefined4 *)(iVar7 + 0xc78) = local_78;
  *(undefined4 *)(iVar7 + 0xc7c) = local_74;
  *(undefined4 *)(iVar7 + 0xc80) = local_70;
  *(undefined4 *)(iVar7 + 0xc84) = local_6c;
  *(undefined4 *)(iVar7 + 0xc88) = local_68;
  *(undefined4 *)(iVar7 + 0xc8c) = local_64;
  *(undefined4 *)(iVar7 + 0xc90) = local_60;
  *(undefined4 *)(iVar7 + 0xc94) = local_5c;
  *(undefined4 *)(iVar7 + 0xc98) = 0x2d2d2d;
  *(undefined4 *)(iVar7 + 0xc9c) = 0;
  iVar7 = *(int *)(*(int *)(piVar13[1] + param_4 * 4) + 0x7bc);
  while (iVar7 != 0) {
    FUN_0068aa10();
    piVar13 = DAT_012587e4;
    iVar7 = *(int *)(*(int *)(DAT_012587e4[1] + param_4 * 4) + 0x7bc);
  }
  iVar7 = *(int *)(piVar13[1] + param_4 * 4);
  if (0 < *(int *)(iVar7 + 0x1494)) {
    iVar12 = *(int *)(iVar7 + 0x1490);
    do {
      if (iVar12 == 0) break;
      iVar12 = *(int *)(iVar12 + 4);
      FUN_0068dd70();
    } while (*(int *)(iVar7 + 0x1494) != 0);
  }
  FUN_00511340();
  piVar13 = DAT_012587e4;
  local_14c = 0;
  if (0 < *DAT_012587e4) {
    do {
      iVar7 = *(int *)(piVar13[1] + local_14c * 4);
      iVar12 = *(int *)(iVar7 + 0x20);
      local_104 = *(int **)(iVar7 + 0x1c);
      if (iVar12 != param_4) {
        iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + iVar12 * 4) + 0xbe8) +
                                 param_4 * 4) + 0x34);
        if (iVar7 != 0) {
          iVar11 = *(int *)(iVar7 + 0x30);
          iVar8 = *(int *)(iVar7 + 0x2c);
          iStack_170 = iVar7;
          if (iVar8 != iVar11) {
            do {
              if (*(int *)(iVar8 + 4) == param_4) break;
              iVar8 = iVar8 + 8;
            } while (iVar8 != iVar11);
            if (iVar8 != iVar11) {
              puStack_174 = (uint *)0x518f7d;
              FUN_009351c0();
              goto LAB_00518f8f;
            }
          }
          puStack_174 = (uint *)0x518f8c;
          FUN_00936070();
        }
LAB_00518f8f:
        iVar7 = DAT_012588e8;
        piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + iVar12 * 4) + 0xbe8) +
                                   param_4 * 4) + 0x20);
        if (piVar1 != (int *)0x0) {
          for (piVar10 = *(int **)(DAT_012588e8 + 0xa84); piVar10 != (int *)0x0;
              piVar10 = (int *)piVar10[2]) {
            if ((int *)*piVar10 == piVar1) {
              if (piVar10 != (int *)0x0) {
                if (*(char *)(DAT_012588e8 + 0xa90) == '\0') {
                  iVar12 = piVar10[1];
                  iVar11 = piVar10[2];
                  if (iVar12 != 0) {
                    *(int *)(iVar12 + 8) = iVar11;
                  }
                  if (iVar11 != 0) {
                    *(int *)(iVar11 + 4) = iVar12;
                  }
                  if (piVar10 == *(int **)(iVar7 + 0xa84)) {
                    *(int *)(iVar7 + 0xa84) = iVar11;
                  }
                  if (piVar10 == *(int **)(iVar7 + 0xa88)) {
                    *(int *)(iVar7 + 0xa88) = iVar12;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                *(undefined1 *)(piVar10 + 3) = 1;
              }
              break;
            }
          }
          (**(code **)(*piVar1 + 0x2c))();
          (**(code **)*piVar1)();
        }
        iVar7 = DAT_012588e8;
        piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + iVar12 * 4) + 0xbe8) +
                                   param_4 * 4) + 0x24);
        if (piVar1 != (int *)0x0) {
          for (piVar10 = *(int **)(DAT_012588e8 + 0xa84); piVar10 != (int *)0x0;
              piVar10 = (int *)piVar10[2]) {
            if ((int *)*piVar10 == piVar1) {
              if (piVar10 != (int *)0x0) {
                if (*(char *)(DAT_012588e8 + 0xa90) == '\0') {
                  iVar12 = piVar10[1];
                  iVar11 = piVar10[2];
                  if (iVar12 != 0) {
                    *(int *)(iVar12 + 8) = iVar11;
                  }
                  if (iVar11 != 0) {
                    *(int *)(iVar11 + 4) = iVar12;
                  }
                  if (piVar10 == *(int **)(iVar7 + 0xa84)) {
                    *(int *)(iVar7 + 0xa84) = iVar11;
                  }
                  if (piVar10 == *(int **)(iVar7 + 0xa88)) {
                    *(int *)(iVar7 + 0xa88) = iVar12;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                *(undefined1 *)(piVar10 + 3) = 1;
              }
              break;
            }
          }
          (**(code **)(*piVar1 + 0x2c))();
          (**(code **)*piVar1)();
        }
        iVar7 = DAT_012588e8;
        piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + iVar12 * 4) + 0xbe8) +
                                   param_4 * 4) + 0x28);
        if (piVar1 != (int *)0x0) {
          for (piVar10 = *(int **)(DAT_012588e8 + 0xa84); piVar10 != (int *)0x0;
              piVar10 = (int *)piVar10[2]) {
            if ((int *)*piVar10 == piVar1) {
              if (piVar10 != (int *)0x0) {
                if (*(char *)(DAT_012588e8 + 0xa90) == '\0') {
                  iVar12 = piVar10[1];
                  iVar11 = piVar10[2];
                  if (iVar12 != 0) {
                    *(int *)(iVar12 + 8) = iVar11;
                  }
                  if (iVar11 != 0) {
                    *(int *)(iVar11 + 4) = iVar12;
                  }
                  if (piVar10 == *(int **)(iVar7 + 0xa84)) {
                    *(int *)(iVar7 + 0xa84) = iVar11;
                  }
                  if (piVar10 == *(int **)(iVar7 + 0xa88)) {
                    *(int *)(iVar7 + 0xa88) = iVar12;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                *(undefined1 *)(piVar10 + 3) = 1;
              }
              break;
            }
          }
          (**(code **)(*piVar1 + 0x2c))();
          (**(code **)*piVar1)();
        }
        FUN_0092d620();
        iVar7 = *(int *)(DAT_012587e4[1] + iVar12 * 4);
        piVar1 = *(int **)(iVar7 + 0xe8c);
        piVar10 = piVar1;
        while( true ) {
          if ((piVar10 < piVar1) || (*(int **)(iVar7 + 0xe90) <= piVar10)) goto LAB_0051924b;
          local_104 = *(int **)(*piVar10 + 8);
          if (*(int *)(*piVar10 + 0xc) == param_4) break;
          piVar10 = piVar10 + 1;
        }
        piVar9 = *(int **)(iVar7 + 0xe90);
        if (((((int)piVar9 - (int)piVar1 & 0xfffffffcU) != 0) && (piVar1 <= piVar10)) &&
           (piVar10 < piVar9)) {
          if (piVar10 == piVar9 + -1) {
            if (piVar1 != piVar9) {
LAB_0051923f:
              *(int **)(iVar7 + 0xe90) = piVar9 + -1;
            }
          }
          else {
            iStack_170 = 0x519220;
            FID_conflict__memcpy(piVar10,piVar10 + 1,((int)piVar9 - (int)(piVar10 + 1) >> 2) * 4);
            piVar9 = *(int **)(iVar7 + 0xe90);
            if ((((int)piVar9 - (int)*(int **)(iVar7 + 0xe8c) & 0xfffffffcU) != 0) &&
               (*(int **)(iVar7 + 0xe8c) != piVar9)) goto LAB_0051923f;
          }
        }
      }
LAB_0051924b:
      local_14c = local_14c + 1;
    } while (local_14c < *piVar13);
  }
  FUN_00545be0();
  if (local_13c == 0) {
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

