// FUN_00516630 @ 00516630 body=[[00516630, 00516708] [0051670c, 0051686f] [00516873, 00516894] [00516898, 005168b7] [005168bb, 005168e1] [005168e5, 005169f4] [005169f8, 00516a19] [00516a1d, 00516a40] [00516a44, 00516b81] [00516b85, 00516ba6] [00516baa, 00516bc9] [00516bcd, 00516bf3] [00516bf7, 00516d1e] [00516d22, 00516d43] [00516d47, 00516d66] [00516d6a, 00516d90] [00516d94, 00516eb8] [00516ebc, 00516efe] [00516f02, 00516f2c] [00516f30, 00517044] [00517048, 0051714a] [0051714e, 00517177] [0051717b, 00517232] [00517236, 0051724c]]


void FUN_00516630(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_1e4 [104];
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined1 **ppuStack_170;
  undefined8 uStack_16c;
  uint *puStack_164;
  uint local_150;
  uint local_14c [3];
  undefined4 uStack_140;
  uint local_13c;
  uint local_138;
  undefined1 *puStack_134;
  undefined1 *local_130;
  uint local_12c [3];
  undefined4 uStack_120;
  uint local_11c;
  uint local_118;
  uint uStack_114;
  uint local_110 [3];
  undefined4 uStack_104;
  uint local_100;
  uint local_fc;
  uint uStack_f8;
  uint local_f4 [3];
  undefined4 uStack_e8;
  uint local_e4;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 *puStack_d4;
  undefined4 *local_d0;
  int local_cc;
  undefined1 local_c8 [16];
  uint local_b8;
  undefined4 local_b4;
  undefined1 auStack_b0 [20];
  undefined1 auStack_9c [4];
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_54 [60];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb68f0;
  pvStack_14 = ExceptionList;
  puStack_164 = (uint *)0x0;
  uStack_16c = 0x2e0051665e;
  ExceptionList = &pvStack_14;
  puStack_164 = (uint *)FUN_009b7950();
  uStack_16c = CONCAT44(0x51666b,(undefined4)uStack_16c);
  FUN_008a8650();
  local_90 = *(undefined4 *)(param_1 + 0x1c);
  local_8c = *(undefined4 *)(param_1 + 0x20);
  local_cc = param_1 + 0x1c;
  local_60 = *(undefined4 *)(param_2 + 8);
  local_5c = *(undefined4 *)(param_2 + 0xc);
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8[0] = 0;
  puStack_164 = (uint *)local_98;
  local_c = 0;
  uStack_16c = CONCAT44(*(undefined4 *)(param_2 + 0x30),0x5166d9);
  uVar3 = FUN_004eaca0();
  puStack_164 = (uint *)0xffffffff;
  uStack_16c = (ulonglong)uVar3;
  local_c._0_1_ = 1;
  ppuStack_170 = (undefined1 **)0x5166f1;
  FUN_00448aa0();
  local_c._0_1_ = 0;
  if (0xf < local_138) {
    puStack_164 = (uint *)local_14c[0];
    uStack_16c = CONCAT44(&UNK_00516709,(undefined4)uStack_16c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_138 = 0xf;
  local_13c = 0;
  local_14c[0] = local_14c[0] & 0xffffff00;
  local_d8 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  puStack_164 = *(uint **)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  uStack_16c = CONCAT44(0x516742,(undefined4)uStack_16c);
  puVar4 = (undefined4 *)FUN_005061e0();
  puStack_164 = (uint *)0x5;
  local_138 = 0xf;
  local_13c = 0;
  local_14c[0] = local_14c[0] & 0xffffff00;
  uStack_16c = 0xdfe68000516767;
  local_d0 = puVar4;
  FUN_00409350();
  local_c._0_1_ = 2;
  puStack_164 = (uint *)0x51677b;
  local_150 = FUN_004f97a0();
  puStack_164 = (uint *)0xffffffff;
  local_c._0_1_ = 3;
  uStack_16c = ZEXT48(local_14c);
  local_118 = 0xf;
  local_11c = 0;
  local_12c[0] = local_12c[0] & 0xffffff00;
  ppuStack_170 = (undefined1 **)0x5167a4;
  FUN_00408ed0();
  puStack_164 = (uint *)0xffffffff;
  local_c._0_1_ = 4;
  uStack_16c = (ulonglong)local_150;
  local_fc = 0xf;
  local_100 = 0;
  local_110[0] = local_110[0] & 0xffffff00;
  ppuStack_170 = (undefined1 **)0x5167c9;
  FUN_00408ed0();
  local_c._0_1_ = 5;
  local_150 = puVar4[1];
  puStack_164 = (uint *)0x44;
  uStack_16c = CONCAT44(0x5167df,(undefined4)uStack_16c);
  puVar5 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 6;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 6;
  local_130 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    local_c._0_1_ = uVar2;
  }
  else {
    puStack_164 = (uint *)0xffffffff;
    *(undefined4 *)(puVar5 + 0x14) = 0xf;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    uStack_16c = ZEXT48(local_12c);
    *puVar5 = 0;
    ppuStack_170 = (undefined1 **)0x51680f;
    FUN_00408ed0();
    puStack_164 = (uint *)0xffffffff;
    local_c._0_1_ = 7;
    *(undefined4 *)(puVar5 + 0x30) = 0xf;
    *(undefined4 *)(puVar5 + 0x2c) = 0;
    uStack_16c = ZEXT48(local_110);
    puVar5[0x1c] = 0;
    ppuStack_170 = (undefined1 **)0x516833;
    FUN_00408ed0();
    *(uint *)(puVar5 + 0x38) = local_150;
    *(undefined4 *)(puVar5 + 0x3c) = 0;
    puVar5[0x40] = 0;
  }
  iVar7 = puVar4[2];
  puVar4[1] = puVar5;
  puVar4[2] = iVar7 + 1;
  if (iVar7 == 0) {
    *puVar4 = puVar5;
  }
  else {
    *(undefined1 **)(local_150 + 0x3c) = puVar5;
  }
  if (0xf < local_fc) {
    puStack_164 = (uint *)local_110[0];
    uStack_16c = CONCAT44(&UNK_00516870,(undefined4)uStack_16c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = 0xf;
  local_100 = 0;
  local_110[0] = local_110[0] & 0xffffff00;
  if (0xf < local_118) {
    puStack_164 = (uint *)local_12c[0];
    uStack_16c = CONCAT44(&UNK_00516895,(undefined4)uStack_16c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c[0] = local_12c[0] & 0xffffff00;
  if (0xf < local_e0) {
    puStack_164 = (uint *)local_f4[0];
    uStack_16c = CONCAT44(&UNK_005168b8,(undefined4)uStack_16c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 0;
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  if (0xf < local_138) {
    puStack_164 = (uint *)local_14c[0];
    uStack_16c = CONCAT44(&UNK_005168e2,(undefined4)uStack_16c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_164 = (uint *)0x7;
  local_138 = 0xf;
  local_13c = 0;
  local_14c[0] = local_14c[0] & 0xffffff00;
  uStack_16c = 0xdf233400516901;
  FUN_00409350();
  puStack_164 = (uint *)0xffffffff;
  local_c._0_1_ = 8;
  uStack_16c = ZEXT48(local_14c);
  local_118 = 0xf;
  local_11c = 0;
  local_12c[0] = local_12c[0] & 0xffffff00;
  ppuStack_170 = (undefined1 **)0x516926;
  FUN_00408ed0();
  puStack_164 = (uint *)0xffffffff;
  local_c._0_1_ = 9;
  uStack_16c = ZEXT48(local_c8);
  local_fc = 0xf;
  local_100 = 0;
  local_110[0] = local_110[0] & 0xffffff00;
  ppuStack_170 = (undefined1 **)0x51694e;
  FUN_00408ed0();
  local_c._0_1_ = 10;
  local_150 = puVar4[1];
  puStack_164 = (uint *)0x44;
  uStack_16c = CONCAT44(0x516964,(undefined4)uStack_16c);
  puVar5 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 0xb;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 0xb;
  local_130 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    local_c._0_1_ = uVar2;
  }
  else {
    puStack_164 = (uint *)0xffffffff;
    *(undefined4 *)(puVar5 + 0x14) = 0xf;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    uStack_16c = ZEXT48(local_12c);
    *puVar5 = 0;
    ppuStack_170 = (undefined1 **)0x516994;
    FUN_00408ed0();
    puStack_164 = (uint *)0xffffffff;
    local_c._0_1_ = 0xc;
    *(undefined4 *)(puVar5 + 0x30) = 0xf;
    *(undefined4 *)(puVar5 + 0x2c) = 0;
    uStack_16c = ZEXT48(local_110);
    puVar5[0x1c] = 0;
    ppuStack_170 = (undefined1 **)0x5169b8;
    FUN_00408ed0();
    *(uint *)(puVar5 + 0x38) = local_150;
    *(undefined4 *)(puVar5 + 0x3c) = 0;
    puVar5[0x40] = 0;
  }
  iVar7 = puVar4[2];
  puVar4[1] = puVar5;
  puVar4[2] = iVar7 + 1;
  if (iVar7 == 0) {
    *puVar4 = puVar5;
  }
  else {
    *(undefined1 **)(local_150 + 0x3c) = puVar5;
  }
  if (0xf < local_fc) {
    puStack_164 = (uint *)local_110[0];
    uStack_16c = CONCAT44(&UNK_005169f5,(undefined4)uStack_16c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = 0xf;
  local_100 = 0;
  local_110[0] = local_110[0] & 0xffffff00;
  if (0xf < local_118) {
    puStack_164 = (uint *)local_12c[0];
    uStack_16c = CONCAT44(&UNK_00516a1a,(undefined4)uStack_16c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 0;
  local_118 = 0xf;
  local_11c = 0;
  local_12c[0] = local_12c[0] & 0xffffff00;
  if (0xf < local_138) {
    puStack_164 = (uint *)local_14c[0];
    uStack_16c = CONCAT44(&UNK_00516a41,(undefined4)uStack_16c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_164 = (uint *)0x7;
  local_138 = 0xf;
  local_13c = 0;
  local_14c[0] = local_14c[0] & 0xffffff00;
  uStack_16c = 0xdfa9d000516a60;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,0xd);
  puStack_164 = local_f4;
  uStack_16c = CONCAT44(0x516a8b,(undefined4)uStack_16c);
  puVar6 = (uint *)(**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) +
                                          *(int *)(param_1 + 0xbe4) * 4) + 0x1c))();
  puStack_10._0_1_ = 0xe;
  uStack_16c = 0xffffffff00000000;
  ppuStack_170 = (undefined1 **)&local_150;
  local_11c = 0xf;
  uStack_120 = 0;
  local_130 = (undefined1 *)((uint)local_130 & 0xffffff00);
  uStack_178._4_4_ = 0x516ab6;
  FUN_00408ed0();
  puStack_10._0_1_ = 0xf;
  uStack_16c = 0xffffffff00000000;
  local_100 = 0xf;
  uStack_104 = 0;
  uStack_114 = uStack_114 & 0xffffff00;
  uStack_178._4_4_ = 0x516adb;
  ppuStack_170 = (undefined1 **)puVar6;
  FUN_00408ed0();
  puStack_10._0_1_ = 0x10;
  iVar7 = puVar4[1];
  uStack_16c = 0x4400516af1;
  puVar5 = (undefined1 *)FUN_00aae9af();
  puStack_10._0_1_ = 0x11;
  uVar2 = puStack_10._0_1_;
  puStack_10._0_1_ = 0x11;
  puStack_134 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    puStack_10._0_1_ = uVar2;
  }
  else {
    uStack_16c = 0xffffffff00000000;
    ppuStack_170 = &local_130;
    *(undefined4 *)(puVar5 + 0x14) = 0xf;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *puVar5 = 0;
    uStack_178._4_4_ = 0x516b21;
    FUN_00408ed0();
    puStack_10._0_1_ = 0x12;
    uStack_16c = 0xffffffff00000000;
    ppuStack_170 = (undefined1 **)&uStack_114;
    *(undefined4 *)(puVar5 + 0x30) = 0xf;
    *(undefined4 *)(puVar5 + 0x2c) = 0;
    puVar5[0x1c] = 0;
    uStack_178._4_4_ = 0x516b45;
    FUN_00408ed0();
    *(int *)(puVar5 + 0x38) = iVar7;
    *(undefined4 *)(puVar5 + 0x3c) = 0;
    puVar5[0x40] = 0;
  }
  iVar1 = puVar4[2];
  puVar4[1] = puVar5;
  puVar4[2] = iVar1 + 1;
  if (iVar1 == 0) {
    *puVar4 = puVar5;
  }
  else {
    *(undefined1 **)(iVar7 + 0x3c) = puVar5;
  }
  if (0xf < local_100) {
    uStack_16c = CONCAT44(uStack_114,&UNK_00516b82);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = 0xf;
  uStack_104 = 0;
  uStack_114 = uStack_114 & 0xffffff00;
  if (0xf < local_11c) {
    uStack_16c = CONCAT44(local_130,&UNK_00516ba7);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_11c = 0xf;
  uStack_120 = 0;
  local_130 = (undefined1 *)((uint)local_130 & 0xffffff00);
  if (0xf < local_e4) {
    uStack_16c = CONCAT44(uStack_f8,&UNK_00516bca);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 0;
  local_e4 = 0xf;
  uStack_e8 = 0;
  uStack_f8 = uStack_f8 & 0xffffff00;
  if (0xf < local_13c) {
    uStack_16c = CONCAT44(local_150,&UNK_00516bf4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_16c = 0x700dfdcf0;
  local_13c = 0xf;
  uStack_140 = 0;
  local_150 = local_150 & 0xffffff00;
  ppuStack_170 = (undefined1 **)0x516c13;
  FUN_00409350();
  puStack_10._0_1_ = 0x13;
  uStack_16c = CONCAT44(param_2,0x516c28);
  puVar6 = (uint *)FUN_0041a080();
  puStack_10._0_1_ = 0x14;
  uStack_16c = 0xffffffff00000000;
  ppuStack_170 = (undefined1 **)&local_150;
  local_11c = 0xf;
  uStack_120 = 0;
  local_130 = (undefined1 *)((uint)local_130 & 0xffffff00);
  uStack_178._4_4_ = 0x516c53;
  FUN_00408ed0();
  puStack_10._0_1_ = 0x15;
  uStack_16c = 0xffffffff00000000;
  local_100 = 0xf;
  uStack_104 = 0;
  uStack_114 = uStack_114 & 0xffffff00;
  uStack_178._4_4_ = 0x516c78;
  ppuStack_170 = (undefined1 **)puVar6;
  FUN_00408ed0();
  puStack_10._0_1_ = 0x16;
  iVar7 = puVar4[1];
  uStack_16c = 0x4400516c8e;
  puVar5 = (undefined1 *)FUN_00aae9af();
  puStack_10._0_1_ = 0x17;
  uVar2 = puStack_10._0_1_;
  puStack_10._0_1_ = 0x17;
  puStack_134 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    puStack_10._0_1_ = uVar2;
  }
  else {
    uStack_16c = 0xffffffff00000000;
    ppuStack_170 = &local_130;
    *(undefined4 *)(puVar5 + 0x14) = 0xf;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *puVar5 = 0;
    uStack_178._4_4_ = 0x516cbe;
    FUN_00408ed0();
    puStack_10._0_1_ = 0x18;
    uStack_16c = 0xffffffff00000000;
    ppuStack_170 = (undefined1 **)&uStack_114;
    *(undefined4 *)(puVar5 + 0x30) = 0xf;
    *(undefined4 *)(puVar5 + 0x2c) = 0;
    puVar5[0x1c] = 0;
    uStack_178._4_4_ = 0x516ce2;
    FUN_00408ed0();
    *(int *)(puVar5 + 0x38) = iVar7;
    *(undefined4 *)(puVar5 + 0x3c) = 0;
    puVar5[0x40] = 0;
  }
  iVar1 = puVar4[2];
  puVar4[1] = puVar5;
  puVar4[2] = iVar1 + 1;
  if (iVar1 == 0) {
    *puVar4 = puVar5;
  }
  else {
    *(undefined1 **)(iVar7 + 0x3c) = puVar5;
  }
  if (0xf < local_100) {
    uStack_16c = CONCAT44(uStack_114,&UNK_00516d1f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = 0xf;
  uStack_104 = 0;
  uStack_114 = uStack_114 & 0xffffff00;
  if (0xf < local_11c) {
    uStack_16c = CONCAT44(local_130,&UNK_00516d44);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_11c = 0xf;
  uStack_120 = 0;
  local_130 = (undefined1 *)((uint)local_130 & 0xffffff00);
  if (0xf < local_e4) {
    uStack_16c = CONCAT44(uStack_f8,&UNK_00516d67);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 0;
  local_e4 = 0xf;
  uStack_e8 = 0;
  uStack_f8 = uStack_f8 & 0xffffff00;
  if (0xf < local_13c) {
    uStack_16c = CONCAT44(local_150,&UNK_00516d91);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_16c = 0x1100dfde98;
  local_13c = 0xf;
  uStack_140 = 0;
  local_150 = local_150 & 0xffffff00;
  ppuStack_170 = (undefined1 **)0x516db0;
  FUN_00409350();
  puStack_10._0_1_ = 0x19;
  uStack_16c = 0x900df2728;
  local_e4 = 0xf;
  uStack_e8 = 0;
  uStack_f8 = uStack_f8 & 0xffffff00;
  ppuStack_170 = (undefined1 **)0x516dda;
  FUN_00409350();
  uStack_16c = CONCAT44(&local_150,auStack_b0);
  puStack_10._0_1_ = 0x1a;
  ppuStack_170 = (undefined1 **)0x516df4;
  FUN_009a8ee0();
  puStack_10._0_1_ = 0x1b;
  uStack_16c = CONCAT44(0x516e05,(undefined4)uStack_16c);
  iVar7 = FUN_00475500();
  uStack_178._4_4_ = (undefined4)*(undefined8 *)(iVar7 + 0x6c);
  ppuStack_170 = (undefined1 **)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
  uStack_16c = *(undefined8 *)(iVar7 + 0x74);
  uStack_178._0_4_ = 0x516e2a;
  uVar8 = FUN_009a9880();
  uStack_16c = CONCAT44(uVar8,&uStack_f8);
  ppuStack_170 = (undefined1 **)auStack_54;
  puStack_10._0_1_ = 0x1c;
  uStack_178._4_4_ = 0x516e45;
  FUN_00424aa0();
  puStack_10._0_1_ = 0x1d;
  iVar7 = puVar4[1];
  uStack_16c = 0x4400516e5d;
  puStack_134 = (undefined1 *)FUN_00aae9af();
  puStack_10._0_1_ = 0x1e;
  if (puStack_134 == (undefined1 *)0x0) {
    uVar8 = 0;
  }
  else {
    uStack_16c = CONCAT44(iVar7,puStack_134);
    ppuStack_170 = (undefined1 **)0x516e7d;
    uVar8 = FUN_0042b900();
  }
  iVar1 = puVar4[2];
  puVar4[1] = uVar8;
  puVar4[2] = iVar1 + 1;
  if (iVar1 == 0) {
    *puVar4 = uVar8;
  }
  else {
    *(undefined4 *)(iVar7 + 0x3c) = uVar8;
  }
  uStack_16c = CONCAT44(0x516ea8,(undefined4)uStack_16c);
  FUN_00a39a80();
  if (0xf < local_11c) {
    uStack_16c = CONCAT44(local_130,&UNK_00516eb9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_11c = 0xf;
  uStack_120 = 0;
  local_130 = (undefined1 *)((uint)local_130 & 0xffffff00);
  puStack_10._0_1_ = 0x1f;
  uStack_16c = CONCAT44(0x516ee0,(undefined4)uStack_16c);
  FUN_009adb70();
  uStack_16c = CONCAT44(0x516ee7,(undefined4)uStack_16c);
  FUN_004d8540();
  if (0xf < local_e4) {
    uStack_16c = CONCAT44(uStack_f8,&UNK_00516eff);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 0;
  uVar2 = puStack_10._0_1_;
  puStack_10._0_1_ = 0;
  local_e4 = 0xf;
  uStack_e8 = 0;
  uVar3 = uStack_f8 >> 8;
  uStack_f8 = uVar3 << 8;
  if (0xf < local_13c) {
    uStack_16c = CONCAT44(local_150,&UNK_00516f2d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_13c = 0xf;
  uStack_140 = 0;
  local_150 = local_150 & 0xffffff00;
  local_e4 = 0xf;
  uStack_e8 = 0;
  uStack_f8 = uVar3 << 8;
  uStack_16c = 0xded94d;
  if (*(int *)(param_1 + 0x20) == *(int *)(DAT_012588e8 + 0xb60)) {
    ppuStack_170 = (undefined1 **)0x516f75;
    FUN_00409350();
    puStack_10._0_1_ = 0x20;
    uStack_16c = 0xc00dfe810;
    local_13c = 0xf;
    uStack_140 = 0;
    local_150 = local_150 & 0xffffff00;
    ppuStack_170 = (undefined1 **)0x516f99;
    FUN_00409350();
    puStack_134 = auStack_1e4;
    puStack_10._0_1_ = 0x21;
    uVar14 = 0;
    uStack_dc = 0x2d2d2d;
    uVar13 = 0x2d2d2d;
    uVar8 = local_d0[1];
    uVar10 = *local_d0;
    uVar12 = 0;
    puVar6 = &uStack_f8;
    uVar11 = 0;
    FUN_006a4f40(puStack_d4,0,puVar6,0,uVar10,uVar8,0x2d2d2d,0);
    uVar9 = FUN_006a55b0();
    FUN_006a7ed0(auStack_1e4,uVar9,puStack_d4,uVar11,puVar6,uVar12,uVar10,uVar8,uVar13,uVar14);
    puStack_10._0_1_ = 0x22;
    uVar8 = FUN_006a4f40();
    puStack_10._0_1_ = 0x21;
    FUN_0042bb30(uVar8);
    if (0xf < local_13c) {
      uStack_16c = CONCAT44(local_150,&UNK_00517045);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ppuStack_170 = (undefined1 **)0x51707b;
    puStack_10._0_1_ = uVar2;
    FUN_00409350();
    puStack_10._0_1_ = 0x23;
    uStack_16c = 0x1100dfe820;
    local_13c = 0xf;
    uStack_140 = 0;
    local_150 = local_150 & 0xffffff00;
    ppuStack_170 = (undefined1 **)0x51709f;
    FUN_00409350();
    puStack_134 = auStack_1e4;
    puStack_10._0_1_ = 0x24;
    uVar14 = 0;
    uVar8 = local_d0[1];
    uVar10 = *local_d0;
    uStack_dc = 0x2d2d2d;
    uVar13 = 0x2d2d2d;
    uVar12 = 0;
    puVar6 = &uStack_f8;
    uVar11 = 0;
    FUN_006a4f40(puStack_d4,0,puVar6,0,uVar10,uVar8,0x2d2d2d,0);
    uVar9 = FUN_006a55b0();
    FUN_006a7ed0(auStack_1e4,uVar9,puStack_d4,uVar11,puVar6,uVar12,uVar10,uVar8,uVar13,uVar14);
    puStack_10._0_1_ = 0x25;
    uVar8 = FUN_006a4f40();
    puStack_10._0_1_ = 0x24;
    FUN_0042bb30(uVar8);
    if (0xf < local_13c) {
      uStack_16c = CONCAT44(local_150,&UNK_0051714b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
  local_150 = local_150 & 0xffffff00;
  if (local_e4 < 0x10) {
    local_13c = 0xf;
    uStack_140 = 0;
    uStack_64 = *(undefined4 *)(param_2 + 8);
    local_60 = *(undefined4 *)(param_2 + 0xc);
    uStack_16c = CONCAT44(auStack_9c,0x5171a1);
    FUN_004e5a20();
    uVar3 = *(int *)(*(int *)(param_1 + 0xbcc) + 0x28c) + *(int *)(param_1 + 0xea0);
    puStack_134 = (undefined1 *)((int)&uStack_16c + 4);
    puStack_d4 = (undefined4 *)((int)&uStack_16c + 4);
    uStack_178 = (longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 200) * (longlong)(int)uVar3;
    uStack_16c = (ulonglong)uVar3 << 0x20;
    ppuStack_170 = (undefined1 **)0x3e8;
    uStack_17c = 0x5171dd;
    uVar8 = __alldiv();
    *puStack_d4 = uVar8;
    uStack_16c = CONCAT44(uStack_16c._4_4_,0x5171eb);
    FUN_005341a0();
    if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
      uVar8 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
      uStack_16c = CONCAT44(param_2,0x517215);
      uVar10 = FUN_00469dc0();
      uStack_16c = CONCAT44(uVar10,uVar8);
      ppuStack_170 = (undefined1 **)0x51721c;
      FUN_00457b00();
    }
    if (local_b8 < 0x10) {
      ExceptionList = pvStack_18;
      return;
    }
    uStack_16c = CONCAT44(local_cc,&UNK_00517233);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_13c = 0xf;
  uStack_140 = 0;
  uStack_16c = CONCAT44(uStack_f8,&UNK_00517178);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

