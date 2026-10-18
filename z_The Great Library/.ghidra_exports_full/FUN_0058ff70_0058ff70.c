// FUN_0058ff70 @ 0058ff70 body=[[0058ff70, 0059027b] [0059027f, 005902b7] [005902c0, 005906a7] [005906ab, 005906d3] [005906d7, 005906f6] [005906fa, 00590720] [00590724, 00590874] [00590878, 005908a0] [005908a4, 005908c3] [005908c7, 005908ed] [005908f1, 00590a3e] [00590a42, 00590a6a] [00590a6e, 00590a8d] [00590a91, 00590ab7] [00590abb, 00590c8b] [00590c8f, 00590cb6] [00590cba, 00590e87] [00590e8b, 00590eb2] [00590eb6, 00590eea] [00590eee, 00590f02]]


void FUN_0058ff70(void)

{
  uint uVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint in_ECX;
  int *piVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_1bc [112];
  undefined4 uStack_14c;
  uint *puStack_148;
  uint *puStack_144;
  uint *puStack_140;
  uint *puStack_13c;
  undefined8 uStack_138;
  int *piStack_124;
  undefined4 uStack_120;
  undefined1 *local_11c;
  undefined1 *local_118;
  uint local_114;
  uint local_110;
  uint local_10c [2];
  undefined4 uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint auStack_f0 [2];
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0 [2];
  undefined4 uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint auStack_b4 [2];
  undefined4 uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int *local_78;
  int iStack_74;
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
  
  puStack_10 = &LAB_00bb3fd6;
  pvStack_14 = ExceptionList;
  local_78 = *(int **)(in_ECX + 0x3c);
  local_118 = *(undefined1 **)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  local_11c = *(undefined1 **)
               (*(int *)(local_118 + 0x850) + *(int *)(*(int *)(in_ECX + 0x44) + 0x50) * 4);
  uStack_120 = (undefined1 *)CONCAT13(1,(uint3)uStack_120);
  if (*(int *)(local_11c + 0x50) < *(int *)(*(int *)(in_ECX + 0x48) + 0x50)) {
    uStack_120 = (undefined1 *)(uint)(uint3)uStack_120;
  }
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  uStack_138._4_4_ = (undefined1 *)0x1;
  local_c = 0;
  uStack_138._0_4_ = (int **)0x59000a;
  ExceptionList = &pvStack_14;
  local_10c[0] = in_ECX;
  FUN_008a8650();
  local_54 = *(undefined4 *)(in_ECX + 0x40);
  local_58 = *(undefined4 *)(in_ECX + 0x3c);
  local_d0[0] = DAT_01258a3c;
  local_110 = 0;
  if (0 < (int)(*(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) & 0xfffffffcU)) {
    do {
      iVar4 = *(int *)(*(int *)(local_d0[0] + 0xc) + local_110 * 4);
      if (uStack_120._3_1_ == '\0') {
        uStack_138._4_4_ = local_60;
        uStack_138._0_4_ = (int **)&local_114;
        puStack_13c = (uint *)0x59006a;
        piVar3 = (int *)(**(code **)(*(int *)(iVar4 + 0xb0) + 0x18))();
        iVar4 = *piVar3;
        puStack_13c = (uint *)(((-iVar4 >> 0x1f) << 0xf | (uint)-iVar4 >> 0x11) << 0xf |
                              (uint)(iVar4 * -0x8000) >> 0x11);
        uStack_138._4_4_ = (undefined1 *)0x0;
        uStack_138._0_4_ = (int **)0x1f40000;
        puStack_140 = (uint *)(iVar4 * -0x40000000);
        puStack_144 = (uint *)0x59008a;
        uVar11 = __alldiv();
        uStack_88 = uVar11;
        uVar11 = uStack_90;
      }
      else {
        uStack_138._4_4_ = local_60;
        uStack_138._0_4_ = &piStack_124;
        puStack_13c = (uint *)0x5900bb;
        piVar3 = (int *)(**(code **)(*(int *)(iVar4 + 0xe0) + 0x18))();
        iVar4 = *piVar3;
        puStack_13c = (uint *)(((-iVar4 >> 0x1f) << 0xf | (uint)-iVar4 >> 0x11) << 0xf |
                              (uint)(iVar4 * -0x8000) >> 0x11);
        uStack_138._4_4_ = (undefined1 *)0x0;
        uStack_138._0_4_ = (int **)0x1f40000;
        puStack_140 = (uint *)(iVar4 * -0x40000000);
        puStack_144 = (uint *)0x5900db;
        uVar11 = __alldiv();
      }
      uStack_138._4_4_ = (undefined1 *)0x5900fc;
      uStack_90 = uVar11;
      FUN_00423920();
      local_110 = local_110 + 1;
    } while ((int)local_110 < *(int *)(local_d0[0] + 0x10) - *(int *)(local_d0[0] + 0xc) >> 2);
  }
  iVar4 = *(int *)(DAT_012586dc + 0x50);
  puStack_13c = (uint *)(*(int *)(iVar4 + 0xe4) << 0xf | *(uint *)(iVar4 + 0xe0) >> 0x11);
  uStack_138._4_4_ = (undefined1 *)0x0;
  uStack_138._0_4_ = (int **)0x320000;
  puStack_140 = (uint *)(*(uint *)(iVar4 + 0xe0) << 0xf);
  puStack_144 = (uint *)0x590142;
  uVar11 = __alldiv();
  puStack_13c = (uint *)(*(int *)(iVar4 + 0xac) << 0xf | *(uint *)(iVar4 + 0xa8) >> 0x11);
  uStack_138._4_4_ = (undefined1 *)0x0;
  uStack_138._0_4_ = (int **)0x320000;
  puStack_140 = (uint *)(*(uint *)(iVar4 + 0xa8) << 0xf);
  puStack_144 = (uint *)0x590170;
  uStack_90 = uVar11;
  uVar11 = __alldiv();
  local_78 = *(int **)(in_ECX + 0x3c);
  uStack_138._4_4_ = *(undefined1 **)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  uStack_138._0_4_ = (int **)0x5901a0;
  uStack_88 = uVar11;
  FUN_00543d20();
  uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x94);
  puStack_13c = (uint *)((((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf |
                        (uVar1 & 0x1ffff) >> 2);
  uStack_138._4_4_ = (undefined1 *)0x0;
  uStack_138._0_4_ = (int **)0x1f40000;
  puStack_140 = (uint *)(uVar1 << 0x1e);
  puStack_144 = (uint *)0x5901ca;
  uVar11 = __alldiv();
  piVar3 = *(int **)(local_118 + 0x9d8);
  iVar4 = DAT_0131bb34;
  do {
    do {
      puVar8 = local_118;
      uStack_80 = uVar11;
      if ((piVar3 < *(int **)(local_118 + 0x9d8)) || (*(int **)(local_118 + 0x9dc) <= piVar3)) {
        *(undefined4 *)(*(int *)(local_118 + 0x850) + *(int *)(*(int *)(in_ECX + 0x44) + 0x50) * 4)
             = *(undefined4 *)(in_ECX + 0x48);
        uStack_138._0_4_ = (int **)0x59052d;
        uStack_138._4_4_ = local_118;
        FUN_0050ea30();
        puStack_13c = (uint *)0x590533;
        uStack_138._0_4_ = (int **)puVar8;
        FUN_0051c890();
        puStack_13c = (uint *)0x590539;
        uStack_138._0_4_ = (int **)puVar8;
        FUN_00526950();
        if (*(int *)(in_ECX + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
          uStack_138._0_4_ = (int **)local_11c;
          puStack_13c = (uint *)0x590557;
          puVar6 = (undefined4 *)FUN_005061e0();
          uStack_138._0_4_ = (int **)0x8;
          puStack_13c = (uint *)0xe01a8c;
          uStack_f8 = 0xf;
          uStack_fc = 0;
          local_10c[0] = local_10c[0] & 0xffffff00;
          puStack_140 = (uint *)0x590579;
          FUN_00409350();
          puStack_10._0_1_ = 3;
          uStack_138._0_4_ = *(int ***)(local_110 + 0x44);
          puStack_13c = (uint *)0x590592;
          puVar7 = (uint *)FUN_00974c50();
          uStack_138._0_4_ = (int **)0xffffffff;
          puStack_13c = (uint *)0x0;
          puStack_140 = local_10c;
          puStack_10._0_1_ = 4;
          uStack_bc = 0xf;
          uStack_c0 = 0;
          local_d0[0] = local_d0[0] & 0xffffff00;
          puStack_144 = (uint *)0x5905c3;
          FUN_00408ed0();
          uStack_138._0_4_ = (int **)0xffffffff;
          puStack_10._0_1_ = 5;
          puStack_13c = (uint *)0x0;
          uStack_a0 = 0xf;
          uStack_a4 = 0;
          auStack_b4[0] = auStack_b4[0] & 0xffffff00;
          puStack_144 = (uint *)0x5905f4;
          puStack_140 = puVar7;
          FUN_00408ed0();
          puStack_10._0_1_ = 6;
          iVar4 = puVar6[1];
          uStack_138._0_4_ = (int **)0x44;
          puStack_13c = (uint *)0x59060a;
          puVar8 = (undefined1 *)FUN_00aae9af();
          puStack_10._0_1_ = 7;
          uVar2 = puStack_10._0_1_;
          puStack_10._0_1_ = 7;
          local_118 = puVar8;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = (undefined1 *)0x0;
            puStack_10._0_1_ = uVar2;
          }
          else {
            uStack_138._0_4_ = (int **)0xffffffff;
            puStack_13c = (uint *)0x0;
            puStack_140 = local_d0;
            *(undefined4 *)(puVar8 + 0x14) = 0xf;
            *(undefined4 *)(puVar8 + 0x10) = 0;
            *puVar8 = 0;
            puStack_144 = (uint *)0x59063a;
            FUN_00408ed0();
            uStack_138._0_4_ = (int **)0xffffffff;
            puStack_10._0_1_ = 8;
            puStack_13c = (uint *)0x0;
            puStack_140 = auStack_b4;
            *(undefined4 *)(puVar8 + 0x30) = 0xf;
            *(undefined4 *)(puVar8 + 0x2c) = 0;
            puVar8[0x1c] = 0;
            puStack_144 = (uint *)0x590661;
            FUN_00408ed0();
            *(int *)(puVar8 + 0x38) = iVar4;
            *(undefined4 *)(puVar8 + 0x3c) = 0;
            puVar8[0x40] = 0;
          }
          iVar15 = puVar6[2];
          puVar6[1] = puVar8;
          puVar6[2] = iVar15 + 1;
          if (iVar15 == 0) {
            *puVar6 = puVar8;
          }
          else {
            *(undefined1 **)(iVar4 + 0x3c) = puVar8;
          }
          if (0xf < uStack_a0) {
            uStack_138._0_4_ = (int **)auStack_b4[0];
                    /* WARNING: Subroutine does not return */
            puStack_13c = (uint *)&UNK_005906a8;
            FUN_00aae91b();
          }
          uStack_a0 = 0xf;
          uStack_a4 = 0;
          auStack_b4[0] = auStack_b4[0] & 0xffffff00;
          if (0xf < uStack_bc) {
            uStack_138._0_4_ = (int **)local_d0[0];
                    /* WARNING: Subroutine does not return */
            puStack_13c = (uint *)&UNK_005906d4;
            FUN_00aae91b();
          }
          uStack_bc = 0xf;
          uStack_c0 = 0;
          local_d0[0] = local_d0[0] & 0xffffff00;
          if (0xf < uStack_dc) {
            uStack_138._0_4_ = (int **)auStack_f0[0];
                    /* WARNING: Subroutine does not return */
            puStack_13c = (uint *)&UNK_005906f7;
            FUN_00aae91b();
          }
          puStack_10._0_1_ = 0;
          uStack_dc = 0xf;
          uStack_e0 = 0;
          auStack_f0[0] = auStack_f0[0] & 0xffffff00;
          if (0xf < uStack_f8) {
            uStack_138._0_4_ = (int **)local_10c[0];
                    /* WARNING: Subroutine does not return */
            puStack_13c = (uint *)&UNK_00590721;
            FUN_00aae91b();
          }
          uStack_138._0_4_ = (int **)0x5;
          puStack_13c = (uint *)0xe01a98;
          uStack_f8 = 0xf;
          uStack_fc = 0;
          local_10c[0] = local_10c[0] & 0xffffff00;
          puStack_140 = (uint *)0x590744;
          FUN_00409350();
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,9);
          uStack_138._0_4_ = (int **)auStack_f0;
          puStack_13c = (uint *)0x59075f;
          puVar7 = (uint *)(**(code **)(**(int **)(local_110 + 0x48) + 0x18))();
          puStack_13c = (uint *)0xffffffff;
          pvStack_14._0_1_ = 10;
          puStack_140 = (uint *)0x0;
          puStack_144 = &local_110;
          uStack_c0 = 0xf;
          uStack_c4 = 0;
          uStack_d4 = uStack_d4 & 0xffffff00;
          puStack_148 = (uint *)0x590790;
          FUN_00408ed0();
          puStack_13c = (uint *)0xffffffff;
          pvStack_14._0_1_ = 0xb;
          puStack_140 = (uint *)0x0;
          uStack_a4 = 0xf;
          uStack_a8 = 0;
          uStack_b8 = uStack_b8 & 0xffffff00;
          puStack_148 = (uint *)0x5907c1;
          puStack_144 = puVar7;
          FUN_00408ed0();
          pvStack_14._0_1_ = 0xc;
          iVar4 = puVar6[1];
          puStack_13c = (uint *)0x44;
          puStack_140 = (uint *)0x5907d7;
          puVar8 = (undefined1 *)FUN_00aae9af();
          pvStack_14._0_1_ = 0xd;
          uVar2 = pvStack_14._0_1_;
          pvStack_14._0_1_ = 0xd;
          local_11c = puVar8;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = (undefined1 *)0x0;
            pvStack_14._0_1_ = uVar2;
          }
          else {
            puStack_13c = (uint *)0xffffffff;
            puStack_140 = (uint *)0x0;
            puStack_144 = &uStack_d4;
            *(undefined4 *)(puVar8 + 0x14) = 0xf;
            *(undefined4 *)(puVar8 + 0x10) = 0;
            *puVar8 = 0;
            puStack_148 = (uint *)0x590807;
            FUN_00408ed0();
            puStack_13c = (uint *)0xffffffff;
            pvStack_14._0_1_ = 0xe;
            puStack_140 = (uint *)0x0;
            puStack_144 = &uStack_b8;
            *(undefined4 *)(puVar8 + 0x30) = 0xf;
            *(undefined4 *)(puVar8 + 0x2c) = 0;
            puVar8[0x1c] = 0;
            puStack_148 = (uint *)0x59082e;
            FUN_00408ed0();
            *(int *)(puVar8 + 0x38) = iVar4;
            *(undefined4 *)(puVar8 + 0x3c) = 0;
            puVar8[0x40] = 0;
          }
          iVar15 = puVar6[2];
          puVar6[1] = puVar8;
          puVar6[2] = iVar15 + 1;
          if (iVar15 == 0) {
            *puVar6 = puVar8;
          }
          else {
            *(undefined1 **)(iVar4 + 0x3c) = puVar8;
          }
          if (0xf < uStack_a4) {
            puStack_13c = (uint *)uStack_b8;
                    /* WARNING: Subroutine does not return */
            puStack_140 = (uint *)&UNK_00590875;
            FUN_00aae91b();
          }
          uStack_a4 = 0xf;
          uStack_a8 = 0;
          uStack_b8 = uStack_b8 & 0xffffff00;
          if (0xf < uStack_c0) {
            puStack_13c = (uint *)uStack_d4;
                    /* WARNING: Subroutine does not return */
            puStack_140 = (uint *)&UNK_005908a1;
            FUN_00aae91b();
          }
          uStack_c0 = 0xf;
          uStack_c4 = 0;
          uStack_d4 = uStack_d4 & 0xffffff00;
          if (0xf < uStack_e0) {
            puStack_13c = (uint *)uStack_f4;
                    /* WARNING: Subroutine does not return */
            puStack_140 = (uint *)&UNK_005908c4;
            FUN_00aae91b();
          }
          pvStack_14._0_1_ = 0;
          uStack_e0 = 0xf;
          uStack_e4 = 0;
          uStack_f4 = uStack_f4 & 0xffffff00;
          if (0xf < uStack_fc) {
            puStack_13c = (uint *)local_110;
                    /* WARNING: Subroutine does not return */
            puStack_140 = (uint *)&UNK_005908ee;
            FUN_00aae91b();
          }
          puStack_13c = (uint *)0x3;
          puStack_140 = (uint *)&DAT_00e01aa0;
          uStack_fc = 0xf;
          uStack_100 = 0;
          local_110 = local_110 & 0xffffff00;
          puStack_144 = (uint *)0x590911;
          FUN_00409350();
          pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xf);
          puStack_13c = &uStack_f4;
          puStack_140 = (uint *)0x590929;
          puVar7 = (uint *)(**(code **)(*piStack_124 + 0x18))();
          puStack_140 = (uint *)0xffffffff;
          pvStack_18._0_1_ = 0x10;
          puStack_144 = (uint *)0x0;
          puStack_148 = &local_114;
          uStack_c4 = 0xf;
          uStack_c8 = 0;
          uStack_d8 = uStack_d8 & 0xffffff00;
          uStack_14c = 0x59095a;
          FUN_00408ed0();
          puStack_140 = (uint *)0xffffffff;
          pvStack_18._0_1_ = 0x11;
          puStack_144 = (uint *)0x0;
          uStack_a8 = 0xf;
          uStack_ac = 0;
          uStack_bc = uStack_bc & 0xffffff00;
          uStack_14c = 0x59098b;
          puStack_148 = puVar7;
          FUN_00408ed0();
          pvStack_18._0_1_ = 0x12;
          iVar15 = puVar6[1];
          puStack_140 = (uint *)0x44;
          puStack_144 = (uint *)0x5909a1;
          puVar8 = (undefined1 *)FUN_00aae9af();
          pvStack_18._0_1_ = 0x13;
          uVar2 = pvStack_18._0_1_;
          pvStack_18._0_1_ = 0x13;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = (undefined1 *)0x0;
            pvStack_18._0_1_ = uVar2;
          }
          else {
            puStack_140 = (uint *)0xffffffff;
            puStack_144 = (uint *)0x0;
            puStack_148 = &uStack_d8;
            *(undefined4 *)(puVar8 + 0x14) = 0xf;
            *(undefined4 *)(puVar8 + 0x10) = 0;
            *puVar8 = 0;
            uStack_14c = 0x5909d1;
            FUN_00408ed0();
            puStack_140 = (uint *)0xffffffff;
            pvStack_18._0_1_ = 0x14;
            puStack_144 = (uint *)0x0;
            puStack_148 = &uStack_bc;
            *(undefined4 *)(puVar8 + 0x30) = 0xf;
            *(undefined4 *)(puVar8 + 0x2c) = 0;
            puVar8[0x1c] = 0;
            uStack_14c = 0x5909f8;
            FUN_00408ed0();
            *(int *)(puVar8 + 0x38) = iVar15;
            *(undefined4 *)(puVar8 + 0x3c) = 0;
            puVar8[0x40] = 0;
          }
          iVar16 = puVar6[2];
          puVar6[1] = puVar8;
          puVar6[2] = iVar16 + 1;
          if (iVar16 == 0) {
            *puVar6 = puVar8;
          }
          else {
            *(undefined1 **)(iVar15 + 0x3c) = puVar8;
          }
          if (0xf < uStack_a8) {
            puStack_140 = (uint *)uStack_bc;
                    /* WARNING: Subroutine does not return */
            puStack_144 = (uint *)&UNK_00590a3f;
            FUN_00aae91b();
          }
          uStack_a8 = 0xf;
          uStack_ac = 0;
          uStack_bc = uStack_bc & 0xffffff00;
          if (0xf < uStack_c4) {
            puStack_140 = (uint *)uStack_d8;
                    /* WARNING: Subroutine does not return */
            puStack_144 = (uint *)&UNK_00590a6b;
            FUN_00aae91b();
          }
          uStack_c4 = 0xf;
          uStack_c8 = 0;
          uStack_d8 = uStack_d8 & 0xffffff00;
          if (0xf < uStack_e4) {
            puStack_140 = (uint *)uStack_f8;
                    /* WARNING: Subroutine does not return */
            puStack_144 = (uint *)&UNK_00590a8e;
            FUN_00aae91b();
          }
          pvStack_18._0_1_ = 0;
          uVar2 = pvStack_18._0_1_;
          pvStack_18._0_1_ = 0;
          uStack_e4 = 0xf;
          uStack_e8 = 0;
          uVar1 = uStack_f8 >> 8;
          uStack_f8 = uVar1 << 8;
          if (0xf < uStack_100) {
            puStack_140 = (uint *)local_114;
                    /* WARNING: Subroutine does not return */
            puStack_144 = (uint *)&UNK_00590ab8;
            FUN_00aae91b();
          }
          puStack_140 = (uint *)0x0;
          puStack_144 = (uint *)&DAT_00ded94d;
          if ((char)((uint)iVar4 >> 0x18) == '\0') {
            uStack_100 = 0xf;
            uStack_104 = 0;
            local_114 = local_114 & 0xffffff00;
            puStack_148 = (uint *)0x590ae5;
            FUN_00409350();
            pvStack_18._0_1_ = 0x15;
            puStack_140 = (uint *)0x9;
            puStack_144 = (uint *)0xe01ac0;
            uStack_e4 = 0xf;
            uStack_e8 = 0;
            uStack_f8 = uStack_f8 & 0xffffff00;
            puStack_148 = (uint *)0x590b09;
            FUN_00409350();
            piVar3 = piStack_124;
            pvStack_18._0_1_ = 0x16;
            uVar2 = pvStack_18._0_1_;
            pvStack_18._0_1_ = 0x16;
            uStack_120 = auStack_1bc;
            uVar13 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + piStack_124[0x2f9] * 4);
            puVar8 = auStack_1bc;
            if (DAT_01262ef4 == 0) {
              local_11c = (undefined1 *)FUN_00aae9af(0x44);
              pvStack_18._0_1_ = 0x17;
              if (local_11c == (undefined1 *)0x0) {
                uVar9 = 0;
              }
              else {
                uVar9 = FUN_006a4e30();
                piVar3 = piStack_124;
              }
              pvStack_18._0_1_ = 0x16;
              FUN_006a59b0(uVar9);
              puVar8 = uStack_120;
              uVar2 = pvStack_18._0_1_;
            }
            pvStack_18._0_1_ = uVar2;
            uStack_120 = puVar8;
            iVar4 = piVar3[8];
            iVar15 = piVar3[7];
            uVar14 = 0;
            puVar7 = &local_114;
            iVar16 = iVar15;
            iVar17 = iVar4;
            uVar9 = FUN_006a55b0(puVar6,uVar13,puVar7,0,iVar15,iVar4,iVar15,iVar4);
            FUN_006a7ed0(uStack_120,uVar9,puVar6,uVar13,puVar7,uVar14,iVar15,iVar4,iVar16,iVar17);
            pvStack_18._0_1_ = 0x18;
            uVar2 = pvStack_18._0_1_;
            pvStack_18._0_1_ = 0x18;
            if (DAT_01262ef4 == 0) {
              iVar4 = FUN_00aae9af();
              pvStack_18._0_1_ = 0x19;
              if (iVar4 != 0) {
                FUN_006a4e30();
              }
              pvStack_18._0_1_ = 0x18;
              FUN_006a59b0();
              uVar2 = pvStack_18._0_1_;
            }
            pvStack_18._0_1_ = uVar2;
            if (DAT_01262ef4 == 0) {
              iVar4 = FUN_00aae9af();
              pvStack_18._0_1_ = 0x1a;
              if (iVar4 != 0) {
                FUN_006a4e30();
              }
              pvStack_18._0_1_ = 0x18;
              FUN_006a59b0();
            }
            pvStack_18._0_1_ = 0x16;
            FUN_004e9540(DAT_01262ef4);
            if (0xf < uStack_e4) {
              puStack_140 = (uint *)uStack_f8;
                    /* WARNING: Subroutine does not return */
              puStack_144 = (uint *)&UNK_00590c8c;
              FUN_00aae91b();
            }
            pvStack_18 = (void *)((uint)pvStack_18._1_3_ << 8);
            uStack_e4 = 0xf;
            uStack_e8 = 0;
            uStack_f8 = uStack_f8 & 0xffffff00;
            if (0xf < uStack_100) {
              puStack_140 = (uint *)local_114;
                    /* WARNING: Subroutine does not return */
              puStack_144 = (uint *)&UNK_00590cb7;
              FUN_00aae91b();
            }
            local_114 = local_114 & 0xffffff00;
          }
          else {
            uStack_e4 = 0xf;
            uStack_e8 = 0;
            uStack_f8 = uVar1 << 8;
            puStack_148 = (uint *)0x590ce0;
            pvStack_18._0_1_ = uVar2;
            FUN_00409350();
            pvStack_18._0_1_ = 0x1b;
            puStack_140 = (uint *)0xd;
            puStack_144 = (uint *)0xe01acc;
            uStack_100 = 0xf;
            uStack_104 = 0;
            local_114 = local_114 & 0xffffff00;
            puStack_148 = (uint *)0x590d04;
            FUN_00409350();
            piVar3 = piStack_124;
            pvStack_18._0_1_ = 0x1c;
            uVar2 = pvStack_18._0_1_;
            pvStack_18._0_1_ = 0x1c;
            uStack_120 = auStack_1bc;
            uVar13 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + piStack_124[0x2f9] * 4);
            puVar8 = auStack_1bc;
            if (DAT_01262ef4 == 0) {
              local_11c = (undefined1 *)FUN_00aae9af(0x44);
              pvStack_18._0_1_ = 0x1d;
              if (local_11c == (undefined1 *)0x0) {
                uVar9 = 0;
              }
              else {
                uVar9 = FUN_006a4e30();
                piVar3 = piStack_124;
              }
              pvStack_18._0_1_ = 0x1c;
              FUN_006a59b0(uVar9);
              puVar8 = uStack_120;
              uVar2 = pvStack_18._0_1_;
            }
            pvStack_18._0_1_ = uVar2;
            uStack_120 = puVar8;
            iVar4 = piVar3[8];
            iVar15 = piVar3[7];
            uVar14 = 0;
            puVar7 = &uStack_f8;
            iVar16 = iVar15;
            iVar17 = iVar4;
            uVar9 = FUN_006a55b0(puVar6,uVar13,puVar7,0,iVar15,iVar4,iVar15,iVar4);
            FUN_006a7ed0(uStack_120,uVar9,puVar6,uVar13,puVar7,uVar14,iVar15,iVar4,iVar16,iVar17);
            pvStack_18._0_1_ = 0x1e;
            uVar2 = pvStack_18._0_1_;
            pvStack_18._0_1_ = 0x1e;
            if (DAT_01262ef4 == 0) {
              iVar4 = FUN_00aae9af();
              pvStack_18._0_1_ = 0x1f;
              if (iVar4 != 0) {
                FUN_006a4e30();
              }
              pvStack_18._0_1_ = 0x1e;
              FUN_006a59b0();
              uVar2 = pvStack_18._0_1_;
            }
            pvStack_18._0_1_ = uVar2;
            if (DAT_01262ef4 == 0) {
              iVar4 = FUN_00aae9af();
              pvStack_18._0_1_ = 0x20;
              if (iVar4 != 0) {
                FUN_006a4e30();
              }
              pvStack_18._0_1_ = 0x1e;
              FUN_006a59b0();
            }
            pvStack_18._0_1_ = 0x1c;
            FUN_004e9540(DAT_01262ef4);
            if (0xf < uStack_100) {
              puStack_140 = (uint *)local_114;
                    /* WARNING: Subroutine does not return */
              puStack_144 = (uint *)&UNK_00590e88;
              FUN_00aae91b();
            }
            pvStack_18 = (void *)((uint)pvStack_18._1_3_ << 8);
            uStack_100 = 0xf;
            uStack_104 = 0;
            local_114 = local_114 & 0xffffff00;
            if (0xf < uStack_e4) {
              puStack_140 = (uint *)uStack_f8;
                    /* WARNING: Subroutine does not return */
              puStack_144 = (uint *)&UNK_00590eb3;
              FUN_00aae91b();
            }
            uStack_f8 = uStack_f8 & 0xffffff00;
          }
          uStack_e4 = 0xf;
          uStack_e8 = 0;
          uStack_100 = 0xf;
          uStack_104 = 0;
          puStack_140 = (uint *)0x3;
          puStack_144 = (uint *)0x590eda;
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))();
        }
        if (iStack_74 == 0) {
          ExceptionList = pvStack_18;
          return;
        }
        uStack_138._0_4_ = (int **)iStack_74;
                    /* WARNING: Subroutine does not return */
        puStack_13c = (uint *)&UNK_00590eeb;
        FUN_00aae91b();
      }
      local_114 = *(uint *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar3 * 4);
      local_78 = piVar3 + 1;
      if (iVar4 == 0) {
        uStack_138._4_4_ = (undefined1 *)0x188;
        uStack_138._0_4_ = (int **)0x590235;
        piStack_124 = (int *)FUN_00aae9af();
        local_c._0_1_ = 1;
        if (piStack_124 == (int *)0x0) {
          iVar4 = 0;
          uVar11 = uStack_80;
        }
        else {
          uStack_138._4_4_ = (undefined1 *)0x59024f;
          iVar4 = FUN_0041a160();
          uVar11 = uStack_80;
        }
        iVar15 = DAT_0131bb34;
        local_c = CONCAT31(local_c._1_3_,2);
        piStack_124 = (int *)0x0;
        if ((iVar4 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
          uStack_138._4_4_ = (undefined1 *)DAT_0131bb34;
          uStack_138._0_4_ = (int **)0x590276;
          uStack_80 = uVar11;
          FUN_0096dd80();
          uStack_138._4_4_ = (undefined1 *)iVar15;
                    /* WARNING: Subroutine does not return */
          uStack_138._0_4_ = (int **)&UNK_0059027c;
          FUN_00aae91b();
        }
        local_c = (uint)local_c._1_3_ << 8;
        in_ECX = local_10c[0];
        DAT_0131bb34 = iVar4;
      }
      piVar10 = (int *)(*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2);
      piVar3 = local_78;
    } while ((int)piVar10 < 1);
    local_110 = 0;
    piStack_124 = piVar10;
    do {
      iStack_94 = *(int *)(local_110 + *(int *)(local_114 + 0x194));
      iVar4 = DAT_0131bb34;
      in_ECX = local_10c[0];
      piVar3 = local_78;
joined_r0x005902da:
      iVar15 = iStack_94;
      DAT_0131bb34 = iVar4;
      local_10c[0] = in_ECX;
      local_78 = piVar3;
      if (iVar15 != 0) {
        iStack_94 = *(int *)(iVar15 + 0x27c);
        iVar4 = *(int *)(*(int *)(in_ECX + 0x48) + 0x50);
        puStack_13c = *(uint **)(*(int *)(iVar15 + 0xa4) + 4 + iVar4 * 8);
        puStack_140 = *(uint **)(*(int *)(iVar15 + 0xa4) + iVar4 * 8);
        puStack_144 = (uint *)0x590322;
        uStack_138 = uStack_90;
        uStack_80 = uVar11;
        lVar12 = __allmul();
        uVar5 = (uint)(lVar12 >> 0xf);
        puVar7 = (uint *)(iVar15 + 0x118);
        uVar1 = *puVar7;
        *puVar7 = *puVar7 + uVar5;
        *(int *)(iVar15 + 0x11c) =
             *(int *)(iVar15 + 0x11c) + (int)((ulonglong)(lVar12 >> 0xf) >> 0x20) +
             (uint)CARRY4(uVar1,uVar5);
        if (*(int *)(iVar15 + 0x11c) < 1) {
          if (*(int *)(iVar15 + 0x11c) < 0) {
            *(undefined4 *)(iVar15 + 0x118) = 0;
            *(undefined4 *)(iVar15 + 0x11c) = 0;
          }
          if ((-1 < *(int *)(iVar15 + 0x11c)) &&
             ((0 < *(int *)(iVar15 + 0x11c) || (0x50000 < *(uint *)(iVar15 + 0x118)))))
          goto LAB_00590369;
        }
        else {
LAB_00590369:
          *(undefined4 *)(iVar15 + 0x118) = 0x50000;
          *(undefined4 *)(iVar15 + 0x11c) = 0;
        }
        iVar4 = 1;
        uVar11 = uStack_80;
        if (4 < (int)(*(int *)(local_d0[0] + 0x10) - *(int *)(local_d0[0] + 0xc) & 0xfffffffcU)) {
          do {
            iVar16 = *(int *)(*(int *)(local_d0[0] + 0xc) + iVar4 * 4);
            puStack_13c = *(uint **)(local_70 + 4 + iVar4 * 8);
            puStack_140 = *(uint **)(local_70 + iVar4 * 8);
            puStack_144 = (uint *)0x5903c3;
            uStack_138 = uStack_88;
            lVar12 = __allmul();
            iVar16 = *(int *)(iVar16 + 0x28);
            uStack_138 = lVar12 >> 0xf;
            puStack_13c = *(uint **)(*(int *)(iVar15 + 0x7c) + 4 + iVar16 * 8);
            puStack_140 = *(uint **)(*(int *)(iVar15 + 0x7c) + iVar16 * 8);
            puStack_144 = (uint *)0x5903e0;
            lVar12 = __allmul();
            uVar5 = (uint)(lVar12 >> 0xf);
            puVar7 = (uint *)(iVar15 + 0x120);
            uVar1 = *puVar7;
            *puVar7 = *puVar7 + uVar5;
            *(int *)(iVar15 + 0x124) =
                 *(int *)(iVar15 + 0x124) + (int)((ulonglong)(lVar12 >> 0xf) >> 0x20) +
                 (uint)CARRY4(uVar1,uVar5);
            if (*(int *)(iVar15 + 0x124) < 1) {
              if (*(int *)(iVar15 + 0x124) < 0) {
                *(undefined4 *)(iVar15 + 0x120) = 0;
                *(undefined4 *)(iVar15 + 0x124) = 0;
              }
              if ((-1 < *(int *)(iVar15 + 0x124)) &&
                 ((0 < *(int *)(iVar15 + 0x124) || (0x50000 < *(uint *)(iVar15 + 0x120)))))
              goto LAB_00590429;
            }
            else {
LAB_00590429:
              *(undefined4 *)(iVar15 + 0x120) = 0x50000;
              *(undefined4 *)(iVar15 + 0x124) = 0;
            }
            iVar4 = iVar4 + 1;
            uVar11 = uStack_80;
          } while (iVar4 < *(int *)(local_d0[0] + 0x10) - *(int *)(local_d0[0] + 0xc) >> 2);
        }
        uStack_80._4_4_ = (int)((ulonglong)uVar11 >> 0x20);
        uStack_80._0_4_ = (uint)uVar11;
        if ((*(int *)(iVar15 + 0x274) == 0) ||
           (*(int *)(*(int *)(iVar15 + 0x274) + 0xc) == *(int *)(local_10c[0] + 0x48))) {
          puVar7 = (uint *)(iVar15 + 0x120);
          uVar1 = *puVar7;
          *puVar7 = *puVar7 + -(uint)uStack_80;
          *(int *)(iVar15 + 0x124) =
               (*(int *)(iVar15 + 0x124) - (uStack_80._4_4_ + (uint)((uint)uStack_80 != 0))) +
               (uint)CARRY4(uVar1,-(uint)uStack_80);
        }
        else {
          puVar7 = (uint *)(iVar15 + 0x120);
          uVar1 = *puVar7;
          *puVar7 = *puVar7 + (uint)uStack_80;
          *(int *)(iVar15 + 0x124) =
               *(int *)(iVar15 + 0x124) + uStack_80._4_4_ + (uint)CARRY4(uVar1,(uint)uStack_80);
        }
        piVar3 = local_78;
        in_ECX = local_10c[0];
        if (*(int *)(iVar15 + 0x124) < 1) goto code_r0x005904a9;
        goto LAB_005904d5;
      }
      local_110 = local_110 + 0x10;
      piStack_124 = (int *)((int)piStack_124 + -1);
    } while (piStack_124 != (int *)0x0);
    piStack_124 = (int *)0x0;
    iStack_94 = 0;
  } while( true );
code_r0x005904a9:
  if (*(int *)(iVar15 + 0x124) < 0) {
    *(undefined4 *)(iVar15 + 0x120) = 0;
    *(undefined4 *)(iVar15 + 0x124) = 0;
  }
  iVar4 = DAT_0131bb34;
  if ((-1 < *(int *)(iVar15 + 0x124)) &&
     ((0 < *(int *)(iVar15 + 0x124) || (0x50000 < *(uint *)(iVar15 + 0x120))))) {
LAB_005904d5:
    *(undefined4 *)(iVar15 + 0x124) = 0;
    *(undefined4 *)(iVar15 + 0x120) = 0x50000;
    iVar4 = DAT_0131bb34;
  }
  goto joined_r0x005902da;
}

