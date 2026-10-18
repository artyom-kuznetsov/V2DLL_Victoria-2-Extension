// FUN_0077f860 @ 0077f860 body=[[0077f860, 0077faaa] [0077faae, 0077fafd] [0077fb01, 0077fb43] [0077fb47, 0077fb91] [0077fb95, 0077fc04] [0077fc08, 0077fc28] [0077fc2c, 0077fc6b] [0077fc6f, 0077fcaf] [0077fcb3, 0077fcf3] [0077fcf7, 0077fd54] [0077fd58, 0077fd97] [0077fd9b, 0077fddb] [0077fddf, 0077fe1f] [0077fe23, 0077feb1] [0077feb5, 0077ff02] [0077ff06, 0077ff53] [0077ff57, 00780021] [00780025, 00780049] [0078004d, 00780139] [0078013d, 00780158] [0078015c, 007801b1] [007801b5, 007801fc] [00780200, 00780258] [0078025c, 00780317] [0078031b, 0078033f] [00780343, 007803b0] [007803b4, 00780400]]


int * FUN_0077f860(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b91c72;
  local_10 = ExceptionList;
  iVar10 = 0;
  local_14 = (int *)0x0;
  ExceptionList = &local_10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (int)param_2;
  param_1[8] = -1;
  param_1[9] = (int)CButtonObserverGlue<CCombatView>::vftable;
  param_1[10] = (int)param_1;
  param_1[0xb] = (int)&LAB_00787140;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 43800000;
  param_1[0x15] = DAT_01259abc;
  param_1[0x286] = 0;
  param_1[0x287] = 1;
  param_1[0x289] = (int)CButtonObserverGlue<CCombatView>::vftable;
  param_1[0x28a] = (int)param_1;
  param_1[0x28b] = (int)FUN_00780890;
  param_1[0x28c] = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x293] = 0;
  param_1[0x294] = (int)CButtonObserverGlue<CCombatView>::vftable;
  param_1[0x295] = (int)param_1;
  param_1[0x296] = (int)FUN_00780930;
  param_1[0x297] = 0;
  param_1[0x298] = 0;
  param_1[0x299] = 0;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  param_1[0x29e] = 0;
  param_1[0x29f] = (int)CButtonObserverGlue<CCombatView>::vftable;
  param_1[0x2a0] = (int)param_1;
  param_1[0x2a1] = (int)FUN_007809e0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  *(undefined1 *)(param_1 + 0x2ab) = 0;
  param_1[0x2ac] = 0;
  *(undefined1 *)(param_1 + 0x2ad) = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = DAT_01268fec;
  param_1[0x2b0] = DAT_01268ff0;
  param_1[0x2b6] = 0xf;
  param_1[0x2b5] = 0;
  *(undefined1 *)(param_1 + 0x2b1) = 0;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  iVar5 = (**(code **)(*param_2 + 0x24))();
  *(bool *)(param_1 + 0x288) = iVar5 == 2;
  pcVar9 = "naval_combat";
  if (iVar5 != 2) {
    pcVar9 = "land_combat";
  }
  local_14 = (int *)(pcVar9 + 1);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  pcVar6 = pcVar9;
  do {
    cVar4 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar4 != '\0');
  FUN_00409350(pcVar9,(int)pcVar6 - (int)local_14);
  local_8._0_1_ = 7;
  local_14 = (int *)(**(code **)(*param_3 + 0x34))();
  local_18 = (undefined4 *)(*local_14 + 0x2c);
  uVar7 = (**(code **)(*param_3 + 0x3c))();
  iVar5 = (*(code *)*local_18)(local_34,uVar7);
  local_8._0_1_ = 6;
  *param_1 = iVar5;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x34))();
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("attacker",8);
  local_8._0_1_ = 8;
  iVar5 = (**(code **)(*(int *)*param_1 + 0x6c))(local_34);
  local_8._0_1_ = 6;
  param_1[1] = iVar5;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("defender",8);
  local_8._0_1_ = 9;
  iVar5 = (**(code **)(*(int *)*param_1 + 0x6c))(local_34);
  local_8._0_1_ = 6;
  param_1[2] = iVar5;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("closebutton",0xb);
  local_8._0_1_ = 10;
  iVar5 = (**(code **)(*(int *)*param_1 + 0x34))(local_34);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 9);
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("label_battlename",0x10);
  local_8._0_1_ = 0xb;
  uVar7 = FUN_005a9230(local_6c);
  local_8._0_1_ = 0xc;
  (**(code **)(*(int *)*param_1 + 0x3c))(local_34);
  FUN_00408ed0(uVar7,0,0xffffffff);
  FUN_00a5ecc0(uVar7,0);
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_8._0_1_ = 6;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0xd;
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x78))(local_34);
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0xe;
  (**(code **)(*(int *)(param_1[1] + 0x18) + 0x78))(local_34);
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0xf;
  (**(code **)(*(int *)(param_1[2] + 0x18) + 0x78))(local_34);
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  FUN_007851c0(param_1[1]);
  FUN_007851c0(param_1[2]);
  if ((char)param_1[0x288] == '\0') {
    uVar7 = (**(code **)(**(int **)(*(int *)(param_2[6] + 0x5c) + 0x14) + 0x2c))();
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00408ed0(uVar7,0,0xffffffff);
    local_8._0_1_ = 0x1a;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("combat_terrain1",0xf);
    local_8._0_1_ = 0x1b;
    piVar8 = (int *)(**(code **)(*(int *)*param_1 + 0x44))(local_50);
    uVar7 = FUN_00988fa0(local_6c);
    local_8._0_1_ = 0x1c;
    (**(code **)(*piVar8 + 0xe4))(uVar7);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_8._0_1_ = 0x1a;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("combat_terrain1",0xf);
    local_8._0_1_ = 0x1d;
    piVar8 = (int *)(**(code **)(*(int *)*param_1 + 0x44))(local_50);
    (**(code **)(*piVar8 + 0xec))();
    FUN_00409350(&DAT_00e12e7c,2);
    local_8._0_1_ = 0x1a;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("combat_counter_bg",0x11);
    local_8._0_1_ = 0x1e;
    piVar8 = (int *)(**(code **)(*(int *)*param_1 + 0x44))(local_50);
    (**(code **)(*piVar8 + 0x124))();
    local_8._0_1_ = 0x1a;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    FUN_00784be0(param_1[1],1);
    FUN_00784be0(param_1[2],0);
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("combat_terrain1",0xf);
    local_8._0_1_ = 0x1f;
    piVar8 = (int *)(**(code **)(*(int *)*param_1 + 0x44))(local_50);
    (**(code **)(*piVar8 + 0x34))();
    local_8._0_1_ = 0x1a;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("battle_background",0x11);
    local_8 = CONCAT31(local_8._1_3_,0x20);
    local_14 = (int *)0x4;
    piVar8 = (int *)FUN_009c7290();
    FUN_009c7290();
    iVar5 = *piVar8;
    uVar7 = FUN_009c7870(1);
    cVar4 = (**(code **)(iVar5 + 0x6c))(uVar7);
    if (cVar4 == '\0') {
      FUN_009885d0();
      local_8 = 0x21;
      local_14 = (int *)0xc;
      piVar8 = (int *)FUN_009c7290();
      FUN_009c7290();
      iVar5 = *piVar8;
      uVar7 = FUN_009c7870(1);
      cVar4 = (**(code **)(iVar5 + 0x68))(uVar7);
      bVar1 = false;
      if (cVar4 == '\0') goto LAB_007802fb;
    }
    else {
LAB_007802fb:
      bVar1 = true;
    }
    if (((uint)local_14 & 8) != 0) {
      local_14 = (int *)((uint)local_14 & 0xfffffff7);
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
    }
    local_8 = 0x1a;
    if ((((uint)local_14 & 4) != 0) && (0xf < local_20)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    if (bVar1) {
      FUN_009885d0();
      local_8 = CONCAT31(local_8._1_3_,0x22);
      piVar8 = (int *)FUN_009c7290();
      FUN_009c7290();
      iVar5 = *piVar8;
      uVar11 = 1;
      uVar7 = FUN_009c7870(1);
      (**(code **)(iVar5 + 0x28))(uVar7,uVar11);
      FUN_00408ad0();
    }
    __time64((__time64_t *)0x0);
    FUN_009b7670();
    param_1[0x286] = 0;
    uVar2 = local_6c[0];
    uVar3 = local_58;
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("slots_list",10);
    local_8._0_1_ = 0x10;
    iVar5 = (**(code **)(*(int *)param_1[1] + 0x7c))(local_34);
    local_8._0_1_ = 6;
    param_1[3] = iVar5;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("slots_list",10);
    local_8._0_1_ = 0x11;
    iVar5 = (**(code **)(*(int *)param_1[2] + 0x7c))(local_34);
    local_8._0_1_ = 6;
    param_1[4] = iVar5;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("combat_view",0xb);
    local_8._0_1_ = 0x12;
    (**(code **)(*(int *)(param_1[3] + 4) + 0x78))(local_34);
    local_8._0_1_ = 6;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("combat_view",0xb);
    local_8._0_1_ = 0x13;
    (**(code **)(*(int *)(param_1[4] + 4) + 0x78))(local_34);
    local_8._0_1_ = 6;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    FUN_00780a90(param_1,param_1[3],param_2[4],0,param_1[0x2ac] == 1);
    FUN_00780a90(param_1,param_1[4],param_2[5],1,param_1[0x2ac] == 2);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("sortby_type",0xb);
    local_8._0_1_ = 0x14;
    iVar5 = (**(code **)(*(int *)*param_1 + 0x34))(local_34);
    (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x289);
    local_8._0_1_ = 6;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("sortby_stance",0xd);
    local_8._0_1_ = 0x15;
    iVar5 = (**(code **)(*(int *)*param_1 + 0x34))(local_34);
    (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x294);
    local_8._0_1_ = 6;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("sortby_str_org",0xe);
    local_8._0_1_ = 0x16;
    iVar5 = (**(code **)(*(int *)*param_1 + 0x34))(local_34);
    (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x29f);
    local_8._0_1_ = 6;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("battle_background_naval",0x17);
    local_8 = CONCAT31(local_8._1_3_,0x17);
    local_14 = (int *)0x1;
    piVar8 = (int *)FUN_009c7290();
    FUN_009c7290();
    iVar5 = *piVar8;
    uVar7 = FUN_009c7870(1);
    cVar4 = (**(code **)(iVar5 + 0x6c))(uVar7);
    if (cVar4 == '\0') {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("battle_background_naval",0x17);
      local_8 = 0x18;
      local_14 = (int *)0x3;
      piVar8 = (int *)FUN_009c7290();
      FUN_009c7290();
      iVar5 = *piVar8;
      uVar7 = FUN_009c7870(1);
      cVar4 = (**(code **)(iVar5 + 0x68))(uVar7);
      bVar1 = false;
      if (cVar4 == '\0') goto LAB_00780005;
    }
    else {
LAB_00780005:
      bVar1 = true;
    }
    if (((uint)local_14 & 2) != 0) {
      local_14 = (int *)((uint)local_14 & 0xfffffffd);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
    }
    local_8 = 6;
    if ((((uint)local_14 & 1) != 0) && (0xf < local_3c)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    if (!bVar1) goto LAB_007803b4;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("battle_background_naval",0x17);
    local_8._0_1_ = 0x19;
    piVar8 = (int *)FUN_009c7290();
    FUN_009c7290();
    iVar5 = *piVar8;
    uVar11 = 1;
    uVar7 = FUN_009c7870(1);
    (**(code **)(iVar5 + 0x28))(uVar7,uVar11);
    uVar2 = local_50[0];
    uVar3 = local_3c;
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar2);
  }
LAB_007803b4:
  if (param_1[1] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_1[1] + 0x18;
  }
  (**(code **)(*(int *)*param_1 + 0xac))(iVar5);
  if (param_1[2] != 0) {
    iVar10 = param_1[2] + 0x18;
  }
  (**(code **)(*(int *)*param_1 + 0xac))(iVar10);
  FUN_007810a0(param_1);
  ExceptionList = local_10;
  return param_1;
}

