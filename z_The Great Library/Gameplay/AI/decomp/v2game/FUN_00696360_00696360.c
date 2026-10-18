// FUN_00696360 @ 00696360 body=[[00696360, 0069646b] [0069646f, 0069656c] [00696570, 006966c1] [006966c5, 00696719] [0069671f, 0069674b] [0069674f, 006967ac] [006967b0, 00696924] [00696928, 00696af5] [00696af9, 00696b0f]]


/* WARNING: Removing unreachable block (ram,0x00696800) */

void FUN_00696360(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 extraout_ECX;
  uint uVar8;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  bool bVar9;
  undefined ****ppppuVar10;
  undefined4 *puStack_240;
  undefined ***pppuStack_23c;
  int iStack_238;
  undefined4 *puStack_234;
  undefined4 uStack_230;
  uint *puStack_22c;
  char *pcStack_228;
  undefined ***pppuStack_224;
  uint uStack_210;
  uint local_20c;
  uint uStack_208;
  undefined1 auStack_204 [8];
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1e4;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  undefined **appuStack_164 [5];
  undefined **ppuStack_150;
  undefined **appuStack_138 [35];
  undefined **appuStack_ac [18];
  undefined4 uStack_64;
  void *pvStack_60;
  undefined1 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6f2af;
  pvStack_14 = ExceptionList;
  pppuStack_224 = (undefined ***)0xf;
  pcStack_228 = "ingamelobby.cpp";
  local_1f8 = 0xf;
  local_1fc = 0;
  local_20c = local_20c & 0xffffff00;
  puStack_22c = (uint *)0x6963ab;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  pppuStack_224 = (undefined ***)0x10002;
  puStack_22c = &local_20c;
  pcStack_228 = (char *)0x11a;
  local_c = 0;
  uStack_230 = 0x6963cd;
  uVar2 = FUN_004015b0();
  pppuStack_224 = (undefined ***)0x0;
  pcStack_228 = (char *)0xf;
  puStack_22c = (uint *)0xe0b210;
  local_c = CONCAT31(local_c._1_3_,1);
  uVar3 = param_2[7];
  puStack_234 = (undefined4 *)0x6963ef;
  uStack_230 = uVar2;
  FUN_00987d50();
  puStack_234 = param_2;
  if (0xf < (uint)param_2[5]) {
    puStack_234 = (undefined4 *)*param_2;
  }
  pppuStack_23c = (undefined ***)0x6963fe;
  iStack_238 = uVar2;
  FUN_00418e30();
  pppuStack_23c = (undefined ***)&DAT_00ded950;
  puStack_234 = (undefined4 *)uVar3;
  iStack_238 = FUN_00418e30();
  pppuStack_23c = (undefined ***)0x696417;
  pppuStack_23c = (undefined ***)FUN_00455470();
  FUN_00401280();
  pppuStack_23c = appuStack_138;
  uStack_24 = uStack_24 & 0xffffff00;
  FUN_00987ac0();
  pppuStack_23c = appuStack_138;
  appuStack_138[0] = std::ios_base::vftable;
  FUN_00aad52d();
  uStack_24 = 0xffffffff;
  if (0xf < uStack_210) {
    pppuStack_23c = pppuStack_224;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pppuStack_23c = (undefined ***)0xf;
  pppuStack_224 = (undefined ***)((uint)pppuStack_224 & 0xffffff00);
  FUN_00409350();
  pppuStack_23c = (undefined ***)0x10002;
  uStack_24 = 2;
  FUN_004015b0();
  uStack_24 = CONCAT31(uStack_24._1_3_,3);
  pppuStack_23c = DAT_012588e8;
  FUN_0068b610();
  pppuStack_23c = (undefined ***)0x0;
  puStack_240 = (undefined4 *)0x18;
  FUN_00987d50();
  uVar3 = FUN_00418e30();
  FUN_00418e30(uVar3);
  FUN_00447240();
  FUN_00401280();
  uStack_3c = CONCAT31(uStack_3c._1_3_,2);
  FUN_00987ac0();
  ppuStack_150 = std::ios_base::vftable;
  FUN_00aad52d();
  uStack_3c = 0xffffffff;
  if (0xf < pcStack_228) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_005498a0(&stack0xfffffdac,*(undefined4 *)(param_1 + 0xc4),param_2);
  FUN_00549840();
  if (*(int *)(param_1 + 0xcc) == 0) {
    puStack_240 = (undefined4 *)FUN_00aae9af();
    uStack_3c = 4;
    bVar9 = puStack_240 != (undefined4 *)0x0;
    if (bVar9) {
      local_20c = 0xf;
      unaff_EDI = unaff_EDI & 0xffffff00;
      FUN_00409350("ALL_PLAYERS_HERE");
      uStack_3c = CONCAT31(uStack_3c._1_3_,5);
      FUN_009a8ee0(&pppuStack_23c);
      uStack_3c = 6;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      uStack_3c = 7;
      puStack_240[1] = 0x18d;
      *puStack_240 = &PTR_FUN_00e3cffc;
      puStack_240[7] = 0xf;
      puStack_240[6] = 0;
      *(undefined1 *)(puStack_240 + 2) = 0;
      FUN_00408ed0();
      *puStack_240 = &PTR_FUN_00e3d020;
    }
    uStack_3c = 10;
    FUN_00696b10();
    if (bVar9) {
      if (0xf < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1d0 = 0xf;
      uStack_1d4 = 0;
      uStack_1e4 = uStack_1e4 & 0xffffff00;
    }
    if (bVar9) {
      uStack_3c = 0xb;
      FUN_009adb70();
      if (iStack_238 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iStack_238 = 0;
      puStack_234 = (undefined4 *)0x0;
      uStack_230 = 0;
    }
    uStack_3c = 0xffffffff;
    if ((bVar9) && (0xf < local_20c)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  pcStack_228 = (char *)0xf;
  puStack_22c = (uint *)0x0;
  pppuStack_23c = (undefined ***)((uint)pppuStack_23c & 0xffffff00);
  FUN_00409350("multiplayer_list");
  uStack_3c = 0xc;
  ppppuVar10 = &pppuStack_23c;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x7c))();
  uStack_40 = 0xffffffff;
  if (0xf < puStack_22c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puStack_240);
  }
  puStack_22c = (uint *)0xf;
  uStack_230 = 0;
  piVar5 = (int *)(**(code **)(*piVar5 + 0x2c))();
  piVar5 = (int *)*piVar5;
  if (piVar5 != (int *)0x0) {
    uVar1 = param_2[4];
    uStack_208 = param_2[5];
    do {
      puVar7 = (undefined4 *)*piVar5;
      piVar5 = (int *)piVar5[2];
      uVar6 = *(uint *)(puVar7[0xb] + 0x10);
      uVar8 = uVar1;
      if (uVar6 < uVar1) {
        uVar8 = uVar6;
      }
      iVar4 = FUN_00414bd0(uVar8);
      bVar9 = false;
      if (iVar4 == 0) {
        if (uVar6 < uVar1) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar6 != uVar1);
        }
        bVar9 = uVar6 == 0;
      }
      if (bVar9) {
        pppuStack_224 = (undefined ***)((uint)pppuStack_224 & 0xffffff00);
        FUN_00409350();
        uStack_40 = 0xd;
        uVar3 = FUN_004015b0(&pppuStack_224,0x129,0x10002);
        uStack_40 = CONCAT31(uStack_40._1_3_,0xe);
        piVar5 = (int *)puVar7[0xb];
        FUN_00987d50(uVar3,"Player ",7);
        if (0xf < (uint)piVar5[5]) {
          piVar5 = (int *)*piVar5;
        }
        uVar3 = FUN_00418e30(uVar3,piVar5);
        uVar3 = FUN_00418e30(uVar3," found");
        FUN_00401280(uVar3);
        uStack_50 = CONCAT31(uStack_50._1_3_,0xd);
        FUN_00987ac0(appuStack_164);
        appuStack_164[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_164);
        uStack_50 = 0xffffffff;
        if (0xf < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puStack_234);
        }
        (*(code *)(*ppppuVar10)[8])(puVar7,1);
        (**(code **)(puVar7[7] + 0x30))();
        (**(code **)*puVar7)(1);
        FUN_009b1100();
        (**(code **)(**(int **)(*(int *)(param_1 + 0xdc) + 0x38) + 0x40))(param_2[7]);
        iVar4 = FUN_00aae9af(0x60);
        pvStack_60 = (void *)0xf;
        if (iVar4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_0072ba30(iVar4,param_2,param_2[7],0);
        }
        pvStack_60 = (void *)0xffffffff;
        (**(code **)(**(int **)(*(int *)(param_1 + 0xdc) + 0x38) + 0x18))(uVar3);
        iVar4 = FUN_00aae9af(0x44);
        uStack_64 = 0x10;
        if (iVar4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_0072c180(iVar4,param_2[8],param_2[9]);
        }
        uStack_64 = 0xffffffff;
        (**(code **)(**(int **)(*(int *)(param_1 + 0xdc) + 0x38) + 0x18))(uVar3);
        break;
      }
    } while (piVar5 != (int *)0x0);
  }
  uStack_1f0 = 0xf;
  uStack_1f4 = 0;
  auStack_204[0] = 0;
  FUN_00409350();
  uStack_40 = 0x11;
  uVar2 = FUN_004015b0(auStack_204,0x137,0x10002);
  uStack_40 = CONCAT31(uStack_40._1_3_,0x12);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x6c);
  puVar7 = (undefined4 *)FUN_0068b610(DAT_012588e8);
  FUN_00987d50(uVar2,"RemPlr2: Local player is ",0x19,0);
  if (0xf < (uint)puVar7[5]) {
    puVar7 = (undefined4 *)*puVar7;
  }
  uVar2 = FUN_00418e30(uVar2,puVar7);
  uVar3 = FUN_00418e30(uVar2," session id is ",extraout_ECX,uVar3);
  uVar3 = FUN_00447240(uVar3);
  FUN_00401280(uVar3);
  uStack_58 = 0x11;
  FUN_00987ac0(appuStack_ac);
  appuStack_ac[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_ac);
  if (uStack_208 < 0x10) {
    ExceptionList = pvStack_60;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(unaff_ESI);
}

