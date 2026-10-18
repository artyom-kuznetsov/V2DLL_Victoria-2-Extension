// FUN_006fe7f0 @ 006fe7f0 body=[[006fe7f0, 006feafe] [006feb02, 006feb2f] [006feb33, 006feb52] [006feb56, 006feb7c] [006feb80, 006febd9] [006febf2, 006fec9f] [006feca3, 006fecc7] [006feccb, 006fecf0] [006fecf4, 006fed23] [006fed27, 006fed83] [006fed87, 006fedd9] [006feddd, 006ff078] [006ff07c, 006ff09a] [006ff09e, 006ff0c0] [006ff0c4, 006ff0f0] [006ff0f4, 006ff166] [006ff16a, 006ff1c3] [006ff1c7, 006ff200] [006ff219, 006ff2d8] [006ff2dc, 006ff2fa] [006ff2fe, 006ff320] [006ff324, 006ff349] [006ff34d, 006ff3fc] [006ff400, 006ff45e] [006ff462, 006ff486] [006ff48a, 006ff4b0] [006ff4b4, 006ff52c] [006ff530, 006ff5db] [006ff5df, 006ff603] [006ff607, 006ff62c] [006ff630, 006ff65f] [006ff663, 006ff6d3] [006ff6d7, 006ff6f5] [006ff6f9, 006ff722] [006ff726, 006ff7fb] [006ff7ff, 006ff81f] [006ff838, 006ff87f] [006ff883, 00700d2a] [00700d2e, 00700d4d] [00700d51, 00700d77] [00700d7b, 00700e84] [00700e88, 00700eab] [00700ec4, 00700f1c] [00700f20, 00700f7d] [00700f96, 00701092]]


/* WARNING: Removing unreachable block (ram,0x006fee74) */

