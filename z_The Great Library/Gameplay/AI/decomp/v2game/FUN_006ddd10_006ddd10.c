// FUN_006ddd10 @ 006ddd10 body=[[006ddd10, 006de0ad] [006de0b1, 006de11c] [006de120, 006de14a] [006de167, 006de1a3] [006de1a7, 006de234] [006de238, 006de261] [006de265, 006de4e6] [006de4ea, 006de567] [006de56b, 006de5bc] [006de5c0, 006de628] [006de62c, 006de692] [006de696, 006de707] [006de70b, 006de785] [006de789, 006de9db] [006de9df, 006dea1b] [006dea1f, 006dea43] [006dea47, 006deaa8] [006deaac, 006deb74] [006deb78, 006deb8e] [006deb92, 006debb2] [006debb6, 006dec4c] [006dec50, 006dee69] [006dee6d, 006deeb3] [006deeb7, 006deee1] [006deee5, 006def5b] [006def5f, 006df088] [006df08c, 006df0c0] [006df0c4, 006df112] [006df116, 006df147] [006df14b, 006df171] [006df175, 006df1c3] [006df1c7, 006df1fc] [006df200, 006df2c0] [006df2c4, 006df2f3] [006df2f7, 006df316] [006df31a, 006df334] [006df338, 006df389] [006df38d, 006df404] [006df408, 006df42d] [006df431, 006df45b] [006df45f, 006df487] [006df48b, 006df522]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_006ddd10(int param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  code *pcVar11;
  undefined ****ppppuVar12;
  float10 fVar13;
  undefined8 uVar14;
  undefined8 uStack_2c4;
  uint *puStack_2bc;
  char *pcStack_2b8;
  uint *puStack_2b4;
  char *pcStack_2b0;
  uint *puStack_2ac;
  uint *puStack_2a8;
  undefined ***pppuStack_2a4;
  undefined ***pppuStack_2a0;
  uint local_28c;
  uint local_278;
  uint local_270 [4];
  undefined4 local_260;
  uint local_25c;
  undefined **local_254 [4];
  int local_244;
  uint local_240 [4];
  undefined4 local_230;
  uint local_22c;
  uint local_224 [4];
  undefined4 local_214;
  uint local_210;
  uint local_208 [4];
  undefined4 local_1f8;
  uint local_1f4;
  undefined **local_1ec [4];
  undefined4 local_1dc;
  uint local_1d8;
  uint local_1d0 [4];
  undefined4 local_1c0;
  uint local_1bc;
  uint local_1b4 [4];
  undefined4 local_1a4;
  uint local_1a0;
  undefined1 local_198 [4];
  int local_194;
  undefined4 local_190;
  undefined4 local_18c;
  uint local_184 [4];
  undefined4 local_174;
  uint local_170;
  char *local_168 [2];
  int local_160;
  uint local_15c [4];
  undefined4 local_14c;
  uint local_148;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  undefined1 *local_134;
  uint local_130 [2];
  undefined1 local_128 [4];
  int local_124;
  undefined4 local_120;
  uint local_11c;
  int local_114;
  int *local_110;
  int *local_10c;
  int local_108;
  undefined1 local_104 [4];
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  int *local_d4;
  int local_d0;
  undefined ***local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  undefined1 *local_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  int local_a4;
  float local_9c;
  undefined1 *local_98;
  int *local_94;
  undefined **local_90;
  undefined4 *local_8c;
  undefined1 *local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  undefined4 local_64;
  undefined1 *local_60;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  char local_3d;
  int *local_3c;
  int local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  char local_1e;
  char local_1d;
  uint local_1c;
  char local_15;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b924f3;
  pvStack_10 = ExceptionList;
  local_1c = 0;
  local_140 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_134 = *(undefined1 **)(DAT_012588e8 + 0xb60);
  local_30 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_134 * 4);
  piVar6 = *(int **)(local_30 + 0x9d8);
  local_88 = (undefined1 *)0x0;
  pppuStack_2a0 = (undefined ***)0x6ddd7d;
  ExceptionList = &pvStack_10;
  local_138 = local_140;
  local_8c = (undefined4 *)FUN_00aae9af();
  if (local_8c == (undefined4 *)0x0) {
    local_168[0] = (char *)0x0;
    pppuStack_2a0 = (undefined ***)0x6df508;
    std::exception::exception((exception *)local_254,local_168);
    pppuStack_2a0 = local_254;
    local_254[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    pppuStack_2a4 = (undefined ***)&UNK_006df523;
    __CxxThrowException_8();
  }
  *local_8c = local_8c;
  local_8c[1] = local_8c;
  local_8c[2] = local_8c;
  *(undefined1 *)(local_8c + 5) = 1;
  *(undefined1 *)((int)local_8c + 0x15) = 1;
  local_8 = 0;
  while ((*(int **)(local_30 + 0x9d8) <= piVar6 && (piVar6 < *(int **)(local_30 + 0x9dc)))) {
    local_94 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *piVar6 * 4);
    piVar6 = piVar6 + 1;
    local_3d = local_94[100] == 2;
    local_34 = (undefined4 *)(local_94[0x53] - local_94[0x52] >> 3);
    local_10c = piVar6;
    if ((local_34 == (undefined4 *)0x0) && ((bool)local_3d)) {
      iVar5 = local_94[0x3a];
      if ((1 < *(int *)(iVar5 + 0xc)) && (iVar4 = FUN_0050e450(), iVar5 != iVar4)) {
        local_d4 = (int *)0xffffffff;
        local_d0 = iVar5;
        FUN_004ca000();
        pppuStack_2a4 = (undefined ***)0x6dde63;
        pppuStack_2a0 = &local_90;
        FUN_006e0260();
        piVar6 = local_10c;
      }
    }
    else {
      local_3c = (int *)0x0;
      if (0 < (int)local_34) {
        do {
          local_64 = *(undefined4 *)(local_94[0x52] + (int)local_3c * 8);
          puVar7 = (undefined4 *)(local_94[0x52] + (int)local_3c * 8);
          local_60 = (undefined1 *)puVar7[1];
          iVar5 = *(int *)(DAT_012587e4 + 4);
          iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + (int)local_60 * 4) + 0xe64) + 0x50);
          local_1e = *(undefined1 **)(iVar4 + 0x20) == local_60;
          local_a8 = *(undefined4 *)(iVar4 + 0x1c);
          cVar3 = FUN_0055dda0();
          local_15 = cVar3 == '\0';
          local_1d = '\0';
          if ((local_1e != '\0') &&
             (iVar4 = *(int *)(*(int *)(local_30 + 0xe64) + 0x50),
             local_a8 = *(undefined4 *)(iVar4 + 0x1c),
             *(int *)(*(int *)(*(int *)(*(int *)(iVar5 + puVar7[1] * 4) + 0xe64) + 0x50) + 0x20) !=
             *(int *)(iVar4 + 0x20))) {
            local_a8 = *puVar7;
            local_9c = *(float *)(*(int *)(iVar5 + puVar7[1] * 4) + 0xa00);
            piVar6 = *(int **)(*(int *)(iVar5 + puVar7[1] * 4) + 0x9f8);
            local_38 = 0;
            if (piVar6 != (int *)0x0) {
              do {
                iVar4 = *piVar6;
                piVar6 = (int *)piVar6[2];
                if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar4 * 4) + 300) ==
                    *(int *)(local_30 + 0x20)) {
                  local_38 = local_38 + 1;
                }
              } while (piVar6 != (int *)0x0);
            }
            if ((0 < (int)local_9c) && ((int)local_9c / 2 + 1 <= local_38)) {
              local_1d = '\x01';
            }
          }
          if (((((local_60 != local_134) && (local_60 != (undefined1 *)0x0)) &&
               (((char)local_64 != 'R' ||
                (((char)((uint)local_64 >> 8) != 'E' || (local_64._2_1_ != 'B')))))) &&
              ((local_1e == '\0' || ((((bool)local_15 || (local_3d != '\0')) && (local_1d != '\0')))
               ))) && ((iVar5 = *(int *)(iVar5 + (int)local_60 * 4),
                       (int)(*(int *)(iVar5 + 0x9dc) - *(int *)(iVar5 + 0x9d8) & 0xfffffffcU) < 1 &&
                       (*(char *)(iVar5 + 0x1544) != '\0')))) {
            local_b0 = local_60;
            local_ac = (undefined1 *)0x0;
            FUN_004ca000();
            pppuStack_2a4 = (undefined ***)0x6de023;
            pppuStack_2a0 = &local_90;
            FUN_006e0260();
          }
          local_3c = (int *)((int)local_3c + 1);
          piVar6 = local_10c;
        } while ((int)local_3c < (int)local_34);
      }
    }
  }
  local_bc = 0;
  local_cc[0] = (undefined ***)((uint)local_cc[0] & 0xffffff00);
  local_b8 = 0xf;
  pppuStack_2a0 = (undefined ***)0xe0da68;
  if (*(int *)(param_1 + 0x2d4) == 1) {
    pppuStack_2a4 = (undefined ***)0x6de16c;
    FUN_00409350();
    local_8._0_1_ = 4;
    pppuStack_2a0 = (undefined ***)0x6de181;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))();
    pppuStack_2a0 = (undefined ***)0x6de18c;
    (**(code **)(*(int *)(iVar5 + 0x18) + 0x34))();
    local_8._0_1_ = 0;
    if (0xf < local_b8) {
      pppuStack_2a0 = local_cc[0];
                    /* WARNING: Subroutine does not return */
      pppuStack_2a4 = (undefined ***)&UNK_006de1a4;
      FUN_00aae91b();
    }
    pppuStack_2a0 = (undefined ***)0x7;
    pppuStack_2a4 = (undefined ***)0xe0da90;
    local_1bc = 0xf;
    local_1c0 = 0;
    local_1d0[0] = local_1d0[0] & 0xffffff00;
    puStack_2a8 = (uint *)0x6de1cb;
    FUN_00409350();
    local_8._0_1_ = 5;
    pppuStack_2a0 = (undefined ***)0xe;
    pppuStack_2a4 = (undefined ***)0xe0da68;
    local_1d8 = 0xf;
    local_1dc = 0;
    local_1ec[0] = (undefined **)((uint)local_1ec[0] & 0xffffff00);
    puStack_2a8 = (uint *)0x6de1f3;
    FUN_00409350();
    local_8._0_1_ = 6;
    pppuStack_2a0 = local_1ec;
    pppuStack_2a4 = (undefined ***)0x6de208;
    piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))();
    pppuStack_2a4 = (undefined ***)local_1d0;
    puStack_2a8 = (uint *)0x6de218;
    piVar6 = (int *)(**(code **)(*piVar6 + 0x7c))();
    local_94 = piVar6;
    if (0xf < local_1d8) {
      puStack_2a8 = (uint *)local_1ec[0];
                    /* WARNING: Subroutine does not return */
      puStack_2ac = (uint *)&UNK_006de235;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_1d8 = 0xf;
    local_1dc = 0;
    local_1ec[0] = (undefined **)((uint)local_1ec[0] & 0xffffff00);
    if (0xf < local_1bc) {
      puStack_2a8 = (uint *)local_1d0[0];
                    /* WARNING: Subroutine does not return */
      puStack_2ac = (uint *)&UNK_006de262;
      FUN_00aae91b();
    }
    local_1bc = 0xf;
    local_1c0 = 0;
    local_1d0[0] = local_1d0[0] & 0xffffff00;
    if (piVar6[0x41] == 0) {
      local_9c = DAT_00f092dc;
    }
    else {
      puStack_2a8 = (uint *)0x6de290;
      fVar13 = (float10)(**(code **)(*(int *)(piVar6[0x41] + 0x54) + 0x10))();
      local_9c = (float)fVar13;
    }
    puStack_2a8 = (uint *)0x6de2b1;
    (**(code **)(*piVar6 + 0x54))();
    puStack_2a8 = (uint *)0x6de2ba;
    (**(code **)(*piVar6 + 0x5c))();
    local_98 = (undefined1 *)&pppuStack_2a0;
    ppppuVar12 = &pppuStack_2a0;
    puStack_2ac = (uint *)*local_8c;
    pppuStack_2a4 = (undefined ***)param_1;
    puStack_2a8 = local_8c;
    pcStack_2b0 = (char *)0x6de2e8;
    FUN_006e0700();
    piVar6 = (int *)0x0;
    local_28 = (int *)0x0;
    local_2c = 0;
    local_ac = local_88;
    pcStack_2b0 = (char *)&pppuStack_2a0;
    if (0 < (int)local_88) {
      do {
        piVar9 = piVar6;
        if (*(int *)((int)ppppuVar12 + local_2c * 8) < 0) {
          iVar5 = *(int *)(DAT_012587e4 + 0x418) - *(int *)(DAT_012587e4 + 0x414) >> 3;
          if ((int)piVar6 < iVar5) {
            local_34 = *(undefined4 **)(DAT_012587e4 + 4);
            puVar7 = (undefined4 *)(*(int *)(DAT_012587e4 + 0x414) + (int)piVar6 * 8);
            do {
              local_140 = *puVar7;
              iVar4 = (*(undefined4 **)(DAT_012587e4 + 4))[puVar7[1]];
              ppppuVar12 = (undefined ****)local_98;
              if ((int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU) < 1) {
                *(undefined4 *)(local_98 + local_2c * 8) =
                     *(undefined4 *)(*(int *)(DAT_012587e4 + 0x414) + 4 + (int)piVar6 * 8);
                local_28 = (int *)((int)piVar6 + 1);
                piVar9 = (int *)((int)piVar6 + 1);
                break;
              }
              piVar6 = (int *)((int)piVar6 + 1);
              puVar7 = puVar7 + 2;
              piVar9 = local_28;
            } while ((int)piVar6 < iVar5);
          }
        }
        local_2c = local_2c + 1;
        piVar6 = piVar9;
        pcStack_2b0 = (char *)ppppuVar12;
      } while (local_2c < (int)local_88);
    }
    puStack_2ac = (uint *)(pcStack_2b0 + (int)local_88 * 8);
    local_34 = (undefined4 *)((uint)local_34 & 0xffffff00);
    pppuStack_2a4 = (undefined ***)local_34;
    puStack_2a8 = (uint *)((int)puStack_2ac - (int)pcStack_2b0 >> 3);
    puStack_2b4 = (uint *)0x6de3c6;
    FUN_006e03d0();
    local_38 = 0;
    local_134 = local_88;
    if (0 < (int)local_88) {
      do {
        iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(local_98 + local_38 * 8) * 4);
        local_64 = *(undefined4 *)(iVar5 + 0x1c);
        local_60 = *(undefined1 **)(iVar5 + 0x20);
        if (-1 < *(int *)(local_98 + local_38 * 8)) {
          pppuStack_2a4 = (undefined ***)0x28;
          puStack_2a8 = (uint *)0x6de413;
          puVar7 = (undefined4 *)FUN_00aae9af();
          local_8._0_1_ = 7;
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            pppuStack_2a4 = (undefined ***)0xd;
            puStack_2a8 = (uint *)0xe0e3a8;
            local_22c = 0xf;
            local_230 = 0;
            local_240[0] = local_240[0] & 0xffffff00;
            puStack_2ac = (uint *)0x6de44f;
            local_34 = puVar7;
            FUN_00409350();
            piVar6 = DAT_01258a80;
            local_8 = CONCAT31(local_8._1_3_,8);
            local_1c = local_1c | 1;
            pppuStack_2a4 = (undefined ***)0x6de470;
            pppuStack_2a4 = (undefined ***)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *(undefined1 *)(puVar7 + 4) = 0;
            DAT_013f08e0 = DAT_013f08e0 + 1;
            *(undefined1 *)(puVar7 + 5) = 0;
            *(undefined1 *)(puVar7 + 6) = 0;
            puVar7[7] = &PTR_FUN_00e39158;
            local_8 = 0xc;
            *puVar7 = &PTR_FUN_00e392f0;
            puVar7[7] = &PTR_FUN_00e39320;
            *(undefined1 *)(puVar7 + 9) = 0;
            puStack_2a8 = local_240;
            puStack_2ac = (uint *)0x6de4bb;
            uVar8 = (**(code **)(*piVar6 + 0x2c))();
            puVar7[8] = uVar8;
          }
          local_8 = 0;
          local_34 = puVar7;
          if ((local_1c & 1) != 0) {
            local_1c = local_1c & 0xfffffffe;
            if (0xf < local_22c) {
              pppuStack_2a4 = (undefined ***)local_240[0];
                    /* WARNING: Subroutine does not return */
              puStack_2a8 = (uint *)&UNK_006de4e7;
              FUN_00aae91b();
            }
            local_22c = 0xf;
            local_230 = 0;
            local_240[0] = local_240[0] & 0xffffff00;
          }
          piVar6 = (int *)puVar7[8];
          pppuStack_2a4 = (undefined ***)0xc;
          puStack_2a8 = (uint *)0xe04928;
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          puStack_2ac = (uint *)0x6de522;
          local_3c = piVar6;
          FUN_00409350();
          local_8._0_1_ = 0xe;
          pppuStack_2a4 = (undefined ***)local_80;
          puStack_2a8 = (uint *)0x6de533;
          piVar6 = (int *)(**(code **)(*piVar6 + 0x44))();
          puStack_2a8 = (uint *)0x6de53f;
          piVar6 = (int *)(**(code **)(*piVar6 + 0xec))();
          iVar5 = *piVar6;
          puStack_2a8 = (uint *)0x6de54b;
          puStack_2a8 = (uint *)FUN_0052fc10();
          puStack_2ac = (uint *)0x6de556;
          (**(code **)(iVar5 + 0x150))();
          local_8._0_1_ = 0;
          if (0xf < local_6c) {
            puStack_2ac = (uint *)local_80[0];
                    /* WARNING: Subroutine does not return */
            pcStack_2b0 = &UNK_006de568;
            FUN_00aae91b();
          }
          puStack_2ac = (uint *)0xc;
          pcStack_2b0 = "country_flag";
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          puStack_2b4 = (uint *)0x6de587;
          FUN_00409350();
          piVar6 = local_3c;
          local_8._0_1_ = 0xf;
          puStack_2ac = local_80;
          pcStack_2b0 = (char *)0x6de59b;
          piVar9 = (int *)(**(code **)(*local_3c + 0x44))();
          pcStack_2b0 = local_60;
          puStack_2b4 = (uint *)0x6de5ab;
          (**(code **)(*piVar9 + 0xd4))();
          local_8._0_1_ = 0;
          if (0xf < local_6c) {
            puStack_2b4 = (uint *)local_80[0];
                    /* WARNING: Subroutine does not return */
            pcStack_2b8 = &UNK_006de5bd;
            FUN_00aae91b();
          }
          local_28 = (int *)(local_98 + local_38 * 8 + 4);
          uVar8 = 0;
          if (*local_28 != 0) {
            uVar8 = *(undefined4 *)(**(int **)(*local_28 + 4) + 0x58);
          }
          puStack_2b4 = (uint *)0x16;
          pcStack_2b8 = "country_release_vassal";
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          puStack_2bc = (uint *)0x6de5fc;
          FUN_00409350();
          local_8._0_1_ = 0x10;
          puStack_2b4 = local_80;
          pcStack_2b8 = (char *)0x6de60d;
          piVar9 = (int *)(**(code **)(*piVar6 + 0x34))();
          puStack_2bc = (uint *)0x6de61a;
          pcStack_2b8 = (char *)uVar8;
          (**(code **)(*piVar9 + 0xd4))();
          if (0xf < local_6c) {
            puStack_2bc = (uint *)local_80[0];
            uStack_2c4 = CONCAT44(&UNK_006de629,(uint *)uStack_2c4);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_b8 = 0xf;
          local_bc = 0;
          local_cc[0] = (undefined ***)((uint)local_cc[0] & 0xffffff00);
          local_8._0_1_ = 0x11;
          uVar2 = (undefined1)local_8;
          local_8._0_1_ = 0x11;
          if (*local_28 == 0) {
            puStack_2bc = (uint *)local_60;
            uStack_2c4 = CONCAT44(local_64,*(undefined4 *)(*(int *)(local_30 + 0xbd0) + 0x40));
            local_8._0_1_ = uVar2;
            uVar10 = FUN_0055c910();
            puStack_2bc = (uint *)0xffffffff;
            uStack_2c4 = (ulonglong)uVar10;
            local_8._0_1_ = 0x14;
            FUN_00408ed0();
          }
          else {
            puStack_2bc = (uint *)0x6de65a;
            FUN_0048fe90();
            local_8._0_1_ = 0x12;
            puStack_2bc = (uint *)local_60;
            uStack_2c4 = CONCAT44(local_64,0x6de66e);
            uVar10 = FUN_0055cbd0();
            puStack_2bc = (uint *)0xffffffff;
            uStack_2c4 = (ulonglong)uVar10;
            local_8._0_1_ = 0x13;
            FUN_00408ed0();
            if (0xf < local_48) {
              puStack_2bc = (uint *)local_5c[0];
              uStack_2c4 = CONCAT44(&UNK_006de693,(uint *)uStack_2c4);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_48 = 0xf;
            local_4c = 0;
            local_5c[0] = local_5c[0] & 0xffffff00;
          }
          if (0xf < local_dc) {
            local_8._0_1_ = 0x11;
            uStack_2c4 = CONCAT44(&UNK_006de708,(uint *)uStack_2c4);
            puStack_2bc = (uint *)local_f0[0];
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0x11;
          puStack_2bc = (uint *)0x4;
          local_11c = 0xf;
          local_120 = 0;
          local_130[0] = local_130[0] & 0xffffff00;
          uStack_2c4 = 0xdf09f4006de733;
          FUN_00409350();
          local_8._0_1_ = 0x15;
          puStack_2bc = local_130;
          uStack_2c4 = CONCAT44(0x6de747,(uint *)uStack_2c4);
          (**(code **)(*piVar6 + 0x3c))();
          uStack_2c4 = 0xffffffff00000000;
          FUN_00408ed0();
          uStack_2c4 = ZEXT48(local_cc);
          FUN_00a5ecc0();
          if (0xf < local_11c) {
            uStack_2c4 = CONCAT44(local_130[0],&UNK_006de786);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_11c = 0xf;
          local_120 = 0;
          local_130[0] = local_130[0] & 0xffffff00;
          local_148 = 0xf;
          local_14c = 0;
          local_15c[0] = local_15c[0] & 0xffffff00;
          local_8 = CONCAT31(local_8._1_3_,0x16);
          iVar5 = *(int *)(DAT_012586dc + 0x40);
          local_114 = *(int *)(iVar5 + 0x110);
          local_160 = *(int *)(iVar5 + 0x114);
          local_ac = *(undefined1 **)(iVar5 + 0x11c);
          local_108 = *(int *)(iVar5 + 0x118);
          local_1e = '\x01';
          local_1d = '\0';
          local_2c = 0;
          local_15 = '\x01';
          local_24 = 0;
          if (*local_28 == 0) {
            local_d4 = *(int **)(local_30 + 0x9d8);
            while ((*(int **)(local_30 + 0x9d8) <= local_d4 &&
                   (local_d4 < *(int **)(local_30 + 0x9dc)))) {
              iVar5 = *local_d4;
              local_d4 = local_d4 + 1;
              piVar6 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar5 * 4);
              iVar5 = piVar6[0x53];
              iVar4 = piVar6[0x52];
              local_28 = piVar6;
              if (iVar4 != iVar5) {
                do {
                  if (*(undefined1 **)(iVar4 + 4) == local_60) break;
                  iVar4 = iVar4 + 8;
                } while (iVar4 != iVar5);
                if (iVar4 != iVar5) {
                  piVar9 = (int *)piVar6[0x62];
                  if ((0 < piVar9[0x21]) && (piVar9 != (int *)0x0)) {
                    uStack_2c4 = CONCAT44(0x6decd6,(uint *)uStack_2c4);
                    cVar3 = (**(code **)(*piVar9 + 0x24))();
                    if ((cVar3 != '\0') && (0 < (int)(piVar9[0x13] - piVar9[0x12] & 0xfffffffcU))) {
                      if (piVar9[0x21] == 1) {
                        local_24 = local_24 + local_114;
                      }
                      else if (piVar9[0x21] == 2) {
                        local_24 = local_24 + local_160;
                        uStack_2c4 = 1000;
                        iVar4 = (piVar9[0x13] - piVar9[0x12] >> 2) * 1000;
                        iVar5 = __alldiv((longlong)(piVar9[0x1a] * 1000) * (longlong)local_108);
                        if (iVar4 == 0) {
                          iVar4 = -1;
                        }
                        else if (iVar5 + 0x189373U < 0x39580e) {
                          iVar4 = (iVar5 * 1000) / iVar4;
                        }
                        else {
                          uStack_2c4 = 1000;
                          local_13c = iVar4 >> 0x1f;
                          uVar14 = __allmul(iVar5,iVar5 >> 0x1f);
                          uStack_2c4 = CONCAT44(local_13c,iVar4);
                          iVar4 = __alldiv(uVar14);
                          local_244 = iVar4 >> 0x1f;
                        }
                        uStack_2c4 = 1000;
                        iVar5 = __alldiv((longlong)local_28[0xae] * (longlong)(int)local_ac);
                        local_24 = local_24 + iVar5 + iVar4;
                        piVar6 = local_28;
                      }
                    }
                  }
                  if (local_2c < 5) {
                    if (local_15 != '\0') {
                      if (local_1e == '\0') {
                        uStack_2c4 = 0x200df8148;
                        FUN_00448740();
                      }
                      else {
                        local_1e = '\0';
                      }
                      uStack_2c4 = CONCAT44(local_270,0x6def30);
                      (**(code **)(*piVar6 + 0x1c))();
                      uStack_2c4 = 0xffffffff00000000;
                      local_8._0_1_ = 0x20;
                      FUN_00448aa0();
                      local_8 = CONCAT31(local_8._1_3_,0x16);
                      if (0xf < local_25c) {
                        uStack_2c4 = CONCAT44(local_270[0],&UNK_006def5c);
                    /* WARNING: Subroutine does not return */
                        FUN_00aae91b();
                      }
                      local_25c = 0xf;
                      local_260 = 0;
                      local_270[0] = local_270[0] & 0xffffff00;
                    }
                  }
                  else if (local_15 != '\0') {
                    uStack_2c4 = 0x2200e0d69c;
                    local_210 = 0xf;
                    local_214 = 0;
                    local_224[0] = local_224[0] & 0xffffff00;
                    FUN_00409350();
                    uStack_2c4 = CONCAT44(local_224,local_198);
                    local_8._0_1_ = 0x1c;
                    FUN_009a8ee0();
                    local_8._0_1_ = 0x1d;
                    uStack_2c4 = CONCAT44(0x6dee1d,(uint *)uStack_2c4);
                    iVar5 = FUN_00475500();
                    uStack_2c4 = *(undefined8 *)(iVar5 + 0x74);
                    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
                    uStack_2c4 = 0xffffffff00000000;
                    local_8._0_1_ = 0x1e;
                    FUN_00448aa0();
                    if (0xf < local_278) {
                      uStack_2c4 = CONCAT44(local_28c,&UNK_006dee6a);
                    /* WARNING: Subroutine does not return */
                      FUN_00aae91b();
                    }
                    local_278 = 0xf;
                    local_28c = local_28c & 0xffffff00;
                    local_8._0_1_ = 0x1f;
                    uStack_2c4 = CONCAT44(0x6dee93,(uint *)uStack_2c4);
                    FUN_009adb70();
                    if (local_194 != 0) {
                      uStack_2c4 = CONCAT44(0x6deea8,(uint *)uStack_2c4);
                      FUN_009e6a80();
                      uStack_2c4 = CONCAT44(local_194,&UNK_006deeb4);
                    /* WARNING: Subroutine does not return */
                      FUN_00aae91b();
                    }
                    local_8 = CONCAT31(local_8._1_3_,0x16);
                    local_194 = 0;
                    local_190 = 0;
                    local_18c = 0;
                    if (0xf < local_210) {
                      uStack_2c4 = CONCAT44(local_224[0],&UNK_006deee2);
                    /* WARNING: Subroutine does not return */
                      FUN_00aae91b();
                    }
                    local_210 = 0xf;
                    local_214 = 0;
                    local_224[0] = local_224[0] & 0xffffff00;
                    local_15 = '\0';
                    piVar6 = local_28;
                  }
                  if ((local_1d != '\0') || (local_1d = '\0', 0 < *(int *)(piVar6[0x62] + 0x84))) {
                    local_1d = '\x01';
                  }
                  local_2c = local_2c + 1;
                }
              }
            }
LAB_006deaba:
            if (local_15 == '\x01') goto LAB_006deac0;
          }
          else {
            local_28 = *(int **)(*local_28 + 4);
            local_1d = '\x01';
            if (local_28 != (int *)0x0) {
              do {
                piVar6 = (int *)*local_28;
                local_28 = (int *)local_28[2];
                local_110 = piVar6;
                if ((piVar6 != (int *)0x0) && (piVar9 = (int *)piVar6[0x62], 0 < piVar9[0x21])) {
                  if (piVar9 != (int *)0x0) {
                    uStack_2c4 = CONCAT44(0x6de859,(uint *)uStack_2c4);
                    cVar3 = (**(code **)(*piVar9 + 0x24))();
                    if ((cVar3 != '\0') && (0 < (int)(piVar9[0x13] - piVar9[0x12] & 0xfffffffcU))) {
                      if (piVar9[0x21] == 1) {
                        local_24 = local_24 + local_114;
                      }
                      else if (piVar9[0x21] == 2) {
                        local_24 = local_24 + local_160;
                        uStack_2c4 = 1000;
                        iVar4 = (piVar9[0x13] - piVar9[0x12] >> 2) * 1000;
                        iVar5 = __alldiv((longlong)(piVar9[0x1a] * 1000) * (longlong)local_108);
                        if (iVar4 == 0) {
                          iVar4 = -1;
                        }
                        else if (iVar5 + 0x189373U < 0x39580e) {
                          iVar4 = (iVar5 * 1000) / iVar4;
                        }
                        else {
                          uStack_2c4 = 1000;
                          local_a4 = iVar4 >> 0x1f;
                          uVar14 = __allmul(iVar5,iVar5 >> 0x1f);
                          uStack_2c4 = CONCAT44(local_a4,iVar4);
                          iVar4 = __alldiv(uVar14);
                          local_244 = iVar4 >> 0x1f;
                        }
                        uStack_2c4 = 1000;
                        iVar5 = __alldiv((longlong)(int)local_ac * (longlong)local_110[0xae]);
                        local_24 = local_24 + iVar5 + iVar4;
                        piVar6 = local_110;
                      }
                    }
                  }
                  if (local_2c < 5) {
                    if (local_15 != '\0') {
                      if (local_1e == '\0') {
                        uStack_2c4 = 0x200df8148;
                        FUN_00448740();
                      }
                      else {
                        local_1e = '\0';
                      }
                      uStack_2c4 = CONCAT44(local_f0,0x6dea7d);
                      (**(code **)(*piVar6 + 0x1c))();
                      uStack_2c4 = 0xffffffff00000000;
                      local_8._0_1_ = 0x1b;
                      FUN_00448aa0();
                      local_8 = CONCAT31(local_8._1_3_,0x16);
                      if (0xf < local_dc) {
                        uStack_2c4 = CONCAT44(local_f0[0],&UNK_006deaa9);
                    /* WARNING: Subroutine does not return */
                        FUN_00aae91b();
                      }
                    }
                  }
                  else if (local_15 != '\0') {
                    uStack_2c4 = 0x2200e0d69c;
                    local_6c = 0xf;
                    local_70 = 0;
                    local_80[0] = local_80[0] & 0xffffff00;
                    FUN_00409350();
                    uStack_2c4 = CONCAT44(local_80,local_104);
                    local_8._0_1_ = 0x17;
                    FUN_009a8ee0();
                    local_8._0_1_ = 0x18;
                    uStack_2c4 = CONCAT44(0x6de998,(uint *)uStack_2c4);
                    iVar5 = FUN_00475500();
                    uStack_2c4 = *(undefined8 *)(iVar5 + 0x74);
                    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
                    uStack_2c4 = 0xffffffff00000000;
                    local_8._0_1_ = 0x19;
                    FUN_00448aa0();
                    if (0xf < local_48) {
                      uStack_2c4 = CONCAT44(local_5c[0],&UNK_006de9dc);
                    /* WARNING: Subroutine does not return */
                      FUN_00aae91b();
                    }
                    local_48 = 0xf;
                    local_4c = 0;
                    local_5c[0] = local_5c[0] & 0xffffff00;
                    local_8._0_1_ = 0x1a;
                    uStack_2c4 = CONCAT44(0x6de9fb,(uint *)uStack_2c4);
                    FUN_009adb70();
                    if (local_100 != 0) {
                      uStack_2c4 = CONCAT44(0x6dea10,(uint *)uStack_2c4);
                      FUN_009e6a80();
                      uStack_2c4 = CONCAT44(local_100,&UNK_006dea1c);
                    /* WARNING: Subroutine does not return */
                      FUN_00aae91b();
                    }
                    local_8 = CONCAT31(local_8._1_3_,0x16);
                    local_100 = 0;
                    local_fc = 0;
                    local_f8 = 0;
                    if (0xf < local_6c) {
                      uStack_2c4 = CONCAT44(local_80[0],&UNK_006dea44);
                    /* WARNING: Subroutine does not return */
                      FUN_00aae91b();
                    }
                    local_15 = '\0';
                  }
                  local_2c = local_2c + 1;
                }
              } while (local_28 != (int *)0x0);
              goto LAB_006deaba;
            }
LAB_006deac0:
            uStack_2c4 = 0x100df8140;
            FUN_00448740();
          }
          uStack_2c4 = 0xded94d;
          local_1a0 = 0xf;
          local_1a4 = 0;
          local_1b4[0] = local_1b4[0] & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 0x21;
          if (0 < local_24) {
            local_ac = (undefined1 *)&uStack_2c4;
            uStack_2c4 = CONCAT44(1,local_24);
            uVar8 = FUN_00988a50();
            uStack_2c4 = CONCAT44(uVar8,local_80);
            local_8._0_1_ = 0x22;
            FUN_0042c180();
            local_8._0_1_ = 0x23;
            FUN_00988fa0();
            uStack_2c4 = 0xffffffff00000000;
            local_8._0_1_ = 0x24;
            FUN_00408ed0();
            if (0xf < local_48) {
              uStack_2c4 = CONCAT44(local_5c[0],&UNK_006deb75);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_48 = 0xf;
            local_4c = 0;
            local_5c[0] = local_5c[0] & 0xffffff00;
            if (0xf < local_6c) {
              uStack_2c4 = CONCAT44(local_80[0],&UNK_006deb8f);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_8._0_1_ = 0x21;
            local_6c = 0xf;
            local_70 = 0;
            local_80[0] = local_80[0] & 0xffffff00;
            if (0xf < local_dc) {
              uStack_2c4 = CONCAT44(local_f0[0],&UNK_006debb3);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          local_8._0_1_ = 0x21;
          if (local_1d == '\0') {
            uStack_2c4 = 0x1200e0d6e0;
            local_6c = 0xf;
            local_70 = 0;
            local_80[0] = local_80[0] & 0xffffff00;
            FUN_00409350();
            local_8 = 0x28;
            local_1c = local_1c | 0x10;
            uStack_2c4 = CONCAT44(local_80,local_104);
            FUN_009a8ee0();
            local_8 = 0x29;
            local_1c = local_1c | 0x20;
            uStack_2c4 = CONCAT44(0x6defe0,(uint *)uStack_2c4);
            iVar5 = FUN_00475500();
            uStack_2c4 = *(undefined8 *)(iVar5 + 0x74);
            uVar8 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
            local_8 = 0x2a;
            local_1c = local_1c | 0x40;
          }
          else {
            uStack_2c4 = 0x1100e0d6cc;
            local_48 = 0xf;
            local_4c = 0;
            local_5c[0] = local_5c[0] & 0xffffff00;
            FUN_00409350();
            local_8 = CONCAT31(local_8._1_3_,0x25);
            local_1c = local_1c | 2;
            uStack_2c4 = CONCAT44(local_5c,local_128);
            FUN_009a8ee0();
            local_8 = 0x26;
            local_1c = local_1c | 4;
            uStack_2c4 = CONCAT44(0x6dec05,(uint *)uStack_2c4);
            iVar5 = FUN_00475500();
            uStack_2c4 = *(undefined8 *)(iVar5 + 0x74);
            uVar8 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
            local_8 = 0x27;
            local_1c = local_1c | 8;
          }
          uStack_2c4 = 0x400e0d704;
          local_1f4 = 0xf;
          local_1f8 = 0;
          local_208[0] = local_208[0] & 0xffffff00;
          FUN_00409350();
          local_8 = 0x2b;
          uStack_2c4._4_4_ = local_208;
          uStack_2c4._0_4_ = (uint *)0x6df052;
          (**(code **)(*local_3c + 0x3c))();
          uStack_2c4._0_4_ = (uint *)0xffffffff;
          FUN_00408ed0(uVar8,0);
          uStack_2c4._0_4_ = (uint *)0x0;
          FUN_00a5ecc0();
          if (0xf < local_1f4) {
            uStack_2c4 = CONCAT44(uStack_2c4._4_4_,local_208[0]);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1f4 = 0xf;
          local_1f8 = 0;
          local_208[0] = local_208[0] & 0xffffff00;
          if ((local_1c & 0x40) != 0) {
            local_1c = local_1c & 0xffffffbf;
            if (0xf < local_170) {
              uStack_2c4 = CONCAT44(uStack_2c4._4_4_,local_184[0]);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_170 = 0xf;
            local_174 = 0;
            local_184[0] = local_184[0] & 0xffffff00;
          }
          if ((local_1c & 0x20) != 0) {
            local_1c = local_1c & 0xffffffdf;
            local_8 = 0x2c;
            uStack_2c4._0_4_ = (uint *)0x6df0f2;
            FUN_009adb70();
            if (local_100 != 0) {
              uStack_2c4._0_4_ = (uint *)0x6df107;
              FUN_009e6a80();
              uStack_2c4 = CONCAT44(uStack_2c4._4_4_,local_100);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_100 = 0;
            local_fc = 0;
            local_f8 = 0;
          }
          if ((local_1c & 0x10) != 0) {
            local_1c = local_1c & 0xffffffef;
            if (0xf < local_6c) {
              uStack_2c4 = CONCAT44(uStack_2c4._4_4_,local_80[0]);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_6c = 0xf;
            local_70 = 0;
            local_80[0] = local_80[0] & 0xffffff00;
          }
          if ((local_1c & 8) != 0) {
            local_1c = local_1c & 0xfffffff7;
            if (0xf < local_dc) {
              uStack_2c4 = CONCAT44(uStack_2c4._4_4_,local_f0[0]);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_dc = 0xf;
            local_e0 = 0;
            local_f0[0] = local_f0[0] & 0xffffff00;
          }
          if ((local_1c & 4) != 0) {
            local_1c = local_1c & 0xfffffffb;
            local_8 = 0x2d;
            uStack_2c4._0_4_ = (uint *)0x6df1a3;
            FUN_009adb70();
            if (local_124 != 0) {
              uStack_2c4._0_4_ = (uint *)0x6df1b8;
              FUN_009e6a80();
              uStack_2c4 = CONCAT44(uStack_2c4._4_4_,local_124);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_124 = 0;
            local_120 = 0;
            local_11c = 0;
          }
          local_8 = 0x21;
          if (((local_1c & 2) != 0) && (local_1c = local_1c & 0xfffffffd, 0xf < local_48)) {
            uStack_2c4 = CONCAT44(uStack_2c4._4_4_,local_5c[0]);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_2c4._0_4_ = (uint *)0x4;
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = local_5c[0] & 0xffffff00;
          FUN_00409350();
          uStack_2c4._0_4_ = local_80;
          local_8._0_1_ = 0x2e;
          uStack_2c4._0_4_ = (uint *)FUN_009888f0();
          local_8._0_1_ = 0x2f;
          FUN_0043e9a0(local_184,&DAT_00dfa9cc,local_cc,"PROVINCES",local_15c,&DAT_00df7e7c);
          uStack_2c4._0_4_ = local_1b4;
          local_8._0_1_ = 0x30;
          uVar8 = FUN_00988f20();
          local_8._0_1_ = 0x31;
          uStack_2c4 = CONCAT44(uStack_2c4._4_4_,local_5c);
          (**(code **)(*local_3c + 0x3c))();
          FUN_00408ed0(uVar8,0,0xffffffff);
          FUN_00a5ecc0(uVar8,0);
          if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_dc = 0xf;
          local_e0 = 0;
          local_f0[0] = local_f0[0] & 0xffffff00;
          if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_170 = 0xf;
          local_174 = 0;
          local_184[0] = local_184[0] & 0xffffff00;
          if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0x21;
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = local_5c[0] & 0xffffff00;
          FUN_00409350("country_release_vassal",0x16);
          piVar6 = local_3c;
          local_8._0_1_ = 0x32;
          iVar5 = (**(code **)(*local_3c + 0x34))();
          (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x278);
          local_8._0_1_ = 0x21;
          uVar2 = (undefined1)local_8;
          local_8._0_1_ = 0x21;
          if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_5c[0]);
          }
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = local_5c[0] & 0xffffff00;
          if (*(char *)(local_30 + 0x67c) == '\0') {
            local_8._0_1_ = uVar2;
            FUN_00409350("country_release_vassal",0x16);
            local_8 = CONCAT31(local_8._1_3_,0x34);
            piVar6 = (int *)(**(code **)(*piVar6 + 0x34))(local_5c);
            pcVar11 = *(code **)(*piVar6 + 0xb8);
          }
          else {
            FUN_00409350("country_release_vassal",0x16);
            local_8 = CONCAT31(local_8._1_3_,0x33);
            piVar6 = (int *)(**(code **)(*piVar6 + 0x34))(local_5c);
            pcVar11 = *(code **)(*piVar6 + 0xbc);
          }
          (*pcVar11)();
          local_8._0_1_ = 0x21;
          if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_5c[0]);
          }
          (**(code **)(*local_94 + 0x10))(local_34,0);
          if (0xf < local_1a0) {
            pppuStack_2a4 = (undefined ***)local_1b4[0];
                    /* WARNING: Subroutine does not return */
            puStack_2a8 = (uint *)&UNK_006df42e;
            FUN_00aae91b();
          }
          local_1a0 = 0xf;
          local_1a4 = 0;
          local_1b4[0] = local_1b4[0] & 0xffffff00;
          if (0xf < local_148) {
            pppuStack_2a4 = (undefined ***)local_15c[0];
                    /* WARNING: Subroutine does not return */
            puStack_2a8 = (uint *)&UNK_006df45c;
            FUN_00aae91b();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          local_148 = 0xf;
          local_14c = 0;
          local_15c[0] = local_15c[0] & 0xffffff00;
          if (0xf < local_b8) {
            pppuStack_2a4 = local_cc[0];
                    /* WARNING: Subroutine does not return */
            puStack_2a8 = (uint *)&UNK_006df488;
            FUN_00aae91b();
          }
        }
        local_38 = local_38 + 1;
      } while (local_38 < (int)local_134);
    }
    piVar6 = local_94;
    pppuStack_2a4 = (undefined ***)0x6df4b3;
    FUN_00452c70();
    pppuStack_2a4 = (undefined ***)0x6df4bc;
    (**(code **)(*piVar6 + 0x6c))();
    pppuStack_2a4 = (undefined ***)0x6df4c5;
    (**(code **)(*piVar6 + 0x50))();
    local_8 = 0x35;
    puStack_2a8 = (uint *)*local_8c;
    pppuStack_2a4 = (undefined ***)local_8c;
    puStack_2ac = (uint *)0x6df4e4;
    FUN_00445600();
  }
  else {
    pppuStack_2a4 = (undefined ***)0x6de077;
    FUN_00409350();
    local_8._0_1_ = 1;
    pppuStack_2a0 = (undefined ***)0x6de08c;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))();
    pppuStack_2a0 = (undefined ***)0x6de096;
    (**(code **)(*(int *)(iVar5 + 0x18) + 0x38))();
    local_8._0_1_ = 0;
    if (0xf < local_b8) {
      pppuStack_2a0 = local_cc[0];
                    /* WARNING: Subroutine does not return */
      pppuStack_2a4 = (undefined ***)&UNK_006de0ae;
      FUN_00aae91b();
    }
    pppuStack_2a0 = (undefined ***)0x13;
    pppuStack_2a4 = (undefined ***)0xe0db50;
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = (undefined ***)((uint)local_cc[0] & 0xffffff00);
    puStack_2a8 = (uint *)0x6de0d5;
    FUN_00409350();
    puVar1 = local_88;
    local_8 = CONCAT31(local_8._1_3_,2);
    pppuStack_2a0 = (undefined ***)local_cc;
    pppuStack_2a4 = (undefined ***)0x6de0f0;
    piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x34))();
    if (puVar1 == (undefined1 *)0x0) {
      pcVar11 = *(code **)(*piVar6 + 0xbc);
    }
    else {
      pcVar11 = *(code **)(*piVar6 + 0xb8);
    }
    pppuStack_2a4 = (undefined ***)0x6de108;
    (*pcVar11)();
    if (0xf < local_b8) {
      pppuStack_2a4 = local_cc[0];
                    /* WARNING: Subroutine does not return */
      puStack_2a8 = (uint *)&UNK_006de11d;
      FUN_00aae91b();
    }
    local_8 = 3;
    puStack_2a8 = (uint *)*local_8c;
    pppuStack_2a4 = (undefined ***)local_8c;
    puStack_2ac = (uint *)0x6de13f;
    FUN_00445600();
  }
                    /* WARNING: Subroutine does not return */
  puStack_2a8 = (uint *)&UNK_006de14b;
  pppuStack_2a4 = (undefined ***)local_8c;
  FUN_00aae91b();
}

