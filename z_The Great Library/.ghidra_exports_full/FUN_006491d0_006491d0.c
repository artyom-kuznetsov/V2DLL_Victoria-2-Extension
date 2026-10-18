// FUN_006491d0 @ 006491d0 body=[[006491d0, 006492e9] [006492ed, 0064932b] [0064932f, 0064934e] [00649352, 00649385] [00649389, 006493e4] [006493e8, 00649482] [00649486, 006494b6] [006494c0, 0064967c] [00649680, 006496b2] [006496b6, 006497dd] [006497e1, 00649802] [00649806, 0064982c] [00649830, 0064992d] [00649931, 0064995d] [00649961, 00649af1] [00649af5, 00649b3f] [00649b43, 00649b64] [00649b6a, 00649b8d] [00649b91, 00649bb7] [00649bbb, 00649be3] [00649be7, 00649fb3] [00649fb7, 00649ff6] [00649ffa, 0064a019] [0064a01d, 0064a048] [0064a04c, 0064a078] [0064a082, 0064a0d7] [0064a0f2, 0064a451]]


void FUN_006491d0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int in_ECX;
  uint uVar13;
  uint *puVar14;
  undefined4 *puStack_170;
  undefined4 *puStack_16c;
  undefined1 auStack_168 [4];
  int iStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined1 local_158 [4];
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  uint local_148;
  undefined4 local_144;
  undefined1 auStack_140 [4];
  undefined4 *local_13c;
  undefined4 *puStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined4 local_128;
  uint uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint local_10c;
  undefined4 *puStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint local_fc;
  undefined4 local_f8;
  undefined1 auStack_f4 [8];
  undefined1 auStack_ec [4];
  uint local_e8;
  undefined1 local_e4 [4];
  int iStack_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0 [4];
  undefined4 uStack_c0;
  uint uStack_bc;
  uint auStack_b8 [4];
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [4];
  uint uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8c5a9;
  local_14 = ExceptionList;
  local_e8 = 0;
  if (param_1 == 5) {
    local_144 = 0xf;
    local_148 = 0;
    local_158[0] = 0;
    ExceptionList = &local_14;
    FUN_00409350("PLAYER_LOST_TITLE",0x11);
    local_c = 0;
    local_f8 = 0xf;
    local_fc = 0;
    local_10c = local_10c & 0xffffff00;
    FUN_00409350("Title",5);
    local_c._0_1_ = 1;
    FUN_009a8ee0(&local_13c,local_158);
    local_c._0_1_ = 2;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                         (int)*(undefined8 *)(iVar3 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    local_c = CONCAT31(local_c._1_3_,3);
    (**(code **)(**(int **)(in_ECX + 8) + 0x3c))(&local_10c);
    FUN_00408ed0(uVar4,0,0xffffffff);
    FUN_00a5ecc0(uVar4,0);
    if (0xf < uStack_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_12c);
    }
    uStack_118 = 0xf;
    uStack_11c = 0;
    uStack_12c = uStack_12c & 0xffffff00;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
    FUN_009adb70();
    if (local_13c != (undefined4 *)0x0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_13c);
    }
    local_13c = (undefined4 *)0x0;
    puStack_138 = (undefined4 *)0x0;
    uStack_134 = 0;
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_110);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    local_fc = 0xf;
    uStack_100 = 0;
    uVar13 = uStack_110 >> 8;
    uStack_110 = uVar13 << 8;
    if (0xf < local_148) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_15c);
    }
    local_fc = 0xf;
    uStack_100 = 0;
    uStack_110 = uVar13 << 8;
    FUN_00409350("PLAYER_LOST_DESC",0x10);
    puStack_10 = (undefined1 *)0x5;
    FUN_009a8ee0(&local_e8,&uStack_110);
    puStack_10._0_1_ = 7;
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_110);
    }
    local_fc = 0xf;
    uStack_100 = 0;
    uStack_110 = uStack_110 & 0xffffff00;
    uVar4 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    FUN_009b1040(uVar4);
    uStack_6c = 0xf;
    uStack_70 = 0;
    auStack_80[0] = 0;
    iVar3 = *(int *)(in_ECX + 0x90);
    while (iStack_164 = iStack_64, iVar3 != 0) {
      puStack_10._0_1_ = 9;
      uVar4 = FUN_00988f20(iVar3);
      puStack_10._0_1_ = 10;
      FUN_00408ed0(uVar4,0,0xffffffff);
      puStack_10._0_1_ = 9;
      if (0xf < uStack_118) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_12c);
      }
      iVar3 = *(int *)(iVar3 + 0x3c);
      uStack_118 = 0xf;
      uStack_11c = 0;
      uStack_12c = uStack_12c & 0xffffff00;
    }
    for (; iStack_164 != 0; iStack_164 = *(int *)(iStack_164 + 8)) {
      puStack_10._0_1_ = 9;
      iVar3 = FUN_0068b500(DAT_012588e8);
      uStack_a4 = 0xf;
      uStack_a8 = 0;
      auStack_b8[0] = auStack_b8[0] & 0xffffff00;
      FUN_00408ed0(iVar3,0,0xffffffff);
      uStack_9c = *(undefined4 *)(iVar3 + 0x1c);
      uStack_98 = *(undefined4 *)(iVar3 + 0x20);
      uStack_94 = *(undefined4 *)(iVar3 + 0x24);
      uStack_90 = *(undefined1 *)(iVar3 + 0x28);
      uStack_8f = *(undefined1 *)(iVar3 + 0x29);
      uStack_8c = *(undefined4 *)(iVar3 + 0x2c);
      uStack_88 = *(undefined1 *)(iVar3 + 0x30);
      uStack_84 = *(undefined4 *)(iVar3 + 0x34);
      puStack_10._0_1_ = 0xb;
      iVar3 = *(int *)(in_ECX + 0x94);
      puVar5 = (undefined1 *)FUN_00aae9af(0x44);
      puStack_10._0_1_ = 0xc;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(auStack_b8,0,0xffffffff);
        *(undefined4 *)(puVar5 + 0x1c) = uStack_9c;
        *(undefined4 *)(puVar5 + 0x20) = uStack_98;
        *(undefined4 *)(puVar5 + 0x24) = uStack_94;
        puVar5[0x28] = uStack_90;
        puVar5[0x29] = uStack_8f;
        *(undefined4 *)(puVar5 + 0x2c) = uStack_8c;
        puVar5[0x30] = uStack_88;
        *(undefined4 *)(puVar5 + 0x34) = uStack_84;
        *(int *)(puVar5 + 0x38) = iVar3;
        *(undefined4 *)(puVar5 + 0x3c) = 0;
        puVar5[0x40] = 0;
      }
      puStack_10._0_1_ = 0xb;
      iVar11 = *(int *)(in_ECX + 0x98);
      *(undefined1 **)(in_ECX + 0x94) = puVar5;
      *(int *)(in_ECX + 0x98) = iVar11 + 1;
      if (iVar11 == 0) {
        *(undefined1 **)(in_ECX + 0x90) = puVar5;
      }
      else {
        *(undefined1 **)(iVar3 + 0x3c) = puVar5;
      }
      uVar4 = FUN_00988f20(auStack_b8);
      puStack_10._0_1_ = 0xd;
      FUN_00408ed0(uVar4,0,0xffffffff);
      if (0xf < local_148) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_15c);
      }
      puStack_10._0_1_ = 9;
      local_148 = 0xf;
      puStack_14c = (undefined1 *)0x0;
      uStack_15c = uStack_15c & 0xffffff00;
      if (0xf < uStack_a4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_b8[0]);
      }
    }
    puStack_10._0_1_ = 9;
    local_148 = 0xf;
    puStack_14c = (undefined1 *)0x0;
    uStack_15c = uStack_15c & 0xffffff00;
    FUN_00409350("playername",10);
    puStack_10._0_1_ = 0xe;
    puVar6 = (undefined4 *)FUN_009a8ee0(auStack_140,auStack_80);
    puStack_10._0_1_ = 0xf;
    puVar7 = (undefined4 *)FUN_00aae9af(0x38);
    puStack_10._0_1_ = 0x10;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = &PTR_FUN_00e38ecc;
      puVar7[1] = &local_e8;
      puVar7[7] = 0xf;
      puVar7[6] = 0;
      *(undefined1 *)(puVar7 + 2) = 0;
      FUN_00408ed0(&uStack_15c,0,0xffffffff);
      *puVar7 = &PTR_FUN_00e38f08;
      puStack_16c = puVar7 + 9;
      *puStack_16c = *puVar6;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puStack_10._0_1_ = 0x12;
      FUN_009a97b0();
    }
    puStack_10._0_1_ = 0xf;
    puStack_16c = puVar7;
    FUN_009e6810(&uStack_15c,&puStack_16c);
    puStack_10._0_1_ = 0x13;
    FUN_009adb70();
    puVar6 = local_13c;
    if (local_13c != (undefined4 *)0x0) {
      while( true ) {
        if (puVar6 == puStack_138) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_13c);
        }
        if (0xf < (uint)puVar6[5]) break;
        puVar6[5] = 0xf;
        puVar6[4] = 0;
        *(undefined1 *)puVar6 = 0;
        puVar6 = puVar6 + 8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*puVar6);
    }
    puStack_10._0_1_ = 9;
    local_13c = (undefined4 *)0x0;
    puStack_138 = (undefined4 *)0x0;
    uStack_134 = 0;
    if (0xf < local_148) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_15c);
    }
    local_148 = 0xf;
    puStack_14c = (undefined1 *)0x0;
    uStack_15c = uStack_15c & 0xffffff00;
    FUN_00409350("Description",0xb);
    puStack_10._0_1_ = 0x14;
    puVar6 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar3 = FUN_00aae9af(0x180);
      puStack_10._0_1_ = 0x15;
      if (iVar3 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)FUN_00475150(iVar3);
      }
      puStack_10._0_1_ = 0x16;
      if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)(1);
      }
    }
    DAT_0125b5e0 = puVar6;
    puStack_10._0_1_ = 0x14;
    uVar4 = FUN_009a9880((int)*(undefined8 *)(DAT_0125b5e0 + 0x1b),
                         (int)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1b) >> 0x20),
                         (int)*(undefined8 *)(DAT_0125b5e0 + 0x1d),
                         (int)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1d) >> 0x20));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x17);
    (**(code **)(**(int **)(in_ECX + 8) + 0x3c))(&uStack_15c);
    FUN_00408ed0(uVar4,0,0xffffffff);
    FUN_00a5ecc0(uVar4,0);
    if (0xf < uStack_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_130);
    }
    local_14._0_1_ = 9;
    uStack_11c = 0xf;
    uStack_120 = 0;
    uVar13 = uStack_130 >> 8;
    uStack_130 = uVar13 << 8;
    if ((undefined1 *)0xf < puStack_14c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_160);
    }
    uStack_11c = 0xf;
    uStack_120 = 0;
    uStack_130 = uVar13 << 8;
    FUN_00409350("quit_button",0xb);
    local_14._0_1_ = 0x18;
    puStack_14c = (undefined1 *)0xf;
    puStack_150 = (undefined1 *)0x0;
    uStack_160 = uStack_160 & 0xffffff00;
    FUN_00409350("CONT_AI",7);
    local_14._0_1_ = 0x19;
    uStack_100 = 0xf;
    uStack_104 = 0;
    uStack_114 = uStack_114 & 0xffffff00;
    FUN_00409350("quit_button",0xb);
    local_14 = (void *)CONCAT31(local_14._1_3_,0x1a);
    piVar8 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(&uStack_130);
    piVar9 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(&uStack_118);
    FUN_009a8ee0(&puStack_14c,auStack_168);
    uStack_1c = 0x1b;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar3 = FUN_00aae9af(0x180);
      uStack_1c = 0x1c;
      if (iVar3 == 0) {
        puStack_170 = (undefined4 *)0x0;
      }
      else {
        puStack_170 = (undefined4 *)FUN_00475150(iVar3);
      }
      uStack_1c = 0x1d;
      uStack_100 = 0;
      if ((puStack_170 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)(1);
      }
      DAT_0125b5e0 = puStack_170;
    }
    uStack_1c = 0x1b;
    uVar4 = FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),
                         (int)*(undefined8 *)(DAT_0125b5e0 + 0x1d),
                         (int)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1d) >> 0x20));
    uStack_1c = 0x1e;
    iVar3 = *piVar9;
    uVar10 = (**(code **)(*piVar8 + 0xd0))();
    (**(code **)(iVar3 + 0xcc))(uVar4,uVar10);
    if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_d4 = 0xf;
    uStack_d8 = 0;
    local_e8 = local_e8 & 0xffffff00;
    uStack_24._0_1_ = 0x1f;
    FUN_009adb70();
    puVar5 = puStack_150;
    if (puStack_150 != (undefined1 *)0x0) {
      while( true ) {
        if (puVar5 == puStack_14c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < *(uint *)(puVar5 + 0x14)) break;
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 0x20;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_150 = (undefined1 *)0x0;
    puStack_14c = (undefined1 *)0x0;
    local_148 = 0;
    if (0xf < uStack_110) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_110 = 0xf;
    uStack_114 = 0;
    uStack_124 = uStack_124 & 0xffffff00;
    if (0xf < uStack_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_24._0_1_ = 9;
    uVar1 = (undefined1)uStack_24;
    uStack_24._0_1_ = 9;
    uStack_15c = 0xf;
    uStack_160 = 0;
    if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_24._0_1_ = uVar1;
    for (iVar3 = *(int *)(in_ECX + 0x90); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x3c)) {
      puStack_108 = (undefined4 *)FUN_00aae9af();
      uStack_24._0_1_ = 0x20;
      if (puStack_108 != (undefined4 *)0x0) {
        FUN_0072ba30(puStack_108,iVar3,*(undefined4 *)(iVar3 + 0x1c),0);
      }
      uStack_24._0_1_ = 9;
      iVar11 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
      (**(code **)(**(int **)(iVar11 + 0x38) + 0x18))();
      local_10c = FUN_00aae9af(0x50);
      uStack_28 = 0x21;
      if (local_10c == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_007297a0(local_10c,0x2d2d2d,0,*(undefined4 *)(iVar3 + 0x20),
                             *(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x1c));
      }
      uStack_28 = 9;
      iVar11 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
      (**(code **)(**(int **)(iVar11 + 0x38) + 0x18))(uVar4);
      uVar4 = *(undefined4 *)(iVar3 + 0x24);
      iVar11 = *(int *)(in_ECX + 0xa4);
      uVar10 = *(undefined4 *)(iVar3 + 0x20);
      puVar6 = (undefined4 *)FUN_00aae9af();
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = uVar10;
        puVar6[1] = uVar4;
        puVar6[2] = iVar11;
        puVar6[3] = 0;
        *(undefined1 *)(puVar6 + 4) = 0;
      }
      iVar12 = *(int *)(in_ECX + 0xa8);
      *(undefined4 **)(in_ECX + 0xa4) = puVar6;
      *(int *)(in_ECX + 0xa8) = iVar12 + 1;
      if (iVar12 == 0) {
        *(undefined4 **)(in_ECX + 0xa0) = puVar6;
      }
      else {
        *(undefined4 **)(iVar11 + 0xc) = puVar6;
      }
    }
    (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x34))();
    FUN_0067a300();
    cVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x158))();
    if (cVar2 == '\0') {
      puStack_108 = (undefined4 *)FUN_00aae9af();
      uStack_24._0_1_ = 0x22;
      if (puStack_108 != (undefined4 *)0x0) {
        FUN_0068b610();
        FUN_0072cef0();
      }
      uStack_24._0_1_ = 9;
      iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
      (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))();
    }
    FUN_0068b610();
    FUN_0064a460();
    uStack_154 = 0;
    puStack_150 = (undefined1 *)0x0;
    puStack_14c = (undefined1 *)0x0;
    local_148 = local_148 & 0xffffff00;
    uStack_24._0_1_ = 0x24;
    iVar3 = FUN_00aae9af();
    uStack_24._0_1_ = 0x25;
    if (iVar3 != 0) {
      puVar6 = (undefined4 *)FUN_00aae9af();
      uStack_24._0_1_ = 0x26;
      if (puVar6 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
        puStack_108 = puVar6;
      }
      else {
        puStack_108 = puVar6;
        iVar11 = FUN_00475500();
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar11 + 0x6c),*(undefined8 *)(iVar11 + 0x74));
        uStack_24 = CONCAT31(uStack_24._1_3_,0x27);
        uStack_100 = 1;
        FUN_0055dd40();
        uStack_24 = 0x28;
        uStack_100 = 3;
        FUN_009f2a50(puVar6,uVar4,&uStack_68,&uStack_154,1);
        uStack_24 = 0x29;
        *puVar6 = &PTR_FUN_00e3d08c;
        puVar6[0x15] = uStack_44;
        puVar6[0x1b] = 0xf;
        puVar6[0x1a] = 0;
        *(undefined1 *)(puVar6 + 0x16) = 0;
        FUN_00408ed0();
        puVar7 = puVar6;
      }
      uStack_24 = 0x2b;
      iVar12 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
      iVar12 = iVar12 + 0xbc;
      uStack_104 = DAT_00f0d844;
      puStack_108 = (undefined4 *)DAT_00f0d840;
      iVar11 = DAT_01258a94;
      if (DAT_00f0d840 < 0x1269) {
        iVar11 = DAT_01258a98;
      }
      if (iVar11 == 0) {
        FUN_009f4240(iVar3,puVar7,0,iVar12);
      }
      else {
        uVar4 = FUN_009c1d40();
        FUN_009f4240(iVar3,puVar7,uVar4,iVar12);
      }
    }
    uStack_24 = 0x2d;
    iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))();
    uVar13 = local_e8;
    if ((local_e8 & 2) != 0) {
      if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_d0[0]);
      }
      uStack_bc = 0xf;
      uStack_c0 = 0;
      local_d0[0] = local_d0[0] & 0xffffff00;
      uVar13 = local_e8 & 0xfffffffd;
    }
    if (((uVar13 & 1) != 0) && (0xf < uStack_114)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_128);
    }
    FUN_004097a0(&local_13c);
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_50);
    }
    uStack_3c = 0xf;
    uStack_40 = 0;
    uStack_50 = uStack_50 & 0xffffff00;
    if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_7c);
    }
    uStack_68 = 0xf;
    uStack_6c = 0;
    uStack_7c = uStack_7c & 0xffffff00;
    if (iStack_60 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_60);
    }
    iStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    local_c = 0x2e;
    FUN_009adb70();
    if (iStack_e0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_e0);
    }
  }
  else if ((param_1 != 9) && (param_1 == 3)) {
    ExceptionList = &local_14;
    *(undefined2 *)(*(int *)(in_ECX + 4) + 0x1538) = 0x101;
    FUN_009885d0();
    local_c = 0x2f;
    FUN_009885d0();
    local_c._0_1_ = 0x30;
    FUN_009a8ee0(local_e4,&local_128);
    local_c._0_1_ = 0x31;
    iVar3 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                 (int)*(undefined8 *)(iVar3 + 0x74),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    local_c = CONCAT31(local_c._1_3_,0x32);
    puVar14 = local_d0;
    (**(code **)(**(int **)(in_ECX + 8) + 0x3c))(puVar14,0);
    FUN_009a67d0(puVar14);
    FUN_00408ad0();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x30);
    FUN_009a9740(&local_e8);
    FUN_00408ad0();
    puStack_10 = (undefined1 *)0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    puStack_10 = (undefined1 *)0x33;
    FUN_009885d0();
    puStack_10._0_1_ = 0x34;
    FUN_009a8ee0(&local_e8,&uStack_12c);
    puStack_10._0_1_ = 0x35;
    iVar3 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                 (int)*(undefined8 *)(iVar3 + 0x74),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x36);
    puVar14 = &uStack_d4;
    (**(code **)(**(int **)(in_ECX + 8) + 0x3c))(puVar14,0);
    FUN_009a67d0(puVar14);
    FUN_00408ad0();
    local_14 = (void *)CONCAT31(local_14._1_3_,0x34);
    FUN_009a9740(auStack_ec);
    FUN_00408ad0();
    local_14 = (void *)0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_14 = (void *)0x37;
    FUN_009885d0();
    local_14._0_1_ = 0x38;
    FUN_009885d0();
    local_14 = (void *)CONCAT31(local_14._1_3_,0x39);
    piVar8 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(&uStack_160);
    piVar9 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(&uStack_d8);
    FUN_009a8ee0(auStack_f4,&puStack_138);
    uStack_1c = 0x3a;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),(int)*(undefined8 *)(iVar3 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    uStack_1c = 0x3b;
    iVar3 = *piVar9;
    uVar10 = (**(code **)(*piVar8 + 0xd0))();
    (**(code **)(iVar3 + 0xcc))(uVar4,uVar10);
    FUN_00408ad0();
    uStack_24 = CONCAT31(uStack_24._1_3_,0x39);
    FUN_009a9740();
    FUN_00408ad0();
    FUN_00408ad0();
    uStack_24 = 0xffffffff;
    FUN_00408ad0();
    (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x34))();
    FUN_009885d0();
    uStack_24 = 0x3c;
    piVar8 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))();
    (**(code **)(*piVar8 + 0x38))();
    FUN_00408ad0();
  }
  ExceptionList = local_14;
  return;
}

