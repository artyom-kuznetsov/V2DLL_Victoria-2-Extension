// FUN_00934280 @ 00934280 body=[[00934280, 00934393] [00934397, 009343b5] [009343b9, 009343f7] [009343fb, 00934419] [0093441d, 0093458d] [00934591, 009345b4] [009345b8, 009345d2] [009345d6, 009346db] [009346df, 009347bd] [009347c1, 009347df] [009347e3, 00934897] [0093489b, 009348b1] [009348b5, 009348dc] [009348e5, 0093498a] [0093498e, 009349b0] [009349b4, 009349f2] [009349f6, 00934a18] [00934a1c, 00934b3a] [00934b3e, 00934b5c] [00934b60, 00934b80] [00934b84, 00934c0e] [00934c12, 00934f73] [00934f77, 009350e4] [009350e8, 009351bd]]


void FUN_00934280(int param_1,char param_2,char param_3,undefined4 param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 **ppuVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_418 [2];
  undefined1 auStack_410 [92];
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 *puStack_3ac;
  undefined4 uStack_3a8;
  char *pcStack_3a4;
  char local_37c [380];
  undefined **local_200;
  undefined **local_140;
  uint local_c0;
  int local_b0;
  uint local_ac;
  undefined1 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  int *local_6c;
  undefined1 *local_68;
  uint local_64;
  int local_54;
  uint local_50;
  int local_48;
  undefined1 *local_44;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb71ee;
  local_10 = ExceptionList;
  iVar8 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != iVar8) {
    do {
      if (*(undefined1 **)(iVar2 + 4) == param_5) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar8);
    if (iVar2 != iVar8) {
      return;
    }
  }
  local_68 = param_5;
  ExceptionList = &local_10;
  FUN_0093cfb0();
  if (param_3 == '\0') {
    FUN_004d61d0();
  }
  else {
    if (((int)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) & 0xfffffff8U) < 1) ||
       (*(int *)(*(int *)(param_1 + 0x2c) + 4) != *(int *)(DAT_012588e8 + 0xb60))) {
      if ((0 < (int)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) & 0xfffffff8U)) &&
         (param_5 == *(undefined1 **)(DAT_012588e8 + 0xb60))) {
        local_50 = 0xf;
        local_54 = 0;
        local_64 = local_64 & 0xffffff00;
        local_8._1_3_ = 0;
        for (uVar9 = *(uint *)(param_1 + 0x3c);
            (local_8._0_1_ = 0x19, *(uint *)(param_1 + 0x3c) <= uVar9 &&
            (uVar9 < *(uint *)(param_1 + 0x40))); uVar9 = uVar9 + 8) {
          if (local_54 != 0) {
            local_2c = 0xf;
            local_30 = 0;
            local_40[0] = local_40[0] & 0xffffff00;
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
            if (0xf < local_2c) {
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
          if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_2c = 0xf;
          local_30 = 0;
          local_40[0] = local_40[0] & 0xffffff00;
        }
        local_48 = *(int *)(DAT_012588e8 + 0xb5c);
        piVar3 = (int *)FUN_005061e0();
        local_24 = (undefined1 *)0x0;
        local_20 = (undefined1 *)0x0;
        local_1c = 0;
        local_18 = 0;
        iVar8 = *piVar3;
        while (iVar8 != 0) {
          iVar8 = *(int *)(iVar8 + 0x3c);
          FUN_0042b730();
        }
        local_8._0_1_ = 0x1e;
        FUN_009885d0();
        local_8._0_1_ = 0x1f;
        FUN_009885d0();
        local_8._0_1_ = 0x20;
        FUN_006a4f40();
        FUN_00424ce0();
        local_8._0_1_ = 0x21;
        FUN_00424aa0();
        puVar5 = local_20;
        local_8._0_1_ = 0x22;
        iVar8 = FUN_00aae9af();
        local_8._0_1_ = 0x23;
        if (iVar8 == 0) {
          local_20 = (undefined1 *)0x0;
        }
        else {
          local_20 = (undefined1 *)FUN_0042b900();
        }
        puVar4 = local_20;
        if (local_1c != 0) {
          *(undefined1 **)((int)puVar5 + 0x3c) = local_20;
          puVar4 = local_24;
        }
        local_24 = puVar4;
        local_1c = local_1c + 1;
        FUN_00a39a80();
        if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88 = local_88 & 0xffffff00;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x1e;
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_009885d0();
        local_8._0_1_ = 0x24;
        FUN_00424aa0();
        puVar5 = local_20;
        local_8._0_1_ = 0x25;
        iVar8 = FUN_00aae9af();
        local_8._0_1_ = 0x26;
        if (iVar8 == 0) {
          local_20 = (undefined1 *)0x0;
        }
        else {
          local_20 = (undefined1 *)FUN_0042b900();
        }
        puVar4 = local_20;
        if (local_1c != 0) {
          *(undefined1 **)(puVar5 + 0x3c) = local_20;
          puVar4 = local_24;
        }
        local_24 = puVar4;
        local_1c = local_1c + 1;
        FUN_00a39a80();
        local_8._0_1_ = 0x1e;
        if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_009885d0();
        local_8._0_1_ = 0x27;
        FUN_0055dd40();
        local_8._0_1_ = 0x28;
        FUN_00424aa0();
        puVar5 = local_20;
        local_8._0_1_ = 0x29;
        iVar8 = FUN_00aae9af();
        local_8._0_1_ = 0x2a;
        if (iVar8 == 0) {
          local_20 = (undefined1 *)0x0;
        }
        else {
          local_20 = (undefined1 *)FUN_0042b900();
        }
        puVar4 = local_20;
        if (local_1c != 0) {
          *(undefined1 **)(puVar5 + 0x3c) = local_20;
          puVar4 = local_24;
        }
        local_24 = puVar4;
        local_1c = local_1c + 1;
        FUN_00a39a80();
        FUN_00408ad0();
        local_8._0_1_ = 0x1e;
        FUN_00408ad0();
        FUN_009885d0();
        local_8._0_1_ = 0x2b;
        FUN_009885d0();
        local_8._0_1_ = 0x2c;
        local_44 = (undefined1 *)local_418;
        local_418[0] = 0;
        local_418[1] = 0;
        uVar7 = *(undefined4 *)(DAT_012588e8 + 0xb60);
        uVar16 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        uVar14 = 0;
        puVar12 = local_40;
        ppuVar10 = &local_24;
        uVar13 = 0;
        uVar15 = uVar16;
        uVar6 = uVar7;
        FUN_006a4f40(ppuVar10,0,puVar12,0,uVar16,uVar7,uVar16,uVar7);
        uVar11 = FUN_006a55b0();
        FUN_006a7ed0(auStack_410,uVar11,ppuVar10,uVar13,puVar12,uVar14,uVar16,uVar7,uVar15,uVar6);
        local_418[1] = 0;
        local_418[0] = param_1;
        local_8._0_1_ = 0x2d;
        uVar7 = FUN_006a4f40();
        local_8 = CONCAT31(local_8._1_3_,0x2c);
        FUN_0093d6e0(uVar7);
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_0042b9f0();
        local_8 = 0xffffffff;
        FUN_00408ad0();
      }
    }
    else {
      local_ac = 0xf;
      local_b0 = 0;
      local_c0 = local_c0 & 0xffffff00;
      local_8._1_3_ = 0;
      for (uVar9 = *(uint *)(param_1 + 0x3c);
          (local_8._0_1_ = 0, *(uint *)(param_1 + 0x3c) <= uVar9 &&
          (uVar9 < *(uint *)(param_1 + 0x40))); uVar9 = uVar9 + 8) {
        if (local_b0 != 0) {
          local_50 = 0xf;
          local_54 = 0;
          local_64 = local_64 & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 1;
          FUN_00988f20();
          local_8._0_1_ = 2;
          FUN_00408ed0();
          if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0;
          local_2c = 0xf;
          local_30 = 0;
          local_40[0] = local_40[0] & 0xffffff00;
          if (0xf < local_50) {
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
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0;
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_50 = 0xf;
        local_54 = 0;
        local_64 = local_64 & 0xffffff00;
      }
      local_48 = *(int *)(DAT_012588e8 + 0xb5c);
      piVar3 = (int *)FUN_005061e0();
      local_24 = (undefined1 *)0x0;
      local_20 = (undefined1 *)0x0;
      local_1c = 0;
      local_18 = 0;
      iVar8 = *piVar3;
      while (iVar8 != 0) {
        iVar8 = *(int *)(iVar8 + 0x3c);
        FUN_0042b730();
      }
      local_8._0_1_ = 5;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 6;
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 7;
      FUN_006a4f40();
      FUN_00424ce0();
      local_8._0_1_ = 8;
      FUN_00424aa0();
      puVar5 = local_20;
      local_8._0_1_ = 9;
      puVar4 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 10;
      uVar1 = (undefined1)local_8;
      local_8._0_1_ = 10;
      local_68 = puVar4;
      if (puVar4 == (undefined1 *)0x0) {
        local_20 = (undefined1 *)0x0;
        local_8._0_1_ = uVar1;
      }
      else {
        *(undefined4 *)(puVar4 + 0x14) = 0xf;
        *(undefined4 *)(puVar4 + 0x10) = 0;
        *puVar4 = 0;
        FUN_00408ed0();
        local_8._0_1_ = 0xb;
        *(undefined4 *)(puVar4 + 0x30) = 0xf;
        *(undefined4 *)(puVar4 + 0x2c) = 0;
        puVar4[0x1c] = 0;
        FUN_00408ed0();
        *(undefined1 **)(puVar4 + 0x38) = puVar5;
        *(undefined4 *)(puVar4 + 0x3c) = 0;
        puVar4[0x40] = 0;
        local_20 = puVar4;
      }
      puVar4 = local_20;
      if (local_1c != 0) {
        *(undefined1 **)((int)puVar5 + 0x3c) = local_20;
        puVar4 = local_24;
      }
      local_24 = puVar4;
      local_1c = local_1c + 1;
      FUN_00a39a80();
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 5;
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
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
      puVar5 = local_20;
      local_8._0_1_ = 0xe;
      puVar4 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 0xf;
      uVar1 = (undefined1)local_8;
      local_8._0_1_ = 0xf;
      local_68 = puVar4;
      if (puVar4 == (undefined1 *)0x0) {
        local_20 = (undefined1 *)0x0;
        local_8._0_1_ = uVar1;
      }
      else {
        *(undefined4 *)(puVar4 + 0x14) = 0xf;
        *(undefined4 *)(puVar4 + 0x10) = 0;
        *puVar4 = 0;
        FUN_00408ed0();
        local_8._0_1_ = 0x10;
        *(undefined4 *)(puVar4 + 0x30) = 0xf;
        *(undefined4 *)(puVar4 + 0x2c) = 0;
        puVar4[0x1c] = 0;
        FUN_00408ed0();
        *(undefined1 **)(puVar4 + 0x38) = puVar5;
        *(undefined4 *)(puVar4 + 0x3c) = 0;
        puVar4[0x40] = 0;
        local_20 = puVar4;
      }
      puVar4 = local_20;
      if (local_1c != 0) {
        *(undefined1 **)(puVar5 + 0x3c) = local_20;
        puVar4 = local_24;
      }
      local_24 = puVar4;
      local_1c = local_1c + 1;
      FUN_00a39a80();
      local_8._0_1_ = 5;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x11;
      FUN_0055dd40();
      local_8._0_1_ = 0x12;
      FUN_00424aa0();
      local_8._0_1_ = 0x13;
      local_68 = local_20;
      puVar5 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 0x14;
      uVar1 = (undefined1)local_8;
      local_8._0_1_ = 0x14;
      local_44 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        local_20 = (undefined1 *)0x0;
        local_8._0_1_ = uVar1;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0();
        local_8._0_1_ = 0x15;
        *(undefined4 *)(puVar5 + 0x30) = 0xf;
        *(undefined4 *)(puVar5 + 0x2c) = 0;
        puVar5[0x1c] = 0;
        FUN_00408ed0();
        *(undefined1 **)(puVar5 + 0x38) = local_68;
        *(undefined4 *)(puVar5 + 0x3c) = 0;
        puVar5[0x40] = 0;
        local_20 = puVar5;
      }
      puVar5 = local_20;
      if (local_1c != 0) {
        *(undefined1 **)(local_68 + 0x3c) = local_20;
        puVar5 = local_24;
      }
      local_24 = puVar5;
      local_1c = local_1c + 1;
      FUN_00a39a80();
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 5;
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x16;
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x17;
      local_44 = (undefined1 *)local_418;
      local_418[0] = 0;
      local_418[1] = 0;
      uVar7 = *(undefined4 *)(DAT_012588e8 + 0xb60);
      uVar16 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
      uVar13 = 0;
      puVar12 = local_40;
      ppuVar10 = &local_24;
      uVar11 = 0;
      uVar15 = param_4;
      puVar5 = param_5;
      FUN_006a4f40(ppuVar10,0,puVar12,0,param_4,param_5,uVar16,uVar7);
      uVar6 = FUN_006a55b0();
      FUN_006a7ed0(auStack_410,uVar6,ppuVar10,uVar11,puVar12,uVar13,uVar15,puVar5,uVar16,uVar7);
      local_418[1] = 0;
      local_418[0] = param_1;
      local_8._0_1_ = 0x18;
      uVar7 = FUN_006a4f40();
      local_8 = CONCAT31(local_8._1_3_,0x17);
      FUN_0093d6e0(uVar7);
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_0042b9f0();
      local_8 = 0xffffffff;
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    FUN_0093e050();
  }
  FUN_009365d0();
  if (param_2 != '\0') {
    iVar8 = FUN_00aae9af();
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_005f6a60();
    }
    pcStack_3a4 = (char *)0x934dda;
    __snprintf(local_37c,0xff,"%s");
    FUN_005f6ab0();
    *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    (**(code **)(*(int *)(param_1 + 0x4c) + 0x18))();
  }
  piVar3 = *(int **)(param_1 + 0x3c);
  do {
    if ((piVar3 < *(int **)(param_1 + 0x3c)) || (*(int **)(param_1 + 0x40) <= piVar3)) {
      FUN_0093bdd0();
      FUN_0068e390();
      ExceptionList = local_10;
      return;
    }
    local_48 = *piVar3;
    local_44 = (undefined1 *)piVar3[1];
    local_6c = piVar3 + 2;
    if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)param_5 * 4) + 0xbe8)
                         + (int)local_44 * 4) + 0x34) == 0) {
      local_1c = *piVar3;
      if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar3[1] * 4) + 0xbe8) +
                           (int)param_5 * 4) + 0x34) != 0) {
        local_ac = 0xf;
        local_b0 = 0;
        local_c0 = local_c0 & 0xffffff00;
        FUN_00409350();
        local_8 = 0x30;
        FUN_004015b0();
        local_8._0_1_ = 0x31;
        uStack_3a8 = *(undefined4 *)
                      (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_44 * 4) +
                                        0xbe8) + (int)param_5 * 4) + 0x34);
        pcStack_3a4 = " is already at war with ";
        puStack_3ac = &param_4;
        uStack_3b0 = 0x935040;
        uStack_3b0 = FUN_00987d20();
        uStack_3b4 = 0x935046;
        uStack_3a8 = FUN_00418e30();
        puStack_3ac = (undefined4 *)0x93504f;
        FUN_00418e30();
        pcStack_3a4 = (char *)0x935058;
        FUN_00418e30();
        FUN_00418e30();
        FUN_00418e30();
        pcStack_3a4 = (char *)0x935087;
        FUN_00418e30();
        FUN_00418e30();
        FUN_00401280();
        local_8 = CONCAT31(local_8._1_3_,0x30);
        FUN_00987ac0();
        local_200 = std::ios_base::vftable;
        FUN_00aad52d();
        local_8 = 0xffffffff;
        if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_ac = 0xf;
        local_b0 = 0;
        local_c0 = local_c0 & 0xffffff00;
        goto LAB_009350fe;
      }
    }
    else {
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      FUN_00409350();
      local_8 = 0x2e;
      FUN_004015b0();
      local_8._0_1_ = 0x2f;
      uStack_3a8 = *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)param_5 * 4) +
                                      0xbe8) + (int)local_44 * 4) + 0x34);
      pcStack_3a4 = " is already at war with ";
      puStack_3ac = &param_4;
      uStack_3b0 = 0x934ed5;
      uStack_3b0 = FUN_00987d20();
      uStack_3b4 = 0x934edb;
      uStack_3a8 = FUN_00418e30();
      puStack_3ac = (undefined4 *)0x934ee4;
      FUN_00418e30();
      pcStack_3a4 = (char *)0x934eed;
      FUN_00418e30();
      FUN_00418e30();
      FUN_00418e30();
      pcStack_3a4 = (char *)0x934f1c;
      FUN_00418e30();
      FUN_00418e30();
      FUN_00401280();
      local_8 = CONCAT31(local_8._1_3_,0x2e);
      FUN_00987ac0();
      local_140 = std::ios_base::vftable;
      FUN_00aad52d();
      local_8 = 0xffffffff;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
LAB_009350fe:
      local_8 = 0xffffffff;
    }
    piVar3 = local_6c;
    iVar2 = DAT_012587e4;
    iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)param_5 * 4) + 0xbe8) +
                    (int)local_44 * 4);
    *(undefined1 *)(iVar8 + 0x71) = 1;
    *(int *)(iVar8 + 0x34) = param_1;
    iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + (int)local_44 * 4) + 0xbe8) +
                    (int)param_5 * 4);
    *(undefined1 *)(iVar8 + 0x71) = 1;
    *(int *)(iVar8 + 0x34) = param_1;
    FUN_00517af0();
    FUN_00517af0();
    FUN_00859f80();
  } while( true );
}

