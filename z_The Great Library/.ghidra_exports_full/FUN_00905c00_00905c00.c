// FUN_00905c00 @ 00905c00 body=[[00905c00, 00906095] [00906099, 009060bd] [009060c1, 0090620c] [00906210, 00906234] [00906238, 00906383] [00906387, 009063ab] [009063af, 009064d1] [009064d5, 009064f9] [009064fd, 009069db]]


void FUN_00905c00(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int in_ECX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 auStackY_2d8 [21];
  undefined4 uStackY_284;
  undefined1 *puStackY_280;
  undefined4 uStackY_27c;
  undefined1 **ppuStackY_278;
  undefined4 uStackY_274;
  uint *puStackY_270;
  undefined4 uStackY_26c;
  undefined1 *puStackY_268;
  undefined4 uStackY_260;
  undefined4 uStackY_25c;
  undefined4 uStackY_258;
  undefined4 uStackY_254;
  undefined1 auStackY_250 [104];
  undefined4 uStackY_1e8;
  int iStack_1bc;
  undefined1 *local_1b4;
  undefined1 *local_1a8;
  undefined1 *local_1a4;
  int local_1a0;
  undefined1 local_19c;
  uint local_198 [4];
  undefined4 local_188;
  uint local_184;
  uint local_17c;
  undefined4 local_16c;
  uint local_168;
  int local_160;
  int local_15c;
  undefined1 local_158;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_13c;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  char acStack_120 [268];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9d1dd;
  local_14 = ExceptionList;
  iVar7 = 0;
  ExceptionList = &local_14;
  if (DAT_01319730 == 0) {
    ExceptionList = &local_14;
    iVar4 = FUN_00aae9af();
    local_c = 0;
    if (iVar4 != 0) {
      FUN_008750a0();
    }
    local_c = 0xffffffff;
    FUN_00876010();
  }
  local_160 = FUN_005c2ad0();
  if (local_160 == 0) {
    if (DAT_01319730 == 0) {
      iVar4 = FUN_00aae9af();
      local_c = 1;
      if (iVar4 != 0) {
        FUN_008750a0();
      }
      local_c = 0xffffffff;
      FUN_00876010();
    }
    local_160 = FUN_005c2ad0();
    if (local_160 == 0) {
      ExceptionList = local_14;
      return;
    }
  }
  local_15c = in_ECX + 0x58;
  *(int *)(in_ECX + 0x7c) = local_15c;
  FUN_0042b9f0();
  piVar5 = (int *)FUN_005061e0();
  local_1a8 = (undefined1 *)0x0;
  local_1a4 = (undefined1 *)0x0;
  local_1a0 = 0;
  local_19c = 0;
  iVar4 = *piVar5;
  while (iVar4 != 0) {
    iVar4 = *(int *)(iVar4 + 0x3c);
    FUN_0042b730();
  }
  local_c._0_1_ = 2;
  local_c._1_3_ = 0;
  if (*(int *)(in_ECX + 100) == 0) {
    iVar4 = *(int *)(in_ECX + 0x68);
    if (iVar4 == 0) goto LAB_009060c1;
    if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar4 * 4) + 300) != 0) {
      FUN_009885d0();
      local_c._0_1_ = 8;
      FUN_0055dd40();
      local_c._0_1_ = 9;
      FUN_00424aa0();
      puVar1 = local_1a4;
      local_c._0_1_ = 10;
      local_1b4 = local_1a4;
      puVar6 = (undefined1 *)FUN_00aae9af();
      local_c._0_1_ = 0xb;
      uVar2 = (undefined1)local_c;
      local_c._0_1_ = 0xb;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)0x0;
        local_c._0_1_ = uVar2;
      }
      else {
        *(undefined4 *)(puVar6 + 0x14) = 0xf;
        *(undefined4 *)(puVar6 + 0x10) = 0;
        *puVar6 = 0;
        FUN_00408ed0();
        local_c._0_1_ = 0xc;
        *(undefined4 *)(puVar6 + 0x30) = 0xf;
        *(undefined4 *)(puVar6 + 0x2c) = 0;
        puVar6[0x1c] = 0;
        FUN_00408ed0();
        *(undefined1 **)(puVar6 + 0x38) = puVar1;
        *(undefined4 *)(puVar6 + 0x3c) = 0;
        puVar6[0x40] = 0;
      }
      puVar3 = puVar6;
      if (local_1a0 != 0) {
        *(undefined1 **)(puVar1 + 0x3c) = puVar6;
        puVar3 = local_1a8;
      }
      local_1a8 = puVar3;
      local_1a4 = puVar6;
      local_1a0 = local_1a0 + 1;
      FUN_00a39a80();
      FUN_00408ad0();
      local_c._0_1_ = 2;
      FUN_00408ad0();
      goto LAB_009060c1;
    }
    if (iVar4 == 0) goto LAB_009060c1;
    FUN_009885d0();
    local_c._0_1_ = 0xd;
    (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x68) * 4) + 0x1c))()
    ;
    local_c._0_1_ = 0xe;
    FUN_00424aa0();
    puVar1 = local_1a4;
    local_c._0_1_ = 0xf;
    local_1b4 = local_1a4;
    puVar6 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 0x10;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      FUN_00408ed0();
      local_c._0_1_ = 0x11;
      *(undefined4 *)(puVar6 + 0x30) = 0xf;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      puVar6[0x1c] = 0;
      FUN_00408ed0();
      *(undefined1 **)(puVar6 + 0x38) = puVar1;
      *(undefined4 *)(puVar6 + 0x3c) = 0;
      puVar6[0x40] = 0;
    }
    iVar4 = local_1a0 + 1;
    bVar10 = local_1a0 != 0;
    local_1a4 = puVar6;
    local_1a0 = iVar4;
    if (bVar10) {
      *(undefined1 **)(puVar1 + 0x3c) = puVar6;
      puVar6 = local_1a8;
    }
  }
  else {
    local_184 = 0xf;
    local_188 = 0;
    local_198[0] = local_198[0] & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 3;
    FUN_0055dd40();
    local_c._0_1_ = 4;
    local_1b4 = (undefined1 *)FUN_00424aa0();
    puVar1 = local_1a4;
    local_c._0_1_ = 5;
    puVar6 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 6;
    uVar2 = (undefined1)local_c;
    local_c._0_1_ = 6;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      local_c._0_1_ = uVar2;
    }
    else {
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      FUN_00408ed0();
      local_c._0_1_ = 7;
      *(undefined4 *)(puVar6 + 0x30) = 0xf;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      puVar6[0x1c] = 0;
      FUN_00408ed0();
      *(undefined1 **)(puVar6 + 0x38) = puVar1;
      *(undefined4 *)(puVar6 + 0x3c) = 0;
      puVar6[0x40] = 0;
    }
    iVar4 = local_1a0 + 1;
    bVar10 = local_1a0 != 0;
    local_1a4 = puVar6;
    local_1a0 = iVar4;
    if (bVar10) {
      *(undefined1 **)(puVar1 + 0x3c) = puVar6;
      puVar6 = local_1a8;
    }
  }
  local_1a8 = puVar6;
  FUN_00a39a80();
  if (0xf < local_168) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 2;
  local_17c = local_17c & 0xffffff00;
  local_16c = 0;
  local_168 = 0xf;
  if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_009060c1:
  local_184 = 0xf;
  local_188 = 0;
  local_198[0] = local_198[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 0x12;
  FUN_00874950();
  local_c._0_1_ = 0x13;
  local_144 = 0xf;
  local_148 = 0;
  local_158 = 0;
  FUN_00408ed0();
  local_c._0_1_ = 0x14;
  local_128 = 0xf;
  local_12c = 0;
  local_13c = 0;
  FUN_00408ed0();
  puVar1 = local_1a4;
  local_c._0_1_ = 0x15;
  puVar6 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 0x16;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 0x16;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    local_c._0_1_ = uVar2;
  }
  else {
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *puVar6 = 0;
    FUN_00408ed0();
    local_c._0_1_ = 0x17;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    puVar6[0x1c] = 0;
    FUN_00408ed0();
    *(undefined1 **)(puVar6 + 0x38) = puVar1;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
  }
  puVar3 = puVar6;
  if (local_1a0 != 0) {
    *(undefined1 **)(puVar1 + 0x3c) = puVar6;
    puVar3 = local_1a8;
  }
  local_1a8 = puVar3;
  local_1a4 = puVar6;
  local_1a0 = local_1a0 + 1;
  FUN_00a39a80();
  if (0xf < local_168) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 2;
  local_168 = 0xf;
  local_16c = 0;
  local_17c = local_17c & 0xffffff00;
  if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_184 = 0xf;
  local_188 = 0;
  local_198[0] = local_198[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 0x18;
  FUN_00874aa0();
  local_c._0_1_ = 0x19;
  local_144 = 0xf;
  local_148 = 0;
  local_158 = 0;
  FUN_00408ed0();
  local_c._0_1_ = 0x1a;
  local_128 = 0xf;
  local_12c = 0;
  local_13c = 0;
  FUN_00408ed0();
  puVar1 = local_1a4;
  local_c._0_1_ = 0x1b;
  puVar6 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 0x1c;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 0x1c;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    local_c._0_1_ = uVar2;
  }
  else {
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *puVar6 = 0;
    FUN_00408ed0();
    local_c._0_1_ = 0x1d;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    puVar6[0x1c] = 0;
    FUN_00408ed0();
    *(undefined1 **)(puVar6 + 0x38) = puVar1;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
  }
  puVar3 = puVar6;
  if (local_1a0 != 0) {
    *(undefined1 **)(puVar1 + 0x3c) = puVar6;
    puVar3 = local_1a8;
  }
  local_1a8 = puVar3;
  local_1a4 = puVar6;
  local_1a0 = local_1a0 + 1;
  FUN_00a39a80();
  if (local_168 < 0x10) {
    local_c._0_1_ = 2;
    local_168 = 0xf;
    local_16c = 0;
    local_17c = local_17c & 0xffffff00;
    if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (*(int *)(in_ECX + 0x68) != 0) {
      local_184 = 0xf;
      local_188 = 0;
      local_198[0] = local_198[0] & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 0x1e;
      (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x68) * 4) + 0x1c))
                ();
      local_c._0_1_ = 0x1f;
      FUN_00424aa0();
      puVar1 = local_1a4;
      local_c._0_1_ = 0x20;
      local_1b4 = local_1a4;
      puVar6 = (undefined1 *)FUN_00aae9af();
      local_c._0_1_ = 0x21;
      uVar2 = (undefined1)local_c;
      local_c._0_1_ = 0x21;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)0x0;
        local_c._0_1_ = uVar2;
      }
      else {
        *(undefined4 *)(puVar6 + 0x14) = 0xf;
        *(undefined4 *)(puVar6 + 0x10) = 0;
        *puVar6 = 0;
        FUN_00408ed0();
        local_c._0_1_ = 0x22;
        *(undefined4 *)(puVar6 + 0x30) = 0xf;
        *(undefined4 *)(puVar6 + 0x2c) = 0;
        puVar6[0x1c] = 0;
        FUN_00408ed0();
        *(undefined1 **)(puVar6 + 0x38) = puVar1;
        *(undefined4 *)(puVar6 + 0x3c) = 0;
        puVar6[0x40] = 0;
      }
      puVar3 = puVar6;
      if (local_1a0 != 0) {
        *(undefined1 **)(puVar1 + 0x3c) = puVar6;
        puVar3 = local_1a8;
      }
      local_1a8 = puVar3;
      local_1a4 = puVar6;
      local_1a0 = local_1a0 + 1;
      FUN_00a39a80();
      if (0xf < local_168) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c._0_1_ = 2;
      local_168 = 0xf;
      local_16c = 0;
      local_17c = local_17c & 0xffffff00;
      if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_c._0_1_ = 2;
    local_168 = 0xf;
    local_16c = 0;
    FUN_008a8dc0();
    if (*(int *)(in_ECX + 100) == *(int *)(DAT_012588e8 + 0xb60)) {
      if (*(int *)(in_ECX + 0x68) == 0) {
        FUN_009885d0();
        local_c._0_1_ = 0x26;
        FUN_009885d0();
        local_c._0_1_ = 0x27;
        uStackY_25c = 0;
        uStackY_260 = 0x2d2d2d;
        uStackY_258 = 0;
        uStackY_254 = 0;
        puStackY_268 = local_1b4;
        uStackY_26c = 0;
        puStackY_270 = local_198;
        ppuStackY_278 = &local_1a8;
        uStackY_274 = 0;
        uStackY_27c = 0x906664;
        FUN_006a4f40();
        uStackY_27c = 0x906672;
        uStackY_27c = FUN_006a55b0();
        uStackY_284 = 0x906679;
        puStackY_280 = auStackY_250;
        FUN_006a7ed0();
        uStackY_254 = 0;
        local_c._0_1_ = 0x28;
        uStackY_25c = 0x906688;
        uStackY_25c = FUN_006a4f40();
        local_c._0_1_ = 0x27;
      }
      else {
        FUN_009885d0();
        local_c._0_1_ = 0x23;
        FUN_009885d0();
        local_c._0_1_ = 0x24;
        uStackY_25c = 0;
        uStackY_260 = 0x2d2d2d;
        uStackY_258 = 0;
        uStackY_254 = 0;
        puStackY_268 = local_1b4;
        uStackY_26c = 0;
        puStackY_270 = local_198;
        ppuStackY_278 = &local_1a8;
        uStackY_274 = 0;
        uStackY_27c = 0x9065b5;
        FUN_006a4f40();
        uStackY_27c = 0x9065c3;
        uStackY_27c = FUN_006a55b0();
        uStackY_284 = 0x9065ca;
        puStackY_280 = auStackY_250;
        FUN_006a7ed0();
        uStackY_254 = 0;
        local_c._0_1_ = 0x25;
        uStackY_25c = 0x9065d9;
        uStackY_25c = FUN_006a4f40();
        local_c._0_1_ = 0x24;
      }
      uStackY_260 = 0x906696;
      FUN_00906f00();
      FUN_00408ad0();
      local_c = CONCAT31(local_c._1_3_,2);
      FUN_00408ad0();
    }
    else {
      if (*(int *)(in_ECX + 0x68) == 0) {
        FUN_009885d0();
        local_c._0_1_ = 0x2c;
        FUN_009885d0();
        local_c._0_1_ = 0x2d;
        uStackY_25c = 0;
        uStackY_260 = 0x2d2d2d;
        uStackY_258 = 0;
        uStackY_254 = 0;
        puStackY_268 = local_1b4;
        uStackY_26c = 0;
        puStackY_270 = local_198;
        ppuStackY_278 = &local_1a8;
        uStackY_274 = 0;
        uStackY_27c = 0x9067ef;
        FUN_006a4f40();
        uStackY_27c = 0x9067fd;
        uStackY_27c = FUN_006a55b0();
        uStackY_284 = 0x906804;
        puStackY_280 = auStackY_250;
        FUN_006a7ed0();
        uStackY_254 = 0;
        local_c._0_1_ = 0x2e;
        uStackY_25c = 0x906813;
        uStackY_25c = FUN_006a4f40();
        local_c._0_1_ = 0x2d;
      }
      else {
        FUN_009885d0();
        local_c._0_1_ = 0x29;
        FUN_009885d0();
        local_c._0_1_ = 0x2a;
        uStackY_25c = 0;
        uStackY_258 = 0;
        uStackY_254 = 0;
        uStackY_260 = 0x2d2d2d;
        puStackY_268 = local_1b4;
        uStackY_26c = 0;
        puStackY_270 = local_198;
        ppuStackY_278 = &local_1a8;
        uStackY_274 = 0;
        uStackY_27c = 0x906740;
        FUN_006a4f40();
        uStackY_27c = 0x90674e;
        uStackY_27c = FUN_006a55b0();
        uStackY_284 = 0x906755;
        puStackY_280 = auStackY_250;
        FUN_006a7ed0();
        uStackY_254 = 0;
        local_c._0_1_ = 0x2b;
        uStackY_25c = 0x906764;
        uStackY_25c = FUN_006a4f40();
        local_c._0_1_ = 0x2a;
      }
      uStackY_260 = 0x906821;
      FUN_00906f00();
      FUN_00408ad0();
      local_c = CONCAT31(local_c._1_3_,2);
      FUN_00408ad0();
    }
    iVar4 = *(int *)(local_15c + 0x20);
    if (iVar4 != 0) {
      *(int *)(local_15c + 0x40) = iVar4;
      *(int *)(local_15c + 0x44) = iVar4;
    }
    FUN_00874c80();
    FUN_00515490();
    if (*(int *)(in_ECX + 0x68) != 0) {
      FUN_004b2610();
    }
    FUN_0050ea30();
    FUN_00515490();
    FUN_00520150();
    iVar4 = FUN_00aae9af();
    if (iVar4 != 0) {
      iVar7 = FUN_005ea020();
    }
    uStack_124 = 0xf;
    uStackY_1e8 = 0x906945;
    __snprintf(acStack_120,0xff,"%s");
    puVar8 = &uStack_124;
    puVar9 = auStackY_2d8;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_005e9f50();
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iStack_1bc + 100) * 4);
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    (**(code **)(*(int *)(iVar4 + 0x9b4) + 0x18))();
    if (*(int *)(iStack_1bc + 100) == *(int *)(DAT_012588e8 + 0xb60)) {
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))();
    }
    FUN_0042b9f0();
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

