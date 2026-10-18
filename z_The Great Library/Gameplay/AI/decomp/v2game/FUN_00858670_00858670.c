// FUN_00858670 @ 00858670 body=[[00858670, 008589ac]]


void FUN_00858670(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int local_38;
  int local_30;
  undefined4 local_2c;
  int local_28;
  uint local_20;
  int local_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b90bd1;
  local_14 = ExceptionList;
  uVar9 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  ExceptionList = &local_14;
  local_20 = uVar9;
  iVar8 = FUN_00857430(uVar9);
  if ((iVar8 == 0) || (local_28 = FUN_00857530(param_1,iVar8,uVar9), local_28 == 0)) {
    ExceptionList = local_14;
    return;
  }
  bVar6 = false;
  local_38 = -1;
  local_30 = 0;
  if (*(char *)(param_1 + 0x6e) != '\0') {
    local_38 = -1;
    iVar3 = *(int *)(local_28 + 0x60);
    do {
      iVar4 = iVar3;
      if (iVar4 == 0) goto LAB_0085873e;
      local_38 = local_38 + 1;
      iVar3 = *(int *)(iVar4 + 0x224);
    } while (*(int *)(iVar4 + 0x18) != iVar8);
    bVar5 = 10 < *(int *)(iVar4 + 0x184);
    if (bVar5) {
      local_30 = iVar4;
    }
    bVar6 = true;
    if (bVar5) {
      cVar7 = FUN_0052dcd0(local_20);
      if (cVar7 == '\0') {
        ExceptionList = local_14;
        return;
      }
      local_28 = FUN_00aae9af(100);
      local_c = 9;
      if (local_28 == 0) {
        uVar9 = 0;
      }
      else {
        puVar1 = (undefined4 *)(local_30 + 0x24);
        puVar2 = (undefined1 *)(local_30 + 0x180);
        local_30 = *(int *)(param_1 + 0x34);
        local_20 = CONCAT31(local_20._1_3_,*puVar2);
        local_2c = *(undefined4 *)(param_1 + 0x38);
        uVar9 = FUN_005827f0(local_28,&local_30,local_38,1,local_20,*puVar1);
      }
      local_c = 0xffffffff;
      iVar8 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar8 + 0x38) + 0x18))(uVar9);
      ExceptionList = local_14;
      return;
    }
  }
LAB_0085873e:
  if (*(char *)(param_1 + 0x6c) == '\0') {
    ExceptionList = local_14;
    return;
  }
  if (bVar6) {
    if (*(char *)(param_1 + 0x6d) == '\0') {
      ExceptionList = local_14;
      return;
    }
    if (local_38 < 0) {
      ExceptionList = local_14;
      return;
    }
    local_20 = *(uint *)(param_1 + 0x34);
    FUN_004da800(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4),0,
                 *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x1184);
    local_30 = *(int *)(param_1 + 0x34);
    iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
    iVar3 = *(int *)(iVar8 + 0xe7c);
    if (iVar3 < local_1c) {
      ExceptionList = local_14;
      return;
    }
    if ((iVar3 <= local_1c) && (*(uint *)(iVar8 + 0xe78) <= local_20)) {
      ExceptionList = local_14;
      return;
    }
    local_20 = FUN_00aae9af(0x58);
    local_c = 8;
    if (local_20 != 0) {
      uVar9 = FUN_0057c130(local_20,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                           local_38);
      goto LAB_008588cf;
    }
  }
  else {
    local_20 = *(uint *)(param_1 + 0x34);
    FUN_004da720(iVar8,*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4),0,
                 *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x1184);
    local_28 = *(int *)(param_1 + 0x34);
    iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
    iVar4 = *(int *)(iVar3 + 0xe7c);
    if (iVar4 < local_1c) {
      ExceptionList = local_14;
      return;
    }
    if ((iVar4 <= local_1c) && (*(uint *)(iVar3 + 0xe78) <= local_20)) {
      ExceptionList = local_14;
      return;
    }
    local_20 = *(undefined4 *)(param_1 + 0x34);
    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x12d0) ==
        '\0') {
      ExceptionList = local_14;
      return;
    }
    local_20 = FUN_00aae9af(0x58);
    local_c = 7;
    if (local_20 != 0) {
      uVar9 = FUN_0057c080(local_20,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                           iVar8);
      goto LAB_008588cf;
    }
  }
  uVar9 = 0;
LAB_008588cf:
  local_c = 0xffffffff;
  iVar8 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar8 + 0x38) + 0x18))(uVar9);
  ExceptionList = pvStack_18;
  return;
}

