// FUN_00933560 @ 00933560 body=[[00933560, 00933acd] [00933ae8, 00933b39]]


void FUN_00933560(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 *puVar2;
  int iStack_334;
  undefined *puStack_330;
  undefined ***pppuStack_32c;
  undefined4 uStack_328;
  char *pcStack_324;
  undefined1 **ppuStack_320;
  char *pcStack_31c;
  undefined1 *local_30c;
  int local_308;
  undefined1 local_304 [4];
  uint uStack_300;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [28];
  undefined1 local_2b4 [28];
  int local_298;
  undefined **appuStack_1f0 [115];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb7242;
  local_14 = ExceptionList;
  if (param_2 < 0x719) {
    if (param_2 == 0x718) {
      *(bool *)(in_ECX + 8) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
    if (param_2 < 0x350) {
      if (param_2 == 0x34f) {
        ppuStack_320 = &local_30c;
        pcStack_324 = (char *)DAT_012587e4;
        uStack_328 = 0x93366c;
        ExceptionList = &local_14;
        pcStack_31c = (char *)(param_1 + 0x22c);
        FUN_0055c6c0();
        if (local_308 == 0) {
          pcStack_31c = "h\x04";
          FUN_009885d0();
          pcStack_31c = (char *)0x10004;
          ppuStack_320 = (undefined1 **)0xea;
          local_c = 0;
          uStack_328 = 0x9336cd;
          pcStack_324 = local_2d0;
          FUN_004015b0();
          pcStack_31c = " in war - ";
          local_c._0_1_ = 1;
          uStack_328 = 0x9336eb;
          pcStack_324 = (char *)(param_1 + 0x22c);
          uStack_328 = FUN_00987d20();
          pppuStack_32c = (undefined ***)0x9336f1;
          ppuStack_320 = (undefined1 **)FUN_00418e30();
          pcStack_324 = (char *)0x9336fa;
          pcStack_324 = (char *)FUN_00418e30();
          uStack_328 = 0x933703;
          pcStack_31c = (char *)FUN_00989050();
          ppuStack_320 = (undefined1 **)0x93370c;
          FUN_00401280();
          local_c = (uint)local_c._1_3_ << 8;
          pcStack_31c = (char *)0x933723;
          FUN_00401650();
          pcStack_31c = (char *)0x93372c;
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
        pcStack_31c = (char *)local_308;
        ppuStack_320 = (undefined1 **)local_30c;
        pcStack_324 = (char *)0x0;
        uStack_328 = 0;
        puStack_330 = (undefined *)0x933684;
        FUN_00934280();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x1a) {
        pcStack_31c = (char *)(in_ECX + 0x10);
        ppuStack_320 = (undefined1 **)0x93363a;
        ExceptionList = &local_14;
        FUN_004012f0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x6a) {
        pcStack_31c = (char *)(param_1 + 0x22c);
        ppuStack_320 = (undefined1 **)local_2d8;
        pcStack_324 = (char *)DAT_012587e4;
        uStack_328 = 0x933600;
        ExceptionList = &local_14;
        puVar2 = (undefined4 *)FUN_0055c6c0();
        *(undefined4 *)(in_ECX + 0x84) = *puVar2;
        *(undefined4 *)(in_ECX + 0x88) = puVar2[1];
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x28a) {
        pcStack_31c = (char *)param_1;
        ppuStack_320 = (undefined1 **)0x9335cf;
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0x4c) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      }
    }
    else {
      if (param_2 == 0x350) {
        ppuStack_320 = &local_30c;
        pcStack_324 = (char *)DAT_012587e4;
        uStack_328 = 0x9337a4;
        ExceptionList = &local_14;
        pcStack_31c = (char *)(param_1 + 0x22c);
        FUN_0055c6c0();
        if (local_308 == 0) {
          pcStack_31c = "h\x04";
          FUN_009885d0();
          pcStack_31c = (char *)0x10004;
          ppuStack_320 = (undefined1 **)0x100;
          local_c = 2;
          uStack_328 = 0x933805;
          pcStack_324 = local_2b4;
          FUN_004015b0();
          pcStack_31c = " in war - ";
          local_c._0_1_ = 3;
          uStack_328 = 0x933823;
          pcStack_324 = (char *)(param_1 + 0x22c);
          uStack_328 = FUN_00987d20();
          pppuStack_32c = (undefined ***)0x933829;
          ppuStack_320 = (undefined1 **)FUN_00418e30();
          pcStack_324 = (char *)0x933832;
          pcStack_324 = (char *)FUN_00418e30();
          uStack_328 = 0x93383b;
          pcStack_31c = (char *)FUN_00989050();
          ppuStack_320 = (undefined1 **)0x933844;
          FUN_00401280();
          local_c = CONCAT31(local_c._1_3_,2);
          pcStack_31c = (char *)0x93385b;
          FUN_00401650();
          pcStack_31c = (char *)0x933864;
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
        pcStack_31c = (char *)local_308;
        ppuStack_320 = (undefined1 **)local_30c;
        pcStack_324 = (char *)0x0;
        uStack_328 = 0;
        puStack_330 = (undefined *)0x9337bc;
        FUN_00935390();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x385) {
        local_30c = (undefined1 *)&iStack_334;
        ExceptionList = &local_14;
        FUN_009885d0();
        FUN_0043bb10();
        ExceptionList = local_14;
        return;
      }
    }
  }
  else if (param_2 < 0x9b1) {
    if (param_2 == 0x9b0) {
      pcStack_31c = (char *)(in_ECX + 0xfc);
      ppuStack_320 = (undefined1 **)0x9339be;
      ExceptionList = &local_14;
      FUN_009a1bb0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x8ab) {
      pcStack_31c = (char *)(param_1 + 0x22c);
      ppuStack_320 = (undefined1 **)local_2e0;
      pcStack_324 = (char *)DAT_012587e4;
      uStack_328 = 0x933987;
      ExceptionList = &local_14;
      puVar2 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 0x8c) = *puVar2;
      *(undefined4 *)(in_ECX + 0x90) = puVar2[1];
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x8ac) {
      pcStack_31c = (char *)(param_1 + 0x22c);
      ppuStack_320 = (undefined1 **)local_2e8;
      pcStack_324 = (char *)DAT_012587e4;
      uStack_328 = 0x933945;
      ExceptionList = &local_14;
      puVar2 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 0x94) = *puVar2;
      *(undefined4 *)(in_ECX + 0x98) = puVar2[1];
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x8d9) {
      pcStack_31c = (char *)0x9338d9;
      ExceptionList = &local_14;
      FUN_0094bd40();
      pcStack_31c = (char *)param_1;
      ppuStack_320 = (undefined1 **)0x9338eb;
      (**(code **)(local_298 + 0xc))();
      ppuStack_320 = (undefined1 **)0x933905;
      FUN_0093cfb0();
      ppuStack_320 = (undefined1 **)0x933913;
      FUN_0042c2f0();
      ExceptionList = pvStack_18;
      return;
    }
  }
  else {
    if (param_2 == 0x9e2) {
      pcStack_31c = (char *)param_1;
      ppuStack_320 = (undefined1 **)0x933b23;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x9c) + 0xc))();
      ExceptionList = pvStack_24;
      return;
    }
    if (param_2 == 0x9e4) {
      pcStack_31c = (char *)(in_ECX + 0xfd);
      ppuStack_320 = (undefined1 **)0x933af7;
      ExceptionList = &local_14;
      FUN_009a1bb0();
      ExceptionList = local_14;
      return;
    }
  }
  pcStack_31c = (char *)0x7;
  ppuStack_320 = (undefined1 **)0xe34c84;
  local_2f0 = 0xf;
  local_2f4 = 0;
  local_304[0] = 0;
  pcStack_324 = "h\x04";
  ExceptionList = &local_14;
  FUN_00409350();
  pcStack_31c = (char *)0x10004;
  pcStack_324 = local_304;
  ppuStack_320 = (undefined1 **)0x104;
  local_c = 4;
  uStack_328 = 0x933a35;
  uVar1 = FUN_004015b0();
  pcStack_31c = (char *)0x0;
  ppuStack_320 = (undefined1 **)0x12;
  pcStack_324 = "Unknown statement ";
  local_c = CONCAT31(local_c._1_3_,5);
  pppuStack_32c = (undefined ***)0x933a51;
  uStack_328 = uVar1;
  FUN_00987d50();
  pppuStack_32c = (undefined ***)0xe34cec;
  iStack_334 = param_1 + 0x24;
  puVar2 = (undefined4 *)(in_ECX + 0x10);
  puStack_330 = (undefined *)FUN_00418e30(uVar1);
  iStack_334 = 0x933a70;
  puStack_330 = (undefined *)FUN_00418e30();
  if (0xf < *(uint *)(in_ECX + 0x24)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  iStack_334 = 0x933a86;
  pppuStack_32c = (undefined ***)puVar2;
  iStack_334 = FUN_00418e30();
  FUN_00401280();
  pppuStack_32c = appuStack_1f0;
  uStack_1c = 4;
  puStack_330 = (undefined *)0x933aa3;
  FUN_00987ac0();
  pppuStack_32c = appuStack_1f0;
  appuStack_1f0[0] = std::ios_base::vftable;
  puStack_330 = (undefined *)0x933abb;
  FUN_00aad52d();
  if (uStack_300 < 0x10) {
    ExceptionList = pvStack_24;
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_330 = &UNK_00933ace;
  FUN_00aae91b();
}

