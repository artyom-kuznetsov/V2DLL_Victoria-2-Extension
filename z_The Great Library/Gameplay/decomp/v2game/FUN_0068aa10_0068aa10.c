// FUN_0068aa10 @ 0068aa10  (requested 0068AA10, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_0068aa10(int *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined ***pppuVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint unaff_EBX;
  undefined ***pppuStack_15c;
  undefined4 uStack_158;
  undefined ***pppuStack_154;
  undefined4 uStack_150;
  char *pcStack_14c;
  char *pcStack_148;
  undefined ***pppuStack_144;
  undefined ***pppuStack_140;
  uint *puStack_13c;
  int *piStack_138;
  undefined ***pppuStack_134;
  undefined ***pppuStack_124;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  uint uStack_108;
  int local_100;
  int iStack_e0;
  undefined **ppuStack_dc;
  undefined **appuStack_a0 [6];
  undefined **appuStack_88 [6];
  undefined **appuStack_70 [4];
  undefined **appuStack_60 [5];
  undefined4 uStack_4c;
  undefined4 uStack_34;
  undefined4 uStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9fa5e;
  pvStack_14 = ExceptionList;
  pppuStack_134 = (undefined ***)0x68aa46;
  ExceptionList = &pvStack_14;
  local_100 = in_ECX;
  cVar5 = (**(code **)(*param_1 + 0x3c))();
  if (cVar5 != '\0') {
    pppuStack_134 = (undefined ***)0x68aa53;
    iVar7 = (**(code **)(*param_1 + 0x30))();
    puVar11 = *(undefined4 **)(iVar7 + 0x1a4);
    piVar1 = piStack_138;
    while (piStack_138 = piVar1, puVar11 != (undefined4 *)0x0) {
      piStack_138 = (int *)*puVar11;
      puVar11 = (undefined4 *)puVar11[2];
      if ((char)piStack_138[1] != '\0') {
        pppuStack_134 = (undefined ***)0x1;
        puStack_13c = (uint *)0x68aa7e;
        (**(code **)(**(int **)(in_ECX + 0xb24) + 0xa0))();
        piVar1 = piStack_138;
      }
    }
  }
  if ((char)param_1[1] != '\0') {
    pppuStack_134 = (undefined ***)0x1;
    piStack_138 = param_1;
    puStack_13c = (uint *)0x68aa9b;
    (**(code **)(**(int **)(in_ECX + 0xb24) + 0xa0))();
  }
  if (param_1[0x1d] != 0) {
    pppuStack_134 = (undefined ***)0x68aaa9;
    FUN_005a9640();
  }
  param_1[0x1d] = 0;
  if (param_1[0x1c] != 0) {
    pppuStack_134 = (undefined ***)0x68aabe;
    FUN_005a9640();
  }
  piVar1 = (int *)param_1[0xe];
  while (piVar1 != (int *)0x0) {
    pppuStack_124 = (undefined ***)*piVar1;
    piVar1 = (int *)piVar1[2];
    piStack_138 = (int *)0x68aae5;
    pppuStack_134 = pppuStack_124;
    FUN_005cb230();
    if (pppuStack_124[0xc] != (undefined **)0x0) {
      pppuStack_134 = (undefined ***)0x68aaf9;
      iVar7 = FUN_00967f50();
      if (iVar7 != 0) {
        ppuVar2 = pppuStack_124[0x18];
        ppuStack_dc = pppuStack_124[0x19];
        if ((((char)ppuVar2 == 'R') && ((char)((uint)ppuVar2 >> 8) == 'E')) &&
           ((char)((uint)ppuVar2 >> 0x10) == 'B')) {
          pppuStack_134 = (undefined ***)0x68ab32;
          FUN_00967f50();
        }
      }
    }
    piStack_138 = (int *)0x68ab5a;
    pppuStack_134 = pppuStack_124;
    FUN_0068a900();
  }
  pppuStack_134 = (undefined ***)0x68ab6f;
  cVar5 = (**(code **)(*param_1 + 0x38))();
  if (cVar5 == '\0') {
LAB_0068ab89:
    iStack_e0 = param_1[0x30];
    for (puVar11 = *(undefined4 **)
                    (*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4) + 0x7b4);
        puVar11 != (undefined4 *)0x0; puVar11 = (undefined4 *)puVar11[2]) {
      if ((int *)*puVar11 == param_1) goto LAB_0068afdc;
    }
    pppuStack_134 = (undefined ***)0xd;
    piStack_138 = (int *)0xe0a98c;
    uStack_108 = 0xf;
    uStack_10c = 0;
    uStack_11c = uStack_11c & 0xffffff00;
    puStack_13c = (uint *)0x68abe4;
    FUN_00409350();
    pppuStack_134 = (undefined ***)0x1000;
    puStack_13c = &uStack_11c;
    piStack_138 = (int *)0xdea;
    uStack_c = 2;
    pppuStack_140 = (undefined ***)0x68ac07;
    pppuVar8 = (undefined ***)FUN_004015b0();
    pppuStack_134 = (undefined ***)0x0;
    piStack_138 = (int *)0x46;
    puStack_13c = (uint *)0xe0ac78;
    uStack_c._0_1_ = 3;
    pppuStack_144 = (undefined ***)0x68ac23;
    pppuStack_140 = pppuVar8;
    FUN_00987d50();
    pcStack_148 = (char *)0x68ac29;
    pppuStack_144 = pppuVar8;
    FUN_00401280();
    pppuStack_144 = appuStack_70;
    uStack_1c = CONCAT31(uStack_1c._1_3_,2);
    pcStack_148 = (char *)0x68ac41;
    FUN_00987ac0();
    pppuStack_144 = appuStack_70;
    appuStack_70[0] = std::ios_base::vftable;
    pcStack_148 = (char *)0x68ac59;
    FUN_00aad52d();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_118) {
                    /* WARNING: Subroutine does not return */
      pcStack_148 = &UNK_0068ac78;
      FUN_00aae91b();
    }
    pppuStack_144 = (undefined ***)0xd;
    pcStack_148 = "gamestate.cpp";
    uStack_118 = 0xf;
    uStack_11c = 0;
    pcStack_14c = (char *)0x68aca0;
    FUN_00409350();
    uStack_1c = 4;
    pppuStack_144 = (undefined ***)0x68acba;
    uVar9 = FUN_0055dd40();
    pppuStack_144 = (undefined ***)0x1000;
    pcStack_14c = &stack0xfffffed4;
    pcStack_148 = (char *)0xdeb;
    uStack_1c._0_1_ = 5;
    uStack_150 = 0x68acde;
    uVar10 = FUN_004015b0();
    pppuStack_144 = (undefined ***)0x0;
    pcStack_148 = (char *)0x15;
    pcStack_14c = "pUnit->GetCountry(): ";
    uStack_1c = CONCAT31(uStack_1c._1_3_,6);
    pppuVar8 = (undefined ***)param_1[0x31];
    pppuStack_154 = (undefined ***)0x68ad00;
    uStack_150 = uVar10;
    FUN_00987d50();
    pppuStack_154 = pppuStack_140;
    if ((undefined **)0xf < pppuStack_140[5]) {
      pppuStack_154 = (undefined ***)*pppuStack_140;
    }
    pppuStack_15c = (undefined ***)0x68ad13;
    uStack_158 = uVar10;
    uVar10 = FUN_00418e30();
    pppuStack_154 = (undefined ***)&DAT_00e0acc0;
    pppuStack_15c = pppuVar8;
    uVar10 = FUN_00418e30(uVar10,&DAT_00dfbfa4,extraout_ECX);
    uVar10 = FUN_00455470(uVar10);
    uVar10 = FUN_00418e30(uVar10);
    FUN_00401280(uVar10);
    pppuStack_15c = appuStack_88;
    uStack_34 = CONCAT31(uStack_34._1_3_,5);
    FUN_00987ac0();
    pppuStack_15c = appuStack_88;
    appuStack_88[0] = std::ios_base::vftable;
    FUN_00aad52d();
    if (0xf < uStack_110) {
      pppuStack_15c = pppuStack_124;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_34 = 0xffffffff;
    uStack_110 = 0xf;
    uStack_114 = 0;
    if (0xf < uVar9) {
      pppuStack_15c = pppuStack_144;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pppuStack_15c = (undefined ***)0xd;
    pppuStack_134 = (undefined ***)0x0;
    pppuStack_144 = (undefined ***)((uint)pppuStack_144 & 0xffffff00);
    FUN_00409350("gamestate.cpp");
    uStack_34 = 7;
    pppuStack_15c = *(undefined ****)(param_1[0x37] + 0x5c);
    puVar11 = (undefined4 *)FUN_004c4540();
    pppuStack_15c = (undefined ***)0x1000;
    uStack_34._0_1_ = 8;
    uVar10 = FUN_004015b0(&pppuStack_144,0xdec);
    pppuStack_15c = (undefined ***)0x0;
    uStack_34 = CONCAT31(uStack_34._1_3_,9);
    FUN_00987d50(uVar10,"pUnit->IsArmy(): ",0x11);
    uVar6 = (**(code **)(*param_1 + 0x38))(extraout_ECX_00,"   pUnit->GetLocation(): ");
    uVar10 = FUN_0068e820(uVar10,uVar6);
    uVar10 = FUN_00418e30(uVar10);
    if (0xf < (uint)puVar11[5]) {
      puVar11 = (undefined4 *)*puVar11;
    }
    uVar10 = FUN_00418e30(uVar10,puVar11);
    FUN_00401280(uVar10);
    uStack_4c = CONCAT31(uStack_4c._1_3_,8);
    FUN_00987ac0(appuStack_a0);
    appuStack_a0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_a0);
    if (0xf < unaff_EBX) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puStack_13c);
    }
    uStack_4c = 0xffffffff;
    puStack_13c = (uint *)((uint)puStack_13c & 0xffffff00);
    if (0xf < pcStack_148) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(pppuStack_15c);
    }
    pcStack_148 = (char *)0xf;
    pcStack_14c = (char *)0x0;
    pppuStack_15c = (undefined ***)((uint)pppuStack_15c & 0xffffff00);
    FUN_00409350("gamestate.cpp",0xd);
    uStack_4c = 10;
    uVar10 = FUN_004015b0(&pppuStack_15c,0xded,0x1000);
    uStack_4c = CONCAT31(uStack_4c._1_3_,0xb);
    iVar7 = param_1[0x10];
    FUN_00987d50(uVar10,"pUnit->GetNumSubUnits(): ",0x19,0);
    pppuStack_134 = (undefined ***)FUN_00455470(uVar10,iVar7);
    piStack_138 = (int *)0x68af6c;
    pppuStack_134 = (undefined ***)FUN_00401280();
    piStack_138 = (int *)0x68af75;
    FUN_00401280();
    pppuStack_134 = appuStack_60;
    uStack_c = CONCAT31(uStack_c._1_3_,10);
    piStack_138 = (int *)0x68af8d;
    FUN_00987ac0();
    pppuStack_134 = appuStack_60;
    appuStack_60[0] = std::ios_base::vftable;
    piStack_138 = (int *)0x68afa5;
    FUN_00aad52d();
    uStack_c = 0xffffffff;
    if (0xf < uStack_108) {
      pppuStack_134 = (undefined ***)uStack_11c;
                    /* WARNING: Subroutine does not return */
      piStack_138 = (int *)&UNK_0068afc4;
      FUN_00aae91b();
    }
    uStack_108 = 0xf;
    uStack_10c = 0;
    uStack_11c = uStack_11c & 0xffffff00;
  }
  else {
    pppuStack_134 = (undefined ***)0x68ab7c;
    iVar7 = (**(code **)(*param_1 + 0x2c))();
    if (*(int *)(iVar7 + 0x1b4) == 0) goto LAB_0068ab89;
  }
