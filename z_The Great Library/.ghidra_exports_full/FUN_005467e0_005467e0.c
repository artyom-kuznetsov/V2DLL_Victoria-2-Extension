// FUN_005467e0 @ 005467e0 body=[[005467e0, 00546958] [0054695c, 00546985] [00546989, 005469ae] [005469b2, 005469d1] [005469d5, 005469eb] [005469ef, 00546a09] [00546a0d, 00546b47] [00546b4b, 00546b71] [00546b75, 00546b9a] [00546b9e, 00546bc0] [00546bc4, 00546bdd] [00546be1, 00546bfb] [00546bff, 00546d0f] [00546d13, 00546d39] [00546d3d, 00546d62] [00546d66, 00546d85] [00546d89, 00546da5] [00546da9, 00546dc8] [00546dcc, 00546de9] [00546ded, 00546eac] [00546eb0, 00546ed4] [00546ed8, 00546eee] [00546ef2, 00546f0e] [00546f12, 00546f37] [00546f3b, 00546f60] [00546f64, 00546fb4] [00546fb8, 00546fde] [00546fe2, 00547008] [0054700c, 00547020]]


/* WARNING: Removing unreachable block (ram,0x00546f55) */
/* WARNING: Removing unreachable block (ram,0x00546ffd) */

