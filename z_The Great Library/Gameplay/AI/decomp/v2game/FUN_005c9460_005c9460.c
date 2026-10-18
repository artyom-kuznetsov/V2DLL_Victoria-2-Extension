// FUN_005c9460 @ 005c9460 body=[[005c9460, 005c952f] [005c9533, 005c95d5] [005c95d9, 005c960a] [005c960e, 005c9811] [005c9815, 005c983f] [005c9843, 005c9871] [005c9875, 005c989d] [005c98a1, 005c98c8] [005c98cc, 005c998c] [005c9990, 005c99b1] [005c99b5, 005c99df] [005c99e3, 005c9a30] [005c9a34, 005c9a5d] [005c9a61, 005c9b6f] [005c9b73, 005c9ba3] [005c9ba7, 005c9bda] [005c9bde, 005c9c29] [005c9c30, 005c9c6c] [005c9c70, 005c9d0d] [005c9d11, 005c9d35] [005c9d39, 005c9da2] [005c9da6, 005c9e0b] [005c9e0f, 005c9e92] [005c9e96, 005c9eb2] [005c9eb6, 005c9ee3] [005c9ee7, 005ca00c] [005ca010, 005ca047] [005ca04b, 005ca16a] [005ca16e, 005ca1a9] [005ca1bd, 005ca2c9] [005ca2cd, 005ca2fe] [005ca302, 005ca32c] [005ca330, 005ca3c9] [005ca3cd, 005ca423] [005ca427, 005ca44d] [005ca451, 005ca47b] [005ca47f, 005ca4a9] [005ca4ad, 005ca4d7] [005ca4db, 005ca505] [005ca509, 005ca533] [005ca537, 005ca619] [005ca61d, 005ca68e] [005ca692, 005ca6b2] [005ca6b6, 005ca6d7] [005ca6db, 005ca705] [005ca709, 005ca733] [005ca737, 005ca761] [005ca765, 005ca78f] [005ca793, 005ca7c1] [005ca7e0, 005ca8e7] [005ca8eb, 005ca99b] [005ca99f, 005ca9f1] [005ca9f5, 005caa42] [005caa48, 005caa94] [005caa98, 005caac2] [005caac6, 005caaf0] [005caaf4, 005cab1e] [005cab22, 005cab4c] [005cab50, 005cab7a] [005cab7e, 005cab98]]


