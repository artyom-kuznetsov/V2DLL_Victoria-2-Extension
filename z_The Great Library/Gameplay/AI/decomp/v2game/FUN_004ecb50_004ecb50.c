// FUN_004ecb50 @ 004ecb50 body=[[004ecb50, 004ed0ae] [004ed0b2, 004ed0d3] [004ed0d7, 004ed0f1] [004ed0f5, 004ed203] [004ed207, 004ed228] [004ed22c, 004ed333] [004ed337, 004ed358] [004ed35c, 004ed430] [004ed434, 004ed44a] [004ed44e, 004ed527] [004ed530, 004ed5cd] [004ed5d1, 004ed5e3]]


/* WARNING: Removing unreachable block (ram,0x004ed5c8) */
/* WARNING: Removing unreachable block (ram,0x004ecc3a) */
/* WARNING: Removing unreachable block (ram,0x004ecc40) */
/* WARNING: Removing unreachable block (ram,0x004ecc4e) */
/* WARNING: Removing unreachable block (ram,0x004ecc45) */
/* WARNING: Removing unreachable block (ram,0x004ecc4c) */

void FUN_004ecb50(uint *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined1 **ppuVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_178 [104];
  undefined4 uStack_110;
  uint *puStack_10c;
  undefined4 *puStack_108;
  uint *puStack_104;
  uint *puStack_100;
  undefined1 **ppuStack_fc;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b4 [16];
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  int local_60;
  int *local_5c;
  undefined4 local_58;
  int local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00bb80ed;
  local_10 = ExceptionList;
  piVar12 = (int *)*param_1;
  if ((param_1[1] - (int)piVar12 & 0xfffffffc) != 0) {
    local_5c = DAT_012588e8;
    local_20 = 0x2d2d2d;
    local_1c = 0;
    local_8 = 0;
    local_60 = DAT_012588e8[0x2c3];
    ppuStack_fc = *(undefined1 ***)(DAT_012587e4[1] + param_5 * 4);
    puStack_100 = (uint *)0x4ecbd7;
    ExceptionList = &local_10;
    local_24 = FUN_0050e710();
    local_15 = '\0';
    while ((piVar4 = DAT_012587e4, (int *)*param_1 <= piVar12 && (piVar12 < (int *)param_1[1]))) {
      iVar8 = *(int *)(local_5c[0x2b3] + *piVar12 * 4);
      piVar12 = piVar12 + 1;
      if ((local_1c == 0) && (*(int *)(iVar8 + 300) != 0)) {
        local_20 = *(undefined4 *)(iVar8 + 0x128);
        local_1c = *(int *)(iVar8 + 300);
      }
      if (*(int *)(iVar8 + 300) != 0) {
        *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + param_5 * 4) + 0xbe8) +
                         *(int *)(iVar8 + 300) * 4) + 0x68) = local_60 + -0x18;
        local_2c = *(undefined4 *)(iVar8 + 0x128);
        *(int *)(*(int *)(*(int *)(*(int *)(piVar4[1] + *(int *)(iVar8 + 300) * 4) + 0xbe8) +
                         param_5 * 4) + 0x68) = local_60 + -0x18;
        ppuStack_fc = (undefined1 **)0x4eccb5;
        FUN_004d61d0();
      }
      if ((((*(int *)(iVar8 + 0x134) != 0) && (*(char *)(iVar8 + 0x130) == 'R')) &&
          (*(char *)(iVar8 + 0x131) == 'E')) && (*(char *)(iVar8 + 0x132) == 'B')) {
        puStack_100 = (uint *)0x4ecce9;
        ppuStack_fc = (undefined1 **)iVar8;
        iVar6 = FUN_0068bb30();
        if (((iVar6 != 0) &&
            (local_2c = *(undefined4 *)(iVar6 + 0x44), *(int *)(iVar6 + 0x48) == param_5)) &&
           (param_2 != (undefined1 *)iVar6)) {
          ppuStack_fc = (undefined1 **)0x0;
          local_58 = 0x2d2d2d;
          puStack_100 = (uint *)0x2d2d2d;
          puStack_104 = (uint *)param_5;
          puStack_108 = (undefined4 *)param_4;
          uStack_110 = 0x4ecd1a;
          puStack_10c = (uint *)iVar6;
          FUN_004e5dd0();
        }
      }
      iVar6 = *(int *)(iVar8 + 0x14c);
      iVar7 = *(int *)(iVar8 + 0x148);
      if (iVar7 != iVar6) {
        do {
          if (*(int *)(iVar7 + 4) == param_5) break;
          iVar7 = iVar7 + 8;
        } while (iVar7 != iVar6);
        if ((iVar7 != iVar6) && (0 < *(int *)(iVar8 + 400))) {
          *(undefined4 *)(iVar8 + 400) = 0;
        }
      }
      piVar4 = DAT_012588e8;
      if ((local_24 == *(int *)(iVar8 + 0x58)) &&
         (iVar6 = *(int *)(DAT_012587e4[1] + param_5 * 4), *(int *)(iVar6 + 0xbe4) != local_24)) {
        *(int *)(iVar6 + 0xbe4) = *(int *)(iVar8 + 0x58);
        ppuStack_fc = (undefined1 **)0x4ecd8b;
        iVar8 = (**(code **)(*piVar4 + 0x18))();
        if (iVar8 <= *(int *)(iVar6 + 0xbe4)) {
          *(undefined4 *)(iVar6 + 0xbe4) = 0;
        }
        local_15 = '\x01';
      }
    }
    local_24 = *(int *)(DAT_012587e4[1] + local_1c * 4);
    iVar8 = *(int *)(DAT_012587e4[1] + param_5 * 4);
    if ((local_1c != 0) && (*(char *)(local_24 + 0x12d0) == '\0')) {
      *(undefined1 *)(iVar8 + 0x12d0) = 0;
    }
    if ((*(char *)(iVar8 + 0x12d0) != '\0') && (local_1c != 0)) {
      iVar6 = 0;
      while( true ) {
        if (DAT_0125eadc == (int *)0x0) {
          ppuStack_fc = (undefined1 **)0x9c;
          puStack_100 = (uint *)0x4ecdf7;
          ppuStack_fc = (undefined1 **)FUN_00aae9af();
          local_8._0_1_ = 1;
          local_54 = (int)ppuStack_fc;
          if (ppuStack_fc == (undefined1 **)0x0) {
            uVar9 = 0;
          }
          else {
            puStack_100 = (uint *)0x4ece0b;
            uVar9 = FUN_00576fe0();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          puStack_100 = (uint *)0x4ece18;
          ppuStack_fc = (undefined1 **)uVar9;
          FUN_0057ab10();
        }
        if (DAT_0125eadc[1] - *DAT_0125eadc >> 2 <= iVar6) break;
        iVar7 = *(int *)(*DAT_0125eadc + iVar6 * 4);
        local_54 = *(int *)(*(int *)(local_24 + 0xbcc) + 0x2b8);
        iVar3 = *(int *)(iVar7 + 0x2e4) * 4;
        if (*(int *)(local_54 + iVar3) !=
            *(int *)(iVar3 + *(int *)(*(int *)(iVar8 + 0xbcc) + 0x2b8))) {
          iVar7 = *(int *)(iVar7 + 0x2e4);
          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0xbcc) + 0x2b8) + iVar7 * 4) =
               *(undefined4 *)(local_54 + iVar7 * 4);
        }
        iVar6 = iVar6 + 1;
      }
    }
    ppuStack_fc = *(undefined1 ***)(iVar8 + 0xbcc);
    puStack_100 = (uint *)0x4ece8e;
    FUN_00568c80();
    ppuStack_fc = (undefined1 **)0x1;
    puStack_100 = (uint *)0x0;
    puStack_104 = (uint *)0x4ece98;
    FUN_00501e10();
    puVar1 = *(undefined4 **)(iVar8 + 0x508);
    while (puVar1 != (undefined4 *)0x0) {
      puStack_100 = (uint *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      ppuStack_fc = (undefined1 **)0x1;
      puStack_108 = (undefined4 *)0x4eceb0;
      puStack_104 = (uint *)iVar8;
      FUN_00502090();
    }
    ppuStack_fc = (undefined1 **)param_3;
    puStack_100 = (uint *)0x1;
    puStack_104 = (uint *)&local_60;
    puStack_108 = &param_4;
    puStack_10c = param_1;
    uStack_110 = 0x4ececb;
    FUN_004b5a90();
    if (local_15 == '\0') {
      ppuStack_fc = *(undefined1 ***)(DAT_012587e4[1] + param_5 * 4);
      puStack_100 = (uint *)0x4ecee8;
      FUN_0050e540();
    }
    ppuStack_fc = (undefined1 **)0x4ecf19;
    FUN_004d2260();
    uVar2 = *(uint *)(iVar8 + 0xe78);
    *(uint *)(iVar8 + 0xe78) = uVar2 + 0x320000;
    *(uint *)(iVar8 + 0xe7c) = *(int *)(iVar8 + 0xe7c) + (uint)(0xffcdffff < uVar2);
    if (local_1c != 0) {
      local_34 = (undefined1 *)0x0;
      local_30 = (undefined1 *)0x0;
      local_2c = 0;
      local_28 = 0;
      local_8._0_1_ = 3;
      ppuStack_fc = (undefined1 **)0x11;
      puStack_100 = (uint *)0xdfde98;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      puStack_104 = (uint *)0x4ecf6e;
      FUN_00409350();
      local_8._0_1_ = 4;
      ppuStack_fc = (undefined1 **)0x9;
      puStack_100 = (uint *)0xdf2728;
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = local_7c[0] & 0xffffff00;
      puStack_104 = (uint *)0x4ecf8a;
      FUN_00409350();
      local_8._0_1_ = 5;
      uVar5 = (undefined1)local_8;
      local_8._0_1_ = 5;
      if (DAT_01262ef4 == 0) {
        ppuStack_fc = (undefined1 **)0x44;
        puStack_100 = (uint *)0x4ecf9d;
        iVar8 = FUN_00aae9af();
        local_8._0_1_ = 6;
        if (iVar8 == 0) {
          ppuStack_fc = (undefined1 **)0x0;
        }
        else {
          ppuStack_fc = (undefined1 **)0x4ecfb2;
          ppuStack_fc = (undefined1 **)FUN_006a4e30();
        }
        local_8._0_1_ = 5;
        puStack_100 = (uint *)0x4ecfc0;
        FUN_006a59b0();
        uVar5 = (undefined1)local_8;
      }
      local_8._0_1_ = uVar5;
      ppuStack_fc = (undefined1 **)local_50;
      puStack_100 = local_98;
      puStack_104 = (uint *)0x4ecfd0;
      puVar10 = (undefined1 *)FUN_00424ce0();
      ppuStack_fc = (undefined1 **)0xffffffff;
      local_8._0_1_ = 7;
      puStack_100 = (uint *)0x0;
      puStack_104 = local_7c;
      local_bc = 0xf;
      local_c0 = 0;
      local_d0[0] = 0;
      puStack_108 = (undefined4 *)0x4ecffa;
      FUN_00408ed0();
      ppuStack_fc = (undefined1 **)0xffffffff;
      local_8._0_1_ = 8;
      puStack_100 = (uint *)0x0;
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = 0;
      puStack_108 = (undefined4 *)0x4ed01f;
      puStack_104 = (uint *)puVar10;
      FUN_00408ed0();
      ppuStack_fc = (undefined1 **)0x44;
      local_8._0_1_ = 9;
      puStack_100 = (uint *)0x4ed02a;
      param_1 = (uint *)FUN_00aae9af();
      local_8._0_1_ = 10;
      uVar5 = (undefined1)local_8;
      local_8._0_1_ = 10;
      if (param_1 == (uint *)0x0) {
        param_1 = (uint *)0x0;
        local_8._0_1_ = uVar5;
      }
      else {
        ppuStack_fc = (undefined1 **)0xffffffff;
        puStack_100 = (uint *)0x0;
        puStack_104 = (uint *)local_d0;
        *(undefined4 *)((int)param_1 + 0x14) = 0xf;
        *(undefined4 *)((int)param_1 + 0x10) = 0;
        *(undefined1 *)param_1 = 0;
        puStack_108 = (undefined4 *)0x4ed053;
        FUN_00408ed0();
        ppuStack_fc = (undefined1 **)0xffffffff;
        local_8._0_1_ = 0xb;
        puStack_100 = (uint *)0x0;
        puStack_104 = (uint *)local_b4;
        *(undefined4 *)((int)param_1 + 0x30) = 0xf;
        *(undefined4 *)((int)param_1 + 0x2c) = 0;
        *(undefined1 *)((int)param_1 + 0x1c) = 0;
        puStack_108 = (undefined4 *)0x4ed071;
        FUN_00408ed0();
        *(undefined4 *)((int)param_1 + 0x38) = 0;
        *(undefined4 *)((int)param_1 + 0x3c) = 0;
        *(undefined1 *)((int)param_1 + 0x40) = 0;
      }
      local_30 = (undefined1 *)param_1;
      local_2c = 1;
      local_34 = (undefined1 *)param_1;
      ppuStack_fc = (undefined1 **)0x4ed09d;
      FUN_00a39a80();
      if (0xf < local_84) {
        ppuStack_fc = (undefined1 **)local_98[0];
                    /* WARNING: Subroutine does not return */
        puStack_100 = (uint *)&UNK_004ed0af;
        FUN_00aae91b();
      }
      local_84 = 0xf;
      local_88 = 0;
      local_98[0] = local_98[0] & 0xffffff00;
      if (0xf < local_68) {
        ppuStack_fc = (undefined1 **)local_7c[0];
                    /* WARNING: Subroutine does not return */
        puStack_100 = (uint *)&UNK_004ed0d4;
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = local_7c[0] & 0xffffff00;
      if (0xf < local_3c) {
        ppuStack_fc = (undefined1 **)local_50[0];
                    /* WARNING: Subroutine does not return */
        puStack_100 = (uint *)&UNK_004ed0f2;
        FUN_00aae91b();
      }
      ppuStack_fc = (undefined1 **)0x5;
      puStack_100 = (uint *)0xdfdeac;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      puStack_104 = (uint *)0x4ed10d;
      FUN_00409350();
      local_8._0_1_ = 0xc;
      ppuStack_fc = (undefined1 **)0x4ed11f;
      puVar10 = (undefined1 *)FUN_0055dd40();
      ppuStack_fc = (undefined1 **)0xffffffff;
      local_8._0_1_ = 0xd;
      puStack_100 = (uint *)0x0;
      puStack_104 = local_50;
      local_bc = 0xf;
      local_c0 = 0;
      local_d0[0] = 0;
      puStack_108 = (undefined4 *)0x4ed149;
      FUN_00408ed0();
      ppuStack_fc = (undefined1 **)0xffffffff;
      local_8._0_1_ = 0xe;
      puStack_100 = (uint *)0x0;
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = 0;
      puStack_108 = (undefined4 *)0x4ed16e;
      puStack_104 = (uint *)puVar10;
      FUN_00408ed0();
      ppuStack_fc = (undefined1 **)0x44;
      local_8._0_1_ = 0xf;
      puStack_100 = (uint *)0x4ed179;
      param_2 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 0x10;
      uVar5 = (undefined1)local_8;
      local_8._0_1_ = 0x10;
      if (param_2 == (undefined1 *)0x0) {
        param_2 = (undefined1 *)0x0;
        local_8._0_1_ = uVar5;
      }
      else {
        ppuStack_fc = (undefined1 **)0xffffffff;
        puStack_100 = (uint *)0x0;
        puStack_104 = (uint *)local_d0;
        *(undefined4 *)(param_2 + 0x14) = 0xf;
        *(undefined4 *)(param_2 + 0x10) = 0;
        *param_2 = 0;
        puStack_108 = (undefined4 *)0x4ed1a2;
        FUN_00408ed0();
        ppuStack_fc = (undefined1 **)0xffffffff;
        local_8._0_1_ = 0x11;
        puStack_100 = (uint *)0x0;
        puStack_104 = (uint *)local_b4;
        *(undefined4 *)(param_2 + 0x30) = 0xf;
        *(undefined4 *)(param_2 + 0x2c) = 0;
        param_2[0x1c] = 0;
        puStack_108 = (undefined4 *)0x4ed1c0;
        FUN_00408ed0();
        *(uint **)(param_2 + 0x38) = param_1;
        *(undefined4 *)(param_2 + 0x3c) = 0;
        param_2[0x40] = 0;
      }
      local_30 = param_2;
      local_2c = 2;
      *(undefined1 **)((int)param_1 + 0x3c) = param_2;
      ppuStack_fc = (undefined1 **)0x4ed1f2;
      FUN_00a39a80();
      if (0xf < local_84) {
        ppuStack_fc = (undefined1 **)local_98[0];
                    /* WARNING: Subroutine does not return */
        puStack_100 = (uint *)&UNK_004ed204;
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_84 = 0xf;
      local_88 = 0;
      local_98[0] = local_98[0] & 0xffffff00;
      if (0xf < local_3c) {
        ppuStack_fc = (undefined1 **)local_50[0];
                    /* WARNING: Subroutine does not return */
        puStack_100 = (uint *)&UNK_004ed229;
        FUN_00aae91b();
      }
      ppuStack_fc = (undefined1 **)0x8;
      puStack_100 = (uint *)0xdfdeb4;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      puStack_104 = (uint *)0x4ed244;
      FUN_00409350();
      local_8._0_1_ = 0x12;
      ppuStack_fc = (undefined1 **)0x4ed256;
      puVar10 = (undefined1 *)FUN_0055dd40();
      ppuStack_fc = (undefined1 **)0xffffffff;
      puStack_100 = (uint *)0x0;
      puStack_104 = local_50;
      local_8._0_1_ = 0x13;
      local_bc = 0xf;
      local_c0 = 0;
      local_d0[0] = 0;
      puStack_108 = (undefined4 *)0x4ed280;
      FUN_00408ed0();
      ppuStack_fc = (undefined1 **)0xffffffff;
      local_8._0_1_ = 0x14;
      puStack_100 = (uint *)0x0;
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = 0;
      puStack_108 = (undefined4 *)0x4ed2a5;
      puStack_104 = (uint *)puVar10;
      FUN_00408ed0();
      ppuStack_fc = (undefined1 **)0x44;
      local_8._0_1_ = 0x15;
      puStack_100 = (uint *)0x4ed2b0;
      puVar10 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 0x16;
      uVar5 = (undefined1)local_8;
      local_8._0_1_ = 0x16;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = (undefined1 *)0x0;
        local_8._0_1_ = uVar5;
      }
      else {
        ppuStack_fc = (undefined1 **)0xffffffff;
        puStack_100 = (uint *)0x0;
        puStack_104 = (uint *)local_d0;
        *(undefined4 *)(puVar10 + 0x14) = 0xf;
        *(undefined4 *)(puVar10 + 0x10) = 0;
        *puVar10 = 0;
        puStack_108 = (undefined4 *)0x4ed2d9;
        FUN_00408ed0();
        ppuStack_fc = (undefined1 **)0xffffffff;
        local_8._0_1_ = 0x17;
        puStack_100 = (uint *)0x0;
        puStack_104 = (uint *)local_b4;
        *(undefined4 *)(puVar10 + 0x30) = 0xf;
        *(undefined4 *)(puVar10 + 0x2c) = 0;
        puVar10[0x1c] = 0;
        puStack_108 = (undefined4 *)0x4ed2f7;
        FUN_00408ed0();
        *(undefined1 **)(puVar10 + 0x38) = param_2;
        *(undefined4 *)(puVar10 + 0x3c) = 0;
        puVar10[0x40] = 0;
      }
      *(undefined1 **)(param_2 + 0x3c) = puVar10;
      local_2c = 3;
      ppuStack_fc = (undefined1 **)0x4ed322;
      local_30 = puVar10;
      FUN_00a39a80();
      if (0xf < local_84) {
        ppuStack_fc = (undefined1 **)local_98[0];
                    /* WARNING: Subroutine does not return */
        puStack_100 = (uint *)&UNK_004ed334;
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_84 = 0xf;
      local_88 = 0;
      local_98[0] = local_98[0] & 0xffffff00;
      if (0xf < local_3c) {
        ppuStack_fc = (undefined1 **)local_50[0];
                    /* WARNING: Subroutine does not return */
        puStack_100 = (uint *)&UNK_004ed359;
        FUN_00aae91b();
      }
      ppuStack_fc = (undefined1 **)0x0;
      puStack_100 = (uint *)&DAT_00ded94d;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      puStack_104 = (uint *)0x4ed373;
      FUN_00409350();
      local_8._0_1_ = 0x18;
      ppuStack_fc = (undefined1 **)0xc;
      puStack_100 = (uint *)0xdfdec0;
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = local_7c[0] & 0xffffff00;
      puStack_104 = (uint *)0x4ed38f;
      FUN_00409350();
      local_8._0_1_ = 0x19;
      uVar9 = *(undefined4 *)
               (DAT_012588e8[0x2b3] + *(int *)(*(int *)(DAT_012587e4[1] + param_5 * 4) + 0xbe4) * 4)
      ;
      uVar15 = 0;
      puVar14 = local_50;
      ppuVar13 = &local_34;
      uVar16 = param_4;
      iVar8 = param_5;
      uVar17 = param_4;
      iVar6 = param_5;
      FUN_006a4f40(ppuVar13,uVar9,puVar14,0,param_4,param_5,param_4,param_5);
      uVar11 = FUN_006a55b0();
      FUN_006a7ed0(auStack_178,uVar11,ppuVar13,uVar9,puVar14,uVar15,uVar16,iVar8,uVar17,iVar6);
      local_8._0_1_ = 0x1a;
      uVar9 = FUN_006a4f40();
      local_8._0_1_ = 0x19;
      FUN_0042bb30(uVar9);
      if (0xf < local_68) {
        ppuStack_fc = (undefined1 **)local_7c[0];
                    /* WARNING: Subroutine does not return */
        puStack_100 = (uint *)&UNK_004ed431;
        FUN_00aae91b();
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = local_7c[0] & 0xffffff00;
      if (0xf < local_3c) {
        ppuStack_fc = (undefined1 **)local_50[0];
                    /* WARNING: Subroutine does not return */
        puStack_100 = (uint *)&UNK_004ed44b;
        FUN_00aae91b();
      }
      ppuStack_fc = &local_34;
      local_8 = (uint)local_8._1_3_ << 8;
      puStack_100 = (uint *)0x4ed45a;
      FUN_0042b9f0();
    }
    iVar8 = *DAT_012587e4;
    param_1 = (uint *)0x0;
    if (0 < iVar8) {
      piVar12 = DAT_012587e4 + 1;
      do {
        iVar6 = *(int *)(*piVar12 + (int)param_1 * 4);
        uVar9 = *(undefined4 *)(iVar6 + 0x1c);
        if ((*(int *)(iVar6 + 0x20) != 0) &&
           ((((char)uVar9 != 'R' || ((char)((uint)uVar9 >> 8) != 'E')) ||
            ((char)((uint)uVar9 >> 0x10) != 'B')))) {
          local_2c = *(undefined4 *)(iVar6 + 0x1c);
          ppuStack_fc = (undefined1 **)&param_4;
          puStack_100 = (uint *)0x4ed4bb;
          iVar6 = FUN_00540e80();
          if (iVar6 != 0) {
            ppuStack_fc = (undefined1 **)0x1;
            puStack_100 = (uint *)0x4ed4ca;
            FUN_00541680();
          }
        }
        param_1 = (uint *)((int)param_1 + 1);
      } while ((int)param_1 < iVar8);
    }
    iVar8 = *(int *)(DAT_012587e4[1] + param_5 * 4);
    piVar12 = *(int **)(iVar8 + 0x9d8);
    while ((*(int **)(iVar8 + 0x9d8) <= piVar12 && (piVar12 < *(int **)(iVar8 + 0x9dc)))) {
      iVar6 = *(int *)(local_5c[0x2b3] + *piVar12 * 4);
      piVar12 = piVar12 + 1;
      param_1 = (uint *)(*(int *)(iVar6 + 0x198) - *(int *)(iVar6 + 0x194) >> 4);
      if (0 < (int)param_1) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(iVar7 + *(int *)(iVar6 + 0x194));
          while (iVar3 != 0) {
            *(undefined4 *)(iVar3 + 0x274) = 0;
            iVar3 = *(int *)(iVar3 + 0x27c);
          }
          iVar7 = iVar7 + 0x10;
          param_1 = (uint *)((int)param_1 + -1);
        } while (param_1 != (uint *)0x0);
      }
    }
    ppuStack_fc = (undefined1 **)0x0;
    puStack_100 = (uint *)DAT_012588e8;
    puStack_104 = (uint *)0x4ed56b;
    FUN_0068d250();
    ppuStack_fc = *(undefined1 ***)(DAT_012587e4[1] + param_5 * 4);
    puStack_100 = (uint *)0x4ed580;
    FUN_00520150();
    ppuStack_fc = *(undefined1 ***)(DAT_012587e4[1] + param_5 * 4);
    puStack_100 = (uint *)0x4ed595;
    FUN_00515490();
    iVar8 = local_1c;
    if (local_1c != 0) {
      ppuStack_fc = *(undefined1 ***)(DAT_012587e4[1] + local_1c * 4);
      puStack_100 = (uint *)0x4ed5ad;
      FUN_00520150();
      ppuStack_fc = *(undefined1 ***)(DAT_012587e4[1] + iVar8 * 4);
      puStack_100 = (uint *)0x4ed5be;
      FUN_00515490();
    }
  }
  ExceptionList = local_10;
  return;
}

