// FUN_009d1cf0 @ 009d1cf0 body=[[009d1cf0, 009d1df9] [009d1e00, 009d1e8e] [009d1e92, 009d1eb5] [009d1eb9, 009d1edf] [009d1ee3, 009d1fe0] [009d1fe4, 009d21d1] [009d21d5, 009d2224] [009d2228, 009d2323] [009d2327, 009d234a] [009d234e, 009d2371] [009d2375, 009d2472] [009d2476, 009d262e] [009d2632, 009d2685] [009d2689, 009d26a5] [009d26a9, 009d26bf]]


void FUN_009d1cf0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *unaff_EDI;
  uint uVar6;
  bool bVar7;
  undefined4 *local_618;
  int local_614;
  uint local_610 [4];
  undefined4 local_600;
  uint local_5fc;
  undefined4 *local_5f4;
  undefined4 *local_5f0;
  undefined4 local_5ec;
  uint local_5e4 [4];
  undefined4 local_5d4;
  uint local_5d0;
  undefined4 *local_5c8;
  undefined4 *local_5c4;
  undefined4 *local_5c0;
  uint local_5bc;
  undefined4 local_5ac;
  uint local_5a8;
  undefined1 local_5a0 [16];
  undefined1 local_590 [16];
  int local_580;
  undefined1 local_574 [44];
  int local_548;
  int local_52c;
  undefined4 local_4c4;
  int local_4c0;
  int local_4bc;
  int local_4a8;
  uint local_498 [5];
  uint local_484;
  undefined **appuStack_420 [42];
  undefined **local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined1 local_368;
  undefined1 local_364;
  undefined4 *local_35c;
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b61803;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00e36bf0,3);
  local_5c8 = param_1 + 7;
  FUN_00409350(&DAT_00e36bec,3);
  FUN_009d3d20(*(undefined4 *)(param_1[0x25] + 4));
  *(undefined4 *)(param_1[0x25] + 4) = param_1[0x25];
  *(undefined4 *)param_1[0x25] = param_1[0x25];
  *(undefined4 *)(param_1[0x25] + 8) = param_1[0x25];
  local_5c0 = param_1 + 0x28;
  param_1[0x26] = 0;
  FUN_009d3d20(*(undefined4 *)(param_1[0x29] + 4));
  *(undefined4 *)(param_1[0x29] + 4) = param_1[0x29];
  *(undefined4 *)param_1[0x29] = param_1[0x29];
  *(undefined4 *)(param_1[0x29] + 8) = param_1[0x29];
  param_1[0x2a] = 0;
  local_5f4 = (undefined4 *)0x0;
  local_5f0 = (undefined4 *)0x0;
  local_5ec = 0;
  local_c = 0;
  puVar3 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar3 = (undefined4 *)*param_1;
  }
  FUN_00992240(puVar3,&local_5f4,&DAT_00e3b304);
  local_614 = ((int)local_5f0 - (int)local_5f4) / 0x1c;
  if (0 < local_614) {
    local_618 = local_5f4;
    do {
      FUN_009d1050();
      local_c._0_1_ = 1;
      local_5fc = 0xf;
      local_600 = 0;
      local_610[0] = local_610[0] & 0xffffff00;
      FUN_00409350(&DAT_00dedc68,1);
      local_c._0_1_ = 2;
      FUN_00988f20(local_610);
      local_c._0_1_ = 3;
      uVar2 = FUN_00988f20(local_618);
      local_c._0_1_ = 4;
      FUN_00408ed0(uVar2,0,0xffffffff);
      if (0xf < local_5d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5e4[0]);
      }
      local_5d0 = 0xf;
      local_5d4 = 0;
      local_5e4[0] = local_5e4[0] & 0xffffff00;
      if (0xf < local_5a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5bc);
      }
      local_c._0_1_ = 1;
      local_5a8 = 0xf;
      local_5ac = 0;
      local_5bc = local_5bc & 0xffffff00;
      if (0xf < local_5fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_610[0]);
      }
      local_5fc = 0xf;
      local_600 = 0;
      local_610[0] = local_610[0] & 0xffffff00;
      FUN_00409350("UNNAMED_SESSION",0xf);
      local_c._0_1_ = 5;
      puVar3 = (undefined4 *)FUN_00aae9af(0x114);
      local_c._0_1_ = 6;
      local_5c4 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        local_35c = (undefined4 *)0x0;
      }
      else {
        FUN_0098ffc0(local_574);
        *puVar3 = &PTR_FUN_00e37c3c;
        local_35c = puVar3;
      }
      local_378 = &PTR_FUN_00e38524;
      local_374 = 0;
      local_370 = 0;
      local_36c = 0;
      local_368 = 0;
      local_c._0_1_ = 7;
      local_364 = 0;
      local_38 = 0xf;
      local_3c = 0;
      local_4c = 0;
      FUN_00408ed0(local_610,0,0xffffffff);
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_20 = 1;
      local_1c = 0;
      local_c._0_1_ = 9;
      if (0xf < local_5fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_610[0]);
      }
      local_5fc = 0xf;
      local_600 = 0;
      local_610[0] = local_610[0] & 0xffffff00;
      FUN_009a2a90(&local_378);
      if ((local_580 == 0) || ((local_52c == 0 && (local_548 == 0)))) {
switchD_009d2038_default:
        local_5d0 = 0xf;
        local_5d4 = 0;
        local_5e4[0] = local_5e4[0] & 0xffffff00;
        FUN_00409350("dlc.cpp",7);
        local_c._0_1_ = 0xb;
        uVar2 = FUN_004015b0(local_5e4,0x148,0x1000);
        local_c = CONCAT31(local_c._1_3_,0xc);
        FUN_00987d50(uVar2,"Incorrect DLC descriptor: \"",0x1b,0);
        puVar3 = unaff_EDI;
        if (0xf < (uint)unaff_EDI[5]) {
          puVar3 = (undefined4 *)*unaff_EDI;
        }
        uVar2 = FUN_00418e30(uVar2,puVar3);
        piVar4 = (int *)FUN_00418e30(uVar2,&DAT_00dfaf28);
        FUN_00408be0(piVar4);
        uVar6 = 0;
        if (((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
           (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))(),
           iVar5 == -1)) {
          uVar6 = 4;
        }
        if (uVar6 != 0) {
          uVar6 = *(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar6;
          if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
            uVar6 = uVar6 | 4;
          }
          FUN_00401120(uVar6,0);
        }
        local_c = CONCAT31(local_c._1_3_,0xb);
        FUN_00987ac0(appuStack_420);
        appuStack_420[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_420);
        uVar6 = local_5e4[0];
        uVar1 = local_5d0;
      }
      else {
        switch(local_4c4) {
        case 1:
          bVar7 = local_4c0 == 0;
          break;
        case 2:
          bVar7 = local_4a8 == 0;
          break;
        case 3:
          bVar7 = local_4bc == 0;
          break;
        case 4:
          goto switchD_009d2038_caseD_4;
        default:
          goto switchD_009d2038_default;
        }
        if (bVar7) goto switchD_009d2038_default;
switchD_009d2038_caseD_4:
        FUN_009d4010(local_498,local_590);
        local_c = CONCAT31(local_c._1_3_,10);
        uVar2 = FUN_009d4410(param_1 + 0x24);
        FUN_009d4080(param_1 + 0x24,local_5a0,uVar2);
        FUN_009d1130();
        uVar6 = local_498[0];
        uVar1 = local_484;
      }
      if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uVar6);
      }
      local_c._1_3_ = (uint3)((uint)local_c >> 8);
      local_c._0_1_ = 1;
      FUN_009a0dc0();
      local_c = (uint)local_c._1_3_ << 8;
      FUN_009d1130();
      local_618 = local_618 + 7;
      local_614 = local_614 + -1;
    } while (local_614 != 0);
  }
  puVar3 = local_5f4;
  if (local_5f4 != local_5f0) {
    do {
      if (0xf < (uint)puVar3[5]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar3);
      }
      puVar3[5] = 0xf;
      puVar3[4] = 0;
      *(undefined1 *)puVar3 = 0;
      puVar3 = puVar3 + 7;
    } while (puVar3 != local_5f0);
    local_5f0 = local_5f4;
  }
  puVar3 = local_5c8;
  if (0xf < (uint)local_5c8[5]) {
    puVar3 = (undefined4 *)*local_5c8;
  }
  FUN_00992240(puVar3,&local_5f4,&DAT_00df7dd8);
  local_614 = ((int)local_5f0 - (int)local_5f4) / 0x1c;
  if (0 < local_614) {
    local_618 = local_5f4;
    do {
      FUN_009d1050();
      local_c._0_1_ = 0xd;
      local_5d0 = 0xf;
      local_5d4 = 0;
      local_5e4[0] = local_5e4[0] & 0xffffff00;
      FUN_00409350(&DAT_00dedc68,1);
      local_c._0_1_ = 0xe;
      FUN_00988f20(local_5e4);
      local_c._0_1_ = 0xf;
      uVar2 = FUN_00988f20(local_618);
      local_c._0_1_ = 0x10;
      FUN_00408ed0(uVar2,0,0xffffffff);
      if (0xf < local_5a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5bc);
      }
      local_5a8 = 0xf;
      local_5ac = 0;
      local_5bc = local_5bc & 0xffffff00;
      if (0xf < local_5fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_610[0]);
      }
      local_c._0_1_ = 0xd;
      local_5fc = 0xf;
      local_600 = 0;
      uVar6 = local_610[0] >> 8;
      local_610[0] = uVar6 << 8;
      if (0xf < local_5d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5e4[0]);
      }
      local_5fc = 0xf;
      local_600 = 0;
      local_610[0] = uVar6 << 8;
      FUN_00409350("UNNAMED_SESSION",0xf);
      local_c._0_1_ = 0x11;
      puVar3 = (undefined4 *)FUN_00aae9af(0x114);
      local_c._0_1_ = 0x12;
      local_5c4 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        local_35c = (undefined4 *)0x0;
      }
      else {
        FUN_0098ffc0(local_574);
        *puVar3 = &PTR_FUN_00e37c3c;
        local_35c = puVar3;
      }
      local_378 = &PTR_FUN_00e38524;
      local_374 = 0;
      local_370 = 0;
      local_36c = 0;
      local_368 = 0;
      local_c._0_1_ = 0x13;
      local_364 = 0;
      local_38 = 0xf;
      local_3c = 0;
      local_4c = 0;
      FUN_00408ed0(local_610,0,0xffffffff);
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_20 = 1;
      local_1c = 0;
      local_c._0_1_ = 0x15;
      if (0xf < local_5fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_610[0]);
      }
      local_5fc = 0xf;
      local_600 = 0;
      local_610[0] = local_610[0] & 0xffffff00;
      FUN_009a2a90(&local_378);
      local_4c4 = 4;
      if ((local_580 == 0) || ((local_52c == 0 && (local_548 == 0)))) {
        local_5d0 = 0xf;
        local_5d4 = 0;
        local_5e4[0] = local_5e4[0] & 0xffffff00;
        FUN_00409350("dlc.cpp",7);
        local_c._0_1_ = 0x17;
        uVar2 = FUN_004015b0(local_5e4,0x15e,0x1000);
        local_c = CONCAT31(local_c._1_3_,0x18);
        FUN_00987d50(uVar2,"Incorrect MOD descriptor: \"",0x1b,0);
        puVar3 = unaff_EDI;
        if (0xf < (uint)unaff_EDI[5]) {
          puVar3 = (undefined4 *)*unaff_EDI;
        }
        uVar2 = FUN_00418e30(uVar2,puVar3);
        piVar4 = (int *)FUN_00418e30(uVar2,&DAT_00dfaf28);
        FUN_00408be0(piVar4);
        uVar6 = 0;
        if (((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
           (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))(),
           iVar5 == -1)) {
          uVar6 = 4;
        }
        if (uVar6 != 0) {
          uVar6 = *(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar6;
          if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
            uVar6 = uVar6 | 4;
          }
          FUN_00401120(uVar6,0);
        }
        local_c = CONCAT31(local_c._1_3_,0x17);
        FUN_00987ac0(appuStack_420);
        appuStack_420[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_420);
        uVar6 = local_5e4[0];
        uVar1 = local_5d0;
      }
      else {
        FUN_009d4010(local_498,local_590);
        puVar3 = local_5c0;
        local_c = CONCAT31(local_c._1_3_,0x16);
        uVar2 = FUN_009d4410(local_5c0);
        FUN_009d4080(puVar3,local_5a0,uVar2);
        FUN_009d1130();
        uVar6 = local_498[0];
        uVar1 = local_484;
      }
      if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uVar6);
      }
      local_c._1_3_ = (uint3)((uint)local_c >> 8);
      local_c._0_1_ = 0xd;
      FUN_009a0dc0();
      local_c = (uint)local_c._1_3_ << 8;
      FUN_009d1130();
      local_618 = local_618 + 7;
      local_614 = local_614 + -1;
    } while (local_614 != 0);
  }
  puVar3 = local_5f4;
  if (local_5f4 == (undefined4 *)0x0) {
    ExceptionList = local_14;
    return;
  }
  while( true ) {
    if (puVar3 == local_5f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5f4);
    }
    if (0xf < (uint)puVar3[5]) break;
    puVar3[5] = 0xf;
    puVar3[4] = 0;
    *(undefined1 *)puVar3 = 0;
    puVar3 = puVar3 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar3);
}