int FUN_005c9460(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  uint *puVar9;
  byte *****pppppbVar10;
  int *in_ECX;
  undefined4 extraout_ECX;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  char local_2b9;
  int local_2b4;
  uint local_2b0 [4];
  undefined4 local_2a0;
  uint local_29c;
  int iStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  uint auStack_284 [4];
  undefined4 uStack_274;
  uint uStack_270;
  uint auStack_268 [4];
  undefined4 uStack_258;
  uint uStack_254;
  int iStack_24c;
  uint auStack_248 [4];
  undefined4 uStack_238;
  uint uStack_234;
  uint uStack_22c;
  undefined4 uStack_21c;
  uint uStack_218;
  uint auStack_210 [4];
  undefined4 uStack_200;
  uint uStack_1fc;
  uint local_1f4 [4];
  undefined4 local_1e4;
  uint local_1e0;
  uint auStack_1d8 [4];
  undefined4 uStack_1c8;
  uint uStack_1c4;
  byte ****local_1bc [4];
  undefined4 local_1ac;
  uint local_1a8;
  uint uStack_1a0;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_184;
  undefined4 uStack_174;
  uint uStack_170;
  uint auStack_168 [4];
  undefined4 uStack_158;
  uint uStack_154;
  uint auStack_14c [4];
  undefined4 uStack_13c;
  uint uStack_138;
  uint uStack_12c;
  undefined4 uStack_11c;
  uint uStack_118;
  uint uStack_110;
  undefined4 uStack_100;
  uint uStack_fc;
  uint uStack_f4;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5a801;
  pvStack_14 = ExceptionList;
  bVar15 = false;
  local_1a8 = 0xf;
  local_1ac = 0;
  local_1bc[0] = (byte ****)((uint)local_1bc[0] & 0xffffff00);
  ExceptionList = &pvStack_14;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_c = 0;
  if (param_3 == 0) {
LAB_005c9508:
    bVar14 = false;
  }
  else {
    local_29c = 0xf;
    local_2a0 = 0;
    local_2b0[0] = local_2b0[0] & 0xffffff00;
    FUN_00409350("Infantry",8);
    local_c = CONCAT31(local_c._1_3_,1);
    bVar15 = true;
    cVar4 = FUN_00416db0();
    bVar14 = true;
    if (cVar4 != '\0') goto LAB_005c9508;
  }
  local_c = 0;
  if ((bVar15) && (0xf < local_29c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2b0[0]);
  }
  bVar2 = false;
  bVar15 = false;
  if (bVar14) {
    local_29c = 0xf;
    local_2a0 = 0;
    local_2b0[0] = local_2b0[0] & 0xffffff00;
    FUN_00408ed0(*(int *)(param_3 + 0x38) + 0x1d0,0,0xffffffff);
    local_c._0_1_ = 2;
    local_1e0 = 0xf;
    local_1e4 = 0;
    local_1f4[0] = local_1f4[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_c._0_1_ = 3;
    cVar4 = FUN_00416db0();
    local_c._0_1_ = 2;
    if (0xf < local_1e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1f4[0]);
    }
    if (cVar4 == '\0') {
      FUN_00408ed0(local_2b0,0,0xffffffff);
    }
    local_c = (uint)local_c._1_3_ << 8;
    if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2b0[0]);
    }
  }
  local_2b9 = '\0';
  local_2b4 = DAT_00f12d98;
  if (param_3 != 0) {
    cVar4 = (**(code **)(*in_ECX + 0x3c))();
    uVar6 = DAT_00f141cc;
    if ((cVar4 != '\0') || (uVar6 = DAT_013f0830, *(int *)(*(int *)(param_3 + 0x38) + 0x34) == 0)) {
      local_2b4 = uVar6;
    }
    local_2b9 = *(char *)(*(int *)(param_3 + 0x38) + 0x45);
  }
  FUN_00988f20(local_1bc);
  local_c._0_1_ = 4;
  uStack_218 = 0xf;
  uStack_21c = 0;
  uStack_22c = uStack_22c & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_c._0_1_ = 5;
  iStack_290 = 0;
  uStack_1c4 = 0xf;
  uStack_1c8 = 0;
  auStack_1d8[0] = auStack_1d8[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_c._0_1_ = 6;
  uStack_1fc = 0xf;
  uStack_200 = 0;
  auStack_210[0] = auStack_210[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_c._0_1_ = 7;
  if (param_3 != 0) {
    pcVar5 = (char *)&uStack_28c;
    uStack_28c = *(undefined4 *)(param_3 + 0x60);
    uStack_288 = *(undefined4 *)(param_3 + 100);
    do {
      cVar4 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar4 != '\0');
    FUN_00409350(&uStack_28c,(int)pcVar5 - ((int)&uStack_28c + 1));
    local_29c = 0xf;
    local_2a0 = 0;
    local_2b0[0] = local_2b0[0] & 0xffffff00;
    FUN_00409350(&DAT_00defd44,1);
    local_c._0_1_ = 8;
    uStack_254 = 0xf;
    uStack_258 = 0;
    auStack_268[0] = auStack_268[0] & 0xffffff00;
    FUN_00409350(&DAT_00defd44,1);
    local_c._0_1_ = 9;
    FUN_00988f20(auStack_268);
    local_c._0_1_ = 10;
    FUN_00988f20(*(int *)(param_3 + 0x38) + 8);
    local_c._0_1_ = 0xb;
    uVar6 = FUN_00988f20(local_2b0);
    local_c._0_1_ = 0xc;
    FUN_00408ed0(uVar6,0,0xffffffff);
    if (0xf < uStack_270) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_284[0]);
    }
    uStack_270 = 0xf;
    uStack_274 = 0;
    auStack_284[0] = auStack_284[0] & 0xffffff00;
    if (0xf < local_1e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1f4[0]);
    }
    local_1e0 = 0xf;
    local_1e4 = 0;
    local_1f4[0] = local_1f4[0] & 0xffffff00;
    if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_168[0]);
    }
    uStack_154 = 0xf;
    uStack_158 = 0;
    auStack_168[0] = auStack_168[0] & 0xffffff00;
    if (0xf < uStack_254) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_268[0]);
    }
    local_c._0_1_ = 7;
    uStack_254 = 0xf;
    uStack_258 = 0;
    auStack_268[0] = auStack_268[0] & 0xffffff00;
    if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2b0[0]);
    }
    iStack_294 = 0;
    do {
      local_c._0_1_ = 7;
      uStack_234 = 0xf;
      uStack_238 = 0;
      auStack_248[0] = auStack_248[0] & 0xffffff00;
      FUN_00409350("_actor",6);
      uStack_254 = 0xf;
      uStack_258 = 0;
      auStack_268[0] = auStack_268[0] & 0xffffff00;
      local_c._0_1_ = 0xe;
      pcVar7 = __itoa(iStack_294,(char *)auStack_14c,10);
      pcVar5 = pcVar7;
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      FUN_00409350(pcVar7,(int)pcVar5 - (int)(pcVar7 + 1));
      local_c._0_1_ = 0xf;
      FUN_00988f20(auStack_268);
      local_c._0_1_ = 0x10;
      FUN_00988f20(auStack_248);
      if (0xf < uStack_270) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_284[0]);
      }
      uStack_270 = 0xf;
      uStack_274 = 0;
      auStack_284[0] = auStack_284[0] & 0xffffff00;
      if (0xf < uStack_254) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_268[0]);
      }
      uStack_254 = 0xf;
      uStack_258 = 0;
      auStack_268[0] = auStack_268[0] & 0xffffff00;
      local_c._0_1_ = 0x14;
      if (0xf < uStack_234) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_248[0]);
      }
      uStack_234 = 0xf;
      uStack_238 = 0;
      auStack_248[0] = auStack_248[0] & 0xffffff00;
      (**(code **)(*(int *)in_ECX[0x42] + 0x40))();
      iVar8 = FUN_005c2ad0(local_2b0);
      local_c._0_1_ = 7;
      if (iVar8 != 0) {
        iStack_290 = iStack_294;
        if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2b0[0]);
        }
        break;
      }
      if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2b0[0]);
      }
      iStack_294 = iStack_294 + -1;
    } while (-1 < iStack_294);
    FUN_00408ed0(*(int *)(param_3 + 0x38) + 0x198,0,0xffffffff);
    FUN_00408ed0(*(int *)(param_3 + 0x38) + 0x1b4,0,0xffffffff);
  }
  local_1e0 = 0xf;
  local_1e4 = 0;
  local_1f4[0] = local_1f4[0] & 0xffffff00;
  FUN_00409350("_actor",6);
  uStack_154 = 0xf;
  uStack_158 = 0;
  auStack_168[0] = auStack_168[0] & 0xffffff00;
  local_c._0_1_ = 0x16;
  pcVar7 = __itoa(iStack_290,(char *)auStack_14c,10);
  pcVar5 = pcVar7;
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  FUN_00409350(pcVar7,(int)pcVar5 - (int)(pcVar7 + 1));
  local_c._0_1_ = 0x17;
  FUN_00988f20(auStack_168);
  local_c._0_1_ = 0x18;
  FUN_00988f20(local_1f4);
  if (0xf < uStack_118) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_12c);
  }
  uStack_118 = 0xf;
  uStack_11c = 0;
  uStack_12c = uStack_12c & 0xffffff00;
  if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_168[0]);
  }
  uStack_154 = 0xf;
  uStack_158 = 0;
  auStack_168[0] = auStack_168[0] & 0xffffff00;
  local_c._0_1_ = 0x1c;
  if (0xf < local_1e0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1f4[0]);
  }
  uStack_28c = in_ECX[0x32];
  local_1e0 = 0xf;
  local_1e4 = 0;
  local_1f4[0] = local_1f4[0] & 0xffffff00;
  for (iStack_294 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x33] * 4) +
                                     0xbcc) + 0x284) + 1; 0 < iStack_294;
      iStack_294 = iStack_294 + -1) {
    if (iStack_294 == 1) {
      uStack_270 = 0xf;
      uStack_274 = 0;
      auStack_284[0] = auStack_284[0] & 0xffffff00;
      local_c = 0x1f;
      bVar15 = true;
      puVar9 = auStack_284;
    }
    else {
      local_29c = 0xf;
      local_2a0 = 0;
      local_2b0[0] = local_2b0[0] & 0xffffff00;
      local_c._0_1_ = 0x1d;
      pcVar7 = __itoa(iStack_294,(char *)auStack_14c,10);
      pcVar5 = pcVar7;
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      FUN_00409350(pcVar7,(int)pcVar5 - (int)(pcVar7 + 1));
      local_c = CONCAT31(local_c._1_3_,0x1e);
      bVar2 = true;
      puVar9 = local_2b0;
    }
    uStack_234 = 0xf;
    uStack_238 = 0;
    auStack_248[0] = auStack_248[0] & 0xffffff00;
    FUN_00408ed0(puVar9,0,0xffffffff);
    local_c = 0x20;
    if ((bVar15) && (bVar15 = false, 0xf < uStack_270)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_284[0]);
    }
    local_c._0_1_ = 0x22;
    local_c._1_3_ = 0;
    if (bVar2) {
      bVar2 = false;
      if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2b0[0]);
      }
      local_29c = 0xf;
      local_2a0 = 0;
      local_2b0[0] = local_2b0[0] & 0xffffff00;
    }
    uVar6 = FUN_00988f20(auStack_248);
    local_c._0_1_ = 0x23;
    (**(code **)(*(int *)in_ECX[0x42] + 0x40))();
    iVar8 = FUN_005c2ad0(uVar6);
    local_c._0_1_ = 0x22;
    uVar3 = (undefined1)local_c;
    local_c._0_1_ = 0x22;
    if (0xf < uStack_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_14c[0]);
    }
    if (iVar8 != 0) {
      local_c._0_1_ = uVar3;
      uStack_28c = FUN_00aae9af(0x154);
      local_c._0_1_ = 0x24;
      bVar15 = uStack_28c == 0;
      if (bVar15) {
        local_2b4 = 0;
      }
      else {
        FUN_00988f20(auStack_248);
        local_c = CONCAT31(local_c._1_3_,0x25);
        iStack_290 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
        iStack_24c = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
        iVar8 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
        iVar8 = iVar8 + 0x188;
        iVar11 = (local_2b9 != '\0') + 1;
        iVar12 = iStack_290 + 0x480;
        iVar13 = iStack_24c + 0x304;
        uVar6 = (**(code **)(*(int *)in_ECX[0x42] + 0x40))(iVar8,iVar13,iVar12,iVar11,local_2b4);
        local_2b4 = FUN_007e7950(uStack_28c,auStack_1d8,auStack_210,uVar6,iVar8,iVar13,iVar12,iVar11
                                 ,local_2b4);
      }
      local_c = 0x22;
      if (!bVar15) {
        if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_110);
        }
        uStack_fc = 0xf;
        uStack_100 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
      }
      local_c._1_3_ = 0;
      local_c._0_1_ = 0x1c;
      if (0xf < uStack_234) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_248[0]);
      }
