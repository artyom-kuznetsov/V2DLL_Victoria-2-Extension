// FUN_0079d490 @ 0079d490 body=[[0079d490, 0079d4ec] [0079d4f0, 0079d580] [0079d584, 0079d5a3] [0079d5a7, 0079d66f] [0079d673, 0079d78d]]


void FUN_0079d490(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_9c [20];
  undefined *puStack_88;
  uint *puStack_84;
  uint *puStack_80;
  uint *local_7c;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  int local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4b47b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CUnitView::vftable;
  param_1[7] = CUnitView::vftable;
  local_8 = 9;
  piVar1 = (int *)param_1[199];
  if (piVar1 != (int *)0x0) {
    for (piVar2 = (int *)*piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if ((undefined4 *)*piVar2 == param_1) {
        local_7c = (uint *)*piVar1;
        if (local_7c == (uint *)0x0) goto LAB_0079d4fb;
        goto LAB_0079d4f0;
      }
    }
  }
  goto LAB_0079d512;
  while (local_7c = (uint *)local_7c[2], local_7c != (uint *)0x0) {
LAB_0079d4f0:
    if ((undefined4 *)*local_7c == param_1) break;
  }
LAB_0079d4fb:
  puStack_80 = (uint *)0x79d502;
  FUN_005f2ae0();
  if (*(int *)(param_1[199] + 8) == 0) {
    *(undefined1 *)(param_1[199] + 0x10) = 0;
  }
LAB_0079d512:
  if (param_1[8] != 0) {
    local_7c = (uint *)0x8;
    puStack_80 = (uint *)0xe165d0;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    puStack_84 = (uint *)0x79d53e;
    FUN_00409350();
    local_8._0_1_ = 10;
    local_7c = local_34;
    puStack_80 = (uint *)0x79d550;
    iVar4 = (**(code **)(*(int *)param_1[8] + 0x40))();
    puStack_80 = local_6c;
    puStack_84 = (uint *)0x79d55f;
    (**(code **)(*(int *)(iVar4 + 0x54) + 0x4c))();
    puStack_84 = local_50;
    local_8._0_1_ = 0xb;
    puStack_88 = (undefined *)0x79d56e;
    FUN_00989330();
    if (0xf < local_58) {
      puStack_84 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
      puStack_88 = &UNK_0079d581;
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_8._0_1_ = 0xe;
    if (0xf < local_20) {
      puStack_84 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_88 = &UNK_0079d5a4;
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    puStack_84 = (uint *)0x79d5bf;
    (**(code **)(*(int *)param_1[10] + 0x20))();
    puStack_84 = (uint *)0x79d5c7;
    cVar3 = FUN_00416db0();
    if (((cVar3 == '\0') && (0 < local_40)) && (*(char *)(param_1 + 0xc) != '\0')) {
      puStack_84 = (uint *)0x80;
      puStack_88 = (undefined *)0x79d5e0;
      iVar4 = FUN_00aae9af();
      local_8._0_1_ = 0xf;
      local_14 = iVar4;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        local_18 = auStack_9c;
        FUN_00401320();
        uVar5 = FUN_005e2b30(iVar4,param_1[10]);
      }
      local_8._0_1_ = 0xe;
      puStack_84 = (uint *)0x79d627;
      iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      puStack_88 = (undefined *)0x79d632;
      puStack_84 = (uint *)uVar5;
      (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))();
      puStack_84 = local_50;
      puStack_88 = (undefined *)0x79d63e;
      FUN_005cdc70();
    }
    puStack_84 = (uint *)0x79d654;
    (**(code **)(*(int *)(param_1[8] + 0x18) + 0x38))();
    puStack_84 = (uint *)0x79d65e;
    (**(code **)(*(int *)param_1[8] + 0x50))();
    local_8 = CONCAT31(local_8._1_3_,9);
    if (0xf < local_3c) {
      local_7c = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      puStack_80 = (uint *)&UNK_0079d670;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
  }
  local_7c = (uint *)param_1[0xd];
  if (local_7c != (uint *)0x0) {
    puStack_80 = (uint *)0x79d68e;
    FUN_0079d410();
  }
  if ((int *)param_1[10] != (int *)0x0) {
    local_7c = (uint *)0x79d69c;
    cVar3 = (**(code **)(*(int *)param_1[10] + 0x38))();
    if (((cVar3 != '\0') && (*(int *)(param_1[10] + 0x1b4) != 0)) &&
       (*(char *)(*(int *)(param_1[10] + 0x1b4) + 4) == '\0')) {
      local_7c = (uint *)0x79d6c9;
      iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x16c))();
      if (iVar4 == 0) {
        local_7c = (uint *)0x79d6e2;
        cVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x98))();
        if (cVar3 == '\0') {
          local_7c = *(uint **)(param_1[10] + 0x1b4);
          puStack_80 = (uint *)0x79d706;
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))();
        }
      }
    }
  }
  param_1[0xb2] = CButtonObserver::vftable;
  param_1[0x9a] = CButtonObserver::vftable;
  param_1[0x86] = CButtonObserver::vftable;
  param_1[0x72] = CButtonObserver::vftable;
  param_1[0x5e] = CButtonObserver::vftable;
  param_1[0x4a] = CButtonObserver::vftable;
  param_1[0x36] = CButtonObserver::vftable;
  param_1[0x22] = CButtonObserver::vftable;
  param_1[0xe] = CButtonObserver::vftable;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  local_8 = 0x11;
  if ((int *)param_1[8] != (int *)0x0) {
    local_7c = (uint *)0x79d760;
    (**(code **)(*(int *)param_1[8] + 0x50))();
  }
  local_8 = 0xffffffff;
  param_1[7] = &PTR_FUN_00e39158;
  *param_1 = &PTR_FUN_00e38708;
  local_7c = (uint *)0x79d77b;
  FUN_009a62b0();
  ExceptionList = local_10;
  return;
}