LAB_0068afdc:
  iStack_e0 = param_1[0x30];
  for (pppuStack_134 =
            *(undefined ****)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4) + 0x7b4);
      (pppuStack_134 != (undefined ***)0x0 && (*pppuStack_134 != (undefined **)param_1));
      pppuStack_134 = (undefined ***)pppuStack_134[2]) {
  }
  piStack_138 = (int *)0x68b022;
  FUN_005f2ae0();
  iVar7 = param_1[0x37];
  if (*(char *)(*(int *)(iVar7 + 0x5c) + 0x2a) != '\0') {
    pppuStack_134 = (undefined ***)0x68b03e;
    cVar5 = (**(code **)(*param_1 + 0x3c))();
    if (cVar5 != '\0') {
      if (*(int *)(iVar7 + 0x158) != 0) {
        for (pppuStack_134 = *(undefined ****)(*(int *)(iVar7 + 0x158) + 8);
            (pppuStack_134 != (undefined ***)0x0 && (*pppuStack_134 != (undefined **)param_1));
            pppuStack_134 = (undefined ***)pppuStack_134[2]) {
        }
        piStack_138 = (int *)0x68b06a;
        FUN_005f2ae0();
      }
      for (pppuStack_134 = *(undefined ****)(iVar7 + 0xec);
          (pppuStack_134 != (undefined ***)0x0 && (*pppuStack_134 != (undefined **)param_1));
          pppuStack_134 = (undefined ***)pppuStack_134[2]) {
      }
      piStack_138 = (int *)0x68b092;
      FUN_005f2ae0();
      for (pppuStack_134 = *(undefined ****)(iVar7 + 0xfc);
          (pppuStack_134 != (undefined ***)0x0 && (*pppuStack_134 != (undefined **)param_1));
          pppuStack_134 = (undefined ***)pppuStack_134[2]) {
      }
      goto LAB_0068b0fb;
    }
  }
  for (pppuStack_134 = *(undefined ****)(iVar7 + 0xfc);
      (pppuStack_134 != (undefined ***)0x0 && (*pppuStack_134 != (undefined **)param_1));
      pppuStack_134 = (undefined ***)pppuStack_134[2]) {
  }
  piStack_138 = (int *)0x68b0d7;
  FUN_005f2ae0();
  for (pppuStack_134 = *(undefined ****)(iVar7 + 0xec);
      (pppuStack_134 != (undefined ***)0x0 && (*pppuStack_134 != (undefined **)param_1));
      pppuStack_134 = (undefined ***)pppuStack_134[2]) {
  }