undefined4 FUN_006fe7f0(int param_1,uint **param_2,uint **param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  float fVar3;
  char cVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  int in_ECX;
  uint extraout_EDX;
  int iVar14;
  char *pcVar15;
  bool bVar16;
  longlong lVar17;
  uint *puStack_190;
  uint uStack_18c;
  undefined8 uStack_188;
  uint *puStack_180;
  uint *puStack_17c;
  uint *puStack_178;
  uint *puStack_174;
  uint *puStack_170;
  uint *puStack_16c;
  uint *puStack_168;
  char local_140 [32];
  uint local_120 [7];
  uint local_104 [8];
  uint local_e4 [2];
  undefined1 local_dc [28];
  uint local_c0;
  int local_bc;
  int local_b8;
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_98;
  int *local_94;
  uint local_90 [2];
  uint local_88;
  char *local_84;
  undefined8 local_80;
  char *local_78;
  uint local_70;
  int local_60;
  uint local_5c;
  int *local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = (int)param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb27c5;
  local_10 = ExceptionList;
  iVar14 = 0;
  local_34 = 0;
  ExceptionList = &local_10;
  puVar5 = (uint *)(**(code **)(**(int **)(param_1 + 0x54) + 0x58))();
  local_c0 = *puVar5;
  _puStack_168 = CONCAT44(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar5[1] * 4) +
                                           0xa60) + 0x128) << 0x1e,0x6fe86b);
  local_80 = __alldiv();
  local_80 = local_80 + 0x8000;
  local_94 = (int *)(iVar7 + 0x30);
  do {
    cVar4 = (**(code **)(*(int *)(*local_94 + 0x18) + 0x94))();
    if (cVar4 != '\0') {
      local_94 = (int *)(iVar14 * 0x21c + 0x30 + iVar7);
      iVar7 = local_94[1];
      local_b8 = iVar14;
      (**(code **)(**(int **)(param_1 + 0x54) + 0x58))();
      local_e4[0] = *(uint *)(iVar7 + 0x20);
      local_98 = *(undefined4 *)(*(int *)(iVar7 + 0x18) + 300);
      cVar4 = (**(code **)(*param_2[0xc] + 0x28))();
      if (cVar4 == '\0') goto LAB_006ff219;
      iVar14 = (int)param_2[0xc];
      pbVar8 = (byte *)(iVar14 + 0x6c);
      if (0xf < *(uint *)(iVar14 + 0x80)) {
        pbVar8 = *(byte **)pbVar8;
      }
      pcVar15 = "GFX_resources_small";
      goto LAB_006fe9e6;
    }
    local_94 = local_94 + 0x87;
    iVar14 = iVar14 + 1;
  } while (iVar14 < 8);
  cVar4 = (**(code **)(*(int *)(*(int *)(iVar7 + 0x20) + 0x18) + 0x94))();
  if (cVar4 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  iVar14 = *(int *)(iVar7 + 0x111c);
  param_3 = param_2 + 5;
  _puStack_168 = CONCAT44(param_3,0x6fe8ee);
  iVar6 = FUN_005484e0();
  if (iVar6 == -1) {
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    _puStack_168 = CONCAT44(0x700ee5,puStack_168);
    FUN_00409350();
    local_8 = 0x9e;
    piVar12 = (int *)(**(code **)(**(int **)(iVar7 + 0x20) + 0x34))();
    piVar9 = (int *)param_2;
    param_3 = (uint **)CONCAT13(param_2 == (uint **)piVar12,param_3._0_3_);
    local_8 = 0xffffffff;
    if (0xf < local_5c) {
      _puStack_168 = CONCAT44(&UNK_00700f1d,puStack_168);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (param_2 != (uint **)piVar12) {
      (**(code **)((int)*param_2 + 0x44))();
      cVar4 = FUN_0040b360();
      if (cVar4 != '\0') {
        _puStack_168 = CONCAT44(iVar14,0x700fbd);
        uVar13 = FUN_004d2800();
        _puStack_168 = (ulonglong)uVar13;
        local_8 = 0xa0;
        puStack_16c = (uint *)0x700fd0;
        FUN_00408ed0();
        FUN_00408ad0();
        ExceptionList = local_10;
        return 1;
      }
      (**(code **)(*piVar9 + 0x44))();
      cVar4 = FUN_0040b360();
      if (cVar4 == '\0') {
        ExceptionList = local_10;
        return 1;
      }
      piVar9 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) +
                                 *(int *)(DAT_012588e8 + 0xb60) * 0x10) +
                        *(int *)(*(int *)(iVar14 + 0x250) + 0x6c) * 4);
      if (piVar9 == (int *)0x0) {
        ExceptionList = local_10;
        return 1;
      }
      cVar4 = (**(code **)(*piVar9 + 0x34))();
      if (cVar4 == '\0') {
        ExceptionList = local_10;
        return 1;
      }
      _puStack_168 = CONCAT44(0x70104b,puStack_168);
      puStack_16c = (uint *)(**(code **)(*piVar9 + 0x30))();
      _puStack_168 = 0xffffffff00000000;
      local_8 = 0xa1;
      puStack_170 = (uint *)0x70105e;
      FUN_00408ed0();
      _puStack_168 = CONCAT44(0x701069,puStack_168);
      FUN_00408ad0();
      ExceptionList = local_10;
      return 1;
    }
    _puStack_168 = CONCAT44(0x700f37,puStack_168);
    puVar5 = (uint *)(**(code **)(**(int **)(param_1 + 0x54) + 0x58))();
    local_c0 = *puVar5;
    _puStack_168 = CONCAT44(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + puVar5[1] * 4),0x700f59);
    uVar11 = FUN_0052e9f0();
    local_8 = 0x9f;
    _puStack_168 = CONCAT44(uVar11,0x700f6c);
    FUN_00408ed0();
  }
  else {
    iVar7 = FUN_00aaf0c5();
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    _puStack_168 = CONCAT44(0x6fe934,puStack_168);
    param_2 = (uint **)iVar7;
    FUN_00409350();
    local_8 = 0x97;
    if (DAT_0131bb34 == 0) {
      param_3 = (uint **)FUN_00aae9af();
      local_8._0_1_ = 0x98;
      if (param_3 != (uint **)0x0) {
        FUN_0041a160();
        iVar7 = (int)param_2;
      }
      local_8 = CONCAT31(local_8._1_3_,0x97);
      FUN_00423700();
    }
    if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar7) {
      FUN_0096bb70();
    }
    _puStack_168 = CONCAT44(0x700cf6,puStack_168);
    FUN_0096d650();
    local_8._0_1_ = 0x99;
    uVar11 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0x9a);
    _puStack_168 = CONCAT44(uVar11,0x700d18);
    FUN_00408ed0();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    piVar9 = *(int **)(param_1 + 0x340);
    piVar12 = *(int **)(param_1 + 0x33c);
    bVar16 = piVar12 == piVar9;
    if (!bVar16) {
      do {
        if ((uint **)*piVar12 == param_2) break;
        piVar12 = piVar12 + 1;
      } while (piVar12 != piVar9);
      bVar16 = piVar12 == piVar9;
    }
    iVar7 = *(int *)(*(int *)(iVar14 + 0x118) + (int)param_2 * 4);
    if (bVar16) {
      fVar3 = (float)iVar7;
      if (iVar7 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      param_2 = (uint **)(fVar3 / (float)*(int *)(iVar14 + 200));
      param_3 = &puStack_168;
      if ((float)param_2 < 0.0) {
        local_80 = 0xbfe0000000000000;
      }
      else {
        local_80 = 0x3fe0000000000000;
      }
      puStack_16c = (uint *)0x700e38;
      _puStack_168 = FUN_00b31c36();
      puStack_16c = local_50;
      puStack_170 = (uint *)0x700e46;
      FUN_009c80d0();
      local_8 = 0x9c;
      _puStack_168 = CONCAT44(0x700e64,puStack_168);
      uVar11 = FUN_0042c180();
      local_8 = CONCAT31(local_8._1_3_,0x9d);
      _puStack_168 = CONCAT44(uVar11,0x700e77);
      FUN_00448aa0();
      if (local_1c < 0x10) {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (local_3c < 0x10) {
          ExceptionList = local_10;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    param_2 = (uint **)(iVar7 - *(int *)(*(int *)(iVar14 + 0x120) + (int)param_2 * 4));
    _puStack_168 = CONCAT44(0x700dc2,puStack_168);
    uVar11 = FUN_007057a0();
    local_8 = 0x9b;
    _puStack_168 = CONCAT44(uVar11,0x700dd8);
    FUN_00448aa0();
  }
  if (local_1c < 0x10) {
    ExceptionList = local_10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
  while( true ) {
    bVar2 = pbVar8[1];
    bVar16 = bVar2 < (byte)pcVar15[1];
    if (bVar2 != pcVar15[1]) goto LAB_006fea06;
    pbVar8 = pbVar8 + 2;
    pcVar15 = pcVar15 + 2;
    if (bVar2 == 0) break;
LAB_006fe9e6:
    bVar2 = *pbVar8;
    bVar16 = bVar2 < (byte)*pcVar15;
    if (bVar2 != *pcVar15) {
LAB_006fea06:
      iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_006fea0b;
    }
    if (bVar2 == 0) break;
  }
  iVar6 = 0;
LAB_006fea0b:
  if (iVar6 == 0) {
LAB_006fea4f:
    iVar14 = (**(code **)((int)*param_2 + 0x4c))();
    if (1 < iVar14) {
      iVar14 = (**(code **)((int)*param_2 + 0x4c))();
      param_3 = (uint **)(iVar14 + -2);
      local_5c = 0xf;
      local_60 = 0;
      local_70 = local_70 & 0xffffff00;
      _puStack_168 = CONCAT44(0x6fea93,puStack_168);
      FUN_00409350();
      local_8 = 0;
      _puStack_168 = CONCAT44(0x6feab0,puStack_168);
      FUN_005659c0();
      local_8._0_1_ = 1;
      FUN_00988fa0();
      local_8._0_1_ = 2;
      uVar11 = FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,3);
      _puStack_168 = CONCAT44(uVar11,0x6feaea);
      FUN_00408ed0();
      if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = local_b4[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uVar11 = (**(code **)((int)*param_2 + 0x44))();
      _puStack_168 = CONCAT44(uVar11,0x6feb99);
      iVar14 = FUN_005484e0();
      if (iVar14 == -1) {
        local_5c = 0xf;
        local_60 = 0;
        local_70 = (uint)local_70._1_3_ << 8;
        _puStack_168 = CONCAT44(0x6fefff,puStack_168);
        FUN_00409350();
        local_8 = 0x12;
        param_2 = (uint **)&stack0xfffffea0;
        _puStack_168 = CONCAT44(2,local_b4);
        puStack_16c = (uint *)0x6ff02d;
        FUN_00988bb0();
        local_8._0_1_ = 0x13;
        _puStack_168 = CONCAT44(0x6ff045,puStack_168);
        FUN_0042c180();
        local_8._0_1_ = 0x14;
        uVar11 = FUN_00988f20();
        local_8 = CONCAT31(local_8._1_3_,0x15);
        _puStack_168 = CONCAT44(uVar11,0x6ff06a);
        FUN_00448aa0();
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4[0] = local_b4[0] & 0xffffff00;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        param_2 = &puStack_168;
        local_80._4_4_ = ((int)local_e4[0] >> 0x1f) << 0xf | local_e4[0] >> 0x11;
        _puStack_168 = CONCAT44(local_80._4_4_,local_e4[0] << 0xf);
        puStack_16c = (uint *)local_98;
        puStack_170 = local_30;
        puStack_174 = (uint *)(iVar7 + 0xe0);
        puStack_178 = (uint *)0x6ff13e;
        uVar11 = FUN_004f1ba0();
        local_8 = 0x16;
        _puStack_168 = CONCAT44(uVar11,0x6ff151);
        FUN_00448aa0();
        local_8 = 0xffffffff;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        param_2 = (uint **)&stack0xfffffea0;
        _puStack_168 = CONCAT44(local_98,&local_c0);
        puStack_16c = local_30;
        puStack_170 = (uint *)(iVar7 + 0xe0);
        puStack_174 = (uint *)0x6ff198;
        uVar11 = FUN_004f22e0();
        local_8 = 0x17;
        _puStack_168 = CONCAT44(uVar11,0x6ff1ae);
        FUN_00448aa0();
        local_8 = 0xffffffff;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (*(int *)(iVar7 + 0x20) != 0) {
          uVar11 = FUN_004f3580();
          local_8 = 0x18;
          _puStack_168 = CONCAT44(uVar11,0x6ff1ee);
          FUN_00448aa0();
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
      else if (*(int *)(iVar7 + 0x1d0) == 0) {
        local_5c = 0xf;
        local_60 = 0;
        local_70 = (uint)local_70._1_3_ << 8;
        _puStack_168 = CONCAT44(0x6fec13,puStack_168);
        FUN_00409350();
        local_8 = 5;
        param_2 = (uint **)&stack0xfffffea0;
        _puStack_168 = CONCAT44(2,local_b4);
        puStack_16c = (uint *)0x6fec54;
        FUN_00988bb0();
        local_8._0_1_ = 6;
        _puStack_168 = CONCAT44(0x6fec6c,puStack_168);
        FUN_0042c180();
        local_8._0_1_ = 7;
        uVar11 = FUN_00988f20();
        local_8 = CONCAT31(local_8._1_3_,8);
        _puStack_168 = CONCAT44(uVar11,0x6fec91);
        FUN_00448aa0();
        iVar14 = (int)param_3;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4[0] = local_b4[0] & 0xffffff00;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        param_2 = (uint **)&stack0xfffffea0;
        _puStack_168 = CONCAT44(param_3,local_98);
        puStack_16c = local_30;
        puStack_170 = (uint *)(iVar7 + 0xe0);
        puStack_174 = (uint *)0x6fed5b;
        uVar11 = FUN_004f17b0();
        local_8 = 9;
        _puStack_168 = CONCAT44(uVar11,0x6fed6e);
        FUN_00448aa0();
        local_8 = 0xffffffff;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        _puStack_168 = CONCAT44(local_98,&local_c0);
        puStack_16c = local_30;
        puStack_170 = (uint *)(iVar7 + 0xe0);
        puStack_174 = (uint *)0x6fedad;
        uVar11 = FUN_004f2040();
        param_2 = (uint **)(in_ECX + 0x1c);
        local_8 = 10;
        _puStack_168 = CONCAT44(uVar11,0x6fedc4);
        FUN_00448aa0();
        local_8 = 0xffffffff;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00b31c36();
        puVar1 = (undefined8 *)(*(int *)(iVar7 + 200) + (uint)*(byte *)(iVar7 + 0x88 + iVar14) * 8);
        _puStack_168 = *puVar1;
        local_80 = CONCAT44(*(undefined4 *)((int)puVar1 + 4),(uint *)local_80);
        puStack_16c = (uint *)0x6fee33;
        local_e4[0] = extraout_EDX;
        lVar17 = __allmul();
        _puStack_168 = lVar17 >> 0xf;
        puStack_16c = (uint *)0x6fee49;
        lVar17 = __allmul();
        if (*(longlong *)(local_94[0x6b] + (uint)*(byte *)((int)local_94 + iVar14 + 0x16c) * 8) <
            lVar17 >> 0xf) {
          if ((*(int *)(iVar7 + 0x1e4) < 1) &&
             ((*(int *)(iVar7 + 0x1e4) < 0 || (*(uint *)(iVar7 + 0x1e0) < 0x8000)))) {
            FUN_009885d0();
            local_8 = 0xb;
            _puStack_168 = CONCAT44(0x6feec0,puStack_168);
            FUN_009a8ee0();
            local_8._0_1_ = 0xc;
            iVar7 = FUN_00475500();
            _puStack_168 = *(undefined8 *)(iVar7 + 0x6c);
            puStack_16c = (uint *)0x6feef0;
            FUN_009a9880();
            local_8._0_1_ = 0xd;
            uVar11 = FUN_00988fa0();
            local_8._0_1_ = 0xe;
            _puStack_168 = CONCAT44(uVar11,0x6fef16);
            FUN_00448aa0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8 = CONCAT31(local_8._1_3_,0xb);
            FUN_009a9740();
            FUN_00408ad0();
            ExceptionList = local_10;
            return 1;
          }
          _puStack_168 = CONCAT44(0x6fef6d,puStack_168);
          FUN_005659c0();
          local_8 = 0xf;
          _puStack_168 = CONCAT44(0x6fef88,puStack_168);
          uVar11 = FUN_0042c180();
          local_8._0_1_ = 0x10;
          _puStack_168 = CONCAT44(uVar11,0x6fef9a);
          uVar11 = FUN_00988fa0();
          local_8 = CONCAT31(local_8._1_3_,0x11);
          _puStack_168 = CONCAT44(uVar11,0x6fefae);
          FUN_00448aa0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          ExceptionList = local_10;
          return 1;
        }
      }
      else {
        uVar11 = FUN_004f52f0();
        local_8 = 4;
        _puStack_168 = CONCAT44(uVar11,0x6febc8);
        FUN_00448aa0();
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    ExceptionList = local_10;
    return 1;
  }
  pbVar8 = (byte *)(iVar14 + 0x6c);
  if (0xf < *(uint *)(iVar14 + 0x80)) {
    pbVar8 = *(byte **)pbVar8;
  }
  pcVar15 = "GFX_resources";
  do {
    bVar2 = *pbVar8;
    bVar16 = bVar2 < (byte)*pcVar15;
    if (bVar2 != *pcVar15) {
LAB_006fea42:
      iVar14 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_006fea47;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar8[1];
    bVar16 = bVar2 < (byte)pcVar15[1];
    if (bVar2 != pcVar15[1]) goto LAB_006fea42;
    pbVar8 = pbVar8 + 2;
    pcVar15 = pcVar15 + 2;
  } while (bVar2 != 0);
  iVar14 = 0;
LAB_006fea47:
  if (iVar14 == 0) goto LAB_006fea4f;
LAB_006ff219:
  pbVar8 = (byte *)(**(code **)((int)*param_2 + 0x44))();
  if (0xf < *(uint *)(pbVar8 + 0x14)) {
    pbVar8 = *(byte **)pbVar8;
  }
  pcVar15 = "build_factory_progress";
  do {
    bVar2 = *pbVar8;
    bVar16 = bVar2 < (byte)*pcVar15;
    if (bVar2 != *pcVar15) {
LAB_006ff250:
      local_60 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_006ff255;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar8[1];
    bVar16 = bVar2 < (byte)pcVar15[1];
    if (bVar2 != pcVar15[1]) goto LAB_006ff250;
    pbVar8 = pbVar8 + 2;
    pcVar15 = pcVar15 + 2;
  } while (bVar2 != 0);
  local_60 = 0;
LAB_006ff255:
  if (local_60 == 0) {
    local_5c = 0xf;
    local_70 = local_70 & 0xffffff00;
    _puStack_168 = CONCAT44(0x6ff279,puStack_168);
    FUN_00409350();
    local_8 = 0x19;
    FUN_004f3800();
    local_8._0_1_ = 0x1a;
    _puStack_168 = CONCAT44(0x6ff2a5,puStack_168);
    FUN_0042c180();
    local_8._0_1_ = 0x1b;
    uVar11 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    _puStack_168 = CONCAT44(uVar11,0x6ff2ca);
    FUN_00448aa0();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    local_8 = 0x1d;
    _puStack_168 = CONCAT44(*(int *)(iVar7 + 0x17c),0x6ff377);
    pcVar15 = __itoa(*(int *)(iVar7 + 0x17c),local_140,10);
    do {
      cVar4 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar4 != '\0');
    _puStack_168 = CONCAT44(0x6ff394,puStack_168);
    FUN_00409350();
    iVar14 = (*(int *)(*(int *)(iVar7 + 0x18) + 0xb8) * 1000) / 1000;
    iVar14 = ((iVar14 - *(int *)(iVar7 + 0x17c)) * 100) / iVar14;
    local_80 = 0xf00000000;
    local_90[0] = local_90[0] & 0xffffff00;
    local_8._0_1_ = 0x1f;
    local_8._1_3_ = 0;
    _puStack_168 = CONCAT44(iVar14,0x6ff3f1);
    pcVar15 = __itoa(iVar14,local_140,10);
    do {
      cVar4 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar4 != '\0');
    _puStack_168 = CONCAT44(0x6ff416,puStack_168);
    FUN_00409350();
    puStack_16c = local_30;
    _puStack_168 = CONCAT44(local_90,&DAT_00dfb974);
    local_8._0_1_ = 0x20;
    puStack_170 = (uint *)0x6ff43d;
    uVar11 = FUN_0043ec10();
    local_8 = CONCAT31(local_8._1_3_,0x21);
    _puStack_168 = CONCAT44(uVar11,0x6ff450);
    FUN_00448aa0();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_80._4_4_) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_80._4_4_ = 0xf;
    local_80._0_4_ = (uint *)0x0;
    local_90[0] = local_90[0] & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    param_2 = (uint **)(*(int *)(DAT_012588e8 + 0xb0c) + *(int *)(iVar7 + 0x17c) * 0x18);
    _puStack_168 = CONCAT44(0x6ff4ef,puStack_168);
    FUN_0043b700();
    local_8 = 0x22;
    _puStack_168 = CONCAT44(0x6ff50a,puStack_168);
    uVar11 = FUN_0042c180();
    local_8 = CONCAT31(local_8._1_3_,0x23);
    _puStack_168 = CONCAT44(uVar11,0x6ff51e);
    FUN_00408ed0();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
LAB_006ff809:
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (local_3c < 0x10) {
      ExceptionList = local_10;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)((int)*param_2 + 0x44))();
  cVar4 = FUN_0040b360();
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (cVar4 != '\0') {
    _puStack_168 = CONCAT44(0x6ff57c,puStack_168);
    FUN_00409350();
    local_8 = 0x24;
    FUN_004f3800();
    local_8._0_1_ = 0x25;
    _puStack_168 = CONCAT44(0x6ff5a8,puStack_168);
    FUN_0042c180();
    local_8._0_1_ = 0x26;
    uVar11 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0x27);
    _puStack_168 = CONCAT44(uVar11,0x6ff5cd);
    FUN_00448aa0();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    param_2 = (uint **)FUN_009888f0();
    local_8 = 0x28;
    FUN_004f34d0();
    uVar11 = FUN_009888f0();
    local_8._0_1_ = 0x29;
    puStack_16c = local_30;
    _puStack_168 = CONCAT44(uVar11,&DAT_00dfb974);
    puStack_170 = (uint *)0x6ff6b2;
    uVar11 = FUN_0043ec10();
    local_8 = CONCAT31(local_8._1_3_,0x2a);
    _puStack_168 = CONCAT44(uVar11,0x6ff6c5);
    FUN_00448aa0();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    if (*(int *)(iVar7 + 0x1d0) != 0) {
      FUN_004f52f0();
      local_8 = 0x2b;
      uVar11 = FUN_00988fa0();
      local_8 = CONCAT31(local_8._1_3_,0x2c);
      _puStack_168 = CONCAT44(uVar11,0x6ff778);
      FUN_00448aa0();
      FUN_00408ad0();
      local_8 = 0xffffffff;
      FUN_00408ad0();
    }
    param_2 = (uint **)(*(int *)(DAT_012588e8 + 0xb0c) + *(int *)(iVar7 + 0x17c) * 0x18);
    _puStack_168 = CONCAT44(0x6ff7bf,puStack_168);
    FUN_0043b700();
    local_8 = 0x2d;
    _puStack_168 = CONCAT44(0x6ff7da,puStack_168);
    uVar11 = FUN_0042c180();
    local_8 = CONCAT31(local_8._1_3_,0x2e);
    _puStack_168 = CONCAT44(uVar11,0x6ff7ed);
    FUN_00408ed0();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto LAB_006ff809;
  }
  piVar9 = (int *)*local_94;
  _puStack_168 = CONCAT44(0x6ff84f,puStack_168);
  local_54 = piVar9;
  FUN_00409350();
  local_8 = 0x2f;
  piVar9 = (int *)(**(code **)(*piVar9 + 0x44))();
  local_8 = 0xffffffff;
  if (0xf < local_5c) {
    _puStack_168 = CONCAT44(&UNK_006ff880,puStack_168);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((uint **)piVar9 == param_2) {
    param_2 = (uint **)&stack0xfffffe9c;
    _puStack_168 = CONCAT44(local_e4[0] << 0xf,local_30);
    puStack_16c = (uint *)(iVar7 + 0xe0);
    puStack_170 = (uint *)0x6ff8ba;
    uVar13 = FUN_004ef710();
    _puStack_168 = (ulonglong)uVar13;
    local_8 = 0x30;
    puStack_16c = (uint *)0x6ff8cd;
    FUN_00448aa0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return 1;
  }
  FUN_009885d0();
  local_8 = 0x31;
  _puStack_168 = CONCAT44(0x6ff90b,puStack_168);
  piVar9 = (int *)(**(code **)(*local_54 + 0x3c))();
  bVar16 = (uint **)piVar9 == param_2;
  local_8 = 0xffffffff;
  _puStack_168 = CONCAT44(0x6ff920,puStack_168);
  FUN_00408ad0();
  if (bVar16) {
    param_2 = *(uint ***)(*(int *)(iVar7 + 0x18) + 0xc4);
    _puStack_168 = CONCAT44(&param_2,local_e4);
    puStack_170 = local_30;
    puStack_16c = (uint *)0xdfe430;
    puStack_174 = (uint *)0x6ff950;
    puStack_16c = (uint *)FUN_004d6040();
    _puStack_168 = 0xffffffff00000000;
    local_8 = 0x32;
    puStack_170 = (uint *)0x6ff966;
    FUN_00448aa0();
    _puStack_168 = CONCAT44(0x6ff96e,puStack_168);
    FUN_00408ad0();
    ExceptionList = local_10;
    return 1;
  }
  _puStack_168 = CONCAT44(0x6ff990,puStack_168);
  FUN_009885d0();
  local_8 = 0x33;
  local_34 = 1;
  puStack_168 = (uint *)0x6ff9ab;
  puVar5 = local_50;
  piVar9 = (int *)(**(code **)(*local_54 + 0x3c))();
  if ((uint **)piVar9 == param_2) {
LAB_006ff9e1:
    bVar16 = true;
  }
  else {
    puStack_168 = (uint *)0x6ff9bd;
    FUN_009885d0();
    local_8 = 0x34;
    local_34 = 3;
    puStack_16c = (uint *)0x6ff9d8;
    puStack_168 = local_30;
    piVar9 = (int *)(**(code **)(*local_54 + 0x44))();
    bVar16 = false;
    if ((uint **)piVar9 == param_2) goto LAB_006ff9e1;
  }
  if ((local_34 & 2) != 0) {
    local_34 = local_34 & 0xfffffffd;
    puStack_168 = (uint *)0x6ff9f7;
    FUN_00408ad0();
  }
  local_8 = 0xffffffff;
  if ((local_34 & 1) != 0) {
    local_34 = local_34 & 0xfffffffe;
    puStack_168 = (uint *)0x6ffa10;
    FUN_00408ad0();
  }
  piVar9 = local_94;
  if (bVar16) {
    puStack_168 = (uint *)0xffffffff;
    puStack_16c = (uint *)0x0;
    puStack_170 = (uint *)(local_94 + 0x70);
    puStack_174 = (uint *)0x6ffa2e;
    FUN_00408ed0();
    _puStack_168 = CONCAT44(puVar5,0xffffffff);
    puStack_16c = (uint *)0x0;
    puStack_170 = (uint *)(piVar9 + 0x77);
    puStack_174 = (uint *)0x6ffa3e;
    FUN_00408ed0();
    ExceptionList = local_10;
    return 1;
  }
  puStack_168 = (uint *)0x6ffa60;
  FUN_009885d0();
  local_8 = 0x35;
  _puStack_168 = CONCAT44(puVar5,local_30);
  puStack_16c = (uint *)0x6ffa74;
  piVar9 = (int *)(**(code **)(*local_54 + 0x34))();
  bVar16 = (uint **)piVar9 == param_2;
  local_8 = 0xffffffff;
  puStack_16c = (uint *)0x6ffa89;
  FUN_00408ad0();
  if (bVar16) {
    puStack_16c = (uint *)0x6ffaa0;
    FUN_009885d0();
    local_8 = 0x36;
    puStack_16c = (uint *)0x6ffab4;
    FUN_009885d0();
    puStack_170 = &local_88;
    local_8._0_1_ = 0x37;
    puStack_174 = (uint *)0x6ffac7;
    puStack_16c = local_30;
    param_2 = (uint **)FUN_009a8ee0();
    local_8._0_1_ = 0x38;
    puStack_16c = (uint *)0x6ffad3;
    iVar7 = FUN_00475500();
    puStack_178 = (uint *)*(undefined8 *)(iVar7 + 0x6c);
    puStack_174 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    puStack_170 = (uint *)*(undefined8 *)(iVar7 + 0x74);
    puStack_16c = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    puStack_17c = (uint *)0x6ffaf9;
    puStack_16c = (uint *)FUN_009a9880();
    local_8._0_1_ = 0x39;
    puStack_170 = (uint *)0x6ffb0b;
    FUN_00988fa0();
    puStack_16c = local_50;
    local_8._0_1_ = 0x3a;
    puStack_170 = (uint *)0x6ffb23;
    FUN_00988f20();
    local_8._0_1_ = 0x3b;
    puStack_16c = (uint *)0x6ffb2e;
    FUN_00989020();
    puStack_16c = (uint *)0x6ffb39;
    FUN_00408ad0();
    puStack_16c = (uint *)0x6ffb41;
    FUN_00408ad0();
    puStack_16c = (uint *)0x6ffb4c;
    FUN_00408ad0();
    puStack_16c = &local_88;
    local_8 = CONCAT31(local_8._1_3_,0x37);
    puStack_170 = (uint *)0x6ffb5c;
    FUN_009a9740();
    puStack_16c = (uint *)0x6ffb64;
    FUN_00408ad0();
    local_8 = 0xffffffff;
    puStack_16c = (uint *)0x6ffb73;
    FUN_00408ad0();
    puStack_16c = (uint *)0xa;
    puStack_170 = (uint *)0x6ffb7e;
    FUN_00989690();
    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_bc * 4) + 0xaf0) == '\0') {
      puStack_16c = (uint *)0x6ffbab;
      FUN_009885d0();
      puStack_170 = &local_88;
      local_8 = 0x3c;
      puStack_174 = (uint *)0x6ffbc1;
      puStack_16c = local_30;
      param_2 = (uint **)FUN_009a8ee0();
      local_8._0_1_ = 0x3d;
      puStack_16c = (uint *)0x6ffbcd;
      iVar7 = FUN_00475500();
      puStack_178 = (uint *)*(undefined8 *)(iVar7 + 0x6c);
      puStack_174 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
      puStack_170 = (uint *)*(undefined8 *)(iVar7 + 0x74);
      puStack_16c = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
      puStack_17c = (uint *)0x6ffbf0;
      puStack_16c = (uint *)FUN_009a9880();
      local_8._0_1_ = 0x3e;
      puStack_170 = (uint *)0x6ffc05;
      FUN_00988fa0();
      local_8._0_1_ = 0x3f;
      puStack_16c = (uint *)0x6ffc13;
      FUN_00989020();
      puStack_16c = (uint *)0x6ffc1e;
      FUN_00408ad0();
      puStack_16c = (uint *)0x6ffc26;
      FUN_00408ad0();
      puStack_16c = &local_88;
      local_8 = CONCAT31(local_8._1_3_,0x3c);
      puStack_170 = (uint *)0x6ffc36;
      FUN_009a9740();
      local_8 = 0xffffffff;
      puStack_16c = (uint *)0x6ffc45;
      FUN_00408ad0();
      puStack_16c = (uint *)0x6;
      puStack_170 = local_104;
      puStack_174 = (uint *)0x6ffc71;
      (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_bc * 4) + 0xaa8) + 0x20))();
      local_8 = 0x40;
      puStack_16c = (uint *)0x6ffc7d;
      FUN_00989020();
      local_8 = 0xffffffff;
      puStack_16c = (uint *)0x6ffc8f;
      FUN_00408ad0();
    }
    local_84 = "DIPLOMACY_PRIO_NONE";
    local_80 = 0xdff0b400dff0a0;
    local_78 = "DIPLOMACY_PRIO_HIGH";
    puStack_16c = (uint *)0x6ffcba;
    FUN_009885d0();
    puStack_170 = &local_88;
    local_8 = 0x41;
    puStack_174 = (uint *)0x6ffcd0;
    puStack_16c = local_30;
    FUN_009a8ee0();
    local_8._0_1_ = 0x42;
    puStack_16c = (uint *)0x6ffcdb;
    iVar7 = FUN_00475500();
    puStack_178 = (uint *)*(undefined8 *)(iVar7 + 0x6c);
    puStack_174 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    puStack_170 = (uint *)*(undefined8 *)(iVar7 + 0x74);
    puStack_16c = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    puStack_17c = (uint *)0x6ffcfd;
    puStack_16c = (uint *)FUN_009a9880();
    puStack_170 = local_b4;
    local_8._0_1_ = 0x43;
    puStack_174 = (uint *)0x6ffd18;
    puStack_174 = (uint *)FUN_0042c180();
    local_8._0_1_ = 0x44;
    puStack_178 = (uint *)0x6ffd2d;
    FUN_00988fa0();
    local_8._0_1_ = 0x45;
    puStack_16c = (uint *)0x6ffd3b;
    FUN_00989020();
    puStack_16c = (uint *)0x6ffd46;
    FUN_00408ad0();
    puStack_16c = (uint *)0x6ffd51;
    FUN_00408ad0();
    puStack_16c = (uint *)0x6ffd59;
    FUN_00408ad0();
    puStack_16c = &local_88;
    local_8 = CONCAT31(local_8._1_3_,0x41);
    puStack_170 = (uint *)0x6ffd69;
    FUN_009a9740();
    local_8 = 0xffffffff;
    puStack_16c = (uint *)0x6ffd78;
    FUN_00408ad0();
    puStack_16c = (uint *)0x6ffd85;
    FUN_009885d0();
    puStack_170 = &local_88;
    local_8 = 0x46;
    puStack_174 = (uint *)0x6ffd9b;
    puStack_16c = local_50;
    FUN_009a8ee0();
    local_8._0_1_ = 0x47;
    puStack_16c = (uint *)0x6ffda6;
    iVar7 = FUN_00475500();
    puStack_178 = (uint *)*(undefined8 *)(iVar7 + 0x6c);
    puStack_174 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    puStack_170 = (uint *)*(undefined8 *)(iVar7 + 0x74);
    puStack_16c = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    puStack_17c = (uint *)0x6ffdcb;
    FUN_009a9880();
    local_8._0_1_ = 0x48;
    puStack_16c = (uint *)0x6ffdd7;
    FUN_00989020();
    puStack_16c = (uint *)0x6ffde2;
    FUN_00408ad0();
    puStack_16c = &local_88;
    local_8 = CONCAT31(local_8._1_3_,0x46);
    puStack_170 = (uint *)0x6ffdf2;
    FUN_009a9740();
    puStack_16c = (uint *)0x6ffdfa;
    FUN_00408ad0();
    ExceptionList = local_10;
    return 1;
  }
  puStack_16c = (uint *)0x6ffe1c;
  FUN_009885d0();
  local_8 = 0x49;
  puStack_170 = (uint *)0x6ffe30;
  puStack_16c = local_30;
  piVar9 = (int *)(**(code **)(*local_54 + 0x34))();
  bVar16 = (uint **)piVar9 == param_2;
  local_8 = 0xffffffff;
  puStack_170 = (uint *)0x6ffe45;
  FUN_00408ad0();
  if (bVar16) {
    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_bc * 4) + 0xaf8) == '\0') {
      puStack_170 = (uint *)0x6ffe7a;
      FUN_009885d0();
      local_8 = 0x4a;
      puStack_170 = (uint *)0x6ffe8e;
      FUN_009885d0();
      puStack_174 = &local_88;
      local_8._0_1_ = 0x4b;
      puStack_178 = (uint *)0x6ffea1;
      puStack_170 = local_30;
      FUN_009a8ee0();
      local_8._0_1_ = 0x4c;
      puStack_170 = (uint *)0x6ffeac;
      iVar7 = FUN_00475500();
      puStack_17c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
      puStack_178 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
      puStack_174 = (uint *)*(undefined8 *)(iVar7 + 0x74);
      puStack_170 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
      puStack_180 = (uint *)0x6ffed1;
      puStack_170 = (uint *)FUN_009a9880();
      local_8._0_1_ = 0x4d;
      puStack_174 = (uint *)0x6ffee3;
      FUN_00988fa0();
      puStack_170 = local_50;
      local_8._0_1_ = 0x4e;
      puStack_174 = (uint *)0x6ffefb;
      FUN_00988f20();
      local_8._0_1_ = 0x4f;
      puStack_170 = (uint *)0x6fff06;
      FUN_00989020();
      puStack_170 = (uint *)0x6fff11;
      FUN_00408ad0();
      puStack_170 = (uint *)0x6fff19;
      FUN_00408ad0();
      puStack_170 = (uint *)0x6fff24;
      FUN_00408ad0();
      puStack_170 = &local_88;
      local_8 = CONCAT31(local_8._1_3_,0x4b);
      puStack_174 = (uint *)0x6fff34;
      FUN_009a9740();
      puStack_170 = (uint *)0x6fff3c;
      FUN_00408ad0();
      local_8 = 0xffffffff;
      puStack_170 = (uint *)0x6fff4b;
      FUN_00408ad0();
      puStack_170 = (uint *)0x6fff5b;
      FUN_009885d0();
      puStack_174 = &local_88;
      local_8 = 0x50;
      puStack_178 = (uint *)0x6fff71;
      puStack_170 = local_b4;
      FUN_009a8ee0();
      local_8._0_1_ = 0x51;
      puStack_170 = (uint *)0x6fff7c;
      iVar7 = FUN_00475500();
      puStack_17c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
      puStack_178 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
      puStack_174 = (uint *)*(undefined8 *)(iVar7 + 0x74);
      puStack_170 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
      puStack_180 = (uint *)0x6fffa1;
      FUN_009a9880();
      local_8._0_1_ = 0x52;
      puStack_170 = (uint *)0x6fffac;
      FUN_00989020();
      puStack_170 = (uint *)0x6fffb7;
      FUN_00408ad0();
      puStack_170 = &local_88;
      local_8 = CONCAT31(local_8._1_3_,0x50);
      puStack_174 = (uint *)0x6fffc7;
      FUN_009a9740();
      local_8 = 0xffffffff;
      puStack_170 = (uint *)0x6fffd8;
      FUN_00408ad0();
      puStack_170 = (uint *)0x7;
      puStack_174 = (uint *)local_dc;
      puStack_178 = (uint *)0x700004;
      (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_bc * 4) + 0xaa8) + 0x20))();
      local_8 = 0x53;
      puStack_170 = (uint *)0x700010;
      FUN_00989020();
      local_8 = 0xffffffff;
      puStack_170 = (uint *)0x70001e;
      FUN_00408ad0();
    }
    else if (*(char *)(iVar7 + 0x180) == '\0') {
      puStack_170 = (uint *)0x700116;
      FUN_009885d0();
      local_8 = 0x5a;
      puStack_170 = (uint *)0x70012a;
      FUN_009885d0();
      puStack_174 = &local_88;
      local_8._0_1_ = 0x5b;
      puStack_178 = (uint *)0x70013d;
      puStack_170 = local_30;
      FUN_009a8ee0();
      local_8._0_1_ = 0x5c;
      puStack_170 = (uint *)0x700148;
      iVar7 = FUN_00475500();
      puStack_17c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
      puStack_178 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
      puStack_174 = (uint *)*(undefined8 *)(iVar7 + 0x74);
      puStack_170 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
      puStack_180 = (uint *)0x70016d;
      puStack_170 = (uint *)FUN_009a9880();
      local_8._0_1_ = 0x5d;
      puStack_174 = (uint *)0x700182;
      FUN_00988fa0();
      puStack_170 = local_50;
      local_8._0_1_ = 0x5e;
      puStack_174 = (uint *)0x70019a;
      FUN_00988f20();
      local_8._0_1_ = 0x5f;
      puStack_170 = (uint *)0x7001a5;
      FUN_00989020();
      puStack_170 = (uint *)0x7001b0;
      FUN_00408ad0();
      puStack_170 = (uint *)0x7001bb;
      FUN_00408ad0();
      puStack_170 = (uint *)0x7001c6;
      FUN_00408ad0();
      puStack_170 = &local_88;
      local_8 = CONCAT31(local_8._1_3_,0x5b);
      puStack_174 = (uint *)0x7001d6;
      FUN_009a9740();
      puStack_170 = (uint *)0x7001de;
      FUN_00408ad0();
      local_8 = 0xffffffff;
      puStack_170 = (uint *)0x7001ed;
      FUN_00408ad0();
      puStack_170 = (uint *)0xa;
      puStack_174 = (uint *)0x7001f8;
      FUN_00989690();
    }
    else {
      puStack_170 = (uint *)0x700035;
      FUN_009885d0();
      local_8 = 0x54;
      puStack_170 = (uint *)0x700049;
      FUN_009885d0();
      puStack_174 = &local_88;
      local_8._0_1_ = 0x55;
      puStack_178 = (uint *)0x70005c;
      puStack_170 = local_30;
      FUN_009a8ee0();
      local_8._0_1_ = 0x56;
      puStack_170 = (uint *)0x700067;
      iVar7 = FUN_00475500();
      puStack_17c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
      puStack_178 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
      puStack_174 = (uint *)*(undefined8 *)(iVar7 + 0x74);
      puStack_170 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
      puStack_180 = (uint *)0x70008c;
      puStack_170 = (uint *)FUN_009a9880();
      local_8._0_1_ = 0x57;
      puStack_174 = (uint *)0x7000a1;
      FUN_00988fa0();
      puStack_170 = local_50;
      local_8._0_1_ = 0x58;
      puStack_174 = (uint *)0x7000b9;
      FUN_00988f20();
      local_8._0_1_ = 0x59;
      puStack_170 = (uint *)0x7000c4;
      FUN_00989020();
      puStack_170 = (uint *)0x7000cf;
      FUN_00408ad0();
      puStack_170 = (uint *)0x7000da;
      FUN_00408ad0();
      puStack_170 = (uint *)0x7000e5;
      FUN_00408ad0();
      puStack_170 = &local_88;
      local_8 = CONCAT31(local_8._1_3_,0x55);
      puStack_174 = (uint *)0x7000f5;
      FUN_009a9740();
      puStack_170 = (uint *)0x7000fd;
      FUN_00408ad0();
      local_8 = 0xffffffff;
      puStack_170 = (uint *)0x70010c;
      FUN_00408ad0();
    }
    puStack_170 = (uint *)0x700205;
    FUN_009885d0();
    puStack_174 = &local_88;
    local_8 = 0x60;
    puStack_178 = (uint *)0x70021b;
    puStack_170 = local_30;
    FUN_009a8ee0();
    local_8._0_1_ = 0x61;
    puStack_170 = (uint *)0x700226;
    iVar7 = FUN_00475500();
    puStack_17c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
    puStack_178 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    puStack_174 = (uint *)*(undefined8 *)(iVar7 + 0x74);
    puStack_170 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    puStack_180 = (uint *)0x70024b;
    puStack_178 = (uint *)FUN_009a9880();
    puStack_170 = (uint *)0xffffffff;
    puStack_174 = (uint *)0x0;
    local_8._0_1_ = 0x62;
    puStack_17c = (uint *)0x70025c;
    FUN_00408ed0();
    puStack_170 = (uint *)0x700263;
    FUN_00408ad0();
    puStack_170 = &local_88;
    local_8 = CONCAT31(local_8._1_3_,0x60);
    puStack_174 = (uint *)0x700273;
    FUN_009a9740();
    puStack_170 = (uint *)0x70027b;
    FUN_00408ad0();
    ExceptionList = local_10;
    return 1;
  }
  puStack_170 = (uint *)0x70029d;
  FUN_009885d0();
  local_8 = 99;
  puStack_174 = (uint *)0x7002b1;
  puStack_170 = local_30;
  piVar9 = (int *)(**(code **)(*local_54 + 0x34))();
  bVar16 = (uint **)piVar9 == param_2;
  local_8 = 0xffffffff;
  puStack_174 = (uint *)0x7002c6;
  FUN_00408ad0();
  if (bVar16) {
    puStack_174 = (uint *)0x7002d7;
    cVar4 = FUN_0047e560();
    if (cVar4 == '\0') {
      puStack_174 = (uint *)0x700422;
      FUN_009885d0();
      local_8 = 0x6c;
      puStack_174 = (uint *)0x700436;
      FUN_009885d0();
      puStack_178 = &local_88;
      local_8._0_1_ = 0x6d;
      puStack_17c = (uint *)0x700449;
      puStack_174 = local_30;
      FUN_009a8ee0();
      local_8._0_1_ = 0x6e;
      puStack_174 = (uint *)0x700454;
      iVar7 = FUN_00475500();
      puStack_180 = (uint *)*(undefined8 *)(iVar7 + 0x6c);
      puStack_17c = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
      puStack_178 = (uint *)*(undefined8 *)(iVar7 + 0x74);
      puStack_174 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
      uStack_188._4_4_ = (char *)0x700479;
      FUN_009a9880();
      puStack_174 = local_50;
      local_8._0_1_ = 0x6f;
      puStack_178 = (uint *)0x70048e;
      FUN_00988f20();
      local_8._0_1_ = 0x70;
      puStack_174 = (uint *)0x700499;
      FUN_00989020();
      puStack_174 = (uint *)0x7004a4;
      FUN_00408ad0();
      puStack_174 = (uint *)0x7004af;
      FUN_00408ad0();
      puStack_174 = &local_88;
      local_8 = CONCAT31(local_8._1_3_,0x6d);
      puStack_178 = (uint *)0x7004bf;
      FUN_009a9740();
      puStack_174 = (uint *)0x7004c7;
      FUN_00408ad0();
      local_8 = 0xffffffff;
      puStack_174 = (uint *)0x7004d6;
      FUN_00408ad0();
      puStack_174 = (uint *)0x7004e6;
      FUN_009885d0();
      puStack_178 = &local_88;
      local_8 = 0x71;
      puStack_17c = (uint *)0x7004fc;
      puStack_174 = local_b4;
      FUN_009a8ee0();
      local_8._0_1_ = 0x72;
      puStack_174 = (uint *)0x700507;
      iVar7 = FUN_00475500();
      puStack_180 = (uint *)*(undefined8 *)(iVar7 + 0x6c);
      puStack_17c = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
      puStack_178 = (uint *)*(undefined8 *)(iVar7 + 0x74);
      puStack_174 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
      uStack_188._4_4_ = (char *)0x70052c;
      FUN_009a9880();
      local_8._0_1_ = 0x73;
      puStack_174 = (uint *)0x700538;
      FUN_00989020();
      puStack_174 = (uint *)0x700543;
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x71);
    }
    else {
      puStack_174 = (uint *)0x7002ec;
      FUN_009885d0();
      local_8 = 100;
      puStack_174 = (uint *)0x700300;
      FUN_009885d0();
      puStack_178 = &local_88;
      local_8._0_1_ = 0x65;
      puStack_17c = (uint *)0x700313;
      puStack_174 = local_30;
      FUN_009a8ee0();
      local_8._0_1_ = 0x66;
      puStack_174 = (uint *)0x70031e;
      iVar7 = FUN_00475500();
      puStack_180 = (uint *)*(undefined8 *)(iVar7 + 0x6c);
      puStack_17c = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
      puStack_178 = (uint *)*(undefined8 *)(iVar7 + 0x74);
      puStack_174 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
      uStack_188._4_4_ = (char *)0x700343;
      FUN_009a9880();
      puStack_174 = local_50;
      local_8._0_1_ = 0x67;
      puStack_178 = (uint *)0x700358;
      FUN_00988f20();
      local_8._0_1_ = 0x68;
      puStack_174 = (uint *)0x700363;
      FUN_00989020();
      puStack_174 = (uint *)0x70036e;
      FUN_00408ad0();
      puStack_174 = (uint *)0x700379;
      FUN_00408ad0();
      puStack_174 = &local_88;
      local_8 = CONCAT31(local_8._1_3_,0x65);
      puStack_178 = (uint *)0x700389;
      FUN_009a9740();
      puStack_174 = (uint *)0x700391;
      FUN_00408ad0();
      local_8 = 0xffffffff;
      puStack_174 = (uint *)0x7003a0;
      FUN_00408ad0();
      puStack_174 = (uint *)0x7003b0;
      FUN_009885d0();
      puStack_178 = &local_88;
      local_8 = 0x69;
      puStack_17c = (uint *)0x7003c6;
      puStack_174 = local_b4;
      FUN_009a8ee0();
      local_8._0_1_ = 0x6a;
      puStack_174 = (uint *)0x7003d1;
      iVar7 = FUN_00475500();
      puStack_180 = (uint *)*(undefined8 *)(iVar7 + 0x6c);
      puStack_17c = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
      puStack_178 = (uint *)*(undefined8 *)(iVar7 + 0x74);
      puStack_174 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
      uStack_188._4_4_ = (char *)0x7003f6;
      FUN_009a9880();
      local_8._0_1_ = 0x6b;
      puStack_174 = (uint *)0x700402;
      FUN_00989020();
      puStack_174 = (uint *)0x70040d;
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x69);
    }
    puStack_174 = &local_88;
    puStack_178 = (uint *)0x700553;
    FUN_009a9740();
    local_8 = 0xffffffff;
    puStack_174 = (uint *)0x700565;
    FUN_00408ad0();
    puStack_178 = *(uint **)((int)param_3 + 0x111c);
    puStack_180 = *(uint **)(*(int *)(DAT_012587e4 + 4) + local_bc * 4);
    puStack_174 = (uint *)local_b8;
    puStack_17c = (uint *)local_dc;
    uStack_188._4_4_ = (char *)0x700595;
    FUN_0052dd70();
    local_8 = 0x74;
    puStack_174 = (uint *)0x7005a3;
    FUN_00989020();
    puStack_174 = (uint *)0x7005ae;
    FUN_00408ad0();
    ExceptionList = local_10;
    return 1;
  }
  puStack_174 = (uint *)0x7005d0;
  FUN_009885d0();
  local_8 = 0x75;
  puStack_178 = (uint *)0x7005e4;
  puStack_174 = local_30;
  piVar9 = (int *)(**(code **)(*local_54 + 0x34))();
  bVar16 = (uint **)piVar9 == param_2;
  local_8 = 0xffffffff;
  puStack_178 = (uint *)0x7005f9;
  FUN_00408ad0();
  if (bVar16) {
    puStack_178 = (uint *)0x700610;
    FUN_009885d0();
    local_8 = 0x76;
    puStack_178 = (uint *)0x700624;
    FUN_009885d0();
    puStack_17c = &local_88;
    local_8._0_1_ = 0x77;
    puStack_180 = (uint *)0x700637;
    puStack_178 = local_30;
    FUN_009a8ee0();
    local_8._0_1_ = 0x78;
    puStack_178 = (uint *)0x700642;
    iVar7 = FUN_00475500();
    uStack_188._4_4_ = (char *)*(undefined8 *)(iVar7 + 0x6c);
    puStack_180 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    puStack_17c = (uint *)*(undefined8 *)(iVar7 + 0x74);
    puStack_178 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    uStack_188._0_4_ = (uint *)0x700667;
    FUN_009a9880();
    puStack_178 = local_50;
    local_8._0_1_ = 0x79;
    puStack_17c = (uint *)0x70067c;
    FUN_00988f20();
    local_8._0_1_ = 0x7a;
    puStack_178 = (uint *)0x700687;
    FUN_00989020();
    puStack_178 = (uint *)0x700692;
    FUN_00408ad0();
    puStack_178 = (uint *)0x70069d;
    FUN_00408ad0();
    puStack_178 = &local_88;
    local_8 = CONCAT31(local_8._1_3_,0x77);
    puStack_17c = (uint *)0x7006ad;
    FUN_009a9740();
    puStack_178 = (uint *)0x7006b5;
    FUN_00408ad0();
    local_8 = 0xffffffff;
    puStack_178 = (uint *)0x7006c4;
    FUN_00408ad0();
    iVar7 = (int)param_3;
    puStack_180 = *(uint **)(*(int *)(DAT_012587e4 + 4) + local_bc * 4);
    puStack_178 = *(uint **)((int)param_3 + 0x111c);
    puStack_17c = local_104;
    uStack_188._4_4_ = (char *)0x7006f3;
    FUN_0052d1e0();
    local_8 = 0x7b;
    puStack_178 = (uint *)0x7006ff;
    FUN_00989020();
    local_8 = 0xffffffff;
    puStack_178 = (uint *)0x700711;
    FUN_00408ad0();
    puStack_178 = (uint *)0x700721;
    FUN_009885d0();
    local_8 = 0x7c;
    puStack_178 = (uint *)0x700735;
    FUN_009885d0();
    local_8._0_1_ = 0x7d;
    puStack_17c = &local_88;
    puStack_180 = (uint *)0x700748;
    puStack_178 = local_30;
    param_2 = (uint **)FUN_009a8ee0();
    local_8._0_1_ = 0x7e;
    puStack_178 = (uint *)0x700754;
    iVar14 = FUN_00475500();
    uStack_188._4_4_ = (char *)*(undefined8 *)(iVar14 + 0x6c);
    puStack_180 = (uint *)((ulonglong)*(undefined8 *)(iVar14 + 0x6c) >> 0x20);
    puStack_17c = (uint *)*(undefined8 *)(iVar14 + 0x74);
    puStack_178 = (uint *)((ulonglong)*(undefined8 *)(iVar14 + 0x74) >> 0x20);
    uStack_188._0_4_ = (uint *)0x70077a;
    FUN_009a9880();
    puStack_178 = local_b4;
    local_8._0_1_ = 0x7f;
    puStack_17c = (uint *)0x700792;
    FUN_00988f20();
    local_8._0_1_ = 0x80;
    puStack_178 = (uint *)0x70079e;
    FUN_00989020();
    puStack_178 = (uint *)0x7007a9;
    FUN_00408ad0();
    puStack_178 = (uint *)0x7007b4;
    FUN_00408ad0();
    puStack_178 = &local_88;
    local_8 = CONCAT31(local_8._1_3_,0x7d);
    puStack_17c = (uint *)0x7007c4;
    FUN_009a9740();
    puStack_178 = (uint *)0x7007cc;
    FUN_00408ad0();
    local_8 = 0xffffffff;
    puStack_178 = (uint *)0x7007de;
    FUN_00408ad0();
    puStack_178 = *(uint **)(*(int *)(DAT_012586dc + 0x10) + 0x54);
    param_2 = &puStack_178;
    puStack_17c = *(uint **)(iVar7 + 0x111c);
    puStack_180 = (uint *)0x700800;
    FUN_006fe610();
    puStack_178 = local_104;
    puStack_17c = (uint *)0x70080e;
    puVar10 = (uint *)FUN_009888f0();
    local_8 = 0x81;
    puStack_178 = *(uint **)(*(int *)(DAT_012586dc + 0x10) + 0x54);
    param_2 = &puStack_178;
    puStack_17c = *(uint **)(iVar7 + 0x111c);
    puStack_180 = (uint *)0x70083d;
    FUN_006fe610();
    puStack_178 = local_120;
    puStack_17c = (uint *)0x70084b;
    puStack_180 = (uint *)FUN_009888f0();
    puStack_17c = (uint *)0xe0f8a0;
    uStack_188._4_4_ = "NUMSPECIALFACTORIES";
    uStack_188._0_4_ = (uint *)local_dc;
    local_8._0_1_ = 0x82;
    uStack_18c = 0x70086c;
    puStack_178 = puVar10;
    FUN_0043ec10();
    local_8 = CONCAT31(local_8._1_3_,0x83);
    puStack_178 = (uint *)0x700878;
    FUN_00989020();
    puStack_178 = (uint *)0x700883;
    FUN_00408ad0();
    puStack_178 = (uint *)0x70088e;
    FUN_00408ad0();
    puStack_178 = (uint *)0x700899;
    FUN_00408ad0();
    ExceptionList = local_10;
    return 1;
  }
  puStack_178 = (uint *)0x7008b8;
  FUN_009885d0();
  local_8 = 0x84;
  local_34 = local_34 | 4;
  puStack_178 = local_50;
  puStack_17c = (uint *)0x7008d1;
  piVar9 = (int *)(**(code **)(*local_54 + 0x34))();
  if ((uint **)piVar9 == param_2) {
LAB_00700904:
    bVar16 = true;
  }
  else {
    puStack_17c = (uint *)0x7008e3;
    FUN_009885d0();
    local_8 = 0x85;
    local_34 = local_34 | 8;
    puStack_180 = (uint *)0x7008fb;
    puStack_17c = local_30;
    piVar9 = (int *)(**(code **)(*local_54 + 0x34))();
    bVar16 = false;
    if ((uint **)piVar9 == param_2) goto LAB_00700904;
  }
  if ((local_34 & 8) != 0) {
    local_34 = local_34 & 0xfffffff7;
    puStack_17c = (uint *)0x70091a;
    FUN_00408ad0();
  }
  local_8 = 0xffffffff;
  if ((local_34 & 4) != 0) {
    local_34 = local_34 & 0xfffffffb;
    puStack_17c = (uint *)0x700933;
    FUN_00408ad0();
  }
  if (bVar16) {
    puStack_17c = *(uint **)((int)param_3 + 0x111c);
    uStack_188._0_4_ = *(uint **)(*(int *)(DAT_012587e4 + 4) + local_bc * 4);
    puStack_180 = (uint *)local_b8;
    uStack_188._4_4_ = local_dc;
    uStack_18c = 0x700969;
    FUN_0052e5c0();
    local_8 = 0x86;
    puStack_17c = (uint *)0x700977;
    FUN_00989020();
    puStack_17c = (uint *)0x700982;
    FUN_00408ad0();
    ExceptionList = local_10;
    return 1;
  }
  puStack_17c = (uint *)0x7009a4;
  FUN_009885d0();
  local_8 = 0x87;
  local_34 = local_34 | 0x10;
  puStack_180 = (uint *)0x7009bc;
  puStack_17c = local_30;
  piVar9 = (int *)(**(code **)(*local_54 + 0x34))();
  if (param_2 == (uint **)piVar9) {
    puStack_180 = (uint *)0x7009c8;
    cVar4 = FUN_0047e560();
    param_2 = (uint **)CONCAT13(1,param_2._0_3_);
    if (cVar4 != '\0') goto LAB_007009d4;
  }
  param_2 = (uint **)((uint)param_2 & 0xffffff);
