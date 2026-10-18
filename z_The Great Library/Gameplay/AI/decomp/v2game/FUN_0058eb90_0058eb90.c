// FUN_0058eb90 @ 0058eb90 body=[[0058eb90, 0058ee4c] [0058ee50, 0058ee79] [0058ee80, 0058eec8] [0058eed0, 0058f309] [0058f30d, 0058f338] [0058f33c, 0058f361] [0058f365, 0058f38b] [0058f38f, 0058f4e8] [0058f4ec, 0058f517] [0058f51b, 0058f540] [0058f544, 0058f56a] [0058f56e, 0058f6c4] [0058f6c8, 0058f6f3] [0058f6f7, 0058f71c] [0058f720, 0058f746] [0058f74a, 0058f91a] [0058f91e, 0058f945] [0058f949, 0058fb16] [0058fb1a, 0058fb41] [0058fb45, 0058fb79] [0058fb7d, 0058fb91]]


void FUN_0058eb90(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint in_ECX;
  undefined4 unaff_ESI;
  undefined8 uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_1cc [112];
  undefined4 uStack_15c;
  uint *puStack_158;
  uint *puStack_154;
  uint *puStack_150;
  uint *puStack_14c;
  undefined8 uStack_148;
  int *piStack_134;
  int local_128;
  int local_124;
  undefined8 uStack_120;
  uint local_118;
  uint local_114;
  uint local_110 [2];
  undefined4 uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint auStack_f4 [2];
  undefined4 uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 *puStack_e0;
  int iStack_d4;
  undefined8 local_d0;
  uint auStack_c8 [2];
  undefined4 uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint auStack_ac [2];
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb4166;
  pvStack_14 = ExceptionList;
  local_d0._0_4_ = *(int **)(in_ECX + 0x3c);
  local_124 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  iVar7 = *(int *)(*(int *)(in_ECX + 0x48) + 0x50);
  iVar2 = *(int *)(*(int *)(*(int *)(local_124 + 0x860) +
                           *(int *)(*(int *)(in_ECX + 0x44) + 0x50) * 4) + 0x50);
  iVar3 = *(int *)(DAT_012586dc + 0x50);
  puStack_14c = (uint *)(*(int *)(iVar3 + 0xe4) << 0xf | *(uint *)(iVar3 + 0xe0) >> 0x11);
  uStack_148._4_4_ = (undefined1 *)0x0;
  uStack_148._0_4_ = (uint *)0x320000;
  puStack_150 = (uint *)(*(uint *)(iVar3 + 0xe0) << 0xf);
  puStack_154 = (uint *)0x58ec26;
  ExceptionList = &pvStack_14;
  local_114 = in_ECX;
  local_80 = __alldiv();
  puStack_14c = (uint *)(*(int *)(iVar3 + 0xac) << 0xf | *(uint *)(iVar3 + 0xa8) >> 0x11);
  uStack_148._4_4_ = (undefined1 *)0x0;
  uStack_148._0_4_ = (uint *)0x320000;
  puStack_150 = (uint *)(*(uint *)(iVar3 + 0xa8) << 0xf);
  puStack_154 = (uint *)0x58ec54;
  local_78 = __alldiv();
  uVar4 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x94);
  puStack_14c = (uint *)((((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf |
                        (uVar4 & 0x1ffff) >> 2);
  uStack_148._4_4_ = (undefined1 *)0x0;
  uStack_148._0_4_ = (uint *)0x1f40000;
  puStack_150 = (uint *)(uVar4 << 0x1e);
  puStack_154 = (uint *)0x58ec8d;
  local_88 = __alldiv();
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  uStack_148._4_4_ = (undefined1 *)0x1;
  local_c = 0;
  uStack_148._0_4_ = (uint *)0x58ecc5;
  FUN_008a8650();
  local_54 = *(undefined4 *)(in_ECX + 0x40);
  local_58 = *(undefined4 *)(in_ECX + 0x3c);
  local_110[0] = DAT_01258a3c;
  local_118 = 0;
  if (0 < (int)(*(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) & 0xfffffffcU)) {
    do {
      iVar3 = *(int *)(*(int *)(local_110[0] + 0xc) + local_118 * 4);
      if (iVar2 < iVar7) {
        uStack_148._4_4_ = local_60;
        uStack_148._0_4_ = (uint *)&local_128;
        puStack_14c = (uint *)0x58ed23;
        piVar6 = (int *)(**(code **)(*(int *)(iVar3 + 0x50) + 0x18))();
        iVar3 = *piVar6;
        puStack_14c = (uint *)(((-iVar3 >> 0x1f) << 0xf | (uint)-iVar3 >> 0x11) << 0xf |
                              (uint)(iVar3 * -0x8000) >> 0x11);
        uStack_148._4_4_ = (undefined1 *)0x0;
        uStack_148._0_4_ = (uint *)0x1f40000;
        puStack_150 = (uint *)(iVar3 * -0x40000000);
        puStack_154 = (uint *)0x58ed43;
        uVar15 = __alldiv();
        local_d0 = uVar15;
        lVar16 = uStack_120;
      }
      else {
        uStack_148._4_4_ = local_60;
        uStack_148._0_4_ = (uint *)&iStack_d4;
        puStack_14c = (uint *)0x58ed6f;
        piVar6 = (int *)(**(code **)(*(int *)(iVar3 + 0x80) + 0x18))();
        iVar3 = *piVar6;
        puStack_14c = (uint *)(((-iVar3 >> 0x1f) << 0xf | (uint)-iVar3 >> 0x11) << 0xf |
                              (uint)(iVar3 * -0x8000) >> 0x11);
        uStack_148._4_4_ = (undefined1 *)0x0;
        uStack_148._0_4_ = (uint *)0x1f40000;
        puStack_150 = (uint *)(iVar3 * -0x40000000);
        puStack_154 = (uint *)0x58ed8f;
        lVar16 = __alldiv();
      }
      uStack_148._4_4_ = (undefined1 *)0x58eda7;
      uStack_120 = lVar16;
      FUN_00423920();
      local_118 = local_118 + 1;
    } while ((int)local_118 < *(int *)(local_110[0] + 0x10) - *(int *)(local_110[0] + 0xc) >> 2);
  }
  local_d0._0_4_ = *(int **)(in_ECX + 0x3c);
  uStack_148._4_4_ = *(undefined1 **)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  uStack_148._0_4_ = (uint *)0x58ede4;
  FUN_00543d20();
  local_d0._0_4_ = *(int **)(local_124 + 0x9d8);
  if (DAT_0131bb34 == 0) {
    uStack_148._4_4_ = (undefined1 *)0x188;
    uStack_148._0_4_ = (uint *)0x58ee06;
    local_128 = FUN_00aae9af();
    local_c._0_1_ = 1;
    if (local_128 == 0) {
      iVar7 = 0;
    }
    else {
      uStack_148._4_4_ = (undefined1 *)0x58ee20;
      iVar7 = FUN_0041a160();
    }
    iVar2 = DAT_0131bb34;
    local_c = CONCAT31(local_c._1_3_,2);
    local_128 = 0;
    if ((iVar7 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
      uStack_148._4_4_ = (undefined1 *)DAT_0131bb34;
      uStack_148._0_4_ = (uint *)0x58ee47;
      FUN_0096dd80();
      uStack_148._4_4_ = (undefined1 *)iVar2;
                    /* WARNING: Subroutine does not return */
      uStack_148._0_4_ = (uint *)&UNK_0058ee4d;
      FUN_00aae91b();
    }
    local_c = (uint)local_c._1_3_ << 8;
    in_ECX = local_114;
    DAT_0131bb34 = iVar7;
  }
  iStack_d4 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  iVar7 = local_124;
  lVar16 = uStack_120;
  do {
    do {
      uStack_120._4_4_ = (uint)((ulonglong)lVar16 >> 0x20);
      if (((int *)local_d0 < *(int **)(iVar7 + 0x9d8)) ||
         (*(int **)(iVar7 + 0x9dc) <= (int *)local_d0)) {
        *(undefined4 *)(*(int *)(iVar7 + 0x860) + *(int *)(*(int *)(in_ECX + 0x44) + 0x50) * 4) =
             *(undefined4 *)(in_ECX + 0x48);
        uStack_148._0_4_ = (uint *)0x58f186;
        uStack_148._4_4_ = (undefined1 *)iVar7;
        uStack_120 = lVar16;
        FUN_0050ea30();
        puStack_14c = (uint *)0x58f18c;
        uStack_148._0_4_ = (uint *)iVar7;
        FUN_0051c890();
        puStack_14c = (uint *)0x58f192;
        uStack_148._0_4_ = (uint *)iVar7;
        FUN_00526950();
        uVar15 = local_78;
        if (*(int *)(in_ECX + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
          uStack_148._0_4_ = (uint *)local_128;
          puStack_14c = (uint *)0x58f1b0;
          puVar9 = (undefined4 *)FUN_005061e0();
          uStack_148._0_4_ = (uint *)0x8;
          puStack_14c = (uint *)0xe01a8c;
          uStack_fc = 0xf;
          uStack_100 = 0;
          local_110[0] = local_110[0] & 0xffffff00;
          puStack_150 = (uint *)0x58f1d2;
          FUN_00409350();
          puStack_10._0_1_ = 3;
          uStack_148._0_4_ = *(uint **)(local_118 + 0x44);
          puStack_14c = (uint *)0x58f1eb;
          puVar10 = (uint *)FUN_00974c50();
          uStack_148._0_4_ = (uint *)0xffffffff;
          puStack_14c = (uint *)0x0;
          puStack_150 = local_110;
          puStack_10._0_1_ = 4;
          uStack_b4 = 0xf;
          uStack_b8 = 0;
          auStack_c8[0] = auStack_c8[0] & 0xffffff00;
          puStack_154 = (uint *)0x58f222;
          FUN_00408ed0();
          uStack_148._0_4_ = (uint *)0xffffffff;
          puStack_10._0_1_ = 5;
          puStack_14c = (uint *)0x0;
          uStack_98 = 0xf;
          uStack_9c = 0;
          auStack_ac[0] = auStack_ac[0] & 0xffffff00;
          puStack_154 = (uint *)0x58f253;
          puStack_150 = puVar10;
          FUN_00408ed0();
          puStack_10._0_1_ = 6;
          local_124 = puVar9[1];
          uStack_148._0_4_ = (uint *)0x44;
          puStack_14c = (uint *)0x58f269;
          puVar11 = (undefined1 *)FUN_00aae9af();
          puStack_10._0_1_ = 7;
          uVar5 = puStack_10._0_1_;
          puStack_10._0_1_ = 7;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = (undefined1 *)0x0;
            puStack_10._0_1_ = uVar5;
          }
          else {
            uStack_148._0_4_ = (uint *)0xffffffff;
            puStack_14c = (uint *)0x0;
            puStack_150 = auStack_c8;
            *(undefined4 *)(puVar11 + 0x14) = 0xf;
            *(undefined4 *)(puVar11 + 0x10) = 0;
            *puVar11 = 0;
            puStack_154 = (uint *)0x58f29c;
            FUN_00408ed0();
            uStack_148._0_4_ = (uint *)0xffffffff;
            puStack_10._0_1_ = 8;
            puStack_14c = (uint *)0x0;
            puStack_150 = auStack_ac;
            *(undefined4 *)(puVar11 + 0x30) = 0xf;
            *(undefined4 *)(puVar11 + 0x2c) = 0;
            puVar11[0x1c] = 0;
            puStack_154 = (uint *)0x58f2c3;
            FUN_00408ed0();
            *(int *)(puVar11 + 0x38) = local_124;
            *(undefined4 *)(puVar11 + 0x3c) = 0;
            puVar11[0x40] = 0;
          }
          iVar7 = puVar9[2];
          puVar9[1] = puVar11;
          puVar9[2] = iVar7 + 1;
          if (iVar7 == 0) {
            *puVar9 = puVar11;
          }
          else {
            *(undefined1 **)(local_124 + 0x3c) = puVar11;
          }
          if (0xf < uStack_98) {
            uStack_148._0_4_ = (uint *)auStack_ac[0];
                    /* WARNING: Subroutine does not return */
            puStack_14c = (uint *)&UNK_0058f30a;
            FUN_00aae91b();
          }
          uStack_98 = 0xf;
          uStack_9c = 0;
          auStack_ac[0] = auStack_ac[0] & 0xffffff00;
          if (0xf < uStack_b4) {
            uStack_148._0_4_ = (uint *)auStack_c8[0];
                    /* WARNING: Subroutine does not return */
            puStack_14c = (uint *)&UNK_0058f339;
            FUN_00aae91b();
          }
          uStack_b4 = 0xf;
          uStack_b8 = 0;
          auStack_c8[0] = auStack_c8[0] & 0xffffff00;
          if ((undefined1 *)0xf < puStack_e0) {
            uStack_148._0_4_ = (uint *)auStack_f4[0];
                    /* WARNING: Subroutine does not return */
            puStack_14c = (uint *)&UNK_0058f362;
            FUN_00aae91b();
          }
          puStack_10._0_1_ = 0;
          puStack_e0 = (undefined1 *)0xf;
          uStack_e4 = 0;
          auStack_f4[0] = auStack_f4[0] & 0xffffff00;
          if (0xf < uStack_fc) {
            uStack_148._0_4_ = (uint *)local_110[0];
                    /* WARNING: Subroutine does not return */
            puStack_14c = (uint *)&UNK_0058f38c;
            FUN_00aae91b();
          }
          uStack_148._0_4_ = (uint *)0x5;
          puStack_14c = (uint *)0xe01a98;
          uStack_fc = 0xf;
          uStack_100 = 0;
          local_110[0] = local_110[0] & 0xffffff00;
          puStack_150 = (uint *)0x58f3af;
          FUN_00409350();
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,9);
          uStack_148._0_4_ = auStack_f4;
          puStack_14c = (uint *)0x58f3ca;
          puVar10 = (uint *)(**(code **)(**(int **)(local_118 + 0x48) + 0x18))();
          puStack_14c = (uint *)0xffffffff;
          pvStack_14._0_1_ = 10;
          puStack_150 = (uint *)0x0;
          puStack_154 = &local_114;
          uStack_b8 = 0xf;
          uStack_bc = 0;
          local_d0._4_4_ = local_d0._4_4_ & 0xffffff00;
          puStack_158 = (uint *)0x58f401;
          FUN_00408ed0();
          puStack_14c = (uint *)0xffffffff;
          pvStack_14._0_1_ = 0xb;
          puStack_150 = (uint *)0x0;
          uStack_9c = 0xf;
          uStack_a0 = 0;
          uStack_b0 = uStack_b0 & 0xffffff00;
          puStack_158 = (uint *)0x58f432;
          puStack_154 = puVar10;
          FUN_00408ed0();
          pvStack_14._0_1_ = 0xc;
          local_128 = puVar9[1];
          puStack_14c = (uint *)0x44;
          puStack_150 = (uint *)0x58f448;
          puVar11 = (undefined1 *)FUN_00aae9af();
          pvStack_14._0_1_ = 0xd;
          uVar5 = pvStack_14._0_1_;
          pvStack_14._0_1_ = 0xd;
          if (puVar11 == (undefined1 *)0x0) {
            puVar12 = (undefined1 *)0x0;
            pvStack_14._0_1_ = uVar5;
          }
          else {
            puStack_14c = (uint *)0xffffffff;
            puStack_150 = (uint *)0x0;
            puStack_154 = (uint *)((int)&local_d0 + 4);
            *(undefined4 *)(puVar11 + 0x14) = 0xf;
            *(undefined4 *)(puVar11 + 0x10) = 0;
            *puVar11 = 0;
            puStack_158 = (uint *)0x58f47b;
            FUN_00408ed0();
            puStack_14c = (uint *)0xffffffff;
            pvStack_14._0_1_ = 0xe;
            puStack_150 = (uint *)0x0;
            puStack_154 = &uStack_b0;
            *(undefined4 *)(puVar11 + 0x30) = 0xf;
            *(undefined4 *)(puVar11 + 0x2c) = 0;
            puVar11[0x1c] = 0;
            puStack_158 = (uint *)0x58f4a2;
            FUN_00408ed0();
            *(int *)(puVar11 + 0x38) = local_128;
            *(undefined4 *)(puVar11 + 0x3c) = 0;
            puVar11[0x40] = 0;
            puVar12 = puVar11;
          }
          iVar7 = puVar9[2];
          puVar9[1] = puVar12;
          puVar9[2] = iVar7 + 1;
          if (iVar7 == 0) {
            *puVar9 = puVar12;
          }
          else {
            *(undefined1 **)(local_128 + 0x3c) = puVar12;
          }
          if (0xf < uStack_9c) {
            puStack_14c = (uint *)uStack_b0;
                    /* WARNING: Subroutine does not return */
            puStack_150 = (uint *)&UNK_0058f4e9;
            FUN_00aae91b();
          }
          uStack_9c = 0xf;
          uStack_a0 = 0;
          uStack_b0 = uStack_b0 & 0xffffff00;
          if (0xf < uStack_b8) {
            puStack_14c = (uint *)local_d0._4_4_;
                    /* WARNING: Subroutine does not return */
            puStack_150 = (uint *)&UNK_0058f518;
            FUN_00aae91b();
          }
          uStack_b8 = 0xf;
          uStack_bc = 0;
          local_d0._4_4_ = local_d0._4_4_ & 0xffffff00;
          if (0xf < uStack_e4) {
            puStack_14c = (uint *)uStack_f8;
                    /* WARNING: Subroutine does not return */
            puStack_150 = (uint *)&UNK_0058f541;
            FUN_00aae91b();
          }
          pvStack_14._0_1_ = 0;
          uStack_e4 = 0xf;
          uStack_e8 = 0;
          uStack_f8 = uStack_f8 & 0xffffff00;
          if (0xf < uStack_100) {
            puStack_14c = (uint *)local_114;
                    /* WARNING: Subroutine does not return */
            puStack_150 = (uint *)&UNK_0058f56b;
            FUN_00aae91b();
          }
          puStack_14c = (uint *)0x3;
          puStack_150 = (uint *)&DAT_00e01aa0;
          uStack_100 = 0xf;
          uStack_104 = 0;
          local_114 = local_114 & 0xffffff00;
          puStack_154 = (uint *)0x58f58e;
          FUN_00409350();
          pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xf);
          puStack_14c = &uStack_f8;
          puStack_150 = (uint *)0x58f5a6;
          puVar10 = (uint *)(**(code **)(*piStack_134 + 0x18))();
          puStack_150 = (uint *)0xffffffff;
          pvStack_18._0_1_ = 0x10;
          puStack_154 = (uint *)0x0;
          puStack_158 = &local_118;
          uStack_bc = 0xf;
          uStack_c0 = 0;
          local_d0._0_4_ = (int *)((uint)(int *)local_d0 & 0xffffff00);
          uStack_15c = 0x58f5dd;
          FUN_00408ed0();
          puStack_150 = (uint *)0xffffffff;
          pvStack_18._0_1_ = 0x11;
          puStack_154 = (uint *)0x0;
          uStack_a0 = 0xf;
          uStack_a4 = 0;
          uStack_b4 = uStack_b4 & 0xffffff00;
          uStack_15c = 0x58f60e;
          puStack_158 = puVar10;
          FUN_00408ed0();
          pvStack_18._0_1_ = 0x12;
          iVar7 = puVar9[1];
          puStack_150 = (uint *)0x44;
          puStack_154 = (uint *)0x58f624;
          puVar12 = (undefined1 *)FUN_00aae9af();
          pvStack_18._0_1_ = 0x13;
          uVar5 = pvStack_18._0_1_;
          pvStack_18._0_1_ = 0x13;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = (undefined1 *)0x0;
            pvStack_18._0_1_ = uVar5;
          }
          else {
            puStack_150 = (uint *)0xffffffff;
            puStack_154 = (uint *)0x0;
            puStack_158 = (uint *)&local_d0;
            *(undefined4 *)(puVar12 + 0x14) = 0xf;
            *(undefined4 *)(puVar12 + 0x10) = 0;
            *puVar12 = 0;
            uStack_15c = 0x58f657;
            FUN_00408ed0();
            puStack_150 = (uint *)0xffffffff;
            pvStack_18._0_1_ = 0x14;
            puStack_154 = (uint *)0x0;
            puStack_158 = &uStack_b4;
            *(undefined4 *)(puVar12 + 0x30) = 0xf;
            *(undefined4 *)(puVar12 + 0x2c) = 0;
            puVar12[0x1c] = 0;
            uStack_15c = 0x58f67e;
            FUN_00408ed0();
            *(int *)(puVar12 + 0x38) = iVar7;
            *(undefined4 *)(puVar12 + 0x3c) = 0;
            puVar12[0x40] = 0;
          }
          iVar2 = puVar9[2];
          puVar9[1] = puVar12;
          puVar9[2] = iVar2 + 1;
          if (iVar2 == 0) {
            *puVar9 = puVar12;
          }
          else {
            *(undefined1 **)(iVar7 + 0x3c) = puVar12;
          }
          if (0xf < uStack_a0) {
            puStack_150 = (uint *)uStack_b4;
                    /* WARNING: Subroutine does not return */
            puStack_154 = (uint *)&UNK_0058f6c5;
            FUN_00aae91b();
          }
          uStack_a0 = 0xf;
          uStack_a4 = 0;
          uStack_b4 = uStack_b4 & 0xffffff00;
          if (0xf < uStack_bc) {
            puStack_150 = (uint *)(int *)local_d0;
                    /* WARNING: Subroutine does not return */
            puStack_154 = (uint *)&UNK_0058f6f4;
            FUN_00aae91b();
          }
          uStack_bc = 0xf;
          uStack_c0 = 0;
          local_d0._0_4_ = (int *)((uint)(int *)local_d0 & 0xffffff00);
          if (0xf < uStack_e8) {
            puStack_150 = (uint *)uStack_fc;
                    /* WARNING: Subroutine does not return */
            puStack_154 = (uint *)&UNK_0058f71d;
            FUN_00aae91b();
          }
          pvStack_18._0_1_ = 0;
          uVar5 = pvStack_18._0_1_;
          pvStack_18._0_1_ = 0;
          uStack_e8 = 0xf;
          uStack_ec = 0;
          uVar4 = uStack_fc >> 8;
          uStack_fc = uVar4 << 8;
          if (0xf < uStack_104) {
            puStack_150 = (uint *)local_118;
                    /* WARNING: Subroutine does not return */
            puStack_154 = (uint *)&UNK_0058f747;
            FUN_00aae91b();
          }
          puStack_150 = (uint *)0x0;
          puStack_154 = (uint *)&DAT_00ded94d;
          if ((char)((uint)unaff_ESI >> 0x18) == '\0') {
            uStack_104 = 0xf;
            uStack_108 = 0;
            local_118 = local_118 & 0xffffff00;
            puStack_158 = (uint *)0x58f774;
            FUN_00409350();
            pvStack_18._0_1_ = 0x15;
            puStack_150 = (uint *)0x9;
            puStack_154 = (uint *)0xe01aa4;
            uStack_e8 = 0xf;
            uStack_ec = 0;
            uStack_fc = uStack_fc & 0xffffff00;
            puStack_158 = (uint *)0x58f798;
            FUN_00409350();
            pvStack_18._0_1_ = 0x16;
            uVar5 = pvStack_18._0_1_;
            pvStack_18._0_1_ = 0x16;
            puStack_e0 = auStack_1cc;
            uVar17 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(puVar11 + 0xbe4) * 4)
            ;
            puVar12 = auStack_1cc;
            if (DAT_01262ef4 == 0) {
              iVar7 = FUN_00aae9af(0x44);
              pvStack_18._0_1_ = 0x17;
              if (iVar7 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = FUN_006a4e30();
              }
              pvStack_18._0_1_ = 0x16;
              FUN_006a59b0(uVar13);
              puVar12 = puStack_e0;
              uVar5 = pvStack_18._0_1_;
            }
            pvStack_18._0_1_ = uVar5;
            puStack_e0 = puVar12;
            uVar13 = *(undefined4 *)(puVar11 + 0x20);
            uVar19 = *(undefined4 *)(puVar11 + 0x1c);
            uVar18 = 0;
            puVar10 = &local_118;
            uVar20 = uVar19;
            uVar21 = uVar13;
            uVar14 = FUN_006a55b0(puVar9,uVar17,puVar10,0,uVar19,uVar13,uVar19,uVar13);
            FUN_006a7ed0(auStack_1cc,uVar14,puVar9,uVar17,puVar10,uVar18,uVar19,uVar13,uVar20,uVar21
                        );
            pvStack_18._0_1_ = 0x18;
            uVar5 = pvStack_18._0_1_;
            pvStack_18._0_1_ = 0x18;
            if (DAT_01262ef4 == 0) {
              iVar7 = FUN_00aae9af();
              pvStack_18._0_1_ = 0x19;
              if (iVar7 != 0) {
                FUN_006a4e30();
              }
              pvStack_18._0_1_ = 0x18;
              FUN_006a59b0();
              uVar5 = pvStack_18._0_1_;
            }
            pvStack_18._0_1_ = uVar5;
            if (DAT_01262ef4 == 0) {
              iVar7 = FUN_00aae9af();
              pvStack_18._0_1_ = 0x1a;
              if (iVar7 != 0) {
                FUN_006a4e30();
              }
              pvStack_18._0_1_ = 0x18;
              FUN_006a59b0();
            }
            pvStack_18._0_1_ = 0x16;
            FUN_004e9540(DAT_01262ef4);
            if (0xf < uStack_e8) {
              puStack_150 = (uint *)uStack_fc;
                    /* WARNING: Subroutine does not return */
              puStack_154 = (uint *)&UNK_0058f91b;
              FUN_00aae91b();
            }
            pvStack_18 = (void *)((uint)pvStack_18._1_3_ << 8);
            uStack_e8 = 0xf;
            uStack_ec = 0;
            uStack_fc = uStack_fc & 0xffffff00;
            if (0xf < uStack_104) {
              puStack_150 = (uint *)local_118;
                    /* WARNING: Subroutine does not return */
              puStack_154 = (uint *)&UNK_0058f946;
              FUN_00aae91b();
            }
            local_118 = local_118 & 0xffffff00;
          }
          else {
            uStack_e8 = 0xf;
            uStack_ec = 0;
            uStack_fc = uVar4 << 8;
            puStack_158 = (uint *)0x58f96f;
            pvStack_18._0_1_ = uVar5;
            FUN_00409350();
            pvStack_18._0_1_ = 0x1b;
            puStack_150 = (uint *)0xd;
            puStack_154 = (uint *)0xe01ab0;
            uStack_104 = 0xf;
            uStack_108 = 0;
            local_118 = local_118 & 0xffffff00;
            puStack_158 = (uint *)0x58f993;
            FUN_00409350();
            pvStack_18._0_1_ = 0x1c;
            uVar5 = pvStack_18._0_1_;
            pvStack_18._0_1_ = 0x1c;
            puStack_e0 = auStack_1cc;
            uVar17 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(puVar11 + 0xbe4) * 4)
            ;
            puVar12 = auStack_1cc;
            if (DAT_01262ef4 == 0) {
              iVar7 = FUN_00aae9af(0x44);
              pvStack_18._0_1_ = 0x1d;
              if (iVar7 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = FUN_006a4e30();
              }
              pvStack_18._0_1_ = 0x1c;
              FUN_006a59b0(uVar13);
              puVar12 = puStack_e0;
              uVar5 = pvStack_18._0_1_;
            }
            pvStack_18._0_1_ = uVar5;
            puStack_e0 = puVar12;
            uVar13 = *(undefined4 *)(puVar11 + 0x20);
            uVar19 = *(undefined4 *)(puVar11 + 0x1c);
            uVar18 = 0;
            puVar10 = &uStack_fc;
            uVar20 = uVar19;
            uVar21 = uVar13;
            uVar14 = FUN_006a55b0(puVar9,uVar17,puVar10,0,uVar19,uVar13,uVar19,uVar13);
            FUN_006a7ed0(auStack_1cc,uVar14,puVar9,uVar17,puVar10,uVar18,uVar19,uVar13,uVar20,uVar21
                        );
            pvStack_18._0_1_ = 0x1e;
            uVar5 = pvStack_18._0_1_;
            pvStack_18._0_1_ = 0x1e;
            if (DAT_01262ef4 == 0) {
              iVar7 = FUN_00aae9af();
              pvStack_18._0_1_ = 0x1f;
              if (iVar7 != 0) {
                FUN_006a4e30();
              }
              pvStack_18._0_1_ = 0x1e;
              FUN_006a59b0();
              uVar5 = pvStack_18._0_1_;
            }
            pvStack_18._0_1_ = uVar5;
            if (DAT_01262ef4 == 0) {
              iVar7 = FUN_00aae9af();
              pvStack_18._0_1_ = 0x20;
              if (iVar7 != 0) {
                FUN_006a4e30();
              }
              pvStack_18._0_1_ = 0x1e;
              FUN_006a59b0();
            }
            pvStack_18._0_1_ = 0x1c;
            FUN_004e9540(DAT_01262ef4);
            if (0xf < uStack_104) {
              puStack_150 = (uint *)local_118;
                    /* WARNING: Subroutine does not return */
              puStack_154 = (uint *)&UNK_0058fb17;
              FUN_00aae91b();
            }
            pvStack_18 = (void *)((uint)pvStack_18._1_3_ << 8);
            uStack_104 = 0xf;
            uStack_108 = 0;
            local_118 = local_118 & 0xffffff00;
            if (0xf < uStack_e8) {
              puStack_150 = (uint *)uStack_fc;
                    /* WARNING: Subroutine does not return */
              puStack_154 = (uint *)&UNK_0058fb42;
              FUN_00aae91b();
            }
            uStack_fc = uStack_fc & 0xffffff00;
          }
          uStack_e8 = 0xf;
          uStack_ec = 0;
          uStack_104 = 0xf;
          uStack_108 = 0;
          puStack_150 = (uint *)0x3;
          puStack_154 = (uint *)0x58fb69;
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))();
          uVar15 = local_78;
        }
        local_78._4_4_ = (int)((ulonglong)uVar15 >> 0x20);
        if (local_78._4_4_ != 0) {
          uStack_148._0_4_ = (uint *)local_78._4_4_;
                    /* WARNING: Subroutine does not return */
          puStack_14c = (uint *)&UNK_0058fb7a;
          local_78 = uVar15;
          FUN_00aae91b();
        }
        ExceptionList = pvStack_18;
        return;
      }
      local_128 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)local_d0 * 4);
      local_d0._0_4_ = (int *)local_d0 + 1;
    } while (iStack_d4 < 1);
    iStack_8c = 0;
    uStack_120._0_4_ = iStack_d4;
    do {
      local_118 = *(uint *)(iStack_8c + *(int *)(local_128 + 0x194));
      iVar7 = local_124;
      in_ECX = local_114;
joined_r0x0058eeea:
      while (uVar4 = local_118, local_124 = iVar7, local_114 = in_ECX, uVar4 != 0) {
        local_118 = *(uint *)(uVar4 + 0x27c);
        iVar7 = *(int *)(*(int *)(in_ECX + 0x48) + 0x50);
        puStack_14c = *(uint **)(*(int *)(uVar4 + 0xa4) + 4 + iVar7 * 8);
        puStack_150 = *(uint **)(*(int *)(uVar4 + 0xa4) + iVar7 * 8);
        puStack_154 = (uint *)0x58ef2c;
        uStack_148 = local_80;
        lVar16 = __allmul();
        uVar8 = (uint)(lVar16 >> 0xf);
        puVar10 = (uint *)(uVar4 + 0x118);
        uVar1 = *puVar10;
        *puVar10 = *puVar10 + uVar8;
        *(int *)(uVar4 + 0x11c) =
             *(int *)(uVar4 + 0x11c) + (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) +
             (uint)CARRY4(uVar1,uVar8);
        if (*(int *)(uVar4 + 0x11c) < 1) {
          if (*(int *)(uVar4 + 0x11c) < 0) {
            *(undefined4 *)(uVar4 + 0x118) = 0;
            *(undefined4 *)(uVar4 + 0x11c) = 0;
          }
          if ((-1 < *(int *)(uVar4 + 0x11c)) &&
             ((0 < *(int *)(uVar4 + 0x11c) || (0x50000 < *(uint *)(uVar4 + 0x118)))))
          goto LAB_0058ef73;
        }
        else {
LAB_0058ef73:
          *(undefined4 *)(uVar4 + 0x118) = 0x50000;
          *(undefined4 *)(uVar4 + 0x11c) = 0;
        }
        iVar7 = 1;
        uVar15 = local_88;
        if (4 < (int)(*(int *)(local_110[0] + 0x10) - *(int *)(local_110[0] + 0xc) & 0xfffffffcU)) {
          do {
            iVar2 = *(int *)(*(int *)(local_110[0] + 0xc) + iVar7 * 4);
            puStack_14c = *(uint **)(local_70 + 4 + iVar7 * 8);
            puStack_150 = *(uint **)(local_70 + iVar7 * 8);
            puStack_154 = (uint *)0x58efcd;
            uStack_148 = local_78;
            lVar16 = __allmul();
            iVar2 = *(int *)(iVar2 + 0x28);
            uStack_148 = lVar16 >> 0xf;
            puStack_14c = *(uint **)(*(int *)(uVar4 + 0x7c) + 4 + iVar2 * 8);
            puStack_150 = *(uint **)(*(int *)(uVar4 + 0x7c) + iVar2 * 8);
            puStack_154 = (uint *)0x58efea;
            lVar16 = __allmul();
            uVar8 = (uint)(lVar16 >> 0xf);
            puVar10 = (uint *)(uVar4 + 0x120);
            uVar1 = *puVar10;
            *puVar10 = *puVar10 + uVar8;
            *(int *)(uVar4 + 0x124) =
                 *(int *)(uVar4 + 0x124) + (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) +
                 (uint)CARRY4(uVar1,uVar8);
            if (*(int *)(uVar4 + 0x124) < 1) {
              if (*(int *)(uVar4 + 0x124) < 0) {
                *(undefined4 *)(uVar4 + 0x120) = 0;
                *(undefined4 *)(uVar4 + 0x124) = 0;
              }
              if ((-1 < *(int *)(uVar4 + 0x124)) &&
                 ((0 < *(int *)(uVar4 + 0x124) || (0x50000 < *(uint *)(uVar4 + 0x120)))))
              goto LAB_0058f033;
            }
            else {
LAB_0058f033:
              *(undefined4 *)(uVar4 + 0x120) = 0x50000;
              *(undefined4 *)(uVar4 + 0x124) = 0;
            }
            iVar7 = iVar7 + 1;
            uVar15 = local_88;
          } while (iVar7 < *(int *)(local_110[0] + 0x10) - *(int *)(local_110[0] + 0xc) >> 2);
        }
        local_88._4_4_ = (int)((ulonglong)uVar15 >> 0x20);
        local_88._0_4_ = (uint)uVar15;
        in_ECX = local_114;
        iVar7 = local_124;
        local_88 = uVar15;
        if ((*(int *)(uVar4 + 0x274) != 0) &&
           (*(int *)(*(int *)(uVar4 + 0x274) + 0xc) != *(int *)(local_114 + 0x48))) {
          puVar10 = (uint *)(uVar4 + 0x120);
          uVar1 = *puVar10;
          *puVar10 = *puVar10 + (uint)local_88;
          *(int *)(uVar4 + 0x124) =
               *(int *)(uVar4 + 0x124) + local_88._4_4_ + (uint)CARRY4(uVar1,(uint)local_88);
          if (*(int *)(uVar4 + 0x124) < 1) goto code_r0x0058f091;
          goto LAB_0058f0c5;
        }
        puVar10 = (uint *)(uVar4 + 0x120);
        uVar1 = *puVar10;
        *puVar10 = *puVar10 + -(uint)local_88;
        *(int *)(uVar4 + 0x124) =
             (*(int *)(uVar4 + 0x124) - (local_88._4_4_ + (uint)((uint)local_88 != 0))) +
             (uint)CARRY4(uVar1,-(uint)local_88);
        if (*(int *)(uVar4 + 0x124) < 1) {
          if (*(int *)(uVar4 + 0x124) < 0) {
            *(undefined4 *)(uVar4 + 0x120) = 0;
            *(undefined4 *)(uVar4 + 0x124) = 0;
          }
          if ((-1 < *(int *)(uVar4 + 0x124)) &&
             ((0 < *(int *)(uVar4 + 0x124) || (0x50000 < *(uint *)(uVar4 + 0x120)))))
          goto LAB_0058f12b;
        }
        else {
LAB_0058f12b:
          *(undefined4 *)(uVar4 + 0x120) = 0x50000;
          *(undefined4 *)(uVar4 + 0x124) = 0;
        }
        *(undefined4 *)(uVar4 + 0x274) = 0;
      }
      iStack_8c = iStack_8c + 0x10;
      uStack_120._0_4_ = (int)uStack_120 + -1;
    } while ((int)uStack_120 != 0);
    lVar16 = (ulonglong)uStack_120._4_4_ << 0x20;
    local_118 = 0;
  } while( true );
code_r0x0058f091:
  if (*(int *)(uVar4 + 0x124) < 0) {
    *(undefined4 *)(uVar4 + 0x120) = 0;
    *(undefined4 *)(uVar4 + 0x124) = 0;
  }
  if ((-1 < *(int *)(uVar4 + 0x124)) &&
     ((0 < *(int *)(uVar4 + 0x124) || (0x50000 < *(uint *)(uVar4 + 0x120))))) {
LAB_0058f0c5:
    *(undefined4 *)(uVar4 + 0x120) = 0x50000;
    *(undefined4 *)(uVar4 + 0x124) = 0;
  }
  goto joined_r0x0058eeea;
}