LAB_005ca337:
      bVar15 = false;
      local_c._1_3_ = 0;
      local_c._0_1_ = 0x1c;
      uStack_234 = 0xf;
      uStack_238 = 0;
      auStack_248[0] = auStack_248[0] & 0xffffff00;
      if (local_2b4 != 0) {
        cVar4 = (**(code **)(*in_ECX + 0x38))();
        if (cVar4 == '\0') goto LAB_005caa7a;
        pppppbVar10 = (byte *****)local_1bc[0];
        if (local_1a8 < 0x10) {
          pppppbVar10 = local_1bc;
        }
        pcVar5 = "Infantry";
        goto LAB_005ca810;
      }
      break;
    }
    uVar6 = FUN_00988f20(auStack_248);
    local_c._0_1_ = 0x27;
    (**(code **)(*(int *)in_ECX[0x42] + 0x40))();
    iVar8 = FUN_005c2ad0(uVar6);
    local_c._0_1_ = 0x22;
    uVar3 = (undefined1)local_c;
    local_c._0_1_ = 0x22;
    if (0xf < uStack_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_14c[0]);
    }
    if (iVar8 != 0) {
      local_c._0_1_ = uVar3;
      iStack_290 = FUN_00aae9af(0x154);
      local_c._0_1_ = 0x28;
      bVar15 = iStack_290 == 0;
      if (bVar15) {
        local_2b4 = 0;
      }
      else {
        FUN_00988f20(auStack_248);
        local_c = CONCAT31(local_c._1_3_,0x29);
        uStack_28c = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
        iStack_24c = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
        iVar8 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
        iVar8 = iVar8 + 0x188;
        iVar11 = (local_2b9 != '\0') + 1;
        iVar12 = uStack_28c + 0x480;
        iVar13 = iStack_24c + 0x304;
        uVar6 = (**(code **)(*(int *)in_ECX[0x42] + 0x40))(iVar8,iVar13,iVar12,iVar11,local_2b4);
        local_2b4 = FUN_007e7950(iStack_290,auStack_1d8,auStack_210,uVar6,iVar8,iVar13,iVar12,iVar11
                                 ,local_2b4);
      }
      local_c = 0x22;
      if (!bVar15) {
        if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_f4);
        }
        uStack_e0 = 0xf;
        uStack_e4 = 0;
        uStack_f4 = uStack_f4 & 0xffffff00;
      }
      local_c._1_3_ = 0;
      local_c._0_1_ = 0x1c;
      if (0xf < uStack_234) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_248[0]);
      }
      goto LAB_005ca337;
    }
    FUN_00988fa0(local_1bc);
    local_c._0_1_ = 0x2b;
    uVar6 = FUN_00988f20(auStack_248);
    local_c._0_1_ = 0x2c;
    (**(code **)(*(int *)in_ECX[0x42] + 0x40))();
    iVar8 = FUN_005c2ad0(uVar6);
    local_c._0_1_ = 0x2b;
    if (0xf < uStack_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_14c[0]);
    }
    if (iVar8 != 0) {
      iStack_290 = FUN_00aae9af(0x154);
      local_c._0_1_ = 0x2d;
      bVar15 = iStack_290 == 0;
      if (bVar15) {
        local_2b4 = 0;
      }
      else {
        FUN_00988f20(auStack_248);
        local_c = CONCAT31(local_c._1_3_,0x2e);
        uStack_28c = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
        iStack_24c = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
        iVar8 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
        iVar8 = iVar8 + 0x188;
        iVar11 = (local_2b9 != '\0') + 1;
        iVar12 = uStack_28c + 0x480;
        iVar13 = iStack_24c + 0x304;
        uVar6 = (**(code **)(*(int *)in_ECX[0x42] + 0x40))(iVar8,iVar13,iVar12,iVar11,local_2b4);
        local_2b4 = FUN_007e7950(iStack_290,auStack_1d8,auStack_210,uVar6,iVar8,iVar13,iVar12,iVar11
                                 ,local_2b4);
      }
      local_c = 0x2b;
      if (!bVar15) {
        if (0xf < uStack_138) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_14c[0]);
        }
        uStack_138 = 0xf;
        uStack_13c = 0;
        auStack_14c[0] = auStack_14c[0] & 0xffffff00;
      }
      if (0xf < uStack_254) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_268[0]);
      }
      local_c._1_3_ = 0;
      local_c._0_1_ = 0x1c;
      uStack_254 = 0xf;
      uStack_258 = 0;
      auStack_268[0] = auStack_268[0] & 0xffffff00;
      if (0xf < uStack_234) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_248[0]);
      }
      goto LAB_005ca337;
    }
    if (0xf < uStack_254) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_268[0]);
    }
    local_c._0_1_ = 0x1c;
    uStack_254 = 0xf;
    uStack_258 = 0;
    auStack_268[0] = auStack_268[0] & 0xffffff00;
    if (0xf < uStack_234) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_248[0]);
    }
  }
  bVar15 = false;
  local_c._0_1_ = 0x1c;
  cVar4 = (**(code **)(*in_ECX + 0x38))();
  if (cVar4 != '\0') {
    local_29c = 0xf;
    local_2a0 = 0;
    local_2b0[0] = local_2b0[0] & 0xffffff00;
    FUN_00409350("Infantry",8);
    local_c = CONCAT31(local_c._1_3_,0x30);
    bVar15 = true;
    cVar4 = FUN_00416db0();
    bVar14 = true;
    if (cVar4 == '\0') goto LAB_005ca3a7;
  }
  bVar14 = false;
