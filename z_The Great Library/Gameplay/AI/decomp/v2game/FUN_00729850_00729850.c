// FUN_00729850 @ 00729850 body=[[00729850, 00729977] [0072997b, 00729ac3] [00729ac7, 00729af6] [00729afa, 00729cab] [00729caf, 00729d6b] [00729d8d, 00729ecb] [00729ecf, 00729efb] [00729eff, 0072a02a] [0072a02e, 0072a05d] [0072a061, 0072a0e2] [0072a0fc, 0072a320] [0072a324, 0072a338]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00729850(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  uint uVar9;
  int *local_2d8;
  uint uStack_2d4;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  uint uStack_2c8;
  undefined4 uStack_2c4;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 *local_2b8;
  uint uStack_2b4;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  undefined4 local_298;
  uint local_290;
  undefined4 uStack_28c;
  undefined4 local_280;
  uint local_27c;
  uint uStack_278;
  undefined1 auStack_274 [16];
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined **ppuStack_1f8;
  undefined **appuStack_1f4 [5];
  undefined **appuStack_1e0 [48];
  undefined **appuStack_120 [42];
  undefined **appuStack_78 [18];
  void *pvStack_30;
  void *pvStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8a6c5;
  pvStack_14 = ExceptionList;
  piVar5 = *(int **)(DAT_012588e8 + 0xb24);
  ExceptionList = &pvStack_14;
  local_2d8 = piVar5;
  puVar2 = (undefined4 *)FUN_0068b500(DAT_012588e8);
  local_2b8 = puVar2;
  if (*(char *)(puVar2 + 10) != '\0') {
    *(undefined1 *)(puVar2 + 10) = 0;
    local_27c = 0xf;
    local_280 = 0;
    local_290 = local_290 & 0xffffff00;
    FUN_00409350("controlcommands.cpp",0x13);
    local_c = 0;
    uVar3 = FUN_004015b0(&local_290,0x29,0x10002);
    local_c._0_1_ = 1;
    FUN_00987d50(uVar3,"Human ",6,0);
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    uVar3 = FUN_00418e30(uVar3,puVar4);
    uVar3 = FUN_00418e30(uVar3," unset as primary local");
    FUN_00401280(uVar3);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00987ac0(appuStack_120);
    appuStack_120[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_120);
    local_c = 0xffffffff;
    if (0xf < local_27c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_290);
    }
    local_27c = 0xf;
    local_280 = 0;
    local_290 = local_290 & 0xffffff00;
    piVar5 = local_2d8;
  }
  iVar6 = *(int *)(in_ECX + 0x48);
  if (iVar6 != 0) {
    if (*(int *)(in_ECX + 0x40) != iVar6) {
      for (iVar1 = *(int *)(DAT_012588e8 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
        if ((*(int *)(iVar1 + 0x1c) != *(int *)(in_ECX + 0x4c)) &&
           (local_298 = *(undefined4 *)(iVar1 + 0x20), *(int *)(iVar1 + 0x24) == iVar6))
        goto LAB_00729b0f;
      }
      FUN_0068b6c0(0,*(undefined4 *)(in_ECX + 0x44),iVar6);
      uStack_2c0 = 0xf;
      uStack_2c4 = 0;
      uStack_2d4 = uStack_2d4 & 0xffffff00;
      FUN_00409350("controlcommands.cpp",0x13);
      local_c = 2;
      puVar2 = (undefined4 *)FUN_0055dd40();
      local_c._0_1_ = 3;
      uVar3 = FUN_004015b0(&uStack_2d4,0x3f,0x10001);
      local_c._0_1_ = 4;
      FUN_00987d50(uVar3,"AI will control ",0x10,0);
      if (0xf < (uint)puVar2[5]) {
        puVar2 = (undefined4 *)*puVar2;
      }
      uVar3 = FUN_00418e30(uVar3,puVar2);
      FUN_00401280(uVar3);
      local_c = CONCAT31(local_c._1_3_,3);
      FUN_00987ac0(appuStack_1e0);
      appuStack_1e0[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_1e0);
      if (0xf < uStack_2a0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_2b4);
      }
      local_c = 0xffffffff;
      uStack_2a0 = 0xf;
      uStack_2a4 = 0;
      uStack_2b4 = uStack_2b4 & 0xffffff00;
      if (0xf < uStack_2c0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_2d4);
      }
      uStack_2c0 = 0xf;
      uStack_2c4 = 0;
      uStack_2d4 = uStack_2d4 & 0xffffff00;
      puVar2 = local_2b8;
      piVar5 = local_2d8;
    }
