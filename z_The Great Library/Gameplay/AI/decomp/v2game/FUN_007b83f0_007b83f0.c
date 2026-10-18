// FUN_007b83f0 @ 007b83f0 body=[[007b83f0, 007b8480] [007b8484, 007b86bc] [007b86c0, 007b87c8] [007b87cc, 007b8814] [007b8818, 007b890e] [007b8912, 007b8952] [007b8956, 007b8973] [007b8977, 007b8993] [007b8997, 007b89aa] [007b89ae, 007b89c2]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b83f0(void)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint local_308;
  undefined1 *puStack_304;
  undefined1 *puStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  uint local_2f4;
  uint auStack_2e8 [4];
  undefined4 uStack_2d8;
  uint uStack_2d4;
  uint uStack_2cc;
  undefined4 uStack_2bc;
  uint uStack_2b8;
  uint local_2b0;
  undefined4 local_2a0;
  uint local_29c;
  uint local_294;
  undefined4 local_284;
  uint local_280;
  int local_278;
  undefined **ppuStack_200;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6b59a;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00988fa0();
  local_c = 0;
  local_29c = 0xf;
  local_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffff00;
  FUN_00408ed0();
  local_c._0_1_ = 2;
  if (0xf < local_280) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_280 = 0xf;
  local_284 = 0;
  local_294 = local_294 & 0xffffff00;
  piVar3 = (int *)FUN_00a1d2a0();
  local_278 = 0;
  if (piVar3 == (int *)0x0) {
    _DAT_01258b38 = 0x10000;
  }
  else if (*piVar3 == 1) {
    piVar1 = (int *)piVar3[1];
    if (*(uint *)(*piVar1 + 4) < 0x80000000) {
      if (piVar1[1] != -1) {
        FUN_00a1c810();
      }
      piVar1[1] = -1;
      local_278 = *(int *)(*piVar1 + 4);
      _DAT_01258b38 = 0;
    }
    else {
      _DAT_01258b38 = 0x10000;
    }
  }
  else {
    _DAT_01258b38 = 0x80000;
  }
  iVar7 = 0;
  bVar2 = false;
  if (0 < local_278) {
    while( true ) {
      local_148 = 0;
      local_144 = 0;
      local_20 = local_148;
      if (piVar3 == (int *)0x0) break;
      if (*piVar3 == 1) {
        _DAT_01258b38 = FUN_00a1c9a0();
      }
      else {
        _DAT_01258b38 = 0x80000;
      }
      if (*piVar3 != 1) {
        iVar4 = 0x80000;
        goto LAB_007b85b6;
      }
      iVar4 = FUN_00a1cfc0();
      if (iVar4 != 0) goto LAB_007b85b6;
      iVar7 = iVar7 + 1;
      _DAT_01258b38 = iVar4;
      if (local_278 <= iVar7) goto LAB_007b86c2;
      _DAT_01258b38 = 0;
    }
    iVar4 = 0x10000;
LAB_007b85b6:
    bVar2 = true;
    local_2f4 = 0xf;
    local_2f8 = 0;
    local_308 = local_308 & 0xffffff00;
    _DAT_01258b38 = iVar4;
    FUN_00409350("microinterface.cpp",0x12);
    local_c._0_1_ = 3;
    uVar5 = FUN_004015b0();
    local_c = CONCAT31(local_c._1_3_,4);
    FUN_00987d50(uVar5,"Micro unzip error << ",0x15,0);
    piVar3 = (int *)FUN_00447240(uVar5,iVar4);
    FUN_00408be0(piVar3);
    uVar8 = 0;
    if (((*(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3) & 6) == 0) &&
       (iVar7 = (**(code **)(**(int **)(*(int *)(*piVar3 + 4) + 0x38 + (int)piVar3) + 0x34))(),
       iVar7 == -1)) {
      uVar8 = 4;
    }
    if (uVar8 != 0) {
      uVar8 = *(uint *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0xc) | uVar8;
      if (*(int *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x38) == 0) {
        uVar8 = uVar8 | 4;
      }
      FUN_00401120(uVar8,0);
    }
    local_c._0_1_ = 3;
    FUN_00987ac0();
    ppuStack_200 = std::ios_base::vftable;
    FUN_00aad52d();
    local_c._0_1_ = 2;
    if (0xf < local_2f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_007b86c2:
  FUN_00a1d3a0();
  uStack_2d4 = 0xf;
  uStack_2d8 = 0;
  auStack_2e8[0] = auStack_2e8[0] & 0xffffff00;
  if (bVar2) {
    FUN_00409350("ME_INSTALL_FAIL",0xf);
    local_c._0_1_ = 0xb;
    FUN_009a8ee0(&local_308,auStack_2e8);
    local_c._0_1_ = 0xc;
    puVar6 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar7 = FUN_00aae9af();
      local_c._0_1_ = 0xd;
      if (iVar7 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)FUN_00475150();
      }
      local_c._0_1_ = 0xe;
      if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar6;
    local_c._0_1_ = 0xc;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    local_c._0_1_ = 0xf;
    FUN_007b68a0();
    if (0xf < uStack_2b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_2b8 = 0xf;
    uStack_2bc = 0;
    uStack_2cc = uStack_2cc & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,0x10);
    FUN_009adb70();
    if (puStack_304 == (undefined1 *)0x0) goto LAB_007b8977;
    for (; puStack_304 != puStack_300; puStack_304 = puStack_304 + 0x20) {
      if (0xf < *(uint *)(puStack_304 + 0x14)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(puStack_304 + 0x14) = 0xf;
      *(undefined4 *)(puStack_304 + 0x10) = 0;
      *puStack_304 = 0;
    }
  }
  else {
    FUN_00409350("ME_INSTALL_SUCCESS",0x12);
    local_c._0_1_ = 5;
    FUN_009a8ee0(&local_308,auStack_2e8);
    local_c._0_1_ = 6;
    puVar6 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar7 = FUN_00aae9af();
      local_c._0_1_ = 7;
      if (iVar7 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)FUN_00475150();
      }
      local_c._0_1_ = 8;
      if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar6;
    local_c._0_1_ = 6;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    local_c._0_1_ = 9;
    FUN_007b68a0();
    if (0xf < uStack_2b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_2b8 = 0xf;
    uStack_2bc = 0;
    uStack_2cc = uStack_2cc & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,10);
    FUN_009adb70();
    if (puStack_304 == (undefined1 *)0x0) {
LAB_007b8977:
      uStack_2fc = 0;
      puStack_300 = (undefined1 *)0x0;
      puStack_304 = (undefined1 *)0x0;
      if (0xf < uStack_2d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = pvStack_14;
      return;
    }
    for (; puStack_304 != puStack_300; puStack_304 = puStack_304 + 0x20) {
      if (0xf < *(uint *)(puStack_304 + 0x14)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(puStack_304 + 0x14) = 0xf;
      *(undefined4 *)(puStack_304 + 0x10) = 0;
      *puStack_304 = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

