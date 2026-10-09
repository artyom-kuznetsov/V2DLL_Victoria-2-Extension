// FUN_0059e300 @ 0059e300

void FUN_0059e300(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int *in_ECX;
  undefined1 **ppuVar14;
  undefined1 **ppuVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined1 auStack_1d4 [116];
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  uint *puStack_14c;
  undefined1 *local_138;
  undefined1 *local_134;
  undefined1 *local_130;
  int local_12c;
  undefined1 local_128;
  undefined1 uStack_125;
  undefined1 *puStack_124;
  undefined1 *local_120;
  uint local_11c [3];
  undefined4 uStack_110;
  uint local_10c;
  uint local_108;
  undefined1 *puStack_104;
  int local_100;
  uint uStack_fc;
  uint local_f8 [3];
  undefined4 uStack_ec;
  uint local_e8;
  uint local_e4;
  uint uStack_e0;
  uint local_dc [3];
  undefined4 uStack_d0;
  uint local_cc;
  uint local_c8;
  uint uStack_c4;
  uint local_c0 [3];
  undefined4 uStack_b4;
  uint local_b0;
  uint local_ac;
  uint uStack_a8;
  uint local_a4 [3];
  undefined4 uStack_98;
  uint local_94;
  uint local_90;
  undefined1 auStack_8c [28];
  undefined1 auStack_70 [28];
  undefined1 auStack_54 [60];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar11 = DAT_012588e8;
  iVar7 = DAT_012587e4;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b95cbb;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined1 *)((int)in_ECX + 0x29) = 1;
  local_100 = *(int *)(iVar11 + 0xb5c);
  puStack_14c = *(uint **)(*(int *)(iVar7 + 4) + *(int *)(iVar11 + 0xb60) * 4);
  uStack_154 = CONCAT44(0x59e351,(undefined4)uStack_154);
  piVar4 = (int *)FUN_005061e0();
  local_134 = (undefined1 *)0x0;
  local_130 = (undefined1 *)0x0;
  local_12c = 0;
  local_128 = 0;
  puStack_14c = (uint *)*piVar4;
  while (puStack_14c != (uint *)0x0) {
    iVar7 = *(int *)((int)puStack_14c + 0x3c);
    uStack_154 = CONCAT44(0x59e37d,(undefined4)uStack_154);
    FUN_0042b730();
    puStack_14c = (uint *)iVar7;
  }
  local_c = 0;
  puStack_14c = (uint *)0x11;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  uStack_154 = 0xdfdcc00059e3b7;
  FUN_00409350();
  local_c._0_1_ = 1;
  puStack_14c = (uint *)0x9;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  uStack_154 = 0xdf27280059e3e7;
  FUN_00409350();
  local_c._0_1_ = 2;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 2;
  if (DAT_01262ef4 == 0) {
    puStack_14c = (uint *)0x44;
    uStack_154 = CONCAT44(0x59e3fe,(undefined4)uStack_154);
    local_138 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 3;
    if (local_138 == (undefined1 *)0x0) {
      puStack_14c = (uint *)0x0;
    }
    else {
      puStack_14c = (uint *)0x59e418;
      puStack_14c = (uint *)FUN_006a4e30();
    }
    local_c._0_1_ = 2;
    uStack_154 = CONCAT44(0x59e42a,(undefined4)uStack_154);
    FUN_006a59b0();
    uVar2 = (undefined1)local_c;
  }
  local_c._0_1_ = uVar2;
  puStack_14c = local_a4;
  uStack_154 = CONCAT44(local_11c,0x59e43c);
  uVar5 = FUN_00424ce0();
  puStack_14c = (uint *)0xffffffff;
  local_c._0_1_ = 4;
  uStack_154 = ZEXT48(local_c0);
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  uStack_15c = CONCAT44(0x59e46a,(undefined4)uStack_15c);
  FUN_00408ed0();
  puStack_14c = (uint *)0xffffffff;
  local_c._0_1_ = 5;
  uStack_154 = (ulonglong)uVar5;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  uStack_15c = CONCAT44(0x59e495,(undefined4)uStack_15c);
  FUN_00408ed0();
  local_c._0_1_ = 6;
  puStack_14c = (uint *)0x44;
  local_138 = local_130;
  uStack_154 = CONCAT44(0x59e4ac,(undefined4)uStack_154);
  puVar6 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 7;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 7;
  local_120 = puVar6;
  if (puVar6 == (undefined1 *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_c._0_1_ = uVar2;
  }
  else {
    puStack_14c = (uint *)0xffffffff;
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    uStack_154 = ZEXT48(local_f8);
    *puVar6 = 0;
    uStack_15c = CONCAT44(0x59e4dc,(undefined4)uStack_15c);
    FUN_00408ed0();
    puStack_14c = (uint *)0xffffffff;
    local_c._0_1_ = 8;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    uStack_154 = ZEXT48(local_dc);
    puVar6[0x1c] = 0;
    uStack_15c = CONCAT44(0x59e500,(undefined4)uStack_15c);
    FUN_00408ed0();
    *(undefined1 **)(puVar6 + 0x38) = local_138;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
    local_130 = puVar6;
  }
  iVar7 = local_12c + 1;
  puVar6 = local_130;
  if (local_12c != 0) {
    *(undefined1 **)(local_138 + 0x3c) = local_130;
    puVar6 = local_134;
  }
  local_134 = puVar6;
  local_12c = iVar7;
  if (0xf < local_c8) {
    puStack_14c = (uint *)local_dc[0];
    uStack_154 = CONCAT44(&UNK_0059e549,(undefined4)uStack_154);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  if (0xf < local_e4) {
    puStack_14c = (uint *)local_f8[0];
    uStack_154 = CONCAT44(&UNK_0059e56f,(undefined4)uStack_154);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  if (0xf < local_108) {
    puStack_14c = (uint *)local_11c[0];
    uStack_154 = CONCAT44(&UNK_0059e592,(undefined4)uStack_154);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_108 = 0xf;
  local_10c = 0;
  local_11c[0] = local_11c[0] & 0xffffff00;
  if (0xf < local_ac) {
    puStack_14c = (uint *)local_c0[0];
    uStack_154 = CONCAT44(&UNK_0059e5bb,(undefined4)uStack_154);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 0;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  if (0xf < local_90) {
    puStack_14c = (uint *)local_a4[0];
    uStack_154 = CONCAT44(&UNK_0059e5f4,(undefined4)uStack_154);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_14c = (uint *)0x8;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  uStack_154 = 0xe01f440059e623;
  FUN_00409350();
  local_c._0_1_ = 9;
  puStack_14c = (uint *)(in_ECX[4] + 0x20);
  uStack_154 = CONCAT44(local_11c,0x59e63c);
  uVar5 = FUN_0059dbf0();
  puStack_14c = (uint *)0xffffffff;
  local_c._0_1_ = 10;
  uStack_154 = ZEXT48(local_a4);
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  uStack_15c = CONCAT44(0x59e66d,(undefined4)uStack_15c);
  FUN_00408ed0();
  puStack_14c = (uint *)0xffffffff;
  local_c._0_1_ = 0xb;
  uStack_154 = (ulonglong)uVar5;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  uStack_15c = CONCAT44(0x59e698,(undefined4)uStack_15c);
  FUN_00408ed0();
  local_c._0_1_ = 0xc;
  puStack_14c = (uint *)0x44;
  local_138 = local_130;
  uStack_154 = CONCAT44(0x59e6af,(undefined4)uStack_154);
  puVar6 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 0xd;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 0xd;
  local_120 = puVar6;
  if (puVar6 == (undefined1 *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_c._0_1_ = uVar2;
  }
  else {
    puStack_14c = (uint *)0xffffffff;
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    uStack_154 = ZEXT48(local_f8);
    *puVar6 = 0;
    uStack_15c = CONCAT44(0x59e6df,(undefined4)uStack_15c);
    FUN_00408ed0();
    puStack_14c = (uint *)0xffffffff;
    local_c._0_1_ = 0xe;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    uStack_154 = ZEXT48(local_dc);
    puVar6[0x1c] = 0;
    uStack_15c = CONCAT44(0x59e703,(undefined4)uStack_15c);
    FUN_00408ed0();
    *(undefined1 **)(puVar6 + 0x38) = local_138;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
    local_130 = puVar6;
  }
  iVar7 = local_12c + 1;
  puVar6 = local_130;
  if (local_12c != 0) {
    *(undefined1 **)(local_138 + 0x3c) = local_130;
    puVar6 = local_134;
  }
  local_134 = puVar6;
  local_12c = iVar7;
  if (0xf < local_c8) {
    puStack_14c = (uint *)local_dc[0];
    uStack_154 = CONCAT44(&UNK_0059e74c,(undefined4)uStack_154);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  if (0xf < local_e4) {
    puStack_14c = (uint *)local_f8[0];
    uStack_154 = CONCAT44(&UNK_0059e772,(undefined4)uStack_154);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  if (0xf < local_108) {
    puStack_14c = (uint *)local_11c[0];
    uStack_154 = CONCAT44(&UNK_0059e795,(undefined4)uStack_154);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 0;
  local_108 = 0xf;
  local_10c = 0;
  local_11c[0] = local_11c[0] & 0xffffff00;
  if (0xf < local_90) {
    puStack_14c = (uint *)local_a4[0];
    uStack_154 = CONCAT44(&UNK_0059e7c5,(undefined4)uStack_154);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_14c = (uint *)0x4;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  uStack_154 = 0xdf85c00059e7f4;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,0xf);
  puStack_14c = local_11c;
  uStack_154 = CONCAT44(0x59e80b,(undefined4)uStack_154);
  uVar8 = (**(code **)(*(int *)in_ECX[6] + 0x1c))();
  puStack_10._0_1_ = 0x10;
  uStack_154 = 0xffffffff00000000;
  local_e8 = 0xf;
  uStack_ec = 0;
  uStack_fc = uStack_fc & 0xffffff00;
  uStack_15c = CONCAT44(&uStack_c4,0x59e839);
  FUN_00408ed0();
  puStack_10._0_1_ = 0x11;
  uStack_154 = 0xffffffff00000000;
  local_cc = 0xf;
  uStack_d0 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_15c = CONCAT44(uVar8,0x59e864);
  FUN_00408ed0();
  puVar6 = local_134;
  puStack_10._0_1_ = 0x12;
  uStack_154 = 0x440059e87b;
  puVar9 = (undefined1 *)FUN_00aae9af();
  puStack_10._0_1_ = 0x13;
  uVar2 = puStack_10._0_1_;
  puStack_10._0_1_ = 0x13;
  puStack_124 = puVar9;
  if (puVar9 == (undefined1 *)0x0) {
    local_134 = (undefined1 *)0x0;
    puStack_10._0_1_ = uVar2;
  }
  else {
    uStack_154 = 0xffffffff00000000;
    *(undefined4 *)(puVar9 + 0x14) = 0xf;
    *(undefined4 *)(puVar9 + 0x10) = 0;
    *puVar9 = 0;
    uStack_15c = CONCAT44(&uStack_fc,0x59e8ab);
    FUN_00408ed0();
    puStack_10._0_1_ = 0x14;
    uStack_154 = 0xffffffff00000000;
    *(undefined4 *)(puVar9 + 0x30) = 0xf;
    *(undefined4 *)(puVar9 + 0x2c) = 0;
    puVar9[0x1c] = 0;
    uStack_15c = CONCAT44(&uStack_e0,0x59e8cf);
    FUN_00408ed0();
    *(undefined1 **)(puVar9 + 0x38) = puVar6;
    *(undefined4 *)(puVar9 + 0x3c) = 0;
    puVar9[0x40] = 0;
    local_134 = puVar9;
  }
  puVar10 = local_130 + 1;
  puVar9 = local_134;
  if (local_130 != (undefined1 *)0x0) {
    *(undefined1 **)(puVar6 + 0x3c) = local_134;
    puVar9 = local_138;
  }
  local_138 = puVar9;
  local_130 = puVar10;
  if (0xf < local_cc) {
    uStack_154 = CONCAT44(uStack_e0,&UNK_0059e918);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = 0xf;
  uStack_d0 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  if (0xf < local_e8) {
    uStack_154 = CONCAT44(uStack_fc,&UNK_0059e93e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e8 = 0xf;
  uStack_ec = 0;
  uStack_fc = uStack_fc & 0xffffff00;
  if (0xf < local_10c) {
    uStack_154 = CONCAT44(local_120,&UNK_0059e961);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 0;
  local_10c = 0xf;
  uStack_110 = 0;
  local_120 = (undefined1 *)((uint)local_120 & 0xffffff00);
  if (0xf < local_b0) {
    uStack_154 = CONCAT44(uStack_c4,&UNK_0059e991);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_154 = CONCAT44(&DAT_00dfdc14,&puStack_104);
  local_b0 = 0xf;
  uStack_b4 = 0;
  uStack_c4 = uStack_c4 & 0xffffff00;
  uStack_15c = CONCAT44(DAT_012587e4,0x59e9c2);
  FUN_0055c6c0();
  iVar7 = *(int *)(in_ECX[4] + 0x38);
  iVar11 = *(int *)(in_ECX[4] + 0x34);
  if (iVar11 == iVar7) {
LAB_0059e9e3:
    iVar7 = *(int *)(in_ECX[5] + 0x38);
    iVar11 = *(int *)(in_ECX[5] + 0x34);
    if (iVar11 != iVar7) {
      do {
        if (*(int *)(iVar11 + 4) == local_100) break;
        iVar11 = iVar11 + 8;
      } while (iVar11 != iVar7);
      if (iVar11 != iVar7) goto LAB_0059ea06;
    }
    uStack_125 = 0;
  }
  else {
    do {
      if (*(int *)(iVar11 + 4) == local_100) break;
      iVar11 = iVar11 + 8;
    } while (iVar11 != iVar7);
    if (iVar11 == iVar7) goto LAB_0059e9e3;
LAB_0059ea06:
    uStack_125 = 1;
  }
  uStack_154 = CONCAT44(0x59ea14,(undefined4)uStack_154);
  iVar7 = (**(code **)(*in_ECX + 0x24))();
  local_b0 = 0xf;
  uStack_b4 = 0;
  uStack_c4 = uStack_c4 & 0xffffff00;
  uStack_154 = 0x800e01f50;
  if (iVar7 == 3) {
    uStack_15c = CONCAT44(0x59ea49,(undefined4)uStack_15c);
    FUN_00409350();
    puStack_10._0_1_ = 0x15;
    uStack_154 = CONCAT44(0x59ea62,(undefined4)uStack_154);
    uVar8 = FUN_0055dd40();
    uStack_154 = CONCAT44(uVar8,&uStack_c4);
    puStack_10._0_1_ = 0x16;
    uStack_15c = CONCAT44(&uStack_fc,0x59ea7d);
    FUN_00424aa0();
    puVar6 = local_134;
    puStack_10._0_1_ = 0x17;
    uStack_154 = 0x440059ea96;
    puStack_124 = (undefined1 *)FUN_00aae9af();
    puStack_10._0_1_ = 0x18;
    if (puStack_124 == (undefined1 *)0x0) {
      local_134 = (undefined1 *)0x0;
    }
    else {
      uStack_154 = CONCAT44(puVar6,puStack_124);
      uStack_15c = CONCAT44(0x59eab6,(undefined4)uStack_15c);
      local_134 = (undefined1 *)FUN_0042b900();
    }
    puVar9 = local_134;
    if (local_130 != (undefined1 *)0x0) {
      *(undefined1 **)(puVar6 + 0x3c) = local_134;
      puVar9 = local_138;
    }
    local_138 = puVar9;
    uStack_154 = CONCAT44(0x59eae3,(undefined4)uStack_154);
    local_130 = local_130 + 1;
    FUN_00a39a80();
    if (0xf < local_10c) {
      uStack_154 = CONCAT44(local_120,&UNK_0059eaf4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10._0_1_ = 0;
    uVar1 = puStack_10._0_1_;
    puStack_10._0_1_ = 0;
    local_10c = 0xf;
    uStack_110 = 0;
    local_120 = (undefined1 *)((uint)local_120 & 0xffffff00);
    if (0xf < local_b0) {
      uStack_154 = CONCAT44(uStack_c4,&UNK_0059eb26);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar7 = in_ECX[4];
    iVar11 = *(int *)(iVar7 + 0x38);
    iVar12 = *(int *)(iVar7 + 0x34);
    local_b0 = 0xf;
    uStack_b4 = 0;
    uStack_c4 = uStack_c4 & 0xffffff00;
    if (iVar12 != iVar11) {
      do {
        if (*(int *)(iVar12 + 4) == *(int *)(DAT_012588e8 + 0xb60)) break;
        iVar12 = iVar12 + 8;
      } while (iVar12 != iVar11);
      if (iVar12 != iVar11) {
        uStack_154 = CONCAT44(0x59eb82,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x19;
        uStack_154 = CONCAT44(0x59eba6,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x1a;
        uStack_154 = 0x4b7680;
        puStack_124 = auStack_1d4;
        uStack_1dc = 0;
        iStack_1d8 = 0;
        iVar7 = in_ECX[6];
        uVar8 = *(undefined4 *)(iVar7 + 0x134);
        uVar20 = *(undefined4 *)(iVar7 + 0x130);
        uVar19 = *(undefined4 *)(DAT_012588e8 + 0xb60);
        uVar18 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        uVar17 = 0;
        ppuVar15 = &local_120;
        ppuVar14 = &local_138;
        FUN_006a4f40(ppuVar14,iVar7,ppuVar15,0,uVar18,uVar19,uVar20,uVar8);
        uVar13 = FUN_006a55b0();
        FUN_006a7ed0(auStack_1d4,uVar13,ppuVar14,iVar7,ppuVar15,uVar17,uVar18,uVar19,uVar20,uVar8);
        puStack_10._0_1_ = 0x1b;
        iStack_1d8 = in_ECX[6];
        uStack_1dc = 0x59ec37;
        uStack_1dc = FUN_006a4f40();
        puStack_10._0_1_ = 0x1a;
        FUN_005ab970();
        if (0xf < local_94) {
          uStack_154 = CONCAT44(uStack_a8,&UNK_0059ec5c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_94 = 0xf;
        uStack_98 = 0;
        uStack_a8 = uStack_a8 & 0xffffff00;
        uVar2 = puStack_10._0_1_;
        if (0xf < local_10c) {
          uStack_154 = CONCAT44(local_120,&UNK_0059ec8d);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        goto LAB_005a015f;
      }
    }
    uVar2 = uVar1;
    if ((*(int *)(in_ECX[6] + 0x134) != *(int *)(DAT_012588e8 + 0xb60)) ||
       (uVar2 = puStack_10._0_1_,
       (int)(*(int *)(iVar7 + 0x38) - *(int *)(iVar7 + 0x34) & 0xfffffff8U) < 1)) goto LAB_005a015f;
    uStack_154 = CONCAT44(0x59ecd2,(undefined4)uStack_154);
    puStack_10._0_1_ = uVar1;
    FUN_009885d0();
    puStack_10._0_1_ = 0x1c;
    uStack_154 = CONCAT44(0x59ecf3,(undefined4)uStack_154);
    FUN_009885d0();
    puStack_10._0_1_ = 0x1d;
    uStack_154 = 0x4b7680;
    puStack_124 = auStack_1d4;
    uStack_1dc = 0;
    iStack_1d8 = 0;
    uVar8 = *(undefined4 *)(DAT_012588e8 + 0xb60);
    uVar20 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    uVar19 = (*(undefined4 **)(in_ECX[4] + 0x34))[1];
    uVar18 = **(undefined4 **)(in_ECX[4] + 0x34);
    iVar7 = in_ECX[6];
    uVar17 = 0;
    puVar16 = &uStack_a8;
    ppuVar15 = &local_138;
    FUN_006a4f40(ppuVar15,iVar7,puVar16,0,uVar18,uVar19,uVar20,uVar8);
    uVar13 = FUN_006a55b0();
    FUN_006a7ed0(auStack_1d4,uVar13,ppuVar15,iVar7,puVar16,uVar17,uVar18,uVar19,uVar20,uVar8);
    puStack_10._0_1_ = 0x1e;
    iStack_1d8 = in_ECX[6];
    uStack_1dc = 0x59ed83;
    uStack_1dc = FUN_006a4f40();
    puStack_10._0_1_ = 0x1d;
    FUN_005ab970();
    uStack_154 = CONCAT44(0x59ed9a,(undefined4)uStack_154);
    FUN_00408ad0();
  }
  else {
    uStack_15c = CONCAT44(0x59eda4,(undefined4)uStack_15c);
    FUN_00409350();
    puStack_10._0_1_ = 0x1f;
    uStack_154 = CONCAT44(in_ECX[5] + 0x20,&local_120);
    uStack_15c = CONCAT44(0x59edbd,(undefined4)uStack_15c);
    uVar8 = FUN_0059dbf0();
    uStack_154 = CONCAT44(uVar8,&uStack_c4);
    puStack_10._0_1_ = 0x20;
    uStack_15c = CONCAT44(&uStack_fc,0x59eddb);
    FUN_00424aa0();
    puVar6 = local_134;
    puStack_10._0_1_ = 0x21;
    uStack_154 = 0x440059edf4;
    puStack_124 = (undefined1 *)FUN_00aae9af();
    puStack_10._0_1_ = 0x22;
    if (puStack_124 == (undefined1 *)0x0) {
      local_134 = (undefined1 *)0x0;
    }
    else {
      uStack_154 = CONCAT44(puVar6,puStack_124);
      uStack_15c = CONCAT44(0x59ee14,(undefined4)uStack_15c);
      local_134 = (undefined1 *)FUN_0042b900();
    }
    puVar9 = local_134;
    if (local_130 != (undefined1 *)0x0) {
      *(undefined1 **)(puVar6 + 0x3c) = local_134;
      puVar9 = local_138;
    }
    local_138 = puVar9;
    uStack_154 = CONCAT44(0x59ee41,(undefined4)uStack_154);
    local_130 = local_130 + 1;
    FUN_00a39a80();
    if (0xf < local_10c) {
      uStack_154 = CONCAT44(local_120,&UNK_0059ee52);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10._0_1_ = 0;
    local_10c = 0xf;
    uStack_110 = 0;
    local_120 = (undefined1 *)((uint)local_120 & 0xffffff00);
    if (0xf < local_b0) {
      uStack_154 = CONCAT44(uStack_c4,&UNK_0059ee84);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar7 = *(int *)(in_ECX[4] + 0x38);
    iVar11 = *(int *)(in_ECX[4] + 0x34);
    local_b0 = 0xf;
    uStack_b4 = 0;
    uStack_c4 = uStack_c4 & 0xffffff00;
    if (iVar11 == iVar7) {
LAB_0059f96b:
      uStack_154 = CONCAT44(0x59f97c,(undefined4)uStack_154);
      cVar3 = FUN_0042bb00();
      uVar2 = puStack_10._0_1_;
      if (cVar3 == '\0') goto LAB_005a015f;
      uStack_154 = CONCAT44(0x59f995,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x53;
      uStack_154 = CONCAT44(in_ECX[5] + 0x20,&uStack_fc);
      uStack_15c = CONCAT44(0x59f9ae,(undefined4)uStack_15c);
      uVar8 = FUN_0059d640();
      uStack_154 = CONCAT44(uVar8,auStack_8c);
      puStack_10._0_1_ = 0x54;
      uStack_15c = CONCAT44(auStack_54,0x59f9ca);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x55;
      uStack_154 = 0x440059f9e3;
      puStack_104 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x56;
      if (puStack_104 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_104);
        uStack_15c = CONCAT44(0x59fa03,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x59fa33,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      uStack_154 = CONCAT44(0x59fa3c,(undefined4)uStack_154);
      FUN_00408ad0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59fa4f,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x59fa60,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x57;
      uStack_154 = CONCAT44(in_ECX[4] + 0x20,&uStack_fc);
      uStack_15c = CONCAT44(0x59fa79,(undefined4)uStack_15c);
      uVar8 = FUN_0059d640();
      uStack_154 = CONCAT44(uVar8,auStack_70);
      puStack_10._0_1_ = 0x58;
      uStack_15c = CONCAT44(auStack_54,0x59fa95);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x59;
      uStack_154 = 0x440059faae;
      puStack_104 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x5a;
      if (puStack_104 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_104);
        uStack_15c = CONCAT44(0x59face,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x59fafe,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      uStack_154 = CONCAT44(0x59fb07,(undefined4)uStack_154);
      FUN_00408ad0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59fb1a,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x59fb2b,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x5b;
      uStack_154 = CONCAT44(6,in_ECX[5] + 0x20);
      uStack_15c = CONCAT44(&uStack_fc,0x59fb46);
      uVar8 = FUN_0059cf70();
      uStack_154 = CONCAT44(uVar8,auStack_8c);
      puStack_10._0_1_ = 0x5c;
      uStack_15c = CONCAT44(auStack_54,0x59fb62);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x5d;
      uStack_154 = 0x440059fb7b;
      puStack_104 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x5e;
      if (puStack_104 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_104);
        uStack_15c = CONCAT44(0x59fb9b,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x59fbcb,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      uStack_154 = CONCAT44(0x59fbd4,(undefined4)uStack_154);
      FUN_00408ad0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59fbe7,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x59fbf8,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x5f;
      uStack_154 = CONCAT44(6,in_ECX[4] + 0x20);
      uStack_15c = CONCAT44(&uStack_fc,0x59fc13);
      uVar8 = FUN_0059cf70();
      uStack_154 = CONCAT44(uVar8,auStack_70);
      puStack_10._0_1_ = 0x60;
      uStack_15c = CONCAT44(auStack_54,0x59fc2f);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x61;
      uStack_154 = 0x440059fc48;
      puStack_104 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x62;
      if (puStack_104 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_104);
        uStack_15c = CONCAT44(0x59fc68,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x59fc98,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      uStack_154 = CONCAT44(0x59fca1,(undefined4)uStack_154);
      FUN_00408ad0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59fcb4,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x59fcbd,(undefined4)uStack_154);
      iVar7 = (**(code **)(*in_ECX + 0x24))();
      if (iVar7 == 1) {
        uStack_154 = CONCAT44(0x59fce2,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 99;
        uStack_154 = CONCAT44(0x59fcef,(undefined4)uStack_154);
        FUN_006a4f40();
        uStack_154 = CONCAT44(0x59fcf8,(undefined4)uStack_154);
        iVar7 = FUN_006a55b0();
        puStack_10._0_1_ = 0;
        uStack_154 = CONCAT44(0x59fd11,(undefined4)uStack_154);
        FUN_00408ad0();
        *(undefined4 *)(iVar7 + 0x30) = 4;
        uStack_154 = CONCAT44(0x59fd29,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 100;
        uStack_154 = 0x4b7600;
        puStack_104 = auStack_1d4;
        puStack_124 = (undefined1 *)&uStack_1dc;
        uStack_1dc = 0;
        iStack_1d8 = 0;
        FUN_006a7ed0(auStack_1d4,iVar7,&local_138,in_ECX[6],auStack_70,0,
                     **(undefined4 **)(in_ECX[4] + 0x34),(*(undefined4 **)(in_ECX[4] + 0x34))[1],
                     *(undefined4 *)(DAT_012588e8 + 0xb5c),*(undefined4 *)(DAT_012588e8 + 0xb60));
        puStack_10._0_1_ = 0x65;
        iStack_1d8 = in_ECX[6];
        uStack_1dc = 0x59fdad;
        uStack_1dc = FUN_006a4f40();
        puStack_10._0_1_ = 100;
        FUN_005ab970();
        goto LAB_005a015a;
      }
      uStack_154 = CONCAT44(0x59fdd8,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x66;
      uStack_154 = CONCAT44(0x59fdef,(undefined4)uStack_154);
      uVar8 = (**(code **)(*(int *)**(undefined4 **)(in_ECX[5] + 0x20) + 0x20))();
      uStack_154 = CONCAT44(uVar8,auStack_8c);
      uStack_15c = CONCAT44(auStack_54,0x59fe00);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x67;
      uStack_154 = 0x440059fe19;
      puStack_104 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x68;
      if (puStack_104 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_104);
        uStack_15c = CONCAT44(0x59fe39,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x59fe69,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59fe7c,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x59fe8d,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x69;
      uStack_154 = CONCAT44(0x59fea4,(undefined4)uStack_154);
      uVar8 = (**(code **)(*(int *)**(undefined4 **)(in_ECX[4] + 0x20) + 0x20))();
      uStack_154 = CONCAT44(uVar8,auStack_70);
      uStack_15c = CONCAT44(auStack_54,0x59feb5);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x6a;
      uStack_154 = 0x440059fece;
      puStack_104 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x6b;
      if (puStack_104 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_104);
        uStack_15c = CONCAT44(0x59feee,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x59ff1e,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59ff31,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x59ff3f,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x6c;
      uStack_154 = CONCAT44(0x59ff58,(undefined4)uStack_154);
      FUN_009885d0();
      uStack_154 = CONCAT44(&local_120,&uStack_c4);
      puStack_10._0_1_ = 0x6d;
      uStack_15c = CONCAT44(0x59ff72,(undefined4)uStack_15c);
      FUN_009a8ee0();
      puStack_10._0_1_ = 0x6e;
      uStack_154 = CONCAT44(0x59ff83,(undefined4)uStack_154);
      iVar7 = FUN_00475500();
      uStack_15c = *(undefined8 *)(iVar7 + 0x6c);
      uStack_154 = *(undefined8 *)(iVar7 + 0x74);
      uStack_160 = 0x59ffa8;
      uVar8 = FUN_009a9880();
      uStack_154 = CONCAT44(uVar8,auStack_8c);
      puStack_10._0_1_ = 0x6f;
      uStack_15c = CONCAT44(auStack_54,0x59ffc6);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x70;
      uStack_154 = 0x440059ffdf;
      puStack_104 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x71;
      if (puStack_104 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_104);
        uStack_15c = CONCAT44(0x59ffff,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x5a002f,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      uStack_154 = CONCAT44(0x5a0038,(undefined4)uStack_154);
      FUN_00408ad0();
      puStack_10._0_1_ = 0x6d;
      uStack_154 = CONCAT44(&uStack_c4,0x5a004d);
      FUN_009a9740();
      uStack_154 = CONCAT44(0x5a0059,(undefined4)uStack_154);
      FUN_00408ad0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x5a0069,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x5a007a,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x72;
      uStack_154 = CONCAT44(0x5a0087,(undefined4)uStack_154);
      FUN_006a4f40();
      uStack_154 = CONCAT44(0x5a0090,(undefined4)uStack_154);
      iVar7 = FUN_006a55b0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x5a00a9,(undefined4)uStack_154);
      FUN_00408ad0();
      *(undefined4 *)(iVar7 + 0x30) = 4;
      uStack_154 = CONCAT44(0x5a00c1,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x73;
      uStack_154 = 0x4b7600;
      puStack_104 = auStack_1d4;
      puStack_124 = (undefined1 *)&uStack_1dc;
      uStack_1dc = 0;
      iStack_1d8 = 0;
      FUN_006a7ed0(auStack_1d4,iVar7,&local_138,in_ECX[6],&uStack_a8,0,
                   **(undefined4 **)(in_ECX[4] + 0x34),(*(undefined4 **)(in_ECX[4] + 0x34))[1],
                   *(undefined4 *)(DAT_012588e8 + 0xb5c),*(undefined4 *)(DAT_012588e8 + 0xb60));
      puStack_10._0_1_ = 0x74;
      iStack_1d8 = in_ECX[6];
      uStack_1dc = 0x5a0145;
      uStack_1dc = FUN_006a4f40();
      puStack_10._0_1_ = 0x73;
    }
    else {
      do {
        if (*(int *)(iVar11 + 4) == *(int *)(DAT_012588e8 + 0xb60)) break;
        iVar11 = iVar11 + 8;
      } while (iVar11 != iVar7);
      if (iVar11 == iVar7) goto LAB_0059f96b;
      uStack_154 = CONCAT44(0x59eee2,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x23;
      uStack_154 = CONCAT44(in_ECX[5] + 0x20,auStack_8c);
      uStack_15c = CONCAT44(0x59eefe,(undefined4)uStack_15c);
      uVar8 = FUN_0059d640();
      uStack_154 = CONCAT44(uVar8,&local_120);
      puStack_10._0_1_ = 0x24;
      uStack_15c = CONCAT44(&uStack_fc,0x59ef17);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x25;
      uStack_154 = 0x440059ef30;
      puStack_124 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x26;
      if (puStack_124 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_124);
        uStack_15c = CONCAT44(0x59ef50,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x59ef7d,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      uStack_154 = CONCAT44(0x59ef89,(undefined4)uStack_154);
      FUN_00408ad0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59ef99,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x59efa7,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x27;
      uStack_154 = CONCAT44(in_ECX[4] + 0x20,auStack_8c);
      uStack_15c = CONCAT44(0x59efc3,(undefined4)uStack_15c);
      uVar8 = FUN_0059d640();
      uStack_154 = CONCAT44(uVar8,&local_120);
      puStack_10._0_1_ = 0x28;
      uStack_15c = CONCAT44(&uStack_fc,0x59efdc);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x29;
      uStack_154 = 0x440059eff5;
      puStack_124 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x2a;
      if (puStack_124 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_124);
        uStack_15c = CONCAT44(0x59f015,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x59f042,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      uStack_154 = CONCAT44(0x59f04e,(undefined4)uStack_154);
      FUN_00408ad0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59f05e,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x59f06c,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x2b;
      uStack_154 = CONCAT44(6,in_ECX[5] + 0x20);
      uStack_15c = CONCAT44(auStack_8c,0x59f08a);
      uVar8 = FUN_0059cf70();
      uStack_154 = CONCAT44(uVar8,&local_120);
      puStack_10._0_1_ = 0x2c;
      uStack_15c = CONCAT44(&uStack_fc,0x59f0a3);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x2d;
      uStack_154 = 0x440059f0bc;
      puStack_124 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x2e;
      if (puStack_124 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_124);
        uStack_15c = CONCAT44(0x59f0dc,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x59f109,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      uStack_154 = CONCAT44(0x59f115,(undefined4)uStack_154);
      FUN_00408ad0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59f125,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x59f133,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x2f;
      uStack_154 = CONCAT44(6,in_ECX[4] + 0x20);
      uStack_15c = CONCAT44(auStack_8c,0x59f151);
      uVar8 = FUN_0059cf70();
      uStack_154 = CONCAT44(uVar8,&local_120);
      puStack_10._0_1_ = 0x30;
      uStack_15c = CONCAT44(&uStack_fc,0x59f16a);
      FUN_00424aa0();
      puVar6 = local_134;
      puStack_10._0_1_ = 0x31;
      uStack_154 = 0x440059f183;
      puStack_124 = (undefined1 *)FUN_00aae9af();
      puStack_10._0_1_ = 0x32;
      if (puStack_124 == (undefined1 *)0x0) {
        local_134 = (undefined1 *)0x0;
      }
      else {
        uStack_154 = CONCAT44(puVar6,puStack_124);
        uStack_15c = CONCAT44(0x59f1a3,(undefined4)uStack_15c);
        local_134 = (undefined1 *)FUN_0042b900();
      }
      puVar9 = local_134;
      if (local_130 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_134;
        puVar9 = local_138;
      }
      local_138 = puVar9;
      uStack_154 = CONCAT44(0x59f1d0,(undefined4)uStack_154);
      local_130 = local_130 + 1;
      FUN_00a39a80();
      uStack_154 = CONCAT44(0x59f1dc,(undefined4)uStack_154);
      FUN_00408ad0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59f1ec,(undefined4)uStack_154);
      FUN_00408ad0();
      if (*(int *)(in_ECX[4] + 0x28) < 2) {
        uStack_154 = CONCAT44(0x59f2bc,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x36;
        uStack_154 = CONCAT44(0x59f2d2,(undefined4)uStack_154);
        FUN_009885d0();
        uStack_154 = CONCAT44(&uStack_a8,&local_120);
        puStack_10._0_1_ = 0x37;
        uStack_15c = CONCAT44(&uStack_fc,0x59f2ef);
        FUN_00424aa0();
        puVar6 = local_134;
        puStack_10._0_1_ = 0x38;
        uStack_154 = 0x440059f308;
        puStack_124 = (undefined1 *)FUN_00aae9af();
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x39);
        if (puStack_124 == (undefined1 *)0x0) {
          local_134 = (undefined1 *)0x0;
        }
        else {
          uStack_154 = CONCAT44(puVar6,puStack_124);
          uStack_15c = CONCAT44(0x59f328,(undefined4)uStack_15c);
          local_134 = (undefined1 *)FUN_0042b900();
        }
        puVar9 = local_134;
        if (local_130 != (undefined1 *)0x0) {
          *(undefined1 **)(puVar6 + 0x3c) = local_134;
          puVar9 = local_138;
        }
        local_138 = puVar9;
        uStack_154 = CONCAT44(0x59f355,(undefined4)uStack_154);
        local_130 = local_130 + 1;
        FUN_00a39a80();
        uStack_154 = CONCAT44(0x59f35e,(undefined4)uStack_154);
        FUN_00408ad0();
      }
      else {
        uStack_154 = CONCAT44(0x59f207,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x33;
        uStack_154 = CONCAT44(0x59f21e,(undefined4)uStack_154);
        uVar8 = (**(code **)(*(int *)**(undefined4 **)(in_ECX[4] + 0x20) + 0x20))();
        uStack_154 = CONCAT44(uVar8,&local_120);
        uStack_15c = CONCAT44(&uStack_fc,0x59f22c);
        FUN_00424aa0();
        puVar6 = local_134;
        puStack_10._0_1_ = 0x34;
        uStack_154 = 0x440059f245;
        puStack_124 = (undefined1 *)FUN_00aae9af();
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x35);
        if (puStack_124 == (undefined1 *)0x0) {
          local_134 = (undefined1 *)0x0;
        }
        else {
          uStack_154 = CONCAT44(puVar6,puStack_124);
          uStack_15c = CONCAT44(0x59f265,(undefined4)uStack_15c);
          local_134 = (undefined1 *)FUN_0042b900();
        }
        if (local_130 == (undefined1 *)0x0) {
          uStack_154 = CONCAT44(0x59f2a2,(undefined4)uStack_154);
          local_138 = local_134;
          local_130 = local_130 + 1;
          FUN_00a39a80();
        }
        else {
          *(undefined1 **)(puVar6 + 0x3c) = local_134;
          uStack_154 = CONCAT44(0x59f28c,(undefined4)uStack_154);
          local_130 = local_130 + 1;
          FUN_00a39a80();
        }
      }
      puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
      uStack_154 = CONCAT44(0x59f371,(undefined4)uStack_154);
      FUN_00408ad0();
      if (*(int *)(in_ECX[5] + 0x28) < 2) {
        uStack_154 = CONCAT44(0x59f441,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x3d;
        uStack_154 = CONCAT44(0x59f457,(undefined4)uStack_154);
        FUN_009885d0();
        uStack_154 = CONCAT44(&uStack_a8,&local_120);
        puStack_10._0_1_ = 0x3e;
        uStack_15c = CONCAT44(&uStack_fc,0x59f474);
        FUN_00424aa0();
        puVar6 = local_134;
        puStack_10._0_1_ = 0x3f;
        uStack_154 = 0x440059f48d;
        puStack_124 = (undefined1 *)FUN_00aae9af();
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x40);
        if (puStack_124 == (undefined1 *)0x0) {
          local_134 = (undefined1 *)0x0;
        }
        else {
          uStack_154 = CONCAT44(puVar6,puStack_124);
          uStack_15c = CONCAT44(0x59f4ad,(undefined4)uStack_15c);
          local_134 = (undefined1 *)FUN_0042b900();
        }
        puVar9 = local_134;
        if (local_130 != (undefined1 *)0x0) {
          *(undefined1 **)(puVar6 + 0x3c) = local_134;
          puVar9 = local_138;
        }
        local_138 = puVar9;
        uStack_154 = CONCAT44(0x59f4da,(undefined4)uStack_154);
        local_130 = local_130 + 1;
        FUN_00a39a80();
        uStack_154 = CONCAT44(0x59f4e3,(undefined4)uStack_154);
        FUN_00408ad0();
      }
      else {
        uStack_154 = CONCAT44(0x59f38c,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x3a;
        uStack_154 = CONCAT44(0x59f3a3,(undefined4)uStack_154);
        uVar8 = (**(code **)(*(int *)**(undefined4 **)(in_ECX[5] + 0x20) + 0x20))();
        uStack_154 = CONCAT44(uVar8,&local_120);
        uStack_15c = CONCAT44(&uStack_fc,0x59f3b1);
        FUN_00424aa0();
        puVar6 = local_134;
        puStack_10._0_1_ = 0x3b;
        uStack_154 = 0x440059f3ca;
        puStack_124 = (undefined1 *)FUN_00aae9af();
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x3c);
        if (puStack_124 == (undefined1 *)0x0) {
          local_134 = (undefined1 *)0x0;
        }
        else {
          uStack_154 = CONCAT44(puVar6,puStack_124);
          uStack_15c = CONCAT44(0x59f3ea,(undefined4)uStack_15c);
          local_134 = (undefined1 *)FUN_0042b900();
        }
        if (local_130 == (undefined1 *)0x0) {
          uStack_154 = CONCAT44(0x59f427,(undefined4)uStack_154);
          local_138 = local_134;
          local_130 = local_130 + 1;
          FUN_00a39a80();
        }
        else {
          *(undefined1 **)(puVar6 + 0x3c) = local_134;
          uStack_154 = CONCAT44(0x59f411,(undefined4)uStack_154);
          local_130 = local_130 + 1;
          FUN_00a39a80();
        }
      }
      puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
      uStack_154 = CONCAT44(0x59f4f6,(undefined4)uStack_154);
      FUN_00408ad0();
      uStack_154 = CONCAT44(0x59f4ff,(undefined4)uStack_154);
      iVar7 = (**(code **)(*in_ECX + 0x24))();
      if (iVar7 != 1) {
        uStack_154 = CONCAT44(0x59f5fe,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x44;
        uStack_154 = CONCAT44(0x59f615,(undefined4)uStack_154);
        uVar8 = (**(code **)(*(int *)**(undefined4 **)(in_ECX[5] + 0x20) + 0x20))();
        uStack_154 = CONCAT44(uVar8,&local_120);
        uStack_15c = CONCAT44(&uStack_fc,0x59f623);
        FUN_00424aa0();
        puVar6 = local_134;
        puStack_10._0_1_ = 0x45;
        uStack_154 = 0x440059f63c;
        puStack_104 = (undefined1 *)FUN_00aae9af();
        puStack_10._0_1_ = 0x46;
        if (puStack_104 == (undefined1 *)0x0) {
          local_134 = (undefined1 *)0x0;
        }
        else {
          uStack_154 = CONCAT44(puVar6,puStack_104);
          uStack_15c = CONCAT44(0x59f65c,(undefined4)uStack_15c);
          local_134 = (undefined1 *)FUN_0042b900();
        }
        puVar9 = local_134;
        if (local_130 != (undefined1 *)0x0) {
          *(undefined1 **)(puVar6 + 0x3c) = local_134;
          puVar9 = local_138;
        }
        local_138 = puVar9;
        uStack_154 = CONCAT44(0x59f689,(undefined4)uStack_154);
        local_130 = local_130 + 1;
        FUN_00a39a80();
        puStack_10._0_1_ = 0;
        uStack_154 = CONCAT44(0x59f699,(undefined4)uStack_154);
        FUN_00408ad0();
        uStack_154 = CONCAT44(0x59f6aa,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x47;
        uStack_154 = CONCAT44(0x59f6c1,(undefined4)uStack_154);
        uVar8 = (**(code **)(*(int *)**(undefined4 **)(in_ECX[4] + 0x20) + 0x20))();
        uStack_154 = CONCAT44(uVar8,&uStack_a8);
        uStack_15c = CONCAT44(&uStack_fc,0x59f6cf);
        FUN_00424aa0();
        puVar6 = local_134;
        puStack_10._0_1_ = 0x48;
        uStack_154 = 0x440059f6e8;
        puStack_104 = (undefined1 *)FUN_00aae9af();
        puStack_10._0_1_ = 0x49;
        if (puStack_104 == (undefined1 *)0x0) {
          local_134 = (undefined1 *)0x0;
        }
        else {
          uStack_154 = CONCAT44(puVar6,puStack_104);
          uStack_15c = CONCAT44(0x59f708,(undefined4)uStack_15c);
          local_134 = (undefined1 *)FUN_0042b900();
        }
        puVar9 = local_134;
        if (local_130 != (undefined1 *)0x0) {
          *(undefined1 **)(puVar6 + 0x3c) = local_134;
          puVar9 = local_138;
        }
        local_138 = puVar9;
        uStack_154 = CONCAT44(0x59f735,(undefined4)uStack_154);
        local_130 = local_130 + 1;
        FUN_00a39a80();
        puStack_10._0_1_ = 0;
        uStack_154 = CONCAT44(0x59f748,(undefined4)uStack_154);
        FUN_00408ad0();
        uStack_154 = CONCAT44(0x59f759,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x4a;
        uStack_154 = CONCAT44(0x59f76f,(undefined4)uStack_154);
        FUN_009885d0();
        uStack_154 = CONCAT44(auStack_70,&uStack_c4);
        puStack_10._0_1_ = 0x4b;
        uStack_15c = CONCAT44(0x59f78c,(undefined4)uStack_15c);
        FUN_009a8ee0();
        puStack_10._0_1_ = 0x4c;
        uStack_154 = CONCAT44(0x59f79d,(undefined4)uStack_154);
        iVar7 = FUN_00475500();
        uStack_15c = *(undefined8 *)(iVar7 + 0x6c);
        uStack_154 = *(undefined8 *)(iVar7 + 0x74);
        uStack_160 = 0x59f7c2;
        uVar8 = FUN_009a9880();
        uStack_154 = CONCAT44(uVar8,&local_120);
        puStack_10._0_1_ = 0x4d;
        uStack_15c = CONCAT44(auStack_54,0x59f7dd);
        FUN_00424aa0();
        puVar6 = local_134;
        puStack_10._0_1_ = 0x4e;
        uStack_154 = 0x440059f7f6;
        puStack_104 = (undefined1 *)FUN_00aae9af();
        puStack_10._0_1_ = 0x4f;
        if (puStack_104 == (undefined1 *)0x0) {
          local_134 = (undefined1 *)0x0;
        }
        else {
          uStack_154 = CONCAT44(puVar6,puStack_104);
          uStack_15c = CONCAT44(0x59f816,(undefined4)uStack_15c);
          local_134 = (undefined1 *)FUN_0042b900();
        }
        puVar9 = local_134;
        if (local_130 != (undefined1 *)0x0) {
          *(undefined1 **)(puVar6 + 0x3c) = local_134;
          puVar9 = local_138;
        }
        local_138 = puVar9;
        uStack_154 = CONCAT44(0x59f846,(undefined4)uStack_154);
        local_130 = local_130 + 1;
        FUN_00a39a80();
        uStack_154 = CONCAT44(0x59f84f,(undefined4)uStack_154);
        FUN_00408ad0();
        puStack_10._0_1_ = 0x4b;
        uStack_154 = CONCAT44(&uStack_c4,0x59f864);
        FUN_009a9740();
        uStack_154 = CONCAT44(0x59f86d,(undefined4)uStack_154);
        FUN_00408ad0();
        puStack_10._0_1_ = 0;
        uStack_154 = CONCAT44(0x59f880,(undefined4)uStack_154);
        FUN_00408ad0();
        uStack_154 = CONCAT44(0x59f891,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x50;
        uStack_154 = CONCAT44(0x59f89e,(undefined4)uStack_154);
        FUN_006a4f40();
        uStack_154 = CONCAT44(0x59f8a7,(undefined4)uStack_154);
        iVar7 = FUN_006a55b0();
        puStack_10._0_1_ = 0;
        uStack_154 = CONCAT44(0x59f8c0,(undefined4)uStack_154);
        FUN_00408ad0();
        *(undefined4 *)(iVar7 + 0x30) = 4;
        uStack_154 = CONCAT44(0x59f8d8,(undefined4)uStack_154);
        FUN_009885d0();
        puStack_10._0_1_ = 0x51;
        uStack_154 = 0x4b7600;
        puStack_104 = auStack_1d4;
        puStack_124 = (undefined1 *)&uStack_1dc;
        uStack_1dc = 0;
        iStack_1d8 = 0;
        FUN_006a7ed0(auStack_1d4,iVar7,&local_138,in_ECX[6],auStack_8c,0,
                     *(undefined4 *)(DAT_012588e8 + 0xb5c),*(undefined4 *)(DAT_012588e8 + 0xb60),
                     **(undefined4 **)(in_ECX[5] + 0x34),(*(undefined4 **)(in_ECX[5] + 0x34))[1]);
        puStack_10._0_1_ = 0x52;
        iStack_1d8 = in_ECX[6];
        uStack_1dc = 0x59f956;
        uStack_1dc = FUN_006a4f40();
        puStack_10._0_1_ = 0x51;
        FUN_005ab970();
        goto LAB_005a015a;
      }
      uStack_154 = CONCAT44(0x59f521,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x41;
      uStack_154 = CONCAT44(0x59f52e,(undefined4)uStack_154);
      FUN_006a4f40();
      uStack_154 = CONCAT44(0x59f537,(undefined4)uStack_154);
      iVar7 = FUN_006a55b0();
      puStack_10._0_1_ = 0;
      uStack_154 = CONCAT44(0x59f54d,(undefined4)uStack_154);
      FUN_00408ad0();
      *(undefined4 *)(iVar7 + 0x30) = 4;
      uStack_154 = CONCAT44(0x59f565,(undefined4)uStack_154);
      FUN_009885d0();
      puStack_10._0_1_ = 0x42;
      uStack_154 = 0x4b7600;
      puStack_124 = auStack_1d4;
      puStack_104 = (undefined1 *)&uStack_1dc;
      uStack_1dc = 0;
      iStack_1d8 = 0;
      FUN_006a7ed0(auStack_1d4,iVar7,&local_138,in_ECX[6],&uStack_a8,0,
                   *(undefined4 *)(DAT_012588e8 + 0xb5c),*(undefined4 *)(DAT_012588e8 + 0xb60),
                   **(undefined4 **)(in_ECX[5] + 0x34),(*(undefined4 **)(in_ECX[5] + 0x34))[1]);
      puStack_10._0_1_ = 0x43;
      iStack_1d8 = in_ECX[6];
      uStack_1dc = 0x59f5e3;
      uStack_1dc = FUN_006a4f40();
      puStack_10._0_1_ = 0x42;
    }
    FUN_005ab970();
  }
LAB_005a015a:
  uStack_154 = CONCAT44(0x5a015f,(undefined4)uStack_154);
  FUN_00408ad0();
  uVar2 = puStack_10._0_1_;
LAB_005a015f:
  puStack_10._0_1_ = uVar2;
  uStack_154 = CONCAT44(&local_138,0x5a0169);
  FUN_0042b9f0();
  ExceptionList = pvStack_18;
  return;
}