LAB_00729b0f:
    FUN_0068c040(DAT_012588e8);
    piVar5[0x1d] = piVar5[0x1d] | 0xf;
    if ((piVar5[0x1f] - piVar5[0x1e] & 0xfffffffcU) == 0) {
      local_298 = 0xffffffff;
      FUN_004e9b90();
    }
    else {
      *(undefined4 *)piVar5[0x1e] = 0xffffffff;
    }
  }
  if ((puVar2[7] == -1) || (*(int *)(in_ECX + 0x40) == 0)) {
    uVar9 = 0;
    uStack_260 = 0xf;
    uStack_264 = 0;
    auStack_274[0] = 0;
    FUN_00409350("controlcommands.cpp",0x13);
    local_c = 0xf;
    uVar8 = FUN_004015b0(auStack_274,0x71,0x10004);
    local_c = CONCAT31(local_c._1_3_,0x10);
    FUN_00987d50(uVar8,"Attempted to assign ",0x14,0);
    uVar3 = *(undefined4 *)(in_ECX + 0x4c);
    uVar3 = FUN_00418e30(uVar8,in_ECX + 0x3c,uVar3," to nonextistant human ",uVar3,uVar3);
    uVar3 = FUN_00418e30(uVar3);
    piVar5 = (int *)FUN_00455470(uVar3);
    FUN_00408be0(piVar5);
    if (((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) &&
       (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))(),
       iVar6 == -1)) {
      uVar9 = 4;
    }
    if (uVar9 != 0) {
      uVar9 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar9;
      if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
        uVar9 = uVar9 | 4;
      }
      FUN_00401120(uVar9,0);
    }
    uStack_24 = CONCAT31(uStack_24._1_3_,0xf);
    FUN_00987ac0(appuStack_78);
    appuStack_78[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_78);
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_28c);
    }
  }
  else {
    for (iVar6 = *(int *)(DAT_012588e8 + 0x18); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x3c)) {
      local_298 = *(undefined4 *)(iVar6 + 0x20);
      if ((*(int *)(iVar6 + 0x24) == *(int *)(in_ECX + 0x40)) && (*(char *)(iVar6 + 0x28) != '\0'))
      goto LAB_00729caf;
    }
    *(undefined1 *)(puVar2 + 10) = 1;
    uStack_2c0 = 0xf;
    uStack_2c4 = 0;
    uStack_2d4 = uStack_2d4 & 0xffffff00;
    FUN_00409350("controlcommands.cpp",0x13);
    local_c = 5;
    uVar3 = FUN_004015b0(&uStack_2d4,0x59,0x10002);
    local_c = CONCAT31(local_c._1_3_,6);
    FUN_00987d50(uVar3,"Human ",6,0);
    if (0xf < (uint)puVar2[5]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar3 = FUN_00418e30(uVar3,puVar2);
    piVar5 = (int *)FUN_00418e30(uVar3," set as primary local");
    FUN_00408be0(piVar5);
    uVar9 = 0;
    if (((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) &&
       (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))(),
       iVar6 == -1)) {
      uVar9 = 4;
    }
    if (uVar9 != 0) {
      uVar9 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar9;
      if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
        uVar9 = uVar9 | 4;
      }
      FUN_00401120(uVar9,0);
    }
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_00987ac0(appuStack_1e0);
    appuStack_1e0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_1e0);
    local_c = 0xffffffff;
    if (0xf < uStack_2c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_2d4);
    }
