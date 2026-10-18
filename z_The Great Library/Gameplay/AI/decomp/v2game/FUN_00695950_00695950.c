// FUN_00695950 @ 00695950 body=[[00695950, 00695a5c] [00695a60, 00695b5e] [00695b62, 00695bc0] [00695bc4, 00695d02] [00695d06, 00695d50] [00695d54, 00695d87] [00695d8b, 00696016] [0069601a, 00696136] [0069613a, 00696184] [00696188, 006961b6] [006961ba, 0069633e] [00696342, 00696358]]


/* WARNING: Removing unreachable block (ram,0x00695dcd) */
/* WARNING: Removing unreachable block (ram,0x00695bb7) */

void FUN_00695950(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 unaff_EBX;
  undefined1 *puVar13;
  bool bVar14;
  undefined1 *puVar15;
  undefined4 *puStack_264;
  uint uStack_260;
  uint *puStack_25c;
  int *piStack_258;
  undefined ***pppuStack_254;
  undefined4 *puStack_250;
  undefined4 *puStack_24c;
  undefined4 *puStack_248;
  char *pcStack_244;
  char *pcStack_240;
  uint uStack_23c;
  uint uStack_21c;
  uint uStack_218;
  int iStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined1 *puStack_204;
  undefined1 local_200 [12];
  undefined4 uStack_1f4;
  int *local_1f0;
  undefined4 local_1ec;
  undefined1 uStack_1e8;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined **appuStack_168 [6];
  undefined **appuStack_150 [6];
  undefined **appuStack_138 [34];
  undefined **appuStack_b0 [19];
  void *pvStack_64;
  undefined1 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6f43c;
  pvStack_14 = ExceptionList;
  uStack_23c = 0xf;
  pcStack_240 = "ingamelobby.cpp";
  local_1ec = 0xf;
  local_1f0 = (int *)0x0;
  local_200[0] = 0;
  pcStack_244 = "h\x02";
  ExceptionList = &pvStack_14;
  FUN_00409350();
  uStack_23c = 0x10002;
  pcStack_244 = local_200;
  pcStack_240 = (char *)0xed;
  local_c = 0;
  puStack_248 = (undefined4 *)0x6959bf;
  puVar4 = (undefined4 *)FUN_004015b0();
  uStack_23c = 0;
  pcStack_240 = (char *)0xc;
  pcStack_244 = "Player left ";
  local_c = CONCAT31(local_c._1_3_,1);
  puStack_24c = (undefined4 *)0x6959da;
  puStack_248 = puVar4;
  FUN_00987d50();
  puStack_24c = param_2;
  if (0xf < (uint)param_2[5]) {
    puStack_24c = (undefined4 *)*param_2;
  }
  pppuStack_254 = (undefined ***)0x6959ed;
  puStack_250 = puVar4;
  piStack_258 = (int *)FUN_00418e30();
  puStack_24c = param_3;
  puStack_250 = param_3;
  pppuStack_254 = (undefined ***)&DAT_00ded950;
  puStack_25c = (uint *)0x695a00;
  puStack_250 = (undefined4 *)FUN_00418e30();
  pppuStack_254 = (undefined ***)0x695a09;
  pppuStack_254 = (undefined ***)FUN_00455470();
  piStack_258 = (int *)0x695a0f;
  FUN_00401280();
  pppuStack_254 = appuStack_138;
  uStack_24 = uStack_24 & 0xffffff00;
  piStack_258 = (int *)0x695a26;
  FUN_00987ac0();
  pppuStack_254 = appuStack_138;
  appuStack_138[0] = std::ios_base::vftable;
  piStack_258 = (int *)0x695a3e;
  FUN_00aad52d();
  uStack_24 = 0xffffffff;
  if (0xf < puStack_204) {
    pppuStack_254 = (undefined ***)uStack_218;
                    /* WARNING: Subroutine does not return */
    piStack_258 = (int *)&UNK_00695a5d;
    FUN_00aae91b();
  }
  pppuStack_254 = (undefined ***)0xf;
  piStack_258 = (int *)0xe0b09c;
  puStack_204 = (undefined1 *)0xf;
  uStack_208 = 0;
  uStack_218 = uStack_218 & 0xffffff00;
  puStack_25c = (uint *)0x695a80;
  FUN_00409350();
  pppuStack_254 = (undefined ***)0x10002;
  puStack_25c = &uStack_218;
  piStack_258 = (int *)0xee;
  uStack_24 = 2;
  uStack_260 = 0x695aa6;
  uVar5 = FUN_004015b0();
  uStack_24 = CONCAT31(uStack_24._1_3_,3);
  pcStack_240 = *(char **)(*(int *)(param_1 + 0xdc) + 0x6c);
  pppuStack_254 = (undefined ***)DAT_012588e8;
  piStack_258 = (int *)0x695ace;
  puVar4 = (undefined4 *)FUN_0068b610();
  pppuStack_254 = (undefined ***)0x0;
  piStack_258 = (int *)0x18;
  puStack_25c = (uint *)0xe0b1e4;
  puStack_264 = (undefined4 *)0x695ade;
  uStack_260 = uVar5;
  FUN_00987d50();
  if (0xf < (uint)puVar4[5]) {
    puVar4 = (undefined4 *)*puVar4;
  }
  puStack_264 = puVar4;
  FUN_00418e30(uVar5);
  puStack_264 = puStack_250;
  iVar6 = FUN_00418e30();
  uVar7 = FUN_00447240();
  FUN_00401280(uVar7);
  uStack_3c = CONCAT31(uStack_3c._1_3_,2);
  FUN_00987ac0(appuStack_150);
  appuStack_150[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_150);
  uStack_3c = 0xffffffff;
  if (0xf < uStack_21c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EBX);
  }
  FUN_00409350();
  uStack_3c = 4;
  piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x7c))(&stack0xfffffdd0);
  uStack_40 = 0xffffffff;
  piStack_258 = piVar8;
  (**(code **)(*piVar8 + 0x2c))();
  if (*(int *)(param_1 + 0xcc) == 0) {
    piVar9 = (int *)FUN_00aae9af();
    uStack_40 = 5;
    pppuStack_254 = (undefined ***)piVar9;
    if (piVar9 != (int *)0x0) {
      uStack_23c = 0xf;
      pcStack_240 = (char *)0x0;
      puStack_250 = (undefined4 *)((uint)puStack_250 & 0xffffff00);
      FUN_00409350("ALL_PLAYERS_HERE",0x10);
      uStack_40 = CONCAT31(uStack_40._1_3_,6);
      uStack_260 = 1;
      puStack_25c = (uint *)FUN_009a8ee0(&uStack_218,&puStack_250);
      uStack_40 = 7;
      uStack_260 = 3;
      iVar10 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
      uStack_40 = 8;
      piVar9[1] = 0x18d;
      *piVar9 = (int)&PTR_FUN_00e3cffc;
      piVar9[7] = 0xf;
      piVar9[6] = 0;
      uStack_260 = 7;
      *(undefined1 *)(piVar9 + 2) = 0;
      FUN_00408ed0();
      *piVar9 = (int)&PTR_FUN_00e3d020;
      piVar8 = piStack_258;
    }
    uStack_40 = 0xb;
    FUN_00696b10();
    if ((uStack_260 & 4) != 0) {
      uStack_260 = uStack_260 & 0xfffffffb;
      if ((int *)0xf < local_1f0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1f0 = (int *)0xf;
      uStack_1f4 = 0;
      puStack_204 = (undefined1 *)((uint)puStack_204 & 0xffffff00);
    }
    if ((uStack_260 & 2) != 0) {
      uStack_260 = uStack_260 & 0xfffffffd;
      uStack_40 = 0xc;
      FUN_009adb70();
      if (iStack_214 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iStack_214 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
    }
    uStack_40 = 0xffffffff;
    if (((uStack_260 & 1) != 0) && (uStack_260 = uStack_260 & 0xfffffffe, 0xf < uStack_23c)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x2c))();
  puVar4 = (undefined4 *)*puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    puStack_25c = (uint *)param_2[4];
    piStack_258 = (int *)param_2[5];
    do {
      pppuStack_254 = (undefined ***)*puVar4;
      pcVar1 = *(char **)((int)pppuStack_254[0xb] + 0x10);
      iVar10 = FUN_00414bd0();
      bVar14 = false;
      if (iVar10 == 0) {
        if (pcVar1 < puStack_25c) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)((uint *)pcVar1 != puStack_25c);
        }
        bVar14 = uVar5 == 0;
      }
      if (bVar14) {
        uStack_23c = 0xf;
        pcStack_240 = (char *)0x0;
        puStack_250 = (undefined4 *)((uint)puStack_250 & 0xffffff00);
        FUN_00409350("ingamelobby.cpp",0xf);
        uStack_40 = 0xd;
        uVar7 = FUN_004015b0();
        uStack_40 = CONCAT31(uStack_40._1_3_,0xe);
        FUN_00987d50(uVar7,"Found player ");
        puVar4 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar4 = (undefined4 *)*param_2;
        }
        piVar8 = (int *)FUN_00418e30(uVar7,puVar4);
        FUN_00408be0(piVar8);
        uVar5 = 0;
        if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
           (iVar10 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))(),
           iVar10 == -1)) {
          uVar5 = 4;
        }
        if (uVar5 != 0) {
          uVar5 = *(uint *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0xc) | uVar5;
          if (*(int *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0x38) == 0) {
            uVar5 = uVar5 | 4;
          }
          FUN_00401120(uVar5,0);
        }
        uStack_54 = CONCAT31(uStack_54._1_3_,0xd);
        FUN_00987ac0(appuStack_168);
        appuStack_168[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_168);
        uStack_54 = 0xffffffff;
        if ((undefined4 *)0xf < puStack_250) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puStack_264);
        }
        iVar10 = *(int *)(param_1 + 200);
        puVar11 = (undefined1 *)FUN_00aae9af(0x28);
        uStack_54 = 0xf;
        if (puVar11 == (undefined1 *)0x0) {
          puVar13 = (undefined1 *)0x0;
        }
        else {
          *(undefined4 *)(puVar11 + 0x14) = 0xf;
          *(undefined4 *)(puVar11 + 0x10) = 0;
          *puVar11 = 0;
          puVar15 = puVar11;
          FUN_00408ed0(param_2,0,0xffffffff);
          *(int *)(puVar11 + 0x1c) = iVar10;
          *(undefined4 *)(puVar11 + 0x20) = 0;
          puVar11[0x24] = 0;
          puVar13 = puVar11;
          puVar11 = puVar15;
        }
        uStack_54 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 0xcc);
        *(undefined1 **)(param_1 + 200) = puVar13;
        *(int *)(param_1 + 0xcc) = iVar2 + 1;
        if (iVar2 == 0) {
          *(undefined1 **)(param_1 + 0xc4) = puVar13;
        }
        else {
          *(undefined1 **)(iVar10 + 0x20) = puVar13;
        }
        puStack_250 = (undefined4 *)0xf;
        pppuStack_254 = (undefined ***)0x0;
        puStack_264 = (undefined4 *)((uint)puStack_264 & 0xffffff00);
        FUN_00409350("player_shield",0xd);
        uStack_54 = 0x10;
        piVar8 = (int *)(**(code **)(**(int **)(iVar6 + 0x20) + 0x44))(&puStack_264);
        (**(code **)(*piVar8 + 0xb4))(3);
        piVar8 = piStack_258;
        goto joined_r0x006960f5;
      }
      puVar4 = (undefined4 *)puVar4[2];
    } while (puVar4 != (undefined4 *)0x0);
  }
  if (*(int *)(param_1 + 0xcc) == 0) {
    piVar8 = (int *)FUN_00aae9af();
    uStack_40 = 0x11;
    piStack_258 = piVar8;
    if (piVar8 != (int *)0x0) {
      uStack_23c = 0xf;
      pcStack_240 = (char *)0x0;
      puStack_250 = (undefined4 *)((uint)puStack_250 & 0xffffff00);
      FUN_00409350("ALL_PLAYERS_HERE",0x10);
      uStack_40 = CONCAT31(uStack_40._1_3_,0x12);
      uStack_260 = uStack_260 | 8;
      pppuStack_254 = (undefined ***)FUN_009a8ee0(&uStack_218,&puStack_250);
      uStack_40 = 0x13;
      uStack_260 = uStack_260 | 0x10;
      iVar6 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
      uStack_40 = 0x14;
      uStack_260 = uStack_260 | 0x20;
      piVar8[1] = 0x18d;
      *piVar8 = (int)&PTR_FUN_00e3cffc;
      piVar8[7] = 0xf;
      piVar8[6] = 0;
      *(undefined1 *)(piVar8 + 2) = 0;
      FUN_00408ed0();
      *piVar8 = (int)&PTR_FUN_00e3d020;
    }
    uStack_40 = 0x17;
    FUN_00696b10();
    if ((uStack_260 & 0x20) != 0) {
      uStack_260 = uStack_260 & 0xffffffdf;
      if ((int *)0xf < local_1f0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1f0 = (int *)0xf;
      uStack_1f4 = 0;
      puStack_204 = (undefined1 *)((uint)puStack_204 & 0xffffff00);
    }
    if ((uStack_260 & 0x10) != 0) {
      uStack_260 = uStack_260 & 0xffffffef;
      uStack_40 = 0x18;
      FUN_009adb70();
      if (iStack_214 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iStack_214 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
    }
    uStack_40 = 0xffffffff;
    if (((uStack_260 & 8) != 0) && (0xf < uStack_23c)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  uStack_1d4 = 0xf;
  uStack_1d8 = 0;
  uStack_1e8 = 0;
  FUN_00409350("ingamelobby.cpp",0xf);
  uStack_40 = 0x19;
  puStack_25c = (uint *)FUN_004015b0();
  uStack_40 = CONCAT31(uStack_40._1_3_,0x1a);
  piVar8 = (int *)DAT_012588e8[6];
  uStack_260 = *(uint *)(*(int *)(param_1 + 0xdc) + 0x6c);
  piStack_258 = DAT_012588e8;
  if (piVar8 != (int *)0x0) {
    pppuStack_254 = (undefined ***)(DAT_012588e8 + 0x2c9);
    do {
      iVar6 = piVar8[7];
      iVar10 = (**(code **)((int)**pppuStack_254 + 0x44))();
      if (iVar6 == *(int *)(iVar10 + 0x6c)) goto LAB_0069626a;
      piVar8 = (int *)piVar8[0xf];
    } while (piVar8 != (int *)0x0);
  }
  piVar8 = piStack_258 + 10;
LAB_0069626a:
  puVar3 = puStack_25c;
  uVar7 = 0;
  FUN_00987d50(puStack_25c,"PlrLeft:Local player is ",0x18,0);
  if (0xf < (uint)piVar8[5]) {
    piVar8 = (int *)*piVar8;
  }
  uVar12 = FUN_00418e30(puVar3,piVar8);
  uVar7 = FUN_00418e30(uVar12," session id is ",uVar7,uVar7);
  piVar8 = (int *)FUN_00447240(uVar7);
  FUN_00408be0(piVar8);
  uVar5 = 0;
  if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
     (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))(),
     iVar6 == -1)) {
    uVar5 = 4;
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0xc) | uVar5;
    if (*(int *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_00401120(uVar5,0);
  }
  uStack_5c = 0x19;
  FUN_00987ac0(appuStack_b0);
  appuStack_b0[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_b0);
  puVar11 = puStack_204;
  piVar8 = local_1f0;
joined_r0x006960f5:
  if ((int *)0xf < piVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar11);
  }
  ExceptionList = pvStack_64;
  return;
}

