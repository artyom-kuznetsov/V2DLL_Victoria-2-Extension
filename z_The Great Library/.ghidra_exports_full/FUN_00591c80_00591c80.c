// FUN_00591c80 @ 00591c80 body=[[00591c80, 00591f20] [00591f24, 00591f50] [00591f54, 005920a7] [005920ab, 005920d7] [005920db, 0059222b] [0059222f, 0059225b] [0059225f, 00592366] [0059236a, 00592390] [00592394, 005924b9] [005924bd, 005924f2] [005924f6, 00592536]]


void FUN_00591c80(void)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int in_ECX;
  undefined4 unaff_EDI;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auStack_184 [112];
  undefined4 uStack_114;
  undefined1 **ppuStack_110;
  uint *puStack_10c;
  undefined8 uStack_108;
  undefined1 **ppuStack_100;
  undefined1 **ppuStack_fc;
  undefined4 uStack_ec;
  uint uStack_e4;
  uint local_e0;
  undefined1 *local_dc [2];
  undefined4 uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint auStack_c0 [2];
  undefined4 uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  uint local_a0;
  undefined1 auStack_9c [4];
  undefined1 *local_98;
  undefined4 uStack_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  uint uStack_88;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint auStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_40;
  undefined4 uStack_30;
  uint uStack_2c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb3e3b;
  pvStack_14 = ExceptionList;
  local_a0 = *(uint *)(in_ECX + 0x3c);
  ppuVar1 = *(undefined1 ***)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  ppuStack_fc = (undefined1 **)0x0;
  ppuStack_100 = (undefined1 **)0x591ccc;
  ExceptionList = &pvStack_14;
  FUN_008a8650();
  local_90 = ppuVar1[7];
  local_8c = ppuVar1[8];
  iVar6 = *(int *)(in_ECX + 0x48);
  local_dc[0] = (undefined1 *)(iVar6 + 0x1c8);
  if (*(int *)(iVar6 + 0x1d4) != 0) {
    ppuStack_fc = &local_98;
    if (*(int *)(iVar6 + 0x1d0) == 0) {
      iVar6 = **(int **)(iVar6 + 0x1d4);
    }
    else {
      ppuStack_100 = (undefined1 **)0x591d01;
      cVar4 = (**(code **)(**(int **)(iVar6 + 0x1d0) + 0x18))();
      if (cVar4 == '\0') goto LAB_00591d24;
      iVar6 = **(int **)(local_dc[0] + 0xc);
    }
    ppuStack_100 = &local_98;
    ppuStack_fc = (undefined1 **)0x0;
    uStack_108 = CONCAT44(0x591d24,(undefined4)uStack_108);
    (**(code **)(iVar6 + 0x2c))();
  }
