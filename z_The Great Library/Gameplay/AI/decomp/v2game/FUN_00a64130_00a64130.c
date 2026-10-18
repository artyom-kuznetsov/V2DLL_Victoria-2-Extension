// FUN_00a64130 @ 00a64130 body=[[00a64130, 00a641b5] [00a641b9, 00a64296] [00a642a0, 00a643fb] [00a643ff, 00a6453a] [00a6453e, 00a6468f] [00a64693, 00a648b5] [00a648b9, 00a649de] [00a649e2, 00a64a12] [00a64a16, 00a64b16] [00a64b1a, 00a64c1a] [00a64c1e, 00a64d48] [00a64d4c, 00a64d7c] [00a64d80, 00a64e86] [00a64e8a, 00a64f45] [00a64f49, 00a64f7e] [00a64f84, 00a6509d] [00a650a1, 00a651d5]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00a64130(double param_1)

{
  char cVar1;
  hostent *phVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  undefined ***pppuVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  DWORD DVar13;
  int *in_ECX;
  undefined ***unaff_EBX;
  bool bVar14;
  float10 fVar15;
  uint *puStack_65c;
  char *pcStack_658;
  undefined ***pppuStack_654;
  int *piStack_650;
  undefined4 uStack_64c;
  uint uStack_648;
  undefined4 uStack_644;
  uint **ppuStack_640;
  char *pcStack_63c;
  undefined ***pppuStack_638;
  int *piStack_634;
  undefined4 uStack_630;
  uint uStack_62c;
  undefined4 uStack_628;
  char *pcStack_624;
  char *pcStack_620;
  undefined ***pppuStack_61c;
  undefined **ppuStack_618;
  undefined4 *puStack_614;
  uint *puStack_610;
  undefined ***pppuStack_60c;
  undefined ***pppuStack_608;
  undefined ***pppuStack_604;
  undefined ***pppuStack_600;
  uint *puStack_5fc;
  uint *puStack_5f8;
  undefined4 uStack_5e0;
  int *local_5dc;
  undefined8 local_5d8;
  undefined4 uStack_5d0;
  uint auStack_5cc [2];
  undefined4 *puStack_5c4;
  undefined4 uStack_5c0;
  uint uStack_5bc;
  uint uStack_5b8;
  int *local_5ac;
  uint local_5a8;
  uint uStack_5a4;
  uint auStack_5a0 [2];
  undefined4 local_598;
  uint local_594;
  undefined4 uStack_590;
  uint auStack_58c [2];
  undefined **ppuStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  uint uStack_578;
  undefined4 uStack_574;
  undefined1 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  int iStack_564;
  int iStack_560;
  undefined4 auStack_55c [2];
  uint uStack_554;
  uint uStack_54c;
  uint uStack_548;
  int iStack_544;
  uint auStack_540 [2];
  char cStack_538;
  int iStack_534;
  int iStack_530;
  undefined **ppuStack_510;
  undefined4 uStack_50c;
  double dStack_508;
  undefined **appuStack_4f4 [5];
  undefined **appuStack_4e0 [7];
  undefined **appuStack_4c4 [7];
  undefined **appuStack_4a8 [5];
  undefined **appuStack_494 [5];
  undefined **ppuStack_480;
  undefined **ppuStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined1 uStack_43c;
  undefined1 uStack_438;
  undefined4 *puStack_430;
  undefined1 uStack_120;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_9c;
  undefined1 uStack_80;
  undefined1 uStack_6c;
  undefined **ppuStack_60;
  undefined1 uStack_50;
  undefined1 uStack_34;
  undefined4 uStack_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b54a5a;
  pvStack_14 = ExceptionList;
  puStack_5f8 = (uint *)&DAT_00ded94d;
  local_594 = 0xf;
  local_598 = 0;
  local_5a8 = local_5a8 & 0xffffff00;
  puStack_5fc = (uint *)0xa6417b;
  ExceptionList = &pvStack_14;
  local_5dc = in_ECX;
  FUN_00409350();
  piVar5 = in_ECX + 0x33;
  local_c = 0;
  cVar1 = FUN_00416db0();
  uStack_5e0 = CONCAT13(cVar1 == '\0',(undefined3)uStack_5e0);
  local_c = 0xffffffff;
  if (0xf < local_594) {
                    /* WARNING: Subroutine does not return */
    puStack_5f8 = (uint *)&UNK_00a641b6;
    FUN_00aae91b();
  }
  if (cVar1 == '\0') {
    if (0xf < (uint)in_ECX[0x38]) {
      piVar5 = (int *)*piVar5;
    }
    puStack_5f8 = (uint *)0xa641ce;
    phVar2 = gethostbyname((char *)piVar5);
    if ((phVar2 == (hostent *)0x0) || (phVar2->h_addrtype != 2)) {
      puStack_5f8 = (uint *)0xa641ed;
      uVar3 = inet_addr((char *)piVar5);
      if (uVar3 != 0xffffffff) {
        local_5d8 = CONCAT44(local_5d8._4_4_,uVar3);
      }
    }
    else {
      local_5d8 = CONCAT44(local_5d8._4_4_,*(undefined4 *)*phVar2->h_addr_list);
    }
  }
  else {
    local_5d8 = CONCAT44(local_5d8._4_4_,*(undefined4 *)(in_ECX[7] + 0x40));
  }
  local_5d8._0_6_ = CONCAT24((short)in_ECX[5],(int)local_5d8);
  puStack_5f8 = (uint *)0xa64218;
  iVar4 = FUN_00a8aaf0();
  piVar5 = DAT_00f20c18;
  in_ECX[0x3a] = iVar4;
  local_5d8 = 0;
  if (piVar5 == (int *)0x0) {
    puStack_5f8 = (uint *)0xa6423c;
    piVar5 = (int *)FUN_00aae9af();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
      DAT_00f20c18 = piVar5;
    }
    else {
      *piVar5 = (int)&PTR_FUN_00e38b28;
      DAT_00f20c18 = piVar5;
    }
  }
  piVar5 = (int *)(**(code **)(*piVar5 + 4))();
  local_5ac = piVar5;
  (**(code **)(*piVar5 + 4))();
  dStack_508 = param_1 * 5.0;
  fVar15 = (float10)(**(code **)(*piVar5 + 0x14))();
  if (fVar15 < (float10)dStack_508) {
    do {
      puStack_5fc = (uint *)in_ECX[6];
      puStack_5f8 = auStack_540;
      pppuStack_600 = (undefined ***)0xa642b3;
      iVar4 = FUN_00a89d00();
      if (0 < iVar4) {
        do {
          iVar4 = iStack_530;
          if (auStack_540[0] == 3) {
            if (cStack_538 == '\x01') {
              iVar7 = **(int **)(iStack_530 + 8);
              if (iVar7 == 0x15) {
                puStack_5f8 = (uint *)0xe42170;
                local_594 = 0xf;
                local_598 = 0;
                local_5a8 = local_5a8 & 0xffffff00;
                puStack_5fc = (uint *)0xa6431c;
                FUN_00409350();
                puStack_5fc = &local_5a8;
                puStack_5f8 = (uint *)0x571;
                local_c = 1;
                pppuStack_600 = (undefined ***)0xa64342;
                pppuVar6 = (undefined ***)FUN_004015b0();
                puStack_5f8 = (uint *)0x18;
                puStack_5fc = (uint *)0xe423fc;
                local_c = CONCAT31(local_c._1_3_,2);
                pppuStack_604 = (undefined ***)0xa6435d;
                pppuStack_600 = pppuVar6;
                FUN_00987d50();
                pppuStack_608 = (undefined ***)0xa64363;
                pppuStack_604 = pppuVar6;
                FUN_00408be0();
                puStack_5c4 = (undefined4 *)0x0;
                if ((((*pppuVar6)[1] + 0xc)[(int)pppuVar6] & 6) == 0) {
                  pppuStack_608 = (undefined ***)0xa64380;
                  iVar7 = (**(code **)(**(int **)((*pppuVar6)[1] + 0x38 + (int)pppuVar6) + 0x34))();
                  if (iVar7 == -1) {
                    puStack_5c4 = (undefined4 *)0x4;
                  }
                }
                if (puStack_5c4 != (undefined4 *)0x0) {
                  pppuStack_60c =
                       (undefined ***)
                       (*(uint *)((int)pppuVar6 + (int)((*pppuVar6)[1] + 0xc)) | (uint)puStack_5c4);
                  if (*(int *)((int)pppuVar6 + (int)((*pppuVar6)[1] + 0x38)) == 0) {
                    pppuStack_60c = (undefined ***)((uint)pppuStack_60c | 4);
                  }
                  pppuStack_608 = (undefined ***)0x0;
                  puStack_610 = (uint *)0xa643b0;
                  FUN_00401120();
                }
                pppuStack_608 = appuStack_494;
                uStack_20 = CONCAT31(uStack_20._1_3_,1);
                pppuStack_60c = (undefined ***)0xa643c5;
                FUN_00987ac0();
                pppuStack_608 = appuStack_494;
                appuStack_494[0] = std::ios_base::vftable;
                pppuStack_60c = (undefined ***)0xa643dd;
                FUN_00aad52d();
                uStack_20 = 0xffffffff;
                if (0xf < local_5a8) {
                  pppuStack_608 = (undefined ***)uStack_5bc;
                    /* WARNING: Subroutine does not return */
                  pppuStack_60c = (undefined ***)&UNK_00a643fc;
                  FUN_00aae91b();
                }
                pppuStack_608 = (undefined ***)0x3c;
                pppuStack_60c = (undefined ***)0xa64406;
                puVar8 = (undefined4 *)FUN_00aae9af();
                puStack_5c4 = puVar8;
                if (puVar8 == (undefined4 *)0x0) {
                  puVar8 = (undefined4 *)0x0;
                }
                else {
                  pppuStack_608 = (undefined ***)(*(int *)(iVar4 + 0xc) + -8);
                  *puVar8 = 0;
                  puVar8[1] = 0;
                  puVar8[2] = 0;
                  puVar8[4] = 0;
                  puVar8[5] = 0;
                  puVar8[6] = 0;
                  puVar8[0xd] = 0xf;
                  puVar8[0xc] = 0;
                  *(undefined1 *)(puVar8 + 8) = 0;
                  uStack_20 = 6;
                  pppuStack_60c = (undefined ***)0xa64450;
                  FUN_009d7290();
                }
                uStack_20 = 0xffffffff;
                puStack_610 = (uint *)(*(int *)(iVar4 + 8) + 8);
                pppuStack_608 = (undefined ***)uStack_5c0;
                pppuStack_60c = (undefined ***)((int)puStack_610 + *(int *)(iVar4 + 0xc) + -8);
                puStack_614 = (undefined4 *)puVar8[1];
                ppuStack_618 = (undefined **)0xa6447d;
                FUN_009d7490();
                pppuStack_608 = *(undefined ****)(iVar4 + 8);
                pppuStack_60c = (undefined ***)0xa64487;
                (*(code *)PTR__free_00f071fc)();
                pppuStack_608 = (undefined ***)iVar4;
                pppuStack_60c = (undefined ***)0xa64491;
                (*(code *)PTR__free_00f071fc)();
                pppuStack_608 = (undefined ***)0x0;
                pppuStack_60c = (undefined ***)&DAT_00ded94d;
                local_5a8 = 0xf;
                local_5ac = (int *)0x0;
                uStack_5bc = uStack_5bc & 0xffffff00;
                puStack_610 = (uint *)0xa644b4;
                FUN_00409350();
                uStack_580 = 0x18d;
                ppuStack_584 = CVersion::vftable;
                uStack_57c = 0;
                auStack_55c[0] = 0xf;
                iStack_560 = 0;
                uStack_570 = 0;
                pppuStack_608 = (undefined ***)0xffffffff;
                pppuStack_60c = (undefined ***)0x0;
                puStack_610 = &uStack_5bc;
                uStack_20._0_1_ = 8;
                uStack_20._1_3_ = 0;
                puStack_614 = (undefined4 *)0xa6450d;
                FUN_00408ed0();
                uStack_574 = 0;
                uStack_578 = 0;
                uStack_57c = 0;
                uStack_20._0_1_ = 10;
                if (0xf < local_5a8) {
                  pppuStack_608 = (undefined ***)uStack_5bc;
                    /* WARNING: Subroutine does not return */
                  pppuStack_60c = (undefined ***)&UNK_00a6453b;
                  FUN_00aae91b();
                }
                pppuStack_608 = (undefined ***)0xf;
                pppuStack_60c = (undefined ***)0xded978;
                local_5a8 = 0xf;
                local_5ac = (int *)0x0;
                uStack_5bc = uStack_5bc & 0xffffff00;
                auStack_58c[0] = 0xf;
                uStack_590 = 0;
                auStack_5a0[0] = auStack_5a0[0] & 0xffffff00;
                puStack_610 = (uint *)0xa6456d;
                FUN_00409350();
                pppuStack_608 = (undefined ***)0x114;
                uStack_20._0_1_ = 0xb;
                pppuStack_60c = (undefined ***)0xa6457f;
                puVar9 = (undefined4 *)FUN_00aae9af();
                uStack_20._0_1_ = 0xc;
                puStack_5c4 = puVar9;
                if (puVar9 == (undefined4 *)0x0) {
                  puStack_430 = (undefined4 *)0x0;
                }
                else {
                  pppuStack_608 = (undefined ***)0x3c;
                  pppuStack_60c = (undefined ***)0xa6459b;
                  ppuStack_510 = (undefined **)FUN_00aae9af();
                  uStack_20._0_1_ = 0xd;
                  if (ppuStack_510 == (undefined **)0x0) {
                    uVar10 = 0;
                  }
                  else {
                    pppuStack_608 = (undefined ***)0x0;
                    pppuStack_60c = (undefined ***)0x0;
                    puStack_610 = (uint *)0x0;
                    pppuStack_61c = (undefined ***)0xa645bb;
                    ppuStack_618 = ppuStack_510;
                    puStack_614 = puVar8;
                    uVar10 = FUN_009d5450();
                  }
                  uStack_20._0_1_ = 0xc;
                  *puVar9 = &PTR_FUN_00e37c30;
                  puVar9[1] = uVar10;
                  *(undefined2 *)(puVar9 + 0x44) = 0x100;
                  pppuStack_608 = (undefined ***)0xa645de;
                  FUN_00990100();
                  *puVar9 = &PTR_FUN_00e37c48;
                  puStack_430 = puVar9;
                }
                ppuStack_44c = &PTR_FUN_00e38524;
                uStack_448 = 0;
                uStack_444 = 0;
                uStack_440 = 0;
                uStack_43c = 0;
                pppuStack_608 = (undefined ***)0xffffffff;
                uStack_20._0_1_ = 0xe;
                pppuStack_60c = (undefined ***)0x0;
                puStack_610 = auStack_5a0;
                uStack_438 = 0;
                uStack_10c = 0xf;
                uStack_110 = 0;
                uStack_120 = 0;
                puStack_614 = (undefined4 *)0xa64653;
                FUN_00408ed0();
                uStack_104 = 0;
                uStack_100 = 0;
                uStack_fc = 0;
                uStack_f4 = 1;
                uStack_f0 = 0;
                uStack_20 = CONCAT31(uStack_20._1_3_,0x10);
                if (0xf < auStack_58c[0]) {
                  pppuStack_608 = (undefined ***)auStack_5a0[0];
                    /* WARNING: Subroutine does not return */
                  pppuStack_60c = (undefined ***)&UNK_00a64690;
                  FUN_00aae91b();
                }
                pppuStack_608 = &ppuStack_44c;
                auStack_58c[0] = 0xf;
                uStack_590 = 0;
                auStack_5a0[0] = auStack_5a0[0] & 0xffffff00;
                pppuStack_60c = (undefined ***)0xa646ac;
                FUN_009a1440();
                pppuStack_608 = &ppuStack_44c;
                pppuStack_60c = (undefined ***)0xa646c7;
                (*(code *)ppuStack_584[3])();
                iVar4 = local_5dc[7];
                if ((iStack_564 == *(int *)(iVar4 + 0x1cc)) &&
                   (iStack_560 == *(int *)(iVar4 + 0x1d0))) {
                  uVar11 = *(uint *)(iVar4 + 0x1e4);
                  puStack_5f8 = (uint *)0xa6473b;
                  iVar7 = FUN_00414bd0();
                  bVar14 = false;
                  if (iVar7 == 0) {
                    if (uStack_54c < uVar11) {
                      uVar11 = 0xffffffff;
                    }
                    else {
                      uVar11 = (uint)(uStack_54c != uVar11);
                    }
                    bVar14 = uVar11 == 0;
                  }
                  if (!bVar14) goto LAB_00a6476d;
                }
                else {
LAB_00a6476d:
                  *(undefined4 *)(iVar4 + 0x2c) = 0xe;
                  iVar4 = local_5dc[7];
                  *(undefined4 *)(iVar4 + 500) = uStack_56c;
                  *(undefined4 *)(iVar4 + 0x1f8) = uStack_568;
                  *(int *)(iVar4 + 0x1fc) = iStack_564;
                  puStack_5f8 = (uint *)0x0;
                  puStack_5fc = auStack_55c;
                  *(int *)(iVar4 + 0x200) = iStack_560;
                  pppuStack_600 = (undefined ***)0xa647c5;
                  FUN_00408ed0();
                  puStack_5f8 = (uint *)0xe42170;
                  uStack_5b8 = 0xf;
                  uStack_5bc = 0;
                  auStack_5cc[0] = auStack_5cc[0] & 0xffffff00;
                  puStack_5fc = (uint *)0xa647e5;
                  FUN_00409350();
                  puStack_5fc = auStack_5cc;
                  puStack_5f8 = (uint *)0x581;
                  local_c._0_1_ = 0x11;
                  pppuStack_600 = (undefined ***)0xa64808;
                  pppuVar6 = (undefined ***)FUN_004015b0();
                  uVar10 = 0;
                  puStack_5f8 = (uint *)0xf;
                  puStack_5fc = (uint *)0xe42418;
                  local_c = CONCAT31(local_c._1_3_,0x12);
                  pppuStack_604 = (undefined ***)0xa64823;
                  pppuStack_600 = pppuVar6;
                  FUN_00987d50();
                  pppuStack_608 = (undefined ***)0xa64829;
                  pppuStack_604 = pppuVar6;
                  FUN_00408be0();
                  uVar11 = 0;
                  if ((((*pppuVar6)[1] + 0xc)[(int)pppuVar6] & 6) == 0) {
                    pppuStack_608 = (undefined ***)0xa64844;
                    iVar4 = (**(code **)(**(int **)((*pppuVar6)[1] + 0x38 + (int)pppuVar6) + 0x34))
                                      ();
                    if (iVar4 == -1) {
                      uVar11 = 4;
                    }
                  }
                  if (uVar11 != 0) {
                    pppuStack_60c =
                         (undefined ***)
                         (*(uint *)((int)pppuVar6 + (int)((*pppuVar6)[1] + 0xc)) | uVar11);
                    if (*(int *)((int)pppuVar6 + (int)((*pppuVar6)[1] + 0x38)) == 0) {
                      pppuStack_60c = (undefined ***)((uint)pppuStack_60c | 4);
                    }
                    pppuStack_608 = (undefined ***)0x0;
                    puStack_610 = (uint *)0xa6486d;
                    FUN_00401120();
                  }
                  pppuStack_608 = appuStack_494;
                  uStack_20._0_1_ = 0x11;
                  pppuStack_60c = (undefined ***)0xa64882;
                  FUN_00987ac0();
                  pppuStack_608 = appuStack_494;
                  appuStack_494[0] = std::ios_base::vftable;
                  pppuStack_60c = (undefined ***)0xa6489a;
                  FUN_00aad52d();
                  uStack_20._0_1_ = 0x10;
                  if (0xf < auStack_5cc[0]) {
                    pppuStack_608 = (undefined ***)uStack_5e0;
                    /* WARNING: Subroutine does not return */
                    pppuStack_60c = (undefined ***)&UNK_00a648b6;
                    FUN_00aae91b();
                  }
                  pppuStack_608 = (undefined ***)0xa;
                  pppuStack_60c = (undefined ***)0xe42170;
                  auStack_5cc[0] = 0xf;
                  uStack_5d0 = 0;
                  uStack_5e0 = uStack_5e0 & 0xffffff00;
                  puStack_610 = (uint *)0xa648d9;
                  FUN_00409350();
                  pppuStack_608 = (undefined ***)auStack_540;
                  pppuStack_60c = &ppuStack_584;
                  uStack_20._0_1_ = 0x13;
                  puStack_610 = (uint *)0xa648f6;
                  puVar8 = (undefined4 *)FUN_009da9a0();
                  pppuStack_608 = (undefined ***)0x301;
                  puStack_610 = &uStack_5e0;
                  pppuStack_60c = (undefined ***)0x582;
                  uStack_20._0_1_ = 0x14;
                  puStack_614 = (undefined4 *)0xa6491b;
                  uVar12 = FUN_004015b0();
                  pppuStack_608 = (undefined ***)0x0;
                  pppuStack_60c = (undefined ***)0xe;
                  puStack_610 = (uint *)0xe42428;
                  uStack_20 = CONCAT31(uStack_20._1_3_,0x15);
                  ppuStack_618 = (undefined **)0xa64936;
                  puStack_614 = (undefined4 *)uVar12;
                  FUN_00987d50();
                  if (0xf < (uint)puVar8[5]) {
                    puVar8 = (undefined4 *)*puVar8;
                  }
                  pcStack_620 = (char *)0xa64945;
                  pppuStack_61c = (undefined ***)uVar12;
                  ppuStack_618 = (undefined **)puVar8;
                  piVar5 = (int *)FUN_00418e30();
                  pppuStack_61c = (undefined ***)0xa64950;
                  ppuStack_618 = (undefined **)piVar5;
                  FUN_00408be0();
                  uVar11 = 0;
                  if ((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) {
                    pppuStack_61c = (undefined ***)0xa6496b;
                    iVar4 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) +
                                        0x34))();
                    if (iVar4 == -1) {
                      uVar11 = 4;
                    }
                  }
                  if (uVar11 != 0) {
                    pcStack_620 = (char *)(*(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) |
                                          uVar11);
                    if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
                      pcStack_620 = (char *)((uint)pcStack_620 | 4);
                    }
                    pppuStack_61c = (undefined ***)0x0;
                    pcStack_624 = (char *)0xa64994;
                    FUN_00401120();
                  }
                  pppuStack_61c = appuStack_4a8;
                  uStack_34 = 0x14;
                  pcStack_620 = (char *)0xa649a9;
                  FUN_00987ac0();
                  pppuStack_61c = appuStack_4a8;
                  appuStack_4a8[0] = std::ios_base::vftable;
                  pcStack_620 = (char *)0xa649c1;
                  FUN_00aad52d();
                  pppuStack_61c = (undefined ***)uVar10;
                  if (0xf < auStack_540[0]) {
                    pppuStack_61c = (undefined ***)uStack_554;
                    /* WARNING: Subroutine does not return */
                    pcStack_620 = &UNK_00a649df;
                    FUN_00aae91b();
                  }
                  uStack_34 = 0x10;
                  auStack_540[0] = 0xf;
                  iStack_544 = 0;
                  uStack_554 = uStack_554 & 0xffffff00;
                  if (0xf < uStack_5e0) {
                    /* WARNING: Subroutine does not return */
                    pcStack_620 = &UNK_00a64a13;
                    FUN_00aae91b();
                  }
                  pppuStack_61c = (undefined ***)0xa;
                  pcStack_620 = "server.cpp";
                  uStack_5e0 = 0xf;
                  pcStack_624 = "h\x01\x03";
                  FUN_00409350();
                  pppuStack_61c = (undefined ***)0x301;
                  pcStack_624 = &stack0xfffffa0c;
                  pcStack_620 = (char *)0x583;
                  uStack_34 = 0x16;
                  uStack_628 = 0xa64a59;
                  uVar10 = FUN_004015b0();
                  uVar11 = auStack_58c[0];
                  pppuStack_61c = (undefined ***)0x0;
                  pcStack_620 = (char *)0x5;
                  pcStack_624 = "exe: ";
                  uStack_34 = 0x17;
                  uStack_62c = 0xa64a7b;
                  uStack_628 = uVar10;
                  FUN_00987d50();
                  uStack_62c = uVar11;
                  piStack_634 = (int *)0xa64a82;
                  uStack_630 = uVar10;
                  piVar5 = (int *)FUN_00455470();
                  pppuStack_638 = (undefined ***)0xa64a8a;
                  piStack_634 = piVar5;
                  FUN_00408be0();
                  uVar11 = 0;
                  if ((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) {
                    pppuStack_638 = (undefined ***)0xa64aa5;
                    iVar4 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) +
                                        0x34))();
                    if (iVar4 == -1) {
                      uVar11 = 4;
                    }
                  }
                  if (uVar11 != 0) {
                    pcStack_63c = (char *)(*(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) |
                                          uVar11);
                    if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
                      pcStack_63c = (char *)((uint)pcStack_63c | 4);
                    }
                    pppuStack_638 = (undefined ***)0x0;
                    ppuStack_640 = (uint **)0xa64ace;
                    FUN_00401120();
                  }
                  pppuStack_638 = appuStack_4c4;
                  uStack_50 = 0x16;
                  pcStack_63c = (char *)0xa64ae3;
                  FUN_00987ac0();
                  pppuStack_638 = appuStack_4c4;
                  appuStack_4c4[0] = std::ios_base::vftable;
                  pcStack_63c = (char *)0xa64afb;
                  FUN_00aad52d();
                  uStack_50 = 0x10;
                  if ((char *)0xf < puStack_5fc) {
                    pppuStack_638 = (undefined ***)puStack_610;
                    /* WARNING: Subroutine does not return */
                    pcStack_63c = &UNK_00a64b17;
                    FUN_00aae91b();
                  }
                  pppuStack_638 = (undefined ***)0xa;
                  pcStack_63c = "server.cpp";
                  puStack_5fc = (uint *)0xf;
                  pppuStack_600 = (undefined ***)0x0;
                  puStack_610 = (uint *)((uint)puStack_610 & 0xffffff00);
                  ppuStack_640 = (uint **)0xa64b3a;
                  FUN_00409350();
                  pppuStack_638 = (undefined ***)0x301;
                  ppuStack_640 = &puStack_610;
                  pcStack_63c = (char *)0x584;
                  uStack_50 = 0x18;
                  uStack_644 = 0xa64b5d;
                  uVar10 = FUN_004015b0();
                  uVar11 = uStack_5a4;
                  pppuStack_638 = (undefined ***)0x0;
                  pcStack_63c = (char *)0x6;
                  ppuStack_640 = (uint **)0xe42440;
                  uStack_50 = 0x19;
                  uStack_648 = 0xa64b7f;
                  uStack_644 = uVar10;
                  FUN_00987d50();
                  uStack_648 = uVar11;
                  piStack_650 = (int *)0xa64b86;
                  uStack_64c = uVar10;
                  piVar5 = (int *)FUN_00455470();
                  pppuStack_654 = (undefined ***)0xa64b8e;
                  piStack_650 = piVar5;
                  FUN_00408be0();
                  uVar11 = 0;
                  if ((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) {
                    pppuStack_654 = (undefined ***)0xa64ba9;
                    iVar4 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) +
                                        0x34))();
                    if (iVar4 == -1) {
                      uVar11 = 4;
                    }
                  }
                  if (uVar11 != 0) {
                    pcStack_658 = (char *)(*(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) |
                                          uVar11);
                    if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
                      pcStack_658 = (char *)((uint)pcStack_658 | 4);
                    }
                    pppuStack_654 = (undefined ***)0x0;
                    puStack_65c = (uint *)0xa64bd2;
                    FUN_00401120();
                  }
                  pppuStack_654 = appuStack_4e0;
                  uStack_6c = 0x18;
                  pcStack_658 = (char *)0xa64be7;
                  FUN_00987ac0();
                  pppuStack_654 = appuStack_4e0;
                  appuStack_4e0[0] = std::ios_base::vftable;
                  pcStack_658 = (char *)0xa64bff;
                  FUN_00aad52d();
                  uStack_6c = 0x10;
                  if ((int *)0xf < ppuStack_618) {
                    pppuStack_654 = (undefined ***)uStack_62c;
                    /* WARNING: Subroutine does not return */
                    pcStack_658 = &UNK_00a64c1b;
                    FUN_00aae91b();
                  }
                  pppuStack_654 = (undefined ***)0xa;
                  pcStack_658 = "server.cpp";
                  ppuStack_618 = (undefined **)0xf;
                  pppuStack_61c = (undefined ***)0x0;
                  uStack_62c = uStack_62c & 0xffffff00;
                  puStack_65c = (uint *)0xa64c3e;
                  FUN_00409350();
                  uStack_6c = 0x1a;
                  pppuStack_654 = (undefined ***)auStack_58c;
                  pcStack_658 = (char *)(*(int *)((int)pcStack_63c + 0x1c) + 0x1c0);
                  puStack_65c = (uint *)0xa64c60;
                  puVar8 = (undefined4 *)FUN_009da9a0();
                  pppuStack_654 = (undefined ***)0x301;
                  puStack_65c = &uStack_62c;
                  pcStack_658 = (char *)0x585;
                  uStack_6c = 0x1b;
                  uVar10 = FUN_004015b0();
                  pppuStack_654 = (undefined ***)0x0;
                  pcStack_658 = (char *)0xb;
                  puStack_65c = (uint *)0xe42448;
                  uStack_6c = 0x1c;
                  FUN_00987d50(uVar10);
                  if (0xf < (uint)puVar8[5]) {
                    puVar8 = (undefined4 *)*puVar8;
                  }
                  piVar5 = (int *)FUN_00418e30(uVar10,puVar8);
                  FUN_00408be0(piVar5);
                  uVar11 = 0;
                  if (((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) &&
                     (iVar4 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) +
                                          0x34))(), iVar4 == -1)) {
                    uVar11 = 4;
                  }
                  if (uVar11 != 0) {
                    uVar11 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar11;
                    if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
                      uVar11 = uVar11 | 4;
                    }
                    FUN_00401120(uVar11,0);
                  }
                  uStack_80 = 0x1b;
                  FUN_00987ac0(appuStack_4f4);
                  appuStack_4f4[0] = std::ios_base::vftable;
                  FUN_00aad52d(appuStack_4f4);
                  if (0xf < auStack_58c[0]) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(auStack_5a0[0]);
                  }
                  uStack_80 = 0x10;
                  auStack_58c[0] = 0xf;
                  uStack_590 = 0;
                  auStack_5a0[0] = auStack_5a0[0] & 0xffffff00;
                  if (0xf < uStack_62c) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(ppuStack_640);
                  }
                  uStack_62c = 0xf;
                  uStack_630 = 0;
                  ppuStack_640 = (uint **)((uint)ppuStack_640 & 0xffffff00);
                  FUN_00409350("server.cpp",10);
                  uStack_80 = 0x1d;
                  uVar12 = FUN_004015b0(&ppuStack_640,0x586,0x301);
                  iVar4 = 5;
                  uStack_80 = 0x1e;
                  uVar10 = *(undefined4 *)(piStack_650[7] + 0x1cc);
                  FUN_00987d50(uVar12,"exe: ",5,0);
                  piVar5 = (int *)FUN_00455470(uVar12,uVar10);
                  FUN_00408be0(piVar5);
                  uVar11 = 0;
                  if (((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) &&
                     (iVar7 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) +
                                          0x34))(), iVar7 == -1)) {
                    uVar11 = 4;
                  }
                  if (uVar11 != 0) {
                    uVar11 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar11;
                    if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
                      uVar11 = uVar11 | 4;
                    }
                    FUN_00401120(uVar11,0);
                  }
                  uStack_9c = 0x1d;
                  FUN_00987ac0(&ppuStack_510);
                  ppuStack_510 = std::ios_base::vftable;
                  FUN_00aad52d(&ppuStack_510);
                  uStack_9c = 0x10;
                  if (0xf < uStack_648) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(puStack_65c);
                  }
                  uStack_648 = 0xf;
                  uStack_64c = 0;
                  puStack_65c = (uint *)((uint)puStack_65c & 0xffffff00);
                  FUN_00409350("server.cpp",10);
                  uStack_9c = 0x1f;
                  uVar12 = FUN_004015b0(&puStack_65c,0x587,0x301);
                  uStack_9c = 0x20;
                  uVar10 = *(undefined4 *)(*(int *)(iVar4 + 0x1c) + 0x1d0);
                  FUN_00987d50(uVar12,"file: ",6,0);
                  FUN_00455470(uVar12,uVar10);
                  puStack_5f8 = (uint *)0xa64f02;
                  FUN_00401280();
                  local_c = CONCAT31(local_c._1_3_,0x1f);
                  puStack_5f8 = (uint *)0xa64f1a;
                  FUN_00987ac0();
                  ppuStack_480 = std::ios_base::vftable;
                  puStack_5f8 = (uint *)0xa64f32;
                  FUN_00aad52d();
                  if (0xf < uStack_5b8) {
                    /* WARNING: Subroutine does not return */
                    puStack_5f8 = (uint *)&UNK_00a64f46;
                    FUN_00aae91b();
                  }
                }
                local_c = CONCAT31(local_c._1_3_,10);
                FUN_009a0dc0();
                local_c = 0xffffffff;
                if (0xf < uStack_548) {
                    /* WARNING: Subroutine does not return */
                  puStack_5f8 = (uint *)&UNK_00a64f7f;
                  FUN_00aae91b();
                }
              }
              else if (iVar7 == 0x11) {
                local_5d8 = (ulonglong)(uint)(*(int **)(iStack_530 + 8))[1];
                puStack_5f8 = (uint *)0xa64f9f;
                (*(code *)PTR__free_00f071fc)();
                puStack_5f8 = (uint *)0xa64fa9;
                (*(code *)PTR__free_00f071fc)();
              }
            }
          }
          else if (auStack_540[0] == 1) {
            puStack_5f8 = (uint *)0x0;
            puStack_5fc = (uint *)0x8;
            pppuStack_600 = &ppuStack_510;
            ppuStack_510 = (undefined **)0xd;
            uStack_50c = 0;
            pppuStack_604 = (undefined ***)0xa64fda;
            (**(code **)(*in_ECX + 0x14))();
          }
          puStack_5f8 = (uint *)0xe42170;
          uStack_578 = 0xf;
          uStack_57c = 0;
          auStack_58c[0] = auStack_58c[0] & 0xffffff00;
          puStack_5fc = (uint *)0xa64ffd;
          FUN_00409350();
          puStack_5fc = auStack_58c;
          puStack_5f8 = (uint *)0x596;
          local_c = 0x21;
          pppuStack_600 = (undefined ***)0xa65023;
          pppuVar6 = (undefined ***)FUN_004015b0();
          puStack_5f8 = (uint *)0xe;
          puStack_5fc = (uint *)0xe42454;
          local_c._0_1_ = 0x22;
          pppuStack_604 = (undefined ***)0xa6503e;
          pppuStack_600 = pppuVar6;
          FUN_00987d50();
          pppuStack_60c = (undefined ***)0xa65049;
          pppuStack_608 = pppuVar6;
          pppuStack_604 = unaff_EBX;
          FUN_00447240();
          puStack_5f8 = (uint *)0xa6504f;
          FUN_00401280();
          local_c = CONCAT31(local_c._1_3_,0x21);
          puStack_5f8 = (uint *)0xa65067;
          FUN_00987ac0();
          ppuStack_60 = std::ios_base::vftable;
          puStack_5f8 = (uint *)0xa6507f;
          FUN_00aad52d();
          in_ECX = local_5dc;
          local_c = 0xffffffff;
          if (0xf < uStack_578) {
                    /* WARNING: Subroutine does not return */
            puStack_5f8 = (uint *)&UNK_00a6509e;
            FUN_00aae91b();
          }
          puStack_5fc = (uint *)local_5dc[6];
          puStack_5f8 = auStack_540;
          uStack_578 = 0xf;
          uStack_57c = 0;
          auStack_58c[0] = auStack_58c[0] & 0xffffff00;
          pppuStack_600 = (undefined ***)0xa650ce;
          iVar4 = FUN_00a89d00();
        } while (0 < iVar4);
        piVar5 = local_5ac;
        if (unaff_EBX != (undefined ***)0x0 || local_5d8._4_4_ != 0) break;
      }
      fVar15 = (float10)(**(code **)(*piVar5 + 0x14))();
    } while (fVar15 < (float10)dStack_508);
  }
  puStack_5f8 = (uint *)0xa65109;
  (**(code **)*local_5ac)();
  uVar11 = uStack_5e0;
  puStack_5f8 = (uint *)0xa65116;
  DVar13 = timeGetTime();
  DAT_012586d0 = DVar13 - _DAT_01258b70;
  puStack_5f8 = (uint *)0x0;
  puStack_5fc = (uint *)0x0;
  pppuStack_600 = (undefined ***)0xa65128;
  FUN_00a899f0();
  pppuStack_600 = (undefined ***)0xa65133;
  FUN_00a8a450();
  pppuStack_608 = *(undefined ****)(uVar11 + 0x18);
  pppuStack_600 = (undefined ***)0x7530;
  pppuStack_604 = (undefined ***)&iStack_544;
  pppuStack_60c = (undefined ***)0xa65149;
  iVar4 = FUN_00a89d00();
  do {
    if (iVar4 < 1) {
      puStack_5f8 = (uint *)0xa651a5;
      FUN_00a8a360();
      bVar14 = local_5dc == (int *)0x0 && (int)local_5d8 == 0;
LAB_00a651af:
      if (bVar14) {
        local_5dc = (int *)0x0;
      }
      ExceptionList = pvStack_18;
      return local_5dc;
    }
    if (iStack_544 == 2) {
      bVar14 = local_5dc == (int *)0x0 && (int)local_5d8 == 0;
      goto LAB_00a651af;
    }
    if (iStack_544 == 3) {
      puStack_5f8 = *(uint **)(iStack_534 + 8);
      puStack_5fc = (uint *)0xa65170;
      (*(code *)PTR__free_00f071fc)();
      puStack_5fc = (uint *)0xa6517a;
      (*(code *)PTR__free_00f071fc)();
    }
    pppuStack_600 = *(undefined ****)(uVar11 + 0x18);
    puStack_5f8 = (uint *)0x7530;
    puStack_5fc = (uint *)&iStack_544;
    pppuStack_604 = (undefined ***)0xa65193;
    iVar4 = FUN_00a89d00();
  } while( true );
}

