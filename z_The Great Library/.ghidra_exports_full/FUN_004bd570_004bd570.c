// FUN_004bd570 @ 004bd570 body=[[004bd570, 004bd633] [004bd637, 004bd660] [004bd664, 004bd690] [004bd694, 004bd8c7] [004bd8cb, 004bd8fa] [004bd8fe, 004bd923] [004bd927, 004bd94c] [004bd950, 004bd975] [004bd979, 004bd99e] [004bd9a2, 004bd9c1] [004bd9c5, 004bd9db] [004bd9df, 004bd9fb] [004bd9ff, 004bda1e] [004bda22, 004bda42] [004bda46, 004bdb57] [004bdb5b, 004bdb75] [004bdb79, 004bdbbd] [004bdbc1, 004bdbdf] [004bdbe3, 004bdc07] [004bdc0b, 004bdc8d] [004bdc91, 004bdcac] [004bdcb0, 004bdcd0] [004bdcd4, 004bdcf7] [004bdcfb, 004bdded] [004bddf1, 004bde11] [004bde15, 004bdf5d] [004bdf61, 004bdf7e] [004bdf82, 004bdff5]]


undefined4 FUN_004bd570(int *param_1,undefined4 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_204 [4];
  undefined4 uStack_200;
  uint *puStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  uint *puStack_1e8;
  uint local_1d4 [4];
  undefined4 local_1c4;
  uint local_1c0;
  uint local_1b8 [4];
  undefined4 local_1a8;
  uint local_1a4;
  uint local_19c;
  undefined4 local_18c;
  uint local_188;
  uint local_180;
  undefined4 local_170;
  uint local_16c;
  uint local_164;
  undefined4 local_154;
  uint local_150;
  uint local_148 [4];
  undefined4 local_138;
  uint local_134;
  uint local_12c [4];
  undefined4 local_11c;
  uint local_118;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  int *local_d8;
  undefined4 local_d4;
  uint local_d0 [2];
  undefined1 local_c8 [4];
  undefined4 *local_c4;
  undefined4 *local_c0;
  uint local_bc;
  int local_b4;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined1 *local_5c;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_20;
  undefined8 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b75fa6;
  local_10 = ExceptionList;
  local_8 = 0;
  local_d4 = 0;
  puStack_1e8 = (uint *)0x1;
  local_118 = 0xf;
  local_11c = 0;
  local_12c[0] = local_12c[0] & 0xffffff00;
  uStack_1f0 = 0xdee2cc004bd5c7;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 1;
  puStack_1e8 = local_1d4;
  uStack_1f0 = CONCAT44(0x4bd5de,(undefined4)uStack_1f0);
  uVar5 = (**(code **)(*param_1 + 0x1c))();
  uStack_1f0 = CONCAT44(uVar5,local_1b8);
  local_8._0_1_ = 2;
  uStack_1f8 = CONCAT44(0x4bd5f9,(undefined4)uStack_1f8);
  FUN_0042c180();
  local_8._0_1_ = 3;
  uStack_1f0 = CONCAT44(local_12c,0x4bd611);
  FUN_00988f20();
  local_d4 = 1;
  if (0xf < local_1a4) {
    uStack_1f0 = CONCAT44(local_1b8[0],&UNK_004bd634);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1a4 = 0xf;
  local_1a8 = 0;
  local_1b8[0] = local_1b8[0] & 0xffffff00;
  if (0xf < local_1c0) {
    uStack_1f0 = CONCAT44(local_1d4[0],&UNK_004bd661);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_1c0 = 0xf;
  local_1c4 = 0;
  local_1d4[0] = local_1d4[0] & 0xffffff00;
  if (0xf < local_118) {
    uStack_1f0 = CONCAT44(local_12c[0],&UNK_004bd691);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c[0] = local_12c[0] & 0xffffff00;
  local_b4 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x4b] * 4);
  local_1c = CONCAT44(local_1c._4_4_,param_1[0x4a]);
  piVar1 = *(int **)(local_b4 + 0x83c);
  do {
    if (piVar1 == (int *)0x0) {
      if (param_1[0x59] == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)param_1[0x57];
      }
      piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(local_b4 + 0x20) * 0x10)
                        + *(int *)(iVar8 + 0x6c) * 4);
      if (piVar1 != (int *)0x0) {
        uStack_1f0 = CONCAT44(0x4bdd61,(undefined4)uStack_1f0);
        cVar4 = (**(code **)(*piVar1 + 0x34))();
        if (cVar4 != '\0') {
          FUN_004a83d0(piVar1);
          iVar8 = FUN_0053ee50(local_b4);
          if (iVar8 != 0) {
            iVar6 = piVar1[0x44];
            uStack_1f0 = 0x200df8514;
            local_44 = 0xf;
            local_48 = 0;
            local_58[0] = local_58[0] & 0xffffff00;
            uStack_1f8 = CONCAT44(0x4bddb0,(undefined4)uStack_1f8);
            FUN_00409350();
            local_5c = (undefined1 *)&uStack_1f0;
            local_8 = 0x1b;
            uStack_1f0 = CONCAT44(4,iVar6);
            uStack_1f8 = CONCAT44(local_78,0x4bddca);
            FUN_00988a50();
            local_8._0_1_ = 0x1c;
            uStack_1f0 = CONCAT44(local_58,0x4bdddf);
            FUN_00988f20();
            if (0xf < local_64) {
              uStack_1f0 = CONCAT44(local_78[0],&UNK_004bddee);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_64 = 0xf;
            local_68 = 0;
            local_78[0] = local_78[0] & 0xffffff00;
            local_8._0_1_ = 0x1f;
            uVar3 = (undefined1)local_8;
            local_8._0_1_ = 0x1f;
            if (local_44 < 0x10) {
              local_44 = 0xf;
              local_48 = 0;
              local_58[0] = local_58[0] & 0xffffff00;
              if (iVar6 < 1) {
                local_8._0_1_ = uVar3;
                if (iVar6 < 0) {
                  uStack_1f0 = CONCAT44(local_94,0x4bde55);
                  uVar5 = FUN_00988fa0();
                  local_8._0_1_ = 0x21;
                }
                else {
                  uStack_1f0 = CONCAT44(local_94,0x4bde6f);
                  uVar5 = FUN_00988fa0();
                  local_8._0_1_ = 0x22;
                }
              }
              else {
                uStack_1f0 = CONCAT44(local_94,0x4bde36);
                uVar5 = FUN_00988fa0();
                local_8._0_1_ = 0x20;
              }
              uStack_1f0 = 0xffffffff00000000;
              uStack_1f8 = CONCAT44(uVar5,0x4bde85);
              FUN_00408ed0();
              local_8._0_1_ = 0x1f;
              uStack_1f0 = CONCAT44(0x4bde91,(undefined4)uStack_1f0);
              FUN_00408ad0();
              uStack_1f0 = 0x200df8514;
              local_e0 = 0xf;
              local_e4 = 0;
              local_f4[0] = local_f4[0] & 0xffffff00;
              uStack_1f8 = CONCAT44(0x4bdeba,(undefined4)uStack_1f8);
              FUN_00409350();
              uStack_1f0 = CONCAT44(local_148,iVar8);
              local_8._0_1_ = 0x23;
              uStack_1f8 = CONCAT44(0x4bdece,(undefined4)uStack_1f8);
              uVar5 = FUN_009790b0();
              local_8._0_1_ = 0x24;
              uStack_1f0 = CONCAT44(uVar5,0x4bdee3);
              FUN_00988fa0();
              local_8._0_1_ = 0x25;
              uStack_1f0 = CONCAT44(local_f4,0x4bdefe);
              uVar5 = FUN_00988f20();
              uStack_1f0 = CONCAT44(uVar5,"PARTY");
              puStack_1fc = local_110;
              uStack_1f8 = CONCAT44(local_94,&DAT_00df7e90);
              local_8._0_1_ = 0x26;
              uStack_200 = 0x4bdf25;
              uVar5 = FUN_0043ec10();
              local_8._0_1_ = 0x27;
              uStack_1f0 = CONCAT44(uVar5,0x4bdf3a);
              uVar5 = FUN_00988fa0();
              local_8 = CONCAT31(local_8._1_3_,0x28);
              uStack_1f0 = 0xffffffff00000000;
              uStack_1f8 = CONCAT44(uVar5,0x4bdf4f);
              FUN_00448aa0();
              if (local_28 < 0x10) {
                local_28 = 0xf;
                local_2c = 0;
                local_3c[0] = local_3c[0] & 0xffffff00;
                if (local_fc < 0x10) {
                  local_fc = 0xf;
                  local_100 = 0;
                  local_110[0] = local_110[0] & 0xffffff00;
                  uStack_1f0 = CONCAT44(0x4bdf9f,(undefined4)uStack_1f0);
                  FUN_00408ad0();
                  uStack_1f0 = CONCAT44(0x4bdfaa,(undefined4)uStack_1f0);
                  FUN_00408ad0();
                  uStack_1f0 = CONCAT44(0x4bdfb5,(undefined4)uStack_1f0);
                  FUN_00408ad0();
                  uStack_1f0 = CONCAT44(0x4bdfc0,(undefined4)uStack_1f0);
                  FUN_00408ad0();
                  uStack_1f0 = CONCAT44(0x4bdfcb,(undefined4)uStack_1f0);
                  FUN_00408ad0();
                  ExceptionList = local_10;
                  return param_2;
                }
                uStack_1f0 = CONCAT44(local_110[0],&UNK_004bdf7f);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              uStack_1f0 = CONCAT44(local_3c[0],&UNK_004bdf5e);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_1f0 = CONCAT44(local_58[0],&UNK_004bde12);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
      ExceptionList = local_10;
      return param_2;
    }
    local_d8 = (int *)piVar1[2];
    iVar8 = *piVar1;
    local_20 = auStack_204;
    uVar2 = (ulonglong)uStack_1f0 >> 0x20;
    uStack_1f0 = CONCAT44((int)uVar2,0xf);
    uStack_1f8 = uStack_1f8 & 0xffffffff;
    local_1c = 0;
    auStack_204[0] = 0;
    FUN_00408ed0(*(int *)(iVar8 + 0x54) + 0xc,0,0xffffffff);
    iVar6 = FUN_004bd2d0(param_1);
    if (iVar6 == 0) {
      iVar6 = local_1c._4_4_;
    }
    else {
      local_1c = *(undefined8 *)(iVar6 + 8);
      iVar6 = *(int *)(iVar6 + 0xc);
    }
    uStack_1f0 = 0x200df963c;
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    uStack_1f8 = CONCAT44(0x4bd74f,(undefined4)uStack_1f8);
    FUN_00409350();
    local_8 = 4;
    if (iVar6 < 0) {
LAB_004bd775:
      uStack_1f0 = 0x200df8510;
LAB_004bd77c:
      uStack_1f8 = CONCAT44(0x4bd787,(undefined4)uStack_1f8);
      FUN_00409350();
    }
    else {
      if ((0 < iVar6) || ((int)local_1c != 0)) {
        uStack_1f0 = 0x200df8518;
        goto LAB_004bd77c;
      }
      if ((iVar6 < 1) && (iVar6 < 0)) goto LAB_004bd775;
    }
    uStack_1f0 = 0x100ded950;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    uStack_1f8 = CONCAT44(0x4bd7b0,(undefined4)uStack_1f8);
    FUN_00409350();
    local_8._0_1_ = 5;
    uStack_1f0 = 0x400dfd228;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    uStack_1f8 = CONCAT44(0x4bd7cc,(undefined4)uStack_1f8);
    FUN_00409350();
    local_8._0_1_ = 6;
    uStack_1f0 = 0x100defdf4;
    local_bc = 0xf;
    local_c0 = (undefined4 *)0x0;
    local_d0[0] = local_d0[0] & 0xffffff00;
    uStack_1f8 = CONCAT44(0x4bd7f4,(undefined4)uStack_1f8);
    FUN_00409350();
    local_8._0_1_ = 7;
    piVar1 = *(int **)(iVar8 + 0x54);
    uStack_1f0 = CONCAT44(local_78,iVar8);
    uStack_1f8 = CONCAT44(0x4bd805,(undefined4)uStack_1f8);
    uVar5 = FUN_009790b0();
    local_8._0_1_ = 8;
    uStack_1f0 = CONCAT44(local_3c,0x4bd818);
    local_20 = (undefined1 *)(**(code **)(*piVar1 + 0x18))();
    local_8._0_1_ = 9;
    uStack_1f0 = CONCAT44(local_d0,0x4bd837);
    FUN_00988f20();
    local_8._0_1_ = 10;
    uStack_1f0 = CONCAT44(local_20,0x4bd84c);
    FUN_00988f20();
    local_8._0_1_ = 0xb;
    uStack_1f0 = CONCAT44(local_58,0x4bd861);
    FUN_00988f20();
    local_8._0_1_ = 0xc;
    uStack_1f0 = CONCAT44(uVar5,0x4bd873);
    FUN_00988f20();
    local_8._0_1_ = 0xd;
    uStack_1f0 = CONCAT44(local_b0,0x4bd88b);
    FUN_00988f20();
    local_8._0_1_ = 0xe;
    uStack_1f0 = CONCAT44(local_94,0x4bd8a3);
    uVar5 = FUN_00988f20();
    uStack_1f0 = 0xffffffff00000000;
    local_8._0_1_ = 0xf;
    uStack_1f8 = CONCAT44(uVar5,0x4bd8b3);
    FUN_00448aa0();
    if (0xf < local_188) {
      uStack_1f0 = CONCAT44(local_19c,&UNK_004bd8c8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_188 = 0xf;
    local_18c = 0;
    local_19c = local_19c & 0xffffff00;
    if (0xf < local_134) {
      uStack_1f0 = CONCAT44(local_148[0],&UNK_004bd8fb);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_134 = 0xf;
    local_138 = 0;
    local_148[0] = local_148[0] & 0xffffff00;
    if (0xf < local_150) {
      uStack_1f0 = CONCAT44(local_164,&UNK_004bd924);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_150 = 0xf;
    local_154 = 0;
    local_164 = local_164 & 0xffffff00;
    if (0xf < local_16c) {
      uStack_1f0 = CONCAT44(local_180,&UNK_004bd94d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_16c = 0xf;
    local_170 = 0;
    local_180 = local_180 & 0xffffff00;
    if (0xf < local_e0) {
      uStack_1f0 = CONCAT44(local_f4[0],&UNK_004bd976);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    if (0xf < local_fc) {
      uStack_1f0 = CONCAT44(local_110[0],&UNK_004bd99f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_fc = 0xf;
    local_100 = 0;
    local_110[0] = local_110[0] & 0xffffff00;
    if (0xf < local_28) {
      uStack_1f0 = CONCAT44(local_3c[0],&UNK_004bd9c2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    if (0xf < local_64) {
      uStack_1f0 = CONCAT44(local_78[0],&UNK_004bd9dc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_bc) {
      uStack_1f0 = CONCAT44(local_d0[0],&UNK_004bd9fc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = (undefined4 *)0x0;
    local_d0[0] = local_d0[0] & 0xffffff00;
    if (0xf < local_44) {
      uStack_1f0 = CONCAT44(local_58[0],&UNK_004bda1f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 4;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_9c) {
      uStack_1f0 = CONCAT44(local_b0[0],&UNK_004bda43);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    uStack_1f0 = 0x200df8514;
    if ((int)local_1c == 0 && local_1c._4_4_ == 0) {
      uStack_1f8 = CONCAT44(0x4bda76,(undefined4)uStack_1f8);
      FUN_00409350();
      local_8._0_1_ = 0x10;
      uStack_1f0 = 0x1a00dfd230;
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      uStack_1f8 = CONCAT44(0x4bda92,(undefined4)uStack_1f8);
      FUN_00409350();
      uStack_1f0 = CONCAT44(local_58,local_c8);
      local_8._0_1_ = 0x11;
      uStack_1f8 = CONCAT44(0x4bdaa6,(undefined4)uStack_1f8);
      local_20 = (undefined1 *)FUN_009a8ee0();
      local_8._0_1_ = 0x12;
      puVar7 = DAT_0125b5e0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        uStack_1f0 = 0x180004bdac0;
        local_5c = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0x13;
        if (local_5c == (undefined1 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          uStack_1f0 = CONCAT44(local_5c,0x4bdad4);
          puVar7 = (undefined4 *)FUN_00475150();
        }
        local_8._0_1_ = 0x14;
        local_5c = (undefined1 *)0x0;
        if ((puVar7 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          uStack_1f0 = 0x1004bdaf7;
          (**(code **)*DAT_0125b5e0)();
        }
      }
      DAT_0125b5e0 = puVar7;
      local_8._0_1_ = 0x12;
      uStack_1f8 = *(ulonglong *)(DAT_0125b5e0 + 0x1b);
      uStack_1f0 = *(undefined8 *)(DAT_0125b5e0 + 0x1d);
      puStack_1fc = (uint *)0x4bdb25;
      FUN_009a9880();
      local_8._0_1_ = 0x15;
      uStack_1f0 = CONCAT44(local_b0,0x4bdb3a);
      uVar5 = FUN_00988f20();
      uStack_1f0 = 0xffffffff00000000;
      local_8._0_1_ = 0x16;
      uStack_1f8 = CONCAT44(uVar5,0x4bdb4a);
      FUN_00448aa0();
      if (0xf < local_64) {
        uStack_1f0 = CONCAT44(local_78[0],&UNK_004bdb58);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      if (0xf < local_28) {
        uStack_1f0 = CONCAT44(local_3c[0],&UNK_004bdb76);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      local_8._0_1_ = 0x17;
      uStack_1f0 = CONCAT44(0x4bdb95,(undefined4)uStack_1f0);
      FUN_009adb70();
      puVar7 = local_c4;
      if (local_c4 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar7 == local_c0) {
            uStack_1f0 = CONCAT44(local_c4,&UNK_004bdbe0);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (0xf < (uint)puVar7[5]) break;
          puVar7[5] = 0xf;
          puVar7[4] = 0;
          *(undefined1 *)puVar7 = 0;
          puVar7 = puVar7 + 8;
        }
        uStack_1f0 = CONCAT44(*puVar7,&UNK_004bdbbe);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c4 = (undefined4 *)0x0;
      local_c0 = (undefined4 *)0x0;
      local_bc = 0;
      if (0xf < local_44) {
        uStack_1f0 = CONCAT44(local_58[0],&UNK_004bdc08);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
    }
    else {
      uStack_1f8 = CONCAT44(0x4bdc39,(undefined4)uStack_1f8);
      local_8._0_1_ = uVar3;
      FUN_00409350();
      local_8._0_1_ = 0x18;
      local_5c = (undefined1 *)&uStack_1f0;
      uStack_1f0 = local_1c;
      uStack_1f8 = CONCAT44(3,local_3c);
      puStack_1fc = (uint *)0x4bdc5b;
      FUN_00988bb0();
      local_8._0_1_ = 0x19;
      uStack_1f0 = CONCAT44(local_b0,0x4bdc70);
      uVar5 = FUN_00988f20();
      uStack_1f0 = 0xffffffff00000000;
      local_8._0_1_ = 0x1a;
      uStack_1f8 = CONCAT44(uVar5,0x4bdc80);
      FUN_00448aa0();
      if (0xf < local_64) {
        uStack_1f0 = CONCAT44(local_78[0],&UNK_004bdc8e);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      if (0xf < local_28) {
        uStack_1f0 = CONCAT44(local_3c[0],&UNK_004bdcad);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
    }
    if (0xf < local_9c) {
      local_8._0_1_ = 4;
      uStack_1f0 = CONCAT44(local_b0[0],&UNK_004bdcd1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    uStack_1f0 = 0x100dee2cc;
    uStack_1f8 = CONCAT44(0x4bdce3,(undefined4)uStack_1f8);
    FUN_00448740();
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_80) {
      uStack_1f0 = CONCAT44(local_94[0],&UNK_004bdcf8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    piVar1 = local_d8;
  } while( true );
}

