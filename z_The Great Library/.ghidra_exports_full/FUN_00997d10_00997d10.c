// FUN_00997d10 @ 00997d10 body=[[00997d10, 0099856e] [00998570, 00998c3c] [00998c40, 00998efc] [00998f00, 00999079] [00999080, 00999170] [009991d9, 0099927c]]


void FUN_00997d10(int *param_1,int *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined8 *in_ECX;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  ulonglong *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint *puVar18;
  int *piVar19;
  int **ppiVar20;
  ushort in_FPUControlWord;
  float10 fVar21;
  int *piVar22;
  int *piVar23;
  uint *puVar24;
  int *piVar25;
  int *piVar26;
  uint uStack_460;
  int iStack_454;
  int *piStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  int *piStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  int *piStack_434;
  uint uStack_430;
  int iStack_42c;
  undefined4 uStack_428;
  int *piStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  int *piStack_414;
  undefined4 uStack_410;
  int *piStack_40c;
  undefined4 uStack_408;
  undefined ****ppppuStack_404;
  int *piStack_400;
  int *piStack_3fc;
  uint *puStack_3f8;
  int *piStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  int *piStack_3e8;
  int *piStack_3e4;
  int *piStack_3e0;
  undefined ***pppuStack_3dc;
  undefined ***pppuStack_3d8;
  int **ppiStack_3d4;
  uint *puStack_3d0;
  undefined ***pppuStack_3cc;
  int *piStack_3c4;
  undefined ***pppuStack_3c0;
  undefined4 uStack_3bc;
  int *apiStack_3b8 [2];
  undefined **ppuStack_3b0;
  int *piStack_3ac;
  undefined4 uStack_3a8;
  int *piStack_3a4;
  int iStack_3a0;
  int *piStack_39c;
  undefined4 uStack_398;
  undefined ***pppuStack_394;
  undefined **ppuStack_390;
  int *piStack_38c;
  int iStack_388;
  char *pcStack_384;
  int *piStack_380;
  uint auStack_37c [3];
  int *piStack_370;
  int *piStack_36c;
  float fStack_368;
  int *piStack_364;
  undefined8 uStack_360;
  int *piStack_358;
  int *piStack_354;
  undefined4 uStack_350;
  int *piStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  int *piStack_33c;
  int iStack_338;
  int iStack_334;
  undefined4 uStack_330;
  int *piStack_32c;
  int iStack_328;
  int iStack_324;
  undefined4 uStack_320;
  int *piStack_31c;
  undefined **ppuStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  int *piStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  int *piStack_2fc;
  uint uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  int *piStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  int *piStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  int *piStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  int *piStack_2c4;
  undefined **ppuStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  ulonglong uStack_2b0;
  undefined8 uStack_2a8;
  ulonglong uStack_2a0;
  undefined8 uStack_298;
  ulonglong uStack_278;
  undefined8 uStack_270;
  longlong lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulonglong uStack_250;
  undefined8 uStack_248;
  longlong lStack_240;
  ulonglong uStack_238;
  undefined8 uStack_230;
  longlong lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulonglong uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined **ppuStack_1fc;
  int *piStack_1f8;
  undefined8 uStack_1f4;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined4 auStack_1cc [9];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined **ppuStack_18c;
  int *piStack_188;
  int iStack_184;
  undefined4 uStack_148;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_00b41d49;
  pvStack_1c = ExceptionList;
  uStack_298 = CONCAT44(0x997d40,(undefined4)uStack_298);
  ExceptionList = &pvStack_1c;
  iVar4 = (**(code **)(*param_2 + 0x24))();
  uVar6 = *(uint *)(iVar4 + 0x10);
  uStack_258 = CONCAT44(uStack_258._4_4_,iVar4);
  uVar5 = DAT_013f0480;
  while (uVar6 == 0) {
    uVar6 = DAT_0131ca24;
    if ((uVar5 < DAT_013f0480) || (DAT_013f0484 <= uVar5)) goto LAB_00997d83;
    piVar7 = (int *)(uVar5 + 8);
    piVar23 = (int *)(uVar5 + 4);
    uVar5 = uVar5 + 0x14;
    uVar6 = *piVar7 - *piVar23 & 0xfffffffc;
  }
LAB_00997da6:
  uStack_298 = 0x300000006;
  param_1[0x1af22] = (int)in_ECX;
  uStack_2a0 = ZEXT48((int *)param_1[0x19]);
  uStack_2a8 = CONCAT44(0x997dc3,(undefined4)uStack_2a8);
  (**(code **)(*(int *)param_1[0x19] + 0x114))();
  uStack_2a8 = 0x200000005;
  uStack_2b0 = ZEXT48((int *)param_1[0x19]);
  uStack_2b8 = CONCAT44(0x997dd7,(undefined4)uStack_2b8);
  (**(code **)(*(int *)param_1[0x19] + 0x114))();
  uStack_204 = (undefined4)*in_ECX;
  uStack_200 = (undefined4)((ulonglong)*in_ECX >> 0x20);
  ppuStack_1fc = (undefined **)in_ECX[1];
  piStack_1f8 = (int *)((ulonglong)in_ECX[1] >> 0x20);
  uStack_1f4 = in_ECX[2];
  uStack_2b8 = CONCAT44(&uStack_204,(int *)param_1[0x19]);
  piVar7 = (int *)((int)in_ECX + 0x1c);
  uStack_2bc = 0x997e1d;
  (**(code **)(*(int *)param_1[0x19] + 0xbc))();
  uStack_2bc = 0x997e29;
  uStack_2bc = (**(code **)(*piVar7 + 0x16c))();
  piStack_2c4 = (int *)param_1[0x19];
  ppuStack_2c0 = (undefined **)0x2;
  uStack_2c8 = 0x997e3a;
  (**(code **)(*piStack_2c4 + 0xb0))();
  uStack_2c8 = 0x997e46;
  uStack_2c8 = (**(code **)(*piVar7 + 0x174))();
  piStack_2d0 = (int *)param_1[0x19];
  uStack_2cc = 3;
  uStack_2d4 = 0x997e57;
  (**(code **)(*piStack_2d0 + 0xb0))();
  piStack_2dc = (int *)param_1[0x19];
  uStack_2d4 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0x997e69;
  (**(code **)(*piStack_2dc + 0x104))();
  piStack_2ec = (int *)param_1[0x19];
  uStack_2e0 = 4;
  uStack_2e4 = 1;
  uStack_2e8 = 0;
  uStack_2f0 = 0x997e7d;
  (**(code **)(*piStack_2ec + 0x10c))();
  piStack_2fc = (int *)param_1[0x19];
  uStack_2f0 = 2;
  uStack_2f4 = 2;
  uStack_2f8 = 0;
  uStack_300 = 0x997e91;
  (**(code **)(*piStack_2fc + 0x10c))();
  piStack_30c = (int *)param_1[0x19];
  uStack_300 = 1;
  uStack_304 = 3;
  uStack_308 = 0;
  uStack_310 = 0x997ea5;
  (**(code **)(*piStack_30c + 0x10c))();
  piStack_31c = (int *)param_1[0x19];
  uStack_310 = 1;
  uStack_314 = 1;
  ppuStack_318 = (undefined **)0x1;
  uStack_320 = 0x997eb9;
  (**(code **)(*piStack_31c + 0x10c))();
  piStack_32c = (int *)param_1[0x19];
  uStack_320 = 4;
  iStack_324 = 4;
  iStack_328 = 0;
  uStack_330 = 0x997ecd;
  (**(code **)(*piStack_32c + 0x10c))();
  piStack_33c = (int *)param_1[0x19];
  uStack_330 = 2;
  iStack_334 = 5;
  iStack_338 = 0;
  uStack_340 = 0x997ee1;
  (**(code **)(*piStack_33c + 0x10c))();
  piStack_34c = (int *)param_1[0x19];
  uStack_340 = 1;
  uStack_344 = 6;
  uStack_348 = 0;
  uStack_350 = 0x997ef5;
  (**(code **)(*piStack_34c + 0x10c))();
  piStack_358 = (int *)param_1[0x19];
  uStack_350 = 1;
  piStack_354 = (int *)0x1b;
  uStack_360 = CONCAT44(0x997f07,(uint)uStack_360);
  (**(code **)(*piStack_358 + 0xe4))();
  piStack_364 = (int *)param_1[0x19];
  uStack_360 = 0x500000013;
  fStack_368 = 1.4096425e-38;
  (**(code **)(*piStack_364 + 0xe4))();
  piStack_370 = (int *)param_1[0x19];
  fStack_368 = 8.40779e-45;
  piStack_36c = (int *)0x14;
  auStack_37c[2] = 0x997f2b;
  (**(code **)(*piStack_370 + 0xe4))();
  piStack_380 = (int *)param_1[0x19];
  auStack_37c[2] = 2;
  auStack_37c[1] = 5;
  auStack_37c[0] = 0;
  pcStack_384 = (char *)0x997f3f;
  (**(code **)(*piStack_380 + 0x10c))();
  ppuStack_390 = (undefined **)param_1[0x19];
  pcStack_384 = (char *)0x2;
  iStack_388 = 5;
  piStack_38c = (int *)0x1;
  pppuStack_394 = (undefined ***)0x997f53;
  (**(code **)(*ppuStack_390 + 0x10c))();
  piStack_380 = (int *)param_1[0x1ae74];
  if (((((float)piStack_380 != 0.0) && (fStack_368 = (float)param_1[0x1ae75], fStack_368 != 0.0)) &&
      (piStack_354 = (int *)param_1[0x1ae76], (float)piStack_354 != 0.0)) &&
     (piStack_36c = (int *)param_1[0x1ae77], (float)piStack_36c != 0.0)) {
    piStack_39c = (int *)param_1[0x19];
    uStack_360._0_4_ = (uint)(longlong)ROUND((float)piStack_36c * 255.0);
    uVar14 = (uint)uStack_360 << 8;
    uStack_360._0_4_ = (uint)(longlong)ROUND((float)piStack_380 * 255.0);
    uVar6 = (uint)uStack_360 & 0xff;
    uStack_360._0_4_ = (uint)(longlong)ROUND(fStack_368 * 255.0);
    uVar5 = (uint)uStack_360 & 0xff;
    pcStack_384 = (char *)CONCAT22(pcStack_384._2_2_,in_FPUControlWord);
    piStack_36c = (int *)(in_FPUControlWord | 0xc00);
    uStack_360 = (longlong)ROUND((float)piStack_354 * 255.0);
    pppuStack_394 = (undefined ***)(((uVar14 | uVar6) << 8 | uVar5) << 8 | (uint)uStack_360 & 0xff);
    uStack_398 = 0x8b;
    iStack_3a0 = 0x99809a;
    (**(code **)(*piStack_39c + 0xe4))();
  }
  piStack_39c = (int *)param_1[0x19];
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  uStack_2b8 = 0;
  uStack_2bc = 0;
  pppuStack_394 = &ppuStack_2c0;
  uStack_298 = ZEXT48(DAT_00f092fc);
  uStack_2b0 = ZEXT48(DAT_00f092fc) << 0x20;
  ppuStack_2c0 = DAT_00f092fc;
  uStack_398 = 0x100;
  iStack_3a0 = 0x998150;
  (**(code **)(*piStack_39c + 0xb0))();
  iStack_3a0 = param_1[0x19];
  piStack_3a4 = (int *)0x99815e;
  iVar4 = (**(code **)(*param_2 + 0x28))();
  piStack_3ac = (int *)param_1[0x19];
  if (iVar4 < 1) {
    piStack_3a4 = (int *)0x0;
    uStack_3a8 = 0x89;
    ppuStack_3b0 = (undefined **)0x998185;
    (**(code **)(*piStack_3ac + 0xe4))();
  }
  else {
    piStack_3a4 = (int *)0x1;
    uStack_3a8 = 0x89;
    ppuStack_3b0 = (undefined **)0x998177;
    (**(code **)(*piStack_3ac + 0xe4))();
  }
  ppuStack_3b0 = (undefined **)(uint)(iVar4 >= 1);
  apiStack_3b8[0] = (int *)param_1[0x19];
  apiStack_3b8[1] = (int *)0x1d;
  uStack_3bc = 0x998197;
  (**(code **)(*apiStack_3b8[0] + 0xe4))();
  piStack_3c4 = (int *)param_1[0x19];
  uStack_3bc = 1;
  pppuStack_3c0 = (undefined ***)0x1b;
  (**(code **)(*piStack_3c4 + 0xe4))();
  pppuStack_3cc = (undefined ***)(param_1 + 0x1af3f);
  puStack_3d0 = (uint *)0x9981bd;
  FUN_009bee60();
  uStack_148 = 0;
  apiStack_3b8[0] = (int *)0x0;
  if (0 < (int)(iStack_324 - iStack_328 & 0xfffffffcU)) {
    do {
      piVar23 = apiStack_3b8[0];
      puStack_3d0 = *(uint **)(iStack_328 + (int)apiStack_3b8[0] * 4);
      pppuStack_3cc = (undefined ***)0x0;
      ppiStack_3d4 = (int **)0x9981f8;
      piStack_3ac = (int *)(**(code **)(*puStack_3d0 + 0x24))();
      if (piStack_3ac != (int *)0x0) {
        pppuStack_3c0 = *(undefined ****)(iStack_334 + (int)piVar23 * 4);
        ppuVar1 = *pppuStack_3c0;
        ppiStack_3d4 = (int **)0x99821c;
        ppiStack_3d4 = (int **)(**(code **)(*piVar7 + 0x16c))();
        pppuStack_3d8 = (undefined ***)piStack_3ac;
        pppuStack_3dc = pppuStack_3c0;
        piStack_3e0 = (int *)0x99822f;
        (*(code *)ppuVar1[0x26])();
        piVar23 = piStack_3c4;
      }
      pppuStack_3dc = *(undefined ****)(iStack_334 + (int)piVar23 * 4);
      ppiStack_3d4 = (int **)0xe19370;
      pppuStack_3d8 = (undefined ***)0x0;
      piStack_3e0 = (int *)0x99824c;
      iStack_3a0 = (*(code *)(*pppuStack_3dc)[9])();
      if (iStack_3a0 != 0) {
        apiStack_3b8[1] = *(int **)(iStack_328 + (int)piVar23 * 4);
        uVar6 = *apiStack_3b8[1];
        (**(code **)(*piVar7 + 0x174))();
        pppuStack_3cc = (undefined ***)iStack_3a0;
        puStack_3d0 = (uint *)apiStack_3b8[1];
        ppiStack_3d4 = (int **)0x998283;
        (**(code **)(uVar6 + 0x98))();
        piVar23 = apiStack_3b8[0];
      }
      apiStack_3b8[0] = (int *)((int)piVar23 + 1);
    } while ((int)apiStack_3b8[0] < iStack_324 - iStack_328 >> 2);
  }
  iStack_334 = 0;
  pppuStack_3cc = (undefined ***)0x9982b7;
  iVar4 = FUN_00aae9af();
  if (iVar4 == 0) {
    pppuStack_394 = (undefined ***)0x0;
    pppuStack_3cc = (undefined ***)0x999260;
    std::exception::exception((exception *)&ppuStack_318,(char **)&pppuStack_394);
    pppuStack_3cc = &ppuStack_318;
    ppuStack_318 = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    puStack_3d0 = (uint *)&UNK_0099927d;
    __CxxThrowException_8();
  }
  *(int *)iVar4 = iVar4;
  *(int *)(iVar4 + 4) = iVar4;
  *(int *)(iVar4 + 8) = iVar4;
  *(undefined1 *)(iVar4 + 0x28) = 1;
  *(undefined1 *)(iVar4 + 0x29) = 1;
  uStack_148._0_1_ = 1;
  piStack_354 = (int *)0x0;
  pppuStack_3cc = (undefined ***)0x998308;
  iStack_338 = iVar4;
  piVar7 = (int *)FUN_00aae9af();
  if (piVar7 == (int *)0x0) {
    pcStack_384 = (char *)0x0;
    pppuStack_3cc = (undefined ***)0x999234;
    std::exception::exception((exception *)&ppuStack_3b0,&pcStack_384);
    pppuStack_3cc = &ppuStack_3b0;
    ppuStack_3b0 = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    puStack_3d0 = (uint *)0x99924b;
    __CxxThrowException_8();
  }
  *piVar7 = 0;
  piVar7[1] = 0;
  *piVar7 = (int)&piStack_354;
  uStack_350 = 0;
  piStack_34c = (int *)0x0;
  uStack_348 = 0;
  uStack_344 = 0;
  uStack_148._0_1_ = 2;
  piStack_36c = (int *)0x0;
  pppuStack_3cc = (undefined ***)0x998350;
  piStack_354 = piVar7;
  piVar7 = (int *)FUN_00aae9af();
  if (piVar7 == (int *)0x0) {
    pppuStack_394 = (undefined ***)0x0;
    pppuStack_3cc = (undefined ***)0x999205;
    std::exception::exception((exception *)&ppuStack_318,(char **)&pppuStack_394);
    pppuStack_3cc = &ppuStack_318;
    ppuStack_318 = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    puStack_3d0 = (uint *)0x999222;
    __CxxThrowException_8();
  }
  *piVar7 = 0;
  piVar7[1] = 0;
  *piVar7 = (int)&piStack_36c;
  fStack_368 = 0.0;
  piStack_364 = (int *)0x0;
  uStack_360 = 0;
  uStack_148 = CONCAT31(uStack_148._1_3_,3);
  piStack_36c = piVar7;
  FUN_0099e240();
  FUN_00816010();
  if (auStack_37c[1] != uStack_2f8) {
    do {
      if (piStack_380 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piStack_380;
      }
      uVar6 = auStack_37c[1] >> 2;
      if (*(uint *)(iVar4 + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(iVar4 + 8);
      }
      puVar17 = *(uint **)(*(int *)(*(int *)(iVar4 + 4) + uVar6 * 4) + (auStack_37c[1] & 3) * 4);
      apiStack_3b8[1] = (int *)puVar17;
      cVar2 = (**(code **)(*puVar17 + 0x13c))();
      if (cVar2 != '\0') {
        DAT_01258a6c = DAT_01258a6c + 1;
        iVar4 = (**(code **)(*puVar17 + 0x30))();
        if (iVar4 == 0) {
          puStack_3d0 = (uint *)param_1[0x19];
          pppuStack_3cc = (undefined ***)0x100;
          ppiStack_3d4 = (int **)0x99842d;
          (**(code **)(*puStack_3d0 + 0xb0))();
          pppuStack_3dc = (undefined ***)param_1[0x19];
          ppiStack_3d4 = &piStack_3c4;
          piStack_3c4 = (int *)0x0;
          pppuStack_394 = (undefined ***)0x0;
          pppuStack_3d8 = (undefined ***)0x7;
          piStack_3e0 = (int *)0x99844c;
          (*(code *)(*pppuStack_3dc)[0x3a])();
          piStack_3e0 = (int *)0x998458;
          cVar2 = (**(code **)(*puVar17 + 0x138))();
          if (cVar2 == '\0') {
            if (puStack_3d0 == (uint *)0x0) {
              piStack_3e0 = (int *)0x1;
              goto LAB_0099846e;
            }
          }
          else if (puStack_3d0 == (uint *)0x1) {
            piStack_3e0 = (int *)0x0;
LAB_0099846e:
            piStack_3e8 = (int *)param_1[0x19];
            piStack_3e4 = (int *)0x7;
            uStack_3ec = 0x99847e;
            (**(code **)(*piStack_3e8 + 0xe4))();
          }
          piStack_3e8 = (int *)param_1[0x19];
          piStack_3e0 = &iStack_3a0;
          piStack_3e4 = (int *)0x1b;
          uStack_3ec = 0x998493;
          (**(code **)(*piStack_3e8 + 0xe8))();
          if (piStack_3ac != (int *)0x1) {
            piStack_3f4 = (int *)param_1[0x19];
            uStack_3ec = 1;
            uStack_3f0 = 0x1b;
            puStack_3f8 = (uint *)0x9984ac;
            (**(code **)(*piStack_3f4 + 0xe4))();
          }
          uStack_3ec = 0x9984b5;
          (**(code **)(*puVar17 + 0x14))();
          ppuStack_3b0 = (undefined **)*puVar17;
          uStack_3ec = 0;
          uStack_3f0 = 0;
          piStack_3f4 = (int *)0x9984c4;
          fVar21 = (float10)(*(code *)ppuStack_3b0[0x16])();
          piStack_3f4 = (int *)(float)fVar21;
          puStack_3f8 = puVar17 + 0x25;
          piStack_3fc = (int *)param_1[0x19];
          piStack_400 = param_1;
          ppppuStack_404 = (undefined ****)0x9984df;
          (*(code *)ppuStack_3b0[10])();
          piStack_40c = (int *)param_1[0x19];
          ppppuStack_404 = &pppuStack_3dc;
          pppuStack_3dc = (undefined ***)0x0;
          uStack_408 = 0x1b;
          uStack_410 = 0x9984f8;
          (**(code **)(*piStack_40c + 0xe8))();
          if (iStack_3a0 != iStack_388) {
            puStack_3d0 = (uint *)param_1[0x19];
            pppuStack_3cc = (undefined ***)0x1b;
            ppiStack_3d4 = (int **)0x998517;
            (**(code **)(*puStack_3d0 + 0xe4))();
          }
        }
        else {
          cVar2 = (**(code **)(*puVar17 + 0x128))();
          if ((cVar2 == '\0') && (cVar2 = (**(code **)(*puVar17 + 0x138))(), cVar2 == '\0')) {
            piStack_38c = (int *)(**(code **)(*puVar17 + 0x30))();
            piStack_370 = (int *)(piStack_38c[1] - *piStack_38c >> 2);
            piStack_39c = (int *)0x0;
            if (0 < (int)piStack_370) {
              do {
                puVar8 = *(undefined4 **)(*piStack_38c + (int)piStack_39c * 4);
                piStack_32c = (int *)*puVar8;
                auStack_37c[2] = puVar8[0x19];
                puVar8 = *(undefined4 **)(iStack_338 + 4);
                cVar2 = *(char *)((int)puVar8 + 0x29);
                while (cVar2 == '\0') {
                  if ((int)puVar8[3] < (int)auStack_37c[2]) {
                    puVar8 = (undefined4 *)puVar8[2];
                  }
                  else {
                    puVar8 = (undefined4 *)*puVar8;
                  }
                  cVar2 = *(char *)((int)puVar8 + 0x29);
                }
                pppuStack_3cc = (undefined ***)0x9985c7;
                iVar4 = FUN_00a46c00();
                if (((*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 0x10) & 1U) == 0) &&
                   (*(uint *)(iVar4 + 8) <= *(int *)(iVar4 + 0x10) + 2U >> 1)) {
                  pppuStack_3cc = (undefined ***)0x9985e6;
                  FUN_00a46dc0();
                }
                auStack_37c[2] = *(int *)(iVar4 + 0x10) + *(int *)(iVar4 + 0xc);
                uVar6 = auStack_37c[2] >> 1;
                if (*(uint *)(iVar4 + 8) <= uVar6) {
                  uVar6 = uVar6 - *(uint *)(iVar4 + 8);
                }
                if (*(int *)(*(int *)(iVar4 + 4) + uVar6 * 4) == 0) {
                  pppuStack_3cc = (undefined ***)0x99860d;
                  iVar12 = FUN_00aae9af();
                  if (iVar12 == 0) {
                    pcStack_384 = (char *)0x0;
                    pppuStack_3cc = (undefined ***)0x998c01;
                    std::exception::exception((exception *)&ppuStack_3b0,&pcStack_384);
                    pppuStack_3cc = &ppuStack_3b0;
                    ppuStack_3b0 = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
                    puStack_3d0 = (uint *)0x998c18;
                    __CxxThrowException_8();
                  }
                  *(int *)(*(int *)(iVar4 + 4) + uVar6 * 4) = iVar12;
                }
                puVar8 = (undefined4 *)
                         (*(int *)(*(int *)(iVar4 + 4) + uVar6 * 4) + (auStack_37c[2] & 1) * 8);
                if (puVar8 != (undefined4 *)0x0) {
                  *puVar8 = apiStack_3b8[1];
                  puVar8[1] = piStack_32c;
                }
                *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
                piStack_39c = (int *)((int)piStack_39c + 1);
              } while ((int)piStack_39c < (int)piStack_370);
            }
          }
          else {
            pppuStack_3cc = (undefined ***)0x998673;
            FUN_00868340();
          }
        }
      }
      auStack_37c[1] = auStack_37c[1] + 1;
    } while (auStack_37c[1] != uStack_2f8);
  }
  pppuStack_3cc = (undefined ***)0x0;
  puStack_3d0 = (uint *)param_1;
  ppiStack_3d4 = (int **)0x998698;
  FUN_00a30420();
  (**(code **)(*param_1 + 0x10))();
  puStack_3d0 = (uint *)param_1[0x19];
  pppuStack_3cc = (undefined ***)0x1b;
  ppiStack_3d4 = (int **)0x9986b6;
  (**(code **)(*puStack_3d0 + 0xe4))();
  uStack_2b8 = ZEXT48(DAT_00f092fc);
  uStack_2b0 = 0;
  uStack_2a8 = ZEXT48(DAT_00f092fc) << 0x20;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_278 = ZEXT48(DAT_00f092fc);
  uStack_270 = 0;
  lStack_268 = ZEXT48(DAT_00f092fc) << 0x20;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = ZEXT48(DAT_00f092fc);
  uStack_248 = 0;
  lStack_240 = ZEXT48(DAT_00f092fc) << 0x20;
  uStack_238 = ZEXT48(DAT_00f092fc);
  uStack_230 = 0;
  lStack_228 = ZEXT48(DAT_00f092fc) << 0x20;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_210 = ZEXT48(DAT_00f092fc);
  uStack_3bc = 0;
  apiStack_3b8[0] = (int *)0x0;
  apiStack_3b8[1] = (int *)0x0;
  ppuStack_3b0 = DAT_00f092fc;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  ppuStack_1fc = DAT_00f092fc;
  ppiStack_3d4 = (int **)0x998957;
  puVar8 = (undefined4 *)(**(code **)(*piStack_3a4 + 0x16c))();
  puVar15 = &uStack_278;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)puVar15 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar15 = (ulonglong *)((int)puVar15 + 4);
  }
  ppiStack_3d4 = (int **)0x998975;
  puVar8 = (undefined4 *)(**(code **)(*piStack_3a4 + 0x174))();
  puVar15 = &uStack_238;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)puVar15 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar15 = (ulonglong *)((int)puVar15 + 4);
  }
  ppiStack_3d4 = (int **)param_1[0x19];
  pppuStack_3d8 = (undefined ***)0x998995;
  (**(code **)(*param_2 + 0x28))();
  pppuStack_3d8 = (undefined ***)0x99899e;
  piVar7 = (int *)(**(code **)(*param_2 + 0x38))();
  if ((piVar7[1] - *piVar7 & 0xfffffffcU) != 0) {
    pppuStack_3d8 = (undefined ***)0x9989b8;
    puVar8 = (undefined4 *)(**(code **)(*param_2 + 0x38))();
    puVar8 = (undefined4 *)(*(int *)*puVar8 + 0xf8);
    puVar16 = auStack_1cc;
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar16 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar16 = puVar16 + 1;
    }
    pppuStack_3dc = &ppuStack_390;
    ppuStack_390 = ppuStack_18c;
    piStack_38c = piStack_188;
    iStack_388 = iStack_184;
    piStack_3e0 = (int *)0x998a0b;
    pppuStack_3d8 = pppuStack_3dc;
    D3DXVec3Normalize();
    ppuStack_1fc = ppuStack_390;
    piStack_1f8 = piStack_38c;
    uStack_1f4 = CONCAT44(auStack_1cc[1],iStack_388);
    uStack_1ec = auStack_1cc[2];
    uStack_1e8 = auStack_1cc[3];
    uStack_1e4 = uStack_1a8;
    uStack_1e0 = uStack_1a4;
    uStack_1dc = uStack_1a0;
  }
  iStack_1d8 = param_1[0x1af17];
  piStack_3e4 = (int *)param_1[0x19];
  pppuStack_3d8 = (undefined ***)0x4;
  iStack_1d4 = param_1[0x1af18];
  pppuStack_3dc = (undefined ***)0x1;
  piStack_3e0 = (int *)0x0;
  piStack_3e8 = (int *)0x998ada;
  (**(code **)(*piStack_3e4 + 0x10c))();
  piStack_3f4 = (int *)param_1[0x19];
  piStack_3e8 = (int *)0x2;
  uStack_3ec = 2;
  uStack_3f0 = 0;
  puStack_3f8 = (uint *)0x998aee;
  (**(code **)(*piStack_3f4 + 0x10c))();
  ppppuStack_404 = (undefined ****)param_1[0x19];
  puStack_3f8 = (uint *)0x1;
  piStack_3fc = (int *)0x3;
  piStack_400 = (int *)0x0;
  uStack_408 = 0x998b02;
  (**(code **)((int)*ppppuStack_404 + 0x10c))();
  piStack_414 = (int *)param_1[0x19];
  uStack_408 = 1;
  piStack_40c = (int *)0x1;
  uStack_410 = 1;
  uStack_418 = 0x998b16;
  (**(code **)(*piStack_414 + 0x10c))();
  piStack_424 = (int *)param_1[0x19];
  uStack_418 = 4;
  uStack_41c = 4;
  uStack_420 = 0;
  uStack_428 = 0x998b2a;
  (**(code **)(*piStack_424 + 0x10c))();
  piStack_434 = (int *)param_1[0x19];
  uStack_428 = 2;
  iStack_42c = 5;
  uStack_430 = 0;
  uStack_438 = 0x998b3e;
  (**(code **)(*piStack_434 + 0x10c))();
  piStack_444 = (int *)param_1[0x19];
  uStack_438 = 1;
  uStack_43c = 6;
  uStack_440 = 0;
  uStack_448 = 0x998b52;
  (**(code **)(*piStack_444 + 0x10c))();
  piStack_450 = (int *)param_1[0x19];
  uStack_448 = 1;
  uStack_44c = 0x1b;
  iStack_454 = 0x998b64;
  (**(code **)(*piStack_450 + 0xe4))();
  piVar7 = (int *)param_1[0x19];
  iStack_454 = 5;
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x13);
  piVar23 = (int *)param_1[0x19];
  uStack_460 = 6;
  (**(code **)(*piVar23 + 0xe4))();
  (**(code **)(*(int *)param_1[0x19] + 0x10c))((int *)param_1[0x19],0,5,2);
  piVar26 = (int *)0x1;
  (**(code **)(*(int *)param_1[0x19] + 0x10c))((int *)param_1[0x19],1,5,2);
  piVar25 = (int *)*piStack_3fc;
  if (piVar25 != piStack_3fc) {
    do {
      piVar10 = (int *)piVar25[8];
      uVar6 = piVar25[3];
      if ((uVar6 == 0xffffffff) || (9999 < uVar6)) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[uVar6 * 0xb + 0x57];
      }
      piStack_434 = piVar10;
      (**(code **)(*(int *)param_1[0x19] + 0x104))((int *)param_1[0x19],0,iVar4);
      iVar4 = 0;
      if (0 < (int)piVar10) {
        do {
          iVar12 = iVar4;
          FUN_0099e240(iVar4);
          piVar7 = (int *)FUN_00868600(iVar4);
          if ((int *)*piVar7 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)*piVar7;
          }
          uVar6 = (uint)piVar7[2] >> 1;
          uVar5 = piVar7[2] & 1;
          if (*(uint *)(iVar4 + 8) <= uVar6) {
            uVar6 = uVar6 - *(uint *)(iVar4 + 8);
          }
          iVar4 = *(int *)(*(int *)(iVar4 + 4) + uVar6 * 4);
          piVar10 = (int *)(iVar4 + uVar5 * 8);
          puVar17 = (uint *)(*(int *)(iVar4 + uVar5 * 8) + 0x94);
          puVar24 = puVar17;
          piVar7 = piVar10;
          (**(code **)(*(int *)param_1[0x19] + 0xb0))((int *)param_1[0x19],0x100,puVar17);
          if (-1 < *(int *)(*(int *)(param_1[0x1af52] + piVar10[1] * 4) + 0x60)) {
            puVar18 = auStack_37c;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar18 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar18 = puVar18 + 1;
            }
            (**(code **)(*(int *)*piVar23 + 0x14))();
            piVar10 = piVar23;
          }
          cVar2 = (**(code **)(*(int *)*piVar10 + 0x1c))();
          iVar4 = piVar10[1];
          iVar11 = param_1[0x1af52];
          if (cVar2 == '\0') {
            iVar4 = *(int *)(iVar11 + iVar4 * 4);
            if ((*(int *)(iVar4 + 0x54) != 0) && (*(int *)(iVar4 + 0x74) != 0)) {
              (**(code **)(**(int **)(iVar4 + 0x54) + 0xe8))
                        (*(int **)(iVar4 + 0x54),*(int *)(iVar4 + 0x74));
            }
          }
          else {
            puVar8 = (undefined4 *)(**(code **)(*(int *)*piVar10 + 0x18))();
            iVar4 = *(int *)(iVar11 + iVar4 * 4);
            if (*(int *)(iVar4 + 0x54) != 0) {
              if (0xf < (uint)puVar8[5]) {
                puVar8 = (undefined4 *)*puVar8;
              }
              iVar11 = (**(code **)(**(int **)(iVar4 + 0x54) + 0x34))
                                 (*(int **)(iVar4 + 0x54),puVar8);
              if ((iVar11 != 0) ||
                 ((**(code **)(**(int **)(iVar4 + 0x54) + 0xf4))
                            (*(int **)(iVar4 + 0x54),0,&iStack_454), iVar11 = iStack_454,
                 iStack_454 != 0)) {
                (**(code **)(**(int **)(iVar4 + 0x54) + 0xe8))(*(int **)(iVar4 + 0x54),iVar11);
              }
            }
          }
          piVar10 = (int *)*piVar10;
          uVar3 = (**(code **)(*piVar10 + 0x118))();
          uVar9 = (**(code **)(*piVar10 + 0x114))(uVar3);
          FUN_00a43300(param_1,uVar9,puVar24);
          iVar4 = iVar12 + 1;
        } while (iVar4 < (int)piStack_434);
      }
      if (*(char *)((int)piVar25 + 0x29) == '\0') {
        piVar10 = (int *)piVar25[2];
        if (*(char *)((int)piVar10 + 0x29) == '\0') {
          cVar2 = *(char *)(*piVar10 + 0x29);
          piVar25 = piVar10;
          piVar10 = (int *)*piVar10;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar10 + 0x29);
            piVar25 = piVar10;
            piVar10 = (int *)*piVar10;
          }
        }
        else {
          cVar2 = *(char *)(piVar25[1] + 0x29);
          piVar13 = (int *)piVar25[1];
          piVar10 = piVar25;
          while ((piVar25 = piVar13, cVar2 == '\0' && (piVar10 == (int *)piVar25[2]))) {
            cVar2 = *(char *)(piVar25[1] + 0x29);
            piVar13 = (int *)piVar25[1];
            piVar10 = piVar25;
          }
        }
      }
    } while (piVar25 != piStack_3fc);
  }
  piVar25 = (int *)0x0;
  piVar23 = (int *)0x89;
  (**(code **)(*(int *)param_1[0x19] + 0xe4))((int *)param_1[0x19]);
  (**(code **)(*(int *)param_1[0x19] + 0xe4))((int *)param_1[0x19],0x1d,0);
  (**(code **)(*(int *)param_1[0x19] + 0xe4))((int *)param_1[0x19]);
  iVar4 = iStack_42c;
  while (iStack_42c = iVar4, iVar4 != 0) {
    piVar26 = (int *)FUN_0099e240();
    if ((int *)*piVar26 == (int *)0x0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)*piVar26;
    }
    uVar6 = (uint)piVar26[2] >> 2;
    if (*(uint *)(iVar12 + 8) <= uVar6) {
      uVar6 = uVar6 - *(uint *)(iVar12 + 8);
    }
    piVar10 = *(int **)(*(int *)(*(int *)(iVar12 + 4) + uVar6 * 4) + (piVar26[2] & 3U) * 4);
    if (iVar4 != 0) {
      uStack_430 = uStack_430 + 1;
      if ((uint)((int)piStack_434 * 4) <= uStack_430) {
        uStack_430 = 0;
      }
      iStack_42c = iVar4 + -1;
      if (iStack_42c == 0) {
        uStack_430 = 0;
      }
    }
    piVar26 = (int *)(**(code **)(*piVar10 + 0x30))();
    iVar12 = 0;
    iVar4 = iStack_42c;
    if (0 < (int)(piVar26[1] - *piVar26 & 0xfffffffcU)) {
      do {
        piVar13 = piVar10 + 0x25;
        piVar22 = piVar13;
        (**(code **)(*(int *)param_1[0x19] + 0xb0))((int *)param_1[0x19],0x100,piVar13);
        piVar19 = &iStack_3a0;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar19 = *piVar13;
          piVar13 = piVar13 + 1;
          piVar19 = piVar19 + 1;
        }
        iVar4 = *(int *)(*piVar23 + 0x6c);
        if ((*(int *)(iVar4 + 0x54) != 0) && (*(int *)(iVar4 + 0x74) != 0)) {
          (**(code **)(**(int **)(iVar4 + 0x54) + 0xe8))
                    (*(int **)(iVar4 + 0x54),*(int *)(iVar4 + 0x74));
        }
        piVar13 = piVar25;
        uVar3 = (**(code **)(*piVar25 + 0x118))();
        uVar9 = (**(code **)(*piVar25 + 0x114))(uVar3);
        FUN_00a43300(param_1,uVar9,piVar22);
        iVar12 = iVar12 + 1;
        piVar25 = piVar13;
        iVar4 = iStack_42c;
      } while (iVar12 < piVar26[1] - *piVar26 >> 2);
    }
  }
  (**(code **)(*(int *)param_1[0x19] + 0xe4))((int *)param_1[0x19],0x1b,0);
  iVar4 = 7;
  (**(code **)(*(int *)param_1[0x19] + 0xe4))((int *)param_1[0x19],7,0);
  while (piVar7 != (int *)0x0) {
    piVar23 = piVar7;
    piVar25 = (int *)FUN_0099e240();
    if ((int *)*piVar25 == (int *)0x0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)*piVar25;
    }
    uVar6 = (uint)piVar25[2] >> 2;
    if (*(uint *)(iVar12 + 8) <= uVar6) {
      uVar6 = uVar6 - *(uint *)(iVar12 + 8);
    }
    piVar25 = *(int **)(*(int *)(*(int *)(iVar12 + 4) + uVar6 * 4) + (piVar25[2] & 3U) * 4);
    if (piVar7 != (int *)0x0) {
      uStack_460 = uStack_460 + 1;
      if (0x4f < uStack_460) {
        uStack_460 = 0;
      }
      piVar23 = (int *)((int)piVar7 + -1);
      if (piVar23 == (int *)0x0) {
        uStack_460 = 0;
      }
    }
    piVar10 = (int *)(**(code **)(*piVar25 + 0x30))();
    iVar12 = 0;
    piVar7 = piVar23;
    if (0 < (int)(piVar10[1] - *piVar10 & 0xfffffffcU)) {
      do {
        piVar7 = piVar25 + 0x25;
        piVar13 = piVar7;
        (**(code **)(*(int *)param_1[0x19] + 0xb0))((int *)param_1[0x19],0x100,piVar7);
        ppiVar20 = apiStack_3b8;
        for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
          *ppiVar20 = (int *)*piVar7;
          piVar7 = piVar7 + 1;
          ppiVar20 = ppiVar20 + 1;
        }
        iVar11 = *(int *)(iVar4 * 4 + iRam0000001b);
        if ((*(int *)(iVar11 + 0x54) != 0) && (*(int *)(iVar11 + 0x74) != 0)) {
          (**(code **)(**(int **)(iVar11 + 0x54) + 0xe8))
                    (*(int **)(iVar11 + 0x54),*(int *)(iVar11 + 0x74));
        }
        uVar3 = (**(code **)(iRam00000001 + 0x118))();
        uVar9 = (**(code **)(iRam00000001 + 0x114))(uVar3);
        FUN_00a43300(param_1,uVar9,piVar13);
        iVar12 = iVar12 + 1;
        piVar7 = piVar23;
      } while (iVar12 < piVar10[1] - *piVar10 >> 2);
    }
  }
  (**(code **)(*(int *)param_1[0x19] + 0xe4))((int *)param_1[0x19],7,1);
  (**(code **)(*(int *)param_1[0x19] + 0x104))((int *)param_1[0x19],0,0);
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar26);
LAB_00997d83:
  do {
    if ((uVar6 < DAT_0131ca24) || (DAT_0131ca28 <= uVar6)) {
      ExceptionList = pvStack_1c;
      return;
    }
    piVar7 = (int *)(uVar6 + 8);
    piVar23 = (int *)(uVar6 + 4);
    uVar6 = uVar6 + 0x14;
  } while ((*piVar7 - *piVar23 & 0xfffffffcU) == 0);
  goto LAB_00997da6;
}

