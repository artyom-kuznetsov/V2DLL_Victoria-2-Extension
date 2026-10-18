// FUN_00942aa0 @ 00942aa0 body=[[00942aa0, 00942ba5] [00942ba9, 00942bcc] [00942bd0, 00942c91] [00942c95, 00942cbc] [00942cc0, 00942d80] [00942d84, 00942dab] [00942daf, 00942e54] [00942e58, 009447bf]]


undefined4 FUN_00942aa0(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint in_ECX;
  undefined4 unaff_ESI;
  int iVar9;
  int unaff_EDI;
  undefined8 uStack_398;
  int *piStack_390;
  undefined4 uStack_38c;
  char *pcStack_388;
  undefined4 uStack_384;
  char *pcStack_380;
  uint *puStack_37c;
  uint *puStack_378;
  uint *puStack_374;
  uint uVar10;
  undefined4 uStack_364;
  undefined4 local_360;
  uint auStack_35c [2];
  uint uStack_354;
  uint local_350;
  uint uStack_34c;
  uint uStack_348;
  uint local_344;
  uint uStack_340;
  int *piStack_33c;
  uint uStack_338;
  undefined4 local_334;
  undefined4 local_330;
  uint uStack_32c;
  undefined1 auStack_328 [4];
  uint uStack_324;
  char acStack_320 [4];
  uint uStack_31c;
  uint uStack_318;
  uint local_314;
  uint uStack_310;
  undefined4 uStack_30c;
  uint uStack_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined1 auStack_2fc [60];
  undefined1 local_2c0;
  int iStack_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined1 local_2a4;
  undefined4 local_294;
  undefined4 local_290;
  undefined1 local_288;
  undefined1 auStack_27c [4];
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_26c;
  undefined1 local_268;
  undefined1 auStack_260 [56];
  undefined1 auStack_228 [168];
  undefined1 auStack_180 [56];
  undefined1 auStack_148 [268];
  undefined1 uStack_3c;
  void *pvStack_34;
  void *pvStack_2c;
  void *pvStack_24;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bafc45;
  pvStack_14 = ExceptionList;
  local_360 = 0;
  local_2ac = 0xf;
  local_2b0 = 0;
  local_2c0 = 0;
  local_290 = 0xf;
  local_294 = 0;
  local_2a4 = 0;
  local_274 = 0xf;
  local_278 = 0;
  local_288 = 0;
  local_26c = 0;
  local_268 = 1;
  local_c = 0;
  puStack_374 = (uint *)0xc;
  puStack_378 = (uint *)0xe352e0;
  local_330 = 0xf;
  local_334 = 0;
  local_344 = local_344 & 0xffffff00;
  puStack_37c = (uint *)0x942b48;
  ExceptionList = &pvStack_14;
  local_350 = in_ECX;
  FUN_00409350();
  local_c._0_1_ = 1;
  puStack_374 = (uint *)0xd;
  puStack_378 = (uint *)0xe352d0;
  local_300 = 0xf;
  local_304 = 0;
  local_314 = local_314 & 0xffffff00;
  puStack_37c = (uint *)0x942b6c;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,2);
  puStack_374 = &local_314;
  puStack_378 = (uint *)0x942b83;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))();
  puStack_378 = &uStack_348;
  puStack_37c = (uint *)0x942b91;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x7c))();
  if (0xf < uStack_308) {
    puStack_37c = (uint *)uStack_31c;
                    /* WARNING: Subroutine does not return */
    pcStack_380 = &UNK_00942ba6;
    FUN_00aae91b();
  }
  pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
  uStack_308 = 0xf;
  uStack_30c = 0;
  uStack_31c = uStack_31c & 0xffffff00;
  if (0xf < uStack_338) {
    puStack_37c = (uint *)uStack_34c;
                    /* WARNING: Subroutine does not return */
    pcStack_380 = &UNK_00942bcd;
    FUN_00aae91b();
  }
  uStack_338 = 0xf;
  piStack_33c = (int *)0x0;
  uStack_34c = uStack_34c & 0xffffff00;
  puStack_37c = (uint *)0x942beb;
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
  piVar3 = (int *)*puVar4;
  while (piVar3 != (int *)0x0) {
    iVar5 = *piVar3;
    piVar3 = (int *)piVar3[2];
    puStack_37c = (uint *)param_2;
    pcStack_380 = (char *)0x942c09;
    cVar1 = (**(code **)(*(int *)(iVar5 + 0x1c) + 0x58))();
    if (cVar1 != '\0') {
      puStack_37c = (uint *)param_1;
      pcStack_380 = (char *)0x943120;
      FUN_0093f040();
      puStack_37c = (uint *)0x94312c;
      FUN_00459820();
      ExceptionList = pvStack_1c;
      return param_1;
    }
  }
  puStack_37c = (uint *)0xa;
  pcStack_380 = "state_list";
  uStack_308 = 0xf;
  uStack_30c = 0;
  uStack_31c = uStack_31c & 0xffffff00;
  uStack_384 = (uint *)0x942c36;
  FUN_00409350();
  pvStack_14._0_1_ = 3;
  puStack_37c = (uint *)0x14;
  pcStack_380 = "wargoal_state_select";
  uStack_338 = 0xf;
  piStack_33c = (int *)0x0;
  uStack_34c = uStack_34c & 0xffffff00;
  uStack_384 = (uint *)0x942c5a;
  FUN_00409350();
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,4);
  puStack_37c = &uStack_34c;
  pcStack_380 = (char *)0x942c71;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))();
  pcStack_380 = acStack_320;
  uStack_384 = (uint *)0x942c7f;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x7c))();
  if (0xf < uStack_340) {
    uStack_384 = (uint *)uStack_354;
                    /* WARNING: Subroutine does not return */
    pcStack_388 = &UNK_00942c92;
    FUN_00aae91b();
  }
  pvStack_1c = (void *)((uint)pvStack_1c & 0xffffff00);
  uStack_340 = 0xf;
  local_344 = 0;
  uStack_354 = uStack_354 & 0xffffff00;
  if (0xf < uStack_310) {
    uStack_384 = (uint *)uStack_324;
                    /* WARNING: Subroutine does not return */
    pcStack_388 = &UNK_00942cbd;
    FUN_00aae91b();
  }
  uStack_310 = 0xf;
  local_314 = 0;
  uStack_324 = uStack_324 & 0xffffff00;
  uStack_384 = (uint *)0x942cd9;
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
  piVar3 = (int *)*puVar4;
  while (piVar3 != (int *)0x0) {
    unaff_EDI = *piVar3;
    piVar3 = (int *)piVar3[2];
    uStack_384 = (uint *)param_2;
    pcStack_388 = (char *)0x942cf8;
    cVar1 = (**(code **)(*(int *)(unaff_EDI + 0x1c) + 0x58))();
    if (cVar1 != '\0') {
      uStack_384 = (uint *)param_1;
      uStack_38c = (uint *)0x943153;
      pcStack_388 = (char *)unaff_EDI;
      FUN_0093f5e0();
      uStack_384 = (uint *)0x94315f;
      FUN_00459820();
      ExceptionList = pvStack_24;
      return param_1;
    }
  }
  uStack_384 = (uint *)0xc;
  pcStack_388 = "country_list";
  uStack_310 = 0xf;
  local_314 = 0;
  uStack_324 = uStack_324 & 0xffffff00;
  uStack_38c = (uint *)0x942d25;
  FUN_00409350();
  pvStack_1c._0_1_ = 5;
  uStack_384 = (uint *)0x16;
  pcStack_388 = "wargoal_country_select";
  uStack_340 = 0xf;
  local_344 = 0;
  uStack_354 = uStack_354 & 0xffffff00;
  uStack_38c = (uint *)0x942d49;
  FUN_00409350();
  pvStack_1c = (void *)CONCAT31(pvStack_1c._1_3_,6);
  uStack_384 = &uStack_354;
  pcStack_388 = (char *)0x942d60;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))();
  pcStack_388 = auStack_328;
  uStack_38c = (uint *)0x942d6e;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x7c))();
  if (0xf < uStack_348) {
    uStack_38c = (uint *)auStack_35c[0];
                    /* WARNING: Subroutine does not return */
    piStack_390 = (int *)&UNK_00942d81;
    FUN_00aae91b();
  }
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  uStack_348 = 0xf;
  uStack_34c = 0;
  auStack_35c[0] = auStack_35c[0] & 0xffffff00;
  if (0xf < uStack_318) {
    uStack_38c = (uint *)uStack_32c;
                    /* WARNING: Subroutine does not return */
    piStack_390 = (int *)&UNK_00942dac;
    FUN_00aae91b();
  }
  uStack_318 = 0xf;
  uStack_31c = 0;
  uStack_32c = uStack_32c & 0xffffff00;
  uStack_38c = (uint *)0x942dc8;
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
  piVar3 = (int *)*puVar4;
  while (piVar3 != (int *)0x0) {
    iVar5 = *piVar3;
    piVar3 = (int *)piVar3[2];
    uStack_38c = (uint *)param_2;
    piStack_390 = (int *)0x942de4;
    cVar1 = (**(code **)(*(int *)(iVar5 + 0x1c) + 0x58))();
    if (cVar1 != '\0') {
      uStack_38c = (uint *)0x943182;
      FUN_0093fa60();
      uStack_38c = (uint *)0x94318e;
      FUN_00459820();
      ExceptionList = pvStack_2c;
      return param_1;
    }
  }
  uStack_38c = (uint *)0x12;
  piStack_390 = (int *)0xe352f0;
  uStack_348 = 0xf;
  uStack_34c = 0;
  auStack_35c[0] = auStack_35c[0] & 0xffffff00;
  uStack_398 = CONCAT44(0x942e10,(uint)uStack_398);
  FUN_00409350();
  pvStack_24 = (void *)CONCAT31(pvStack_24._1_3_,7);
  uStack_38c = auStack_35c;
  piStack_390 = (int *)0x942e27;
  iVar5 = (**(code **)(**(int **)(in_ECX + 4) + 0x6c))();
  piStack_390 = param_2;
  uStack_398 = CONCAT44(0x942e39,(uint)uStack_398);
  cVar1 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x94))();
  pvStack_2c = (void *)((uint)pvStack_2c & 0xffffff00);
  uStack_384 = (uint *)CONCAT13(cVar1,(undefined3)uStack_384);
  if (0xf < local_350) {
    uStack_398 = CONCAT44(uStack_364,&UNK_00942e55);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (cVar1 == '\0') {
    uStack_398 = CONCAT44(0x9437e9,(uint)uStack_398);
    FUN_009885d0();
    pvStack_2c = (void *)CONCAT31(pvStack_2c._1_3_,0x22);
    uStack_398._0_4_ = 0x9437fe;
    uStack_398._4_4_ = &uStack_364;
    iVar5 = (**(code **)(**(int **)(in_ECX + 4) + 0x6c))();
    uStack_398 = CONCAT44(uStack_398._4_4_,param_2);
    uVar2 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x94))();
    uStack_38c = (uint *)CONCAT13(uVar2,(undefined3)uStack_38c);
    pvStack_34 = (void *)((uint)pvStack_34 & 0xffffff00);
    FUN_00408ad0();
    if (uStack_38c._3_1_ == '\0') {
      FUN_009885d0();
      pvStack_34 = (void *)CONCAT31(pvStack_34._1_3_,0x29);
      iVar5 = (**(code **)(**(int **)(in_ECX + 4) + 0x6c))();
      uVar2 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x94))(param_2);
      uStack_398 = CONCAT17(uVar2,(undefined7)uStack_398);
      uStack_3c = 0;
      FUN_00408ad0();
      if (uStack_398._7_1_ == '\0') {
        (**(code **)(*param_2 + 0x44))();
        uStack_398 = CONCAT44(0x943db2,(uint)uStack_398);
        cVar1 = FUN_0040b360();
        if (cVar1 == '\0') {
          uStack_398 = CONCAT44(0x94440d,(uint)uStack_398);
          (**(code **)(*param_2 + 0x44))();
          uStack_398 = CONCAT44(0x944417,(uint)uStack_398);
          cVar1 = FUN_0040b360();
          if (cVar1 == '\0') {
            uStack_398 = CONCAT44(0x944428,(uint)uStack_398);
            (**(code **)(*param_2 + 0x44))();
            uStack_398 = CONCAT44(0x944432,(uint)uStack_398);
            cVar1 = FUN_0040b360();
            if (cVar1 == '\0') {
              uStack_398 = CONCAT44(0x944443,(uint)uStack_398);
              (**(code **)(*param_2 + 0x44))();
              uStack_398 = CONCAT44(0x94444d,(uint)uStack_398);
              cVar1 = FUN_0040b360();
              if (cVar1 != '\0') {
                uStack_398 = CONCAT44(0x944463,(uint)uStack_398);
                FUN_009885d0();
                pvStack_2c._0_1_ = 0x54;
                iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
                if (iVar5 != 0) {
                  uStack_398 = CONCAT44(0x944489,(uint)uStack_398);
                  iVar9 = FUN_00425a40();
                  puStack_378 = *(uint **)(*(int *)(in_ECX + 0x6c) + 0x10);
                  pcStack_380 = (char *)CONCAT31(pcStack_380._1_3_,
                                                 *(int *)(iVar9 + 4) ==
                                                 *(int *)(DAT_012588e8 + 0xb60));
                  uStack_398 = CONCAT44(pcStack_380,*(int *)(in_ECX + 0x6c) + 0x28);
                  piStack_33c = (int *)0x0;
                  FUN_00539630(iVar5,&piStack_33c,&stack0xfffffc94,&uStack_364,1);
                  uStack_398 = 0xffffffff00000000;
                  FUN_00408ed0();
                }
                pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
                uStack_398 = CONCAT44(0x944503,(uint)uStack_398);
                FUN_00408ad0();
              }
              goto LAB_00944790;
            }
          }
          uStack_348 = *(uint *)(unaff_EDI + 0x9c);
          pcStack_380 = *(char **)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xa0) * 4);
          piVar3 = *(int **)(pcStack_380 + 0xd58);
          uStack_398 = CONCAT44(auStack_148,0x94453f);
          FUN_00931620();
          pvStack_2c = (void *)CONCAT31(pvStack_2c._1_3_,0x4c);
          puStack_378 = *(uint **)(*(int *)(unaff_EDI + 0x6c) + 8);
          puStack_374 = *(uint **)(*(int *)(unaff_EDI + 0x6c) + 0xc);
          uStack_398 = CONCAT44(0x94457c,(uint)uStack_398);
          FUN_004d61d0();
          uStack_398 = CONCAT44(0x94458c,(uint)uStack_398);
          FUN_004d61d0();
          while ((*(int **)(pcStack_380 + 0xd58) <= piVar3 &&
                 (piVar3 < *(int **)(pcStack_380 + 0xd5c)))) {
            puStack_378 = (uint *)*piVar3;
            puVar6 = (uint *)piVar3[1];
            piStack_33c = piVar3 + 2;
            puStack_374 = puVar6;
            if (iStack_2b4 != 0) {
              uStack_398 = CONCAT44(0x9445dc,(uint)uStack_398);
              FUN_00989030();
            }
            uStack_398 = CONCAT44(0x9445ea,(uint)uStack_398);
            FUN_009885d0();
            pvStack_2c._0_1_ = 0x4d;
            uStack_398 = CONCAT44(0x944602,(uint)uStack_398);
            uVar7 = FUN_0055dd40();
            pvStack_2c._0_1_ = 0x4e;
            uStack_398 = CONCAT44(uVar7,0x94461c);
            FUN_00988fa0();
            pvStack_2c._0_1_ = 0x4f;
            uStack_398 = CONCAT44(&uStack_318,0x94463a);
            FUN_00988f20();
            uStack_398 = 0xffffffff00000000;
            pvStack_2c._0_1_ = 0x50;
            FUN_00448aa0();
            uStack_398 = CONCAT44(0x944659,(uint)uStack_398);
            FUN_00408ad0();
            uStack_398 = CONCAT44(0x944665,(uint)uStack_398);
            FUN_00408ad0();
            uStack_398 = CONCAT44(0x944671,(uint)uStack_398);
            FUN_00408ad0();
            pvStack_2c._0_1_ = 0x4c;
            uStack_398 = CONCAT44(0x944682,(uint)uStack_398);
            FUN_00408ad0();
            if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)puVar6 * 4) + 0xcf4) == '\0') {
              uStack_398 = (ulonglong)(DAT_012588e8 + 0xb5c) << 0x20;
              FUN_00939930(auStack_148,auStack_228,&puStack_378,1);
              uStack_398 = 0xffffffff00000000;
              pvStack_2c._0_1_ = 0x53;
              FUN_00448aa0();
              pvStack_2c = (void *)CONCAT31(pvStack_2c._1_3_,0x4c);
              uStack_398 = CONCAT44(0x944773,(uint)uStack_398);
              FUN_00408ad0();
              piVar3 = piStack_33c;
            }
            else {
              uStack_398 = CONCAT44(0x9446be,(uint)uStack_398);
              uVar7 = FUN_0055dd40();
              uStack_398 = CONCAT44(uVar7,auStack_260);
              pvStack_2c._0_1_ = 0x51;
              FUN_0042c180();
              uStack_398 = 0xffffffff00000000;
              pvStack_2c._0_1_ = 0x52;
              FUN_00448aa0();
              uStack_398 = CONCAT44(0x944705,(uint)uStack_398);
              FUN_00408ad0();
              pvStack_2c = (void *)CONCAT31(pvStack_2c._1_3_,0x4c);
              uStack_398 = CONCAT44(0x944714,(uint)uStack_398);
              FUN_00408ad0();
              piVar3 = piStack_33c;
            }
          }
          pvStack_2c = (void *)((uint)pvStack_2c & 0xffffff00);
          uStack_398 = CONCAT44(auStack_148,0x944790);
          FUN_00931ac0();
        }
        else {
          uStack_348 = *(uint *)(unaff_EDI + 0xa4);
          iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xa8) * 4);
          if (((*(int *)(iVar5 + 0xd5c) - *(int *)(iVar5 + 0xd58) & 0xfffffff8U) != 0) ||
             (iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xa8) * 4),
             uStack_348 = *(uint *)(iVar5 + 0x1428), *(int *)(iVar5 + 0x142c) != 0)) {
            uStack_398 = CONCAT44(0x943e29,(uint)uStack_398);
            uVar7 = FUN_0055dd40();
            uStack_398 = CONCAT44(uVar7,auStack_180);
            pvStack_2c._0_1_ = 0x30;
            FUN_0042c180();
            uStack_398 = 0xffffffff00000000;
            pvStack_2c._0_1_ = 0x31;
            FUN_00408ed0();
            uStack_398 = CONCAT44(0x943e70,(uint)uStack_398);
            FUN_00408ad0();
            pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
            uStack_398 = CONCAT44(0x943e7e,(uint)uStack_398);
            FUN_00408ad0();
            if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xa8) * 4) +
                        0x142c) != 0) {
              iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xa8) * 4);
              puStack_378 = *(uint **)(iVar5 + 0x1428);
              puStack_374 = *(uint **)(iVar5 + 0x142c);
              uStack_348 = *(uint *)(unaff_EDI + 0xa4);
              uStack_398 = CONCAT44(0x943efa,(uint)uStack_398);
              cVar1 = FUN_0042bb00();
              if (cVar1 == '\0') {
                uStack_398 = CONCAT44(0x943f10,(uint)uStack_398);
                FUN_009885d0();
                pvStack_2c._0_1_ = 0x32;
                uStack_398 = CONCAT44(0x943f29,(uint)uStack_398);
                FUN_009885d0();
                pvStack_2c._0_1_ = 0x33;
                uStack_398 = CONCAT44(0x943f42,(uint)uStack_398);
                FUN_009885d0();
                pvStack_2c._0_1_ = 0x34;
                uStack_348 = *(uint *)(unaff_EDI + 0xa4);
                iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xa8) * 4);
                puStack_378 = *(uint **)(iVar5 + 0x1428);
                puStack_374 = *(uint **)(iVar5 + 0x142c);
                uStack_398 = CONCAT44(0x943f87,(uint)uStack_398);
                FUN_009885d0();
                uStack_398 = CONCAT44(auStack_2fc,&local_334);
                pvStack_2c._0_1_ = 0x35;
                pcStack_380 = (char *)FUN_009a8ee0();
                pvStack_2c._0_1_ = 0x36;
                uStack_398 = CONCAT44(0x943fb2,(uint)uStack_398);
                iVar5 = FUN_00475500();
                uStack_398 = *(undefined8 *)(iVar5 + 0x74);
                uVar7 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
                pvStack_2c._0_1_ = 0x37;
                uStack_348 = *(uint *)(unaff_EDI + 0xa4);
                iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xa8) * 4);
                pcStack_380 = *(char **)(iVar5 + 0x1428);
                puStack_37c = *(uint **)(iVar5 + 0x142c);
                uStack_398 = CONCAT44(0x944026,(uint)uStack_398);
                pcStack_380 = (char *)FUN_0055dd40();
                pvStack_2c._0_1_ = 0x38;
                uStack_398 = CONCAT44(0x944043,(uint)uStack_398);
                FUN_009885d0();
                pvStack_2c._0_1_ = 0x39;
                uStack_398 = CONCAT44(&uStack_364,0x94405e);
                FUN_00988f20();
                pvStack_2c._0_1_ = 0x3a;
                uStack_398 = CONCAT44(pcStack_380,0x944079);
                FUN_00988f20();
                pvStack_2c._0_1_ = 0x3b;
                uStack_398 = CONCAT44(auStack_27c,0x944097);
                FUN_00988f20();
                pvStack_2c._0_1_ = 0x3c;
                uStack_398 = CONCAT44(uVar7,0x9440b2);
                FUN_00988f20();
                pvStack_2c._0_1_ = 0x3d;
                uStack_398 = CONCAT44(&uStack_318,0x9440cd);
                FUN_00988f20();
                uStack_398 = 0xffffffff00000000;
                pvStack_2c._0_1_ = 0x3e;
                FUN_00448aa0();
                uStack_398 = CONCAT44(0x9440ec,(uint)uStack_398);
                FUN_00408ad0();
                uStack_398 = CONCAT44(0x9440f8,(uint)uStack_398);
                FUN_00408ad0();
                uStack_398 = CONCAT44(0x944104,(uint)uStack_398);
                FUN_00408ad0();
                uStack_398 = CONCAT44(0x944110,(uint)uStack_398);
                FUN_00408ad0();
                uStack_398 = CONCAT44(0x94411c,(uint)uStack_398);
                FUN_00408ad0();
                uStack_398 = CONCAT44(0x944128,(uint)uStack_398);
                FUN_00408ad0();
                uStack_398 = CONCAT44(0x944134,(uint)uStack_398);
                FUN_00408ad0();
                uStack_398 = CONCAT44(0x944140,(uint)uStack_398);
                FUN_00408ad0();
                pvStack_2c._0_1_ = 0x35;
                uStack_398 = CONCAT44(&local_334,0x944152);
                FUN_009a9740();
                uStack_398 = CONCAT44(0x94415b,(uint)uStack_398);
                FUN_00408ad0();
                uStack_398 = CONCAT44(0x944167,(uint)uStack_398);
                FUN_00408ad0();
                uStack_398 = CONCAT44(0x944173,(uint)uStack_398);
                FUN_00408ad0();
                pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
                uStack_398 = CONCAT44(0x944183,(uint)uStack_398);
                FUN_00408ad0();
              }
            }
            uStack_348 = *(uint *)(unaff_EDI + 0xa4);
            piStack_33c = *(int **)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xa8) * 4);
            for (piVar3 = (int *)piStack_33c[0x356];
                ((int *)piStack_33c[0x356] <= piVar3 && (piVar3 < (int *)piStack_33c[0x357]));
                piVar3 = piVar3 + 2) {
              puStack_374 = (uint *)piVar3[1];
              puStack_378 = (uint *)*piVar3;
              uStack_398 = CONCAT44(0x9441e8,(uint)uStack_398);
              FUN_009885d0();
              pvStack_2c._0_1_ = 0x3f;
              uStack_398 = CONCAT44(0x944201,(uint)uStack_398);
              FUN_009885d0();
              pvStack_2c._0_1_ = 0x40;
              uStack_398 = CONCAT44(0x94421a,(uint)uStack_398);
              FUN_009885d0();
              pvStack_2c._0_1_ = 0x41;
              uStack_398 = CONCAT44(0x94422f,(uint)uStack_398);
              FUN_009885d0();
              uStack_398 = CONCAT44(auStack_27c,&local_334);
              pvStack_2c._0_1_ = 0x42;
              pcStack_380 = (char *)FUN_009a8ee0();
              pvStack_2c._0_1_ = 0x43;
              uStack_398 = CONCAT44(0x94425a,(uint)uStack_398);
              iVar5 = FUN_00475500();
              uStack_398 = *(undefined8 *)(iVar5 + 0x74);
              uVar7 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
              pvStack_2c._0_1_ = 0x44;
              uStack_398 = CONCAT44(0x94429e,(uint)uStack_398);
              pcStack_380 = (char *)FUN_0055dd40();
              pvStack_2c._0_1_ = 0x45;
              uStack_398 = CONCAT44(0x9442bb,(uint)uStack_398);
              FUN_009885d0();
              pvStack_2c._0_1_ = 0x46;
              uStack_398 = CONCAT44(&uStack_318,0x9442d6);
              FUN_00988f20();
              pvStack_2c._0_1_ = 0x47;
              uStack_398 = CONCAT44(pcStack_380,0x9442f1);
              FUN_00988f20();
              pvStack_2c._0_1_ = 0x48;
              uStack_398 = CONCAT44(auStack_2fc,0x94430f);
              FUN_00988f20();
              pvStack_2c._0_1_ = 0x49;
              uStack_398 = CONCAT44(uVar7,0x94432a);
              FUN_00988f20();
              pvStack_2c._0_1_ = 0x4a;
              uStack_398 = CONCAT44(&uStack_364,0x944345);
              FUN_00988f20();
              uStack_398 = 0xffffffff00000000;
              pvStack_2c._0_1_ = 0x4b;
              FUN_00448aa0();
              uStack_398 = CONCAT44(0x944364,(uint)uStack_398);
              FUN_00408ad0();
              uStack_398 = CONCAT44(0x944370,(uint)uStack_398);
              FUN_00408ad0();
              uStack_398 = CONCAT44(0x94437c,(uint)uStack_398);
              FUN_00408ad0();
              uStack_398 = CONCAT44(0x944388,(uint)uStack_398);
              FUN_00408ad0();
              uStack_398 = CONCAT44(0x944394,(uint)uStack_398);
              FUN_00408ad0();
              uStack_398 = CONCAT44(0x9443a0,(uint)uStack_398);
              FUN_00408ad0();
              uStack_398 = CONCAT44(0x9443ac,(uint)uStack_398);
              FUN_00408ad0();
              uStack_398 = CONCAT44(0x9443b8,(uint)uStack_398);
              FUN_00408ad0();
              pvStack_2c._0_1_ = 0x42;
              uStack_398 = CONCAT44(&local_334,0x9443ca);
              FUN_009a9740();
              uStack_398 = CONCAT44(0x9443d3,(uint)uStack_398);
              FUN_00408ad0();
              uStack_398 = CONCAT44(0x9443df,(uint)uStack_398);
              FUN_00408ad0();
              uStack_398 = CONCAT44(0x9443eb,(uint)uStack_398);
              FUN_00408ad0();
              pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
              uStack_398 = CONCAT44(0x9443fb,(uint)uStack_398);
              FUN_00408ad0();
            }
          }
        }
      }
      else {
        piVar3 = (int *)(*(int *)(in_ECX + 0x6c) + 0x28);
        piStack_390 = piVar3;
        (**(code **)(*param_2 + 0x44))();
        uStack_398 = CONCAT44(0x943b01,(uint)uStack_398);
        cVar1 = FUN_0040b360();
        if (cVar1 == '\0') {
          uStack_398 = CONCAT44(0x943b13,(uint)uStack_398);
          (**(code **)(*param_2 + 0x44))();
          uStack_398 = CONCAT44(0x943b1d,(uint)uStack_398);
          cVar1 = FUN_0040b360();
          if (cVar1 == '\0') {
            uStack_398 = CONCAT44(0x943b2f,(uint)uStack_398);
            (**(code **)(*param_2 + 0x44))();
            uStack_398 = CONCAT44(0x943b39,(uint)uStack_398);
            cVar1 = FUN_0040b360();
            if (cVar1 == '\0') {
              uStack_398 = CONCAT44(0x943b4b,(uint)uStack_398);
              (**(code **)(*param_2 + 0x44))();
              uStack_398 = CONCAT44(0x943b55,(uint)uStack_398);
              cVar1 = FUN_0040b360();
              if (cVar1 == '\0') {
                uStack_398 = CONCAT44(0x943b69,(uint)uStack_398);
                (**(code **)(*param_2 + 0x44))();
                uStack_398 = CONCAT44(0x943b73,(uint)uStack_398);
                cVar1 = FUN_0040b360();
                if (cVar1 == '\0') {
                  uStack_398 = CONCAT44(0x943b80,(uint)uStack_398);
                  (**(code **)(*param_2 + 0x44))();
                  uStack_398 = CONCAT44(0x943b8a,(uint)uStack_398);
                  cVar1 = FUN_0040b360();
                  if (cVar1 == '\0') goto LAB_00944790;
                }
                uStack_398 = CONCAT44(0x943b9c,(uint)uStack_398);
                iVar5 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
                if (iVar5 == 0x9fa) {
                  iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x51c);
                  uStack_398 = CONCAT44(0x943bbf,(uint)uStack_398);
                  piVar3 = (int *)FUN_00950020();
                  uStack_398 = 1000;
                  uVar10 = __alldiv((longlong)iVar5 * (longlong)*piVar3);
                }
                else {
                  uStack_398 = CONCAT44(0x943bdd,(uint)uStack_398);
                  puVar6 = (uint *)FUN_00950020();
                  uVar10 = *puVar6;
                }
                puStack_378 = (uint *)&uStack_398;
                uStack_398 = (ulonglong)uVar10;
                uVar7 = FUN_009c9360();
                uStack_398 = CONCAT44(uVar7,&uStack_318);
                pvStack_2c._0_1_ = 0x2e;
                FUN_0042c180();
                uStack_398 = 0xffffffff00000000;
                pvStack_2c._0_1_ = 0x2f;
                FUN_00408ed0();
                uStack_398 = CONCAT44(0x943c3f,(uint)uStack_398);
                FUN_00408ad0();
                pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
                uStack_398 = CONCAT44(0x943c52,(uint)uStack_398);
                FUN_00408ad0();
                goto LAB_00944790;
              }
            }
            uStack_398 = CONCAT44(0x943c63,(uint)uStack_398);
            iVar5 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
            if (iVar5 == 0x9fa) {
              pcStack_380 = *(char **)(*(int *)(DAT_012586dc + 0x30) + 0x518);
              uStack_398 = CONCAT44(piVar3,0x943c8a);
              piVar3 = (int *)FUN_00950050();
              uStack_398 = 1000;
              uVar7 = __alldiv((longlong)(int)pcStack_380 * (longlong)*piVar3);
            }
            else {
              uStack_398 = CONCAT44(piVar3,0x943ca9);
              puVar4 = (undefined4 *)FUN_00950050();
              uVar7 = *puVar4;
            }
            puStack_378 = (uint *)&uStack_398;
            uStack_398 = CONCAT44(1,uVar7);
            uVar7 = FUN_009c9360();
            uStack_398 = CONCAT44(uVar7,&uStack_318);
            pvStack_2c._0_1_ = 0x2c;
            FUN_0042c180();
            uStack_398 = 0xffffffff00000000;
            pvStack_2c._0_1_ = 0x2d;
            FUN_00408ed0();
            uStack_398 = CONCAT44(0x943d0c,(uint)uStack_398);
            FUN_00408ad0();
            pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
            uStack_398 = CONCAT44(0x943d1f,(uint)uStack_398);
            FUN_00408ad0();
            goto LAB_00944790;
          }
        }
        puStack_378 = (uint *)&uStack_398;
        uStack_398 = 0;
        uVar7 = FUN_009c9360();
        uStack_398 = CONCAT44(uVar7,&uStack_318);
        pvStack_2c._0_1_ = 0x2a;
        FUN_0042c180();
        uStack_398 = 0xffffffff00000000;
        pvStack_2c._0_1_ = 0x2b;
        FUN_00408ed0();
        uStack_398 = CONCAT44(0x943d84,(uint)uStack_398);
        FUN_00408ad0();
        pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
        uStack_398 = CONCAT44(0x943d97,(uint)uStack_398);
        FUN_00408ad0();
      }
    }
    else {
      iVar5 = *(int *)(in_ECX + 0x6c) + 0x28;
      (**(code **)(*param_2 + 0x44))();
      uStack_398 = CONCAT44(0x943846,(uint)uStack_398);
      cVar1 = FUN_0040b360();
      if (cVar1 == '\0') {
        uStack_398 = CONCAT44(0x943858,(uint)uStack_398);
        (**(code **)(*param_2 + 0x44))();
        uStack_398 = CONCAT44(0x943862,(uint)uStack_398);
        cVar1 = FUN_0040b360();
        if (cVar1 == '\0') {
          uStack_398 = CONCAT44(0x943874,(uint)uStack_398);
          (**(code **)(*param_2 + 0x44))();
          uStack_398 = CONCAT44(0x94387e,(uint)uStack_398);
          cVar1 = FUN_0040b360();
          if (cVar1 == '\0') {
            uStack_398 = CONCAT44(0x943890,(uint)uStack_398);
            (**(code **)(*param_2 + 0x44))();
            uStack_398 = CONCAT44(0x94389a,(uint)uStack_398);
            cVar1 = FUN_0040b360();
            if (cVar1 == '\0') {
              uStack_398 = CONCAT44(0x9438ae,(uint)uStack_398);
              (**(code **)(*param_2 + 0x44))();
              uStack_398 = CONCAT44(0x9438b8,(uint)uStack_398);
              cVar1 = FUN_0040b360();
              if (cVar1 == '\0') {
                uStack_398 = CONCAT44(0x9438c5,(uint)uStack_398);
                (**(code **)(*param_2 + 0x44))();
                uStack_398 = CONCAT44(0x9438cf,(uint)uStack_398);
                cVar1 = FUN_0040b360();
                if (cVar1 == '\0') goto LAB_00944790;
              }
              puStack_378 = (uint *)&uStack_398;
              uStack_398 = 0;
              uVar7 = FUN_009c9360();
              uStack_398 = CONCAT44(uVar7,&uStack_318);
              pvStack_2c._0_1_ = 0x27;
              FUN_0042c180();
              uStack_398 = 0xffffffff00000000;
              pvStack_2c._0_1_ = 0x28;
              FUN_00408ed0();
              uStack_398 = CONCAT44(0x943937,(uint)uStack_398);
              FUN_00408ad0();
              pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
              uStack_398 = CONCAT44(0x94394a,(uint)uStack_398);
              FUN_00408ad0();
              goto LAB_00944790;
            }
          }
          uStack_398 = CONCAT44(0x943959,(uint)uStack_398);
          iVar9 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
          if (iVar9 == 0x9fa) {
            iVar9 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x518);
            uStack_398 = CONCAT44(&puStack_378,iVar5);
            piVar3 = (int *)FUN_009503d0();
            uStack_398 = 1000;
            uVar7 = __alldiv((longlong)iVar9 * (longlong)*piVar3);
          }
          else {
            uStack_398 = CONCAT44(&puStack_378,iVar5);
            puVar4 = (undefined4 *)FUN_009503d0();
            uVar7 = *puVar4;
          }
          puStack_378 = (uint *)&uStack_398;
          uStack_398 = CONCAT44(1,uVar7);
          uVar7 = FUN_009c9360();
          uStack_398 = CONCAT44(uVar7,&uStack_318);
          pvStack_2c._0_1_ = 0x25;
          FUN_0042c180();
          uStack_398 = 0xffffffff00000000;
          pvStack_2c._0_1_ = 0x26;
          FUN_00408ed0();
          uStack_398 = CONCAT44(0x943a03,(uint)uStack_398);
          FUN_00408ad0();
          pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
          uStack_398 = CONCAT44(0x943a16,(uint)uStack_398);
          FUN_00408ad0();
          goto LAB_00944790;
        }
      }
      puStack_378 = (uint *)&uStack_398;
      uStack_398 = 0;
      uVar7 = FUN_009c9360();
      uStack_398 = CONCAT44(uVar7,&uStack_318);
      pvStack_2c._0_1_ = 0x23;
      FUN_0042c180();
      uStack_398 = 0xffffffff00000000;
      pvStack_2c._0_1_ = 0x24;
      FUN_00408ed0();
      uStack_398 = CONCAT44(0x943a7b,(uint)uStack_398);
      FUN_00408ad0();
      pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
      uStack_398 = CONCAT44(0x943a8e,(uint)uStack_398);
      FUN_00408ad0();
    }
    goto LAB_00944790;
  }
  iVar5 = *(int *)(in_ECX + 0x6c);
  iVar9 = iVar5 + 0x28;
  uStack_398 = CONCAT44(0x942e76,(uint)uStack_398);
  uStack_340 = iVar9;
  (**(code **)(*param_2 + 0x44))();
  uStack_398 = CONCAT44(0x942e80,(uint)uStack_398);
  cVar1 = FUN_0040b360();
  if (cVar1 == '\0') {
    uStack_398 = CONCAT44(0x942e92,(uint)uStack_398);
    (**(code **)(*param_2 + 0x44))();
    uStack_398 = CONCAT44(0x942e9c,(uint)uStack_398);
    cVar1 = FUN_0040b360();
    if (cVar1 == '\0') {
      uStack_398 = CONCAT44(0x942eae,(uint)uStack_398);
      (**(code **)(*param_2 + 0x44))();
      uStack_398 = CONCAT44(0x942eb8,(uint)uStack_398);
      cVar1 = FUN_0040b360();
      if (cVar1 == '\0') {
        uStack_398 = CONCAT44(0x942eca,(uint)uStack_398);
        (**(code **)(*param_2 + 0x44))();
        uStack_398 = CONCAT44(0x942ed4,(uint)uStack_398);
        cVar1 = FUN_0040b360();
        if (cVar1 != '\0') goto LAB_009431a7;
        uStack_398 = CONCAT44(0x942ee6,(uint)uStack_398);
        (**(code **)(*param_2 + 0x44))();
        uStack_398 = CONCAT44(0x942ef0,(uint)uStack_398);
        cVar1 = FUN_0040b360();
        if (cVar1 == '\0') {
          uStack_398 = CONCAT44(0x942efe,(uint)uStack_398);
          (**(code **)(*param_2 + 0x44))();
          uStack_398 = CONCAT44(0x942f08,(uint)uStack_398);
          cVar1 = FUN_0040b360();
          if (cVar1 == '\0') goto LAB_00944790;
        }
        uVar10 = 0;
        uStack_398 = CONCAT44(&stack0xfffffc94,0x942f20);
        FUN_00951610();
        uStack_398 = CONCAT44(0x942f2a,(uint)uStack_398);
        iVar5 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
        if (iVar5 != 0x9fa) {
          puStack_378 = *(uint **)(in_ECX + 0x9c);
          uStack_398 = CONCAT44(0x942f61,(uint)uStack_398);
          cVar1 = FUN_0092e270();
          if (cVar1 != '\0') {
            uStack_398 = CONCAT44(&pcStack_380,iVar9);
            puVar6 = (uint *)FUN_00950d20();
            uVar10 = *puVar6;
          }
        }
        if (uVar10 != 0) {
          if (iStack_2b4 != 0) {
            uStack_398 = 0x100dee2cc;
            FUN_00448740();
          }
          uStack_398 = CONCAT44(0x942faa,(uint)uStack_398);
          FUN_009885d0();
          pcStack_380 = (char *)&uStack_398;
          pvStack_2c._0_1_ = 0x1b;
          uStack_398 = (ulonglong)uVar10;
          uVar7 = FUN_009c9110();
          uStack_398 = CONCAT44(&uStack_364,&local_334);
          pvStack_2c._0_1_ = 0x1c;
          pcStack_380 = (char *)FUN_009a8ee0();
          pvStack_2c._0_1_ = 0x1d;
          uStack_398 = CONCAT44(0x942ffd,(uint)uStack_398);
          iVar5 = FUN_00475500();
          uStack_398 = *(undefined8 *)(iVar5 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
          pvStack_2c._0_1_ = 0x1e;
          uStack_398 = CONCAT44(uVar7,0x943039);
          FUN_00988f20();
          uStack_398 = 0xffffffff00000000;
          pvStack_2c._0_1_ = 0x1f;
          FUN_00448aa0();
          uStack_398 = CONCAT44(0x943058,(uint)uStack_398);
          FUN_00408ad0();
          uStack_398 = CONCAT44(0x943064,(uint)uStack_398);
          FUN_00408ad0();
          pvStack_2c._0_1_ = 0x1c;
          uStack_398 = CONCAT44(&local_334,0x943076);
          FUN_009a9740();
          uStack_398 = CONCAT44(0x943082,(uint)uStack_398);
          FUN_00408ad0();
          pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
          uStack_398 = CONCAT44(0x943092,(uint)uStack_398);
          FUN_00408ad0();
        }
        pcStack_380 = (char *)&uStack_398;
        uStack_398 = (ulonglong)uVar10;
        uVar7 = FUN_009c9360();
        uStack_398 = CONCAT44(uVar7,&uStack_318);
        pvStack_2c._0_1_ = 0x20;
        FUN_0042c180();
        uStack_398 = 0xffffffff00000000;
        pvStack_2c._0_1_ = 0x21;
        FUN_00408ed0();
        uStack_398 = CONCAT44(0x9430fa,(uint)uStack_398);
        FUN_00408ad0();
        pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
        uStack_398 = CONCAT44(0x94310d,(uint)uStack_398);
        FUN_00408ad0();
        uVar7 = 0;
      }
      else {
LAB_009431a7:
        iVar5 = 0;
        uStack_398 = CONCAT44(&stack0xfffffc94,0x9431b7);
        FUN_00951300();
        uStack_398 = CONCAT44(0x9431c1,(uint)uStack_398);
        iVar8 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
        if (iVar8 != 0x9fa) {
          puStack_378 = *(uint **)(in_ECX + 0x9c);
          uStack_398 = CONCAT44(0x9431f8,(uint)uStack_398);
          cVar1 = FUN_0092e270();
          if (cVar1 != '\0') {
            uStack_398 = CONCAT44(&pcStack_380,iVar9);
            piVar3 = (int *)FUN_00950a50();
            iVar5 = *piVar3;
          }
        }
        if (iVar5 != 0) {
          if (iStack_2b4 != 0) {
            uStack_398 = 0x100dee2cc;
            FUN_00448740();
          }
          uStack_398 = CONCAT44(0x943241,(uint)uStack_398);
          FUN_009885d0();
          pcStack_380 = (char *)&uStack_398;
          pvStack_2c._0_1_ = 0x14;
          uStack_398 = CONCAT44(1,iVar5);
          uVar7 = FUN_009c9110();
          uStack_398 = CONCAT44(&uStack_364,&local_334);
          pvStack_2c._0_1_ = 0x15;
          pcStack_380 = (char *)FUN_009a8ee0();
          pvStack_2c._0_1_ = 0x16;
          uStack_398 = CONCAT44(0x943295,(uint)uStack_398);
          iVar9 = FUN_00475500();
          uStack_398 = *(undefined8 *)(iVar9 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar9 + 0x6c));
          pvStack_2c._0_1_ = 0x17;
          uStack_398 = CONCAT44(uVar7,0x9432d1);
          FUN_00988f20();
          uStack_398 = 0xffffffff00000000;
          pvStack_2c._0_1_ = 0x18;
          FUN_00448aa0();
          uStack_398 = CONCAT44(0x9432f0,(uint)uStack_398);
          FUN_00408ad0();
          uStack_398 = CONCAT44(0x9432fc,(uint)uStack_398);
          FUN_00408ad0();
          pvStack_2c._0_1_ = 0x15;
          uStack_398 = CONCAT44(&local_334,0x94330e);
          FUN_009a9740();
          uStack_398 = CONCAT44(0x94331a,(uint)uStack_398);
          FUN_00408ad0();
          pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
          uStack_398 = CONCAT44(0x94332a,(uint)uStack_398);
          FUN_00408ad0();
        }
        pcStack_380 = (char *)&uStack_398;
        uStack_398 = CONCAT44(1,iVar5);
        uVar7 = FUN_009c9360();
        uStack_398 = CONCAT44(uVar7,&uStack_318);
        pvStack_2c._0_1_ = 0x19;
        FUN_0042c180();
        uStack_398 = 0xffffffff00000000;
        pvStack_2c._0_1_ = 0x1a;
        FUN_00408ed0();
        uStack_398 = CONCAT44(0x943393,(uint)uStack_398);
        FUN_00408ad0();
        pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
        uStack_398 = CONCAT44(0x9433a6,(uint)uStack_398);
        FUN_00408ad0();
        uVar7 = 1;
      }
      pcStack_380 = (char *)&uStack_398;
      uStack_398 = CONCAT44(uVar7,unaff_ESI);
      FUN_00952d40();
      goto LAB_00944790;
    }
  }
  piStack_33c = (int *)0x0;
  uVar10 = 0;
  pcStack_380 = (char *)0x0;
  uStack_398 = CONCAT44(0x9433df,(uint)uStack_398);
  iVar9 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
  if (iVar9 != 0x9fa) {
    uStack_398 = CONCAT44(&puStack_378,0x9433f2);
    puVar4 = (undefined4 *)FUN_00950ff0();
    pcStack_380 = (char *)*puVar4;
  }
  uStack_348 = *(uint *)(in_ECX + 0x9c);
  piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(in_ECX + 0xa0) * 4) + 0xbe8) +
                             *(int *)(in_ECX + 0xa8) * 4) + 0x50);
  do {
    if (piVar3 == (int *)0x0) {
      uStack_398 = CONCAT44(0x943445,(uint)uStack_398);
      cVar1 = FUN_0092eff0();
      if (cVar1 == '\0') {
        uStack_398 = CONCAT44(0x943457,(uint)uStack_398);
        iVar5 = (**(code **)(**(int **)(unaff_EDI + 0x6c) + 0x20))();
        if (iVar5 == 0x9fa) {
          iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x514);
          uStack_398 = CONCAT44(uStack_340,0x94347b);
          piVar3 = (int *)FUN_009500e0();
          uStack_398 = 1000;
          piStack_33c = (int *)__alldiv((longlong)*piVar3 * (longlong)iVar5);
        }
        else {
          uStack_398 = CONCAT44(uStack_340,0x94349c);
          puVar4 = (undefined4 *)FUN_009500e0();
          piStack_33c = (int *)*puVar4;
        }
      }
      break;
    }
    iVar9 = *piVar3;
    piVar3 = (int *)piVar3[2];
  } while (*(int *)(iVar9 + 0x24) != *(int *)(*(int *)(iVar5 + 0x34) + 8));
  uStack_398 = CONCAT44(0x9434b0,(uint)uStack_398);
  iVar5 = (**(code **)(**(int **)(unaff_EDI + 0x6c) + 0x20))();
  if (iVar5 != 0x9fa) {
    uStack_348 = *(uint *)(unaff_EDI + 0x9c);
    uStack_398 = CONCAT44(0x9434e7,(uint)uStack_398);
    cVar1 = FUN_0092e270();
    if (cVar1 != '\0') {
      uStack_398 = CONCAT44(&puStack_378,uStack_340);
      puVar6 = (uint *)FUN_00950780();
      uVar10 = *puVar6;
    }
  }
  piVar3 = piStack_33c;
  puStack_378 = (uint *)&uStack_398;
  uStack_398 = ZEXT48(pcStack_380 + uVar10 + (int)piStack_33c);
  uVar7 = FUN_009c9360();
  uStack_398 = CONCAT44(uVar7,&uStack_318);
  pvStack_2c._0_1_ = 8;
  FUN_0042c180();
  uStack_398 = 0xffffffff00000000;
  pvStack_2c._0_1_ = 9;
  FUN_00408ed0();
  uStack_398 = CONCAT44(0x94356e,(uint)uStack_398);
  FUN_00408ad0();
  pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
  uStack_398 = CONCAT44(0x943581,(uint)uStack_398);
  FUN_00408ad0();
  if (piVar3 != (int *)0x0) {
    if (iStack_2b4 != 0) {
      uStack_398 = 0x100dee2cc;
      FUN_00448740();
    }
    uStack_398 = CONCAT44(0x9435b3,(uint)uStack_398);
    FUN_009885d0();
    puStack_378 = (uint *)&uStack_398;
    pvStack_2c._0_1_ = 10;
    uStack_398 = ZEXT48(piStack_33c);
    uVar7 = FUN_009c9110();
    uStack_398 = CONCAT44(&uStack_364,&local_334);
    pvStack_2c._0_1_ = 0xb;
    piStack_33c = (int *)FUN_009a8ee0();
    pvStack_2c._0_1_ = 0xc;
    uStack_398 = CONCAT44(0x943606,(uint)uStack_398);
    iVar5 = FUN_00475500();
    uStack_398 = *(undefined8 *)(iVar5 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
    pvStack_2c._0_1_ = 0xd;
    uStack_398 = CONCAT44(uVar7,0x943642);
    FUN_00988f20();
    uStack_398 = 0xffffffff00000000;
    pvStack_2c._0_1_ = 0xe;
    FUN_00448aa0();
    uStack_398 = CONCAT44(0x943661,(uint)uStack_398);
    FUN_00408ad0();
    uStack_398 = CONCAT44(0x94366d,(uint)uStack_398);
    FUN_00408ad0();
    pvStack_2c._0_1_ = 0xb;
    uStack_398 = CONCAT44(&local_334,0x94367f);
    FUN_009a9740();
    uStack_398 = CONCAT44(0x94368b,(uint)uStack_398);
    FUN_00408ad0();
    pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
    uStack_398 = CONCAT44(0x94369b,(uint)uStack_398);
    FUN_00408ad0();
  }
  if (uVar10 != 0) {
    if (iStack_2b4 != 0) {
      uStack_398 = 0x100dee2cc;
      FUN_00448740();
    }
    uStack_398 = CONCAT44(0x9436cf,(uint)uStack_398);
    FUN_009885d0();
    puStack_378 = (uint *)&uStack_398;
    pvStack_2c._0_1_ = 0xf;
    uStack_398 = (ulonglong)uVar10;
    uVar7 = FUN_009c9110();
    uStack_398 = CONCAT44(&uStack_364,&local_334);
    pvStack_2c._0_1_ = 0x10;
    FUN_009a8ee0();
    pvStack_2c._0_1_ = 0x11;
    uStack_398 = CONCAT44(0x943722,(uint)uStack_398);
    iVar5 = FUN_00475500();
    uStack_398 = *(undefined8 *)(iVar5 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
    pvStack_2c._0_1_ = 0x12;
    uStack_398 = CONCAT44(uVar7,0x94375e);
    FUN_00988f20();
    uStack_398 = 0xffffffff00000000;
    pvStack_2c._0_1_ = 0x13;
    FUN_00448aa0();
    uStack_398 = CONCAT44(0x94377d,(uint)uStack_398);
    FUN_00408ad0();
    uStack_398 = CONCAT44(0x943789,(uint)uStack_398);
    FUN_00408ad0();
    pvStack_2c._0_1_ = 0x10;
    uStack_398 = CONCAT44(&local_334,0x94379b);
    FUN_009a9740();
    uStack_398 = CONCAT44(0x9437a7,(uint)uStack_398);
    FUN_00408ad0();
    pvStack_2c = (void *)((uint)pvStack_2c._1_3_ << 8);
    uStack_398 = CONCAT44(0x9437b7,(uint)uStack_398);
    FUN_00408ad0();
  }
  puStack_378 = (uint *)&uStack_398;
  uStack_398 = ZEXT48(pcStack_380);
  FUN_00952d40();
LAB_00944790:
  uStack_398 = CONCAT44(param_1,0x9447a0);
  FUN_0040c830();
  uStack_398 = CONCAT44(0x9447a7,(uint)uStack_398);
  FUN_00459820();
  ExceptionList = pvStack_34;
  return param_1;
}