LAB_005ca3a7:
  local_c = 0x1c;
  if ((bVar15) && (0xf < local_29c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2b0[0]);
  }
  local_29c = 0xf;
  local_2a0 = 0;
  local_2b0[0] = local_2b0[0] & 0xffffff00;
  if (bVar14) {
    FUN_00409350("Infantry",8);
    local_c = CONCAT31(local_c._1_3_,0x31);
    uStack_28c = FUN_005c9460(param_1,local_2b0,param_3);
    if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2b0[0]);
    }
    local_29c = 0xf;
    local_2a0 = 0;
    local_2b0[0] = local_2b0[0] & 0xffffff00;
    if (0xf < uStack_18c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1a0);
    }
    uStack_18c = 0xf;
    uStack_190 = 0;
    uStack_1a0 = uStack_1a0 & 0xffffff00;
    if (0xf < uStack_1fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_210[0]);
    }
    uStack_1fc = 0xf;
    uStack_200 = 0;
    auStack_210[0] = auStack_210[0] & 0xffffff00;
    if (0xf < uStack_1c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_1d8[0]);
    }
    uStack_1c4 = 0xf;
    uStack_1c8 = 0;
    auStack_1d8[0] = auStack_1d8[0] & 0xffffff00;
    if (0xf < uStack_218) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_22c);
    }
    uStack_218 = 0xf;
    uStack_21c = 0;
    uStack_22c = uStack_22c & 0xffffff00;
    if (0xf < uStack_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_184);
    }
    uStack_170 = 0xf;
    uStack_174 = 0;
    local_184 = local_184 & 0xffffff00;
    if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1bc[0]);
    }
  }
  else {
    FUN_00409350("unit.cpp",8);
    local_c._0_1_ = 0x32;
    uStack_28c = FUN_004015b0(local_2b0,0x60d,0x10004);
    local_c._0_1_ = 0x33;
    FUN_00987d50(uStack_28c,"Missing avatar graphics for type: ",0x22,0);
    pppppbVar10 = (byte *****)local_1bc[0];
    if (local_1a8 < 0x10) {
      pppppbVar10 = local_1bc;
    }
    uVar6 = FUN_00418e30(uStack_28c,pppppbVar10,extraout_ECX,&DAT_00dee2cc);
    FUN_00418e30(uVar6);
    local_c._0_1_ = 0x32;
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    local_c._0_1_ = 0x1c;
    if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2b0[0]);
    }
    uStack_254 = 0xf;
    uStack_258 = 0;
    auStack_268[0] = auStack_268[0] & 0xffffff00;
    FUN_00409350("Infantry",8);
    local_c._0_1_ = 0x34;
    local_29c = 0xf;
    local_2a0 = 0;
    local_2b0[0] = local_2b0[0] & 0xffffff00;
    FUN_00409350("Generic",7);
    local_c = CONCAT31(local_c._1_3_,0x35);
    uStack_28c = FUN_005c9460(local_2b0,auStack_268,param_3);
    if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2b0[0]);
    }
    local_29c = 0xf;
    local_2a0 = 0;
    local_2b0[0] = local_2b0[0] & 0xffffff00;
    if (0xf < uStack_254) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_268[0]);
    }
    uStack_254 = 0xf;
    uStack_258 = 0;
    auStack_268[0] = auStack_268[0] & 0xffffff00;
    if (0xf < uStack_18c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1a0);
    }
    uStack_18c = 0xf;
    uStack_190 = 0;
    uStack_1a0 = uStack_1a0 & 0xffffff00;
    if (0xf < uStack_1fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_210[0]);
    }
    uStack_1fc = 0xf;
    uStack_200 = 0;
    auStack_210[0] = auStack_210[0] & 0xffffff00;
    if (0xf < uStack_1c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_1d8[0]);
    }
    uStack_1c4 = 0xf;
    uStack_1c8 = 0;
    auStack_1d8[0] = auStack_1d8[0] & 0xffffff00;
    if (0xf < uStack_218) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_22c);
    }
    uStack_218 = 0xf;
    uStack_21c = 0;
    uStack_22c = uStack_22c & 0xffffff00;
    if (0xf < uStack_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_184);
    }
    uStack_170 = 0xf;
    uStack_174 = 0;
    local_184 = local_184 & 0xffffff00;
    if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1bc[0]);
    }
  }
  ExceptionList = pvStack_14;
  return uStack_28c;
  while( true ) {
    bVar1 = *(byte *)((int)pppppbVar10 + 1);
    bVar14 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_005ca830;
    pppppbVar10 = (byte *****)((int)pppppbVar10 + 2);
    pcVar5 = pcVar5 + 2;
    if (bVar1 == 0) break;
LAB_005ca810:
    bVar1 = *(byte *)pppppbVar10;
    bVar14 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_005ca830:
      iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005ca835;
    }
    if (bVar1 == 0) break;
  }
  iVar8 = 0;
