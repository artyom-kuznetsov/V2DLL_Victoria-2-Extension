// FUN_00585ae0 @ 00585ae0 body=[[00585ae0, 00585bb9] [00585bc0, 00585c1c] [00585c20, 00585f4e] [00585f52, 00585f78] [00585f7c, 00585f9d] [00585fa1, 00585fef] [00585ff3, 00586022] [00586026, 00586052] [00586056, 005861a6] [005861aa, 005861cf] [005861d3, 005861f8] [005861fc, 0058622c] [00586230, 00586363] [00586367, 0058638c] [00586390, 005863b7] [005863bb, 00586421] [00586425, 00586532] [00586536, 00586562] [0058656b, 0058664d] [00586651, 0058667b] [00586684, 00586889]]


void FUN_00585ae0(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint in_ECX;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 **ppuVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_194 [116];
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  char local_f9;
  undefined4 local_f4;
  char cStack_ee;
  char cStack_ed;
  undefined4 uStack_ec;
  uint local_e4 [4];
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  int iStack_c0;
  undefined1 uStack_bc;
  int iStack_b8;
  undefined1 *local_b4;
  int local_b0;
  uint auStack_ac [4];
  undefined4 uStack_9c;
  uint uStack_98;
  uint auStack_90 [4];
  undefined4 uStack_80;
  uint uStack_7c;
  uint auStack_68 [4];
  undefined4 uStack_58;
  uint uStack_54;
  uint auStack_4c [4];
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb7ddc;
  pvStack_14 = ExceptionList;
  piVar5 = *(int **)(DAT_012588e8 + 0xb3c);
  for (iVar10 = *(int *)(in_ECX + 0x44); iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar5 = (int *)piVar5[2];
  }
  iVar10 = *piVar5;
  local_b4 = (undefined1 *)(DAT_012588e8 + 0xb5c);
  local_e4[0] = in_ECX;
  if (*(char *)(in_ECX + 0x48) == '\0') {
    if (*(char *)(iVar10 + 0xfc) == '\0') {
      uStack_10c = 0;
      uStack_114 = CONCAT44(0x585be9,(undefined4)uStack_114);
      ExceptionList = &pvStack_14;
      local_f9 = FUN_0093c4c0();
    }
    else {
      local_f9 = '\x01';
      ExceptionList = &pvStack_14;
    }
    uStack_10c = *(undefined4 *)(in_ECX + 0x40);
    uStack_114 = CONCAT44(*(undefined4 *)(in_ECX + 0x3c),(uint)(local_f9 == '\0'));
    uStack_11c = CONCAT44(1,iVar10);
    uStack_120 = 0x585c08;
    FUN_00935390();
    iVar4 = *(int *)(iVar10 + 0x3c);
    iVar6 = *(int *)(iVar10 + 0x40);
    bVar12 = iVar4 == iVar6;
    if (!bVar12) {
      iVar3 = iVar4;
      do {
        if (*(int *)(iVar3 + 4) == *(int *)((int)local_b4 + 4)) break;
        iVar3 = iVar3 + 8;
      } while (iVar3 != iVar6);
      bVar12 = iVar3 == iVar6;
      in_ECX = local_e4[0];
    }
    uStack_ec._0_3_ = CONCAT12(!bVar12,(undefined2)uStack_ec);
    bVar12 = true;
    if (iVar4 == iVar6) goto LAB_00585c52;
    do {
      if (*(int *)(iVar4 + 4) == *(int *)((int)local_b4 + 4)) break;
      iVar4 = iVar4 + 8;
    } while (iVar4 != iVar6);
  }
  else {
    if (*(char *)(iVar10 + 0xfc) == '\0') {
      uStack_10c = 1;
      uStack_114 = CONCAT44(0x585b57,(undefined4)uStack_114);
      ExceptionList = &pvStack_14;
      local_f9 = FUN_0093c4c0();
    }
    else {
      local_f9 = '\x01';
      ExceptionList = &pvStack_14;
    }
    uStack_10c = *(undefined4 *)(in_ECX + 0x40);
    uStack_114 = CONCAT44(*(undefined4 *)(in_ECX + 0x3c),(uint)(local_f9 == '\0'));
    uStack_11c = CONCAT44(1,iVar10);
    uStack_120 = 0x585b76;
    FUN_00934280();
    iVar4 = *(int *)(iVar10 + 0x3c);
    iVar6 = *(int *)(iVar10 + 0x40);
    bVar12 = iVar4 == iVar6;
    if (!bVar12) {
      iVar3 = iVar4;
      do {
        if (*(int *)(iVar3 + 4) == *(int *)((int)local_b4 + 4)) break;
        iVar3 = iVar3 + 8;
      } while (iVar3 != iVar6);
      bVar12 = iVar3 == iVar6;
      in_ECX = local_e4[0];
    }
    uStack_ec._0_3_ = CONCAT12(!bVar12,(undefined2)uStack_ec);
    bVar12 = true;
    if (iVar4 == iVar6) goto LAB_00585c52;
    do {
      if (*(int *)(iVar4 + 4) == *(int *)((int)local_b4 + 4)) break;
      iVar4 = iVar4 + 8;
    } while (iVar4 != iVar6);
  }
  bVar12 = iVar4 == iVar6;
LAB_00585c52:
  uStack_ec = CONCAT13(!bVar12,(undefined3)uStack_ec);
  if (local_f9 == '\0') {
    if (*(char *)(in_ECX + 0x48) == '\0') {
      puVar11 = *(undefined4 **)(iVar10 + 0x2c);
      local_f4 = puVar11[1];
    }
    else {
      puVar11 = *(undefined4 **)(iVar10 + 0x3c);
      local_f4 = puVar11[1];
    }
    uVar7 = *puVar11;
    if (DAT_0131acac == 0) {
      uStack_10c = 0x20;
      uStack_114 = CONCAT44(0x585c8d,(undefined4)uStack_114);
      local_b0 = FUN_00aae9af();
      local_c = 0;
      if (local_b0 == 0) {
        uStack_10c = 0;
      }
      else {
        uStack_10c = 0x585ca6;
        uStack_10c = FUN_0090cca0();
      }
      local_c = 0xffffffff;
      uStack_114 = CONCAT44(0x585cbb,(undefined4)uStack_114);
      FUN_0090d9d0();
    }
    uStack_10c = local_f4;
    uStack_114 = CONCAT44(uVar7,*(undefined4 *)(local_e4[0] + 0x40));
    uStack_11c = CONCAT44(*(undefined4 *)(local_e4[0] + 0x3c),0x585cdf);
    FUN_0094bdb0();
    local_b0 = iVar10 + 0xdc;
    uStack_10c = 0x585d04;
    FUN_0093cfb0();
    uStack_10c = 0x585d0f;
    FUN_0042c2f0();
    uStack_10c = 0x585d20;
    FUN_0093cfb0();
    uStack_10c = 0x585d33;
    FUN_009547e0();
  }
  uStack_10c = 6;
  uStack_114 = CONCAT44(0x585d4a,(undefined4)uStack_114);
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))();
  local_b4 = *(undefined1 **)(DAT_012588e8 + 0xb5c);
  uStack_114 = CONCAT44(*(undefined4 *)
                         (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),0x585d71)
  ;
  piVar5 = (int *)FUN_005061e0();
  puStack_c8 = (undefined1 *)0x0;
  puStack_c4 = (undefined1 *)0x0;
  iStack_c0 = 0;
  uStack_bc = 0;
  iVar6 = *piVar5;
  while (iVar6 != 0) {
    iVar4 = *(int *)(iVar6 + 0x3c);
    uStack_114 = CONCAT44(iVar6,0x585d94);
    FUN_0042b730();
    iVar6 = iVar4;
  }
  puStack_10 = (undefined1 *)0x1;
  uStack_114 = 0x1000df2714;
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  local_e4[0] = local_e4[0] & 0xffffff00;
  uStack_11c = CONCAT44(0x585dc6,(undefined4)uStack_11c);
  FUN_00409350();
  puStack_10._0_1_ = 2;
  uStack_114 = 0x900df2728;
  uStack_38 = 0xf;
  uStack_3c = 0;
  auStack_4c[0] = auStack_4c[0] & 0xffffff00;
  uStack_11c = CONCAT44(0x585df6,(undefined4)uStack_11c);
  FUN_00409350();
  uStack_114 = CONCAT44(local_e4,auStack_30);
  puStack_10._0_1_ = 3;
  uStack_11c = CONCAT44(0x585e10,(undefined4)uStack_11c);
  FUN_009a8ee0();
  puStack_10._0_1_ = 4;
  uStack_114 = CONCAT44(0x585e1f,(undefined4)uStack_114);
  iVar6 = FUN_00475500();
  uStack_11c = *(undefined8 *)(iVar6 + 0x6c);
  uStack_114 = *(undefined8 *)(iVar6 + 0x74);
  uStack_120 = 0x585e45;
  uVar7 = FUN_009a9880();
  uStack_114 = 0xffffffff00000000;
  puStack_10._0_1_ = 5;
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = auStack_ac[0] & 0xffffff00;
  uStack_11c = CONCAT44(auStack_4c,0x585e77);
  FUN_00408ed0();
  puStack_10._0_1_ = 6;
  uStack_114 = 0xffffffff00000000;
  uStack_7c = 0xf;
  uStack_80 = 0;
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  uStack_11c = CONCAT44(uVar7,0x585ea4);
  FUN_00408ed0();
  puVar1 = puStack_c4;
  puStack_10._0_1_ = 7;
  uStack_114 = 0x4400585eb7;
  puVar8 = (undefined1 *)FUN_00aae9af();
  puStack_10._0_1_ = 8;
  uVar2 = puStack_10._0_1_;
  puStack_10._0_1_ = 8;
  local_b4 = puVar8;
  if (puVar8 == (undefined1 *)0x0) {
    puStack_c4 = (undefined1 *)0x0;
    puStack_10._0_1_ = uVar2;
  }
  else {
    uStack_114 = 0xffffffff00000000;
    *(undefined4 *)(puVar8 + 0x14) = 0xf;
    *(undefined4 *)(puVar8 + 0x10) = 0;
    *puVar8 = 0;
    uStack_11c = CONCAT44(auStack_ac,0x585ee7);
    FUN_00408ed0();
    puStack_10._0_1_ = 9;
    uStack_114 = 0xffffffff00000000;
    *(undefined4 *)(puVar8 + 0x30) = 0xf;
    *(undefined4 *)(puVar8 + 0x2c) = 0;
    puVar8[0x1c] = 0;
    uStack_11c = CONCAT44(auStack_90,0x585f0e);
    FUN_00408ed0();
    *(undefined1 **)(puVar8 + 0x38) = puVar1;
    *(undefined4 *)(puVar8 + 0x3c) = 0;
    puVar8[0x40] = 0;
    puStack_c4 = puVar8;
  }
  iVar6 = iStack_c0 + 1;
  puVar8 = puStack_c4;
  if (iStack_c0 != 0) {
    *(undefined1 **)((int)puVar1 + 0x3c) = puStack_c4;
    puVar8 = puStack_c8;
  }
  puStack_c8 = puVar8;
  iStack_c0 = iVar6;
  if (0xf < uStack_7c) {
    uStack_114 = CONCAT44(auStack_90[0],&UNK_00585f4f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_7c = 0xf;
  uStack_80 = 0;
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  if (0xf < uStack_98) {
    uStack_114 = CONCAT44(auStack_ac[0],&UNK_00585f79);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = auStack_ac[0] & 0xffffff00;
  if (0xf < uStack_54) {
    uStack_114 = CONCAT44(auStack_68[0],&UNK_00585f9e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_54 = 0xf;
  uStack_58 = 0;
  auStack_68[0] = auStack_68[0] & 0xffffff00;
  puStack_10._0_1_ = 10;
  uStack_114 = CONCAT44(0x585fcc,(undefined4)uStack_114);
  FUN_009adb70();
  if (iStack_2c != 0) {
    uStack_114 = CONCAT44(0x585fe3,(undefined4)uStack_114);
    FUN_009e6a80();
    uStack_114 = CONCAT44(iStack_2c,&UNK_00585ff0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (0xf < uStack_38) {
    uStack_114 = CONCAT44(auStack_4c[0],&UNK_00586023);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 1;
  uStack_38 = 0xf;
  uStack_3c = 0;
  auStack_4c[0] = auStack_4c[0] & 0xffffff00;
  if (0xf < uStack_d0) {
    uStack_114 = CONCAT44(local_e4[0],&UNK_00586053);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_114 = 0x900dfe8c8;
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  local_e4[0] = local_e4[0] & 0xffffff00;
  uStack_11c = CONCAT44(0x586076,(undefined4)uStack_11c);
  FUN_00409350();
  puStack_10._0_1_ = 0xb;
  uStack_114 = CONCAT44(0x586091,(undefined4)uStack_114);
  uVar7 = FUN_0055dd40();
  puStack_10._0_1_ = 0xc;
  uStack_114 = 0xffffffff00000000;
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = auStack_ac[0] & 0xffffff00;
  uStack_11c = CONCAT44(local_e4,0x5860bf);
  FUN_00408ed0();
  puStack_10._0_1_ = 0xd;
  uStack_114 = 0xffffffff00000000;
  uStack_7c = 0xf;
  uStack_80 = 0;
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  uStack_11c = CONCAT44(uVar7,0x5860f0);
  FUN_00408ed0();
  puVar1 = puStack_c4;
  puStack_10._0_1_ = 0xe;
  uStack_114 = 0x4400586107;
  puVar8 = (undefined1 *)FUN_00aae9af();
  puStack_10._0_1_ = 0xf;
  uVar2 = puStack_10._0_1_;
  puStack_10._0_1_ = 0xf;
  local_b4 = puVar8;
  if (puVar8 == (undefined1 *)0x0) {
    puStack_c4 = (undefined1 *)0x0;
    puStack_10._0_1_ = uVar2;
  }
  else {
    uStack_114 = 0xffffffff00000000;
    *(undefined4 *)(puVar8 + 0x14) = 0xf;
    *(undefined4 *)(puVar8 + 0x10) = 0;
    *puVar8 = 0;
    uStack_11c = CONCAT44(auStack_ac,0x586137);
    FUN_00408ed0();
    puStack_10._0_1_ = 0x10;
    uStack_114 = 0xffffffff00000000;
    *(undefined4 *)(puVar8 + 0x30) = 0xf;
    *(undefined4 *)(puVar8 + 0x2c) = 0;
    puVar8[0x1c] = 0;
    uStack_11c = CONCAT44(auStack_90,0x58615e);
    FUN_00408ed0();
    *(undefined1 **)(puVar8 + 0x38) = puVar1;
    *(undefined4 *)(puVar8 + 0x3c) = 0;
    puVar8[0x40] = 0;
    puStack_c4 = puVar8;
  }
  iVar6 = iStack_c0 + 1;
  puVar8 = puStack_c4;
  if (iStack_c0 != 0) {
    *(undefined1 **)(puVar1 + 0x3c) = puStack_c4;
    puVar8 = puStack_c8;
  }
  puStack_c8 = puVar8;
  iStack_c0 = iVar6;
  if (0xf < uStack_7c) {
    uStack_114 = CONCAT44(auStack_90[0],&UNK_005861a7);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_7c = 0xf;
  uStack_80 = 0;
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  if (0xf < uStack_98) {
    uStack_114 = CONCAT44(auStack_ac[0],&UNK_005861d0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = auStack_ac[0] & 0xffffff00;
  if (0xf < uStack_54) {
    uStack_114 = CONCAT44(auStack_68[0],&UNK_005861f9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 1;
  uStack_54 = 0xf;
  uStack_58 = 0;
  auStack_68[0] = auStack_68[0] & 0xffffff00;
  if (0xf < uStack_d0) {
    uStack_114 = CONCAT44(local_e4[0],&UNK_0058622d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_114 = 0x300e00e10;
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  local_e4[0] = local_e4[0] & 0xffffff00;
  uStack_11c = CONCAT44(0x586251,(undefined4)uStack_11c);
  FUN_00409350();
  uStack_114 = 0xffffffff00000000;
  puStack_10._0_1_ = 0x11;
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = auStack_ac[0] & 0xffffff00;
  uStack_11c = CONCAT44(local_e4,0x586279);
  FUN_00408ed0();
  puStack_10._0_1_ = 0x12;
  uStack_114 = 0xffffffff00000000;
  uStack_7c = 0xf;
  uStack_80 = 0;
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  uStack_11c = CONCAT44(uStack_ec + 0x10,0x5862ad);
  FUN_00408ed0();
  puVar1 = puStack_c4;
  puStack_10._0_1_ = 0x13;
  uStack_114 = 0x44005862c4;
  puVar8 = (undefined1 *)FUN_00aae9af();
  puStack_10._0_1_ = 0x14;
  uVar2 = puStack_10._0_1_;
  puStack_10._0_1_ = 0x14;
  local_b4 = puVar8;
  if (puVar8 == (undefined1 *)0x0) {
    puStack_c4 = (undefined1 *)0x0;
    puStack_10._0_1_ = uVar2;
  }
  else {
    uStack_114 = 0xffffffff00000000;
    *(undefined4 *)(puVar8 + 0x14) = 0xf;
    *(undefined4 *)(puVar8 + 0x10) = 0;
    *puVar8 = 0;
    uStack_11c = CONCAT44(auStack_ac,0x5862f4);
    FUN_00408ed0();
    puStack_10._0_1_ = 0x15;
    uStack_114 = 0xffffffff00000000;
    *(undefined4 *)(puVar8 + 0x30) = 0xf;
    *(undefined4 *)(puVar8 + 0x2c) = 0;
    puVar8[0x1c] = 0;
    uStack_11c = CONCAT44(auStack_90,0x58631b);
    FUN_00408ed0();
    *(undefined1 **)(puVar8 + 0x38) = puVar1;
    *(undefined4 *)(puVar8 + 0x3c) = 0;
    puVar8[0x40] = 0;
    puStack_c4 = puVar8;
  }
  iVar6 = iStack_c0 + 1;
  puVar8 = puStack_c4;
  if (iStack_c0 != 0) {
    *(undefined1 **)(puVar1 + 0x3c) = puStack_c4;
    puVar8 = puStack_c8;
  }
  puStack_c8 = puVar8;
  iStack_c0 = iVar6;
  if (0xf < uStack_7c) {
    uStack_114 = CONCAT44(auStack_90[0],&UNK_00586364);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_7c = 0xf;
  uStack_80 = 0;
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  if (0xf < uStack_98) {
    uStack_114 = CONCAT44(auStack_ac[0],&UNK_0058638d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 1;
  uVar2 = puStack_10._0_1_;
  puStack_10._0_1_ = 1;
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = auStack_ac[0] & 0xffffff00;
  if (0xf < uStack_d0) {
    uStack_114 = CONCAT44(local_e4[0],&UNK_005863b8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(iVar10 + 0x40) == *(int *)(iStack_b8 + 4)) {
    uStack_114 = 0xa00e00e14;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    uStack_11c = CONCAT44(0x5863ef,(undefined4)uStack_11c);
    FUN_00409350();
    puStack_10._0_1_ = 0x16;
    uStack_114 = CONCAT44(0x5863fc,(undefined4)uStack_114);
    piVar5 = (int *)FUN_009c7290();
    uStack_114 = CONCAT44(local_e4,0x58640a);
    (**(code **)(*piVar5 + 0x60))();
    puStack_10._0_1_ = 1;
    if (0xf < uStack_d0) {
      uStack_114 = CONCAT44(local_e4[0],&UNK_00586422);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_114 = 0xded94d;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    uStack_11c = CONCAT44(0x586449,(undefined4)uStack_11c);
    FUN_00409350();
    puStack_10._0_1_ = 0x17;
    uStack_114 = 0xd00e00e20;
    uStack_38 = 0xf;
    uStack_3c = 0;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    uStack_11c = CONCAT44(0x58647d,(undefined4)uStack_11c);
    FUN_00409350();
    uStack_114 = 0x55a780;
    local_b4 = auStack_194;
    puStack_10._0_1_ = 0x18;
    uVar19 = 0;
    uVar18 = 0x2d2d2d;
    uVar7 = *(undefined4 *)(iVar10 + 0x40);
    uVar17 = *(undefined4 *)(iVar10 + 0x3c);
    uVar16 = 0;
    puVar15 = local_e4;
    ppuVar13 = &puStack_c8;
    uVar14 = 0;
    FUN_006a4f40(ppuVar13,0,puVar15,0,uVar17,uVar7,0x2d2d2d,0);
    uVar9 = FUN_006a55b0();
    FUN_006a7ed0(auStack_194,uVar9,ppuVar13,uVar14,puVar15,uVar16,uVar17,uVar7,uVar18,uVar19);
    puStack_10._0_1_ = 0x19;
    FUN_006a4f40();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x18);
    FUN_004933c0();
    if (0xf < uStack_38) {
      uStack_114 = CONCAT44(auStack_4c[0],&UNK_00586533);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_38 = 0xf;
    uStack_3c = 0;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    if (0xf < uStack_d0) {
      uStack_114 = CONCAT44(local_e4[0],&UNK_00586563);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    puStack_10._0_1_ = uVar2;
    if (cStack_ee == '\0') {
      if (cStack_ed == '\0') {
        uStack_114 = CONCAT44(0x58679c,(undefined4)uStack_114);
        FUN_009885d0();
        puStack_10._0_1_ = 0x21;
        uStack_114 = CONCAT44(0x5867b5,(undefined4)uStack_114);
        FUN_009885d0();
        puStack_10._0_1_ = 0x22;
        uStack_114 = 0x55a780;
        local_b4 = auStack_194;
        uVar19 = 0;
        uVar7 = *(undefined4 *)(iVar10 + 0x40);
        uVar17 = *(undefined4 *)(iVar10 + 0x3c);
        uVar18 = 0x2d2d2d;
        uVar16 = 0;
        puVar15 = local_e4;
        ppuVar13 = &puStack_c8;
        uVar14 = 0;
        FUN_006a4f40(ppuVar13,0,puVar15,0,uVar17,uVar7,0x2d2d2d,0);
        uVar9 = FUN_006a55b0();
        FUN_006a7ed0(auStack_194,uVar9,ppuVar13,uVar14,puVar15,uVar16,uVar17,uVar7,uVar18,uVar19);
        puStack_10._0_1_ = 0x23;
        FUN_006a4f40();
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x22);
      }
      else {
        uStack_114 = CONCAT44(0x58669f,(undefined4)uStack_114);
        FUN_009885d0();
        puStack_10._0_1_ = 0x1d;
        uStack_114 = CONCAT44(0x5866ac,(undefined4)uStack_114);
        piVar5 = (int *)FUN_009c7290();
        uStack_114 = CONCAT44(auStack_68,0x5866b8);
        (**(code **)(*piVar5 + 0x60))();
        puStack_10._0_1_ = 1;
        uStack_114 = CONCAT44(0x5866c7,(undefined4)uStack_114);
        FUN_00408ad0();
        uStack_114 = CONCAT44(0x5866d5,(undefined4)uStack_114);
        FUN_009885d0();
        puStack_10._0_1_ = 0x1e;
        uStack_114 = CONCAT44(0x5866ee,(undefined4)uStack_114);
        FUN_009885d0();
        puStack_10._0_1_ = 0x1f;
        uStack_114 = 0x55a780;
        local_b4 = auStack_194;
        uVar19 = 0;
        uVar7 = *(undefined4 *)(iVar10 + 0x40);
        uVar17 = *(undefined4 *)(iVar10 + 0x3c);
        uVar18 = 0x2d2d2d;
        uVar16 = 0;
        puVar15 = local_e4;
        ppuVar13 = &puStack_c8;
        uVar14 = 0;
        FUN_006a4f40(ppuVar13,0,puVar15,0,uVar17,uVar7,0x2d2d2d,0);
        uVar9 = FUN_006a55b0();
        FUN_006a7ed0(auStack_194,uVar9,ppuVar13,uVar14,puVar15,uVar16,uVar17,uVar7,uVar18,uVar19);
        puStack_10._0_1_ = 0x20;
        FUN_006a4f40();
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x1f);
      }
      FUN_004933c0();
      uStack_114 = CONCAT44(0x586862,(undefined4)uStack_114);
      FUN_00408ad0();
      uStack_114 = CONCAT44(0x58686b,(undefined4)uStack_114);
      FUN_00408ad0();
    }
    else {
      uStack_114 = CONCAT44(0x586586,(undefined4)uStack_114);
      FUN_009885d0();
      puStack_10._0_1_ = 0x1a;
      uStack_114 = CONCAT44(0x58659c,(undefined4)uStack_114);
      FUN_009885d0();
      puStack_10._0_1_ = 0x1b;
      uStack_114 = 0x55a780;
      local_b4 = auStack_194;
      uVar19 = 0;
      uVar7 = *(undefined4 *)(iVar10 + 0x40);
      uVar17 = *(undefined4 *)(iVar10 + 0x3c);
      uVar18 = 0x2d2d2d;
      uVar16 = 0;
      puVar15 = auStack_68;
      ppuVar13 = &puStack_c8;
      uVar14 = 0;
      FUN_006a4f40(ppuVar13,0,puVar15,0,uVar17,uVar7,0x2d2d2d,0);
      uVar9 = FUN_006a55b0();
      FUN_006a7ed0(auStack_194,uVar9,ppuVar13,uVar14,puVar15,uVar16,uVar17,uVar7,uVar18,uVar19);
      puStack_10._0_1_ = 0x1c;
      FUN_006a4f40();
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x1b);
      FUN_004933c0();
      if (0xf < uStack_d0) {
        uStack_114 = CONCAT44(local_e4[0],&UNK_0058664e);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      if (0xf < uStack_54) {
        uStack_114 = CONCAT44(auStack_68[0],&UNK_0058667c);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  uStack_114 = CONCAT44(&puStack_c8,0x586875);
  FUN_0042b9f0();
  ExceptionList = pvStack_18;
  return;
}

