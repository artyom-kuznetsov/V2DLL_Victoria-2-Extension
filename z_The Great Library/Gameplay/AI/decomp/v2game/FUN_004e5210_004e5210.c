// FUN_004e5210 @ 004e5210 body=[[004e5210, 004e530c] [004e5310, 004e5434] [004e5438, 004e5457] [004e545b, 004e5476] [004e547a, 004e5552] [004e5556, 004e5635] [004e5639, 004e5726] [004e572a, 004e574d] [004e5751, 004e57fd] [004e5801, 004e581b] [004e581f, 004e5856] [004e585a, 004e596d]]


void FUN_004e5210(int param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int unaff_EDI;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 **ppuVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack_1bc;
  code *pcStack_1b8;
  undefined1 auStack_1b4 [108];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  uint *puStack_13c;
  undefined1 **ppuStack_138;
  undefined1 *puStack_134;
  undefined1 local_128 [16];
  int local_118;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e0 [56];
  uint local_a8 [4];
  int local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  int local_54;
  undefined1 *local_50;
  int *local_4c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  undefined1 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba1f31;
  local_10 = ExceptionList;
  piVar6 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + param_1 * 4);
  puStack_134 = (undefined1 *)0x0;
  ppuStack_138 = (undefined1 **)0x78b;
  puStack_13c = (uint *)0x4e5251;
  ExceptionList = &local_10;
  local_4c = piVar6;
  puStack_134 = (undefined1 *)FUN_009b7950();
  ppuStack_138 = (undefined1 **)0x4e525d;
  FUN_008a8650();
  local_ec = *(undefined4 *)(unaff_EDI + 0xc);
  local_118 = param_1;
  local_f0 = *(undefined4 *)(unaff_EDI + 8);
  puStack_134 = local_128;
  ppuStack_138 = (undefined1 **)0x4e5290;
  cVar5 = (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x30) + 0x80) + 0x18))();
  if (cVar5 != '\0') {
    if (piVar6[0x4b] == *(int *)(DAT_012588e8 + 0xb60)) {
      puStack_13c = *(uint **)(unaff_EDI + 0x30);
      ppuStack_138 = (undefined1 **)local_128;
      puStack_140 = (undefined1 *)0x4e52c5;
      FUN_004eabd0();
      local_8 = 0;
      if (1 < local_98) {
        local_54 = local_4c[0x4a];
        ppuStack_138 = *(undefined1 ***)(*(int *)(DAT_012587e4 + 4) + local_4c[0x4b] * 4);
        puStack_13c = (uint *)0x4e52f9;
        piVar6 = (int *)FUN_005061e0();
        local_2c = (undefined1 *)0x0;
        local_28 = (undefined1 *)0x0;
        local_24 = 0;
        local_20 = 0;
        ppuStack_138 = (undefined1 **)*piVar6;
        while (ppuStack_138 != (undefined1 **)0x0) {
          iVar10 = *(int *)((int)ppuStack_138 + 0x3c);
          puStack_13c = (uint *)0x4e531c;
          FUN_0042b730();
          ppuStack_138 = (undefined1 **)iVar10;
        }
        local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
        local_8._0_1_ = 1;
        ppuStack_138 = (undefined1 **)0x11;
        puStack_13c = (uint *)0xdfdcc0;
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        puStack_140 = (undefined1 *)0x4e5343;
        FUN_00409350();
        local_8._0_1_ = 2;
        ppuStack_138 = (undefined1 **)0x9;
        puStack_13c = (uint *)0xdf2728;
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        puStack_140 = (undefined1 *)0x4e535f;
        FUN_00409350();
        local_8._0_1_ = 3;
        ppuStack_138 = (undefined1 **)0x4e5368;
        FUN_006a4f40();
        ppuStack_138 = (undefined1 **)local_48;
        puStack_13c = local_8c;
        puStack_140 = (undefined1 *)0x4e5378;
        ppuStack_138 = (undefined1 **)FUN_00424ce0();
        puStack_13c = local_70;
        puStack_140 = local_e0;
        local_8._0_1_ = 4;
        uStack_144 = 0x4e538d;
        local_1c = (undefined1 *)FUN_00424aa0();
        local_8._0_1_ = 5;
        ppuStack_138 = (undefined1 **)0x44;
        local_18 = local_28;
        puStack_13c = (uint *)0x4e53a1;
        puVar7 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 6;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 6;
        local_50 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          local_28 = (undefined1 *)0x0;
          local_8._0_1_ = uVar4;
        }
        else {
          ppuStack_138 = (undefined1 **)0xffffffff;
          puStack_13c = (uint *)0x0;
          puStack_140 = local_1c;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_144 = 0x4e53cb;
          FUN_00408ed0();
          ppuStack_138 = (undefined1 **)0xffffffff;
          local_8._0_1_ = 7;
          puStack_13c = (uint *)0x0;
          puStack_140 = (undefined1 *)((int)local_1c + 0x1c);
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_144 = 0x4e53ed;
          FUN_00408ed0();
          *(undefined1 **)(puVar7 + 0x38) = local_18;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
          local_28 = puVar7;
        }
        puVar7 = local_28;
        if (local_24 != 0) {
          *(undefined1 **)((int)local_18 + 0x3c) = local_28;
          puVar7 = local_2c;
        }
        local_2c = puVar7;
        ppuStack_138 = (undefined1 **)0x4e5423;
        local_24 = local_24 + 1;
        FUN_00a39a80();
        if (0xf < local_78) {
          ppuStack_138 = (undefined1 **)local_8c[0];
                    /* WARNING: Subroutine does not return */
          puStack_13c = (uint *)&UNK_004e5435;
          FUN_00aae91b();
        }
        local_78 = 0xf;
        local_7c = 0;
        local_8c[0] = local_8c[0] & 0xffffff00;
        if (0xf < local_5c) {
          ppuStack_138 = (undefined1 **)local_70[0];
                    /* WARNING: Subroutine does not return */
          puStack_13c = (uint *)&UNK_004e5458;
          FUN_00aae91b();
        }
        local_8._0_1_ = 1;
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        if (0xf < local_34) {
          ppuStack_138 = (undefined1 **)local_48[0];
                    /* WARNING: Subroutine does not return */
          puStack_13c = (uint *)&UNK_004e5477;
          FUN_00aae91b();
        }
        ppuStack_138 = (undefined1 **)0x6;
        puStack_13c = (uint *)0xdfdcd4;
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        puStack_140 = (undefined1 *)0x4e5492;
        FUN_00409350();
        ppuStack_138 = (undefined1 **)(unaff_EDI + 0x5c);
        puStack_13c = local_48;
        puStack_140 = local_e0;
        local_8._0_1_ = 8;
        uStack_144 = 0x4e54aa;
        local_18 = (undefined1 *)FUN_00424aa0();
        local_8._0_1_ = 9;
        ppuStack_138 = (undefined1 **)0x44;
        local_1c = local_28;
        puStack_13c = (uint *)0x4e54be;
        puVar7 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 10;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 10;
        local_50 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          local_28 = (undefined1 *)0x0;
          local_8._0_1_ = uVar4;
        }
        else {
          ppuStack_138 = (undefined1 **)0xffffffff;
          puStack_13c = (uint *)0x0;
          puStack_140 = local_18;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_144 = 0x4e54e8;
          FUN_00408ed0();
          ppuStack_138 = (undefined1 **)0xffffffff;
          local_8._0_1_ = 0xb;
          puStack_13c = (uint *)0x0;
          puStack_140 = (undefined1 *)((int)local_18 + 0x1c);
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_144 = 0x4e550a;
          FUN_00408ed0();
          *(undefined1 **)(puVar7 + 0x38) = local_1c;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
          local_28 = puVar7;
        }
        puVar7 = local_28;
        if (local_24 != 0) {
          *(undefined1 **)(local_1c + 0x3c) = local_28;
          puVar7 = local_2c;
        }
        local_2c = puVar7;
        ppuStack_138 = (undefined1 **)0x4e5540;
        local_24 = local_24 + 1;
        FUN_00a39a80();
        local_8._0_1_ = 1;
        if (0xf < local_34) {
          ppuStack_138 = (undefined1 **)local_48[0];
                    /* WARNING: Subroutine does not return */
          puStack_13c = (uint *)&UNK_004e5553;
          FUN_00aae91b();
        }
        ppuStack_138 = (undefined1 **)0x6;
        puStack_13c = (uint *)0xdfdcdc;
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        puStack_140 = (undefined1 *)0x4e5572;
        FUN_00409350();
        ppuStack_138 = (undefined1 **)local_a8;
        puStack_13c = local_48;
        puStack_140 = local_e0;
        local_8._0_1_ = 0xc;
        uStack_144 = 0x4e558d;
        local_18 = (undefined1 *)FUN_00424aa0();
        local_8._0_1_ = 0xd;
        ppuStack_138 = (undefined1 **)0x44;
        local_1c = local_28;
        puStack_13c = (uint *)0x4e55a1;
        puVar7 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0xe;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 0xe;
        local_50 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          local_28 = (undefined1 *)0x0;
          local_8._0_1_ = uVar4;
        }
        else {
          ppuStack_138 = (undefined1 **)0xffffffff;
          puStack_13c = (uint *)0x0;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          puStack_140 = local_18;
          *puVar7 = 0;
          uStack_144 = 0x4e55cb;
          FUN_00408ed0();
          ppuStack_138 = (undefined1 **)0xffffffff;
          local_8._0_1_ = 0xf;
          puStack_13c = (uint *)0x0;
          puStack_140 = (undefined1 *)((int)local_18 + 0x1c);
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_144 = 0x4e55ed;
          FUN_00408ed0();
          *(undefined1 **)(puVar7 + 0x38) = local_1c;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
          local_28 = puVar7;
        }
        puVar7 = local_28;
        if (local_24 != 0) {
          *(undefined1 **)(local_1c + 0x3c) = local_28;
          puVar7 = local_2c;
        }
        local_2c = puVar7;
        ppuStack_138 = (undefined1 **)0x4e5623;
        local_24 = local_24 + 1;
        FUN_00a39a80();
        local_8._0_1_ = 1;
        if (0xf < local_34) {
          ppuStack_138 = (undefined1 **)local_48[0];
                    /* WARNING: Subroutine does not return */
          puStack_13c = (uint *)&UNK_004e5636;
          FUN_00aae91b();
        }
        ppuStack_138 = (undefined1 **)0x4;
        puStack_13c = (uint *)&DAT_00df85c0;
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        puStack_140 = (undefined1 *)0x4e5655;
        FUN_00409350();
        local_8._0_1_ = 0x10;
        ppuStack_138 = (undefined1 **)local_8c;
        puStack_13c = (uint *)0x4e566a;
        ppuStack_138 = (undefined1 **)(**(code **)(*local_4c + 0x1c))();
        puStack_13c = local_48;
        puStack_140 = local_e0;
        local_8._0_1_ = 0x11;
        uStack_144 = 0x4e567f;
        local_18 = (undefined1 *)FUN_00424aa0();
        local_8._0_1_ = 0x12;
        ppuStack_138 = (undefined1 **)0x44;
        local_1c = local_28;
        puStack_13c = (uint *)0x4e5693;
        puVar7 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0x13;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 0x13;
        local_50 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          local_28 = (undefined1 *)0x0;
          local_8._0_1_ = uVar4;
        }
        else {
          ppuStack_138 = (undefined1 **)0xffffffff;
          puStack_13c = (uint *)0x0;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          puStack_140 = local_18;
          *puVar7 = 0;
          uStack_144 = 0x4e56bd;
          FUN_00408ed0();
          ppuStack_138 = (undefined1 **)0xffffffff;
          local_8._0_1_ = 0x14;
          puStack_13c = (uint *)0x0;
          puStack_140 = (undefined1 *)((int)local_18 + 0x1c);
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_144 = 0x4e56df;
          FUN_00408ed0();
          *(undefined1 **)(puVar7 + 0x38) = local_1c;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
          local_28 = puVar7;
        }
        puVar7 = local_28;
        if (local_24 != 0) {
          *(undefined1 **)(local_1c + 0x3c) = local_28;
          puVar7 = local_2c;
        }
        local_2c = puVar7;
        ppuStack_138 = (undefined1 **)0x4e5715;
        local_24 = local_24 + 1;
        FUN_00a39a80();
        if (0xf < local_78) {
          ppuStack_138 = (undefined1 **)local_8c[0];
                    /* WARNING: Subroutine does not return */
          puStack_13c = (uint *)&UNK_004e5727;
          FUN_00aae91b();
        }
        local_8._0_1_ = 1;
        local_78 = 0xf;
        local_7c = 0;
        local_8c[0] = local_8c[0] & 0xffffff00;
        if (0xf < local_34) {
          ppuStack_138 = (undefined1 **)local_48[0];
                    /* WARNING: Subroutine does not return */
          puStack_13c = (uint *)&UNK_004e574e;
          FUN_00aae91b();
        }
        ppuStack_138 = (undefined1 **)0x0;
        puStack_13c = (uint *)&DAT_00ded94d;
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        puStack_140 = (undefined1 *)0x4e5768;
        FUN_00409350();
        local_8._0_1_ = 0x15;
        ppuStack_138 = (undefined1 **)0xb;
        puStack_13c = (uint *)0xdfdce4;
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        puStack_140 = (undefined1 *)0x4e5784;
        FUN_00409350();
        local_50 = auStack_1b4;
        local_8._0_1_ = 0x16;
        local_18 = (undefined1 *)&uStack_1bc;
        uStack_1bc = 0;
        pcStack_1b8 = (code *)0x0;
        uVar9 = *(undefined4 *)(unaff_EDI + 0x58);
        uVar16 = *(undefined4 *)(unaff_EDI + 0x54);
        uVar15 = 0;
        puVar14 = local_48;
        ppuVar13 = &local_2c;
        piVar6 = local_4c;
        uVar17 = uVar16;
        uVar18 = uVar9;
        FUN_006a4f40(ppuVar13,local_4c,puVar14,0,uVar16,uVar9,uVar16,uVar9);
        uVar8 = FUN_006a55b0();
        FUN_006a7ed0(auStack_1b4,uVar8,ppuVar13,piVar6,puVar14,uVar15,uVar16,uVar9,uVar17,uVar18);
        pcStack_1b8 = FUN_006a5730;
        local_8._0_1_ = 0x17;
        uStack_1bc = 0x4e57db;
        uStack_1bc = FUN_006a4f40();
        uVar9 = FUN_006a4f40();
        local_8 = CONCAT31(local_8._1_3_,0x16);
        FUN_004e9540(uVar9);
        if (0xf < local_5c) {
          ppuStack_138 = (undefined1 **)local_70[0];
                    /* WARNING: Subroutine does not return */
          puStack_13c = (uint *)&UNK_004e57fe;
          FUN_00aae91b();
        }
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        if (0xf < local_34) {
          ppuStack_138 = (undefined1 **)local_48[0];
                    /* WARNING: Subroutine does not return */
          puStack_13c = (uint *)&UNK_004e581c;
          FUN_00aae91b();
        }
        ppuStack_138 = &local_2c;
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        puStack_13c = (uint *)0x4e5835;
        FUN_0042b9f0();
      }
      local_8 = 0xffffffff;
      if (0xf < local_94) {
        ppuStack_138 = (undefined1 **)local_a8[0];
                    /* WARNING: Subroutine does not return */
        puStack_13c = (uint *)&UNK_004e5857;
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = local_a8[0] & 0xffffff00;
    }
    ppuStack_138 = (undefined1 **)0x0;
    puStack_13c = (uint *)local_128;
    puStack_140 = (undefined1 *)0x4e588c;
    (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x30) + 0x9c) + 0x2c))();
  }
  iVar10 = *(int *)(unaff_EDI + 0x30);
  plVar1 = (longlong *)(*(int *)(DAT_012586dc + 0x50) + 0x1c8);
  ppuStack_138 = *(undefined1 ***)(*(int *)(DAT_012586dc + 0x50) + 0x1cc);
  lVar11 = *plVar1;
  if (*(int *)(iVar10 + 0xfc) != 0) {
    uStack_144 = *(undefined4 *)(iVar10 + 0x118);
    puStack_140 = *(undefined1 **)(iVar10 + 0x11c);
    uStack_148 = 0x4e58c0;
    puStack_13c = (uint *)*(undefined1 **)plVar1;
    lVar11 = __allmul();
    lVar11 = lVar11 >> 0xf;
  }
  puVar14 = (uint *)(unaff_EDI + 0xb8);
  uVar2 = *puVar14;
  *puVar14 = (uint)lVar11 + *puVar14;
  *(int *)(unaff_EDI + 0xbc) =
       *(int *)(unaff_EDI + 0xbc) + (int)((ulonglong)lVar11 >> 0x20) +
       (uint)CARRY4(uVar2,(uint)lVar11);
  ppuStack_138 = (undefined1 **)0x4e58e4;
  uVar12 = FUN_00b31c36();
  iVar10 = (int)((ulonglong)uVar12 >> 0x20);
  if ((iVar10 <= *(int *)(unaff_EDI + 0xbc)) &&
     ((iVar10 < *(int *)(unaff_EDI + 0xbc) || ((uint)uVar12 < *(uint *)(unaff_EDI + 0xb8))))) {
    *(undefined8 *)(unaff_EDI + 0xb8) = uVar12;
  }
  iVar10 = *(int *)(unaff_EDI + 0x98);
  ppuStack_138 = (undefined1 **)0x10;
  puStack_13c = (uint *)0x4e590f;
  piVar6 = (int *)FUN_00aae9af();
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    *piVar6 = param_1;
    piVar6[1] = iVar10;
    piVar6[2] = 0;
    *(undefined1 *)(piVar6 + 3) = 0;
  }
  iVar3 = *(int *)(unaff_EDI + 0x9c);
  *(int **)(unaff_EDI + 0x98) = piVar6;
  *(int *)(unaff_EDI + 0x9c) = iVar3 + 1;
  if (iVar3 != 0) {
    *(int **)(iVar10 + 8) = piVar6;
    ExceptionList = local_10;
    return;
  }
  *(int **)(unaff_EDI + 0x94) = piVar6;
  ExceptionList = local_10;
  return;
}