LAB_005ca835:
  if ((iVar8 != 0) && (cVar4 = FUN_0040b360(), cVar4 == '\0')) goto LAB_005caa7a;
  iVar8 = iStack_294;
  if ((iStack_294 < 2) || (cVar4 = FUN_0040b360(), cVar4 == '\0')) {
    if (iVar8 < 3) {
      uStack_270 = 0xf;
      uStack_274 = 0;
      auStack_284[0] = auStack_284[0] & 0xffffff00;
      FUN_00409350("ZuluGC",6);
      local_c = CONCAT31(local_c._1_3_,0x38);
      bVar15 = true;
      cVar4 = FUN_00416db0();
      if ((cVar4 != '\0') && (cVar4 = FUN_0040b360(), cVar4 == '\0')) goto LAB_005ca975;
      bVar14 = true;
    }
    else {
LAB_005ca975:
      bVar14 = false;
    }
    local_c._0_1_ = 0x1c;
    local_c._1_3_ = 0;
    if ((bVar15) && (0xf < uStack_270)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_284[0]);
    }
    if (bVar14) {
      uStack_270 = 0xf;
      uStack_274 = 0;
      auStack_284[0] = auStack_284[0] & 0xffffff00;
      FUN_00409350(&DAT_00e02c64,4);
      local_c._0_1_ = 0x39;
      FUN_007e8980(local_2b4,param_1,auStack_284);
      goto joined_r0x005ca9e6;
    }
  }
  else {
    uStack_270 = 0xf;
    uStack_274 = 0;
    auStack_284[0] = auStack_284[0] & 0xffffff00;
    FUN_00409350(&DAT_00e02c64,4);
    local_c._0_1_ = 0x36;
    local_29c = 0xf;
    local_2a0 = 0;
    local_2b0[0] = local_2b0[0] & 0xffffff00;
    FUN_00409350("Generic",7);
    local_c._0_1_ = 0x37;
    FUN_007e8980(local_2b4,local_2b0,auStack_284);
    if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2b0[0]);
    }
    local_29c = 0xf;
    local_2a0 = 0;
    local_2b0[0] = local_2b0[0] & 0xffffff00;
