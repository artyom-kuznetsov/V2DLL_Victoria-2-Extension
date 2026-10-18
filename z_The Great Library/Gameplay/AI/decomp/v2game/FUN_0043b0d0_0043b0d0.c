// FUN_0043b0d0 @ 0043b0d0 body=[[0043b0d0, 0043b4b9] [0043b4bd, 0043b4e2] [0043b4e6, 0043b50b] [0043b50f, 0043b534] [0043b538, 0043b55d] [0043b561, 0043b586] [0043b58a, 0043b5ac] [0043b5b0, 0043b5c9] [0043b5cd, 0043b5e9] [0043b5ed, 0043b612] [0043b616, 0043b63f] [0043b643, 0043b663] [0043b667, 0043b683] [0043b687, 0043b6b6] [0043b6ba, 0043b6e5] [0043b6e9, 0043b6fe]]


undefined1 * FUN_0043b0d0(uint *param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  char local_1e4 [32];
  uint local_1c4;
  undefined4 local_1b4;
  uint local_1b0;
  uint local_1a8;
  undefined4 local_198;
  uint local_194;
  uint local_18c;
  undefined4 local_17c;
  uint local_178;
  uint local_170;
  undefined4 local_160;
  uint local_15c;
  uint local_154;
  undefined4 local_144;
  uint local_140;
  uint local_138;
  undefined4 local_128;
  uint local_124;
  uint local_11c [4];
  undefined4 local_10c;
  uint local_108;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  uint *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47a67;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  iVar1 = (int)(*param_1 + -43800000) / 0x18;
  dVar10 = (double)iVar1 / 365.0;
  local_20 = (int)dVar10;
  local_1c = 0;
  local_14 = 1;
  for (iVar5 = (iVar1 - (int)((float)(int)dVar10 * 365.0)) - DAT_00f1027c; -1 < iVar5;
      iVar5 = iVar5 - (&DAT_00f1027c)[local_1c]) {
    local_1c = local_1c + 1;
  }
  local_1c = local_1c + 1;
  iVar5 = 0;
  for (iVar6 = (iVar1 - (int)((float)(int)dVar10 * 365.0)) - DAT_00f1027c; -1 < iVar6;
      iVar6 = iVar6 - (&DAT_00f1027c)[iVar5]) {
    iVar5 = iVar5 + 1;
  }
  iVar8 = 0;
  iVar9 = 0;
  iVar6 = 0;
  local_18 = (uint *)0x0;
  if (1 < iVar5) {
    do {
      iVar8 = iVar8 + (&DAT_00f1027c)[iVar6];
      iVar9 = iVar9 + (&DAT_00f10280)[iVar6];
      iVar6 = iVar6 + 2;
    } while (iVar6 < iVar5 + -1);
  }
  if (iVar6 < iVar5) {
    iVar5 = (&DAT_00f1027c)[iVar6];
  }
  else {
    iVar5 = 0;
  }
  iVar1 = ((iVar1 - (int)((float)(int)dVar10 * 365.0)) - (iVar5 + iVar9 + iVar8)) + 1;
  if (iVar1 < 10) {
    local_108 = 0xf;
    local_10c = 0;
    local_11c[0] = local_11c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8144,1);
    local_18 = local_11c;
    local_8 = 1;
    local_14 = 3;
  }
  else {
    local_ec = 0xf;
    local_f0 = 0;
    local_100[0] = local_100[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_18 = local_100;
    local_8 = 2;
    local_14 = 5;
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8[0] = local_c8[0] & 0xffffff00;
  FUN_00409350(&DAT_00defd44,1);
  local_8 = 3;
  if (local_1c < 10) {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8144,1);
    param_1 = local_3c;
    local_8 = CONCAT31(local_8._1_3_,4);
    local_14 = local_14 | 8;
  }
  else {
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    param_1 = local_58;
    local_8 = 5;
    local_14 = local_14 | 0x10;
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  FUN_00409350(&DAT_00defd44,1);
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4[0] = local_e4[0] & 0xffffff00;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  pcVar3 = __itoa(iVar1,local_1e4,10);
  pcVar7 = pcVar3;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  local_8._0_1_ = 9;
  pcVar3 = __itoa(local_1c,local_1e4,10);
  pcVar7 = pcVar3;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
  local_7c = 0xf;
  local_80 = 0;
  local_90 = local_90 & 0xffffff00;
  local_8._0_1_ = 0xb;
  pcVar3 = __itoa(local_20,local_1e4,10);
  pcVar7 = pcVar3;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
  local_8._0_1_ = 0xc;
  FUN_00988f20(local_ac);
  local_8._0_1_ = 0xd;
  FUN_00988f20(param_1);
  local_8._0_1_ = 0xe;
  FUN_00988f20(local_74);
  local_8._0_1_ = 0xf;
  FUN_00988f20(local_c8);
  local_8._0_1_ = 0x10;
  FUN_00988f20(local_18);
  local_8._0_1_ = 0x11;
  uVar4 = FUN_00988f20(local_e4);
  local_8 = CONCAT31(local_8._1_3_,0x12);
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_154);
  }
  local_140 = 0xf;
  local_144 = 0;
  local_154 = local_154 & 0xffffff00;
  if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1c4);
  }
  local_1b0 = 0xf;
  local_1b4 = 0;
  local_1c4 = local_1c4 & 0xffffff00;
  if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_18c);
  }
  local_178 = 0xf;
  local_17c = 0;
  local_18c = local_18c & 0xffffff00;
  if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_138);
  }
  local_124 = 0xf;
  local_128 = 0;
  local_138 = local_138 & 0xffffff00;
  if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_170);
  }
  local_15c = 0xf;
  local_160 = 0;
  local_170 = local_170 & 0xffffff00;
  if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1a8);
  }
  local_194 = 0xf;
  local_198 = 0;
  local_1a8 = local_1a8 & 0xffffff00;
  if (local_7c < 0x10) {
    local_7c = 0xf;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e4[0]);
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_ac[0]);
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    if ((local_14 & 0x10) != 0) {
      local_14 = local_14 & 0xffffffef;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
    }
    if ((local_14 & 8) != 0) {
      local_14 = local_14 & 0xfffffff7;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
    }
    if (local_b4 < 0x10) {
      local_b4 = 0xf;
      local_b8 = 0;
      local_c8[0] = local_c8[0] & 0xffffff00;
      if ((local_14 & 4) != 0) {
        local_14 = local_14 & 0xfffffffb;
        if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_100[0]);
        }
        local_ec = 0xf;
        local_f0 = 0;
        local_100[0] = local_100[0] & 0xffffff00;
      }
      if (((local_14 & 2) != 0) && (0xf < local_108)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_11c[0]);
      }
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c8[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_90);
}

