// FUN_008ab700 @ 008ab700 body=[[008ab700, 008ab78c] [008ab790, 008ab811] [008ab815, 008ab9d3] [008ab9d7, 008aba75] [008aba79, 008abaf5] [008abaf9, 008abb24] [008abb28, 008abba5] [008abba9, 008abbd4] [008abbd8, 008abc74] [008abc78, 008abca4] [008abca8, 008abd2a] [008abd2e, 008abf6e] [008abf72, 008ac00a] [008ac00e, 008ac087] [008ac08b, 008ac0b3] [008ac0b7, 008ac132] [008ac136, 008ac155] [008ac159, 008ac210] [008ac214, 008ac243] [008ac247, 008ac266] [008ac26a, 008ac284] [008ac288, 008ac2e9] [008ac2ed, 008ac306] [008ac30a, 008ac319] [008ac31d, 008ac33e] [008ac342, 008ac36a] [008ac36e, 008ac421] [008ac425, 008ac449] [008ac450, 008ac591] [008ac595, 008ac686] [008ac68a, 008ac729] [008ac72d, 008ac755] [008ac759, 008ac82b] [008ac82f, 008ac85e] [008ac862, 008ac881] [008ac885, 008ac8a5] [008ac8a9, 008ac8d2] [008ac8d6, 008ac8f7] [008ac8fb, 008ac90d]]


/* WARNING: Removing unreachable block (ram,0x008ac495) */