joined_r0x005ca9e6:
    if (0xf < uStack_270) {
      local_c._0_1_ = 0x1c;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_284[0]);
    }
  }
  local_c._0_1_ = 0x1c;
  if (iStack_294 < 2) {
    uStack_270 = 0xf;
    uStack_274 = 0;
    auStack_284[0] = auStack_284[0] & 0xffffff00;
    FUN_00409350("Helmet1",7);
    local_c._0_1_ = 0x3a;
  }
  else {
    if ((2 < iStack_294) && (cVar4 = FUN_0040b360(), cVar4 == '\0')) goto LAB_005caa7a;
    FUN_004471e0("Helmet2");
    local_c._0_1_ = 0x3b;
  }
  FUN_007e8a00(local_2b4,param_1,auStack_284);
  if (0xf < uStack_270) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_284[0]);
  }
LAB_005caa7a:
  if (0xf < uStack_18c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_1a0);
  }
  uStack_18c = 0xf;
  uStack_190 = 0;
  uStack_1a0 = uStack_1a0 & 0xffffff00;
  if (0xf < uStack_1fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_210[0]);
  }
  uStack_1fc = 0xf;
  uStack_200 = 0;
  auStack_210[0] = auStack_210[0] & 0xffffff00;
  if (0xf < uStack_1c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_1d8[0]);
  }
  uStack_1c4 = 0xf;
  uStack_1c8 = 0;
  auStack_1d8[0] = auStack_1d8[0] & 0xffffff00;
  if (0xf < uStack_218) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_22c);
  }
  uStack_218 = 0xf;
  uStack_21c = 0;
  uStack_22c = uStack_22c & 0xffffff00;
  if (0xf < uStack_170) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_184);
  }
  uStack_170 = 0xf;
  uStack_174 = 0;
  local_184 = local_184 & 0xffffff00;
  if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1bc[0]);
  }
  ExceptionList = pvStack_14;
  return local_2b4;
}

