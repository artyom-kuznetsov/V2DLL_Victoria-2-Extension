// FUN_007e1210 @ 007e1210 body=[[007e1210, 007e1309] [007e130d, 007e1384] [007e1388, 007e1aa9]]


void FUN_007e1210(undefined4 *param_1,char param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 uStack_360;
  undefined4 *puStack_35c;
  undefined4 uStack_358;
  int *piStack_354;
  undefined4 uStack_350;
  int *piStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  int *piStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  int *piStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  int *piStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  int *piStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  int *piStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined1 *puStack_2fc;
  int *piStack_2f8;
  float fStack_2f4;
  undefined4 uStack_2f0;
  int *piStack_2ec;
  undefined4 uStack_2e8;
  undefined1 *puStack_2e4;
  int *piStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 *puStack_2d4;
  int *piStack_2d0;
  int *piStack_2cc;
  undefined4 uStack_2c8;
  int *piStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  uint uStack_2b0;
  undefined1 *puStack_2ac;
  int *piStack_2a8;
  int *piStack_2a4;
  undefined4 uStack_2a0;
  undefined8 uStack_29c;
  undefined8 uStack_294;
  int *piStack_28c;
  char *pcStack_288;
  undefined ***pppuStack_284;
  undefined4 uStack_280;
  uint *puStack_27c;
  char *pcStack_278;
  float fStack_274;
  uint local_264;
  float fStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  uint local_254;
  uint local_250;
  float fStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  uint uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined1 auStack_204 [8];
  float fStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [272];
  undefined **appuStack_70 [21];
  uint uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b59551;
  local_14 = ExceptionList;
  pcStack_278 = (char *)0x7e123c;
  ExceptionList = &local_14;
  cVar1 = FUN_0099c370();
  if (cVar1 != '\0') {
    fStack_274 = 2.10195e-44;
    pcStack_278 = "eu3graphics.cpp";
    local_250 = 0xf;
    local_254 = 0;
    local_264 = local_264 & 0xffffff00;
    puStack_27c = (uint *)0x7e1266;
    FUN_00409350();
    fStack_274 = 4.2039e-45;
    puStack_27c = &local_264;
    pcStack_278 = (char *)0x109;
    local_c = 0;
    uStack_280 = 0x7e1285;
    uVar2 = FUN_004015b0();
    fStack_274 = 0.0;
    pcStack_278 = (char *)0xb;
    puStack_27c = (uint *)0xe19b7c;
    local_c = CONCAT31(local_c._1_3_,1);
    pppuStack_284 = (undefined ***)0x7e12a0;
    uStack_280 = uVar2;
    FUN_00987d50();
    pppuStack_284 = (undefined ***)param_1;
    if (0xf < (uint)param_1[5]) {
      pppuStack_284 = (undefined ***)*param_1;
    }
    piStack_28c = (int *)0x7e12b2;
    pcStack_288 = (char *)uVar2;
    piStack_28c = (int *)FUN_00418e30();
    uStack_294 = CONCAT44(0x7e12b8,(undefined4)uStack_294);
    FUN_00401280();
    pppuStack_284 = appuStack_70;
    uStack_1c = uStack_1c & 0xffffff00;
    pcStack_288 = (char *)0x7e12cf;
    FUN_00987ac0();
    pppuStack_284 = appuStack_70;
    appuStack_70[0] = std::ios_base::vftable;
    pcStack_288 = (char *)0x7e12e7;
    FUN_00aad52d();
    uStack_1c = 0xffffffff;
    if (0xf < (uint)fStack_260) {
      pppuStack_284 = (undefined ***)fStack_274;
                    /* WARNING: Subroutine does not return */
      pcStack_288 = &UNK_007e130a;
      FUN_00aae91b();
    }
    if (*(int *)(in_ECX + 0x6bd7c) == 0) {
      pppuStack_284 = (undefined ***)0xc;
      pcStack_288 = "Loading_Font";
      fStack_260 = 2.10195e-44;
      local_264 = 0;
      fStack_274 = (float)((uint)fStack_274 & 0xffffff00);
      piStack_28c = (int *)0x7e1335;
      FUN_00409350();
      pppuStack_284 = (undefined ***)&fStack_274;
      uStack_1c = 2;
      pcStack_288 = (char *)0x7e1350;
      iVar3 = FUN_00973bd0();
      if (iVar3 == 0) {
        pppuStack_284 = (undefined ***)&fStack_274;
        pcStack_288 = (char *)0x7e1364;
        iVar3 = FUN_00973bd0();
      }
      uStack_1c = 0xffffffff;
      *(int *)(in_ECX + 0x6bd7c) = iVar3;
      if (0xf < (uint)fStack_260) {
        pppuStack_284 = (undefined ***)fStack_274;
                    /* WARNING: Subroutine does not return */
        pcStack_288 = &UNK_007e1385;
        FUN_00aae91b();
      }
    }
    uStack_1c = 0xffffffff;
    if (param_2 == '\0') {
      pppuStack_284 = (undefined ***)&local_250;
      pcStack_288 = (char *)0x0;
      piStack_28c = (int *)0x0;
      fStack_274 = 0.0;
      uStack_29c = 0;
      uStack_2a0 = 4;
      uStack_294 = 0;
      local_250 = 0;
      fStack_24c = 0.0;
      piStack_2a4 = (int *)0x2;
      piStack_2a8 = param_1;
      puStack_2ac = (undefined1 *)0x7e1a93;
      (**(code **)(**(int **)(in_ECX + 0x6bd7c) + 0x20))();
    }
    else {
      if (param_3 != '\0') {
        *(int *)(in_ECX + 0x6bda4) = *(int *)(in_ECX + 0x6bda4) + 1;
        *(undefined4 *)(in_ECX + 0x6bda8) = 0;
        iVar3 = *(int *)(in_ECX + 0x6bd94) - *(int *)(in_ECX + 0x6bd90) >> 2;
        if (iVar3 <= *(int *)(in_ECX + 0x6bda4)) {
          *(int *)(in_ECX + 0x6bda4) = iVar3 + -1;
        }
      }
      piStack_28c = *(int **)(in_ECX + 100);
      pppuStack_284 = (undefined ***)&uStack_248;
      uStack_210 = 0;
      uStack_214 = 0;
      uStack_218 = 0;
      uStack_21c = 0;
      uStack_224 = 0;
      uStack_228 = 0;
      uStack_22c = 0;
      uStack_230 = 0;
      fStack_238 = 0.0;
      uStack_23c = 0;
      uStack_240 = 0;
      uStack_244 = 0;
      uStack_20c = DAT_00f092fc;
      uStack_220 = DAT_00f092fc;
      uStack_234 = DAT_00f092fc;
      uStack_248 = DAT_00f092fc;
      pcStack_288 = (char *)0x100;
      uStack_294 = CONCAT44(0x7e1443,(undefined4)uStack_294);
      (**(code **)(*piStack_28c + 0xb0))();
      uStack_29c._4_4_ = *(int **)(in_ECX + 100);
      uStack_294 = CONCAT44(&local_254,2);
      uStack_29c._0_4_ = 0x7e1458;
      (**(code **)(*uStack_29c._4_4_ + 0xb0))();
      uStack_29c._0_4_ = DAT_00f092fc;
      uStack_2a0 = 0;
      piStack_2a4 = (int *)(float)*(int *)(in_ECX + 0x6b9c0);
      piStack_2a8 = (int *)(float)*(int *)(in_ECX + 0x6b9bc);
      puStack_2ac = auStack_180;
      uStack_2b0 = 0x7e14a1;
      D3DXMatrixOrthoLH();
      piStack_2a4 = *(int **)(in_ECX + 100);
      uStack_29c = CONCAT44(uStack_29c._4_4_,auStack_180);
      uStack_2a0 = 3;
      piStack_2a8 = (int *)0x7e14b9;
      (**(code **)(*piStack_2a4 + 0xb0))();
      piStack_2a8 = *(int **)(in_ECX + 100);
      DAT_01258a6c = 0;
      DAT_01258a70 = 0;
      puStack_2ac = (undefined1 *)0x7e14d3;
      (**(code **)(*piStack_2a8 + 0xa4))();
      piStack_2c4 = *(int **)(in_ECX + 100);
      puStack_2ac = (undefined1 *)0x0;
      uStack_2b0 = DAT_00f092fc;
      uStack_2b4 = 0xff000000;
      uStack_2b8 = 7;
      uStack_2bc = 0;
      uStack_2c0 = 0;
      uStack_2c8 = 0x7e14f9;
      (**(code **)(*piStack_2c4 + 0xac))();
      if ((DAT_013f2968 & 1) == 0) {
        DAT_013f2968 = DAT_013f2968 | 1;
        DAT_013f2964 = (float)(*(int *)(in_ECX + 0x6b9bc) / 2);
      }
      fStack_1e8 = DAT_013f2964;
      if ((DAT_013f2968 & 2) == 0) {
        DAT_013f2968 = DAT_013f2968 | 2;
        DAT_013f2960 = (float)(*(int *)(in_ECX + 0x6b9bc) / 2);
      }
      fStack_1d0 = DAT_013f2960;
      fStack_1fc = -DAT_013f2964;
      fStack_1f8 = -DAT_013f2960;
      uStack_1f4 = DAT_00f17898;
      uStack_1e0 = DAT_00f17898;
      uStack_1cc = DAT_00f17898;
      uStack_1b8 = DAT_00f17898;
      uStack_1f0 = 0;
      uStack_1dc = DAT_00f092fc;
      uStack_1c8 = DAT_00f092fc;
      uStack_1b4 = 0;
      uStack_1ec = DAT_00f092fc;
      uStack_1d8 = DAT_00f092fc;
      uStack_1c4 = 0;
      uStack_1b0 = 0;
      fStack_1e4 = fStack_1f8;
      fStack_1d4 = DAT_013f2964;
      fStack_1c0 = fStack_1fc;
      fStack_1bc = DAT_013f2960;
      if ((*(int *)(in_ECX + 0x6bd94) - *(int *)(in_ECX + 0x6bd90) & 0xfffffffcU) != 0) {
        iVar3 = 0;
        if (0 < (*(int *)(in_ECX + 0x6bd84) - *(int *)(in_ECX + 0x6bd80)) / 0x1c) {
          do {
            if (*(int *)(*(int *)(in_ECX + 0x6bd90) + *(int *)(in_ECX + 0x6bda4) * 4) != 0) break;
            iVar4 = *(int *)(in_ECX + 0x6bda4) + 1;
            *(int *)(in_ECX + 0x6bda4) = iVar4;
            if (*(int *)(in_ECX + 0x6bd94) - *(int *)(in_ECX + 0x6bd90) >> 2 <= iVar4) {
              *(undefined4 *)(in_ECX + 0x6bda4) = 0;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (*(int *)(in_ECX + 0x6bd84) - *(int *)(in_ECX + 0x6bd80)) / 0x1c);
        }
        uStack_2c8 = *(undefined4 *)(*(int *)(in_ECX + 0x6bd90) + *(int *)(in_ECX + 0x6bda4) * 4);
        piStack_2d0 = *(int **)(in_ECX + 100);
        piStack_2cc = (int *)0x0;
        puStack_2d4 = (undefined1 *)0x7e16f0;
        fStack_1d4 = fStack_1e8;
        fStack_1bc = fStack_1d0;
        (**(code **)(*piStack_2d0 + 0x104))();
        piStack_2e0 = *(int **)(in_ECX + 100);
        puStack_2d4 = (undefined1 *)0x2;
        uStack_2d8 = 5;
        uStack_2dc = 0;
        puStack_2e4 = (undefined1 *)0x7e1703;
        (**(code **)(*piStack_2e0 + 0x114))();
      }
      piStack_2cc = *(int **)(in_ECX + 100);
      uStack_2c8 = 0x102;
      piStack_2d0 = (int *)0x7e1716;
      (**(code **)(*piStack_2cc + 0x164))();
      piStack_2e0 = *(int **)(in_ECX + 100);
      piStack_2d0 = (int *)0x14;
      puStack_2d4 = auStack_204;
      uStack_2d8 = 2;
      uStack_2dc = 6;
      puStack_2e4 = (undefined1 *)0x7e1732;
      (**(code **)(*piStack_2e0 + 0x14c))();
      puStack_2e4 = (undefined1 *)DAT_00f092fc;
      uStack_2e8 = 0;
      piStack_2ec = (int *)(float)*(int *)(in_ECX + 0x6b9c0);
      uStack_2f0 = 0;
      fStack_2f4 = (float)*(int *)(in_ECX + 0x6b9bc);
      puStack_2fc = auStack_188;
      piStack_2f8 = (int *)0x0;
      uStack_300 = 0x7e1787;
      D3DXMatrixOrthoOffCenterLH();
      piStack_2ec = *(int **)(in_ECX + 100);
      puStack_2e4 = auStack_188;
      uStack_2e8 = 3;
      uStack_2f0 = 0x7e179f;
      (**(code **)(*piStack_2ec + 0xb0))();
      iVar3 = *(int *)(in_ECX + 0x6b9bc) / 2;
      piStack_2f8 = *(int **)(in_ECX + 100);
      fStack_274 = (float)iVar3 - 300.0;
      fStack_260 = (float)iVar3 + 300.0;
      uStack_25c = DAT_00f17b58;
      uStack_248 = 0x42d80000;
      uStack_234 = 0x42d80000;
      uStack_258 = DAT_00f17898;
      uStack_244 = DAT_00f17898;
      uStack_230 = DAT_00f17898;
      uStack_2f0 = 1;
      local_254 = DAT_00f092fc;
      uStack_240 = DAT_00f092fc;
      uStack_22c = 0;
      local_264 = DAT_00f092fc;
      local_250 = DAT_00f092fc;
      uStack_23c = 0;
      uStack_228 = 0;
      fStack_2f4 = 3.78351e-44;
      puStack_2fc = (undefined1 *)0x7e18b2;
      fStack_24c = fStack_260;
      fStack_238 = fStack_274;
      (**(code **)(*piStack_2f8 + 0xe4))();
      piStack_308 = *(int **)(in_ECX + 100);
      puStack_2fc = (undefined1 *)0x4;
      uStack_300 = 1;
      uStack_304 = 0;
      uStack_30c = 0x7e18c5;
      (**(code **)(*piStack_308 + 0x10c))();
      piStack_318 = *(int **)(in_ECX + 100);
      uStack_30c = 4;
      uStack_310 = 4;
      uStack_314 = 0;
      uStack_31c = 0x7e18d8;
      (**(code **)(*piStack_318 + 0x10c))();
      piStack_324 = *(int **)(in_ECX + 100);
      uStack_31c = 5;
      uStack_320 = 0x13;
      uStack_328 = 0x7e18ea;
      (**(code **)(*piStack_324 + 0xe4))();
      piStack_330 = *(int **)(in_ECX + 100);
      uStack_328 = 6;
      uStack_32c = 0x14;
      uStack_334 = 0x7e18fc;
      (**(code **)(*piStack_330 + 0xe4))();
      uStack_334 = *(undefined4 *)(in_ECX + 0x6bda0);
      piStack_33c = *(int **)(in_ECX + 100);
      uStack_338 = 0;
      uStack_340 = 0x7e1912;
      (**(code **)(*piStack_33c + 0x104))();
      piStack_34c = *(int **)(in_ECX + 100);
      uStack_340 = 2;
      uStack_344 = 5;
      uStack_348 = 0;
      uStack_350 = 0x7e1925;
      (**(code **)(*piStack_34c + 0x114))();
      piStack_354 = *(int **)(in_ECX + 100);
      uStack_350 = 0x102;
      uStack_358 = 0x7e1938;
      (**(code **)(*piStack_354 + 0x164))();
      uStack_358 = 0x14;
      puStack_35c = &uStack_2dc;
      uStack_360 = 2;
      (**(code **)(**(int **)(in_ECX + 100) + 0x14c))(*(int **)(in_ECX + 100),6);
      (**(code **)(**(int **)(in_ECX + 100) + 0x10c))(*(int **)(in_ECX + 100),0,3,1);
      (**(code **)(**(int **)(in_ECX + 100) + 0x10c))(*(int **)(in_ECX + 100),0,4,4);
      uStack_360 = 1;
      puStack_35c = (undefined4 *)0x1;
      (**(code **)(**(int **)(in_ECX + 0x6bd7c) + 0x20))
                (param_1,2,4,(ulonglong)(*(int *)(in_ECX + 0x6b9c0) - 0x6c) << 0x20,
                 CONCAT44(100,*(undefined4 *)(in_ECX + 0x6b9bc)),0,0,&uStack_360);
      (**(code **)(**(int **)(in_ECX + 100) + 0xa8))(*(int **)(in_ECX + 100));
      *(int *)(in_ECX + 0x6bc8c) = *(int *)(in_ECX + 0x6bc8c) + 1;
      if (*(char *)(in_ECX + 0x6bca0) != '\0') {
        pppuStack_284 = *(undefined ****)(in_ECX + 100);
        fStack_274 = 0.0;
        pcStack_278 = (char *)0x0;
        puStack_27c = (uint *)0x0;
        uStack_280 = 0;
        pcStack_288 = (char *)0x7e1a18;
        iVar3 = (**(code **)((int)*pppuStack_284 + 0x44))();
        if ((iVar3 != 0) && (iVar3 == -0x7789f798)) {
          *(undefined1 *)(in_ECX + 0x6bca0) = 0;
          ExceptionList = local_14;
          return;
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

