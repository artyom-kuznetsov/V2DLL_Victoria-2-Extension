// FUN_007c1560 @ 007c1560 body=[[007c1560, 007c15a8] [007c15b2, 007c1662] [007c1666, 007c16cc] [007c16d0, 007c1746] [007c174a, 007c17b9] [007c17bd, 007c1858] [007c1860, 007c18cf] [007c18d3, 007c19ef] [007c19f3, 007c1a5c] [007c1a60, 007c1b98] [007c1b9c, 007c1bc2] [007c1bc6, 007c1bf8] [007c1bfc, 007c1d94] [007c1d98, 007c1dfd] [007c1e01, 007c1e6a] [007c1e6e, 007c1ed7] [007c1edb, 007c1f44] [007c1f48, 007c1fb1] [007c1fb5, 007c201e] [007c2022, 007c208b] [007c208f, 007c20f8] [007c20fc, 007c2165] [007c2169, 007c21d2] [007c21d6, 007c223f] [007c2243, 007c22ac] [007c22b0, 007c2319] [007c231d, 007c2386] [007c238a, 007c23f3] [007c23f7, 007c2460] [007c2464, 007c24f9] [007c24fd, 007c2555] [007c2559, 007c25c5] [007c25c9, 007c281a] [007c281e, 007c2858]]


/* WARNING: Removing unreachable block (ram,0x007c15da) */
/* WARNING: Removing unreachable block (ram,0x007c15e0) */
/* WARNING: Removing unreachable block (ram,0x007c1df4) */
/* WARNING: Removing unreachable block (ram,0x007c1d8b) */
/* WARNING: Removing unreachable block (ram,0x007c1e61) */
/* WARNING: Removing unreachable block (ram,0x007c19e6) */

void FUN_007c1560(int *param_1)