LAB_00729caf:
    piVar5 = local_2d8;
    uVar3 = *(undefined4 *)(in_ECX + 0x40);
    local_2b8[8] = *(undefined4 *)(in_ECX + 0x3c);
    local_2b8[9] = uVar3;
    iVar6 = (**(code **)(*local_2d8 + 0x44))();
    if (*(int *)(iVar6 + 0x6c) == *(int *)(in_ECX + 0x4c)) {
      (**(code **)(*piVar5 + 0x17c))((undefined4 *)(in_ECX + 0x3c));
      iVar1 = DAT_012588e8;
      uVar3 = *(undefined4 *)(in_ECX + 0x3c);
      iVar6 = *(int *)(in_ECX + 0x40);
      iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      if (((*(char *)(iVar7 + 0x34) != '\0') &&
          (0 < (int)(*(int *)(iVar1 + 0xa8) - *(int *)(iVar1 + 0xa4) & 0xfffffffcU))) &&
         ((*(int *)(*(int *)(iVar1 + 0xaec) + iVar6 * 4) == 0 &&
          (iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar6 * 4) + 0x208), iVar7 != 0)))
         ) {
        FUN_0068e9f0();
        FUN_0044be00();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar7);
      }
      *(undefined4 *)(*(int *)(iVar1 + 0xaec) + iVar6 * 4) = 1;
      *(undefined4 *)(iVar1 + 0xb5c) = uVar3;
      *(int *)(iVar1 + 0xb60) = iVar6;
      *(undefined1 *)(iVar1 + 0x60) = 1;
      uStack_2c4 = 0xf;
      uStack_2c8 = 0;
      local_2d8 = (int *)((uint)local_2d8 & 0xffffff00);
      FUN_00409350("controlcommands.cpp",0x13);
      puStack_10 = (undefined1 *)0x8;
      puVar2 = (undefined4 *)FUN_0055dd40();
      puStack_10._0_1_ = 9;
      uVar3 = FUN_004015b0(&local_2d8,100,0x10001);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,10);
      FUN_00987d50(uVar3,"Local player will control ",0x1a,0);
      if (0xf < (uint)puVar2[5]) {
        puVar2 = (undefined4 *)*puVar2;
      }
      piVar5 = (int *)FUN_00418e30(uVar3,puVar2);
      FUN_00408be0(piVar5);
      uVar9 = 0;
      if (((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) &&
         (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))(),
         iVar6 == -1)) {
        uVar9 = 4;
      }
      if (uVar9 != 0) {
        uVar9 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar9;
        if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
          uVar9 = uVar9 | 4;
        }
        FUN_00401120(uVar9,0);
      }
      uStack_24 = CONCAT31(uStack_24._1_3_,9);
      FUN_00987ac0(&ppuStack_1f8);
      ppuStack_1f8 = std::ios_base::vftable;
      FUN_00aad52d(&ppuStack_1f8);
      if ((undefined4 *)0xf < local_2b8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_2cc);
      }
      uStack_24 = 0xffffffff;
      local_2b8 = (undefined4 *)0xf;
      uStack_2bc = 0;
      uStack_2cc = uStack_2cc & 0xffffff00;
      if ((int *)0xf < local_2d8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_ESI);
      }
      local_2d8 = (int *)0xf;
    }
    else {
      uStack_2c0 = 0xf;
      uStack_2c4 = 0;
      uStack_2d4 = uStack_2d4 & 0xffffff00;
      FUN_00409350("controlcommands.cpp",0x13);
      local_c = 0xb;
      puVar2 = (undefined4 *)FUN_0055dd40();
      local_c._0_1_ = 0xc;
      uVar3 = FUN_004015b0(&uStack_2d4,0x68,0x10001);
      local_c = CONCAT31(local_c._1_3_,0xd);
      FUN_00987d50(uVar3,"Remote player will control ",0x1b,0);
      if (0xf < (uint)puVar2[5]) {
        puVar2 = (undefined4 *)*puVar2;
      }
      piVar5 = (int *)FUN_00418e30(uVar3,puVar2);
      FUN_00408be0(piVar5);
      uVar9 = 0;
      if (((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) &&
         (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))(),
         iVar6 == -1)) {
        uVar9 = 4;
      }
      if (uVar9 != 0) {
        uVar9 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar9;
        if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
          uVar9 = uVar9 | 4;
        }
        FUN_00401120(uVar9,0);
      }
      uStack_20 = CONCAT31(uStack_20._1_3_,0xc);
      FUN_00987ac0(appuStack_1f4);
      appuStack_1f4[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_1f4);
      iVar6 = DAT_012588e8;
      if (0xf < uStack_2b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_2c8);
      }
      uStack_20 = 0xffffffff;
      uStack_2b4 = 0xf;
      local_2b8 = (undefined4 *)0x0;
      uStack_2c8 = uStack_2c8 & 0xffffff00;
      if (0xf < uStack_2d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_EBX);
      }
      iVar1 = *(int *)(in_ECX + 0x40);
      uStack_2d4 = 0xf;
      local_2d8 = (int *)0x0;
      iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      if ((((*(char *)(iVar7 + 0x34) != '\0') &&
           (0 < (int)(*(int *)(iVar6 + 0xa8) - *(int *)(iVar6 + 0xa4) & 0xfffffffcU))) &&
          (*(int *)(*(int *)(iVar6 + 0xaec) + iVar1 * 4) == 0)) &&
         (iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0x208), iVar7 != 0)) {
        FUN_0068e9f0();
        FUN_0044be00();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar7);
      }
      *(undefined4 *)(*(int *)(iVar6 + 0xaec) + iVar1 * 4) = 2;
      *(undefined1 *)(iVar6 + 0x60) = 1;
    }
    iVar7 = DAT_01258a98;
    iVar1 = DAT_01258a94;
    iVar6 = DAT_01258a98;
    if (0x1268 < DAT_00f0d870) {
      iVar6 = DAT_01258a94;
    }
    if ((iVar6 != 0) && (iVar6 = FUN_009c1d40(), iVar6 != 0)) {
      if (DAT_00f0d870 < 0x1269) {
        if (iVar7 != 0) {
          piVar5 = (int *)FUN_009c1d40();
          (**(code **)(*piVar5 + 0x2c))(uStack_2d0);
          ExceptionList = pvStack_30;
          return;
        }
      }
      else if (iVar1 != 0) {
        piVar5 = (int *)FUN_009c1d40();
        (**(code **)(*piVar5 + 0x2c))(uStack_2d0);
        ExceptionList = pvStack_30;
        return;
      }
      (**(code **)(_DAT_00000000 + 0x2c))(uStack_2d0);
      ExceptionList = pvStack_30;
      return;
    }
  }
  ExceptionList = pvStack_2c;
  return;
}