void FUN_008ab700(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  uint **ppuVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  int in_stack_00000018;
  uint **ppuStack_1f0;
  char ***pppcStack_1ec;
  char ***pppcStack_1e8;
  char ***pppcStack_1e4;
  undefined ***pppuStack_1e0;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char ***pppcStack_1c8;
  char ***pppcStack_1c4;
  char ***pppcStack_1c0;
  uint **ppuStack_1bc;
  char **ppcStack_1b8;
  uint local_194;
  uint local_18c;
  uint local_178;
  undefined1 local_170 [8];
  int local_168;
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_148 [8];
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  uint local_120;
  undefined **local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined1 local_104;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  uint local_e4 [3];
  int local_d8;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8 [3];
  int local_bc;
  undefined4 local_b8;
  int *local_b4;
  uint **local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint *local_90 [4];
  undefined4 local_80;
  uint local_7c;
  undefined8 local_74;
  char **local_68 [4];
  undefined4 local_58;
  uint local_54;
  int local_4c;
  int *local_48;
  int *local_44;
  uint **local_40 [4];
  undefined4 local_30;
  uint local_2c;
  uint *local_24;
  int *local_20;
  undefined4 *local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b67d78;
  local_10 = ExceptionList;
  local_14 = 0;
  iVar12 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_stack_00000018 * 4);
  ppcStack_1b8 = (char **)param_2;
  local_24 = (uint *)DAT_01258a48;
  ppuStack_1bc = (uint **)0x8ab74e;
  ExceptionList = &local_10;
  local_4c = iVar12;
  ppcStack_1b8 = (char **)FUN_008a8f00();
  local_8 = 0;
  ppuStack_1bc = (uint **)0x8ab75d;
  iVar6 = FUN_004a2f70();
  iVar14 = DAT_0131be94;
  if (iVar6 != 0) {
    iVar14 = iVar6;
  }
  local_8 = 0xffffffff;
  if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
    ppuStack_1bc = (uint **)&UNK_008ab78d;
    FUN_00aae91b();
  }
  if (iVar14 != 0) {
    ppcStack_1b8 = (char **)0xf;
    ppuStack_1bc = (uint **)0xe2cb7c;
    local_b4 = (int *)0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    pppcStack_1c0 = (char ***)0x8ab7d6;
    FUN_00409350();
    local_8 = 1;
    ppcStack_1b8 = (char **)local_c8;
    ppuStack_1bc = (uint **)0x8ab7f1;
    piVar7 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
    local_8 = 0xffffffff;
    local_48 = piVar7;
    if (0xf < local_b4) {
      ppuStack_1bc = (uint **)local_c8[0];
                    /* WARNING: Subroutine does not return */
      pppcStack_1c0 = (char ***)&UNK_008ab812;
      FUN_00aae91b();
    }
    local_b4 = (int *)0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    ppuStack_1bc = (uint **)0x8ab834;
    (**(code **)(*piVar7 + 0x54))();
    ppuStack_1bc = (uint **)0x8ab83d;
    (**(code **)(*piVar7 + 0x5c))();
    piVar7 = *(int **)(iVar12 + 0x83c);
    while (piVar7 != (int *)0x0) {
      local_20 = (int *)piVar7[2];
      piVar7 = (int *)*piVar7;
      local_44 = piVar7;
      if (*(int *)(iVar14 + 0x5c) == 1) {
        ppuStack_1bc = (uint **)0x8ab8bf;
        cVar5 = (**(code **)(*piVar7 + 0x20))();
        if (cVar5 == '\0') {
          piVar7 = DAT_01258a40;
          if (DAT_01258a40 == (int *)0x0) {
            ppuStack_1bc = (uint **)0x1d8;
            pppcStack_1c0 = (char ***)0x8ab8d6;
            local_1c = (undefined4 *)FUN_00aae9af();
            local_8 = 3;
            if (local_1c == (undefined4 *)0x0) goto LAB_008ab8a3;
            ppuStack_1bc = (uint **)0x8ab8ee;
            DAT_01258a40 = (int *)FUN_009747a0();
            local_8 = 0xffffffff;
            piVar7 = DAT_01258a40;
          }
        }
        else {
          piVar7 = *(int **)(piVar7[0x16] + *(int *)(iVar14 + 0x50) * 4);
        }
      }
      else {
        piVar7 = DAT_01258a40;
        if (DAT_01258a40 == (int *)0x0) {
          ppuStack_1bc = (uint **)0x1d8;
          pppcStack_1c0 = (char ***)0x8ab87a;
          local_1c = (undefined4 *)FUN_00aae9af();
          local_8 = 2;
          if (local_1c == (undefined4 *)0x0) {
LAB_008ab8a3:
            local_8 = 0xffffffff;
            DAT_01258a40 = (int *)0x0;
            piVar7 = DAT_01258a40;
          }
          else {
            ppuStack_1bc = (uint **)0x8ab892;
            DAT_01258a40 = (int *)FUN_009747a0();
            local_8 = 0xffffffff;
            piVar7 = DAT_01258a40;
          }
        }
      }
      local_18 = piVar7;
      ppuStack_1bc = (uint **)0x28;
      pppcStack_1c0 = (char ***)0x8ab912;
      puVar8 = (undefined4 *)FUN_00aae9af();
      local_8 = 4;
      local_1c = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        ppuStack_1bc = (uint **)0x8;
        pppcStack_1c0 = (char ***)0xe2cb8c;
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
        pppcStack_1c4 = (char ***)0x8ab945;
        FUN_00409350();
        piVar7 = DAT_01258a80;
        local_8 = CONCAT31(local_8._1_3_,5);
        local_14 = local_14 | 1;
        ppuStack_1bc = (uint **)0x8ab965;
        ppuStack_1bc = (uint **)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *(undefined1 *)(puVar8 + 4) = 0;
        DAT_013f08e0 = DAT_013f08e0 + 1;
        *(undefined1 *)(puVar8 + 5) = 0;
        *(undefined1 *)(puVar8 + 6) = 0;
        puVar8[7] = &PTR_FUN_00e39158;
        local_8 = 9;
        *puVar8 = &PTR_FUN_00e392f0;
        puVar8[7] = &PTR_FUN_00e39320;
        *(undefined1 *)(puVar8 + 9) = 0;
        pppcStack_1c0 = (char ***)local_40;
        pppcStack_1c4 = (char ***)0x8ab9ad;
        uVar9 = (**(code **)(*piVar7 + 0x2c))();
        puVar8[8] = uVar9;
      }
      local_8 = 0xffffffff;
      if ((local_14 & 1) != 0) {
        local_14 = local_14 & 0xfffffffe;
        if (0xf < local_2c) {
          ppuStack_1bc = local_40[0];
                    /* WARNING: Subroutine does not return */
          pppcStack_1c0 = (char ***)&UNK_008ab9d4;
          FUN_00aae91b();
        }
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
      }
      ppuStack_1bc = (uint **)0x0;
      pppcStack_1c4 = (char ***)0x8ab9f0;
      pppcStack_1c0 = (char ***)puVar8;
      (**(code **)(*local_48 + 0x10))();
      piVar7 = (int *)puVar8[8];
      pppcStack_1c4 = (char ***)0xc;
      pppcStack_1c8 = (char ***)0xe18ef0;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
      uStack_1d0 = CONCAT44(0x8aba0f,(undefined4)uStack_1d0);
      FUN_00409350();
      local_8 = 0xb;
      pppcStack_1c4 = (char ***)local_40;
      pppcStack_1c8 = (char ***)0x8aba23;
      piVar10 = (int *)(**(code **)(*piVar7 + 0x44))();
      iVar12 = local_44[0x15];
      uStack_1dc = *(undefined4 *)(iVar12 + 0x30);
      local_1c = &pppuStack_1e0;
      pppuStack_1e0 = (undefined ***)CColor::vftable;
      uStack_1d8 = *(undefined8 *)(iVar12 + 0x34);
      uStack_1d0 = *(undefined8 *)(iVar12 + 0x3c);
      pppcStack_1c8 = (char ***)CONCAT31(pppcStack_1c8._1_3_,*(undefined1 *)(iVar12 + 0x44));
      pppcStack_1e4 = (char ***)0x8aba60;
      (**(code **)(*piVar10 + 0x68))();
      local_8 = 0xffffffff;
      if (0xf < local_2c) {
        pppcStack_1e4 = (char ***)local_40[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1e8 = (char ***)&UNK_008aba76;
        FUN_00aae91b();
      }
      pppcStack_1e4 = (char ***)0xc;
      pppcStack_1e8 = (char ***)0xe18ee0;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
      pppcStack_1ec = (char ***)0x8aba95;
      FUN_00409350();
      pppcStack_1e4 = (char ***)local_ac;
      pppcStack_1e8 = (char ***)local_44;
      local_8 = 0xc;
      pppcStack_1ec = (char ***)0x8abaac;
      ppuVar11 = (uint **)FUN_009790b0();
      local_8 = CONCAT31(local_8._1_3_,0xd);
      pppcStack_1e4 = (char ***)local_40;
      pppcStack_1e8 = (char ***)0x8ababf;
      local_24 = (uint *)(**(code **)(*piVar7 + 0x3c))();
      pppcStack_1e8 = (char ***)0xffffffff;
      pppcStack_1ec = (char ***)0x0;
      ppuStack_1f0 = ppuVar11;
      FUN_00408ed0();
      pppcStack_1e8 = (char ***)0x0;
      ppuStack_1f0 = (uint **)0x8abae1;
      pppcStack_1ec = (char ***)ppuVar11;
      FUN_00a5ecc0();
      if (0xf < local_98) {
        pppcStack_1e8 = (char ***)local_ac[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1ec = (char ***)&UNK_008abaf6;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = (uint **)((uint)local_ac[0] & 0xffffff00);
      if (0xf < local_2c) {
        pppcStack_1e8 = (char ***)local_40[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1ec = (char ***)&UNK_008abb25;
        FUN_00aae91b();
      }
      pppcStack_1e8 = (char ***)0xb;
      pppcStack_1ec = (char ***)0xe2cb98;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
      ppuStack_1f0 = (uint **)0x8abb44;
      FUN_00409350();
      local_8 = 0xe;
      pppcStack_1e8 = (char ***)local_ac;
      pppcStack_1ec = (char ***)0x8abb5c;
      uVar9 = (**(code **)(*local_18 + 0x18))();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      pppcStack_1ec = (char ***)local_40;
      ppuStack_1f0 = (uint **)0x8abb6f;
      local_24 = (uint *)(**(code **)(*piVar7 + 0x3c))();
      ppuStack_1f0 = (uint **)0xffffffff;
      FUN_00408ed0(uVar9,0);
      ppuStack_1f0 = (uint **)0x0;
      FUN_00a5ecc0(uVar9);
      if (0xf < local_98) {
        ppuStack_1f0 = local_ac[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = (uint **)((uint)local_ac[0] & 0xffffff00);
      if (0xf < local_2c) {
        ppuStack_1f0 = local_40[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ppuStack_1f0 = (uint **)0x0;
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d);
      local_8 = 0x10;
      ppuStack_1f0 = (uint **)0xc;
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = (uint *)((uint)local_90[0] & 0xffffff00);
      FUN_00409350("legend_value");
      local_8 = CONCAT31(local_8._1_3_,0x11);
      ppuStack_1f0 = local_90;
      (**(code **)(*piVar7 + 0x3c))();
      ppuStack_1bc = (uint **)0xffffffff;
      pppcStack_1c0 = (char ***)0x0;
      pppcStack_1c4 = (char ***)local_e4;
      pppcStack_1c8 = (char ***)0x8abc50;
      FUN_00408ed0();
      ppuStack_1bc = (uint **)0x0;
      pppcStack_1c0 = (char ***)local_e4;
      pppcStack_1c4 = (char ***)0x8abc63;
      FUN_00a5ecc0();
      if (0xf < local_7c) {
        ppuStack_1bc = (uint **)local_90[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1c0 = (char ***)&UNK_008abc75;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = (uint *)((uint)local_90[0] & 0xffffff00);
      if (0xf < local_d0) {
        ppuStack_1bc = (uint **)local_e4[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1c0 = (char ***)&UNK_008abca5;
        FUN_00aae91b();
      }
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      piVar7 = local_20;
    }
    ppuStack_1bc = (uint **)0x8abccd;
    local_20 = piVar7;
    (**(code **)(*local_48 + 0x6c))();
    iVar12 = local_4c;
  }
  ppcStack_1b8 = (char **)0x12;
  ppuStack_1bc = (uint **)0xe2cba4;
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = (uint *)((uint)local_90[0] & 0xffffff00);
  pppcStack_1c0 = (char ***)0x8abcf2;
  FUN_00409350();
  local_8 = 0x12;
  ppcStack_1b8 = (char **)local_90;
  ppuStack_1bc = (uint **)0x8abd0d;
  piVar7 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
  local_8 = 0xffffffff;
  local_44 = piVar7;
  if (0xf < local_7c) {
    ppuStack_1bc = (uint **)local_90[0];
                    /* WARNING: Subroutine does not return */
    pppcStack_1c0 = (char ***)&UNK_008abd2b;
    FUN_00aae91b();
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = (uint *)((uint)local_90[0] & 0xffffff00);
  ppuStack_1bc = (uint **)0x8abd47;
  (**(code **)(*piVar7 + 0x54))();
  ppuStack_1bc = (uint **)0x8abd50;
  (**(code **)(*piVar7 + 0x5c))();
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  ppuStack_1bc = (uint **)0x0;
  pppcStack_1c0 = (char ***)0x0;
  pppcStack_1c4 = (char ***)0x0;
  pppcStack_1c8 = (char ***)&local_d8;
  local_24 = (uint *)(iVar12 + 0x9d8);
  uStack_1d0 = CONCAT44(local_24,iVar12);
  local_8 = 0x13;
  uStack_1d8 = CONCAT44(0x8abd83,(undefined4)uStack_1d8);
  FUN_0051d140();
  ppuStack_1bc = (uint **)local_148;
  pppcStack_1c0 = (char ***)0x8abd98;
  FUN_004be4f0();
  iVar6 = 0;
  if (0 < *(int *)(iVar12 + 0x844)) {
    do {
      uVar2 = *(uint *)(local_d8 + iVar6 * 8);
      iVar3 = *(int *)(local_d8 + 4 + iVar6 * 8);
      puVar1 = (uint *)(local_140 + 8 + iVar6 * 8);
      uVar13 = *puVar1;
      *puVar1 = *puVar1 + uVar2;
      piVar7 = (int *)(local_140 + iVar6 * 8 + 0xc);
      *piVar7 = *piVar7 + iVar3 + (uint)CARRY4(uVar13,uVar2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar12 + 0x844));
  }
  ppuStack_1bc = (uint **)local_148;
  pppcStack_1c0 = (char ***)0x8abdd5;
  FUN_004be780();
  local_bc = 0;
  local_b8 = 0;
  local_b4 = (int *)0x0;
  local_8._0_1_ = 0x15;
  ppuStack_1bc = *(uint ***)(iVar12 + 0x844);
  pppcStack_1c0 = (char ***)0x8abdfd;
  FUN_0047b6f0();
  local_18 = *(int **)(iVar12 + 0x83c);
  if (local_18 != (undefined4 *)0x0) {
    local_48 = (int *)&DAT_00000008;
    uVar4 = (undefined1)local_8;
    do {
      local_8._0_1_ = uVar4;
      puVar8 = (undefined4 *)local_18[2];
      local_20 = (int *)*local_18;
      local_74._0_4_ = *(uint ***)(local_140 + (int)local_48);
      local_74._4_4_ = *(int *)(local_140 + 4 + (int)local_48);
      local_48 = local_48 + 2;
      local_18 = puVar8;
      if ((-1 < local_74._4_4_) && ((0 < local_74._4_4_ || ((uint **)local_74 != (uint **)0x0)))) {
        local_120 = (uint)(uint **)local_74 >> 0xf | local_74._4_4_ << 0x11;
        iVar12 = local_20[0x15];
        local_114 = *(undefined8 *)(iVar12 + 0x34);
        local_104 = *(undefined1 *)(iVar12 + 0x44);
        local_118 = *(undefined4 *)(iVar12 + 0x30);
        local_10c = *(undefined8 *)(iVar12 + 0x3c);
        local_11c = CColor::vftable;
        ppuStack_1bc = (uint **)0x8abea9;
        FUN_0054a870();
      }
      ppuStack_1bc = (uint **)0x28;
      pppcStack_1c0 = (char ***)0x8abeb0;
      puVar8 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0x16;
      local_1c = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        ppuStack_1bc = (uint **)0x8;
        pppcStack_1c0 = (char ***)0xe2cb8c;
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
        pppcStack_1c4 = (char ***)0x8abee0;
        FUN_00409350();
        piVar7 = DAT_01258a80;
        local_8 = CONCAT31(local_8._1_3_,0x17);
        local_14 = local_14 | 2;
        ppuStack_1bc = (uint **)0x8abf00;
        ppuStack_1bc = (uint **)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *(undefined1 *)(puVar8 + 4) = 0;
        DAT_013f08e0 = DAT_013f08e0 + 1;
        *(undefined1 *)(puVar8 + 5) = 0;
        *(undefined1 *)(puVar8 + 6) = 0;
        puVar8[7] = &PTR_FUN_00e39158;
        local_8 = 0x1b;
        *puVar8 = &PTR_FUN_00e392f0;
        puVar8[7] = &PTR_FUN_00e39320;
        *(undefined1 *)(puVar8 + 9) = 0;
        pppcStack_1c0 = (char ***)local_40;
        pppcStack_1c4 = (char ***)0x8abf48;
        uVar9 = (**(code **)(*piVar7 + 0x2c))();
        puVar8[8] = uVar9;
      }
      local_8 = 0x15;
      if ((local_14 & 2) != 0) {
        local_14 = local_14 & 0xfffffffd;
        if (0xf < local_2c) {
          ppuStack_1bc = local_40[0];
                    /* WARNING: Subroutine does not return */
          pppcStack_1c0 = (char ***)&UNK_008abf6f;
          FUN_00aae91b();
        }
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
      }
      ppuStack_1bc = (uint **)0x0;
      pppcStack_1c4 = (char ***)0x8abf8b;
      pppcStack_1c0 = (char ***)puVar8;
      (**(code **)(*local_44 + 0x10))();
      piVar7 = (int *)puVar8[8];
      pppcStack_1c4 = (char ***)0xc;
      pppcStack_1c8 = (char ***)0xe18ef0;
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = (char **)((uint)local_68[0] & 0xffffff00);
      uStack_1d0 = CONCAT44(0x8abfaa,(undefined4)uStack_1d0);
      FUN_00409350();
      local_8._0_1_ = 0x1d;
      pppcStack_1c4 = local_68;
      pppcStack_1c8 = (char ***)0x8abfbb;
      piVar10 = (int *)(**(code **)(*piVar7 + 0x44))();
      iVar12 = local_20[0x15];
      uStack_1dc = *(undefined4 *)(iVar12 + 0x30);
      local_1c = &pppuStack_1e0;
      pppuStack_1e0 = (undefined ***)CColor::vftable;
      uStack_1d8 = *(undefined8 *)(iVar12 + 0x34);
      uStack_1d0 = *(undefined8 *)(iVar12 + 0x3c);
      pppcStack_1c8 = (char ***)CONCAT31(pppcStack_1c8._1_3_,*(undefined1 *)(iVar12 + 0x44));
      pppcStack_1e4 = (char ***)0x8abff8;
      (**(code **)(*piVar10 + 0x68))();
      local_8._0_1_ = 0x15;
      if (0xf < local_54) {
        pppcStack_1e4 = (char ***)local_68[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1e8 = (char ***)&UNK_008ac00b;
        FUN_00aae91b();
      }
      pppcStack_1e4 = (char ***)0xc;
      pppcStack_1e8 = (char ***)0xe18ee0;
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = (char **)((uint)local_68[0] & 0xffffff00);
      pppcStack_1ec = (char ***)0x8ac02a;
      FUN_00409350();
      pppcStack_1e4 = (char ***)local_ac;
      pppcStack_1e8 = (char ***)local_20;
      local_8._0_1_ = 0x1e;
      pppcStack_1ec = (char ***)0x8ac03e;
      ppuVar11 = (uint **)FUN_009790b0();
      local_8._0_1_ = 0x1f;
      pppcStack_1e4 = local_68;
      pppcStack_1e8 = (char ***)0x8ac051;
      local_4c = (**(code **)(*piVar7 + 0x3c))();
      pppcStack_1e8 = (char ***)0xffffffff;
      pppcStack_1ec = (char ***)0x0;
      ppuStack_1f0 = ppuVar11;
      FUN_00408ed0();
      pppcStack_1e8 = (char ***)0x0;
      ppuStack_1f0 = (uint **)0x8ac073;
      pppcStack_1ec = (char ***)ppuVar11;
      FUN_00a5ecc0();
      if (0xf < local_98) {
        pppcStack_1e8 = (char ***)local_ac[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1ec = (char ***)&UNK_008ac088;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x15;
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = (uint **)((uint)local_ac[0] & 0xffffff00);
      if (0xf < local_54) {
        pppcStack_1e8 = (char ***)local_68[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1ec = (char ***)&UNK_008ac0b4;
        FUN_00aae91b();
      }
      pppcStack_1e8 = (char ***)0x0;
      pppcStack_1ec = (char ***)&DAT_00ded94d;
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = (char **)((uint)local_68[0] & 0xffffff00);
      ppuStack_1f0 = (uint **)0x8ac0d3;
      FUN_00409350();
      local_8._0_1_ = 0x20;
      pppcStack_1e8 = (char ***)0xb;
      pppcStack_1ec = (char ***)0xe2cb98;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
      ppuStack_1f0 = (uint **)0x8ac0ef;
      FUN_00409350();
      local_8._0_1_ = 0x21;
      pppcStack_1e8 = (char ***)local_40;
      pppcStack_1ec = (char ***)0x8ac100;
      (**(code **)(*piVar7 + 0x3c))();
      pppcStack_1ec = (char ***)0xffffffff;
      ppuStack_1f0 = (uint **)0x0;
      FUN_00408ed0(local_68);
      pppcStack_1ec = (char ***)0x0;
      ppuStack_1f0 = (uint **)local_68;
      FUN_00a5ecc0();
      if (0xf < local_2c) {
        pppcStack_1ec = (char ***)local_40[0];
                    /* WARNING: Subroutine does not return */
        ppuStack_1f0 = (uint **)&UNK_008ac133;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x15;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
      if (0xf < local_54) {
        pppcStack_1ec = (char ***)local_68[0];
                    /* WARNING: Subroutine does not return */
        ppuStack_1f0 = (uint **)&UNK_008ac156;
        FUN_00aae91b();
      }
      pppcStack_1ec = (char ***)0x1;
      ppuStack_1f0 = (uint **)&DAT_00df9644;
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = (char **)((uint)local_68[0] & 0xffffff00);
      FUN_00409350();
      local_8._0_1_ = 0x22;
      pppcStack_1ec = (char ***)0xc;
      ppuStack_1f0 = (uint **)0xe19088;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
      FUN_00409350();
      local_8._0_1_ = 0x23;
      local_1c = &ppuStack_1f0;
      ppuStack_1f0 = (uint **)local_74;
      pppcStack_1ec = (char ***)local_74._4_4_;
      FUN_00988bb0(local_100,0);
      pppcStack_1ec = local_68;
      local_8._0_1_ = 0x24;
      ppuStack_1f0 = (uint **)0x8ac1cb;
      uVar9 = FUN_00988f20();
      local_8._0_1_ = 0x25;
      pppcStack_1ec = (char ***)local_40;
      ppuStack_1f0 = (uint **)0x8ac1de;
      (**(code **)(*piVar7 + 0x3c))();
      ppuStack_1bc = (uint **)0xffffffff;
      pppcStack_1c0 = (char ***)0x0;
      pppcStack_1c8 = (char ***)0x8ac1ef;
      pppcStack_1c4 = (char ***)uVar9;
      FUN_00408ed0();
      ppuStack_1bc = (uint **)0x0;
      pppcStack_1c4 = (char ***)0x8ac1fc;
      pppcStack_1c0 = (char ***)uVar9;
      FUN_00a5ecc0();
      if (0xf < local_98) {
        ppuStack_1bc = local_ac[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1c0 = (char ***)&UNK_008ac211;
        FUN_00aae91b();
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = (uint **)((uint)local_ac[0] & 0xffffff00);
      if (0xf < local_ec) {
        ppuStack_1bc = (uint **)local_100[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1c0 = (char ***)&UNK_008ac244;
        FUN_00aae91b();
      }
      local_ec = 0xf;
      local_f0 = 0;
      local_100[0] = local_100[0] & 0xffffff00;
      if (0xf < local_2c) {
        ppuStack_1bc = local_40[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1c0 = (char ***)&UNK_008ac267;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x15;
      uVar4 = (undefined1)local_8;
      local_8._0_1_ = 0x15;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
      if (0xf < local_54) {
        ppuStack_1bc = (uint **)local_68[0];
                    /* WARNING: Subroutine does not return */
        pppcStack_1c0 = (char ***)&UNK_008ac285;
        FUN_00aae91b();
      }
    } while (local_18 != (undefined4 *)0x0);
  }
  ppuStack_1bc = (uint **)0x10;
  pppcStack_1c0 = (char ***)0xe2cbb8;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = (char **)((uint)local_68[0] & 0xffffff00);
  pppcStack_1c4 = (char ***)0x8ac2ad;
  FUN_00409350();
  local_8._0_1_ = 0x26;
  ppuStack_1bc = (uint **)local_68;
  pppcStack_1c0 = (char ***)0x8ac2c2;
  iVar12 = (**(code **)(**(int **)(param_1 + 4) + 0x44))();
  pppcStack_1c8 = *(char ****)(iVar12 + 0x94);
  pppcStack_1c0 = (char ***)0x1;
  pppcStack_1c4 = (char ***)&local_bc;
  uStack_1d0 = CONCAT44(0x8ac2d7,(undefined4)uStack_1d0);
  FUN_009e11f0();
  local_8 = CONCAT31(local_8._1_3_,0x15);
  if (0xf < local_54) {
    pppcStack_1c0 = (char ***)local_68[0];
                    /* WARNING: Subroutine does not return */
    pppcStack_1c4 = (char ***)&UNK_008ac2ea;
    FUN_00aae91b();
  }
  pppcStack_1c0 = (char ***)0x8ac2f7;
  (**(code **)(*local_44 + 0x6c))();
  if (local_bc != 0) {
    pppcStack_1c0 = (char ***)local_bc;
                    /* WARNING: Subroutine does not return */
    pppcStack_1c4 = (char ***)&UNK_008ac307;
    FUN_00aae91b();
  }
  if (local_130 != 0) {
    pppcStack_1c0 = (char ***)local_130;
                    /* WARNING: Subroutine does not return */
    pppcStack_1c4 = (char ***)&UNK_008ac31a;
    FUN_00aae91b();
  }
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  if (local_140 != 0) {
    pppcStack_1c0 = (char ***)local_140;
                    /* WARNING: Subroutine does not return */
    pppcStack_1c4 = (char ***)&UNK_008ac33f;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  if (local_d8 != 0) {
    pppcStack_1c0 = (char ***)local_d8;
                    /* WARNING: Subroutine does not return */
    pppcStack_1c4 = (char ***)&UNK_008ac36b;
    FUN_00aae91b();
  }
  if (iVar14 != 0) {
    pppcStack_1c0 = (char ***)local_170;
    local_18 = (int *)(*(int *)(iVar14 + 0xc) - *(int *)(iVar14 + 8) >> 2);
    pppcStack_1c4 = (char ***)0x8ac391;
    FUN_004be4f0();
    local_8 = 0x27;
    piVar7 = (int *)*local_24;
    iVar12 = DAT_0131bb34;
    while (((int *)*local_24 <= piVar7 && (piVar7 < (int *)local_24[1]))) {
      local_1c = *(undefined4 **)(*(int *)(DAT_012588e8 + 0xacc) + *piVar7 * 4);
      piVar7 = piVar7 + 1;
      local_b4 = piVar7;
      if (iVar12 == 0) {
        pppcStack_1c0 = (char ***)0x188;
        pppcStack_1c4 = (char ***)0x8ac3e1;
        local_4c = FUN_00aae9af();
        local_8._0_1_ = 0x28;
        if (local_4c == 0) {
          iVar12 = 0;
        }
        else {
          pppcStack_1c0 = (char ***)0x8ac3f6;
          iVar12 = FUN_0041a160();
        }
        local_8 = CONCAT31(local_8._1_3_,0x29);
        local_48 = (int *)0x0;
        if ((iVar12 != DAT_0131bb34) && (local_4c = DAT_0131bb34, DAT_0131bb34 != 0)) {
          pppcStack_1c0 = (char ***)DAT_0131bb34;
          pppcStack_1c4 = (char ***)0x8ac419;
          FUN_0096dd80();
          pppcStack_1c0 = (char ***)local_4c;
                    /* WARNING: Subroutine does not return */
          pppcStack_1c4 = (char ***)&UNK_008ac422;
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,0x27);
        DAT_0131bb34 = iVar12;
      }
      iVar6 = *(int *)(iVar12 + 0x10) - *(int *)(iVar12 + 0xc) >> 2;
      if (0 < iVar6) {
        local_44 = (int *)0x0;
        local_48 = (int *)iVar6;
        do {
          pppcStack_1c4 = *(char ****)((int)local_44 + *(int *)((int)local_1c + 0x194));
          iVar12 = DAT_0131bb34;
          piVar7 = local_b4;
          while (DAT_0131bb34 = iVar12, local_b4 = piVar7, pppcStack_1c4 != (char ***)0x0) {
            local_20 = *(int **)((int)pppcStack_1c4 + 0x27c);
            pppcStack_1c0 = (char ***)&local_74;
            pppcStack_1c8 = (char ***)0x8ac489;
            local_4c = (int)pppcStack_1c4;
            FUN_00963d10();
            pppcStack_1c4 = (char ***)local_20;
            iVar12 = DAT_0131bb34;
            piVar7 = local_b4;
            if (0 < local_74) {
              pppcStack_1c8 = (char ***)((ulonglong)(local_74 << 0xf) >> 0x20);
              pppcStack_1c0 = (char ***)0x0;
              pppcStack_1c4 = (char ***)0xc3500000;
              uStack_1d0 = CONCAT44((int)(local_74 << 0xf),0x8ac4ad);
              lVar15 = __alldiv();
              uVar9 = (undefined4)lVar15;
              iVar6 = 0;
              pppcStack_1c4 = (char ***)local_20;
              iVar12 = DAT_0131bb34;
              piVar7 = local_b4;
              local_74 = lVar15;
              if (0 < (int)local_18) {
                do {
                  local_74._4_4_ = (int)((ulonglong)lVar15 >> 0x20);
                  pppcStack_1c0 = (char ***)local_74._4_4_;
                  iVar12 = *(int *)(*(int *)(*(int *)(iVar14 + 8) + iVar6 * 4) + 0x50);
                  pppcStack_1c8 = *(char ****)(*(int *)(local_4c + 0xa4) + 4 + iVar12 * 8);
                  uStack_1d0 = CONCAT44(*(undefined4 *)(*(int *)(local_4c + 0xa4) + iVar12 * 8),
                                        0x8ac4e8);
                  pppcStack_1c4 = (char ***)uVar9;
                  local_74 = lVar15;
                  uVar16 = __allmul();
                  pppcStack_1c8 = (char ***)((ulonglong)uVar16 >> 0x20);
                  pppcStack_1c0 = (char ***)0x0;
                  pppcStack_1c4 = (char ***)0x320000;
                  uStack_1d0 = CONCAT44((uint)uVar16 & 0xffff8000,0x8ac4fa);
                  uVar16 = __alldiv();
                  puVar1 = (uint *)(local_168 + iVar6 * 8);
                  uVar13 = *puVar1;
                  *puVar1 = *puVar1 + (uint)uVar16;
                  piVar7 = (int *)(local_168 + iVar6 * 8 + 4);
                  *piVar7 = *piVar7 + (int)((ulonglong)uVar16 >> 0x20) +
                            (uint)CARRY4(uVar13,(uint)uVar16);
                  iVar6 = iVar6 + 1;
                  lVar15 = local_74;
                  pppcStack_1c4 = (char ***)local_20;
                  iVar12 = DAT_0131bb34;
                  piVar7 = local_b4;
                } while (iVar6 < (int)local_18);
              }
            }
          }
          local_44 = local_44 + 4;
          local_48 = (int *)((int)local_48 + -1);
        } while (local_48 != (int *)0x0);
        local_48 = (int *)0x0;
        local_20 = (int *)0x0;
      }
    }
    pppcStack_1c0 = (char ***)local_170;
    pppcStack_1c4 = (char ***)0x8ac53c;
    FUN_004be780();
    pppcStack_1c0 = (char ***)0xe;
    pppcStack_1c4 = (char ***)0xe2cbcc;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (uint *)((uint)local_90[0] & 0xffffff00);
    pppcStack_1c8 = (char ***)0x8ac55f;
    FUN_00409350();
    local_8._0_1_ = 0x2a;
    pppcStack_1c0 = (char ***)local_90;
    pppcStack_1c4 = (char ***)0x8ac577;
    piVar7 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
    local_8._0_1_ = 0x27;
    local_24 = (uint *)piVar7;
    if (0xf < local_7c) {
      pppcStack_1c4 = (char ***)local_90[0];
                    /* WARNING: Subroutine does not return */
      pppcStack_1c8 = (char ***)&UNK_008ac592;
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (uint *)((uint)local_90[0] & 0xffffff00);
    pppcStack_1c4 = (char ***)0x8ac5aa;
    (**(code **)(*piVar7 + 0x54))();
    pppcStack_1c4 = (char ***)0x8ac5b3;
    (**(code **)(*piVar7 + 0x5c))();
    param_1 = 0;
    if (0 < (int)local_18) {
      do {
        pppcStack_1c4 = (char ***)0x28;
        pppcStack_1c8 = (char ***)0x8ac5c7;
        puVar8 = (undefined4 *)FUN_00aae9af();
        local_8._0_1_ = 0x2b;
        local_1c = puVar8;
        if (puVar8 == (undefined4 *)0x0) {
          pppcStack_1c8 = (char ***)0x0;
        }
        else {
          pppcStack_1c4 = (char ***)0x16;
          pppcStack_1c8 = (char ***)0xe2cbdc;
          local_2c = 0xf;
          local_30 = 0;
          local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
          uStack_1d0 = CONCAT44(0x8ac5f7,(undefined4)uStack_1d0);
          FUN_00409350();
          piVar7 = DAT_01258a80;
          local_8 = CONCAT31(local_8._1_3_,0x2c);
          local_14 = local_14 | 4;
          pppcStack_1c4 = (char ***)0x8ac618;
          pppcStack_1c4 = (char ***)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          *(undefined1 *)(puVar8 + 4) = 0;
          DAT_013f08e0 = DAT_013f08e0 + 1;
          *(undefined1 *)(puVar8 + 5) = 0;
          *(undefined1 *)(puVar8 + 6) = 0;
          puVar8[7] = &PTR_FUN_00e39158;
          local_8 = 0x30;
          *puVar8 = &PTR_FUN_00e392f0;
          puVar8[7] = &PTR_FUN_00e39320;
          *(undefined1 *)(puVar8 + 9) = 0;
          pppcStack_1c8 = (char ***)local_40;
          uStack_1d0 = CONCAT44(0x8ac660,(undefined4)uStack_1d0);
          uVar9 = (**(code **)(*piVar7 + 0x2c))();
          puVar8[8] = uVar9;
          pppcStack_1c8 = (char ***)puVar8;
        }
        local_8 = 0x27;
        if ((local_14 & 4) != 0) {
          local_14 = local_14 & 0xfffffffb;
          if (0xf < local_2c) {
            pppcStack_1c4 = (char ***)local_40[0];
                    /* WARNING: Subroutine does not return */
            pppcStack_1c8 = (char ***)&UNK_008ac687;
            FUN_00aae91b();
          }
          local_2c = 0xf;
          local_30 = 0;
          local_40[0] = (uint **)((uint)local_40[0] & 0xffffff00);
        }
        piVar7 = (int *)pppcStack_1c8[8];
        pppcStack_1c4 = (char ***)0x0;
        uStack_1d0 = CONCAT44(0x8ac6a6,(undefined4)uStack_1d0);
        (**(code **)(*local_24 + 0x10))();
        uStack_1d0 = 0xa00e0d9a0;
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = (char **)((uint)local_68[0] & 0xffffff00);
        uStack_1d8 = CONCAT44(0x8ac6c2,(undefined4)uStack_1d8);
        FUN_00409350();
        local_8._0_1_ = 0x32;
        uStack_1d0._4_4_ = local_ac;
        uStack_1d0._0_4_ = 0x8ac6e0;
        uVar13 = (**(code **)(**(int **)(*(int *)(iVar14 + 8) + param_1 * 4) + 0x18))();
        local_8._0_1_ = 0x33;
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,local_68);
        uStack_1d8 = CONCAT44(0x8ac6f3,(undefined4)uStack_1d8);
        local_1c = (undefined4 *)(**(code **)(*piVar7 + 0x3c))();
        uStack_1d8 = 0xffffffff00000000;
        pppuStack_1e0 = (undefined ***)0x8ac705;
        uStack_1dc = uVar13;
        FUN_00408ed0();
        uStack_1d8 = (ulonglong)uVar13;
        uStack_1dc = 0x8ac715;
        FUN_00a5ecc0();
        if (0xf < local_98) {
          uStack_1d8 = CONCAT44(local_ac[0],&UNK_008ac72a);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x27;
        local_98 = 0xf;
        local_9c = 0;
        local_ac[0] = (uint **)((uint)local_ac[0] & 0xffffff00);
        if (0xf < local_54) {
          uStack_1d8 = CONCAT44(local_68[0],&UNK_008ac756);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1d8 = 0x100df9644;
        local_ec = 0xf;
        local_f0 = 0;
        local_100[0] = local_100[0] & 0xffffff00;
        uStack_1dc = 0x8ac782;
        FUN_00409350();
        local_8._0_1_ = 0x34;
        uStack_1d8 = 0xb00e0e1b4;
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = (char **)((uint)local_68[0] & 0xffffff00);
        uStack_1dc = 0x8ac79e;
        FUN_00409350();
        local_8._0_1_ = 0x35;
        local_1c = (undefined4 *)&uStack_1d8;
        uStack_1d8 = *(undefined8 *)(local_168 + param_1 * 8);
        uStack_1dc = 2;
        pppuStack_1e0 = &local_11c;
        pppcStack_1e4 = (char ***)0x8ac7ce;
        FUN_00988bb0();
        local_8._0_1_ = 0x36;
        uStack_1d8 = CONCAT44(local_100,0x8ac7e6);
        uVar9 = FUN_00988f20();
        local_8._0_1_ = 0x37;
        uStack_1d8 = CONCAT44(local_68,0x8ac7f9);
        (**(code **)(*piVar7 + 0x3c))();
        pppcStack_1c4 = (char ***)0xffffffff;
        pppcStack_1c8 = (char ***)0x0;
        uStack_1d0 = CONCAT44(uVar9,0x8ac80a);
        FUN_00408ed0();
        pppcStack_1c4 = (char ***)0x0;
        uStack_1d0 = CONCAT44(0x8ac817,(undefined4)uStack_1d0);
        pppcStack_1c8 = (char ***)uVar9;
        FUN_00a5ecc0();
        if (0xf < local_178) {
          pppcStack_1c4 = (char ***)local_18c;
                    /* WARNING: Subroutine does not return */
          pppcStack_1c8 = (char ***)&UNK_008ac82c;
          FUN_00aae91b();
        }
        local_178 = 0xf;
        local_18c = local_18c & 0xffffff00;
        if (0xf < local_10c._4_4_) {
          pppcStack_1c4 = (char ***)local_11c;
                    /* WARNING: Subroutine does not return */
          pppcStack_1c8 = (char ***)&UNK_008ac85f;
          FUN_00aae91b();
        }
        local_10c = 0xf00000000;
        local_11c = (undefined **)((uint)local_11c & 0xffffff00);
        if (0xf < local_54) {
          pppcStack_1c4 = (char ***)local_68[0];
                    /* WARNING: Subroutine does not return */
          pppcStack_1c8 = (char ***)&UNK_008ac882;
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x27;
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = (char **)((uint)local_68[0] & 0xffffff00);
        if (0xf < local_ec) {
          pppcStack_1c4 = (char ***)local_100[0];
                    /* WARNING: Subroutine does not return */
          pppcStack_1c8 = (char ***)&UNK_008ac8a6;
          FUN_00aae91b();
        }
        param_1 = param_1 + 1;
      } while (param_1 < (int)local_18);
    }
    pppcStack_1c4 = (char ***)0x8ac8c3;
    (**(code **)(*local_24 + 0x6c))();
    if (local_158 != 0) {
      pppcStack_1c4 = (char ***)local_158;
                    /* WARNING: Subroutine does not return */
      pppcStack_1c8 = (char ***)&UNK_008ac8d3;
      FUN_00aae91b();
    }
    local_158 = 0;
    local_154 = 0;
    local_150 = 0;
    if (local_168 != 0) {
      pppcStack_1c4 = (char ***)local_168;
                    /* WARNING: Subroutine does not return */
      pppcStack_1c8 = (char ***)&UNK_008ac8f8;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}