LAB_00591d24:
  local_e0 = *(uint *)(ppuVar1[0x21c] + *(int *)(*(int *)(in_ECX + 0x44) + 0x50) * 4);
  uStack_ec = (undefined4 *)CONCAT13(1,(uint3)uStack_ec);
  if (*(int *)(local_e0 + 0x50) < *(int *)(*(int *)(in_ECX + 0x48) + 0x50)) {
    uStack_ec = (undefined4 *)(uint)(uint3)uStack_ec;
  }
  *(int *)(ppuVar1[0x21c] + *(int *)(*(int *)(in_ECX + 0x44) + 0x50) * 4) = *(int *)(in_ECX + 0x48);
  iVar6 = *(int *)(*(int *)(in_ECX + 0x48) + 0x1c0);
  ppuStack_fc = local_dc;
  uStack_108 = CONCAT44(0x591d70,(undefined4)uStack_108);
  ppuStack_100 = ppuVar1;
  piVar5 = (int *)FUN_00542bc0();
  uStack_108 = (longlong)(*piVar5 + 1000) * (longlong)iVar6;
  ppuStack_fc = (undefined1 **)0x0;
  ppuStack_100 = (undefined1 **)0x3e8;
  puStack_10c = (uint *)0x591d86;
  iVar6 = __alldiv();
  local_dc[0] = (undefined1 *)&ppuStack_fc;
  ppuStack_fc = (undefined1 **)(ppuVar1[0x38f] + -iVar6);
  ppuStack_100 = (undefined1 **)0x591d9e;
  FUN_005366f0();
  ppuStack_100 = (undefined1 **)0x591da4;
  ppuStack_fc = ppuVar1;
  FUN_0050ea30();
  uStack_108 = CONCAT44(0x591daa,(undefined4)uStack_108);
  ppuStack_100 = ppuVar1;
  FUN_0051c890();
  uStack_108 = CONCAT44(0x591db0,(undefined4)uStack_108);
  ppuStack_100 = ppuVar1;
  FUN_00526950();
  if (uStack_ec[0x10] == *(int *)(DAT_012588e8 + 0xb60)) {
    uStack_108 = CONCAT44(0x591dcf,(undefined4)uStack_108);
    ppuStack_100 = ppuVar1;
    piVar5 = (int *)FUN_005061e0();
    ppuStack_100 = (undefined1 **)0x8;
    uStack_c8 = 0xf;
    uStack_cc = 0;
    local_dc[0] = (undefined1 *)((uint)local_dc[0] & 0xffffff00);
    uStack_108 = 0xe01a8c00591df3;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x0;
    ppuStack_100 = (undefined1 **)uStack_ec[0x11];
    uStack_108 = CONCAT44(0x591e07,(undefined4)uStack_108);
    uVar7 = FUN_00974c50();
    ppuStack_100 = (undefined1 **)0xffffffff;
    puStack_10._0_1_ = 1;
    uStack_108 = ZEXT48(local_dc);
    uStack_88 = 0xf;
    local_8c = (undefined1 *)0x0;
    auStack_9c[0] = 0;
    puStack_10c = (uint *)0x591e35;
    FUN_00408ed0();
    ppuStack_100 = (undefined1 **)0xffffffff;
    puStack_10._0_1_ = 2;
    uStack_108 = (ulonglong)uVar7;
    uStack_6c = 0xf;
    uStack_70 = 0;
    auStack_80[0] = 0;
    puStack_10c = (uint *)0x591e66;
    FUN_00408ed0();
    puStack_10._0_1_ = 3;
    local_e0 = piVar5[1];
    ppuStack_100 = (undefined1 **)0x44;
    uStack_108 = CONCAT44(0x591e80,(undefined4)uStack_108);
    puVar8 = (undefined1 *)FUN_00aae9af();
    puStack_10._0_1_ = 4;
    uVar3 = puStack_10._0_1_;
    puStack_10._0_1_ = 4;
    puStack_a4 = puVar8;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
      puStack_10._0_1_ = uVar3;
    }
    else {
      ppuStack_100 = (undefined1 **)0xffffffff;
      *(undefined4 *)(puVar8 + 0x14) = 0xf;
      *(undefined4 *)(puVar8 + 0x10) = 0;
      uStack_108 = ZEXT48(auStack_9c);
      *puVar8 = 0;
      puStack_10c = (uint *)0x591eb0;
      FUN_00408ed0();
      ppuStack_100 = (undefined1 **)0xffffffff;
      puStack_10._0_1_ = 5;
      *(undefined4 *)(puVar8 + 0x30) = 0xf;
      *(undefined4 *)(puVar8 + 0x2c) = 0;
      uStack_108 = ZEXT48(auStack_80);
      puVar8[0x1c] = 0;
      puStack_10c = (uint *)0x591ed7;
      FUN_00408ed0();
      *(uint *)(puVar8 + 0x38) = local_e0;
      *(undefined4 *)(puVar8 + 0x3c) = 0;
      puVar8[0x40] = 0;
    }
    iVar6 = piVar5[2];
    piVar5[1] = (int)puVar8;
    piVar5[2] = iVar6 + 1;
    if (iVar6 == 0) {
      *piVar5 = (int)puVar8;
    }
    else {
      *(undefined1 **)(local_e0 + 0x3c) = puVar8;
    }
    ppuStack_100 = (undefined1 **)0x591f10;
    FUN_00a39a80();
    if (0xf < puStack_ac) {
      ppuStack_100 = (undefined1 **)auStack_c0[0];
      uStack_108 = CONCAT44(&UNK_00591f21,(undefined4)uStack_108);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    puStack_ac = (undefined1 *)0xf;
    uStack_b0 = 0;
    auStack_c0[0] = auStack_c0[0] & 0xffffff00;
    if (0xf < uStack_c8) {
      ppuStack_100 = (undefined1 **)local_dc[0];
      uStack_108 = CONCAT44(&UNK_00591f51,(undefined4)uStack_108);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppuStack_100 = (undefined1 **)0x5;
    uStack_c8 = 0xf;
    uStack_cc = 0;
    local_dc[0] = (undefined1 *)((uint)local_dc[0] & 0xffffff00);
    uStack_108 = 0xe01a9800591f70;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x6;
    ppuStack_100 = (undefined1 **)auStack_c0;
    uStack_108 = CONCAT44(0x591f8e,(undefined4)uStack_108);
    puVar8 = (undefined1 *)(**(code **)(*(int *)uStack_ec[0x12] + 0x18))();
    pvStack_14._0_1_ = 7;
    uStack_108 = 0xffffffff00000000;
    puStack_10c = &local_e0;
    local_8c = (undefined1 *)0xf;
    local_90 = (undefined1 *)0x0;
    local_a0 = local_a0 & 0xffffff00;
    ppuStack_110 = (undefined1 **)0x591fbc;
    FUN_00408ed0();
    pvStack_14._0_1_ = 8;
    uStack_108 = 0xffffffff00000000;
    uStack_70 = 0xf;
    uStack_74 = 0;
    auStack_84[0] = 0;
    ppuStack_110 = (undefined1 **)0x591fed;
    puStack_10c = (uint *)puVar8;
    FUN_00408ed0();
    pvStack_14._0_1_ = 9;
    puVar12 = (undefined4 *)uStack_ec[1];
    uStack_108 = 0x4400592007;
    puVar8 = (undefined1 *)FUN_00aae9af();
    pvStack_14._0_1_ = 10;
    uVar3 = pvStack_14._0_1_;
    pvStack_14._0_1_ = 10;
    puStack_a8 = puVar8;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
      pvStack_14._0_1_ = uVar3;
    }
    else {
      uStack_108 = 0xffffffff00000000;
      puStack_10c = &local_a0;
      *(undefined4 *)(puVar8 + 0x14) = 0xf;
      *(undefined4 *)(puVar8 + 0x10) = 0;
      *puVar8 = 0;
      ppuStack_110 = (undefined1 **)0x592037;
      FUN_00408ed0();
      pvStack_14._0_1_ = 0xb;
      uStack_108 = 0xffffffff00000000;
      puStack_10c = (uint *)auStack_84;
      *(undefined4 *)(puVar8 + 0x30) = 0xf;
      *(undefined4 *)(puVar8 + 0x2c) = 0;
      puVar8[0x1c] = 0;
      ppuStack_110 = (undefined1 **)0x59205e;
      FUN_00408ed0();
      *(undefined4 **)(puVar8 + 0x38) = puVar12;
      *(undefined4 *)(puVar8 + 0x3c) = 0;
      puVar8[0x40] = 0;
    }
    iVar6 = uStack_ec[2];
    uStack_ec[1] = puVar8;
    uStack_ec[2] = iVar6 + 1;
    if (iVar6 == 0) {
      *uStack_ec = puVar8;
    }
    else {
      puVar12[0xf] = puVar8;
    }
    uStack_108 = CONCAT44(0x592097,(undefined4)uStack_108);
    FUN_00a39a80();
    if (0xf < uStack_b0) {
      uStack_108 = CONCAT44(uStack_c4,&UNK_005920a8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_14 = (void *)0xffffffff;
    uStack_b0 = 0xf;
    uStack_b4 = 0;
    uStack_c4 = uStack_c4 & 0xffffff00;
    if (0xf < uStack_cc) {
      uStack_108 = CONCAT44(local_e0,&UNK_005920d8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_108 = 0x300e01aa0;
    uStack_cc = 0xf;
    uStack_d0 = 0;
    local_e0 = local_e0 & 0xffffff00;
    puStack_10c = (uint *)0x5920f7;
    FUN_00409350();
    pvStack_14 = (void *)0xc;
    uStack_108._4_4_ = &uStack_c4;
    uStack_108._0_4_ = 0x592112;
    puVar9 = (uint *)(**(code **)(*piVar5 + 0x18))();
    uStack_108._0_4_ = 0xffffffff;
    puStack_10c = (uint *)0x0;
    ppuStack_110 = (undefined1 **)&uStack_e4;
    pvStack_18._0_1_ = 0xd;
    local_90 = (undefined1 *)0xf;
    uStack_94 = 0;
    puStack_a4 = (undefined1 *)((uint)puStack_a4 & 0xffffff00);
    uStack_114 = 0x592140;
    FUN_00408ed0();
    uStack_108._0_4_ = 0xffffffff;
    pvStack_18._0_1_ = 0xe;
    puStack_10c = (uint *)0x0;
    uStack_74 = 0xf;
    uStack_78 = 0;
    uStack_88 = uStack_88 & 0xffffff00;
    uStack_114 = 0x592171;
    ppuStack_110 = (undefined1 **)puVar9;
    FUN_00408ed0();
    pvStack_18._0_1_ = 0xf;
    iVar6 = puVar12[1];
    uStack_108._0_4_ = 0x44;
    puStack_10c = (uint *)0x59218b;
    puVar8 = (undefined1 *)FUN_00aae9af();
    pvStack_18._0_1_ = 0x10;
    uVar3 = pvStack_18._0_1_;
    pvStack_18._0_1_ = 0x10;
    puStack_ac = puVar8;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
      pvStack_18._0_1_ = uVar3;
    }
    else {
      uStack_108._0_4_ = 0xffffffff;
      puStack_10c = (uint *)0x0;
      ppuStack_110 = &puStack_a4;
      *(undefined4 *)(puVar8 + 0x14) = 0xf;
      *(undefined4 *)(puVar8 + 0x10) = 0;
      *puVar8 = 0;
      uStack_114 = 0x5921bb;
      FUN_00408ed0();
      uStack_108._0_4_ = 0xffffffff;
      pvStack_18._0_1_ = 0x11;
      puStack_10c = (uint *)0x0;
      ppuStack_110 = (undefined1 **)&uStack_88;
      *(undefined4 *)(puVar8 + 0x30) = 0xf;
      *(undefined4 *)(puVar8 + 0x2c) = 0;
      puVar8[0x1c] = 0;
      uStack_114 = 0x5921e2;
      FUN_00408ed0();
      *(int *)(puVar8 + 0x38) = iVar6;
      *(undefined4 *)(puVar8 + 0x3c) = 0;
      puVar8[0x40] = 0;
    }
    iVar2 = puVar12[2];
    puVar12[1] = puVar8;
    puVar12[2] = iVar2 + 1;
    if (iVar2 == 0) {
      *puVar12 = puVar8;
    }
    else {
      *(undefined1 **)(iVar6 + 0x3c) = puVar8;
    }
    uStack_108._0_4_ = 0x59221b;
    FUN_00a39a80();
    if (0xf < uStack_b4) {
      uStack_108 = CONCAT44(uStack_108._4_4_,uStack_c8);
                    /* WARNING: Subroutine does not return */
      puStack_10c = (uint *)&UNK_0059222c;
      FUN_00aae91b();
    }
    pvStack_18 = (void *)0xffffffff;
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    uStack_c8 = uStack_c8 & 0xffffff00;
    if (0xf < uStack_d0) {
      uStack_108 = CONCAT44(uStack_108._4_4_,uStack_e4);
                    /* WARNING: Subroutine does not return */
      puStack_10c = (uint *)&UNK_0059225c;
      FUN_00aae91b();
    }
    uStack_108._0_4_ = 0;
    uVar11 = (undefined4)uStack_108;
    uStack_108._0_4_ = 0;
    puStack_10c = (uint *)&DAT_00ded94d;
    if ((char)((uint)unaff_EDI >> 0x18) == '\0') {
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      uStack_e4 = uStack_e4 & 0xffffff00;
      ppuStack_110 = (undefined1 **)0x592284;
      FUN_00409350();
      pvStack_18 = (void *)0x12;
      uStack_108._0_4_ = 0xe;
      puStack_10c = (uint *)0xe01b00;
      uStack_b4 = 0xf;
      uStack_b8 = 0;
      uStack_c8 = uStack_c8 & 0xffffff00;
      ppuStack_110 = (undefined1 **)0x5922ab;
      FUN_00409350();
      puStack_ac = auStack_184;
      pvStack_18._0_1_ = 0x13;
      puVar8 = ppuVar1[8];
      uVar11 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + (int)ppuVar1[0x2f9] * 4);
      puVar14 = ppuVar1[7];
      uVar13 = 0;
      puVar9 = &uStack_e4;
      puVar15 = puVar14;
      puVar16 = puVar8;
      FUN_006a4f40(puVar12,uVar11,puVar9,0,puVar14,puVar8,puVar14,puVar8);
      uVar10 = FUN_006a55b0();
      FUN_006a7ed0(auStack_184,uVar10,puVar12,uVar11,puVar9,uVar13,puVar14,puVar8,puVar15,puVar16);
      pvStack_18._0_1_ = 0x14;
      FUN_006a4f40();
      uVar11 = FUN_006a4f40();
      pvStack_18 = (void *)CONCAT31(pvStack_18._1_3_,0x13);
      FUN_004e9540(uVar11);
      if (0xf < uStack_b4) {
        uStack_108 = CONCAT44(uStack_108._4_4_,uStack_c8);
                    /* WARNING: Subroutine does not return */
        puStack_10c = (uint *)&UNK_00592367;
        FUN_00aae91b();
      }
      pvStack_18 = (void *)0xffffffff;
      uStack_b4 = 0xf;
      uStack_b8 = 0;
      uStack_c8 = uStack_c8 & 0xffffff00;
      if (0xf < uStack_d0) {
        uStack_108 = CONCAT44(uStack_108._4_4_,uStack_e4);
                    /* WARNING: Subroutine does not return */
        puStack_10c = (uint *)&UNK_00592391;
        FUN_00aae91b();
      }
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      uStack_e4 = uStack_e4 & 0xffffff00;
    }
    else {
      uStack_48 = 0xf;
      uStack_4c = 0;
      auStack_5c[0] = auStack_5c[0] & 0xffffff00;
      ppuStack_110 = (undefined1 **)0x5923c6;
      uStack_108._0_4_ = uVar11;
      FUN_00409350();
      pvStack_18 = (void *)0x15;
      uStack_108._0_4_ = 0x12;
      puStack_10c = (uint *)0xe01b10;
      uStack_2c = 0xf;
      uStack_30 = 0;
      uStack_40 = uStack_40 & 0xffffff00;
      ppuStack_110 = (undefined1 **)0x5923f9;
      FUN_00409350();
      puStack_ac = auStack_184;
      pvStack_18._0_1_ = 0x16;
      uVar11 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + (int)ppuVar1[0x2f9] * 4);
      puVar8 = ppuVar1[8];
      puVar14 = ppuVar1[7];
      uVar13 = 0;
      puVar9 = auStack_5c;
      puVar15 = puVar14;
      puVar16 = puVar8;
      FUN_006a4f40(puVar12,uVar11,puVar9,0,puVar14,puVar8,puVar14,puVar8);
      uVar10 = FUN_006a55b0();
      FUN_006a7ed0(auStack_184,uVar10,puVar12,uVar11,puVar9,uVar13,puVar14,puVar8,puVar15,puVar16);
      pvStack_18._0_1_ = 0x17;
      FUN_006a4f40();
      uVar11 = FUN_006a4f40();
      pvStack_18 = (void *)CONCAT31(pvStack_18._1_3_,0x16);
      FUN_004e9540(uVar11);
      if (0xf < uStack_2c) {
        uStack_108 = CONCAT44(uStack_108._4_4_,uStack_40);
                    /* WARNING: Subroutine does not return */
        puStack_10c = (uint *)&UNK_005924ba;
        FUN_00aae91b();
      }
      pvStack_18 = (void *)0xffffffff;
      uStack_2c = 0xf;
      uStack_30 = 0;
      uStack_40 = uStack_40 & 0xffffff00;
      if (0xf < uStack_48) {
        uStack_108 = CONCAT44(uStack_108._4_4_,auStack_5c[0]);
                    /* WARNING: Subroutine does not return */
        puStack_10c = (uint *)&UNK_005924f3;
        FUN_00aae91b();
      }
      uStack_48 = 0xf;
      uStack_4c = 0;
      auStack_5c[0] = auStack_5c[0] & 0xffffff00;
    }
    pvStack_18 = (void *)0xffffffff;
    uStack_108 = CONCAT44(uStack_108._4_4_,3);
    puStack_10c = (uint *)0x592522;
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))();
  }
  ExceptionList = pvStack_18;
  return;
}

