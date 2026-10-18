// FUN_00935390 @ 00935390 body=[[00935390, 009354a3] [009354a7, 009354c5] [009354c9, 00935507] [0093550b, 0093552a] [0093552e, 0093569d] [009356a1, 009356c4] [009356c8, 009356e2] [009356e6, 009357eb] [009357ef, 009358cd] [009358d1, 009358ef] [009358f3, 009359a7] [009359ab, 009359c1] [009359c5, 00935a97] [00935a9b, 00935abd] [00935ac1, 00935b05] [00935b09, 00935b2c] [00935b30, 00935c60] [00935c64, 00935c82] [00935c86, 00935ca0] [00935ca4, 00935d37] [00935d3b, 00935de1] [00935de5, 00935e07] [00935e0b, 00935eb9] [00935ebd, 00935ed3] [00935ed7, 00935efa] [00935efe, 00936068]]


void FUN_00935390(int param_1,char param_2,char param_3,undefined4 param_4,undefined1 *param_5)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined1 **ppuVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_298;
  undefined4 local_294;
  undefined1 auStack_290 [108];
  undefined4 uStack_224;
  char local_1fc [316];
  int local_c0;
  int local_b0;
  uint local_ac;
  undefined1 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  undefined4 *local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined1 *local_60;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined1 *local_40;
  undefined1 *local_3c;
  int local_38;
  undefined1 local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb6fff;
  local_10 = ExceptionList;
  iVar9 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 != iVar9) {
    do {
      if (*(undefined1 **)(iVar3 + 4) == param_5) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar9);
    if (iVar3 != iVar9) {
      return;
    }
  }
  local_60 = param_5;
  ExceptionList = &local_10;
  FUN_0093cfb0();
  if (param_3 == '\0') {
    FUN_004d61d0();
    goto LAB_00935f20;
  }
  if (((int)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) & 0xfffffff8U) < 1) ||
     (*(int *)(*(int *)(param_1 + 0x3c) + 4) != *(int *)(DAT_012588e8 + 0xb60))) {
    if (param_5 == *(undefined1 **)(DAT_012588e8 + 0xb60)) {
      local_ac = 0xf;
      local_b0 = 0;
      local_c0 = (uint)local_c0._1_3_ << 8;
      local_8._1_3_ = 0;
      for (uVar11 = *(uint *)(param_1 + 0x2c);
          (local_8._0_1_ = 0x19, *(uint *)(param_1 + 0x2c) <= uVar11 &&
          (uVar11 < *(uint *)(param_1 + 0x30))); uVar11 = uVar11 + 8) {
        if (local_b0 != 0) {
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 0x1a;
          FUN_00988f20();
          local_8._0_1_ = 0x1b;
          FUN_00408ed0();
          if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0x19;
          local_74 = 0xf;
          local_78 = 0;
          local_88 = local_88 & 0xffffff00;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        local_8._0_1_ = 0x19;
        FUN_0055dd40();
        local_8._0_1_ = 0x1c;
        FUN_00988f20();
        local_8._0_1_ = 0x1d;
        FUN_00408ed0();
        if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x19;
        local_74 = 0xf;
        local_78 = 0;
        local_88 = local_88 & 0xffffff00;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
      }
      local_6c = *(undefined4 **)(DAT_012588e8 + 0xb5c);
      piVar4 = (int *)FUN_005061e0();
      local_40 = (undefined1 *)0x0;
      local_3c = (undefined1 *)0x0;
      local_38 = 0;
      local_34 = 0;
      iVar9 = *piVar4;
      while (iVar9 != 0) {
        iVar9 = *(int *)(iVar9 + 0x3c);
        FUN_0042b730();
      }
      local_8._0_1_ = 0x1e;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1f;
      local_48 = 0xf;
      local_4c = 0;
      local_5c = local_5c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x20;
      FUN_006a4f40();
      FUN_00424ce0();
      local_8._0_1_ = 0x21;
      FUN_00424aa0();
      puVar6 = local_3c;
      local_8._0_1_ = 0x22;
      iVar9 = FUN_00aae9af();
      local_8._0_1_ = 0x23;
      if (iVar9 == 0) {
        local_3c = (undefined1 *)0x0;
      }
      else {
        local_3c = (undefined1 *)FUN_0042b900();
      }
      puVar5 = local_3c;
      if (local_38 != 0) {
        *(undefined1 **)((int)puVar6 + 0x3c) = local_3c;
        puVar5 = local_40;
      }
      local_40 = puVar5;
      local_38 = local_38 + 1;
      FUN_00a39a80();
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x1e;
      local_48 = 0xf;
      local_4c = 0;
      local_5c = local_5c & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x24;
      FUN_00424aa0();
      puVar6 = local_3c;
      local_8._0_1_ = 0x25;
      iVar9 = FUN_00aae9af();
      local_8._0_1_ = 0x26;
      if (iVar9 == 0) {
        local_3c = (undefined1 *)0x0;
      }
      else {
        local_3c = (undefined1 *)FUN_0042b900();
      }
      puVar5 = local_3c;
      if (local_38 != 0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_3c;
        puVar5 = local_40;
      }
      local_40 = puVar5;
      local_38 = local_38 + 1;
      FUN_00a39a80();
      local_8._0_1_ = 0x1e;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x27;
      FUN_0055dd40();
      local_8._0_1_ = 0x28;
      FUN_00424aa0();
      puVar6 = local_3c;
      local_8._0_1_ = 0x29;
      iVar9 = FUN_00aae9af();
      local_8._0_1_ = 0x2a;
      if (iVar9 == 0) {
        local_3c = (undefined1 *)0x0;
      }
      else {
        local_3c = (undefined1 *)FUN_0042b900();
      }
      puVar5 = local_3c;
      if (local_38 != 0) {
        *(undefined1 **)(puVar6 + 0x3c) = local_3c;
        puVar5 = local_40;
      }
      local_40 = puVar5;
      local_38 = local_38 + 1;
      FUN_00a39a80();
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x1e;
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x2b;
      local_48 = 0xf;
      local_4c = 0;
      local_5c = local_5c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x2c;
      local_68 = (undefined1 *)&local_298;
      local_298 = 0;
      local_294 = 0;
      uVar8 = *(undefined4 *)(DAT_012588e8 + 0xb60);
      uVar18 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
      uVar17 = 0;
      puVar15 = local_30;
      ppuVar12 = &local_40;
      uVar14 = 0;
      uVar7 = uVar18;
      uVar13 = uVar8;
      FUN_006a4f40(ppuVar12,0,puVar15,0,uVar18,uVar8,uVar18,uVar8);
      uVar16 = FUN_006a55b0();
      FUN_006a7ed0(auStack_290,uVar16,ppuVar12,uVar14,puVar15,uVar17,uVar18,uVar8,uVar7,uVar13);
      local_294 = 0;
      local_298 = param_1;
      local_8._0_1_ = 0x2d;
      uVar8 = FUN_006a4f40();
      local_8 = CONCAT31(local_8._1_3_,0x2c);
      FUN_0093d6e0(uVar8);
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_48 = 0xf;
      local_4c = 0;
      local_5c = local_5c & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_0042b9f0();
      goto joined_r0x00935eed;
    }
  }
  else {
    local_ac = 0xf;
    local_b0 = 0;
    local_c0 = (uint)local_c0._1_3_ << 8;
    local_8._1_3_ = 0;
    for (uVar11 = *(uint *)(param_1 + 0x2c);
        (local_8._0_1_ = 0, *(uint *)(param_1 + 0x2c) <= uVar11 &&
        (uVar11 < *(uint *)(param_1 + 0x30))); uVar11 = uVar11 + 8) {
      if (local_b0 != 0) {
        local_48 = 0xf;
        local_4c = 0;
        local_5c = local_5c & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 1;
        FUN_00988f20();
        local_8._0_1_ = 2;
        FUN_00408ed0();
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_8._0_1_ = 0;
      FUN_0055dd40();
      local_8._0_1_ = 3;
      FUN_00988f20();
      local_8._0_1_ = 4;
      FUN_00408ed0();
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_48 = 0xf;
      local_4c = 0;
      local_5c = local_5c & 0xffffff00;
    }
    local_6c = *(undefined4 **)(DAT_012588e8 + 0xb5c);
    piVar4 = (int *)FUN_005061e0();
    local_40 = (undefined1 *)0x0;
    local_3c = (undefined1 *)0x0;
    local_38 = 0;
    local_34 = 0;
    iVar9 = *piVar4;
    while (iVar9 != 0) {
      iVar9 = *(int *)(iVar9 + 0x3c);
      FUN_0042b730();
    }
    local_8._0_1_ = 5;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 6;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 7;
    FUN_006a4f40();
    FUN_00424ce0();
    local_8._0_1_ = 8;
    FUN_00424aa0();
    puVar6 = local_3c;
    local_8._0_1_ = 9;
    puVar5 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 10;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 10;
    local_60 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      local_3c = (undefined1 *)0x0;
      local_8._0_1_ = uVar2;
    }
    else {
      *(undefined4 *)(puVar5 + 0x14) = 0xf;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *puVar5 = 0;
      FUN_00408ed0();
      local_8._0_1_ = 0xb;
      *(undefined4 *)(puVar5 + 0x30) = 0xf;
      *(undefined4 *)(puVar5 + 0x2c) = 0;
      puVar5[0x1c] = 0;
      FUN_00408ed0();
      *(undefined1 **)(puVar5 + 0x38) = puVar6;
      *(undefined4 *)(puVar5 + 0x3c) = 0;
      puVar5[0x40] = 0;
      local_3c = puVar5;
    }
    puVar5 = local_3c;
    if (local_38 != 0) {
      *(undefined1 **)((int)puVar6 + 0x3c) = local_3c;
      puVar5 = local_40;
    }
    local_40 = puVar5;
    local_38 = local_38 + 1;
    FUN_00a39a80();
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 5;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = 0;
    FUN_00408ed0();
    local_8._0_1_ = 0xd;
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    FUN_00408ed0();
    puVar6 = local_3c;
    local_8._0_1_ = 0xe;
    puVar5 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0xf;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0xf;
    local_60 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      local_3c = (undefined1 *)0x0;
      local_8._0_1_ = uVar2;
    }
    else {
      *(undefined4 *)(puVar5 + 0x14) = 0xf;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *puVar5 = 0;
      FUN_00408ed0();
      local_8._0_1_ = 0x10;
      *(undefined4 *)(puVar5 + 0x30) = 0xf;
      *(undefined4 *)(puVar5 + 0x2c) = 0;
      puVar5[0x1c] = 0;
      FUN_00408ed0();
      *(undefined1 **)(puVar5 + 0x38) = puVar6;
      *(undefined4 *)(puVar5 + 0x3c) = 0;
      puVar5[0x40] = 0;
      local_3c = puVar5;
    }
    puVar5 = local_3c;
    if (local_38 != 0) {
      *(undefined1 **)(puVar6 + 0x3c) = local_3c;
      puVar5 = local_40;
    }
    local_40 = puVar5;
    local_38 = local_38 + 1;
    FUN_00a39a80();
    local_8._0_1_ = 5;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    FUN_0055dd40();
    local_8._0_1_ = 0x12;
    FUN_00424aa0();
    local_8._0_1_ = 0x13;
    local_60 = local_3c;
    puVar6 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0x14;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0x14;
    local_68 = puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      local_3c = (undefined1 *)0x0;
      local_8._0_1_ = uVar2;
    }
    else {
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      FUN_00408ed0();
      local_8._0_1_ = 0x15;
      *(undefined4 *)(puVar6 + 0x30) = 0xf;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      puVar6[0x1c] = 0;
      FUN_00408ed0();
      *(undefined1 **)(puVar6 + 0x38) = local_60;
      *(undefined4 *)(puVar6 + 0x3c) = 0;
      puVar6[0x40] = 0;
      local_3c = puVar6;
    }
    puVar6 = local_3c;
    if (local_38 != 0) {
      *(undefined1 **)(local_60 + 0x3c) = local_3c;
      puVar6 = local_40;
    }
    local_40 = puVar6;
    local_38 = local_38 + 1;
    FUN_00a39a80();
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 5;
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x16;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x17;
    local_68 = (undefined1 *)&local_298;
    local_298 = 0;
    local_294 = 0;
    uVar8 = *(undefined4 *)(DAT_012588e8 + 0xb60);
    uVar18 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    uVar16 = 0;
    puVar15 = local_30;
    ppuVar12 = &local_40;
    uVar13 = 0;
    puVar6 = param_5;
    FUN_006a4f40(ppuVar12,0,puVar15,0,param_4,param_5,uVar18,uVar8);
    uVar7 = FUN_006a55b0();
    FUN_006a7ed0(auStack_290,uVar7,ppuVar12,uVar13,puVar15,uVar16,param_4,puVar6,uVar18,uVar8);
    local_294 = 0;
    local_298 = param_1;
    local_8._0_1_ = 0x18;
    uVar8 = FUN_006a4f40();
    local_8 = CONCAT31(local_8._1_3_,0x17);
    FUN_0093d6e0(uVar8);
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_0042b9f0();
joined_r0x00935eed:
    local_8 = 0xffffffff;
    if (0xf < local_ac) {
      local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  FUN_0093e050();
LAB_00935f20:
  FUN_009365d0();
  if (param_2 != '\0') {
    iVar9 = FUN_00aae9af();
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = FUN_005f6f10();
    }
    uStack_224 = 0x935f75;
    __snprintf(local_1fc,0xff,"%s");
    FUN_005f6f60();
    *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    (**(code **)(*(int *)(param_1 + 0x4c) + 0x18))();
  }
  puVar10 = *(undefined4 **)(param_1 + 0x2c);
  while ((iVar9 = DAT_012587e4, *(undefined4 **)(param_1 + 0x2c) <= puVar10 &&
         (puVar10 < *(undefined4 **)(param_1 + 0x30)))) {
    iVar3 = puVar10[1];
    local_6c = puVar10 + 2;
    local_64 = *puVar10;
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)param_5 * 4) + 0xbe8) +
                    iVar3 * 4);
    *(undefined1 *)(iVar1 + 0x71) = 1;
    *(int *)(iVar1 + 0x34) = param_1;
    iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 4) + iVar3 * 4) + 0xbe8) + (int)param_5 * 4)
    ;
    *(undefined1 *)(iVar9 + 0x71) = 1;
    *(int *)(iVar9 + 0x34) = param_1;
    FUN_00517af0();
    FUN_00517af0();
    FUN_00859f80();
    puVar10 = local_6c;
  }
  FUN_0093bdd0();
  ExceptionList = local_10;
  return;
}