LAB_0068b0fb:
  piStack_138 = (int *)0x68b102;
  FUN_005f2ae0();
  piStack_138 = (int *)0x68b108;
  pppuStack_134 = (undefined ***)iVar7;
  FUN_004b7be0();
  piStack_138 = *(int **)(param_1[0x37] + 0x5c);
  pppuStack_134 = (undefined ***)param_1;
  puStack_13c = (uint *)0x68b118;
  FUN_004c8290();
  pppuStack_134 = (undefined ***)0x68b125;
  cVar5 = (**(code **)(*(int *)param_1[0x36] + 0x20))();
  if (cVar5 != '\0') {
    iVar7 = param_1[0x36];
    if (*(int *)(iVar7 + 0x88) != 0) {
      *(undefined4 *)(iVar7 + 0x88) = 0;
      pppuStack_134 = (undefined ***)0x68b148;
      pppuStack_134 = (undefined ***)FUN_005b6140();
      piStack_138 = (int *)0x68b150;
      FUN_005cbcc0();
    }
    *(undefined4 *)(iVar7 + 0x88) = 0;
  }
  pppuStack_134 = (undefined ***)0x68b163;
  cVar5 = (**(code **)(*param_1 + 0x38))();
  if (cVar5 == '\0') {
    pppuStack_134 = (undefined ***)0x68b1b9;
    cVar5 = (**(code **)(*param_1 + 0x3c))();
    if (cVar5 != '\0') {
      pppuStack_134 = (undefined ***)0x68b1c6;
      iVar7 = (**(code **)(*param_1 + 0x30))();
      if (*(int *)(iVar7 + 0x1ac) != 0) {
        pppuStack_134 = (undefined ***)0x68b1d8;
        iVar7 = (**(code **)(*param_1 + 0x30))();
        puVar11 = *(undefined4 **)(iVar7 + 0x1a4);
        while (puVar11 != (undefined4 *)0x0) {
          pppuStack_134 = (undefined ***)*puVar11;
          puVar11 = (undefined4 *)puVar11[2];
          piStack_138 = (int *)0x68b1f3;
          FUN_0068aa10();
        }
      }
    }
  }
  else {
    pppuStack_134 = (undefined ***)0x68b170;
    iVar7 = (**(code **)(*param_1 + 0x2c))();
    if (*(int *)(iVar7 + 0x1b4) != 0) {
      pppuStack_134 = (undefined ***)0x68b186;
      iVar7 = (**(code **)(*param_1 + 0x2c))();
      for (pppuStack_134 = *(undefined ****)(*(int *)(iVar7 + 0x1b4) + 0x1a4);
          (pppuStack_134 != (undefined ***)0x0 && (*pppuStack_134 != (undefined **)param_1));
          pppuStack_134 = (undefined ***)pppuStack_134[2]) {
      }
      piStack_138 = (int *)0x68b1b2;
      FUN_005f2ae0();
    }
  }
  pppuStack_134 = (undefined ***)0x68b204;
  iVar7 = (**(code **)(*DAT_012588e8 + 0x18))();
  pppuStack_124 = (undefined ***)0x0;
  if (0 < iVar7) {
    do {
      iVar3 = *(int *)(*(int *)(DAT_012588e8[0x2b3] + (int)pppuStack_124 * 4) + 0x10c);
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 0x10);
        for (pppuStack_134 = *(undefined ****)(iVar4 + 0x20); pppuStack_134 != (undefined ***)0x0;
            pppuStack_134 = (undefined ***)pppuStack_134[2]) {
          if (*pppuStack_134 == (undefined **)param_1) {
            if (pppuStack_134 != (undefined ***)0x0) {
              if (*(char *)(iVar4 + 0x2c) == '\0') {
                iVar7 = (int)pppuStack_134[1];
                iVar3 = (int)pppuStack_134[2];
                if (iVar7 != 0) {
                  *(int *)(iVar7 + 8) = iVar3;
                }
                if (iVar3 != 0) {
                  *(int *)(iVar3 + 4) = iVar7;
                }
                if (pppuStack_134 == (undefined ***)*(undefined4 **)(iVar4 + 0x20)) {
                  *(int *)(iVar4 + 0x20) = iVar3;
                }
                if (pppuStack_134 == (undefined ***)*(undefined4 **)(iVar4 + 0x24)) {
                  *(int *)(iVar4 + 0x24) = iVar7;
                }
                    /* WARNING: Subroutine does not return */
                piStack_138 = (int *)&UNK_0068b287;
                FUN_00aae91b();
              }
              *(undefined1 *)(pppuStack_134 + 3) = 1;
            }
            break;
          }
        }
        iVar3 = *(int *)(iVar3 + 0x14);
        for (pppuStack_134 = *(undefined ****)(iVar3 + 0x20); pppuStack_134 != (undefined ***)0x0;
            pppuStack_134 = (undefined ***)pppuStack_134[2]) {
          if (*pppuStack_134 == (undefined **)param_1) {
            if (pppuStack_134 != (undefined ***)0x0) {
              if (*(char *)(iVar3 + 0x2c) == '\0') {
                iVar7 = (int)pppuStack_134[1];
                iVar4 = (int)pppuStack_134[2];
                if (iVar7 != 0) {
                  *(int *)(iVar7 + 8) = iVar4;
                }
                if (iVar4 != 0) {
                  *(int *)(iVar4 + 4) = iVar7;
                }
                if (pppuStack_134 == (undefined ***)*(undefined4 **)(iVar3 + 0x20)) {
                  *(int *)(iVar3 + 0x20) = iVar4;
                }
                if (pppuStack_134 == (undefined ***)*(undefined4 **)(iVar3 + 0x24)) {
                  *(int *)(iVar3 + 0x24) = iVar7;
                }
                    /* WARNING: Subroutine does not return */
                piStack_138 = (int *)&UNK_0068b2de;
                FUN_00aae91b();
              }
              *(undefined1 *)(pppuStack_134 + 3) = 1;
            }
            break;
          }
        }
      }
      pppuStack_124 = (undefined ***)((int)pppuStack_124 + 1);
    } while ((int)pppuStack_124 < iVar7);
  }
  pppuStack_134 = (undefined ***)0x68b300;
  cVar5 = (**(code **)(*param_1 + 0x38))();
  if (cVar5 == '\0') {
    pppuStack_134 = (undefined ***)0x68b345;
    cVar5 = (**(code **)(*param_1 + 0x3c))();
    if (cVar5 == '\0') {
      pppuStack_134 = (undefined ***)0x68b38a;
      cVar5 = (**(code **)(*param_1 + 0x40))();
      if (cVar5 != '\0') {
        pppuStack_134 = (undefined ***)0x68b397;
        pppuStack_134 = (undefined ***)(**(code **)(*param_1 + 0x34))();
        piStack_138 = (int *)&LAB_0085a170;
        puStack_13c = (uint *)0x68b3a7;
        FUN_00859ef0();
      }
    }
    else {
      pppuStack_134 = (undefined ***)0x68b352;
      iVar7 = (**(code **)(*param_1 + 0x30))();
      piVar1 = *(int **)(iVar7 + 0x144);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(iVar7 + 0x144) = 0;
        piStack_138 = (int *)0x68b373;
        pppuStack_134 = (undefined ***)iVar7;
        (**(code **)(*piVar1 + 0x1bc))();
      }
      piStack_138 = (int *)&LAB_0085a150;
      puStack_13c = (uint *)0x68b383;
      pppuStack_134 = (undefined ***)iVar7;
      FUN_00859ef0();
    }
  }
  else {
    pppuStack_134 = (undefined ***)0x68b30d;
    iVar7 = (**(code **)(*param_1 + 0x2c))();
    piVar1 = *(int **)(iVar7 + 0x144);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(iVar7 + 0x144) = 0;
      piStack_138 = (int *)0x68b32e;
      pppuStack_134 = (undefined ***)iVar7;
      (**(code **)(*piVar1 + 0x1ac))();
    }
    piStack_138 = (int *)&LAB_0085a130;
    puStack_13c = (uint *)0x68b33e;
    pppuStack_134 = (undefined ***)iVar7;
    FUN_00859ef0();
  }
  *(undefined1 *)(local_100 + 0xb70) = 1;
  pppuStack_134 = (undefined ***)0x1;
  piStack_138 = (int *)0x68b3bf;
  (**(code **)*param_1)();
  *(undefined1 *)(local_100 + 0xb70) = 0;
  ExceptionList = pvStack_18;
  return;
}

