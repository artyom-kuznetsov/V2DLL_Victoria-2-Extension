// FUN_009373b0 @ 009373b0 body=[[009373b0, 0093751a] [0093751e, 0093780c] [00937810, 009378e2] [009378e6, 00937916] [0093791a, 00937945] [00937949, 00937974] [00937978, 009379a3] [009379a7, 009379cc] [009379d0, 009379f4] [009379f8, 00937b1e] [00937b22, 00937b57] [00937b5b, 00937b86] [00937b8a, 00937bb5] [00937bb9, 00937be4] [00937be8, 00937c0d] [00937c11, 00937c35] [00937c39, 00937d5e] [00937d62, 00937d97] [00937d9b, 00937dc6] [00937dca, 00937df5] [00937df9, 00937e24] [00937e28, 00937e4d] [00937e51, 0093804a] [0093804e, 00938147]]


undefined1 * FUN_009373b0(int param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined4 local_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  int local_128;
  int local_124;
  int local_120;
  uint local_11c [4];
  undefined4 local_10c;
  uint local_108;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined1 *local_f0;
  uint local_e8 [4];
  int local_d8;
  uint local_d4;
  int local_cc;
  int local_c8;
  uint local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  int local_a8;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b83cb6;
  local_14 = ExceptionList;
  local_100 = *param_3;
  local_f8 = *param_4;
  local_128 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x2c);
  local_120 = 1;
  if (iVar2 == local_128) {
LAB_00937429:
    local_100 = *param_4;
    local_f8 = *param_3;
    iVar7 = param_3[1];
    local_120 = -1;
    iVar8 = param_4[1];
  }
  else {
    do {
      if (*(int *)(iVar2 + 4) == param_3[1]) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != local_128);
    iVar7 = param_4[1];
    iVar8 = param_3[1];
    if (iVar2 == local_128) goto LAB_00937429;
  }
  bVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 4) == iVar8;
  iStack_14c = param_1 + 0x3c;
  bVar11 = *(int *)(*(int *)(param_1 + 0x3c) + 4) == iVar7;
  local_140 = CONCAT44(iVar8,local_100);
  local_148 = CONCAT44(iVar7,local_f8);
  iStack_150 = 0x93747b;
  ExceptionList = &local_14;
  local_fc = iVar8;
  local_f4 = iVar7;
  cVar1 = FUN_00936e70();
  if (cVar1 == '\x01') {
    local_140 = 0x1800e34dbc;
    local_108 = 0xf;
    local_10c = 0;
    local_11c[0] = local_11c[0] & 0xffffff00;
    local_148 = CONCAT44(0x9374a8,(undefined4)local_148);
    FUN_00409350();
    local_140 = CONCAT44(local_11c,&local_c4);
    local_c = 0;
    local_148 = CONCAT44(0x9374be,(undefined4)local_148);
    FUN_009a8ee0();
    local_c._0_1_ = 1;
    local_140 = CONCAT44(0x9374cd,(undefined4)local_140);
    iVar2 = FUN_00475500();
    local_148 = *(undefined8 *)(iVar2 + 0x6c);
    local_140 = *(undefined8 *)(iVar2 + 0x74);
    iStack_14c = 0x9374ef;
    FUN_009a9880();
    local_c = CONCAT31(local_c._1_3_,2);
  }
  else {
    local_140 = CONCAT44(iVar7,local_f8);
    local_148 = CONCAT44(iVar8,local_100);
    iStack_150 = 0x937554;
    iStack_14c = param_1 + 0x2c;
    cVar1 = FUN_00936e70();
    if (cVar1 != '\x01') {
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4 = local_c4 & 0xffffff00;
      local_c._0_1_ = 6;
      local_c._1_3_ = 0;
      if ((bVar10) && (bVar11)) {
        local_140 = CONCAT44(local_120,local_a4);
        local_148 = CONCAT44(param_1,0x93761f);
        uVar3 = FUN_00936c50();
        local_140 = 0xffffffff00000000;
        local_c._0_1_ = 7;
        local_148 = CONCAT44(uVar3,0x937638);
        FUN_00448aa0();
        local_c._0_1_ = 6;
        local_140 = CONCAT44(0x93764c,(undefined4)local_140);
        FUN_00408ad0();
      }
      iVar7 = DAT_012587e4;
      iVar2 = 0;
      local_124 = 0;
      if (bVar11) {
        for (puVar4 = *(undefined4 **)(param_1 + 0x3c);
            (*(undefined4 **)(param_1 + 0x3c) <= puVar4 &&
            (puVar4 < *(undefined4 **)(param_1 + 0x40))); puVar4 = puVar4 + 2) {
          local_f0 = (undefined1 *)*puVar4;
          local_124 = local_124 +
                      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar4[1] * 4) + 0xde4);
        }
      }
      else {
        local_124 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_f4 * 4) + 0xde4);
      }
      if (bVar10) {
        for (puVar4 = *(undefined4 **)(param_1 + 0x2c);
            (*(undefined4 **)(param_1 + 0x2c) <= puVar4 &&
            (puVar4 < *(undefined4 **)(param_1 + 0x30))); puVar4 = puVar4 + 2) {
          local_f0 = (undefined1 *)*puVar4;
          iVar2 = iVar2 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar4[1] * 4) + 0xde4);
        }
      }
      else {
        iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_fc * 4) + 0xde4);
      }
      local_a8 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_128 = 0;
      if (bVar11) {
        for (uVar9 = *(uint *)(param_1 + 0x3c);
            (*(uint *)(param_1 + 0x3c) <= uVar9 && (uVar9 < *(uint *)(param_1 + 0x40)));
            uVar9 = uVar9 + 8) {
          local_140 = CONCAT44(local_fc,local_100);
          local_148 = CONCAT44(&local_128,&local_c8);
          iStack_14c = local_124;
          local_15c = *(undefined4 *)
                       (*(int *)(*(int *)(iVar7 + 4) + *(int *)(uVar9 + 4) * 4) + 0x9e8);
          iStack_154 = -local_120;
          iStack_158 = param_1 + 0x2c;
          local_f0 = (undefined1 *)&local_15c;
          iStack_150 = iVar2;
          FUN_009368e0();
        }
      }
      else {
        local_140 = CONCAT44(local_fc,local_100);
        local_148 = CONCAT44(&local_128,&local_c8);
        iStack_154 = -local_120;
        iStack_158 = param_1 + 0x2c;
        local_f0 = (undefined1 *)&local_15c;
        local_15c = *(undefined4 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_f4 * 4) + 0x9e8);
        iStack_150 = iVar2;
        iStack_14c = local_124;
        FUN_009368e0();
      }
      if (bVar10) {
        for (puVar4 = *(undefined4 **)(param_1 + 0x2c);
            (*(undefined4 **)(param_1 + 0x2c) <= puVar4 &&
            (puVar4 < *(undefined4 **)(param_1 + 0x30))); puVar4 = puVar4 + 2) {
          local_100 = *puVar4;
          local_15c = *(undefined4 *)(*(int *)(*(int *)(iVar7 + 4) + puVar4[1] * 4) + 0x9e8);
          local_140 = CONCAT44(local_f4,local_f8);
          local_148 = CONCAT44(&local_cc,&local_a8);
          iStack_150 = local_124;
          iStack_158 = param_1 + 0x3c;
          iStack_154 = local_120;
          local_f0 = (undefined1 *)&local_15c;
          iStack_14c = iVar2;
          FUN_009368e0();
        }
      }
      else {
        local_140 = CONCAT44(local_f4,local_f8);
        local_148 = CONCAT44(&local_cc,&local_a8);
        iStack_150 = local_124;
        local_15c = *(undefined4 *)(*(int *)(*(int *)(iVar7 + 4) + local_fc * 4) + 0x9e8);
        iStack_154 = local_120;
        iStack_158 = param_1 + 0x3c;
        local_f0 = (undefined1 *)&local_15c;
        iStack_14c = iVar2;
        FUN_009368e0();
      }
      iVar2 = local_a8;
      if (local_a8 != 0) {
        local_140 = 0x300dfd76c;
        local_d4 = 0xf;
        local_d8 = 0;
        local_e8[0] = local_e8[0] & 0xffffff00;
        local_148 = CONCAT44(0x9377e3,(undefined4)local_148);
        FUN_00409350();
        local_c._0_1_ = 8;
        pcVar6 = &DAT_00dfd24c;
        if (iVar2 < 1) {
          pcVar6 = &DAT_00df8510;
        }
        local_108 = 0xf;
        local_10c = 0;
        local_11c[0] = local_11c[0] & 0xffffff00;
        pcVar5 = pcVar6;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        local_140 = CONCAT44((int)pcVar5 - (int)(pcVar6 + 1),pcVar6);
        local_148 = CONCAT44(0x937824,(undefined4)local_148);
        FUN_00409350();
        local_f0 = (undefined1 *)&local_140;
        local_c._0_1_ = 9;
        local_140 = CONCAT44(2,iVar2);
        local_148 = CONCAT44(local_a4,0x937844);
        uVar3 = FUN_00988a50();
        local_c._0_1_ = 10;
        local_140 = CONCAT44(local_88,0x937860);
        FUN_00475d50();
        local_c._0_1_ = 0xb;
        local_140 = CONCAT44(local_11c,0x93787e);
        FUN_00988f20();
        local_c._0_1_ = 0xc;
        local_140 = CONCAT44(uVar3,0x937895);
        FUN_00988f20();
        local_c._0_1_ = 0xd;
        local_140 = CONCAT44(local_e8,0x9378b0);
        uVar3 = FUN_00988f20();
        local_140 = 0xffffffff00000000;
        local_c._0_1_ = 0xe;
        local_148 = CONCAT44(uVar3,0x9378c8);
        FUN_00448aa0();
        if (0xf < local_58) {
          local_140 = CONCAT44(local_6c[0],&UNK_009378e3);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_3c) {
          local_140 = CONCAT44(local_50[0],&UNK_00937917);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        if (0xf < local_20) {
          local_140 = CONCAT44(local_34,&UNK_00937946);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34 = local_34 & 0xffffff00;
        if (0xf < local_74) {
          local_140 = CONCAT44(local_88[0],&UNK_00937975);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88[0] = local_88[0] & 0xffffff00;
        if (0xf < local_90) {
          local_140 = CONCAT44(local_a4[0],&UNK_009379a4);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        if (0xf < local_108) {
          local_140 = CONCAT44(local_11c[0],&UNK_009379cd);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c._0_1_ = 6;
        local_108 = 0xf;
        local_10c = 0;
        local_11c[0] = local_11c[0] & 0xffffff00;
        if (0xf < local_d4) {
          local_140 = CONCAT44(local_e8[0],&UNK_009379f5);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      iVar2 = local_c8;
      if (local_c8 != 0) {
        local_140 = 0x300dfd76c;
        local_d4 = 0xf;
        local_d8 = 0;
        local_e8[0] = local_e8[0] & 0xffffff00;
        local_148 = CONCAT44(0x937a26,(undefined4)local_148);
        FUN_00409350();
        local_c._0_1_ = 0xf;
        pcVar6 = &DAT_00dfd24c;
        if (iVar2 < 1) {
          pcVar6 = &DAT_00df8510;
        }
        local_108 = 0xf;
        local_10c = 0;
        local_11c[0] = local_11c[0] & 0xffffff00;
        pcVar5 = pcVar6;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        local_140 = CONCAT44((int)pcVar5 - (int)(pcVar6 + 1),pcVar6);
        local_148 = CONCAT44(0x937a64,(undefined4)local_148);
        FUN_00409350();
        local_f0 = (undefined1 *)&local_140;
        local_c._0_1_ = 0x10;
        local_140 = CONCAT44(2,iVar2);
        local_148 = CONCAT44(local_6c,0x937a84);
        uVar3 = FUN_00988a50();
        local_c._0_1_ = 0x11;
        local_140 = CONCAT44(local_50,0x937aa0);
        FUN_00475d50();
        local_c._0_1_ = 0x12;
        local_140 = CONCAT44(local_11c,0x937abe);
        FUN_00988f20();
        local_c._0_1_ = 0x13;
        local_140 = CONCAT44(uVar3,0x937ad5);
        FUN_00988f20();
        local_c._0_1_ = 0x14;
        local_140 = CONCAT44(local_e8,0x937af0);
        uVar3 = FUN_00988f20();
        local_140 = 0xffffffff00000000;
        local_c._0_1_ = 0x15;
        local_148 = CONCAT44(uVar3,0x937b08);
        FUN_00448aa0();
        if (0xf < local_90) {
          local_140 = CONCAT44(local_a4[0],&UNK_00937b1f);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        if (0xf < local_74) {
          local_140 = CONCAT44(local_88[0],&UNK_00937b58);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88[0] = local_88[0] & 0xffffff00;
        if (0xf < local_20) {
          local_140 = CONCAT44(local_34,&UNK_00937b87);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34 = local_34 & 0xffffff00;
        if (0xf < local_3c) {
          local_140 = CONCAT44(local_50[0],&UNK_00937bb6);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        if (0xf < local_58) {
          local_140 = CONCAT44(local_6c[0],&UNK_00937be5);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_108) {
          local_140 = CONCAT44(local_11c[0],&UNK_00937c0e);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c._0_1_ = 6;
        local_108 = 0xf;
        local_10c = 0;
        local_11c[0] = local_11c[0] & 0xffffff00;
        if (0xf < local_d4) {
          local_140 = CONCAT44(local_e8[0],&UNK_00937c36);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      iVar2 = local_cc;
      if (local_cc != 0) {
        local_140 = 0x300dfd76c;
        local_d4 = 0xf;
        local_d8 = 0;
        local_e8[0] = local_e8[0] & 0xffffff00;
        local_148 = CONCAT44(0x937c67,(undefined4)local_148);
        FUN_00409350();
        local_c._0_1_ = 0x16;
        pcVar6 = &DAT_00dfd24c;
        if (iVar2 < 1) {
          pcVar6 = &DAT_00df8510;
        }
        local_108 = 0xf;
        local_10c = 0;
        local_11c[0] = local_11c[0] & 0xffffff00;
        pcVar5 = pcVar6;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        local_140 = CONCAT44((int)pcVar5 - (int)(pcVar6 + 1),pcVar6);
        local_148 = CONCAT44(0x937ca4,(undefined4)local_148);
        FUN_00409350();
        local_f0 = (undefined1 *)&local_140;
        local_c._0_1_ = 0x17;
        local_140 = CONCAT44(2,iVar2);
        local_148 = CONCAT44(local_6c,0x937cc4);
        uVar3 = FUN_00988a50();
        local_c._0_1_ = 0x18;
        local_140 = CONCAT44(local_50,0x937ce0);
        FUN_00475d50();
        local_c._0_1_ = 0x19;
        local_140 = CONCAT44(local_11c,0x937cfe);
        FUN_00988f20();
        local_c._0_1_ = 0x1a;
        local_140 = CONCAT44(uVar3,0x937d15);
        FUN_00988f20();
        local_c._0_1_ = 0x1b;
        local_140 = CONCAT44(local_e8,0x937d30);
        uVar3 = FUN_00988f20();
        local_140 = 0xffffffff00000000;
        local_c._0_1_ = 0x1c;
        local_148 = CONCAT44(uVar3,0x937d48);
        FUN_00448aa0();
        if (0xf < local_90) {
          local_140 = CONCAT44(local_a4[0],&UNK_00937d5f);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        if (0xf < local_74) {
          local_140 = CONCAT44(local_88[0],&UNK_00937d98);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88[0] = local_88[0] & 0xffffff00;
        if (0xf < local_20) {
          local_140 = CONCAT44(local_34,&UNK_00937dc7);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34 = local_34 & 0xffffff00;
        if (0xf < local_3c) {
          local_140 = CONCAT44(local_50[0],&UNK_00937df6);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        if (0xf < local_58) {
          local_140 = CONCAT44(local_6c[0],&UNK_00937e25);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_108) {
          local_140 = CONCAT44(local_11c[0],&UNK_00937e4e);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_108 = 0xf;
        local_10c = 0;
        local_11c[0] = local_11c[0] & 0xffffff00;
        local_c._0_1_ = 6;
        local_140 = CONCAT44(0x937e6f,(undefined4)local_140);
        FUN_00408ad0();
      }
      iVar2 = local_128;
      if (local_128 != 0) {
        local_140 = CONCAT44(0x937e8c,(undefined4)local_140);
        FUN_009885d0();
        local_c._0_1_ = 0x1d;
        local_140 = CONCAT44(0x937eae,(undefined4)local_140);
        FUN_009885d0();
        local_f0 = (undefined1 *)&local_140;
        local_c._0_1_ = 0x1e;
        local_140 = CONCAT44(2,iVar2);
        local_148 = CONCAT44(local_11c,0x937ecb);
        uVar3 = FUN_00988a50();
        local_c._0_1_ = 0x1f;
        local_140 = CONCAT44(local_e8,0x937ee4);
        FUN_00475d50();
        local_c._0_1_ = 0x20;
        local_140 = CONCAT44(local_a4,0x937f00);
        FUN_00988f20();
        local_c._0_1_ = 0x21;
        local_140 = CONCAT44(uVar3,0x937f17);
        FUN_00988f20();
        local_c._0_1_ = 0x22;
        local_140 = CONCAT44(local_88,0x937f35);
        uVar3 = FUN_00988f20();
        local_140 = 0xffffffff00000000;
        local_c._0_1_ = 0x23;
        local_148 = CONCAT44(uVar3,0x937f4d);
        FUN_00448aa0();
        local_140 = CONCAT44(0x937f54,(undefined4)local_140);
        FUN_00408ad0();
        local_140 = CONCAT44(0x937f60,(undefined4)local_140);
        FUN_00408ad0();
        local_140 = CONCAT44(0x937f6c,(undefined4)local_140);
        FUN_00408ad0();
        local_140 = CONCAT44(0x937f75,(undefined4)local_140);
        FUN_00408ad0();
        local_140 = CONCAT44(0x937f7e,(undefined4)local_140);
        FUN_00408ad0();
        local_140 = CONCAT44(0x937f8a,(undefined4)local_140);
        FUN_00408ad0();
        local_140 = CONCAT44(0x937f96,(undefined4)local_140);
        FUN_00408ad0();
      }
      local_d4 = 0xf;
      local_d8 = 0;
      local_e8[0] = local_e8[0] & 0xffffff00;
      local_140 = CONCAT44(1,local_e8);
      local_148 = CONCAT44(param_4,param_3);
      iStack_14c = param_1;
      local_c._0_1_ = 0x24;
      iStack_150 = 0x937fc8;
      FUN_0093ca90();
      if (local_d8 != 0) {
        local_140 = CONCAT44(local_e8,0x937fe4);
        uVar3 = FUN_00988fa0();
        local_140 = 0xffffffff00000000;
        local_c._0_1_ = 0x25;
        local_148 = CONCAT44(uVar3,0x937fff);
        FUN_00448aa0();
        local_140 = CONCAT44(0x93800b,(undefined4)local_140);
        FUN_00408ad0();
      }
      local_c = CONCAT31(local_c._1_3_,6);
      local_140 = CONCAT44(0x93801c,(undefined4)local_140);
      FUN_00408ad0();
      local_140 = 0xffffffff00000000;
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      local_148 = CONCAT44(&local_c4,0x938037);
      FUN_00408ed0();
      if (local_b0 < 0x10) {
        ExceptionList = local_14;
        return param_2;
      }
      local_140._4_4_ = local_c4;
      goto LAB_00938046;
    }
    local_140 = 0x1800e34dbc;
    local_108 = 0xf;
    local_10c = 0;
    local_11c[0] = local_11c[0] & 0xffffff00;
    local_148 = CONCAT44(0x93757d,(undefined4)local_148);
    FUN_00409350();
    local_140 = CONCAT44(local_11c,&local_c4);
    local_c = 3;
    local_148 = CONCAT44(0x937597,(undefined4)local_148);
    FUN_009a8ee0();
    local_c._0_1_ = 4;
    local_140 = CONCAT44(0x9375a6,(undefined4)local_140);
    iVar2 = FUN_00475500();
    local_148 = *(undefined8 *)(iVar2 + 0x6c);
    local_140 = *(undefined8 *)(iVar2 + 0x74);
    iStack_14c = 0x9375c8;
    FUN_009a9880();
    local_c = CONCAT31(local_c._1_3_,5);
  }
  local_140 = CONCAT44(0x937500,(undefined4)local_140);
  FUN_009adb70();
  if (local_c0 != 0) {
    local_140 = CONCAT44(0x937511,(undefined4)local_140);
    FUN_009e6a80();
    local_140 = CONCAT44(local_c0,&UNK_0093751b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  if (local_108 < 0x10) {
    ExceptionList = local_14;
    return param_2;
  }
  local_140._4_4_ = local_11c[0];
LAB_00938046:
  local_140 = CONCAT44(local_140._4_4_,&UNK_0093804b);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