{
  void *_Dst;
  char cVar1;
  void **ppvVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint *puVar9;
  int *piVar10;
  char ***pppcVar11;
  char ***pppcVar12;
  char *pcVar13;
  uint **ppuVar14;
  char **ppcVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar19;
  char ***pppcStack_128;
  char **ppcStack_124;
  char ***pppcStack_120;
  char *pcStack_11c;
  char *pcStack_118;
  undefined4 uStack_114;
  char ***pppcStack_110;
  char *pcStack_10c;
  char ***pppcStack_108;
  uint ***pppuVar20;
  int **ppiVar21;
  undefined4 uVar22;
  int **ppiVar23;
  char ****ppppcVar24;
  int **ppiVar25;
  uint **ppuStack_ec;
  uint *puStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  char ***pppcStack_dc;
  int *piStack_d8;
  uint *puStack_d4;
  char ***pppcStack_c4;
  int iStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  int *piStack_b0;
  uint auStack_ac [4];
  void *apvStack_9c [7];
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint **ppuStack_74;
  uint auStack_70 [15];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb9947;
  pvStack_14 = ExceptionList;
  puStack_d4 = (uint *)0x7c1594;
  ExceptionList = &pvStack_14;
  (**(code **)(*(int *)param_1[0x13] + 0x88))();
  puStack_d4 = (uint *)param_1[0x29];
  if (puStack_d4 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    piStack_d8 = (int *)&UNK_007c15a9;
    FUN_00aae91b();
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  if (param_1[0x2e] != param_1[0x2f]) {
    param_1[0x2f] = param_1[0x2e];
  }
  puStack_d4 = (uint *)0xd;
  piStack_d8 = (int *)0xe18f30;
  auStack_ac[1] = 0xf;
  auStack_ac[0] = 0;
  uStack_bc = uStack_bc & 0xffffff00;
  pppcStack_dc = (char ***)0x7c161b;
  FUN_00409350();
  uStack_c = 0;
  puStack_d4 = &uStack_bc;
  piStack_d8 = (int *)0x7c1631;
  iVar6 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  piStack_d8 = param_1 + 0x32;
  pppcStack_dc = (char ***)0x7c1643;
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < piStack_b0) {
    pppcStack_dc = pppcStack_c4;
                    /* WARNING: Subroutine does not return */
    piStack_e0 = (int *)&UNK_007c1663;
    FUN_00aae91b();
  }
  pppcStack_dc = (char ***)0x16;
  piStack_e0 = (int *)0xe18f40;
  piStack_b0 = (int *)0xf;
  uStack_b4 = 0;
  pppcStack_c4 = (char ***)((uint)pppcStack_c4 & 0xffffff00);
  piStack_e4 = (int *)0x7c1687;
  FUN_00409350();
  pvStack_14 = (void *)0x1;
  pppcStack_dc = (char ***)&pppcStack_c4;
  piStack_e0 = (int *)0x7c16a1;
  iVar6 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  piStack_e0 = param_1 + 0x3d;
  piStack_e4 = (int *)0x7c16b2;
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))();
  uStack_1c = 0xffffffff;
  if (0xf < uStack_b8) {
                    /* WARNING: Subroutine does not return */
    puStack_e8 = (uint *)&UNK_007c16cd;
    FUN_00aae91b();
  }
  piStack_e4 = param_1 + 0x7c;
  puStack_e8 = (uint *)0x7c16e1;
  (**(code **)(*(int *)param_1[0x13] + 4))();
  puStack_e8 = (uint *)0xf;
  ppuStack_ec = (uint **)0xe18f58;
  auStack_70[5] = 0xf;
  auStack_70[4] = 0;
  auStack_70[0] = auStack_70[0] & 0xffffff00;
  FUN_00409350();
  uStack_20 = 2;
  puStack_e8 = auStack_70;
  ppuStack_ec = (uint **)0x7c1725;
  uStack_b4 = (**(code **)(*DAT_01258a80 + 0x48))();
  uStack_24 = 0xffffffff;
  if (0xf < auStack_70[4]) {
    ppuStack_ec = ppuStack_74;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppuStack_ec = (uint **)0x10;
  auStack_70[4] = 0xf;
  auStack_70[3] = 0;
  ppuStack_74 = (uint **)((uint)ppuStack_74 & 0xffffff00);
  iStack_c0 = 0xf;
  pppcStack_c4 = (char ***)0x0;
  puStack_d4 = (uint *)((uint)puStack_d4 & 0xffffff00);
  FUN_00409350();
  uStack_24 = 3;
  ppuStack_ec = &puStack_d4;
  iVar6 = (**(code **)(*DAT_01258a80 + 0x48))();
  uStack_28 = 0xffffffff;
  if ((char ***)0xf < pppcStack_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  auStack_70[5] = *(undefined4 *)(uStack_b8 + 100);
  auStack_70[6] = *(undefined4 *)(uStack_b8 + 0x68);
  pppcStack_c4 = (char ***)0xf;
  piStack_d8 = (int *)((uint)piStack_d8 & 0xffffff00);
  auStack_ac[2] = *(undefined4 *)(iVar6 + 100);
  auStack_ac[3] = *(uint *)(iVar6 + 0x68);
  if (DAT_0131bb34 == 0) {
    pppcStack_dc = (char ***)FUN_00aae9af();
    uStack_28 = 4;
    if (pppcStack_dc != (char ***)0x0) {
      FUN_0041a160();
    }
    uStack_28 = 0xffffffff;
    FUN_00423700();
  }
  uStack_bc = 0;
  pppcStack_dc = (char ***)(*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2);
  if (0 < (int)pppcStack_dc) {
    do {
      if (uStack_bc == 0) {
        apvStack_9c[0] = (void *)0x0;
        if (DAT_0131bb34 == 0) {
          uStack_b8 = FUN_00aae9af();
          uStack_28 = 5;
          if (uStack_b8 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_0041a160();
          }
          uStack_28 = 6;
          uStack_b8 = 0;
          if ((uVar7 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_28 = 0xffffffff;
          DAT_0131bb34 = uVar7;
        }
        if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) < 0) {
          pvVar8 = (void *)FUN_0096bb70();
        }
        else {
          pvVar8 = (void *)**(undefined4 **)(DAT_0131bb34 + 0xc);
        }
        ppvVar2 = (void **)param_1[0x2f];
        apvStack_9c[1] = pvVar8;
        if (apvStack_9c < ppvVar2) {
          ppvVar3 = (void **)param_1[0x2e];
          if (ppvVar3 <= apvStack_9c) {
            if (ppvVar2 == (void **)param_1[0x30]) {
              FUN_00810820();
            }
            puVar19 = (undefined4 *)(param_1[0x2e] + ((int)apvStack_9c - (int)ppvVar3 >> 3) * 8);
            puVar4 = (undefined4 *)param_1[0x2f];
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar19;
              puVar4[1] = puVar19[1];
            }
            goto LAB_007c1c77;
          }
        }
        if (ppvVar2 == (void **)param_1[0x30]) {
          FUN_00810820();
        }
        puVar19 = (undefined4 *)param_1[0x2f];
        if (puVar19 != (undefined4 *)0x0) {
          *puVar19 = apvStack_9c[0];
          puVar19[1] = pvVar8;
        }
      }
      else {
        pppcStack_c4 = (char ***)0xf;
        piStack_d8 = (int *)((uint)piStack_d8 & 0xffffff00);
        FUN_00409350();
        uStack_28 = 7;
        piVar10 = (int *)(**(code **)(*DAT_01258a80 + 0x14))();
        uStack_2c = 0xffffffff;
        uVar7 = DAT_0131bb34;
        piStack_b0 = piVar10;
        if (DAT_0131bb34 == 0) {
          uStack_bc = FUN_00aae9af();
          uStack_2c = 8;
          if (uStack_bc == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_0041a160();
          }
          uStack_2c = 9;
          uStack_b4 = 0;
          if ((uVar7 != DAT_0131bb34) && (uStack_bc = DAT_0131bb34, DAT_0131bb34 != 0)) {
            FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        DAT_0131bb34 = uVar7;
        uStack_2c = 0xffffffff;
        if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iStack_c0) {
          auStack_ac[0] = FUN_0096bb70();
        }
        else {
          auStack_ac[0] = *(uint *)(*(int *)(DAT_0131bb34 + 0xc) + iStack_c0 * 4);
        }
        (**(code **)(*piVar10 + 0x48))();
        (**(code **)(piVar10[0x15] + 4))();
        (**(code **)(*piVar10 + 0x38))();
        iStack_c0 = CONCAT22((short)auStack_70[3],(short)auStack_70[2] - (short)piStack_b0);
        FUN_009a89e0();
        apvStack_9c[4] = (void *)0xf;
        apvStack_9c[3] = (void *)0x0;
        auStack_ac[3] = auStack_ac[3] & 0xffffff00;
        uStack_34 = 10;
        pppcStack_108 = (char ***)0x7c1b23;
        pcVar13 = __itoa(0,(char *)(auStack_70 + 4),10);
        pppcStack_c4 = (char ***)(pcVar13 + 1);
        do {
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        FUN_00409350();
        uStack_34 = 0xb;
        FUN_0096d650();
        uStack_34._0_1_ = 0xc;
        FUN_00988f20();
        uStack_34 = CONCAT31(uStack_34._1_3_,0xd);
        (**(code **)(*(int *)param_1[0x13] + 0x58))();
        if ((char ***)0xf < pppcStack_c4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        pppcStack_c4 = (char ***)0xf;
        piStack_d8 = (int *)((uint)piStack_d8 & 0xffffff00);
        if (0xf < auStack_70[3]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_28 = 0xffffffff;
        auStack_70[3] = 0xf;
        auStack_70[2] = 0;
        uStack_78 = uStack_78 & 0xffffff00;
        if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puVar9 = (uint *)param_1[0x2f];
        if (auStack_ac < puVar9) {
          puVar5 = (uint *)param_1[0x2e];
          if (puVar5 <= auStack_ac) {
            if (puVar9 == (uint *)param_1[0x30]) {
              FUN_00810820();
            }
            puVar19 = (undefined4 *)(param_1[0x2e] + ((int)auStack_ac - (int)puVar5 >> 3) * 8);
            puVar4 = (undefined4 *)param_1[0x2f];
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar19;
              puVar4[1] = puVar19[1];
            }
            goto LAB_007c1c77;
          }
        }
        if (puVar9 == (uint *)param_1[0x30]) {
          FUN_00810820();
        }
        puVar19 = (undefined4 *)param_1[0x2f];
        if (puVar19 != (undefined4 *)0x0) {
          *puVar19 = piVar10;
          puVar19[1] = auStack_ac[1];
        }
      }
LAB_007c1c77:
      param_1[0x2f] = param_1[0x2f] + 8;
      uStack_bc = uStack_bc + 1;
    } while ((int)uStack_bc < (int)pppcStack_dc);
  }
  pvVar8 = (void *)param_1[0x76];
  uVar7 = (int)pvVar8 - param_1[0x75] >> 2;
  if (uVar7 < 0x12) {
    if (uVar7 < 0x11) {
      FUN_007b94a0();
      puVar19 = (undefined4 *)param_1[0x76];
      iVar6 = 0x11 - ((int)puVar19 - param_1[0x75] >> 2);
      if (iVar6 != 0) {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar19 = 0;
          puVar19 = puVar19 + 1;
        }
      }
      param_1[0x76] = param_1[0x76] + (0x11 - (param_1[0x76] - param_1[0x75] >> 2)) * 4;
    }
  }
  else {
    _Dst = (void *)(param_1[0x75] + 0x44);
    if (_Dst != pvVar8) {
      pppcStack_dc = (char ***)0x0;
      FID_conflict__memcpy(_Dst,pvVar8,0);
      param_1[0x76] = (int)_Dst + (int)pppcStack_dc;
    }
  }
  pppcStack_c4 = (char ***)0xf;
  piStack_d8 = (int *)((uint)piStack_d8 & 0xffffff00);
  FUN_00409350();
  uStack_28 = 0xe;
  pppcStack_dc = (char ***)param_1[0x75];
  ppiVar25 = &piStack_d8;
  iVar6 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  *piStack_e0 = iVar6;
  uStack_2c = 0xffffffff;
  pppcStack_dc = (char ***)((uint)pppcStack_dc & 0xffffff00);
  FUN_00409350();
  uStack_2c = 0xf;
  piStack_e0 = (int *)(param_1[0x75] + 4);
  ppppcVar24 = &pppcStack_dc;
  iVar6 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  *piStack_e4 = iVar6;
  uStack_30 = 0xffffffff;
  piStack_e0 = (int *)((uint)piStack_e0 & 0xffffff00);
  FUN_00409350();
  uStack_30 = 0x10;
  piStack_e4 = (int *)(param_1[0x75] + 8);
  ppiVar23 = &piStack_e0;
  uVar7 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  *puStack_e8 = uVar7;
  uStack_34 = 0xffffffff;
  puStack_d4 = (uint *)0x0;
  piStack_e4 = (int *)((uint)piStack_e4 & 0xffffff00);
  FUN_00409350();
  uStack_34 = 0x11;
  puStack_e8 = (uint *)(param_1[0x75] + 0xc);
  ppiVar21 = &piStack_e4;
  puVar9 = (uint *)(**(code **)(*(int *)param_1[0x13] + 0x34))();
  *ppuStack_ec = puVar9;
  auStack_70[0xe] = 0xffffffff;
  if ((uint *)0xf < puStack_d4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_d4 = (uint *)0xf;
  piStack_d8 = (int *)0x0;
  puStack_e8 = (uint *)((uint)puStack_e8 & 0xffffff00);
  pppcStack_108 = (char ***)0x7c1efc;
  FUN_00409350();
  auStack_70[0xe] = 0x12;
  ppuStack_ec = (uint **)(param_1[0x75] + 0x10);
  ppuVar14 = &puStack_e8;
  piVar10 = (int *)(**(code **)(*(int *)param_1[0x13] + 0x34))();
  *ppiVar25 = piVar10;
  auStack_70[0xd] = 0xffffffff;
  if ((int *)0xf < piStack_d8) {
                    /* WARNING: Subroutine does not return */
    pppcStack_108 = (char ***)&UNK_007c1f45;
    FUN_00aae91b();
  }
  pppcStack_108 = (char ***)0xe18cd0;
  piStack_d8 = (int *)0xf;
  pppcStack_dc = (char ***)0x0;
  ppuStack_ec = (uint **)((uint)ppuStack_ec & 0xffffff00);
  pcStack_10c = (char *)0x7c1f69;
  FUN_00409350();
  auStack_70[0xd] = 0x13;
  pppcVar11 = (char ***)(param_1[0x75] + 0x14);
  pppuVar20 = &ppuStack_ec;
  pppcStack_108 = (char ***)0x7c1f90;
  pppcVar12 = (char ***)(**(code **)(*(int *)param_1[0x13] + 0x34))();
  pppcStack_108 = pppcVar11;
  *ppppcVar24 = pppcVar12;
  auStack_70[0xc] = 0xffffffff;
  if ((char ***)0xf < pppcStack_dc) {
                    /* WARNING: Subroutine does not return */
    pcStack_10c = &UNK_007c1fb2;
    FUN_00aae91b();
  }
  pppcStack_108 = (char ***)0x11;
  pcStack_10c = "sortby_con_button";
  pppcStack_dc = (char ***)0xf;
  piStack_e0 = (int *)0x0;
  pppcStack_110 = (char ***)0x7c1fd6;
  FUN_00409350();
  auStack_70[0xc] = 0x14;
  pcVar13 = (char *)(param_1[0x75] + 0x18);
  pppcStack_108 = (char ***)&stack0xffffff10;
  pcStack_10c = (char *)0x7c1ffd;
  piVar10 = (int *)(**(code **)(*(int *)param_1[0x13] + 0x34))();
  pcStack_10c = pcVar13;
  *ppiVar23 = piVar10;
  auStack_70[0xb] = 0xffffffff;
  if ((int *)0xf < piStack_e0) {
                    /* WARNING: Subroutine does not return */
    pppcStack_110 = (char ***)&UNK_007c201f;
    FUN_00aae91b();
  }
  pcStack_10c = (char *)0x16;
  pppcStack_110 = (char ***)0xe18d20;
  piStack_e0 = (int *)0xf;
  piStack_e4 = (int *)0x0;
  uStack_114 = (char *)0x7c2043;
  FUN_00409350();
  auStack_70[0xb] = 0x15;
  pppcVar11 = (char ***)(param_1[0x75] + 0x1c);
  pcStack_10c = &stack0xffffff0c;
  pppcStack_110 = (char ***)0x7c206a;
  piVar10 = (int *)(**(code **)(*(int *)param_1[0x13] + 0x34))();
  pppcStack_110 = pppcVar11;
  *ppiVar21 = piVar10;
  auStack_70[10] = 0xffffffff;
  if ((int *)0xf < piStack_e4) {
                    /* WARNING: Subroutine does not return */
    uStack_114 = &UNK_007c208c;
    FUN_00aae91b();
  }
  pppcStack_110 = (char ***)0x14;
  uStack_114 = "sortby_issues_button";
  piStack_e4 = (int *)0xf;
  puStack_e8 = (uint *)0x0;
  pcStack_118 = (char *)0x7c20b0;
  FUN_00409350();
  auStack_70[10] = 0x16;
  iVar6 = param_1[0x75] + 0x20;
  pppcStack_110 = (char ***)&stack0xffffff08;
  uStack_114 = (char *)0x7c20d7;
  puVar9 = (uint *)(**(code **)(*(int *)param_1[0x13] + 0x34))();
  uStack_114 = (char *)iVar6;
  *ppuVar14 = puVar9;
  auStack_70[9] = 0xffffffff;
  if ((uint *)0xf < puStack_e8) {
                    /* WARNING: Subroutine does not return */
    pcStack_118 = &UNK_007c20f9;
    FUN_00aae91b();
  }
  uStack_114 = (char *)0x1a;
  pcStack_118 = "sortby_unemployment_button";
  puStack_e8 = (uint *)0xf;
  ppuStack_ec = (uint **)0x0;
  pcStack_11c = (char *)0x7c211d;
  FUN_00409350();
  auStack_70[9] = 0x17;
  pcVar13 = (char *)(param_1[0x75] + 0x24);
  uStack_114 = &stack0xffffff04;
  pcStack_118 = (char *)0x7c2144;
  ppuVar14 = (uint **)(**(code **)(*(int *)param_1[0x13] + 0x34))();
  pcStack_118 = pcVar13;
  *pppuVar20 = ppuVar14;
  auStack_70[8] = 0xffffffff;
  if ((uint **)0xf < ppuStack_ec) {
                    /* WARNING: Subroutine does not return */
    pcStack_11c = &UNK_007c2166;
    FUN_00aae91b();
  }
  pcStack_118 = (char *)0x12;
  pcStack_11c = "sortby_cash_button";
  ppuStack_ec = (uint **)0xf;
  uVar7 = 0;
  pppcStack_120 = (char ***)0x7c218a;
  FUN_00409350();
  auStack_70[8] = 0x18;
  pcVar13 = (char *)(param_1[0x75] + 0x28);
  pcStack_118 = &stack0xffffff00;
  pcStack_11c = (char *)0x7c21b1;
  ppcVar15 = (char **)(**(code **)(*(int *)param_1[0x13] + 0x34))();
  pcStack_11c = pcVar13;
  *pppcStack_108 = ppcVar15;
  auStack_70[7] = 0xffffffff;
  if (0xf < uVar7) {
                    /* WARNING: Subroutine does not return */
    pppcStack_120 = (char ***)&UNK_007c21d3;
    FUN_00aae91b();
  }
  pcStack_11c = (char *)0x19;
  pppcStack_120 = (char ***)0xe18dd8;
  uVar7 = 0;
  ppcStack_124 = (char **)0x7c21f7;
  FUN_00409350();
  auStack_70[7] = 0x19;
  pppcStack_108 = (char ***)(param_1[0x75] + 0x2c);
  pcStack_11c = &stack0xfffffefc;
  pppcStack_120 = (char ***)0x7c221e;
  uVar16 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  *(undefined4 *)pcStack_10c = uVar16;
  auStack_70[6] = 0xffffffff;
  if (0xf < uVar7) {
    pppcStack_120 = pppcStack_108;
                    /* WARNING: Subroutine does not return */
    ppcStack_124 = (char **)&UNK_007c2240;
    FUN_00aae91b();
  }
  pppcStack_120 = (char ***)0x11;
  ppcStack_124 = (char **)0xe18e08;
  uVar7 = 0;
  pppcStack_108 = (char ***)((uint)pppcStack_108 & 0xffffff00);
  pppcStack_128 = (char ***)0x7c2264;
  FUN_00409350();
  auStack_70[6] = 0x1a;
  pcStack_10c = (char *)(param_1[0x75] + 0x30);
  pppcStack_120 = (char ***)&pppcStack_108;
  ppcStack_124 = (char **)0x7c228b;
  ppcVar15 = (char **)(**(code **)(*(int *)param_1[0x13] + 0x34))();
  *pppcStack_110 = ppcVar15;
  auStack_70[5] = 0xffffffff;
  if (0xf < uVar7) {
    ppcStack_124 = (char **)pcStack_10c;
                    /* WARNING: Subroutine does not return */
    pppcStack_128 = (char ***)&UNK_007c22ad;
    FUN_00aae91b();
  }
  ppcStack_124 = (char **)0x14;
  pppcStack_128 = (char ***)0xe18e30;
  uVar7 = 0;
  pcStack_10c = (char *)((uint)pcStack_10c & 0xffffff00);
  FUN_00409350();
  auStack_70[5] = 0x1b;
  pppcStack_110 = (char ***)(param_1[0x75] + 0x34);
  ppcStack_124 = &pcStack_10c;
  pppcStack_128 = (char ***)0x7c22f8;
  uVar16 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  *(undefined4 *)uStack_114 = uVar16;
  auStack_70[4] = 0xffffffff;
  if (0xf < uVar7) {
    pppcStack_128 = pppcStack_110;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pppcStack_128 = (char ***)0x18;
  uVar22 = 0xf;
  uVar7 = 0;
  pppcStack_110 = (char ***)((uint)pppcStack_110 & 0xffffff00);
  FUN_00409350("sortby_revoltrisk_button");
  auStack_70[4] = 0x1c;
  uStack_114 = (char *)(param_1[0x75] + 0x38);
  pppcStack_128 = (char ***)&pppcStack_110;
  uVar16 = (**(code **)(*(int *)param_1[0x13] + 0x34))();
  *(undefined4 *)pcStack_118 = uVar16;
  auStack_70[3] = 0xffffffff;
  if (0xf < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_114);
  }
  uVar7 = 0;
  uStack_114 = (char *)((uint)uStack_114 & 0xffffff00);
  FUN_00409350("sortby_change_button",0x14);
  auStack_70[3] = 0x1d;
  pcStack_118 = (char *)(param_1[0x75] + 0x3c);
  puVar19 = &uStack_114;
  uVar16 = (**(code **)(*(int *)param_1[0x13] + 0x34))(puVar19);
  *(undefined4 *)pcStack_11c = uVar16;
  auStack_70[2] = 0xffffffff;
  if (0xf < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pcStack_118);
  }
  pppcStack_108 = (char ***)0x0;
  pcStack_118 = (char *)((uint)pcStack_118 & 0xffffff00);
  FUN_00409350("sortby_literacy_button",0x16);
  auStack_70[2] = 0x1e;
  pcStack_11c = (char *)(param_1[0x75] + 0x40);
  pppcVar11 = (char ***)(**(code **)(*(int *)param_1[0x13] + 0x34))(&pcStack_118);
  *pppcStack_120 = (char **)pppcVar11;
  auStack_70[1] = 0xffffffff;
  if ((char ***)0xf < pppcStack_108) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pcStack_11c);
  }
  iVar6 = 0;
  do {
    (**(code **)(*(int *)(*(int *)(iVar6 + param_1[0x75]) + 0x54) + 4))(param_1 + 0x6a);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x44);
  pppcStack_108 = (char ***)0xf;
  pcStack_10c = (char *)0x0;
  pcStack_11c = (char *)((uint)pcStack_11c & 0xffffff00);
  FUN_00409350("pop_list",8);
  auStack_70[1] = 0x1f;
  iVar6 = (**(code **)(*(int *)param_1[0x13] + 0x6c))(&pcStack_11c);
  auStack_70[0] = 0xffffffff;
  param_1[0x62] = iVar6;
  if ((char *)0xf < pcStack_10c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pppcStack_120);
  }
  pcStack_10c = (char *)0xf;
  pppcStack_110 = (char ***)0x0;
  pppcStack_120 = (char ***)((uint)pppcStack_120 & 0xffffff00);
  FUN_00409350("external_scroll_slider",0x16);
  auStack_70[0] = 0x20;
  iVar6 = (**(code **)(*(int *)param_1[0x13] + 0x4c))(&pppcStack_120);
  ppuStack_74 = (uint **)0xffffffff;
  param_1[99] = iVar6;
  if ((char ***)0xf < pppcStack_110) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(ppcStack_124);
  }
  (**(code **)(*(int *)(param_1[99] + 0x54) + 4))(param_1 + 0x1f);
  uStack_114 = (char *)0xf;
  pcStack_118 = (char *)0x0;
  pppcStack_128 = (char ***)((uint)pppcStack_128 & 0xffffff00);
  FUN_00409350("popinfomember_popview",0x15);
  uStack_78 = 0x21;
  iVar6 = (**(code **)(*DAT_01258a80 + 0x48))(&pppcStack_128);
  uStack_7c = 0xffffffff;
  if (pcStack_118 < (char *)0x10) {
    pcStack_118 = (char *)0xf;
    pcStack_11c = (char *)0x0;
    uVar16 = *(undefined4 *)(iVar6 + 0xa8);
    iVar6 = *(int *)(iVar6 + 0xac);
    iVar17 = (**(code **)(*(int *)param_1[0x62] + 0x60))(&stack0xfffffefc);
    uStack_114 = (char *)0x0;
    piVar10 = param_1 + 0x17;
    param_1[100] = (int)*(short *)(iVar17 + 2) / iVar6;
    iVar6 = param_1[0x18] - *piVar10 >> 2;
    if (0 < iVar6) {
      do {
        puVar19 = *(undefined4 **)(*piVar10 + (int)uStack_114 * 4);
        if (puVar19 != (undefined4 *)0x0) {
          (**(code **)*puVar19)(1);
        }
        uStack_114 = (char *)((int)uStack_114 + 1);
      } while ((int)uStack_114 < iVar6);
    }
    FUN_0054ab90(piVar10,*piVar10,param_1[0x18]);
    pppcStack_110 = (char ***)0x0;
    uVar18 = extraout_ECX;
    if (0 < param_1[100]) {
      uStack_114 = (char *)((uint)uStack_114 & 0xffff0000);
      do {
        pppcVar11 = pppcStack_110;
        iVar6 = FUN_00aae9af(0x108);
        uStack_80 = 0x22;
        if (iVar6 == 0) {
          pcStack_10c = (char *)0x0;
        }
        else {
          if (DAT_01258a10 == (char ***)0x0) {
            pppcVar12 = (char ***)FUN_00aae9af(0x278);
            uStack_80._0_1_ = 0x23;
            pppcStack_108 = pppcVar12;
            if (pppcVar12 == (char ***)0x0) {
              DAT_01258a10 = (char ***)0x0;
            }
            else {
              FUN_00954a40(pppcVar12);
              *pppcVar12 = CNullPop::vftable;
              DAT_01258a10 = pppcVar12;
            }
            uStack_80 = CONCAT31(uStack_80._1_3_,0x22);
          }
          pcStack_10c = (char *)FUN_007ba0b0(iVar6,param_1);
        }
        uStack_80 = 0xffffffff;
        FUN_0068f390();
        piVar10 = (int *)(pcStack_10c + 0x1c);
        uStack_114 = (char *)CONCAT22((short)pppcVar11 * (short)uVar16,(undefined2)uStack_114);
        (**(code **)(*(int *)(pcStack_10c + 0x1c) + 8))(uStack_114);
        iVar6 = *piVar10;
        uVar18 = (**(code **)(*(int *)param_1[0x62] + 0x54))();
        (**(code **)(iVar6 + 0x44))(uVar18);
        (**(code **)(*piVar10 + 0x30))();
        pppcStack_110 = (char ***)((int)pppcStack_110 + 1);
        uVar18 = extraout_ECX_00;
      } while ((int)pppcStack_110 < param_1[100]);
    }
    iVar6 = param_1[99];
    FUN_00401000(0x3f000000,uVar18,0,1);
    uVar16 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar6 + 0x54) + 0x1c))(uVar16);
    if (*(char *)(param_1[0x13] + 0x67) != '\0') {
      (**(code **)(*(int *)(param_1[0x13] + 0x18) + 0x34))();
    }
    FUN_007c39a0();
    FUN_007c2860(param_1);
    piStack_e4 = (int *)0xf;
    puStack_e8 = (uint *)0x0;
    FUN_00409350("popview",7);
    apvStack_9c[4] = (void *)0x24;
    (**(code **)(*(int *)(param_1[0x13] + 0x18) + 0x78))(&stack0xffffff08);
    apvStack_9c[3] = (void *)0xffffffff;
    if (puStack_e8 < (uint *)0x10) {
      puStack_e8 = (uint *)0xf;
      ppuStack_ec = (uint **)0x0;
      (**(code **)(*(int *)(param_1[0x13] + 0x18) + 0x34))();
      (**(code **)(*param_1 + 0x10))();
      ExceptionList = apvStack_9c[1];
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar22);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar19);
}

