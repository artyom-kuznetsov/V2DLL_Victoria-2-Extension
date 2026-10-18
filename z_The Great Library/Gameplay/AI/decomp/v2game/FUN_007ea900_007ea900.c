// FUN_007ea900 @ 007ea900 body=[[007ea900, 007eb22a] [007eb230, 007eb3c3]]


void FUN_007ea900(int param_1,int *param_2,int *param_3,float *param_4,float param_5,float *param_6)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  char *in_EAX;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char extraout_var;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  float *pfVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  undefined *puVar19;
  undefined4 uStack_390;
  int *piStack_38c;
  undefined4 uStack_388;
  char *pcStack_384;
  int *piStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  int *piStack_374;
  undefined4 uStack_370;
  char *pcStack_36c;
  int *piStack_368;
  undefined4 uStack_364;
  undefined1 *puStack_360;
  int *piStack_35c;
  undefined4 uStack_358;
  char *pcStack_354;
  int *piStack_350;
  int *piStack_34c;
  undefined1 *puStack_348;
  undefined1 *puStack_344;
  undefined1 *puStack_340;
  undefined4 uStack_33c;
  int *piStack_338;
  undefined4 uStack_334;
  char *pcStack_330;
  int *piStack_32c;
  undefined4 uStack_328;
  int *piStack_324;
  int *piStack_320;
  undefined4 uStack_31c;
  char *pcStack_318;
  int *piStack_314;
  char *pcStack_310;
  float *pfStack_30c;
  undefined1 *puStack_308;
  float *pfStack_304;
  float *pfStack_300;
  int *piStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  int *piStack_2f0;
  undefined3 uStack_2ec;
  char cStack_2e9;
  undefined4 uStack_2e8;
  int *piStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  int *piStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  int *piStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  float *pfStack_2c0;
  float *pfStack_2bc;
  undefined1 *puStack_2b8;
  float *pfStack_2b4;
  float *pfStack_2b0;
  float *pfStack_2ac;
  float afStack_29c [2];
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float afStack_260 [3];
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined1 auStack_23c [20];
  undefined1 auStack_228 [12];
  undefined1 auStack_21c [4];
  undefined1 auStack_218 [4];
  undefined1 auStack_214 [12];
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  float afStack_1dc [5];
  undefined1 auStack_1c8 [44];
  int aiStack_19c [14];
  undefined1 auStack_164 [12];
  undefined1 auStack_158 [80];
  undefined1 auStack_108 [128];
  undefined1 auStack_88 [132];
  
  if (*in_EAX != '\0') {
    return;
  }
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    pfStack_2ac = (float *)0x4;
    pfStack_2b0 = (float *)0x7ea92d;
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  pfStack_2ac = (float *)0x7ea958;
  fVar16 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  fVar3 = (float)fVar16;
  fVar1 = *(float *)(param_1 + 0xb8);
  uStack_288 = (double)fVar3 - (double)param_5;
  fStack_294 = *(float *)(param_1 + 0xbc);
  fStack_270 = (float)uStack_288;
  if (fVar3 < fVar1 + param_5) {
    *param_6 = fVar3;
    fStack_294 = (fStack_270 / fVar1) * (fStack_294 - 0.1) + 0.1;
  }
  fStack_28c = *(float *)(param_1 + 0xcc);
  afStack_29c[0] = DAT_00f092fc;
  if ((fStack_28c <= 0.0) || (fStack_270 <= fStack_28c)) {
    if ((*(float *)(param_1 + 0xbc) <= fStack_294) && (*(char *)(param_1 + 0xb5) != '\0')) {
      fStack_28c = *(float *)(param_1 + 0xc0);
      pfStack_2ac = (float *)((fVar3 - *param_6) * 3.14 * *(float *)(param_1 + 0xc4));
      pfStack_2b0 = (float *)0x7eab4a;
      fVar16 = (float10)FUN_00414c70();
      fVar18 = (float10)(float)((fVar16 + (float10)1) * (float10)0.5);
      fVar17 = (float10)fStack_28c;
      fVar16 = (float10)1 - fVar17;
      goto LAB_007eab68;
    }
  }
  else {
    fStack_290 = *(float *)(param_1 + 0xd0);
    if ((fStack_290 <= 0.0) || (fStack_290 + fStack_28c <= fStack_270)) {
      *in_EAX = '\x01';
      return;
    }
    fStack_274 = *(float *)(param_1 + 0xc0);
    pfStack_2ac = (float *)((fVar3 - *param_6) * 3.14 * *(float *)(param_1 + 0xc4));
    pfStack_2b0 = (float *)0x7eaa96;
    fVar17 = (float10)FUN_00414c70();
    fVar16 = (float10)((fStack_270 - fStack_28c) / fStack_290);
    fVar17 = (float10)(float)((float10)fStack_274 +
                             (float10)(float)((fVar17 + (float10)1) * (float10)0.5) *
                             ((float10)1 - (float10)fStack_274));
    fVar18 = (float10)0 - fVar17;
LAB_007eab68:
    afStack_29c[0] = (float)(fVar17 + fVar18 * fVar16);
  }
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  afStack_1dc[0] = 0.0;
  afStack_1dc[3] = 1.1754944e-38;
  afStack_1dc[4] = DAT_00f092fc;
  uStack_208 = DAT_00f17898;
  afStack_1dc[1] = (float)DAT_00f17898;
  afStack_1dc[2] = (float)DAT_00f17898;
  uStack_1f4 = DAT_00f1f768;
  pfStack_2ac = (float *)((float)uStack_288 * 3.14 * *(float *)(param_1 + 200));
  uStack_1e0 = 0x7f7fffff;
  pfStack_2b0 = (float *)0x7eac6a;
  fStack_290 = (float)pfStack_2ac;
  fVar16 = (float10)FUN_00414c70();
  afStack_260[0] = (float)fVar16;
  afStack_260[1] = 0.0;
  pfStack_2ac = (float *)0x7eac83;
  fVar16 = (float10)FUN_00b35410();
  fStack_290 = (float)fVar16;
  fStack_280 = (float)param_2[0x33];
  uVar2 = *(undefined8 *)(param_2 + 0x31);
  uStack_288._0_4_ = (float)uVar2;
  uStack_288._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fStack_26c = *param_4 + (float)uStack_288 + 0.0;
  fStack_250 = param_4[1] + uStack_288._4_4_ + 50.0;
  fStack_264 = param_4[2] + fStack_280 + 0.0;
  pfStack_2ac = afStack_260;
  pfStack_2b0 = &fStack_26c;
  pfStack_2b4 = &fStack_254;
  fStack_268 = param_4[1] + uStack_288._4_4_ + 49.0;
  puStack_2b8 = auStack_88;
  pfStack_2bc = (float *)0x7ead7d;
  uStack_288 = (double)uVar2;
  afStack_260[2] = fStack_290;
  fStack_254 = fStack_26c;
  fStack_24c = fStack_264;
  D3DXMatrixLookAtLH();
  pfStack_2ac = (float *)0x428c0000;
  pfStack_2b0 = (float *)DAT_00f092fc;
  pfStack_2b4 = (float *)fStack_294;
  pfStack_2bc = (float *)auStack_108;
  puStack_2b8 = (undefined1 *)fStack_294;
  pfStack_2c0 = (float *)0x7eadbb;
  D3DXMatrixOrthoLH();
  pfStack_2ac = (float *)auStack_108;
  pfStack_2b0 = (float *)auStack_88;
  pfStack_2b4 = (float *)auStack_1c8;
  puStack_2b8 = (undefined1 *)0x7eaddb;
  D3DXMatrixMultiply();
  puStack_2b8 = auStack_214;
  pfStack_2c0 = afStack_1dc + 2;
  uStack_2c4 = 0x7eadf0;
  pfStack_2bc = pfStack_2c0;
  D3DXMatrixMultiply();
  piStack_2cc = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  uStack_2c4 = 1;
  uStack_2c8 = 0x1b;
  uStack_2d0 = 0x7eae08;
  (**(code **)(*piStack_2cc + 0xe4))();
  piStack_2d8 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    uStack_2d0 = 5;
    uStack_2d4 = 0x13;
    uStack_2dc = 0x7eae34;
    (**(code **)(*piStack_2d8 + 0xe4))();
    uStack_2dc = 6;
  }
  else {
    uStack_2d0 = 2;
    uStack_2d4 = 0x13;
    uStack_2dc = 0x7eae29;
    (**(code **)(*piStack_2d8 + 0xe4))();
    uStack_2dc = 2;
  }
  piStack_2e4 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  uStack_2e0 = 0x14;
  uStack_2e8 = 0x7eae4c;
  (**(code **)(*piStack_2e4 + 0xe4))();
  if (*(int *)(param_1 + 0x90) == 0) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = *(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 0x6bd00) + -4 +
                       *(int *)(param_1 + 0x90) * 4);
  }
  uStack_2d0 = 0;
  piStack_2f0 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  uStack_2e8 = 0;
  uStack_2ec = 0xe;
  cStack_2e9 = 0;
  uStack_2f4 = 0x7eae8a;
  (**(code **)(*piStack_2f0 + 0xe4))();
  piStack_2fc = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  uStack_2f4 = 0;
  uStack_2f8 = 7;
  pfStack_300 = (float *)0x7eaea2;
  (**(code **)(*piStack_2fc + 0xe4))();
  iVar10 = *(int *)(*(int *)(DAT_012588dc + 0x20e8) + param_2[0x52] * 4);
  iVar4 = *(int *)(DAT_012588dc + 0x2258);
  if (*(char *)(*(int *)(*(int *)(DAT_0125870c + 0x2aa4) + param_2[0x52] * 4) + 0xd8) == '\0') {
LAB_007eaef4:
    cStack_2e9 = '\0';
  }
  else {
    pfStack_300 = (float *)0x7eaeeb;
    cVar6 = (**(code **)(*param_2 + 0x180))();
    cStack_2e9 = '\x01';
    if (cVar6 == '\0') goto LAB_007eaef4;
  }
  pfStack_300 = (float *)0x7eaf05;
  cVar6 = (**(code **)(*param_2 + 0x180))();
  if ((cVar6 == '\0') || (cStack_2e9 != '\0')) {
    pfStack_300 = (float *)param_4[2];
    pfStack_304 = (float *)0x0;
    puStack_308 = (undefined1 *)*param_4;
    piVar13 = param_2 + 0x25;
    piVar14 = aiStack_19c;
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar14 = *piVar13;
      piVar13 = piVar13 + 1;
      piVar14 = piVar14 + 1;
    }
    pfStack_30c = afStack_29c;
    pcStack_310 = (char *)0x7eaf7b;
    D3DXMatrixTranslation();
    pfStack_300 = afStack_29c;
    pfStack_304 = (float *)0x7eaf93;
    pfVar7 = (float *)FUN_007eb4f0();
    pfVar15 = afStack_1dc;
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar15 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar15 = pfVar15 + 1;
    }
  }
  else {
    pfVar7 = (float *)(iVar10 * 0x3c0 + iVar4 + 0x17c);
    pfVar15 = afStack_1dc;
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar15 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar15 = pfVar15 + 1;
    }
  }
  pfStack_300 = (float *)auStack_21c;
  pfStack_304 = afStack_1dc;
  puStack_308 = auStack_21c;
  pfStack_30c = (float *)0x7eafbc;
  D3DXMatrixMultiply();
  pfStack_30c = (float *)auStack_228;
  pcStack_310 = "TextureMatrix";
  pcStack_318 = (char *)0x7eafd4;
  piStack_314 = piVar12;
  (**(code **)(*piVar12 + 0x98))();
  pcStack_318 = "Alpha";
  uStack_31c = 0;
  piStack_324 = (int *)0x7eafe3;
  piStack_320 = piVar12;
  uStack_328 = (**(code **)(*piVar12 + 0x24))();
  piStack_324 = piStack_314;
  pcStack_330 = (char *)0x7eaff8;
  piStack_32c = piVar12;
  (**(code **)(*piVar12 + 0x78))();
  pcStack_330 = (char *)0x7eb007;
  uVar8 = (**(code **)(*param_3 + 0x16c))();
  pcStack_330 = (char *)0x7eb015;
  uVar9 = (**(code **)(*param_3 + 0x174))();
  pcStack_330 = "WorldViewMatrix";
  uStack_334 = 0;
  uStack_33c = 0x7eb026;
  piStack_338 = piVar12;
  piStack_320 = (int *)(**(code **)(*piVar12 + 0x24))();
  puStack_340 = auStack_218;
  puStack_344 = auStack_158;
  puStack_348 = (undefined1 *)0x7eb041;
  uStack_33c = uVar8;
  D3DXMatrixMultiply();
  puStack_348 = auStack_164;
  piStack_34c = piStack_32c;
  pcStack_354 = (char *)0x7eb059;
  piStack_350 = piVar12;
  (**(code **)(*piVar12 + 0x98))();
  pcStack_354 = "WorldMatrix";
  uStack_358 = 0;
  puStack_360 = (undefined1 *)0x7eb068;
  piStack_35c = piVar12;
  uStack_364 = (**(code **)(*piVar12 + 0x24))();
  puStack_360 = auStack_23c;
  pcStack_36c = (char *)0x7eb07c;
  piStack_368 = piVar12;
  (**(code **)(*piVar12 + 0x98))();
  pcStack_36c = "ViewMatrix";
  uStack_370 = 0;
  uStack_378 = 0x7eb08b;
  piStack_374 = piVar12;
  uStack_37c = (**(code **)(*piVar12 + 0x24))();
  pcStack_384 = (char *)0x7eb098;
  piStack_380 = piVar12;
  uStack_378 = uVar8;
  (**(code **)(*piVar12 + 0x98))();
  pcStack_384 = "ProjectionMatrix";
  uStack_388 = 0;
  uStack_390 = 0x7eb0a7;
  piStack_38c = piVar12;
  (**(code **)(*piVar12 + 0x24))();
  uStack_390 = uVar9;
  (**(code **)(*piVar12 + 0x98))(piVar12);
  iVar10 = (**(code **)(*piVar12 + 0x24))(piVar12,0);
  if (iVar10 != 0) {
    uVar5 = *(uint *)(param_1 + 0x94);
    if ((uVar5 == 0xffffffff) || (9999 < uVar5)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(uVar5 * 0x2c + 0x15c + *(int *)(param_1 + 0x8c));
    }
    (**(code **)(*piVar12 + 0xd0))(piVar12,iVar10,uVar8);
  }
  if (extraout_var == '\0') {
    cVar6 = (**(code **)(*param_2 + 0x180))();
    if (cVar6 != '\0') {
      (**(code **)(*piVar12 + 0xfc))(piVar12,&uStack_390);
      puVar19 = (undefined *)0x0;
      do {
        (**(code **)(*piVar12 + 0x100))(piVar12,puVar19);
        FUN_006453d0(DAT_012588dc);
        (**(code **)(*piVar12 + 0x108))(piVar12);
        puVar19 = puVar19 + 1;
      } while (puVar19 < &DAT_00e0bce4);
      (**(code **)(*piVar12 + 0x10c))(piVar12);
      goto LAB_007eb343;
    }
    puStack_344 = (undefined1 *)0xc1200000;
    puStack_340 = (undefined1 *)0xc1200000;
    uStack_33c = 0xc1200000;
    piStack_338 = (int *)0x41200000;
    uStack_334 = 0x41200000;
    pcStack_330 = (char *)0x41200000;
    piStack_32c = (int *)0x41200000;
    uStack_328 = 0xc1200000;
    (**(code **)(*piVar12 + 0xfc))(piVar12,&uStack_390,0);
    puVar19 = (undefined *)0x0;
    do {
      (**(code **)(*piVar12 + 0x100))(piVar12,puVar19);
      piVar13 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
      (**(code **)(*piVar13 + 0x15c))(piVar13,*(undefined4 *)(param_1 + 0xd4));
      piVar13 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
      (**(code **)(*piVar13 + 0x14c))(piVar13,6,2,&puStack_360,8);
      (**(code **)(*piVar12 + 0x108))(piVar12);
      puVar19 = puVar19 + 1;
    } while (puVar19 < &DAT_00e0bce4);
  }
  else {
    puStack_344 = (undefined1 *)0xc1200000;
    puStack_340 = (undefined1 *)0xc1200000;
    uStack_33c = 0xc1200000;
    piStack_338 = (int *)0x41200000;
    uStack_334 = 0x41200000;
    pcStack_330 = (char *)0x41200000;
    piStack_32c = (int *)0x41200000;
    uStack_328 = 0xc1200000;
    (**(code **)(*piVar12 + 0xfc))(piVar12,&uStack_390,0);
    puVar19 = (undefined *)0x0;
    do {
      (**(code **)(*piVar12 + 0x100))(piVar12,puVar19);
      piVar13 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
      (**(code **)(*piVar13 + 0x15c))(piVar13,*(undefined4 *)(param_1 + 0xd4));
      piVar13 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
      (**(code **)(*piVar13 + 0x14c))(piVar13,6,2,&puStack_360,8);
      FUN_006453d0(DAT_012588dc);
      (**(code **)(*piVar12 + 0x108))(piVar12);
      puVar19 = puVar19 + 1;
    } while (puVar19 < &DAT_00e0bce4);
  }
  (**(code **)(*piVar12 + 0x10c))(piVar12);
LAB_007eb343:
  piVar12 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  (**(code **)(*piVar12 + 0xe4))(piVar12,7,1);
  piVar12 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  (**(code **)(*piVar12 + 0xe4))(piVar12,0xe,1);
  piVar12 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  (**(code **)(*piVar12 + 0xe4))(piVar12,0x1b,0);
  piVar12 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  (**(code **)(*piVar12 + 0xe4))(piVar12,0x13,5);
  piVar12 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  (**(code **)(*piVar12 + 0xe4))(piVar12,0x14,6);
  return;
}

