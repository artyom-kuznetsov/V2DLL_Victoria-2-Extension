// FUN_00694e20 @ 00694e20 body=[[00694e20, 00694f3b] [00694f3f, 0069503c] [00695040, 00695096] [0069509a, 0069526f] [00695273, 00695434] [00695438, 00695462] [00695468, 006954d2] [006954d6, 00695613] [00695617, 00695667] [0069566b, 006956a1] [006956aa, 00695799] [0069579d, 00695931] [00695935, 0069594b]]


/* WARNING: Removing unreachable block (ram,0x0069511a) */

void FUN_00694e20(int param_1,undefined4 *param_2,undefined *****param_3)

{
  undefined ****ppppuVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined *****pppppuVar9;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint unaff_EBX;
  uint unaff_ESI;
  bool bVar10;
  undefined *****pppppuStack_264;
  uint uStack_260;
  undefined4 *puStack_25c;
  uint uStack_258;
  undefined *****pppppuStack_254;
  undefined ****ppppuStack_250;
  undefined *****pppppuStack_24c;
  int iStack_248;
  char *pcStack_244;
  int iStack_240;
  uint *puStack_23c;
  char *pcStack_238;
  undefined ****ppppuStack_234;
  uint uStack_220;
  uint local_21c;
  undefined4 uStack_218;
  uint uStack_214;
  uint local_20c;
  undefined4 local_208;
  undefined1 uStack_204;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1e8;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  undefined **ppuStack_16c;
  undefined **appuStack_168 [6];
  undefined ****appppuStack_150 [6];
  undefined ***apppuStack_138 [34];
  undefined **appuStack_b0 [19];
  void *pvStack_64;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8b8c5;
  pvStack_14 = ExceptionList;
  ppppuStack_234 = (undefined ****)0xf;
  pcStack_238 = "ingamelobby.cpp";
  local_208 = 0xf;
  local_20c = 0;
  local_21c = local_21c & 0xffffff00;
  puStack_23c = (uint *)0x694e6d;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  ppppuStack_234 = (undefined ****)0x10002;
  puStack_23c = &local_21c;
  pcStack_238 = (char *)0xab;
  local_c = 0;
  iStack_240 = 0x694e8f;
  iVar3 = FUN_004015b0();
  ppppuStack_234 = (undefined ****)0x0;
  pcStack_238 = (char *)0xf;
  puStack_23c = (uint *)0xe0b134;
  local_c = CONCAT31(local_c._1_3_,1);
  pcStack_244 = (char *)0x694eaa;
  iStack_240 = iVar3;
  FUN_00987d50();
  pcStack_244 = (char *)param_2;
  if (0xf < (uint)param_2[5]) {
    pcStack_244 = (char *)*param_2;
  }
  pppppuStack_24c = (undefined *****)0x694ebd;
  iStack_248 = iVar3;
  uStack_258 = FUN_00418e30();
  pcStack_244 = " arrived";
  pppppuStack_24c = param_3;
  ppppuStack_250 = (undefined ****)param_3;
  pppppuStack_254 = (undefined *****)&DAT_00ded950;
  puStack_25c = (undefined4 *)0x694ed6;
  iStack_248 = extraout_ECX;
  ppppuStack_250 = (undefined ****)FUN_00418e30();
  pppppuStack_254 = (undefined *****)0x694edf;
  ppppuStack_250 = (undefined ****)FUN_00455470();
  pppppuStack_254 = (undefined *****)0x694ee8;
  pppppuStack_254 = (undefined *****)FUN_00418e30();
  uStack_258 = 0x694eee;
  FUN_00401280();
  pppppuStack_24c = (undefined *****)apppuStack_138;
  uStack_24 = uStack_24 & 0xffffff00;
  ppppuStack_250 = (undefined ****)0x694f05;
  FUN_00987ac0();
  pppppuStack_24c = (undefined *****)apppuStack_138;
  apppuStack_138[0] = (undefined ***)std::ios_base::vftable;
  ppppuStack_250 = (undefined ****)0x694f1d;
  FUN_00aad52d();
  uStack_24 = 0xffffffff;
  if (0xf < uStack_220) {
    pppppuStack_24c = (undefined *****)ppppuStack_234;
                    /* WARNING: Subroutine does not return */
    ppppuStack_250 = (undefined ****)&UNK_00694f3c;
    FUN_00aae91b();
  }
  pppppuStack_24c = (undefined *****)0xf;
  ppppuStack_250 = (undefined ****)0xe0b09c;
  uStack_220 = 0xf;
  ppppuStack_234 = (undefined ****)((uint)ppppuStack_234 & 0xffffff00);
  pppppuStack_254 = (undefined *****)0x694f5f;
  FUN_00409350();
  pppppuStack_24c = (undefined *****)0x10002;
  pppppuStack_254 = &ppppuStack_234;
  ppppuStack_250 = (undefined ****)0xac;
  uStack_24 = 2;
  uStack_258 = 0x694f85;
  uVar4 = FUN_004015b0();
  uStack_24 = CONCAT31(uStack_24._1_3_,3);
  pcStack_238 = *(char **)(*(int *)(param_1 + 0xdc) + 0x6c);
  pppppuStack_24c = DAT_012588e8;
  ppppuStack_250 = (undefined ****)0x694fad;
  puVar5 = (undefined4 *)FUN_0068b610();
  pppppuStack_24c = (undefined *****)0x0;
  ppppuStack_250 = (undefined ****)0x1c;
  pppppuStack_254 = (undefined *****)0xe0b144;
  puStack_25c = (undefined4 *)0x694fbd;
  uStack_258 = uVar4;
  FUN_00987d50();
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  pppppuStack_264 = (undefined *****)0x694fcc;
  uStack_260 = uVar4;
  puStack_25c = puVar5;
  FUN_00418e30();
  puStack_25c = (undefined4 *)iStack_248;
  uStack_260 = iStack_248;
  pppppuStack_264 = (undefined *****)0xe0b0cc;
  uStack_260 = FUN_00418e30();
  pppppuStack_264 = (undefined *****)0x694fe9;
  pppppuStack_264 = (undefined *****)FUN_00447240();
  FUN_00401280();
  pppppuStack_264 = appppuStack_150;
  uStack_3c = CONCAT31(uStack_3c._1_3_,2);
  FUN_00987ac0();
  pppppuStack_264 = appppuStack_150;
  appppuStack_150[0] = (undefined ****)std::ios_base::vftable;
  FUN_00aad52d();
  uStack_3c = 0xffffffff;
  if (0xf < pcStack_238) {
    pppppuStack_264 = pppppuStack_24c;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pppppuStack_264 = (undefined *****)0x10;
  pcStack_238 = (char *)0xf;
  puStack_23c = (uint *)0x0;
  pppppuStack_24c = (undefined *****)((uint)pppppuStack_24c & 0xffffff00);
  FUN_00409350();
  uStack_3c = 4;
  pppppuStack_264 = (undefined *****)&pppppuStack_24c;
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x7c))();
  uStack_40 = 0xffffffff;
  if (0xf < puStack_23c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_23c = (uint *)0xf;
  iStack_240 = 0;
  ppppuStack_250 = (undefined ****)((uint)ppppuStack_250 & 0xffffff00);
  (**(code **)(*piVar6 + 0x2c))();
  FUN_005498a0();
  if (pppppuStack_254 == (undefined *****)0x0) {
    uStack_214 = 0xf;
    uStack_218 = 0;
    FUN_00409350("ingamelobby.cpp",0xf);
    uStack_40 = 0x13;
    uVar7 = FUN_004015b0();
    uStack_40 = CONCAT31(uStack_40._1_3_,0x14);
    FUN_00987d50(uVar7,"Not valid player ",0x11,0);
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    uVar7 = FUN_00418e30(uVar7,param_2);
    uVar7 = FUN_00418e30(uVar7,&DAT_00ded950,extraout_ECX_00,param_3,extraout_ECX_00," arrived");
    uVar7 = FUN_00455470(uVar7);
    uVar7 = FUN_00418e30(uVar7);
    FUN_00401280(uVar7);
    uStack_58 = CONCAT31(uStack_58._1_3_,0x13);
    FUN_00987ac0(&ppuStack_16c);
    ppuStack_16c = std::ios_base::vftable;
    FUN_00aad52d(&ppuStack_16c);
    uStack_58 = 0xffffffff;
    if (0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_240);
    }
    FUN_009b1100();
    (**(code **)(**(int **)(*(int *)(param_1 + 0xdc) + 0x38) + 0x40))(param_3);
    pppppuVar9 = pppppuStack_254;
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0x2c))();
    for (pppppuStack_254 = (undefined *****)*puVar5; pppppuStack_254 != (undefined *****)0x0;
        pppppuStack_254 = (undefined *****)pppppuStack_254[2]) {
      uVar4 = *(uint *)(*(int *)((int)*pppppuStack_254 + 0x2c) + 0x10);
      iVar3 = FUN_00414bd0();
      bVar10 = false;
      if (iVar3 == 0) {
        if (uVar4 < (uint)param_2[4]) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar4 != param_2[4]);
        }
        bVar10 = uVar4 == 0;
      }
      if (bVar10) {
        puStack_23c = (uint *)0xf;
        iStack_240 = 0;
        ppppuStack_250 = (undefined ****)((uint)ppppuStack_250 & 0xffffff00);
        FUN_00409350("ingamelobby.cpp",0xf);
        uStack_40 = 5;
        uVar7 = FUN_004015b0();
        uStack_40 = CONCAT31(uStack_40._1_3_,6);
        FUN_00987d50(uVar7,"Found ",6);
        puVar5 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar5 = (undefined4 *)*param_2;
        }
        piVar6 = (int *)FUN_00418e30(uVar7,puVar5);
        FUN_00408be0(piVar6);
        uVar4 = 0;
        if (((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) &&
           (iVar3 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))(),
           iVar3 == -1)) {
          uVar4 = 4;
        }
        if (uVar4 != 0) {
          uVar4 = *(uint *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0xc) | uVar4;
          if (*(int *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0x38) == 0) {
            uVar4 = uVar4 | 4;
          }
          FUN_00401120(uVar4,0);
        }
        uStack_54 = CONCAT31(uStack_54._1_3_,5);
        FUN_00987ac0(appuStack_168);
        appuStack_168[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_168);
        pppppuVar9 = DAT_012588e8;
        uStack_54 = 0xffffffff;
        if ((undefined ****)0xf < ppppuStack_250) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(pppppuStack_264);
        }
        ppppuStack_250 = (undefined ****)0xf;
        pppppuStack_254 = (undefined *****)0x0;
        pppppuStack_264 = (undefined *****)((uint)pppppuStack_264 & 0xffffff00);
        for (ppppuVar1 = DAT_012588e8[6]; ppppuVar1 != (undefined ****)0x0;
            ppppuVar1 = (undefined ****)ppppuVar1[0xf]) {
          if ((undefined *****)ppppuVar1[7] == param_3) {
            ppppuVar1[7] = (undefined ***)0xffffffff;
          }
        }
        *(undefined ******)(*(int *)(pcStack_244 + 0x2c) + 0x1c) = param_3;
        FUN_005498a0(&iStack_248,*(undefined4 *)(param_1 + 0xc4),param_2);
        if (iStack_248 != 0) {
          if (*(char *)(param_1 + 0xd0) == '\0') {
            iVar3 = *(int *)(iStack_248 + 0x1c);
            iVar2 = *(int *)(iStack_248 + 0x20);
            if (iVar3 != 0) {
              *(int *)(iVar3 + 0x20) = iVar2;
            }
            if (iVar2 != 0) {
              *(int *)(iVar2 + 0x1c) = iVar3;
            }
            if (iStack_248 == *(int *)(param_1 + 0xc4)) {
              *(int *)(param_1 + 0xc4) = iVar2;
            }
            if (iStack_248 == *(int *)(param_1 + 200)) {
              *(int *)(param_1 + 200) = iVar3;
            }
            FUN_0067a5c0();
            *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + -1;
            pppppuVar9 = DAT_012588e8;
          }
          else {
            *(undefined1 *)(iStack_248 + 0x24) = 1;
          }
        }
        pcVar8 = pcStack_244;
        if (*(undefined ******)(*(int *)(param_1 + 0xdc) + 0x6c) == param_3) {
          ppppuVar1 = *(undefined *****)(*(int *)(pcStack_244 + 0x2c) + 0x24);
          pppppuVar9[0x2d7] = *(undefined *****)(*(int *)(pcStack_244 + 0x2c) + 0x20);
          pppppuVar9[0x2d8] = ppppuVar1;
          ppppuStack_250 = (undefined ****)0xf;
          pppppuStack_254 = (undefined *****)0x0;
          pppppuStack_264 = (undefined *****)((uint)pppppuStack_264 & 0xffffff00);
          FUN_00409350("ingamelobby.cpp",0xf);
          uStack_54 = 7;
          uStack_220 = *(undefined4 *)(*(int *)(pcVar8 + 0x2c) + 0x20);
          local_21c = *(uint *)(*(int *)(pcVar8 + 0x2c) + 0x24);
          puVar5 = (undefined4 *)FUN_0055dd40();
          uStack_54._0_1_ = 8;
          uVar7 = FUN_004015b0(&pppppuStack_264,0xc0,0x10002);
          uStack_54._0_1_ = 9;
          FUN_00987d50(uVar7,"PlrArrived2: Local player is ",0x1d,0);
          if (0xf < (uint)puVar5[5]) {
            puVar5 = (undefined4 *)*puVar5;
          }
          uVar7 = FUN_00418e30(uVar7,puVar5);
          FUN_00401280(uVar7);
          uStack_54 = CONCAT31(uStack_54._1_3_,8);
          FUN_00987ac0(appuStack_168);
          appuStack_168[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_168);
          if (0xf < unaff_EBX) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puStack_23c);
          }
          uStack_54 = 0xffffffff;
          unaff_EBX = 0xf;
          puStack_23c = (uint *)((uint)puStack_23c & 0xffffff00);
          if ((undefined ****)0xf < ppppuStack_250) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(pppppuStack_264);
          }
        }
        ppppuStack_250 = (undefined ****)0xf;
        pppppuStack_254 = (undefined *****)0x0;
        pppppuStack_264 = (undefined *****)((uint)pppppuStack_264 & 0xffffff00);
        FUN_00409350("player_shield",0xd);
        uStack_54 = 10;
        piVar6 = (int *)(**(code **)(**(int **)(pcStack_244 + 0x20) + 0x44))(&pppppuStack_264);
        (**(code **)(*piVar6 + 0xb4))(0);
        uStack_40 = 0xffffffff;
        if (0xf < puStack_23c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    pppppuVar9 = (undefined *****)(char *)0x0;
    if (*(int *)(param_1 + 0xcc) == 0) {
      pcVar8 = (char *)FUN_00aae9af();
      uStack_40 = 0xb;
      pppppuStack_254 = (undefined *****)pcVar8;
      if (pcVar8 != (char *)0x0) {
        uStack_214 = 0xf;
        uStack_218 = 0;
        FUN_00409350("ALL_PLAYERS_HERE",0x10);
        uStack_40 = CONCAT31(uStack_40._1_3_,0xc);
        uStack_258 = 1;
        ppppuStack_234 = (undefined ****)FUN_009a8ee0(&ppppuStack_250,&stack0xfffffdd8);
        uStack_40 = 0xd;
        uStack_258 = 3;
        iVar3 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
        uStack_40 = 0xe;
        pcVar8[4] = -0x73;
        pcVar8[5] = '\x01';
        pcVar8[6] = '\0';
        pcVar8[7] = '\0';
        *(undefined ***)pcVar8 = &PTR_FUN_00e3cffc;
        pcVar8[0x1c] = '\x0f';
        pcVar8[0x1d] = '\0';
        pcVar8[0x1e] = '\0';
        pcVar8[0x1f] = '\0';
        pcVar8[0x18] = '\0';
        pcVar8[0x19] = '\0';
        pcVar8[0x1a] = '\0';
        pcVar8[0x1b] = '\0';
        uStack_258 = 7;
        pcVar8[8] = '\0';
        FUN_00408ed0();
        *(undefined ***)pcVar8 = &PTR_FUN_00e3d020;
      }
      uStack_40 = 0x11;
      FUN_00696b10();
      if ((uStack_258 & 4) != 0) {
        uStack_258 = uStack_258 & 0xfffffffb;
        if (0xf < uStack_1d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1d4 = 0xf;
        uStack_1d8 = 0;
        uStack_1e8 = uStack_1e8 & 0xffffff00;
      }
      if ((uStack_258 & 2) != 0) {
        uStack_258 = uStack_258 & 0xfffffffd;
        uStack_40 = 0x12;
        FUN_009adb70();
        if (pppppuStack_24c != (undefined *****)0x0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        pppppuStack_24c = (undefined *****)0x0;
        iStack_248 = 0;
        pcStack_244 = (char *)0x0;
      }
      uStack_40 = 0xffffffff;
      pppppuVar9 = pppppuStack_254;
      if (((uStack_258 & 1) != 0) && (0xf < uStack_214)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  pppppuStack_254 = pppppuVar9;
  uStack_1f0 = 0xf;
  uStack_1f4 = 0;
  uStack_204 = 0;
  FUN_00409350("ingamelobby.cpp",0xf);
  uStack_40 = 0x15;
  uVar7 = FUN_004015b0();
  uStack_40 = CONCAT31(uStack_40._1_3_,0x16);
  pppppuVar9 = (undefined *****)DAT_012588e8[6];
  pppppuStack_254 = DAT_012588e8;
  if (pppppuVar9 != (undefined *****)0x0) {
    ppppuStack_234 = (undefined ****)(DAT_012588e8 + 0x2c9);
    do {
      ppppuVar1 = pppppuVar9[7];
      iVar3 = (*(code *)(**ppppuStack_234)[0x11])();
      if (ppppuVar1 == *(undefined *****)(iVar3 + 0x6c)) goto LAB_00695863;
      pppppuVar9 = (undefined *****)pppppuVar9[0xf];
    } while (pppppuVar9 != (undefined *****)0x0);
  }
  pppppuVar9 = pppppuStack_254 + 10;
LAB_00695863:
  FUN_00987d50(uVar7,"PlrArrived3: Local player is ",0x1d,0);
  if ((undefined ****)0xf < pppppuVar9[5]) {
    pppppuVar9 = (undefined *****)*pppppuVar9;
  }
  uVar7 = FUN_00418e30(uVar7,pppppuVar9);
  uVar7 = FUN_00418e30(uVar7," session id is ",iStack_240,iStack_240);
  piVar6 = (int *)FUN_00447240(uVar7);
  FUN_00408be0(piVar6);
  uVar4 = 0;
  if (((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) &&
     (iVar3 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))(),
     iVar3 == -1)) {
    uVar4 = 4;
  }
  if (uVar4 != 0) {
    uVar4 = *(uint *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0xc) | uVar4;
    if (*(int *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0x38) == 0) {
      uVar4 = uVar4 | 4;
    }
    FUN_00401120(uVar4,0);
  }
  uStack_5c = 0x15;
  FUN_00987ac0(appuStack_b0);
  appuStack_b0[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_b0);
  if (local_20c < 0x10) {
    ExceptionList = pvStack_64;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_220);
}

