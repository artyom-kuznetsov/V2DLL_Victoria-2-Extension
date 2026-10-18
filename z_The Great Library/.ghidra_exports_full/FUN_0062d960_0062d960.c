// FUN_0062d960 @ 0062d960 body=[[0062d960, 0062da0f] [0062da13, 0062da93] [0062da97, 0062db02] [0062db06, 0062dbe0] [0062dbe4, 0062dc7e] [0062dc82, 0062dd3b] [0062dd3f, 0062de2e] [0062de32, 0062df99] [0062df9d, 0062e000] [0062e004, 0062e0bb] [0062e0bf, 0062e149] [0062e14d, 0062e1ae] [0062e1b2, 0062e233] [0062e237, 0062e263] [0062e267, 0062e2dd] [0062e2e1, 0062e350] [0062e354, 0062e3f0] [0062e3f4, 0062e422] [0062e426, 0062e43c]]


/* WARNING: Removing unreachable block (ram,0x0062e25a) */
/* WARNING: Removing unreachable block (ram,0x0062e347) */
/* WARNING: Removing unreachable block (ram,0x0062e1a5) */

void FUN_0062d960(int param_1)

{
  short sVar1;
  uint *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  short *psVar7;
  int *piVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined4 uVar11;
  int iVar12;
  int *unaff_ESI;
  uint unaff_EDI;
  uint *puStack_144;
  char *pcStack_140;
  undefined4 *puStack_13c;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 uStack_12c;
  char *pcStack_128;
  char *pcStack_124;
  char *pcStack_120;
  undefined1 *puStack_11c;
  uint uStack_10c;
  uint uStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  int local_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined4 *puStack_e0;
  undefined4 uStack_dc;
  int *piStack_d8;
  undefined4 auStack_d4 [2];
  int *piStack_cc;
  int iStack_c8;
  int *piStack_c4;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  uint uStack_a0;
  undefined1 auStack_9c [12];
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  uint uStack_80;
  undefined1 local_7c [12];
  undefined4 uStack_70;
  uint local_6c;
  undefined4 local_68;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  char acStack_54 [12];
  uint uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8c888;
  local_14 = ExceptionList;
  local_f0 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (local_f0 != 0) {
    puStack_11c = (undefined1 *)0xf;
    pcStack_120 = "crisis_info_win";
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = 0;
    pcStack_124 = (char *)0x62d9cc;
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    puStack_11c = local_7c;
    pcStack_120 = (char *)0x62d9e8;
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))();
    puStack_10 = (undefined1 *)0xffffffff;
    piStack_c4 = piVar4;
    if (0xf < local_6c) {
      pcStack_120 = (char *)uStack_80;
                    /* WARNING: Subroutine does not return */
      pcStack_124 = &UNK_0062da10;
      FUN_00aae91b();
    }
    pcStack_120 = (char *)0x11;
    pcStack_124 = "fence_sitters_win";
    local_6c = 0xf;
    uStack_70 = 0;
    uStack_80 = uStack_80 & 0xffffff00;
    uStack_88 = 0xf;
    uStack_8c = 0;
    auStack_9c[0] = 0;
    pcStack_128 = (char *)0x62da50;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x1;
    pcStack_120 = auStack_9c;
    pcStack_124 = (char *)0x62da6c;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x6c))();
    local_14 = (void *)0xffffffff;
    piStack_cc = piVar4;
    if (0xf < uStack_8c) {
      pcStack_124 = (char *)uStack_a0;
                    /* WARNING: Subroutine does not return */
      pcStack_128 = &UNK_0062da94;
      FUN_00aae91b();
    }
    pcStack_124 = (char *)0x2e;
    pcStack_128 = "diplomacy_crisis_fence_countpercol_and_xoffset";
    uStack_8c = 0xf;
    uStack_90 = 0;
    uStack_a0 = uStack_a0 & 0xffffff00;
    auStack_d4[0] = 0xf;
    piStack_d8 = (int *)0x0;
    uStack_e8 = uStack_e8 & 0xffffff00;
    uStack_12c._0_3_ = 0x62dac8;
    uStack_12c._3_1_ = '\0';
    FUN_00409350();
    local_14 = (void *)0x2;
    pcStack_124 = (char *)&uStack_e8;
    pcStack_128 = (char *)0x62dae5;
    iVar5 = (**(code **)(*DAT_01258a80 + 0x48))();
    uStack_18 = 0xffffffff;
    if (0xf < piStack_d8) {
      pcStack_128 = (char *)uStack_ec;
                    /* WARNING: Subroutine does not return */
      uStack_12c = &UNK_0062db03;
      FUN_00aae91b();
    }
    piStack_d8 = (int *)0xf;
    uStack_dc = 0;
    uStack_ec = uStack_ec & 0xffffff00;
    uStack_b4 = *(undefined4 *)(iVar5 + 100);
    uStack_b0 = *(undefined4 *)(iVar5 + 0x68);
    pcStack_128 = (char *)0x62db30;
    (**(code **)(*piVar4 + 0x94))();
    pcStack_128 = (char *)0x62db3c;
    (**(code **)(*piVar4 + 0x90))();
    pcStack_128 = (char *)0x62db48;
    (**(code **)(*piVar4 + 0x88))();
    uStack_f8 = 0;
    iStack_c8 = *(int *)(iStack_fc + 0x50) - *(int *)(iStack_fc + 0x4c) >> 3;
    if (0 < iStack_c8) {
      iStack_ac = param_1 + 0xf4;
      iStack_a8 = param_1 + 0x304;
      do {
        pcStack_128 = (char *)0x12;
        uStack_12c = "fence_sitter_entry";
        piStack_d8 = (int *)0xf;
        uStack_dc = 0;
        uStack_ec = uStack_ec & 0xffffff00;
        FUN_00409350();
        uStack_18 = 3;
        iVar5 = *DAT_01258a80;
        pcStack_128 = (char *)0x62dbc1;
        pcStack_128 = (char *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
        uStack_12c = (char *)&uStack_ec;
        piVar4 = (int *)(**(code **)(iVar5 + 0x2c))();
        if ((undefined4 *)0xf < puStack_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puStack_e0 = (undefined4 *)0xf;
        uStack_e4 = 0;
        uStack_f4 = uStack_f4 & 0xffffff00;
        uStack_10c = 0xf;
        pcStack_120 = (char *)((uint)pcStack_120 & 0xffffff00);
        uStack_20 = 4;
        puStack_13c = (undefined4 *)0x62dc20;
        pcVar6 = __itoa(iStack_100,acStack_54,10);
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        FUN_00409350();
        uStack_20 = 5;
        (**(code **)(*piStack_d8 + 0xbc))();
        uStack_28 = 0xffffffff;
        if ((int *)0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
          puStack_13c = (undefined4 *)&UNK_0062dc7f;
          FUN_00aae91b();
        }
        puVar13 = local_7c;
        puStack_13c = (undefined4 *)0x62dc93;
        psVar7 = (short *)(**(code **)(*piVar4 + 0x60))();
        sVar1 = *psVar7;
        iStack_104 = 0xf / iStack_c8;
        iVar12 = 0xf % iStack_c8;
        puStack_13c = auStack_d4;
        pcStack_140 = (char *)0x62dcb4;
        iVar5 = (**(code **)(*piVar4 + 0x60))();
        uStack_dc = CONCAT22(*(short *)(iVar5 + 2) * (short)uStack_108,sVar1 * (short)iVar12);
        pcStack_140 = (char *)uStack_dc;
        puStack_144 = (uint *)0x62dcd5;
        (**(code **)(*piVar4 + 0x18))();
        puStack_144 = (uint *)0x62dce5;
        (**(code **)(*(int *)piVar4[0x125] + 0xb0))();
        puStack_144 = (uint *)0xc;
        pcStack_120 = (undefined1 *)0xf;
        pcStack_124 = (char *)0x0;
        FUN_00409350("country_flag");
        uStack_34 = 6;
        puStack_144 = (uint *)&stack0xfffffecc;
        piVar8 = (int *)(**(code **)(*piVar4 + 0x34))();
        uStack_38 = 0xffffffff;
        if (0xf < pcStack_124) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar13);
        }
        uVar11 = *(undefined4 *)(unaff_EDI * 8 + 4 + *(int *)(puStack_11c + 0x4c));
        pcStack_124 = (char *)0xf;
        pcStack_128 = (char *)0x0;
        (**(code **)(*piVar8 + 0xd4))(uVar11);
        unaff_ESI = (int *)(**(code **)(*piVar8 + 0xec))();
        puStack_e0 = (undefined4 *)(*unaff_ESI + 0x150);
        uVar9 = FUN_0052fc10();
        (*(code *)*puStack_e0)(uVar9);
        (**(code **)(piVar8[0x15] + 4))(auStack_d4[0]);
        uVar14 = 0;
        puStack_144 = (uint *)((uint)puStack_144 & 0xffffff00);
        FUN_00409350("make_offer",10);
        uStack_44 = 7;
        piVar4 = (int *)(**(code **)(*piVar4 + 0x34))(&puStack_144);
        puVar2 = (uint *)uStack_12c;
        uStack_48 = 0xffffffff;
        if (0xf < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uVar11);
        }
        uStack_ec = (int)pcStack_128 * 8;
        (**(code **)(*piVar4 + 0xd4))
                  (*(undefined4 *)(uStack_ec + 4 + *(uint *)((int)uStack_12c + 0x4c)));
        (**(code **)(piVar4[0x15] + 4))(uStack_dc);
        cVar3 = FUN_00425ed0(DAT_012588e8 + 0xb5c,puVar2[0x13] + uStack_f4);
        pcStack_128 = *(char **)(DAT_012588e8 + 0xb0c);
        uStack_12c._3_1_ = cVar3;
        iVar5 = FUN_00425a40();
        if (*(int *)(iVar5 + 4) == *(int *)(DAT_012588e8 + 0xb60)) {
          uVar14 = puVar2[0x2a];
        }
        else {
          uVar14 = puVar2[0x2b];
        }
        if (((char *)uVar14 == pcStack_128) || (uStack_12c._3_1_ == '\0')) {
          pcVar10 = *(code **)(*piVar4 + 0xbc);
        }
        else {
          pcVar10 = *(code **)(*piVar4 + 0xb8);
        }
        (*pcVar10)();
        uStack_f8 = uStack_f8 + 1;
      } while ((int)uStack_f8 < iStack_c8);
    }
    pcStack_128 = (char *)0x62df22;
    cVar3 = FUN_00425b40();
    if (cVar3 != '\0') {
      pcStack_128 = (char *)0x17;
      uStack_12c = "join_fence_sitter_entry";
      iStack_104 = 0xf;
      uStack_108 = 0;
      unaff_EDI = unaff_EDI & 0xffffff00;
      FUN_00409350();
      uStack_18 = 8;
      iVar5 = *DAT_01258a80;
      pcStack_128 = (char *)0x62df70;
      pcStack_128 = (char *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
      uStack_12c = &stack0xfffffee8;
      piVar4 = (int *)(**(code **)(iVar5 + 0x2c))();
      uStack_20 = 0xffffffff;
      if (0xf < uStack_10c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pcStack_120 = (char *)((uint)pcStack_120 & 0xffffff00);
      puStack_e0 = (undefined4 *)0xf;
      uStack_e4 = 0;
      uStack_f4 = uStack_f4 & 0xffffff00;
      FUN_00409350();
      uStack_20 = 9;
      (**(code **)(*piStack_d8 + 0xbc))();
      uStack_28 = 0xffffffff;
      if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
        puStack_13c = (undefined4 *)&UNK_0062e001;
        FUN_00aae91b();
      }
      puStack_13c = (undefined4 *)0x62e012;
      psVar7 = (short *)(**(code **)(*piVar4 + 0x60))();
      sVar1 = *psVar7;
      uStack_dc = 0xf / iStack_c8;
      iVar12 = 0xf % iStack_c8;
      puStack_13c = auStack_d4;
      pcStack_140 = (char *)0x62e033;
      iVar5 = (**(code **)(*piVar4 + 0x60))();
      uStack_e8 = CONCAT22(*(short *)(iVar5 + 2) * (short)puStack_e0,sVar1 * (short)iVar12);
      pcStack_140 = (char *)uStack_e8;
      puStack_144 = (uint *)0x62e054;
      (**(code **)(*piVar4 + 0x18))();
      puStack_144 = (uint *)0x62e064;
      (**(code **)(*(int *)piVar4[0x125] + 0xb0))();
      puStack_144 = (uint *)0xb;
      uStack_f4 = 0xf;
      uStack_f8 = 0;
      uStack_108 = uStack_108 & 0xffffff00;
      FUN_00409350("join_button");
      uStack_34 = 10;
      puStack_144 = &uStack_108;
      iVar5 = (**(code **)(*piVar4 + 0x34))();
      uStack_38 = 0xffffffff;
      if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(0xf);
      }
      uStack_f8 = 0xf;
      iStack_fc = 0;
      (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x2d8);
    }
    pcStack_128 = (char *)0xc;
    uStack_12c = "defender_win";
    iStack_104 = 0xf;
    uStack_108 = 0;
    FUN_00409350();
    piVar4 = piStack_cc;
    pcStack_128 = (char *)0x0;
    uStack_18 = 0xb;
    uStack_12c = (char *)iStack_fc;
    (**(code **)(*piStack_cc + 0x6c))();
    puStack_13c = (undefined4 *)0x62e12e;
    FUN_0062e440();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_108) {
      uStack_12c = puStack_11c;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_12c = (char *)0xc;
    uStack_108 = 0xf;
    puStack_11c = (undefined1 *)((uint)puStack_11c & 0xffffff00);
    FUN_00409350();
    uStack_12c = (char *)0x1;
    uStack_1c = 0xc;
    (**(code **)(*piVar4 + 0x6c))();
    puStack_13c = (undefined4 *)param_1;
    pcStack_140 = (char *)0x62e193;
    FUN_0062e440();
    uStack_20 = 0xffffffff;
    pcStack_120 = (char *)((uint)pcStack_120 & 0xffffff00);
    FUN_00409350();
    uStack_20 = 0xd;
    uVar11 = FUN_00429c70();
    uStack_20 = CONCAT31(uStack_20._1_3_,0xe);
    piStack_d8 = (int *)(**(code **)(*piVar4 + 0x3c))();
    pcStack_140 = (char *)0x62e212;
    puStack_13c = (undefined4 *)uVar11;
    FUN_00408ed0();
    puStack_13c = (undefined4 *)0x62e223;
    FUN_00a5ecc0();
    if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_24 = 0xffffffff;
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    uStack_f8 = uStack_f8 & 0xffffff00;
    pcStack_124 = (char *)((uint)pcStack_124 & 0xffffff00);
    puStack_13c = (undefined4 *)0x62e283;
    FUN_00409350();
    uStack_24 = 0xf;
    iVar5 = (**(code **)(*piVar4 + 0x44))();
    puStack_13c = (undefined4 *)0x62e2be;
    (**(code **)(**(int **)(iVar5 + 0x94) + 0x60))();
    uStack_2c = 0xffffffff;
    if (0xf < (unaff_EDI & 0xffffff00)) {
      puStack_13c = (undefined4 *)uStack_12c;
                    /* WARNING: Subroutine does not return */
      pcStack_140 = &UNK_0062e2de;
      FUN_00aae91b();
    }
    puStack_13c = (undefined4 *)0x62e2ea;
    cVar3 = FUN_00429b30();
    if (cVar3 != '\0') {
      puStack_13c = (undefined4 *)0x13;
      pcStack_140 = "crisis_status_label";
      puStack_11c = (undefined1 *)0x0;
      uStack_12c = (char *)((uint)uStack_12c & 0xffffff00);
      puStack_144 = (uint *)0x62e30e;
      FUN_00409350();
      uStack_2c = 0x10;
      puStack_13c = &uStack_12c;
      pcStack_140 = (char *)0x62e323;
      piVar8 = (int *)(**(code **)(*piVar4 + 0x3c))();
      pcStack_140 = (char *)0x62e32e;
      (**(code **)(*piVar8 + 0x38))();
      *(undefined1 *)(piVar8 + 0x40) = 1;
      uStack_2c = 0xffffffff;
    }
    puStack_13c = (undefined4 *)0x10;
    pcStack_140 = "crisis_sub_title";
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = 0;
    puStack_144 = (uint *)0x62e380;
    FUN_00409350();
    puStack_13c = (undefined4 *)auStack_60;
    pcStack_140 = (char *)0xf;
    uStack_2c = 0x11;
    puStack_144 = (uint *)0x62e39d;
    uVar11 = FUN_00429d90();
    uStack_2c = CONCAT31(uStack_2c._1_3_,0x12);
    puStack_13c = (undefined4 *)local_7c;
    pcStack_140 = (char *)0x62e3b8;
    (**(code **)(*piVar4 + 0x3c))();
    puStack_11c = (undefined1 *)0xffffffff;
    pcStack_120 = (char *)0x0;
    pcStack_128 = (char *)0x62e3c9;
    pcStack_124 = (char *)uVar11;
    FUN_00408ed0();
    puStack_11c = (undefined1 *)0x0;
    pcStack_124 = (char *)0x62e3d6;
    pcStack_120 = (char *)uVar11;
    FUN_00a5ecc0();
    if (0xf < uStack_2c) {
      puStack_11c = (undefined1 *)uStack_40;
                    /* WARNING: Subroutine does not return */
      pcStack_120 = &UNK_0062e3f1;
      FUN_00aae91b();
    }
    uStack_2c = 0xf;
    uStack_30 = 0;
    uStack_40 = uStack_40 & 0xffffff00;
    if (0xf < uStack_48) {
      puStack_11c = (undefined1 *)uStack_5c;
                    /* WARNING: Subroutine does not return */
      pcStack_120 = &UNK_0062e423;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