LAB_007009d4:
  local_8 = 0xffffffff;
  if ((local_34 & 0x10) != 0) {
    puStack_180 = (uint *)0x7009e9;
    FUN_00408ad0();
  }
  if (param_2._3_1_ != '\0') {
    puStack_180 = (uint *)0x700a00;
    FUN_009885d0();
    local_8 = 0x88;
    puStack_180 = local_104;
    uStack_188._4_4_ = (char *)0x700a18;
    uStack_188._4_4_ = (char *)(**(code **)(**(int **)(iVar7 + 0x18) + 0x18))();
    local_8._0_1_ = 0x89;
    uStack_188._0_4_ = (uint *)0x700a2d;
    FUN_00988fa0();
    local_8._0_1_ = 0x8a;
    uStack_188._0_4_ = (uint *)0x700a44;
    uStack_188._4_4_ = (char *)local_30;
    uStack_18c = FUN_00988f20();
    uStack_188._4_4_ = (char *)0xffffffff;
    uStack_188._0_4_ = (uint *)0x0;
    local_8 = CONCAT31(local_8._1_3_,0x8b);
    puStack_190 = (uint *)0x700a54;
    FUN_00408ed0();
    uStack_188._4_4_ = (char *)0x700a5b;
    FUN_00408ad0();
    uStack_188._4_4_ = (char *)0x700a66;
    FUN_00408ad0();
    uStack_188._4_4_ = (char *)0x700a71;
    FUN_00408ad0();
    local_8 = 0xffffffff;
    uStack_188._4_4_ = (char *)0x700a80;
    FUN_00408ad0();
    uStack_188._4_4_ = (char *)0x700a8d;
    FUN_009885d0();
    local_8 = 0x8c;
    uStack_188._0_4_ = *(uint **)(iVar7 + 0xd8);
    param_2 = (uint **)&uStack_188;
    uStack_188._4_4_ = *(char **)(iVar7 + 0xdc);
    uStack_18c = 2;
    puStack_190 = local_104;
    uStack_188._4_4_ = (char *)FUN_00988bb0();
    uStack_188._0_4_ = local_120;
    local_8._0_1_ = 0x8d;
    uStack_18c = 0x700ad6;
    FUN_0042c180();
    local_8._0_1_ = 0x8e;
    uStack_188._0_4_ = (uint *)0x700aed;
    uStack_188._4_4_ = (char *)local_50;
    FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0x8f);
    uStack_188._4_4_ = (char *)0x700af8;
    FUN_00989020();
    uStack_188._4_4_ = (char *)0x700b03;
    FUN_00408ad0();
    uStack_188._4_4_ = (char *)0x700b0e;
    FUN_00408ad0();
    uStack_188._4_4_ = (char *)0x700b19;
    FUN_00408ad0();
    local_8 = 0xffffffff;
    uStack_188._4_4_ = (char *)0x700b28;
    FUN_00408ad0();
    uStack_18c = ((int)local_e4[0] >> 0x1f) << 0xf | local_e4[0] >> 0x11;
    param_2 = &puStack_190;
    puStack_190 = (uint *)(local_e4[0] << 0xf);
    uStack_188 = local_80;
    local_80._0_4_ = puStack_190;
    local_80._4_4_ = uStack_18c;
    FUN_004f1ba0(iVar7 + 0xe0,local_dc,local_98);
    local_8 = 0x90;
    uStack_188._4_4_ = (char *)0x700b82;
    FUN_00989020();
    local_8 = 0xffffffff;
    uStack_188._4_4_ = (char *)0x700b94;
    FUN_00408ad0();
    param_2 = (uint **)&uStack_188;
    uStack_188._0_4_ = (uint *)local_80;
    uStack_188._4_4_ = (char *)local_80._4_4_;
    uStack_18c = local_98;
    puStack_190 = &local_c0;
    FUN_004f22e0(iVar7 + 0xe0,local_dc);
    local_8 = 0x91;
    uStack_188._4_4_ = (char *)0x700bd7;
    FUN_00989020();
    local_8 = 0xffffffff;
    uStack_188._4_4_ = (char *)0x700be9;
    FUN_00408ad0();
    if (*(int *)(iVar7 + 0x20) == 0) {
      ExceptionList = local_10;
      return 1;
    }
    uStack_188._4_4_ = (char *)0x700c00;
    FUN_004f3580();
    local_8 = 0x92;
    uStack_188._4_4_ = (char *)0x700c0c;
    FUN_00989020();
    uStack_188._4_4_ = (char *)0x700c13;
    FUN_00408ad0();
    ExceptionList = local_10;
    return 1;
  }
  puStack_180 = (uint *)0x700c32;
  FUN_009885d0();
  local_8 = 0x93;
  puStack_180 = local_104;
  uStack_188._4_4_ = (char *)0x700c4a;
  uStack_188._4_4_ = (char *)(**(code **)(**(int **)(iVar7 + 0x18) + 0x18))();
  local_8._0_1_ = 0x94;
  uStack_188._0_4_ = (uint *)0x700c5f;
  FUN_00988fa0();
  uStack_188._4_4_ = (char *)local_30;
  local_8._0_1_ = 0x95;
  uStack_188._0_4_ = (uint *)0x700c77;
  uStack_18c = FUN_00988f20();
  uStack_188._4_4_ = (char *)0xffffffff;
  uStack_188._0_4_ = (uint *)0x0;
  local_8 = CONCAT31(local_8._1_3_,0x96);
  puStack_190 = (uint *)0x700c87;
  FUN_00408ed0();
  uStack_188._4_4_ = (char *)0x700c8e;
  FUN_00408ad0();
  uStack_188._4_4_ = (char *)0x700c99;
  FUN_00408ad0();
  uStack_188._4_4_ = (char *)0x700ca4;
  FUN_00408ad0();
  uStack_188._4_4_ = (char *)0x700cac;
  FUN_00408ad0();
  ExceptionList = local_10;
  return 1;
}

