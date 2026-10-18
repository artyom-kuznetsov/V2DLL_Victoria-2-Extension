// FUN_007832d0 @ 007832d0 body=[[007832d0, 007833e4] [007833e8, 0078340f] [00783413, 00783474] [00783478, 007834c7] [007834cb, 0078356f] [00783573, 007836b4] [007836b8, 007836e2] [007836e6, 0078370b] [0078370f, 00783734] [00783738, 00783757] [0078375b, 00783771] [00783775, 00783795] [00783799, 007837c0] [007837c4, 007837e4] [007837e8, 007837fc]]


undefined4 FUN_007832d0(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *_Dst;
  char *pcVar8;
  int iVar9;
  char local_15c [32];
  uint local_13c;
  undefined4 local_12c;
  uint local_128;
  uint local_120;
  undefined4 local_110;
  uint local_10c;
  uint local_104;
  undefined4 local_f4;
  uint local_f0;
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  int local_94 [3];
  char *local_88 [6];
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38;
  undefined4 *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7b0b3;
  local_10 = ExceptionList;
  local_88[0] = "big_ship_icon";
  local_88[1] = "small_ship_icon";
  local_88[2] = "trade_ship_icon";
  local_88[3] = "big_ship_value";
  local_88[4] = "small_ship_value";
  local_88[5] = "trade_ship_value";
  local_94[0] = 4;
  local_94[1] = 5;
  local_94[2] = 6;
  iVar9 = 0;
  ExceptionList = &local_10;
  while( true ) {
    local_8 = 0xffffffff;
    pcVar8 = local_88[iVar9];
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    pcVar4 = pcVar8;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar8,(int)pcVar4 - (int)(pcVar8 + 1));
    local_8 = 0;
    pcVar8 = local_88[iVar9 + 3];
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    pcVar4 = pcVar8;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar8,(int)pcVar4 - (int)(pcVar8 + 1));
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar5 = (**(code **)(*param_1 + 0x44))(local_b0);
    if ((param_3 == iVar5) || (iVar5 = (**(code **)(*param_1 + 0x3c))(local_30), param_3 == iVar5))
    break;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_b0[0]);
    }
    iVar9 = iVar9 + 1;
    if (2 < iVar9) {
      ExceptionList = local_10;
      return 0;
    }
  }
  iVar9 = local_94[iVar9];
  uVar6 = FUN_005bdd50(local_cc,iVar9);
  local_8._0_1_ = 2;
  FUN_00408ed0(uVar6,0,0xffffffff);
  local_8._0_1_ = 1;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_cc[0]);
  }
  param_3 = 0;
  puVar7 = DAT_0125fdd8;
  if (DAT_0125fdd8 == (undefined4 *)0x0) {
    local_14 = FUN_00aae9af(0x1c);
    local_8._0_1_ = 3;
    if (local_14 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)FUN_008b0060();
    }
    puVar3 = DAT_0125fdd8;
    local_8 = CONCAT31(local_8._1_3_,4);
    local_14 = 0;
    if ((puVar7 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
      FUN_005c1a70(DAT_0125fdd8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar3);
    }
  }
  DAT_0125fdd8 = puVar7;
  local_8._0_1_ = 1;
  local_14 = (int)(DAT_0125fdd8[4] - DAT_0125fdd8[3]) >> 2;
  puVar7 = DAT_0125fdd8;
  if (0 < local_14) {
    do {
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)FUN_00aae9af(0x1c);
        local_8._0_1_ = 5;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7[1] = 0x1ff;
          *puVar7 = 0;
          local_34 = puVar7;
          _Dst = (void *)FUN_00aad56b(0x7fc);
          puVar7[2] = _Dst;
          _memset(_Dst,0,puVar7[1] * 4);
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
        }
        puVar3 = DAT_0125fdd8;
        local_8 = CONCAT31(local_8._1_3_,6);
        local_34 = (undefined4 *)0x0;
        if ((puVar7 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
          FUN_005c1a70(DAT_0125fdd8);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar3);
        }
        local_8._0_1_ = 1;
        DAT_0125fdd8 = puVar7;
      }
      piVar2 = *(int **)(puVar7[3] + param_3 * 4);
      if ((piVar2[0xd] == iVar9) &&
         (FUN_005dbf10(param_2,&local_38,piVar2), puVar7 = DAT_0125fdd8, 0 < local_38)) {
        local_d4 = 0xf;
        local_d8 = 0;
        local_e8[0] = local_e8[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfc7b4,3);
        local_8._0_1_ = 7;
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfc940,4);
        iVar5 = FUN_005dc050(piVar2);
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        local_8._0_1_ = 9;
        pcVar4 = __itoa(iVar5,local_15c,10);
        pcVar8 = pcVar4;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
        local_8._0_1_ = 10;
        (**(code **)(*piVar2 + 0x18))(local_cc);
        local_8._0_1_ = 0xb;
        FUN_00988f20(local_70);
        local_8._0_1_ = 0xc;
        FUN_00988f20(local_54);
        local_8._0_1_ = 0xd;
        uVar6 = FUN_00988f20(local_e8);
        local_8._0_1_ = 0xe;
        FUN_00448aa0(uVar6,0,0xffffffff);
        if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_120);
        }
        local_10c = 0xf;
        local_110 = 0;
        local_120 = local_120 & 0xffffff00;
        if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_13c);
        }
        local_128 = 0xf;
        local_12c = 0;
        local_13c = local_13c & 0xffffff00;
        if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_104);
        }
        local_f0 = 0xf;
        local_f4 = 0;
        local_104 = local_104 & 0xffffff00;
        if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_cc[0]);
        }
        local_b8 = 0xf;
        local_bc = 0;
        local_cc[0] = local_cc[0] & 0xffffff00;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54[0]);
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_70[0]);
        }
        local_8._0_1_ = 1;
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        puVar7 = DAT_0125fdd8;
        if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_e8[0]);
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 < local_14);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (local_9c < 0x10) {
    ExceptionList = local_10;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_b0[0]);
}