undefined1 * FUN_005467e0(int param_1,undefined1 *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  uint local_11c [4];
  undefined4 local_10c;
  uint local_108;
  uint local_100 [4];
  int local_f0;
  uint local_ec;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  int *local_74;
  int local_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  int local_50;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8151d;
  local_10 = ExceptionList;
  local_50 = 0;
  ExceptionList = &local_10;
  if (DAT_0125eadc == (int *)0x0) {
    ExceptionList = &local_10;
    local_50 = FUN_00aae9af(0x9c);
    local_8 = 0;
    if (local_50 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00576fe0(local_50);
    }
    FUN_0057ab10(uVar5);
  }
  local_74 = DAT_0125eadc;
  local_8 = 1;
  iVar8 = *DAT_0125eadc;
  local_14 = (int *)0x0;
  if (0 < (int)(DAT_0125eadc[1] - iVar8 & 0xfffffffcU)) {
    do {
      piVar7 = *(int **)(iVar8 + (int)local_14 * 4);
      if (piVar7[0x15] != 0) {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfd76c,3);
        local_8._0_1_ = 2;
        pcVar9 = &DAT_00df8518;
        if (*(int *)(*(int *)(*(int *)(param_1 + 0xbcc) + 0x2b8) + piVar7[0xb9] * 4) == 0) {
          pcVar9 = &DAT_00df8510;
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        pcVar6 = pcVar9;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar9,(int)pcVar6 - (int)(pcVar9 + 1));
        local_8._0_1_ = 3;
        uVar5 = (**(code **)(*piVar7 + 0x18))(local_6c);
        local_8._0_1_ = 4;
        FUN_00988f20(local_4c);
        local_8._0_1_ = 5;
        FUN_00988f20(uVar5);
        local_8._0_1_ = 6;
        uVar5 = FUN_00988f20(local_30);
        local_8._0_1_ = 7;
        FUN_00448aa0(uVar5,0,0xffffffff);
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_90[0]);
        }
        local_7c = 0xf;
        local_80 = 0;
        local_90[0] = local_90[0] & 0xffffff00;
        if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_ac);
        }
        local_98 = 0xf;
        local_9c = 0;
        local_ac = local_ac & 0xffffff00;
        if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_c8);
        }
        local_b4 = 0xf;
        local_b8 = 0;
        local_c8 = local_c8 & 0xffffff00;
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_6c[0]);
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c[0]);
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30[0]);
        }
      }
      iVar8 = *local_74;
      local_14 = (int *)((int)local_14 + 1);
    } while ((int)local_14 < local_74[1] - iVar8 >> 2);
  }
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4[0] = local_e4[0] & 0xffffff00;
  local_8._0_1_ = 8;
  iVar8 = local_74[0x1a] - local_74[0x19] >> 2;
  local_70 = 0;
  piVar7 = local_74;
  local_50 = iVar8;
  if (0 < iVar8) {
    do {
      piVar2 = *(int **)(piVar7[0x19] + local_70 * 4);
      local_14 = piVar2;
      if (piVar2[0x31] != 0) {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350(&DAT_00dedc20,2);
        local_8._0_1_ = 9;
        for (piVar7 = *(int **)(param_1 + 0x4f8); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
          if ((int *)*piVar7 == piVar2) {
            pcVar9 = &DAT_00df8518;
            goto LAB_00546ab4;
          }
        }
        pcVar9 = &DAT_00df8510;
LAB_00546ab4:
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        pcVar6 = pcVar9;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar9,(int)pcVar6 - (int)(pcVar9 + 1));
        local_8._0_1_ = 10;
        uVar5 = (**(code **)(*local_14 + 0x18))(local_90);
        local_8._0_1_ = 0xb;
        FUN_00988f20(local_4c);
        local_8._0_1_ = 0xc;
        FUN_00988f20(uVar5);
        local_8._0_1_ = 0xd;
        uVar5 = FUN_00988f20(local_30);
        local_8._0_1_ = 0xe;
        FUN_00448aa0(uVar5,0,0xffffffff);
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_6c[0]);
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_c8);
        }
        local_b4 = 0xf;
        local_b8 = 0;
        local_c8 = local_c8 & 0xffffff00;
        if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_ac);
        }
        local_98 = 0xf;
        local_9c = 0;
        local_ac = local_ac & 0xffffff00;
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_90[0]);
        }
        local_7c = 0xf;
        local_80 = 0;
        uVar3 = local_90[0] >> 8;
        local_90[0] = uVar3 << 8;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c[0]);
        }
        local_8._0_1_ = 8;
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30[0]);
        }
        piVar7 = (int *)local_14[0x10c];
        if (piVar7 != (int *)0x0) {
          local_7c = 0xf;
          local_80 = 0;
          local_90[0] = uVar3 << 8;
          FUN_00409350(&DAT_00dffa80,3);
          local_8._0_1_ = 0xf;
          pcVar9 = &DAT_00df8518;
          if (*(int *)(*(int *)(*(int *)(param_1 + 0xbcc) + 0x2b8) + piVar7[0xb9] * 4) == 0) {
            pcVar9 = &DAT_00df8510;
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          pcVar6 = pcVar9;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar9,(int)pcVar6 - (int)(pcVar9 + 1));
          local_8._0_1_ = 0x10;
          uVar5 = (**(code **)(*piVar7 + 0x18))(local_11c);
          local_8._0_1_ = 0x11;
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          FUN_00409350(&DAT_00dfbfa4,2);
          local_8._0_1_ = 0x12;
          FUN_00988f20(local_30);
          local_8._0_1_ = 0x13;
          FUN_00988f20(uVar5);
          local_8._0_1_ = 0x14;
          uVar5 = FUN_00988f20(local_90);
          local_8._0_1_ = 0x15;
          FUN_00448aa0(uVar5,0,0xffffffff);
          if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_6c[0]);
          }
          local_58 = 0xf;
          local_5c = 0;
          local_6c[0] = local_6c[0] & 0xffffff00;
          if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_c8);
          }
          local_b4 = 0xf;
          local_b8 = 0;
          local_c8 = local_c8 & 0xffffff00;
          if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_ac);
          }
          local_98 = 0xf;
          local_9c = 0;
          local_ac = local_ac & 0xffffff00;
          if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_4c[0]);
          }
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_11c[0]);
          }
          local_108 = 0xf;
          local_10c = 0;
          local_11c[0] = local_11c[0] & 0xffffff00;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_30[0]);
          }
          local_8._0_1_ = 8;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_90[0]);
          }
        }
        local_8._0_1_ = 8;
        local_38 = 0xf;
        local_3c = 0;
        local_58 = 0xf;
        local_5c = 0;
        local_98 = 0xf;
        local_9c = 0;
        local_b4 = 0xf;
        local_b8 = 0;
        FUN_00448740(&DAT_00dee2cc,1);
        piVar7 = local_74;
        iVar8 = local_50;
      }
      local_70 = local_70 + 1;
    } while (local_70 < iVar8);
  }
  FUN_00988f20(local_e4);
  local_8._0_1_ = 0x16;
  uVar4 = (undefined1)local_8;
  local_8._0_1_ = 0x16;
  if (local_f0 == 0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    local_8._0_1_ = uVar4;
    FUN_00408ed0(local_100,0,0xffffffff);
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_100[0]);
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100[0] = local_100[0] & 0xffffff00;
    if (local_d0 < 0x10) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e4[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x17;
  FUN_00475d50(local_6c);
  local_8._0_1_ = 0x18;
  FUN_00988f20(local_30);
  local_8 = CONCAT31(local_8._1_3_,0x19);
  FUN_00988f20(local_100);
  if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_11c[0]);
  }
  local_108 = 0xf;
  local_10c = 0;
  local_11c[0] = local_11c[0] & 0xffffff00;
  if (local_58 < 0x10) {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (local_ec < 0x10) {
      local_ec = 0xf;
      local_f0 = 0;
      local_100[0] = local_100[0] & 0xffffff00;
      if (local_d0 < 0x10) {
        ExceptionList = local_10;
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e4[0]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_100[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_6c[0]);
}

