// FUN_007aee70 @ 007aee70 body=[[007aee70, 007aef0a] [007aef0e, 007aefdf] [007aefe3, 007af00e] [007af012, 007af0cb] [007af0cf, 007af1a4] [007af1a8, 007af1d1] [007af1d5, 007af22c] [007af230, 007af290] [007af294, 007af2bd] [007af2c1, 007af311] [007af315, 007af444] [007af448, 007af477] [007af47b, 007af4ad] [007af4b1, 007af55b] [007af55f, 007af641] [007af645, 007af6f4] [007af6f8, 007af845] [007af849, 007af8c8] [007af8cc, 007af953] [007af957, 007af980] [007af984, 007af9df] [007af9e3, 007afa78] [007afa7c, 007afacc] [007afad0, 007afaff] [007afb03, 007afb2d] [007afb31, 007afb5b] [007afb5f, 007afc0c]]


/* WARNING: Removing unreachable block (ram,0x007af287) */
/* WARNING: Removing unreachable block (ram,0x007af308) */
/* WARNING: Removing unreachable block (ram,0x007af19b) */

void FUN_007aee70(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  float10 fVar13;
  char *pcStack_1c0;
  undefined1 *puStack_1bc;
  char *pcStack_1b8;
  uint *puStack_1b4;
  char **ppcStack_1b0;
  uint **ppuStack_1ac;
  uint **ppuVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puStack_190;
  uint *puStack_18c;
  uint *puStack_17c;
  uint uStack_178;
  char *pcStack_174;
  uint *puStack_170;
  int *piStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint local_15c;
  float fStack_158;
  uint uStack_154;
  uint *puStack_150;
  int *piStack_14c;
  uint uStack_148;
  undefined1 auStack_144 [8];
  int *piStack_13c;
  char *pcStack_134;
  int *piStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [24];
  uint *puStack_108;
  uint uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 uStack_ec;
  uint uStack_e8;
  uint *puStack_c8;
  uint local_c4 [3];
  undefined4 uStack_b8;
  uint local_b4;
  uint local_b0;
  uint *puStack_90;
  undefined1 auStack_8c [12];
  undefined4 uStack_80;
  uint uStack_7c;
  uint *puStack_74;
  uint uStack_70;
  char acStack_68 [4];
  char acStack_64 [4];
  uint uStack_60;
  uint uStack_5c;
  undefined1 uStack_54;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_3c;
  uint *puStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b911cd;
  pvStack_14 = ExceptionList;
  local_15c = 0;
  puStack_18c = (uint *)0x14;
  puStack_190 = (uint *)0xe17b94;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  puStack_18c = local_c4;
  puStack_190 = (uint *)0x7aeee3;
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))();
  puStack_10 = (undefined1 *)0xffffffff;
  piStack_130 = piVar6;
  if (0xf < local_b4) {
    puStack_190 = puStack_c8;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b4 = 0xf;
  uStack_b8 = 0;
  puStack_c8 = (uint *)((uint)puStack_c8 & 0xffffff00);
  if (piVar6 != (int *)0x0) {
    uStack_ec = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    puStack_190 = (uint *)0x5;
    uStack_168 = 0xf;
    piStack_16c = (int *)0x0;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x1;
    puStack_190 = &uStack_154;
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,2);
    uStack_164 = (**(code **)(*piVar6 + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < uStack_148) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_18 = (void *)0xffffffff;
    uStack_148 = 0xf;
    piStack_14c = (int *)0x0;
    local_15c = local_15c & 0xffffff00;
    if ((uint *)0xf < puStack_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_170 = (uint *)0xf;
    pcStack_174 = (char *)0x0;
    FUN_0056aef0();
    pvStack_18 = (void *)0x3;
    uStack_148 = 0xf;
    piStack_14c = (int *)0x0;
    local_15c = local_15c & 0xffffff00;
    FUN_00409350();
    pvStack_18 = (void *)CONCAT31(pvStack_18._1_3_,4);
    (**(code **)(*piVar6 + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    uStack_1c = 3;
    if (0xf < piStack_14c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    piStack_14c = (int *)0xf;
    puStack_150 = (uint *)0x0;
    uStack_160 = uStack_160 & 0xffffff00;
    FUN_00409350();
    iVar7 = FUN_0057a4c0();
    pcStack_174 = (char *)0xf;
    uStack_1c = 6;
    pcVar8 = __itoa(iVar7,acStack_64,10);
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    piVar6 = piStack_13c;
    uStack_1c = 7;
    puVar16 = &uStack_160;
    (**(code **)(*piStack_13c + 0x3c))();
    ppuStack_1ac = (uint **)0x7af183;
    FUN_00408ed0();
    FUN_00a5ecc0();
    uStack_20 = 3;
    puStack_18c = (uint *)((uint)puStack_18c & 0xffffff00);
    if (0xf < puStack_150) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_150 = (uint *)0xf;
    uStack_154 = 0;
    uStack_164 = uStack_164 & 0xffffff00;
    FUN_00409350();
    puStack_18c = (uint *)((uint)puStack_18c & 0xffffff00);
    uStack_20 = 9;
    ppuStack_1ac = (uint **)0x7af221;
    pcVar8 = __itoa(*(int *)(*(int *)(param_1 + 0x5c) + 0x340),acStack_68,10);
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    uStack_20 = 10;
    puVar15 = &uStack_164;
    (**(code **)(*piVar6 + 0x3c))();
    ppuStack_1ac = &puStack_190;
    ppcStack_1b0 = (char **)0x7af26f;
    FUN_00408ed0();
    ppuStack_1ac = (uint **)0x7af280;
    FUN_00a5ecc0();
    uStack_24._0_1_ = 3;
    uVar3 = (uint)puStack_190 >> 8;
    puStack_190 = (uint *)(uVar3 << 8);
    if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_17c = (uint *)0xf;
    puStack_190 = (uint *)(uVar3 << 8);
    ppuStack_1ac = (uint **)0x7af2dd;
    FUN_00409350();
    uStack_24 = CONCAT31(uStack_24._1_3_,0xb);
    ppuVar14 = &puStack_190;
    piStack_14c = (int *)(**(code **)(*piVar6 + 0x44))();
    uStack_28._0_1_ = 3;
    bVar4 = false;
    puStack_150 = (uint *)piStack_14c[0x31];
    FUN_00436780();
    uStack_28._0_1_ = 0xc;
    FUN_004367c0();
    uStack_28._0_1_ = 0xd;
    pcStack_174 = *(char **)(DAT_012586e0 + 0x4c);
    if (pcStack_174 == (char *)0x1) {
      ppuStack_1ac = (uint **)0x0;
      puStack_1b4 = (uint *)0x7af392;
      ppcStack_1b0 = (char **)auStack_8c;
      FUN_00408ed0();
    }
    ppuStack_1ac = (uint **)&DAT_00e17f6c;
    uStack_e8 = 0xf;
    uStack_ec = 0;
    uStack_fc = uStack_fc & 0xffffff00;
    ppcStack_1b0 = (char **)0x7af3ba;
    FUN_00409350();
    uStack_28._0_1_ = 0xe;
    ppuStack_1ac = (uint **)0xe17f5c;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    ppcStack_1b0 = (char **)0x7af3e9;
    FUN_00409350();
    uStack_28._0_1_ = 0xf;
    ppuStack_1ac = (uint **)0x7af410;
    FUN_00988f20();
    uStack_28._0_1_ = 0x10;
    ppuStack_1ac = (uint **)0x7af42e;
    FUN_00988f20();
    if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      ppuStack_1ac = (uint **)&UNK_007af445;
      FUN_00aae91b();
    }
    uStack_5c = 0xf;
    uStack_60 = 0;
    uStack_70 = uStack_70 & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      ppuStack_1ac = (uint **)&UNK_007af478;
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    uStack_28._0_1_ = 0x14;
    uVar5 = (undefined1)uStack_28;
    uStack_28._0_1_ = 0x14;
    if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
      ppuStack_1ac = (uint **)&UNK_007af4ae;
      FUN_00aae91b();
    }
    uStack_e8 = 0xf;
    uStack_ec = 0;
    uStack_fc = uStack_fc & 0xffffff00;
    if (pcStack_174 == (char *)0x2) {
      ppuStack_1ac = (uint **)auStack_8c;
      ppcStack_1b0 = (char **)auStack_144;
      puStack_1b4 = (uint *)0x7af52d;
      uStack_28._0_1_ = uVar5;
      ppcStack_1b0 = (char **)FUN_00436de0();
      ppuStack_1ac = (uint **)0x0;
      uStack_28._0_1_ = 0x16;
      puStack_1b4 = (uint *)0x7af543;
      FUN_00408ed0();
    }
    else {
      ppuStack_1ac = (uint **)0x7af4e5;
      ppcStack_1b0 = (char **)FUN_00988f20();
      ppuStack_1ac = (uint **)0x0;
      uStack_28._0_1_ = 0x15;
      puStack_1b4 = (uint *)0x7af4fd;
      FUN_00408ed0();
    }
    if ((int *)0xf < piStack_130) {
      uStack_28._0_1_ = 0x14;
                    /* WARNING: Subroutine does not return */
      ppuStack_1ac = (uint **)&UNK_007af55c;
      FUN_00aae91b();
    }
    uStack_28._0_1_ = 0x14;
    iVar7 = (**(code **)(**(int **)(param_1 + 0x54) + 0x40))();
    ppuStack_1ac = (uint **)0x7af578;
    pcStack_174 = (char *)FUN_00aae9af();
    uStack_28._0_1_ = 0x17;
    if (pcStack_174 != (char *)0x0) {
      ppuStack_1ac = (uint **)0xe17f74;
      fStack_158 = 2.10195e-44;
      local_15c = 0;
      piStack_16c = (int *)((uint)piStack_16c & 0xffffff00);
      ppcStack_1b0 = (char **)0x7af5af;
      FUN_00409350();
      uStack_28 = CONCAT31(uStack_28._1_3_,0x18);
      ppuStack_1ac = (uint **)0x7af5cf;
      ppuStack_1ac = (uint **)FUN_005c2ad0();
      uStack_128 = *(undefined4 *)(iVar7 + 0x6b9bc);
      uStack_124 = *(undefined4 *)(iVar7 + 0x6b9c0);
      puStack_1b4 = (uint *)CONCAT22((short)uStack_124,(short)*(undefined4 *)(iVar7 + 0x6b9bc));
      ppcStack_1b0 = (char **)auStack_120;
      pcStack_1b8 = pcStack_174;
      puStack_1bc = (undefined1 *)0x7af614;
      puStack_170 = puStack_1b4;
      FUN_009c4b50();
    }
    piVar6 = piStack_14c;
    uStack_28 = 0x14;
    if (0xf < (uint)fStack_158) {
                    /* WARNING: Subroutine does not return */
      ppuStack_1ac = (uint **)&UNK_007af642;
      FUN_00aae91b();
    }
    piStack_16c = (int *)((uint)piStack_16c & 0xffffff00);
    fStack_158 = 2.10195e-44;
    local_15c = 0;
    ppuStack_1ac = (uint **)0x7af666;
    (**(code **)(*piStack_14c + 0xe0))();
    ppuStack_1ac = (uint **)uStack_154;
    ppcStack_1b0 = (char **)0x7af67e;
    (**(code **)(*piVar6 + 0xfc))();
    puVar11 = puStack_150;
    if (*(char *)((int)puStack_150 + 0x67) != '\0') {
      ppcStack_1b0 = (char **)0x7af690;
      (**(code **)(*piVar6 + 0x34))();
    }
    puVar2 = *(uint **)(*(int *)(param_1 + 0x5c) + 200);
    ppcStack_1b0 = (char **)0xa;
    puStack_1b4 = (uint *)0xdf7d8c;
    uStack_160 = 0xf;
    uStack_164 = 0;
    pcStack_174 = (char *)((uint)pcStack_174 & 0xffffff00);
    pcStack_1b8 = (char *)0x7af6c0;
    FUN_00409350();
    uStack_30 = 0x1a;
    ppcStack_1b0 = &pcStack_174;
    puStack_1b4 = (uint *)0x7af6d6;
    piVar6 = (int *)(**(code **)(*puVar11 + 0x7c))();
    uStack_34._0_1_ = 0x14;
    if (0xf < uStack_164) {
                    /* WARNING: Subroutine does not return */
      pcStack_1b8 = &UNK_007af6f5;
      puStack_1b4 = puVar2;
      FUN_00aae91b();
    }
    uStack_164 = 0xf;
    uStack_168 = 0;
    uStack_178 = (uint)puVar2 & 0xffffff00;
    puStack_1b4 = (uint *)0x7af711;
    (**(code **)(*piVar6 + 0x54))();
    if (piVar6[0x41] == 0) {
      fStack_158 = DAT_00f092dc;
    }
    else {
      puStack_1b4 = (uint *)0x7af72a;
      fVar13 = (float10)(**(code **)(*(int *)(piVar6[0x41] + 0x54) + 0x10))();
      fStack_158 = (float)fVar13;
    }
    puStack_1b4 = (uint *)0x7af747;
    (**(code **)(*piVar6 + 0x5c))();
    while (puVar2 != (uint *)0x0) {
      puVar2 = (uint *)puStack_17c[2];
      local_15c = *puStack_17c;
      puStack_1b4 = (uint *)0x28;
      pcStack_1b8 = (char *)0x7af768;
      pcVar8 = (char *)FUN_00aae9af();
      uStack_34._0_1_ = 0x1b;
      pcStack_134 = pcVar8;
      if (pcVar8 == (char *)0x0) {
        pcStack_1b8 = (char *)0x0;
        puStack_1b4 = puVar15;
      }
      else {
        puStack_1b4 = (uint *)0x15;
        pcStack_1b8 = "invention_icon_window";
        puStack_18c = (uint *)0xf;
        puStack_190 = (uint *)0x0;
        puVar15 = (uint *)((uint)puVar15 & 0xffffff00);
        puStack_1bc = (undefined1 *)0x7af7a1;
        FUN_00409350();
        piVar12 = DAT_01258a80;
        uStack_34 = CONCAT31(uStack_34._1_3_,0x1c);
        bVar4 = true;
        puStack_1b4 = (uint *)0x7af7c6;
        puStack_1b4 = (uint *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
        pcVar8[4] = '\0';
        pcVar8[5] = '\0';
        pcVar8[6] = '\0';
        pcVar8[7] = '\0';
        pcVar8[8] = '\0';
        pcVar8[9] = '\0';
        pcVar8[10] = '\0';
        pcVar8[0xb] = '\0';
        pcVar8[0xc] = '\0';
        pcVar8[0xd] = '\0';
        pcVar8[0xe] = '\0';
        pcVar8[0xf] = '\0';
        pcVar8[0x10] = '\0';
        DAT_013f08e0 = DAT_013f08e0 + 1;
        pcVar8[0x14] = '\0';
        pcVar8[0x18] = '\0';
        *(undefined ***)(pcVar8 + 0x1c) = &PTR_FUN_00e39158;
        uStack_34 = 0x20;
        *(undefined ***)pcVar8 = &PTR_FUN_00e392f0;
        *(undefined ***)(pcVar8 + 0x1c) = &PTR_FUN_00e39320;
        pcVar8[0x24] = '\0';
        pcStack_1b8 = &stack0xfffffe60;
        puStack_1bc = (undefined1 *)0x7af817;
        uVar9 = (**(code **)(*piVar12 + 0x2c))();
        *(undefined4 *)(pcVar8 + 0x20) = uVar9;
        pcStack_1b8 = pcVar8;
        puStack_1b4 = puVar15;
      }
      uStack_34 = 0x14;
      if (bVar4) {
        bVar4 = false;
        if ((int *)0xf < puStack_18c) {
                    /* WARNING: Subroutine does not return */
          pcStack_1b8 = &UNK_007af846;
          FUN_00aae91b();
        }
        puStack_18c = (uint *)0xf;
        puStack_190 = (uint *)0x0;
      }
      piVar12 = *(int **)(pcStack_1b8 + 0x20);
      puStack_1b4 = (uint *)0x0;
      puStack_1bc = (undefined1 *)0x7af869;
      (**(code **)(*piVar6 + 0x10))();
      puStack_1bc = (undefined1 *)0xe;
      pcStack_1c0 = "invention_icon";
      FUN_00409350();
      uStack_3c = 0x22;
      puStack_1bc = &stack0xfffffe58;
      pcStack_1c0 = (char *)0x7af89f;
      piVar10 = (int *)(**(code **)(*piVar12 + 0x44))();
      pcStack_1c0 = (char *)(uStack_168 + 0x30);
      (**(code **)(*piVar10 + 0x78))();
      uStack_44 = 0x14;
      if ((uint *)0xf < puVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(ppcStack_1b0);
      }
      puVar16 = (uint *)0xf;
      puVar15 = (uint *)0x0;
      ppcStack_1b0 = (char **)((uint)ppcStack_1b0 & 0xffffff00);
      FUN_00409350("i_invention_name",0x10);
      uStack_44 = 0x23;
      uVar9 = (**(code **)(*piStack_16c + 0x18))(&uStack_160);
      uStack_48 = 0x24;
      piStack_14c = (int *)(**(code **)(*piVar12 + 0x3c))(&puStack_1b4);
      FUN_00408ed0(uVar9,0,0xffffffff);
      FUN_00a5ecc0(uVar9,0);
      if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_168);
      }
      uStack_4c = 0x14;
      uStack_154 = 0xf;
      fStack_158 = 0.0;
      uStack_168 = uStack_168 & 0xffffff00;
      if ((uint **)0xf < ppuVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pcStack_1b8);
      }
      ppuVar14 = (uint **)0xf;
      pcStack_1b8 = (char *)((uint)pcStack_1b8 & 0xffffff00);
      FUN_00409350("i_invention_name",0x10);
      uStack_4c = 0x25;
      piVar10 = (int *)(**(code **)(*piVar12 + 0x3c))(&pcStack_1b8);
      (**(code **)(*piVar10 + 0x78))(uStack_178 + 0x30);
      uStack_54 = 0x14;
      if (0xf < ppuStack_1ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pcStack_1c0);
      }
      puVar11 = (uint *)piStack_130[0x13e];
      for (; puVar11 != (uint *)0x0; puVar11 = (uint *)puVar11[2]) {
        if (*puVar11 == uStack_178) {
          ppuStack_1ac = (uint **)0xf;
          ppcStack_1b0 = (char **)0x0;
          pcStack_1c0 = (char *)((uint)pcStack_1c0._1_3_ << 8);
          FUN_00409350("invention_icon",0xe);
          uStack_54 = 0x26;
          piVar12 = (int *)(**(code **)(*piVar12 + 0x44))(&pcStack_1c0);
          uVar9 = 2;
          goto LAB_007afbae;
        }
      }
      puVar11 = (uint *)piStack_130[0x142];
      if (puVar11 != (uint *)0x0) {
LAB_007afa10:
        if (*puVar11 != uStack_178) goto code_r0x007afa18;
        ppuStack_1ac = (uint **)0xf;
        ppcStack_1b0 = (char **)0x0;
        pcStack_1c0 = (char *)((uint)pcStack_1c0._1_3_ << 8);
        FUN_00409350("invention_icon",0xe);
        uStack_54 = 0x27;
        piVar12 = (int *)(**(code **)(*piVar12 + 0x44))(&pcStack_1c0);
        uVar9 = 3;
LAB_007afbae:
        (**(code **)(*piVar12 + 0x48))(uVar9);
        puStack_1b4 = puVar15;
        puVar11 = puStack_18c;
        goto joined_r0x007afbc4;
      }
LAB_007afa1f:
      local_15c = 0xf;
      uStack_160 = 0;
      puStack_170 = (uint *)((uint)puStack_170 & 0xffffff00);
      FUN_00409350("invention_icon",0xe);
      uStack_54 = 0x28;
      piVar12 = (int *)(**(code **)(*piVar12 + 0x44))(&puStack_170);
      (**(code **)(*piVar12 + 0x48))(4);
      puStack_1b4 = puStack_150;
      puVar11 = (uint *)piStack_13c;
joined_r0x007afbc4:
      uStack_34._0_1_ = 0x14;
      puStack_17c = puVar2;
      if ((int *)0xf < puVar11) {
        uStack_34._0_1_ = 0x14;
                    /* WARNING: Subroutine does not return */
        pcStack_1b8 = &UNK_007afa79;
        FUN_00aae91b();
      }
    }
    puStack_1b4 = (uint *)0x7afa97;
    FUN_00452c70();
    puStack_1b4 = (uint *)0x7afaa0;
    (**(code **)(*piVar6 + 0x6c))();
    if (*(char *)((int)piStack_130 + 0x67) != '\0') {
      puStack_190 = (uint *)0x7afab2;
      (**(code **)(*piVar6 + 0x50))();
    }
    if (0xf < uStack_f4) {
      puStack_190 = puStack_108;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_f4 = 0xf;
    uStack_f8 = 0;
    puStack_108 = (uint *)((uint)puStack_108 & 0xffffff00);
    if (0xf < uStack_60) {
      puStack_190 = puStack_74;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_60 = 0xf;
    acStack_64[0] = '\0';
    acStack_64[1] = '\0';
    acStack_64[2] = '\0';
    acStack_64[3] = '\0';
    puStack_74 = (uint *)((uint)puStack_74 & 0xffffff00);
    if (0xf < uStack_7c) {
      puStack_190 = puStack_90;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    puStack_90 = (uint *)((uint)puStack_90 & 0xffffff00);
    if (0xf < uStack_24) {
      puStack_190 = puStack_38;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = pvStack_18;
  return;
code_r0x007afa18:
  puVar11 = (uint *)puVar11[2];
  if (puVar11 == (uint *)0x0) goto LAB_007afa1f;
  goto LAB_007afa10;
}

