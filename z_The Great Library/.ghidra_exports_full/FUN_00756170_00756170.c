// FUN_00756170 @ 00756170 body=[[00756170, 00756247] [0075624b, 0075633f] [00756343, 0075638e] [00756392, 007563b9] [007563bd, 007564fa] [007564fe, 007566e7] [007566eb, 007568b0] [007568b4, 00756973] [00756977, 00756a95] [00756a99, 00756b68] [00756b6c, 00756be8] [00756bec, 00756d36] [00756d3a, 00756e6d] [00756e71, 00757053] [00757057, 0075710d] [00757111, 00757126] [0075712a, 0075713e]]


/* WARNING: Removing unreachable block (ram,0x007563b0) */

void FUN_00756170(void)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  ulonglong *puVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  int *in_ECX;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  uint unaff_EBX;
  uint unaff_EDI;
  float10 fVar13;
  undefined1 **ppuStack_380;
  char *pcStack_37c;
  undefined8 uStack_378;
  uint uStack_370;
  undefined *puStack_36c;
  undefined1 *puStack_368;
  undefined8 uStack_364;
  undefined8 uStack_35c;
  uint uStack_354;
  char **ppcStack_350;
  char *pcStack_34c;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined *puStack_33c;
  char *pcStack_338;
  char *pcStack_334;
  undefined8 uStack_330;
  undefined4 uStack_328;
  ulonglong **ppuStack_324;
  ulonglong *puStack_320;
  undefined8 uStack_31c;
  uint uStack_314;
  undefined4 *puStack_310;
  ulonglong *puStack_30c;
  int **ppiStack_308;
  char *pcStack_304;
  undefined8 uStack_300;
  uint *puStack_2f8;
  char *pcStack_2f4;
  undefined8 uStack_2f0;
  undefined *puStack_2e4;
  uint uStack_2e0;
  int **ppiStack_2dc;
  uint *puStack_2d8;
  undefined8 uStack_2d4;
  uint *puStack_2cc;
  char *pcStack_2c8;
  int *piStack_2c4;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  double dStack_298;
  uint uStack_290;
  int iStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint local_280;
  uint uStack_27c;
  ulonglong uStack_274;
  int local_26c;
  undefined **appuStack_25c [4];
  uint uStack_24c;
  undefined **ppuStack_23c;
  uint uStack_238;
  undefined **ppuStack_22c;
  uint uStack_228;
  undefined **appuStack_210 [4];
  undefined **appuStack_200 [4];
  undefined1 auStack_1f0 [12];
  undefined **appuStack_1e4 [4];
  undefined **appuStack_1d4 [7];
  undefined **appuStack_1b8 [4];
  undefined **appuStack_1a8 [31];
  void *pvStack_12c;
  undefined1 uStack_124;
  undefined1 uStack_114;
  undefined1 uStack_110;
  undefined1 uStack_f8;
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_80;
  undefined4 uStack_70;
  uint uStack_54;
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00b8a049;
  pvStack_4c = ExceptionList;
  piStack_2c4 = (int *)0xc;
  pcStack_2c8 = "frontend.cpp";
  local_26c = 0xf;
  uStack_274 = (ulonglong)(uint)uStack_274;
  local_280 = local_280 & 0xffffff00;
  puStack_2cc = (uint *)0x7561b9;
  ExceptionList = &pvStack_4c;
  FUN_00409350();
  piStack_2c4 = (int *)0x3;
  puStack_2cc = &local_280;
  pcStack_2c8 = (char *)0x1ae;
  local_44 = 0;
  uStack_2d4._4_4_ = 0x7561d8;
  uVar3 = FUN_004015b0();
  _piStack_2c4 = (double)((ulonglong)unaff_EDI << 0x20);
  pcStack_2c8 = (char *)0x14;
  puStack_2cc = (uint *)0xe13b68;
  local_44 = CONCAT31(local_44._1_3_,1);
  uStack_2d4._0_4_ = (undefined ***)0x7561f3;
  uStack_2d4._4_4_ = uVar3;
  FUN_00987d50();
  puStack_2d8 = (uint *)0x7561f9;
  uStack_2d4._0_4_ = (undefined ***)uVar3;
  FUN_00401280();
  uStack_2d4._0_4_ = appuStack_1b8;
  uStack_54 = uStack_54 & 0xffffff00;
  puStack_2d8 = (uint *)0x756211;
  FUN_00987ac0();
  uStack_2d4._0_4_ = appuStack_1b8;
  appuStack_1b8[0] = std::ios_base::vftable;
  puStack_2d8 = (uint *)0x756229;
  FUN_00aad52d();
  uStack_54 = 0xffffffff;
  if (0xf < uStack_27c) {
    uStack_2d4._0_4_ = (undefined ***)uStack_290;
                    /* WARNING: Subroutine does not return */
    puStack_2d8 = (uint *)&UNK_00756248;
    FUN_00aae91b();
  }
  uStack_27c = 0xf;
  local_280 = 0;
  uStack_290 = uStack_290 & 0xffffff00;
  if (DAT_00f20c18 == (int *)0x0) {
    uStack_2d4._0_4_ = (undefined ***)0x4;
    puStack_2d8 = (uint *)0x75626b;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  uStack_2d4._0_4_ = (undefined ***)0x756292;
  fVar13 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  dStack_298 = (double)fVar13;
  uStack_2d4._0_4_ = (undefined ***)0x7562a1;
  FUN_0068b650();
  uStack_2d4._0_4_ = (undefined ***)0x8;
  puStack_2d8 = (uint *)0xe09944;
  _piStack_2c4 = (double)((ulonglong)_piStack_2c4 & 0xffffffffffffff00);
  ppiStack_2dc = (int **)0x7562c2;
  FUN_00409350();
  uStack_2d4._0_4_ = (undefined ***)&piStack_2c4;
  puStack_2d8 = &uStack_290;
  uStack_54 = 2;
  ppiStack_2dc = (int **)0x7562dc;
  FUN_009a8ee0();
  uStack_54._0_1_ = 3;
  uStack_2d4._0_4_ = (undefined ***)0x7562eb;
  iVar4 = FUN_00475500();
  uStack_2e0 = (uint)*(undefined8 *)(iVar4 + 0x6c);
  ppiStack_2dc = (int **)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
  puStack_2d8 = (uint *)*(undefined8 *)(iVar4 + 0x74);
  uStack_2d4._0_4_ = (undefined ***)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
  puStack_2e4 = (undefined *)0x756311;
  ppiStack_2dc = (int **)FUN_009a9880();
  uStack_2d4._0_4_ = (undefined ***)0x0;
  puStack_2d8 = (uint *)0x1;
  uStack_54._0_1_ = 4;
  uStack_2e0 = 0x756329;
  FUN_007e1210();
  if (0xf < uStack_238) {
    uStack_2d4._0_4_ = (undefined ***)uStack_24c;
                    /* WARNING: Subroutine does not return */
    puStack_2d8 = (uint *)&UNK_00756340;
    FUN_00aae91b();
  }
  uStack_238 = 0xf;
  ppuStack_23c = (undefined **)0x0;
  uStack_24c = uStack_24c & 0xffffff00;
  uStack_54 = CONCAT31(uStack_54._1_3_,5);
  uStack_2d4._0_4_ = (undefined ***)0x756372;
  FUN_009adb70();
  if (iStack_28c != 0) {
    uStack_2d4._0_4_ = (undefined ***)0x756385;
    FUN_009e6a80();
    uStack_2d4._0_4_ = (undefined ***)iStack_28c;
                    /* WARNING: Subroutine does not return */
    puStack_2d8 = (uint *)&UNK_0075638f;
    FUN_00aae91b();
  }
  uStack_54 = 0xffffffff;
  iStack_28c = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  puStack_2d8 = (uint *)in_ECX[0x79];
  uStack_2d4._0_4_ = (undefined ***)0x3;
  ppiStack_2dc = (int **)0x7563cb;
  FUN_009973b0();
  puStack_2d8 = (uint *)in_ECX[0x79];
  uStack_2d4._0_4_ = (undefined ***)0x2;
  ppiStack_2dc = (int **)0x7563d9;
  FUN_009973b0();
  puStack_2d8 = (uint *)in_ECX[0x79];
  uStack_2d4._0_4_ = (undefined ***)0x1;
  ppiStack_2dc = (int **)0x7563e7;
  FUN_00997280();
  if (DAT_00f20c18 == (int *)0x0) {
    uStack_2d4._0_4_ = (undefined ***)0x4;
    puStack_2d8 = (uint *)0x7563f6;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  uStack_2d4._0_4_ = (undefined ***)0x75641d;
  fVar13 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  uStack_2a8 = (double)fVar13;
  uStack_2d4._0_4_ = (undefined ***)0xc;
  puStack_2d8 = (uint *)0xe13b3c;
  _piStack_2c4 = (double)((ulonglong)_piStack_2c4 & 0xffffffffffffff00);
  ppiStack_2dc = (int **)0x756442;
  FUN_00409350();
  uStack_2d4._0_4_ = (undefined ***)0x10006;
  ppiStack_2dc = &piStack_2c4;
  puStack_2d8 = (uint *)0x1bf;
  uStack_54 = 6;
  uStack_2e0 = 0x756468;
  uVar5 = FUN_004015b0();
  uStack_2d4._0_4_ = (undefined ***)0x0;
  puStack_2d8 = (uint *)0x1f;
  ppiStack_2dc = (int **)0xe13b80;
  uStack_54 = CONCAT31(uStack_54._1_3_,7);
  puStack_2e4 = (undefined *)0x756483;
  uStack_2e0 = uVar5;
  FUN_00987d50();
  uStack_2f0 = (double)(ulonglong)unaff_EBX - uStack_2a8;
  puStack_2e4 = &DAT_00e07938;
  puStack_2f8 = (uint *)0x75649d;
  pcStack_2f4 = (char *)uVar5;
  pcStack_2f4 = (char *)FUN_0048c130();
  puStack_2f8 = (uint *)0x7564a6;
  puStack_2f8 = (uint *)FUN_00418e30();
  uStack_300 = (double)CONCAT44(0x7564ac,(undefined ***)uStack_300);
  FUN_00401280();
  uStack_70 = CONCAT31(uStack_70._1_3_,6);
  pcStack_2f4 = (char *)0x7564c4;
  uStack_2f0._0_4_ = appuStack_1d4;
  FUN_00987ac0();
  uStack_2f0._0_4_ = appuStack_1d4;
  appuStack_1d4[0] = std::ios_base::vftable;
  pcStack_2f4 = (char *)0x7564dc;
  FUN_00aad52d();
  uStack_70 = 0xffffffff;
  if ((char *)0xf < puStack_2cc) {
    uStack_2f0 = (double)CONCAT44(uStack_2f0._4_4_,uStack_2e0);
                    /* WARNING: Subroutine does not return */
    pcStack_2f4 = &UNK_007564fb;
    FUN_00aae91b();
  }
  if (in_ECX[0xda] == 0) {
    iVar4 = in_ECX[0x79];
    local_26c = in_ECX[0x123];
    uStack_2a8._4_4_ = in_ECX[0x120];
    uStack_2ac = (undefined4)*(undefined8 *)(in_ECX + 0x11e);
    uStack_2a8._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(in_ECX + 0x11e) >> 0x20);
    uStack_274 = *(ulonglong *)(in_ECX + 0x121);
    uStack_2f0._0_4_ =
         (undefined ***)
         CONCAT22((short)*(undefined4 *)(iVar4 + 0x6b9c0),(short)*(int *)(iVar4 + 0x6b9bc));
    pcStack_2f4 = (char *)0x0;
    _piStack_2c4 = 0.0;
    puStack_2f8 = (uint *)0x437a0000;
    uStack_300 = (double)CONCAT44(0x41000000,
                                  (float)*(int *)(iVar4 + 0x6b9bc) /
                                  (float)*(int *)(iVar4 + 0x6b9c0));
    pcStack_304 = (char *)0x3f48f5c3;
    ppiStack_308 = &piStack_2c4;
    puStack_30c = &uStack_274;
    puStack_310 = &uStack_2ac;
    uStack_314 = 0x756603;
    iVar4 = FUN_00996910();
    in_ECX[0xda] = iVar4;
    uStack_2f0._0_4_ = (undefined ***)0x756613;
    (**(code **)(*(int *)(iVar4 + 0x1c) + 0x34))();
    uVar2 = (ulonglong)_piStack_2c4 >> 0x20;
    _piStack_2c4 = (double)CONCAT44((int)uVar2,in_ECX + 0x7b);
    uStack_2f0._0_4_ = (undefined ***)0x756632;
    FUN_0068f390();
  }
  uStack_2f0._0_4_ = (undefined ***)0xc;
  pcStack_2f4 = "frontend.cpp";
  puStack_2cc = (uint *)0xf;
  uStack_2d4._4_4_ = 0;
  uStack_2e0 = uStack_2e0 & 0xffffff00;
  puStack_2f8 = (uint *)0x756655;
  FUN_00409350();
  uStack_2f0._0_4_ = (undefined ***)0x3;
  puStack_2f8 = &uStack_2e0;
  pcStack_2f4 = (char *)0x1d4;
  uStack_70 = 8;
  uStack_300 = (double)CONCAT44(0x756678,(undefined ***)uStack_300);
  uVar5 = FUN_004015b0();
  uStack_2f0 = (double)((ulonglong)uStack_2f0._4_4_ << 0x20);
  pcStack_2f4 = (char *)0x1c;
  puStack_2f8 = (uint *)0xe13ba0;
  uStack_70 = CONCAT31(uStack_70._1_3_,9);
  uStack_300._0_4_ = (undefined ***)0x756693;
  uStack_300._4_4_ = uVar5;
  FUN_00987d50();
  pcStack_304 = (char *)0x756699;
  uStack_300._0_4_ = (undefined ***)uVar5;
  FUN_00401280();
  uStack_300._0_4_ = appuStack_1e4;
  uStack_80 = CONCAT31(uStack_80._1_3_,8);
  pcStack_304 = (char *)0x7566b1;
  FUN_00987ac0();
  uStack_300._0_4_ = appuStack_1e4;
  appuStack_1e4[0] = std::ios_base::vftable;
  pcStack_304 = (char *)0x7566c9;
  FUN_00aad52d();
  uStack_80 = 0xffffffff;
  if ((char *)0xf < ppiStack_2dc) {
    uStack_300 = (double)CONCAT44(uStack_300._4_4_,(undefined ***)uStack_2f0);
                    /* WARNING: Subroutine does not return */
    pcStack_304 = &UNK_007566e8;
    FUN_00aae91b();
  }
  uStack_300._0_4_ = (undefined ***)0x7566f6;
  FUN_00638da0();
  if (DAT_00f20c18 == (int *)0x0) {
    uStack_300._0_4_ = (undefined ***)0x4;
    pcStack_304 = (char *)0x756705;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  uStack_300._0_4_ = (undefined ***)0x75672c;
  fVar13 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  _piStack_2c4 = (double)fVar13;
  iVar4 = in_ECX[0xda];
  uStack_300._0_4_ = (undefined ***)0x75673f;
  iVar6 = (**(code **)(*in_ECX + 0x38))();
  piVar7 = DAT_00f20c18;
  *(int *)(iVar6 + 0x20b4) = iVar4;
  if (piVar7 == (int *)0x0) {
    uStack_300._0_4_ = (undefined ***)0x4;
    pcStack_304 = (char *)0x756756;
    piVar7 = (int *)FUN_00aae9af();
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
      DAT_00f20c18 = piVar7;
    }
    else {
      *piVar7 = (int)&PTR_FUN_00e38b28;
      DAT_00f20c18 = piVar7;
    }
  }
  uStack_300._0_4_ = (undefined ***)0x756776;
  piVar8 = (int *)(**(code **)(*piVar7 + 4))();
  piVar7 = (int *)in_ECX[0xdd];
  if ((piVar8 != piVar7) && (piVar7 != (int *)0x0)) {
    uStack_300._0_4_ = (undefined ***)0x1;
    pcStack_304 = (char *)0x75678e;
    (**(code **)*piVar7)();
  }
  in_ECX[0xdd] = (int)piVar8;
  uStack_300._0_4_ = (undefined ***)0x75679d;
  (**(code **)(*piVar8 + 4))();
  if (DAT_00f20c18 == (int *)0x0) {
    uStack_300._0_4_ = (undefined ***)0x4;
    pcStack_304 = (char *)0x7567ac;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  uStack_300._0_4_ = (undefined ***)0x7567d3;
  fVar13 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  uStack_2d4 = (double)fVar13;
  uStack_300._0_4_ = (undefined ***)0xc;
  pcStack_304 = "frontend.cpp";
  ppiStack_2dc = (int **)0xf;
  uStack_2e0 = 0;
  uStack_2f0 = (double)((ulonglong)uStack_2f0 & 0xffffffffffffff00);
  ppiStack_308 = (int **)0x7567f8;
  FUN_00409350();
  uStack_300._0_4_ = (undefined ***)0x10006;
  ppiStack_308 = (int **)&uStack_2f0;
  pcStack_304 = (char *)0x1e0;
  uStack_80 = 10;
  puStack_30c = (ulonglong *)0x75681e;
  puVar9 = (ulonglong *)FUN_004015b0();
  uStack_300 = (double)((ulonglong)uStack_300._4_4_ << 0x20);
  pcStack_304 = (char *)0xa;
  ppiStack_308 = (int **)0xe13bc0;
  uStack_80 = CONCAT31(uStack_80._1_3_,0xb);
  puStack_310 = (undefined4 *)0x756839;
  puStack_30c = puVar9;
  FUN_00987d50();
  uStack_31c = (double)CONCAT44(uStack_2e0,puStack_2e4) - uStack_2d4;
  puStack_310 = (undefined4 *)&DAT_00e07938;
  ppuStack_324 = (ulonglong **)0x756853;
  puStack_320 = puVar9;
  uStack_314 = extraout_ECX;
  puStack_320 = (ulonglong *)FUN_0048c130();
  ppuStack_324 = (ulonglong **)0x75685c;
  ppuStack_324 = (ulonglong **)FUN_00418e30();
  uStack_328 = 0x756862;
  FUN_00401280();
  uStack_9c = CONCAT31(uStack_9c._1_3_,10);
  puStack_320 = (ulonglong *)0x75687a;
  uStack_31c._0_4_ = appuStack_200;
  FUN_00987ac0();
  uStack_31c._0_4_ = appuStack_200;
  appuStack_200[0] = std::ios_base::vftable;
  puStack_320 = (ulonglong *)0x756892;
  FUN_00aad52d();
  uStack_9c = 0xffffffff;
  if ((char *)0xf < puStack_2f8) {
    uStack_31c = (double)CONCAT44(uStack_31c._4_4_,puStack_30c);
                    /* WARNING: Subroutine does not return */
    puStack_320 = (ulonglong *)&UNK_007568b1;
    FUN_00aae91b();
  }
  uStack_31c._0_4_ = (undefined ***)0xc;
  puStack_320 = (ulonglong *)0xe13b3c;
  uStack_2e0 = SUB84(uStack_2f0,0);
  ppiStack_2dc = (int **)((ulonglong)uStack_2f0 >> 0x20);
  puStack_2f8 = (uint *)0xf;
  uStack_300 = (double)((ulonglong)uStack_300 & 0xffffffff);
  puStack_30c = (ulonglong *)((uint)puStack_30c & 0xffffff00);
  ppuStack_324 = (ulonglong **)0x7568e1;
  FUN_00409350();
  uStack_31c._0_4_ = (undefined ***)0x3;
  ppuStack_324 = &puStack_30c;
  puStack_320 = (ulonglong *)0x1e3;
  uStack_9c = 0xc;
  uStack_328 = 0x756904;
  uVar3 = FUN_004015b0();
  uStack_31c = (double)((ulonglong)uStack_31c._4_4_ << 0x20);
  puStack_320 = (ulonglong *)0x11;
  ppuStack_324 = (ulonglong **)0xe13bcc;
  uStack_9c = CONCAT31(uStack_9c._1_3_,0xd);
  uStack_330 = (double)CONCAT44(0x75691f,(uint)uStack_330);
  uStack_328 = uVar3;
  FUN_00987d50();
  uStack_330 = (double)CONCAT44(uVar3,0x756925);
  FUN_00401280();
  uStack_ac = CONCAT31(uStack_ac._1_3_,0xc);
  uStack_330 = (double)CONCAT44(appuStack_210,0x75693d);
  FUN_00987ac0();
  appuStack_210[0] = std::ios_base::vftable;
  uStack_330 = (double)CONCAT44(appuStack_210,0x756955);
  FUN_00aad52d();
  uStack_ac = 0xffffffff;
  if ((char *)0xf < ppiStack_308) {
    uStack_330 = (double)CONCAT44(SUB84(uStack_31c,0),&UNK_00756974);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_330 = (double)CONCAT44(0x75697e,(uint)uStack_330);
  FUN_00647f00();
  if (DAT_00f20c18 == (int *)0x0) {
    uStack_330 = 8.49178486709031e-314;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  uStack_330 = (double)CONCAT44(0x7569b4,(uint)uStack_330);
  fVar13 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  uStack_300 = (double)fVar13;
  uStack_330 = 2.5471242277982e-313;
  ppiStack_308 = (int **)0xf;
  puStack_30c = (ulonglong *)0x0;
  uStack_31c = (double)((ulonglong)uStack_31c & 0xffffffffffffff00);
  pcStack_334 = "h\x06";
  FUN_00409350();
  pcStack_334 = (char *)&uStack_31c;
  uStack_330 = 1.39079848131687e-309;
  uStack_ac = 0xe;
  pcStack_338 = (char *)0x7569ff;
  pcVar10 = (char *)FUN_004015b0();
  uStack_330 = 7.90505033345994e-323;
  pcStack_334 = "Device objects <";
  uStack_ac = CONCAT31(uStack_ac._1_3_,0xf);
  puStack_33c = (undefined *)0x756a1a;
  pcStack_338 = pcVar10;
  FUN_00987d50();
  uStack_348 = (double)CONCAT44(puStack_30c,puStack_310) - uStack_300;
  puStack_33c = &DAT_00e07938;
  ppcStack_350 = (char **)0x756a34;
  pcStack_34c = pcVar10;
  uStack_340 = extraout_ECX_00;
  pcStack_34c = (char *)FUN_0048c130();
  ppcStack_350 = (char **)0x756a3d;
  ppcStack_350 = (char **)FUN_00418e30();
  uStack_354 = 0x756a43;
  FUN_00401280();
  uStack_348._0_4_ = &ppuStack_22c;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,0xe);
  pcStack_34c = (char *)0x756a5b;
  FUN_00987ac0();
  uStack_348._0_4_ = &ppuStack_22c;
  ppuStack_22c = std::ios_base::vftable;
  pcStack_34c = (char *)0x756a73;
  FUN_00aad52d();
  uStack_c8 = 0xffffffff;
  if ((char *)0xf < ppuStack_324) {
    uStack_348._0_4_ = (undefined ***)pcStack_338;
                    /* WARNING: Subroutine does not return */
    pcStack_34c = &UNK_00756a96;
    FUN_00aae91b();
  }
  puStack_30c = SUB84(uStack_31c,0);
  ppiStack_308 = (int **)((ulonglong)uStack_31c >> 0x20);
  uStack_348._0_4_ = (undefined ***)0x756ab5;
  (**(code **)in_ECX[0x22])();
  uStack_348._0_4_ = (undefined ***)0xc;
  pcStack_34c = "frontend.cpp";
  ppuStack_324 = (ulonglong **)0xf;
  uStack_328 = 0;
  pcStack_338 = (char *)((uint)pcStack_338 & 0xffffff00);
  ppcStack_350 = (char **)0x756ad6;
  FUN_00409350();
  uStack_348._0_4_ = (undefined ***)0x3;
  ppcStack_350 = &pcStack_338;
  pcStack_34c = (char *)0x1ee;
  uStack_c8 = 0x10;
  uStack_354 = 0x756af5;
  uVar5 = FUN_004015b0();
  uStack_348._0_4_ = (undefined ***)0x0;
  pcStack_34c = (char *)0x8;
  ppcStack_350 = (char **)0xe13bf4;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,0x11);
  uStack_35c = CONCAT44(0x756b10,(undefined4)uStack_35c);
  uStack_354 = uVar5;
  FUN_00987d50();
  uStack_35c = CONCAT44(uVar5,0x756b16);
  FUN_00401280();
  uStack_d8 = CONCAT31(uStack_d8._1_3_,0x10);
  uStack_35c = CONCAT44(&ppuStack_23c,0x756b2e);
  FUN_00987ac0();
  ppuStack_23c = std::ios_base::vftable;
  uStack_35c = CONCAT44(&ppuStack_23c,0x756b46);
  FUN_00aad52d();
  uStack_d8 = 0xffffffff;
  if ((char *)0xf < pcStack_334) {
    uStack_35c = CONCAT44((undefined ***)uStack_348,&UNK_00756b69);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_35c = 0xc00e13c00;
  uStack_300._0_4_ = (undefined ***)0xf;
  pcStack_304 = (char *)0x0;
  uStack_314 = uStack_314 & 0xffffff00;
  uStack_364 = CONCAT44(0x756b8d,(undefined4)uStack_364);
  FUN_00409350();
  uStack_d8 = 0x12;
  uStack_35c = CONCAT44(0x756b9d,(undefined4)uStack_35c);
  iVar4 = FUN_00475500();
  uStack_364 = *(undefined8 *)(iVar4 + 0x6c);
  uStack_35c = *(undefined8 *)(iVar4 + 0x74);
  puStack_368 = auStack_1f0;
  puStack_36c = (undefined *)(DAT_012588e8 + 0xb0c);
  uStack_370 = 0x756bd1;
  FUN_009c5ba0();
  uStack_d8 = CONCAT31(uStack_d8._1_3_,0x14);
  if (0xf < (undefined ***)uStack_300) {
    uStack_35c = CONCAT44(uStack_314,&UNK_00756be9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_300 = (double)CONCAT44(uStack_300._4_4_,0xf);
  pcStack_304 = (char *)0x0;
  uStack_314 = uStack_314 & 0xffffff00;
  uStack_35c = CONCAT44(0x756c0c,(undefined4)uStack_35c);
  iVar4 = (**(code **)(*in_ECX + 0x38))();
  *(int **)(iVar4 + 4) = in_ECX + 0xe0;
  *(int **)(iVar4 + 0x20cc) = in_ECX + 0xe0;
  uStack_35c._4_4_ = 0;
  uStack_35c._0_4_ = 0x756c29;
  (**(code **)(**(int **)(in_ECX[0x7a] + 0xe4) + 0x10))();
  if (DAT_00f20c18 == (int *)0x0) {
    uStack_35c._0_4_ = 4;
    uStack_364 = CONCAT44(0x756c38,(undefined4)uStack_364);
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  uStack_35c._0_4_ = 0x756c5f;
  fVar13 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  uStack_330 = (double)fVar13;
  uStack_35c._0_4_ = 0xc;
  pcStack_338 = (char *)0xf;
  puStack_33c = (undefined *)0x0;
  pcStack_34c = (char *)((uint)pcStack_34c & 0xffffff00);
  uStack_364 = 0xe13b3c00756c84;
  FUN_00409350();
  uStack_35c._0_4_ = 0x10006;
  uStack_364 = CONCAT44(0x1f9,&pcStack_34c);
  uStack_dc = 0x15;
  puStack_368 = (undefined1 *)0x756ca7;
  puVar11 = (undefined1 *)FUN_004015b0();
  uStack_35c = (ulonglong)uStack_35c._4_4_ << 0x20;
  uStack_364 = 0x1200e13c10;
  uStack_dc = 0x16;
  puStack_36c = (undefined *)0x756cc2;
  puStack_368 = puVar11;
  FUN_00987d50();
  uStack_378 = (double)CONCAT44(puStack_33c,uStack_340) - uStack_330;
  puStack_36c = &DAT_00e07938;
  ppuStack_380 = (undefined1 **)0x756cdc;
  pcStack_37c = puVar11;
  pcStack_37c = (char *)FUN_0048c130();
  ppuStack_380 = (undefined1 **)0x756ce5;
  ppuStack_380 = (undefined1 **)FUN_00418e30();
  FUN_00401280();
  uStack_f8 = 0x15;
  pcStack_37c = (char *)0x756d03;
  uStack_378._0_4_ = appuStack_25c;
  FUN_00987ac0();
  uStack_378._0_4_ = appuStack_25c;
  appuStack_25c[0] = std::ios_base::vftable;
  pcStack_37c = (char *)0x756d1b;
  FUN_00aad52d();
  uStack_f8 = 0x14;
  if (0xf < uStack_354) {
    uStack_378 = (double)CONCAT44(uStack_378._4_4_,puStack_368);
                    /* WARNING: Subroutine does not return */
    pcStack_37c = &UNK_00756d37;
    FUN_00aae91b();
  }
  uStack_354 = 0xf;
  uStack_35c = uStack_35c & 0xffffffff;
  puStack_368 = (undefined1 *)((uint)puStack_368 & 0xffffff00);
  if (DAT_00f20c18 == (int *)0x0) {
    uStack_378._0_4_ = (undefined ***)0x4;
    pcStack_37c = (char *)0x756d5b;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  uStack_378._0_4_ = (undefined ***)0x756d82;
  fVar13 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  uStack_348._0_4_ = (undefined ***)((ulonglong)(double)fVar13 >> 0x20);
  uStack_378._0_4_ = (undefined ***)0xc;
  pcStack_37c = "frontend.cpp";
  uStack_354 = 0xf;
  pcStack_34c = (char *)(float)((double)fVar13 - (double)DAT_01258a54);
  uStack_35c = uStack_35c & 0xffffffff;
  puStack_368 = (undefined1 *)((uint)puStack_368 & 0xffffff00);
  ppuStack_380 = (undefined1 **)0x756dc2;
  FUN_00409350();
  uStack_378._0_4_ = (undefined ***)0x10006;
  ppuStack_380 = &puStack_368;
  pcStack_37c = (char *)0x1ff;
  uStack_f8 = 0x17;
  uVar12 = FUN_004015b0();
  uStack_378 = (double)((ulonglong)uStack_378._4_4_ << 0x20);
  pcStack_37c = (char *)0x16;
  ppuStack_380 = (undefined1 **)0xe13c34;
  uStack_f8 = 0x18;
  uVar3 = uVar12;
  FUN_00987d50(uVar12);
  uVar12 = FUN_0048b410(uVar12,(undefined4)uStack_35c);
  FUN_00418e30(uVar12);
  uStack_110 = 0x17;
  FUN_00987ac0(&uStack_274);
  uStack_274 = CONCAT44(uStack_274._4_4_,std::ios_base::vftable);
  FUN_00aad52d(&uStack_274);
  uStack_110 = 0x14;
  if ((undefined *)0xf < puStack_36c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(ppuStack_380);
  }
  iVar4 = (**(code **)(*in_ECX + 0x38))();
  FUN_007fcbd0(iVar4 + 0x20bc);
  (**(code **)(*in_ECX + 0x38))();
  FUN_00819830();
  iVar4 = FUN_00475500();
  *(undefined4 *)(iVar4 + 0xec) = 0xff9a;
  iVar6 = FUN_00475500();
  iVar4 = DAT_012588e8;
  *(undefined4 *)(iVar6 + 0xf0) = 2;
  *(undefined1 *)(iVar4 + 0xd1c) = 0;
  in_ECX[0x1d] = in_ECX[0x1d] | 0xf;
  if ((in_ECX[0x1f] - in_ECX[0x1e] & 0xfffffffcU) == 0) {
    uStack_364 = CONCAT44(uStack_364._4_4_,0xffffffff);
    FUN_004e9b90();
  }
  else {
    *(undefined4 *)in_ECX[0x1e] = 0xffffffff;
  }
  iVar4 = (**(code **)(*in_ECX + 0x38))();
  FUN_007f1550(iVar4 + 0x20bc,iVar4);
  uVar12 = (**(code **)(*in_ECX + 0x38))();
  FUN_00645b30(uVar12);
  iVar4 = DAT_012588e8;
  cVar1 = *(char *)(DAT_012588e8 + 0xd11);
  *(undefined4 *)(DAT_012588e8 + 0xd14) = 0;
  *(undefined4 *)(iVar4 + 0xd18) = 0;
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(in_ECX[0x1d3] + in_ECX[0x1d7] * 4) + 0xc))();
    in_ECX[0x1d7] = 6;
    (**(code **)(**(int **)(in_ECX[0x1d3] + 0x18) + 4))();
    (**(code **)(**(int **)(in_ECX[0x1d3] + in_ECX[0x1d7] * 4) + 8))();
    piVar7 = (int *)FUN_00754640();
    iVar4 = FUN_00aae9af(0x44);
    uStack_364 = CONCAT44(uStack_364._4_4_,iVar4);
    uStack_110 = 0x19;
    if (iVar4 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = FUN_0072b010(iVar4,*(undefined4 *)(*piVar7 + 0xa4));
    }
    uStack_110 = 0x14;
    iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))(uVar12);
  }
  iVar4 = (**(code **)(*in_ECX + 0x38))();
  *(undefined4 *)(iVar4 + 8) = 0;
  FUN_007e1190();
  puStack_36c = (undefined *)0xf;
  uStack_370 = 0;
  ppuStack_380 = (undefined1 **)((uint)ppuStack_380 & 0xffffff00);
  FUN_00409350("rightClickMenu",0xe);
  uStack_110 = 0x1a;
  iVar4 = (**(code **)(*(int *)in_ECX[0x15] + 0x28))(&ppuStack_380);
  uStack_114 = 0x14;
  in_ECX[0x23] = iVar4;
  if (0xf < uStack_370) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar3);
  }
  (**(code **)(*(int *)(in_ECX[0x23] + 0x18) + 0x38))();
  puStack_320 = (ulonglong *)0xf;
  ppuStack_324 = (ulonglong **)0x0;
  pcStack_334 = (char *)((uint)pcStack_334 & 0xffffff00);
  FUN_00409350("frontend.cpp",0xc);
  uStack_114 = 0x1b;
  uVar3 = FUN_004015b0(&pcStack_334,0x22c,3);
  uStack_114 = 0x1c;
  FUN_00987d50(uVar3,"done frontend",0xd,0);
  FUN_00401280(uVar3);
  uStack_124 = 0x1b;
  FUN_00987ac0(appuStack_1a8);
  appuStack_1a8[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_1a8);
  if (0xf < (uint)uStack_330) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_348._4_4_);
  }
  if (0xf < uStack_228) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(ppuStack_23c);
  }
  ExceptionList = pvStack_12c;
  return;
}

