// FUN_0090f6b0 @ 0090f6b0 body=[[0090f6b0, 0090f923] [0090f927, 0090f959] [0090f95d, 0090fac3] [0090fac7, 0090fafa] [0090fafe, 0090fcbc] [0090fcc0, 0090fceb] [0090fcef, 0090fd1a] [0090fd1e, 0090ff22] [0090ff26, 009100dd] [009100e1, 00910112] [00910116, 00910142] [00910146, 00910172] [00910176, 0091019c] [009101a0, 009101c3] [009101c7, 009101f5] [009101f9, 009102e3] [009102e7, 00910346] [0091034a, 009110bc] [009110c0, 009110d4]]


void FUN_0090f6b0(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int in_ECX;
  uint uVar14;
  int extraout_EDX;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_23c [104];
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  uint *puStack_1cc;
  undefined4 **ppuStack_1c8;
  undefined4 **ppuStack_1c4;
  uint *puStack_1c0;
  undefined4 **ppuStack_1bc;
  undefined4 **ppuStack_1b8;
  undefined4 *puStack_1b4;
  undefined4 uStack_19c;
  undefined4 uStack_194;
  undefined4 *puStack_190;
  undefined4 *puStack_18c;
  undefined4 *puStack_188;
  undefined4 *apuStack_184 [3];
  int iStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  undefined1 auStack_168 [12];
  undefined4 uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_14c [16];
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined4 local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint auStack_110 [3];
  undefined4 uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined1 auStack_f4 [12];
  undefined4 uStack_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined1 auStack_dc [12];
  undefined4 local_d0;
  uint local_cc;
  undefined4 *local_c8 [3];
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b0;
  undefined1 auStack_ac [12];
  undefined4 uStack_a0;
  uint uStack_9c;
  uint auStack_78 [4];
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_5c;
  undefined1 auStack_58 [12];
  undefined4 uStack_4c;
  uint uStack_48;
  void *pvStack_24;
  undefined1 uStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b96d1a;
  pvStack_14 = ExceptionList;
  iVar7 = *(int *)(in_ECX + 0x3c);
  local_128 = *(undefined4 *)
               (*(int *)(DAT_012588e8 + 0xacc) +
               *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0xc) * 4) + 0xbe4) *
               4);
  if (*(int *)(iVar7 + 0xc) == *(int *)(DAT_012588e8 + 0xb60)) {
    local_128 = *(undefined4 *)
                 (*(int *)(DAT_012588e8 + 0xacc) +
                 *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x14) * 4) + 0xbe4)
                 * 4);
  }
  local_d0 = 0;
  local_cc = 0;
  local_c8[0] = (undefined4 *)0x0;
  local_c = 0;
  puStack_1b4 = &local_d0;
  ppuStack_1b8 = (undefined4 **)0x90f76a;
  ExceptionList = &pvStack_14;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x44))();
  uStack_194 = CONCAT13(uVar3,(undefined3)uStack_194);
  ppuStack_1b8 = (undefined4 **)0x90f778;
  cVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x6c))();
  if (cVar4 != '\0') {
    ppuStack_1b8 = *(undefined4 ***)
                    (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    ppuStack_1bc = (undefined4 **)0x90f7a7;
    puVar5 = (undefined4 *)FUN_005061e0();
    ppuStack_1bc = (undefined4 **)0x90f7bb;
    ppuStack_1b8 = (undefined4 **)puVar5;
    apuStack_184[0] = puVar5;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x80))();
    ppuStack_1bc = (undefined4 **)0x5;
    puStack_1c0 = (uint *)0xdfdeac;
    uStack_170 = 0xf;
    uStack_174 = 0;
    apuStack_184[0] = (undefined4 *)((uint)apuStack_184[0] & 0xffffff00);
    ppuStack_1c4 = (undefined4 **)0x90f7dc;
    FUN_00409350();
    pvStack_14._0_1_ = 1;
    ppuStack_1bc = (undefined4 **)0x90f809;
    puVar6 = (undefined1 *)FUN_004f97a0();
    ppuStack_1bc = (undefined4 **)0xffffffff;
    pvStack_14._0_1_ = 2;
    puStack_1c0 = (uint *)0x0;
    ppuStack_1c4 = apuStack_184;
    uStack_154 = 0xf;
    uStack_158 = 0;
    auStack_168[0] = 0;
    ppuStack_1c8 = (undefined4 **)0x90f837;
    FUN_00408ed0();
    pvStack_14._0_1_ = 3;
    ppuStack_1bc = (undefined4 **)0xffffffff;
    puStack_1c0 = (uint *)0x0;
    uStack_138 = 0xf;
    uStack_13c = 0;
    auStack_14c[0] = 0;
    ppuStack_1c8 = (undefined4 **)0x90f867;
    ppuStack_1c4 = (undefined4 **)puVar6;
    FUN_00408ed0();
    pvStack_14._0_1_ = 4;
    iVar7 = puVar5[1];
    ppuStack_1bc = (undefined4 **)0x44;
    puStack_1c0 = (uint *)0x90f87d;
    puVar6 = (undefined1 *)FUN_00aae9af();
    pvStack_14._0_1_ = 5;
    uVar3 = pvStack_14._0_1_;
    pvStack_14._0_1_ = 5;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      pvStack_14._0_1_ = uVar3;
    }
    else {
      ppuStack_1bc = (undefined4 **)0xffffffff;
      puStack_1c0 = (uint *)0x0;
      ppuStack_1c4 = (undefined4 **)auStack_168;
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      ppuStack_1c8 = (undefined4 **)0x90f8ae;
      FUN_00408ed0();
      ppuStack_1bc = (undefined4 **)0xffffffff;
      pvStack_14._0_1_ = 6;
      puStack_1c0 = (uint *)0x0;
      ppuStack_1c4 = (undefined4 **)auStack_14c;
      *(undefined4 *)(puVar6 + 0x30) = 0xf;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      puVar6[0x1c] = 0;
      ppuStack_1c8 = (undefined4 **)0x90f8d3;
      FUN_00408ed0();
      *(int *)(puVar6 + 0x38) = iVar7;
      *(undefined4 *)(puVar6 + 0x3c) = 0;
      puVar6[0x40] = 0;
    }
    iVar8 = puStack_188[2];
    puStack_188[1] = puVar6;
    puStack_188[2] = iVar8 + 1;
    if (iVar8 == 0) {
      *puStack_188 = puVar6;
    }
    else {
      *(undefined1 **)(iVar7 + 0x3c) = puVar6;
    }
    ppuStack_1bc = (undefined4 **)0x90f90d;
    FUN_00a39a80();
    if (0xf < uStack_118) {
      ppuStack_1bc = (undefined4 **)uStack_12c;
                    /* WARNING: Subroutine does not return */
      puStack_1c0 = (uint *)&UNK_0090f924;
      FUN_00aae91b();
    }
    pvStack_14._0_1_ = 0;
    uStack_118 = 0xf;
    uStack_11c = 0;
    uStack_12c = uStack_12c & 0xffffff00;
    if (0xf < uStack_170) {
      ppuStack_1bc = (undefined4 **)apuStack_184[0];
                    /* WARNING: Subroutine does not return */
      puStack_1c0 = (uint *)&UNK_0090f95a;
      FUN_00aae91b();
    }
    ppuStack_1bc = (undefined4 **)0x9;
    puStack_1c0 = (uint *)0xdfe8c8;
    uStack_170 = 0xf;
    uStack_174 = 0;
    apuStack_184[0] = (undefined4 *)((uint)apuStack_184[0] & 0xffffff00);
    ppuStack_1c4 = (undefined4 **)0x90f97e;
    FUN_00409350();
    pvStack_14._0_1_ = 7;
    ppuStack_1bc = (undefined4 **)0x90f9ab;
    puVar6 = (undefined1 *)FUN_004f97a0();
    ppuStack_1bc = (undefined4 **)0xffffffff;
    pvStack_14._0_1_ = 8;
    puStack_1c0 = (uint *)0x0;
    ppuStack_1c4 = apuStack_184;
    uStack_154 = 0xf;
    uStack_158 = 0;
    auStack_168[0] = 0;
    ppuStack_1c8 = (undefined4 **)0x90f9d7;
    FUN_00408ed0();
    ppuStack_1bc = (undefined4 **)0xffffffff;
    pvStack_14._0_1_ = 9;
    puStack_1c0 = (uint *)0x0;
    uStack_138 = 0xf;
    uStack_13c = 0;
    auStack_14c[0] = 0;
    ppuStack_1c8 = (undefined4 **)0x90fa03;
    ppuStack_1c4 = (undefined4 **)puVar6;
    FUN_00408ed0();
    pvStack_14._0_1_ = 10;
    iVar7 = puStack_188[1];
    ppuStack_1bc = (undefined4 **)0x44;
    puStack_1c0 = (uint *)0x90fa1d;
    puVar6 = (undefined1 *)FUN_00aae9af();
    pvStack_14._0_1_ = 0xb;
    uVar3 = pvStack_14._0_1_;
    pvStack_14._0_1_ = 0xb;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      pvStack_14._0_1_ = uVar3;
    }
    else {
      ppuStack_1bc = (undefined4 **)0xffffffff;
      puStack_1c0 = (uint *)0x0;
      ppuStack_1c4 = (undefined4 **)auStack_168;
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      ppuStack_1c8 = (undefined4 **)0x90fa4e;
      FUN_00408ed0();
      ppuStack_1bc = (undefined4 **)0xffffffff;
      pvStack_14._0_1_ = 0xc;
      puStack_1c0 = (uint *)0x0;
      ppuStack_1c4 = (undefined4 **)auStack_14c;
      *(undefined4 *)(puVar6 + 0x30) = 0xf;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      puVar6[0x1c] = 0;
      ppuStack_1c8 = (undefined4 **)0x90fa73;
      FUN_00408ed0();
      *(int *)(puVar6 + 0x38) = iVar7;
      *(undefined4 *)(puVar6 + 0x3c) = 0;
      puVar6[0x40] = 0;
    }
    iVar8 = puStack_188[2];
    puStack_188[1] = puVar6;
    puStack_188[2] = iVar8 + 1;
    if (iVar8 == 0) {
      *puStack_188 = puVar6;
    }
    else {
      *(undefined1 **)(iVar7 + 0x3c) = puVar6;
    }
    ppuStack_1bc = (undefined4 **)0x90faad;
    FUN_00a39a80();
    if (0xf < uStack_118) {
      ppuStack_1bc = (undefined4 **)uStack_12c;
                    /* WARNING: Subroutine does not return */
      puStack_1c0 = (uint *)&UNK_0090fac4;
      FUN_00aae91b();
    }
    pvStack_14._0_1_ = 0;
    uStack_118 = 0xf;
    uStack_11c = 0;
    uStack_12c = uStack_12c & 0xffffff00;
    if (0xf < uStack_170) {
      ppuStack_1bc = (undefined4 **)apuStack_184[0];
                    /* WARNING: Subroutine does not return */
      puStack_1c0 = (uint *)&UNK_0090fafb;
      FUN_00aae91b();
    }
    ppuStack_1bc = (undefined4 **)0x11;
    puStack_1c0 = (uint *)0xdfde98;
    uStack_fc = 0xf;
    uStack_100 = 0;
    auStack_110[0] = auStack_110[0] & 0xffffff00;
    ppuStack_1c4 = (undefined4 **)0x90fb27;
    FUN_00409350();
    pvStack_14._0_1_ = 0xd;
    ppuStack_1bc = (undefined4 **)0x9;
    puStack_1c0 = (uint *)0xdf2728;
    uStack_170 = 0xf;
    uStack_174 = 0;
    apuStack_184[0] = (undefined4 *)((uint)apuStack_184[0] & 0xffffff00);
    ppuStack_1c4 = (undefined4 **)0x90fb4c;
    FUN_00409350();
    pvStack_14._0_1_ = 0xe;
    uVar3 = pvStack_14._0_1_;
    pvStack_14._0_1_ = 0xe;
    if (DAT_01262ef4 == 0) {
      ppuStack_1bc = (undefined4 **)0x44;
      puStack_1c0 = (uint *)0x90fb63;
      iVar7 = FUN_00aae9af();
      pvStack_14._0_1_ = 0xf;
      if (iVar7 == 0) {
        ppuStack_1bc = (undefined4 **)0x0;
      }
      else {
        ppuStack_1bc = (undefined4 **)0x90fb7d;
        ppuStack_1bc = (undefined4 **)FUN_006a4e30();
      }
      pvStack_14._0_1_ = 0xe;
      puStack_1c0 = (uint *)0x90fb8f;
      FUN_006a59b0();
      uVar3 = pvStack_14._0_1_;
    }
    pvStack_14._0_1_ = uVar3;
    ppuStack_1bc = (undefined4 **)auStack_110;
    puStack_1c0 = &uStack_12c;
    ppuStack_1c4 = (undefined4 **)0x90fba4;
    puVar6 = (undefined1 *)FUN_00424ce0();
    ppuStack_1bc = (undefined4 **)0xffffffff;
    pvStack_14._0_1_ = 0x10;
    puStack_1c0 = (uint *)0x0;
    ppuStack_1c4 = apuStack_184;
    uStack_154 = 0xf;
    uStack_158 = 0;
    auStack_168[0] = 0;
    ppuStack_1c8 = (undefined4 **)0x90fbd0;
    FUN_00408ed0();
    ppuStack_1bc = (undefined4 **)0xffffffff;
    pvStack_14._0_1_ = 0x11;
    puStack_1c0 = (uint *)0x0;
    uStack_138 = 0xf;
    uStack_13c = 0;
    auStack_14c[0] = 0;
    ppuStack_1c8 = (undefined4 **)0x90fbfc;
    ppuStack_1c4 = (undefined4 **)puVar6;
    FUN_00408ed0();
    pvStack_14._0_1_ = 0x12;
    iVar7 = puStack_188[1];
    ppuStack_1bc = (undefined4 **)0x44;
    puStack_1c0 = (uint *)0x90fc16;
    puVar6 = (undefined1 *)FUN_00aae9af();
    pvStack_14._0_1_ = 0x13;
    uVar3 = pvStack_14._0_1_;
    pvStack_14._0_1_ = 0x13;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      pvStack_14._0_1_ = uVar3;
    }
    else {
      ppuStack_1bc = (undefined4 **)0xffffffff;
      puStack_1c0 = (uint *)0x0;
      ppuStack_1c4 = (undefined4 **)auStack_168;
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      ppuStack_1c8 = (undefined4 **)0x90fc47;
      FUN_00408ed0();
      ppuStack_1bc = (undefined4 **)0xffffffff;
      pvStack_14._0_1_ = 0x14;
      puStack_1c0 = (uint *)0x0;
      ppuStack_1c4 = (undefined4 **)auStack_14c;
      *(undefined4 *)(puVar6 + 0x30) = 0xf;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      puVar6[0x1c] = 0;
      ppuStack_1c8 = (undefined4 **)0x90fc6c;
      FUN_00408ed0();
      *(int *)(puVar6 + 0x38) = iVar7;
      *(undefined4 *)(puVar6 + 0x3c) = 0;
      puVar6[0x40] = 0;
    }
    iVar8 = puStack_188[2];
    puStack_188[1] = puVar6;
    puStack_188[2] = iVar8 + 1;
    if (iVar8 == 0) {
      *puStack_188 = puVar6;
    }
    else {
      *(undefined1 **)(iVar7 + 0x3c) = puVar6;
    }
    ppuStack_1bc = (undefined4 **)0x90fca6;
    FUN_00a39a80();
    if (0xf < uStack_118) {
      ppuStack_1bc = (undefined4 **)uStack_12c;
                    /* WARNING: Subroutine does not return */
      puStack_1c0 = (uint *)&UNK_0090fcbd;
      FUN_00aae91b();
    }
    uStack_118 = 0xf;
    uStack_11c = 0;
    uStack_12c = uStack_12c & 0xffffff00;
    if (0xf < uStack_170) {
      ppuStack_1bc = (undefined4 **)apuStack_184[0];
                    /* WARNING: Subroutine does not return */
      puStack_1c0 = (uint *)&UNK_0090fcec;
      FUN_00aae91b();
    }
    pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
    uStack_170 = 0xf;
    uStack_174 = 0;
    apuStack_184[0] = (undefined4 *)((uint)apuStack_184[0] & 0xffffff00);
    if (0xf < uStack_fc) {
      ppuStack_1bc = (undefined4 **)auStack_110[0];
                    /* WARNING: Subroutine does not return */
      puStack_1c0 = (uint *)&UNK_0090fd1b;
      FUN_00aae91b();
    }
    ppuStack_1bc = (undefined4 **)0x90fd28;
    iVar7 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x54))();
    if (iVar7 != 0x15b) {
      uStack_19c = *(int **)(*(int *)(in_ECX + 0x3c) + 0xc);
      ppuStack_1bc = (undefined4 **)&stack0xfffffe58;
      puStack_1c0 = (uint *)-*(int *)(*(int *)(DAT_012586dc + 0x30) + iVar7 * 4);
      ppuStack_1c4 = (undefined4 **)0x90fd9e;
      FUN_0092f5b0();
    }
    ppuStack_1bc = (undefined4 **)0x90fda8;
    iVar7 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x50))();
    if (iVar7 != 0x15b) {
      iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_ECX + 0x3c) + 0xc) * 4);
      *(int *)(iVar8 + 0x65c) =
           *(int *)(iVar8 + 0x65c) - *(int *)(*(int *)(DAT_012586dc + 0x30) + iVar7 * 4);
      if (*(int *)(iVar8 + 0x65c) < 0) {
        *(undefined4 *)(iVar8 + 0x65c) = 0;
      }
      if (9000 < *(int *)(iVar8 + 0x65c)) {
        *(undefined4 *)(iVar8 + 0x65c) = 9000;
      }
    }
    ppuStack_1bc = (undefined4 **)0x90fe0d;
    iVar8 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x58))();
    iVar7 = DAT_012587e4;
    if (iVar8 != 0x15b) {
      ppuStack_1bc = *(undefined4 ***)(*(int *)(DAT_012586dc + 0x30) + iVar8 * 4);
      puStack_1c0 = (uint *)0x90fe5b;
      FUN_005179e0();
    }
    ppuStack_1bc = *(undefined4 ***)
                    (*(int *)(iVar7 + 4) + *(int *)(*(int *)(in_ECX + 0x3c) + 0xc) * 4);
    puStack_1c0 = (uint *)0x90fe76;
    FUN_00515490();
    ppuStack_1bc = *(undefined4 ***)
                    (*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_ECX + 0x3c) + 0x14) * 4);
    puStack_1c0 = (uint *)0x90fe95;
    FUN_00515490();
    if (*(int *)(*(int *)(in_ECX + 0x3c) + 0xc) == *(int *)(DAT_012588e8 + 0xb60)) {
      ppuStack_1bc = (undefined4 **)0x11;
      puStack_1c0 = (uint *)0xe33850;
      uStack_fc = 0xf;
      uStack_100 = 0;
      auStack_110[0] = auStack_110[0] & 0xffffff00;
      ppuStack_1c4 = (undefined4 **)0x90fee6;
      FUN_00409350();
      pvStack_14._0_1_ = 0x15;
      ppuStack_1bc = (undefined4 **)0x90fef3;
      piVar9 = (int *)FUN_009c7290();
      ppuStack_1bc = (undefined4 **)auStack_110;
      puStack_1c0 = (uint *)0x90ff04;
      (**(code **)(*piVar9 + 0x60))();
      pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
      if (0xf < uStack_fc) {
        ppuStack_1bc = (undefined4 **)auStack_110[0];
                    /* WARNING: Subroutine does not return */
        puStack_1c0 = (uint *)&UNK_0090ff23;
        FUN_00aae91b();
      }
    }
    ppuStack_1bc = local_c8;
    puStack_1c0 = (uint *)0x90ff38;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x28))();
    uStack_18 = 0x16;
    if (iStack_bc == 0) {
      puStack_1c0 = (uint *)0x90ff53;
      cVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2c))();
      if (cVar4 == '\0') {
        puStack_1c0 = &uStack_16c;
        ppuStack_1c4 = (undefined4 **)0x90ff66;
        ppuStack_1c8 = (undefined4 **)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x24))();
        puStack_1c0 = (uint *)0xffffffff;
        ppuStack_1c4 = (undefined4 **)0x0;
        uStack_18 = 0x17;
        puStack_1cc = (uint *)0x90ff7e;
        FUN_00408ed0();
        uStack_18 = 0x16;
        puStack_1c0 = (uint *)0x90ff8f;
        FUN_00408ad0();
        puStack_1c0 = (uint *)0x90ffc7;
        FUN_00989030();
      }
    }
    if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
      puStack_1c0 = (uint *)0x90ffe8;
      FUN_009885d0();
      uStack_18 = 0x18;
      puStack_1c0 = (uint *)0x910001;
      FUN_009885d0();
      uStack_18 = 0x19;
      uVar12 = *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x14);
      puStack_1c0 = (uint *)0x910037;
      FUN_009885d0();
      uStack_18 = 0x1a;
      puStack_1c0 = (uint *)0x910054;
      uVar10 = FUN_009885d0();
      uStack_18 = 0x1b;
      puStack_1c0 = &uStack_b0;
      ppuStack_1c4 = (undefined4 **)0x910070;
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x24))();
      uStack_1c = 0x1c;
      ppuStack_1c8 = (undefined4 **)0x910087;
      ppuStack_1c4 = (undefined4 **)uVar10;
      FUN_00988f20();
      uStack_1c = 0x1d;
      ppuStack_1c8 = (undefined4 **)0x9100a2;
      ppuStack_1c4 = (undefined4 **)uVar12;
      uStack_1d0 = FUN_00988f20();
      ppuStack_1c4 = (undefined4 **)0x0;
      ppuStack_1c8 = &puStack_18c;
      uStack_1c = 0x1e;
      puStack_1cc = &uStack_118;
      uStack_1d4 = 0x9100c7;
      (**(code **)(*uStack_19c + 0x120))();
      if (0xf < uStack_64) {
        puStack_1c0 = (uint *)auStack_78[0];
                    /* WARNING: Subroutine does not return */
        ppuStack_1c4 = (undefined4 **)&UNK_009100de;
        FUN_00aae91b();
      }
      uStack_64 = 0xf;
      uStack_68 = 0;
      auStack_78[0] = auStack_78[0] & 0xffffff00;
      if (0xf < uStack_48) {
        puStack_1c0 = (uint *)uStack_5c;
                    /* WARNING: Subroutine does not return */
        ppuStack_1c4 = (undefined4 **)&UNK_00910113;
        FUN_00aae91b();
      }
      uStack_48 = 0xf;
      uStack_4c = 0;
      uStack_5c = uStack_5c & 0xffffff00;
      if (0xf < uStack_9c) {
        puStack_1c0 = (uint *)uStack_b0;
                    /* WARNING: Subroutine does not return */
        ppuStack_1c4 = (undefined4 **)&UNK_00910143;
        FUN_00aae91b();
      }
      uStack_9c = 0xf;
      uStack_a0 = 0;
      uStack_b0 = uStack_b0 & 0xffffff00;
      if (0xf < uStack_e4) {
        puStack_1c0 = (uint *)uStack_f8;
                    /* WARNING: Subroutine does not return */
        ppuStack_1c4 = (undefined4 **)&UNK_00910173;
        FUN_00aae91b();
      }
      uStack_e4 = 0xf;
      uStack_e8 = 0;
      uStack_f8 = uStack_f8 & 0xffffff00;
      if (0xf < uStack_158) {
        puStack_1c0 = (uint *)uStack_16c;
                    /* WARNING: Subroutine does not return */
        ppuStack_1c4 = (undefined4 **)&UNK_0091019d;
        FUN_00aae91b();
      }
      uStack_158 = 0xf;
      uStack_15c = 0;
      uStack_16c = uStack_16c & 0xffffff00;
      if (0xf < uStack_100) {
        puStack_1c0 = (uint *)uStack_114;
                    /* WARNING: Subroutine does not return */
        ppuStack_1c4 = (undefined4 **)&UNK_009101c4;
        FUN_00aae91b();
      }
      uStack_18 = 0x16;
      uStack_100 = 0xf;
      uStack_104 = 0;
      uStack_114 = uStack_114 & 0xffffff00;
      if (0xf < uStack_174) {
        puStack_1c0 = puStack_188;
                    /* WARNING: Subroutine does not return */
        ppuStack_1c4 = (undefined4 **)&UNK_009101f6;
        FUN_00aae91b();
      }
      uStack_174 = 0xf;
      iStack_178 = 0;
      puStack_188 = (undefined4 *)((uint)puStack_188 & 0xffffff00);
    }
    if (iStack_bc != 0) {
      puStack_1c0 = (uint *)0x910224;
      FUN_009885d0();
      uStack_18 = 0x1f;
      iVar7 = *(int *)(in_ECX + 0x3c);
      uVar12 = *(undefined4 *)(iVar7 + 0x14);
      uVar10 = *(undefined4 *)(iVar7 + 0x10);
      uVar17 = *(undefined4 *)(iVar7 + 0xc);
      uVar16 = *(undefined4 *)(iVar7 + 8);
      uVar14 = -(uint)(uStack_19c._3_1_ != '\0') & (uint)auStack_dc;
      puVar15 = &uStack_130;
      puVar5 = puStack_18c;
      FUN_006a4f40(puStack_18c,uStack_134,puVar15,uVar14,uVar16,uVar17,uVar10,uVar12);
      uVar11 = FUN_006a55b0();
      FUN_006a7ed0(auStack_23c,uVar11,puVar5,uStack_134,puVar15,uVar14,uVar16,uVar17,uVar10,uVar12);
      uStack_18 = 0x20;
      FUN_006a4f40();
      uVar12 = FUN_006a4f40();
      uStack_18 = 0x1f;
      FUN_004e9540(uVar12);
      if (0xf < uStack_11c) {
        puStack_1c0 = (uint *)uStack_130;
                    /* WARNING: Subroutine does not return */
        ppuStack_1c4 = (undefined4 **)&UNK_009102e4;
        FUN_00aae91b();
      }
      uStack_11c = 0xf;
      uStack_120 = 0;
      uStack_130 = uStack_130 & 0xffffff00;
    }
    iVar7 = *(int *)(in_ECX + 0x3c);
    ppuStack_1c8 = *(undefined4 ***)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0xc) * 4);
    puStack_1c0 = *(uint **)(iVar7 + 0x14);
    ppuStack_1c4 = *(undefined4 ***)(iVar7 + 0x10);
    puStack_1cc = (uint *)0x910328;
    FUN_00516470();
    uStack_18 = 0;
    if (0xf < uStack_b8) {
      puStack_1c0 = (uint *)local_cc;
                    /* WARNING: Subroutine does not return */
      ppuStack_1c4 = (undefined4 **)&UNK_00910347;
      FUN_00aae91b();
    }
    uStack_b8 = 0xf;
    iStack_bc = 0;
    local_cc = local_cc & 0xffffff00;
    goto LAB_00911094;
  }
  iVar7 = *(int *)(in_ECX + 0x3c);
  if (*(int *)(iVar7 + 0x24) == 3) {
    iVar8 = *(int *)(DAT_012587e4 + 4);
    puVar5 = *(undefined4 **)(iVar8 + *(int *)(iVar7 + 0xc) * 4);
    apuStack_184[0] = *(undefined4 **)(iVar8 + *(int *)(iVar7 + 0x14) * 4);
    ppuStack_1b8 = *(undefined4 ***)(iVar8 + *(int *)(DAT_012588e8 + 0xb60) * 4);
    ppuStack_1bc = (undefined4 **)0x9103c1;
    puVar13 = (undefined4 *)FUN_005061e0();
    ppuStack_1bc = (undefined4 **)0x9103d5;
    ppuStack_1b8 = (undefined4 **)puVar13;
    puStack_18c = puVar13;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x80))();
    ppuStack_1bc = (undefined4 **)0x9103e3;
    FUN_009885d0();
    pvStack_14._0_1_ = 0x21;
    ppuStack_1bc = (undefined4 **)0x9103fb;
    ppuStack_1bc = (undefined4 **)FUN_004f97a0();
    ppuStack_1c4 = (undefined4 **)auStack_ac;
    pvStack_14._0_1_ = 0x22;
    ppuStack_1c8 = (undefined4 **)0x910414;
    puStack_1c0 = (uint *)auStack_168;
    FUN_00424aa0();
    pvStack_14._0_1_ = 0x23;
    iVar7 = puVar13[1];
    ppuStack_1bc = (undefined4 **)0x44;
    puStack_1c0 = (uint *)0x91042c;
    iVar8 = FUN_00aae9af();
    pvStack_14._0_1_ = 0x24;
    if (iVar8 == 0) {
      uVar12 = 0;
    }
    else {
      ppuStack_1c4 = (undefined4 **)0x91044c;
      puStack_1c0 = (uint *)iVar8;
      ppuStack_1bc = (undefined4 **)iVar7;
      uVar12 = FUN_0042b900();
    }
    iVar8 = puVar13[2];
    puVar13[1] = uVar12;
    puVar13[2] = iVar8 + 1;
    if (iVar8 == 0) {
      *puVar13 = uVar12;
    }
    else {
      *(undefined4 *)(iVar7 + 0x3c) = uVar12;
    }
    ppuStack_1bc = (undefined4 **)0x910477;
    FUN_00a39a80();
    ppuStack_1bc = (undefined4 **)0x910483;
    FUN_00408ad0();
    pvStack_14._0_1_ = 0;
    ppuStack_1bc = (undefined4 **)0x910494;
    FUN_00408ad0();
    ppuStack_1bc = (undefined4 **)0x9104a2;
    FUN_009885d0();
    pvStack_14._0_1_ = 0x25;
    ppuStack_1bc = (undefined4 **)0x9104ba;
    ppuStack_1bc = (undefined4 **)FUN_004f97a0();
    ppuStack_1c4 = (undefined4 **)auStack_ac;
    pvStack_14._0_1_ = 0x26;
    ppuStack_1c8 = (undefined4 **)0x9104d3;
    puStack_1c0 = (uint *)auStack_168;
    FUN_00424aa0();
    pvStack_14._0_1_ = 0x27;
    iVar7 = puVar13[1];
    ppuStack_1bc = (undefined4 **)0x44;
    puStack_1c0 = (uint *)0x9104eb;
    iVar8 = FUN_00aae9af();
    pvStack_14._0_1_ = 0x28;
    if (iVar8 == 0) {
      uVar12 = 0;
    }
    else {
      ppuStack_1c4 = (undefined4 **)0x91050b;
      puStack_1c0 = (uint *)iVar8;
      ppuStack_1bc = (undefined4 **)iVar7;
      uVar12 = FUN_0042b900();
    }
    iVar8 = puVar13[2];
    puVar13[1] = uVar12;
    puVar13[2] = iVar8 + 1;
    if (iVar8 == 0) {
      *puVar13 = uVar12;
    }
    else {
      *(undefined4 *)(iVar7 + 0x3c) = uVar12;
    }
    ppuStack_1bc = (undefined4 **)0x910536;
    FUN_00a39a80();
    ppuStack_1bc = (undefined4 **)0x910542;
    FUN_00408ad0();
    pvStack_14._0_1_ = 0;
    ppuStack_1bc = (undefined4 **)0x910553;
    FUN_00408ad0();
    ppuStack_1bc = (undefined4 **)0x910564;
    FUN_009885d0();
    pvStack_14._0_1_ = 0x29;
    ppuStack_1bc = (undefined4 **)0x91057a;
    FUN_009885d0();
    pvStack_14._0_1_ = 0x2a;
    ppuStack_1bc = (undefined4 **)0x910587;
    FUN_006a4f40();
    ppuStack_1bc = (undefined4 **)auStack_f4;
    puStack_1c0 = (uint *)auStack_ac;
    ppuStack_1c4 = (undefined4 **)0x91059c;
    ppuStack_1bc = (undefined4 **)FUN_00424ce0();
    ppuStack_1c4 = (undefined4 **)auStack_58;
    pvStack_14._0_1_ = 0x2b;
    ppuStack_1c8 = (undefined4 **)0x9105b5;
    puStack_1c0 = (uint *)auStack_168;
    FUN_00424aa0();
    pvStack_14._0_1_ = 0x2c;
    iVar7 = puVar13[1];
    ppuStack_1bc = (undefined4 **)0x44;
    puStack_1c0 = (uint *)0x9105cd;
    iVar8 = FUN_00aae9af();
    pvStack_14._0_1_ = 0x2d;
    if (iVar8 == 0) {
      uVar12 = 0;
    }
    else {
      ppuStack_1c4 = (undefined4 **)0x9105ed;
      puStack_1c0 = (uint *)iVar8;
      ppuStack_1bc = (undefined4 **)iVar7;
      uVar12 = FUN_0042b900();
    }
    iVar8 = puVar13[2];
    puVar13[1] = uVar12;
    puVar13[2] = iVar8 + 1;
    if (iVar8 == 0) {
      *puVar13 = uVar12;
    }
    else {
      *(undefined4 *)(iVar7 + 0x3c) = uVar12;
    }
    ppuStack_1bc = (undefined4 **)0x910618;
    FUN_00a39a80();
    ppuStack_1bc = (undefined4 **)0x910624;
    FUN_00408ad0();
    ppuStack_1bc = (undefined4 **)0x91062d;
    FUN_00408ad0();
    pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
    ppuStack_1bc = (undefined4 **)0x910641;
    FUN_00408ad0();
    ppuStack_1bc = (undefined4 **)0x91064b;
    iVar7 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x58))();
    if (iVar7 != 0x15b) {
      ppuStack_1bc = *(undefined4 ***)(*(int *)(DAT_012586dc + 0x30) + iVar7 * 4);
      puStack_1c0 = (uint *)0x910689;
      FUN_005179e0();
      puVar13 = puVar5;
    }
    iVar7 = *(int *)(uStack_194 + 0xd6c);
    iVar8 = *(int *)(uStack_194 + 0xd68);
    iVar1 = puStack_188[0x35b];
    iVar2 = puStack_188[0x35a];
    ppuStack_1bc = (undefined4 **)uStack_194;
    puStack_1c0 = (uint *)0x9106bd;
    FUN_00515490();
    ppuStack_1bc = (undefined4 **)puStack_188;
    puStack_1c0 = (uint *)0x9106c7;
    FUN_00515490();
    if ((iVar7 - iVar8 >> 3 != *(int *)(uStack_194 + 0xd6c) - *(int *)(uStack_194 + 0xd68) >> 3) ||
       (iVar1 - iVar2 >> 3 != (int)(puStack_188[0x35b] - puStack_188[0x35a]) >> 3)) {
      ppuStack_1bc = (undefined4 **)DAT_012588e8;
      puStack_1c0 = (uint *)0x910700;
      FUN_0068c040();
    }
    if (*(int *)(*(int *)(in_ECX + 0x3c) + 0xc) == *(int *)(DAT_012588e8 + 0xb60)) {
      ppuStack_1bc = (undefined4 **)0x910736;
      FUN_009885d0();
      pvStack_14._0_1_ = 0x2e;
      ppuStack_1bc = (undefined4 **)0x910743;
      piVar9 = (int *)FUN_009c7290();
      puStack_1c0 = (uint *)0x91074f;
      ppuStack_1bc = (undefined4 **)auStack_168;
      (**(code **)(*piVar9 + 0x60))();
      pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
      ppuStack_1bc = (undefined4 **)0x91075e;
      FUN_00408ad0();
    }
    ppuStack_1bc = apuStack_184;
    puStack_1c0 = (uint *)0x910771;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x28))();
    uStack_18 = 0x2f;
    if (iStack_178 == 0) {
      puStack_1c0 = (uint *)0x91078a;
      cVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2c))();
      if (cVar4 == '\0') {
        puStack_1c0 = &uStack_16c;
        ppuStack_1c4 = (undefined4 **)0x91079d;
        ppuStack_1c8 = (undefined4 **)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x24))();
        puStack_1c0 = (uint *)0xffffffff;
        ppuStack_1c4 = (undefined4 **)0x0;
        uStack_18 = 0x30;
        puStack_1cc = (uint *)0x9107b3;
        FUN_00408ed0();
        uStack_18 = 0x2f;
        puStack_1c0 = (uint *)0x9107c4;
        FUN_00408ad0();
        puStack_1c0 = (uint *)0x9107f9;
        FUN_00989030();
      }
    }
    if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
      puStack_1c0 = (uint *)0x91081d;
      FUN_009885d0();
      uStack_18 = 0x31;
      puStack_1c0 = (uint *)0x910833;
      FUN_009885d0();
      uStack_18 = 0x32;
      piVar9 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x14);
      puStack_1c0 = (uint *)0x91086c;
      FUN_009885d0();
      uStack_18 = 0x33;
      puStack_1c0 = (uint *)0x910889;
      uVar12 = FUN_009885d0();
      uStack_18 = 0x34;
      puStack_1c0 = auStack_78;
      ppuStack_1c4 = (undefined4 **)0x9108a5;
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x24))();
      uStack_1c = 0x35;
      ppuStack_1c8 = (undefined4 **)0x9108bc;
      ppuStack_1c4 = (undefined4 **)uVar12;
      FUN_00988f20();
      uStack_1c = 0x36;
      ppuStack_1c8 = (undefined4 **)0x9108d7;
      uStack_1d0 = FUN_00988f20();
      ppuStack_1c4 = (undefined4 **)0x0;
      ppuStack_1c8 = (undefined4 **)&uStack_fc;
      uStack_1c = 0x37;
      puStack_1cc = &uStack_170;
      uStack_1d4 = 0x9108fd;
      (**(code **)(*piVar9 + 0x120))();
      puStack_1c0 = (uint *)0x910909;
      FUN_00408ad0();
      puStack_1c0 = (uint *)0x910915;
      FUN_00408ad0();
      puStack_1c0 = (uint *)0x910921;
      FUN_00408ad0();
      puStack_1c0 = (uint *)0x91092d;
      FUN_00408ad0();
      puStack_1c0 = (uint *)0x910939;
      FUN_00408ad0();
      puStack_1c0 = (uint *)0x910940;
      FUN_00408ad0();
      uStack_18 = 0x2f;
      puStack_1c0 = (uint *)0x910954;
      FUN_00408ad0();
    }
    if (iStack_178 != 0) {
      puStack_1c0 = (uint *)0x91096d;
      FUN_009885d0();
      uStack_18 = 0x38;
      iVar7 = *(int *)(in_ECX + 0x3c);
      uVar12 = *(undefined4 *)(iVar7 + 0x14);
      uVar10 = *(undefined4 *)(iVar7 + 0x10);
      uVar17 = *(undefined4 *)(iVar7 + 0xc);
      uVar16 = *(undefined4 *)(iVar7 + 8);
      uVar14 = -(uint)(uStack_19c._3_1_ != '\0') & (uint)auStack_dc;
      puVar15 = &uStack_16c;
      FUN_006a4f40(puVar13,uStack_134,puVar15,uVar14,uVar16,uVar17,uVar10,uVar12);
      uVar11 = FUN_006a55b0();
      FUN_006a7ed0(auStack_23c,uVar11,puVar13,uStack_134,puVar15,uVar14,uVar16,uVar17,uVar10,uVar12)
      ;
      uStack_18 = 0x39;
      FUN_006a4f40();
      uVar12 = FUN_006a4f40();
      uStack_18 = 0x38;
      goto LAB_00910f3e;
    }
  }
  else {
    if (*(int *)(iVar7 + 0x24) != 2) {
      *(undefined4 *)(iVar7 + 0x24) = 1;
      ppuStack_1b8 = (undefined4 **)0x910f77;
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x8c))();
      ppuStack_1b8 = (undefined4 **)0x910f9a;
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x30))();
      ppuStack_1b8 = (undefined4 **)0x910fa1;
      FUN_005164c0();
      ppuStack_1b8 = (undefined4 **)0x910fab;
      iVar7 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x54))();
      if (iVar7 != 0x15b) {
        puStack_18c = *(undefined4 **)(*(int *)(in_ECX + 0x3c) + 0x10);
        puStack_188 = *(undefined4 **)(*(int *)(in_ECX + 0x3c) + 0x14);
        ppuStack_1b8 = &puStack_18c;
        ppuStack_1bc = (undefined4 **)-*(int *)(*(int *)(DAT_012586dc + 0x30) + iVar7 * 4);
        puStack_1c0 = (uint *)0x911027;
        FUN_0092f5b0();
      }
      ppuStack_1b8 = (undefined4 **)0x911031;
      iVar8 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x50))();
      iVar7 = DAT_012587e4;
      if (iVar8 != 0x15b) {
        puStack_1c0 = (uint *)-*(int *)(*(int *)(DAT_012586dc + 0x30) + iVar8 * 4);
        ppuStack_1c4 = (undefined4 **)0x911073;
        FUN_0051b830();
        iVar7 = extraout_EDX;
      }
      iVar8 = *(int *)(in_ECX + 0x3c);
      puStack_1c0 = *(uint **)(iVar8 + 0x14);
      ppuStack_1c4 = *(undefined4 ***)(iVar8 + 0x10);
      ppuStack_1c8 = *(undefined4 ***)(*(int *)(iVar7 + 4) + *(int *)(iVar8 + 0xc) * 4);
      puStack_1cc = (uint *)0x911094;
      FUN_00516470();
      goto LAB_00911094;
    }
    ppuStack_1b8 = *(undefined4 ***)
                    (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    ppuStack_1bc = (undefined4 **)0x910a46;
    puVar5 = (undefined4 *)FUN_005061e0();
    ppuStack_1bc = (undefined4 **)0x910a5a;
    ppuStack_1b8 = (undefined4 **)puVar5;
    puStack_18c = puVar5;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x88))();
    ppuStack_1bc = (undefined4 **)0x910a68;
    FUN_009885d0();
    pvStack_14._0_1_ = 0x3a;
    ppuStack_1bc = (undefined4 **)0x910a95;
    ppuStack_1bc = (undefined4 **)FUN_004f97a0();
    ppuStack_1c4 = (undefined4 **)auStack_58;
    pvStack_14._0_1_ = 0x3b;
    ppuStack_1c8 = (undefined4 **)0x910aae;
    puStack_1c0 = (uint *)auStack_168;
    FUN_00424aa0();
    pvStack_14._0_1_ = 0x3c;
    iVar7 = puVar5[1];
    ppuStack_1bc = (undefined4 **)0x44;
    puStack_1c0 = (uint *)0x910ac6;
    iVar8 = FUN_00aae9af();
    pvStack_14._0_1_ = 0x3d;
    if (iVar8 == 0) {
      uVar12 = 0;
    }
    else {
      ppuStack_1c4 = (undefined4 **)0x910ae6;
      puStack_1c0 = (uint *)iVar8;
      ppuStack_1bc = (undefined4 **)iVar7;
      uVar12 = FUN_0042b900();
    }
    iVar8 = puVar5[2];
    puVar5[1] = uVar12;
    puVar5[2] = iVar8 + 1;
    if (iVar8 == 0) {
      *puVar5 = uVar12;
    }
    else {
      *(undefined4 *)(iVar7 + 0x3c) = uVar12;
    }
    ppuStack_1bc = (undefined4 **)0x910b11;
    FUN_00a39a80();
    ppuStack_1bc = (undefined4 **)0x910b1d;
    FUN_00408ad0();
    pvStack_14._0_1_ = 0;
    ppuStack_1bc = (undefined4 **)0x910b2e;
    FUN_00408ad0();
    ppuStack_1bc = (undefined4 **)0x910b3f;
    FUN_009885d0();
    pvStack_14._0_1_ = 0x3e;
    ppuStack_1bc = (undefined4 **)0x910b69;
    ppuStack_1bc = (undefined4 **)FUN_004f97a0();
    ppuStack_1c4 = (undefined4 **)auStack_58;
    pvStack_14._0_1_ = 0x3f;
    ppuStack_1c8 = (undefined4 **)0x910b82;
    puStack_1c0 = (uint *)auStack_f4;
    FUN_00424aa0();
    pvStack_14._0_1_ = 0x40;
    iVar7 = puVar5[1];
    ppuStack_1bc = (undefined4 **)0x44;
    puStack_1c0 = (uint *)0x910b9a;
    iVar8 = FUN_00aae9af();
    pvStack_14._0_1_ = 0x41;
    if (iVar8 == 0) {
      uVar12 = 0;
    }
    else {
      ppuStack_1c4 = (undefined4 **)0x910bba;
      puStack_1c0 = (uint *)iVar8;
      ppuStack_1bc = (undefined4 **)iVar7;
      uVar12 = FUN_0042b900();
    }
    iVar8 = puVar5[2];
    puVar5[1] = uVar12;
    puVar5[2] = iVar8 + 1;
    if (iVar8 == 0) {
      *puVar5 = uVar12;
    }
    else {
      *(undefined4 *)(iVar7 + 0x3c) = uVar12;
    }
    ppuStack_1bc = (undefined4 **)0x910be5;
    FUN_00a39a80();
    ppuStack_1bc = (undefined4 **)0x910bee;
    FUN_00408ad0();
    pvStack_14._0_1_ = 0;
    ppuStack_1bc = (undefined4 **)0x910c02;
    FUN_00408ad0();
    ppuStack_1bc = (undefined4 **)0x910c13;
    FUN_009885d0();
    pvStack_14._0_1_ = 0x42;
    ppuStack_1bc = (undefined4 **)0x910c29;
    FUN_009885d0();
    pvStack_14._0_1_ = 0x43;
    ppuStack_1bc = (undefined4 **)0x910c36;
    FUN_006a4f40();
    ppuStack_1bc = (undefined4 **)auStack_ac;
    puStack_1c0 = (uint *)auStack_f4;
    ppuStack_1c4 = (undefined4 **)0x910c4b;
    ppuStack_1bc = (undefined4 **)FUN_00424ce0();
    ppuStack_1c4 = (undefined4 **)auStack_58;
    pvStack_14._0_1_ = 0x44;
    ppuStack_1c8 = (undefined4 **)0x910c64;
    puStack_1c0 = (uint *)auStack_168;
    FUN_00424aa0();
    pvStack_14._0_1_ = 0x45;
    iVar7 = puVar5[1];
    ppuStack_1bc = (undefined4 **)0x44;
    puStack_1c0 = (uint *)0x910c7c;
    iVar8 = FUN_00aae9af();
    pvStack_14._0_1_ = 0x46;
    if (iVar8 == 0) {
      uVar12 = 0;
    }
    else {
      ppuStack_1c4 = (undefined4 **)0x910c9c;
      puStack_1c0 = (uint *)iVar8;
      ppuStack_1bc = (undefined4 **)iVar7;
      uVar12 = FUN_0042b900();
    }
    iVar8 = puVar5[2];
    puVar5[1] = uVar12;
    puVar5[2] = iVar8 + 1;
    if (iVar8 == 0) {
      *puVar5 = uVar12;
    }
    else {
      *(undefined4 *)(iVar7 + 0x3c) = uVar12;
    }
    ppuStack_1bc = (undefined4 **)0x910cc7;
    FUN_00a39a80();
    ppuStack_1bc = (undefined4 **)0x910cd3;
    FUN_00408ad0();
    ppuStack_1bc = (undefined4 **)0x910cdc;
    FUN_00408ad0();
    pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
    ppuStack_1bc = (undefined4 **)0x910cf0;
    FUN_00408ad0();
    ppuStack_1bc = (undefined4 **)0x910cfa;
    iVar8 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x5c))();
    iVar7 = DAT_012587e4;
    if (iVar8 != 0x15b) {
      ppuStack_1bc = *(undefined4 ***)(*(int *)(DAT_012586dc + 0x30) + iVar8 * 4);
      puStack_1c0 = (uint *)0x910d48;
      FUN_005179e0();
      puVar5 = puStack_190;
    }
    ppuStack_1bc = *(undefined4 ***)
                    (*(int *)(iVar7 + 4) + *(int *)(*(int *)(in_ECX + 0x3c) + 0xc) * 4);
    puStack_1c0 = (uint *)0x910d65;
    FUN_00515490();
    ppuStack_1bc = *(undefined4 ***)
                    (*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_ECX + 0x3c) + 0x14) * 4);
    puStack_1c0 = (uint *)0x910d84;
    FUN_00515490();
    if (*(int *)(*(int *)(in_ECX + 0x3c) + 0xc) == *(int *)(DAT_012588e8 + 0xb60)) {
      ppuStack_1bc = (undefined4 **)0x910dba;
      FUN_009885d0();
      pvStack_14._0_1_ = 0x47;
      ppuStack_1bc = (undefined4 **)0x910dc7;
      piVar9 = (int *)FUN_009c7290();
      puStack_1c0 = (uint *)0x910dd3;
      ppuStack_1bc = (undefined4 **)auStack_168;
      (**(code **)(*piVar9 + 0x60))();
      pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
      ppuStack_1bc = (undefined4 **)0x910de2;
      FUN_00408ad0();
    }
    ppuStack_1bc = apuStack_184;
    puStack_1c0 = (uint *)0x910df5;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x28))();
    uStack_18 = 0x48;
    if (iStack_178 == 0) {
      puStack_1c0 = (uint *)0x910e12;
      cVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2c))();
      if (cVar4 == '\0') {
        puStack_1c0 = &uStack_16c;
        ppuStack_1c4 = (undefined4 **)0x910e25;
        ppuStack_1c8 = (undefined4 **)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x24))();
        puStack_1c0 = (uint *)0xffffffff;
        ppuStack_1c4 = (undefined4 **)0x0;
        uStack_18 = 0x49;
        puStack_1cc = (uint *)0x910e3b;
        FUN_00408ed0();
        uStack_18 = 0x48;
        puStack_1c0 = (uint *)0x910e4c;
        FUN_00408ad0();
        puStack_1c0 = (uint *)0x910e81;
        FUN_00989030();
      }
      if (iStack_178 == 0) goto LAB_00910f4d;
    }
    puStack_1c0 = (uint *)0x910e9a;
    FUN_009885d0();
    uStack_18 = 0x4a;
    iVar7 = *(int *)(in_ECX + 0x3c);
    uVar12 = *(undefined4 *)(iVar7 + 0x14);
    uVar10 = *(undefined4 *)(iVar7 + 0x10);
    uVar17 = *(undefined4 *)(iVar7 + 0xc);
    uVar16 = *(undefined4 *)(iVar7 + 8);
    uVar14 = -(uint)(uStack_19c._3_1_ != '\0') & (uint)auStack_dc;
    puVar15 = &uStack_16c;
    FUN_006a4f40(puVar5,uStack_134,puVar15,uVar14,uVar16,uVar17,uVar10,uVar12);
    uVar11 = FUN_006a55b0();
    FUN_006a7ed0(auStack_23c,uVar11,puVar5,uStack_134,puVar15,uVar14,uVar16,uVar17,uVar10,uVar12);
    uStack_18 = 0x4b;
    FUN_006a4f40();
    uVar12 = FUN_006a4f40();
    uStack_18 = 0x4a;
LAB_00910f3e:
    FUN_004e9540(uVar12);
    puStack_1c0 = (uint *)0x910f4d;
    FUN_00408ad0();
  }
LAB_00910f4d:
  uStack_18 = 0;
  puStack_1c0 = (uint *)0x910f5e;
  FUN_00408ad0();
LAB_00911094:
  puStack_1c0 = (uint *)0x6;
  ppuStack_1c4 = (undefined4 **)0x9110ac;
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))();
  if (iStack_e0 == 0) {
    ExceptionList = pvStack_24;
    return;
  }
  ppuStack_1c4 = (undefined4 **)iStack_e0;
                    /* WARNING: Subroutine does not return */
  ppuStack_1c8 = (undefined4 **)&UNK_009110bd;
  FUN_00aae91b();
}

