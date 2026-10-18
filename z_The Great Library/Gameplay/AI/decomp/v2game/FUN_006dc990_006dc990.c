// FUN_006dc990 @ 006dc990 body=[[006dc990, 006dcc18] [006dcc30, 006dccf4]]


void FUN_006dc990(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6e0ac;
  local_14 = ExceptionList;
  puVar7 = (undefined4 *)(param_1 + 0x14);
  ExceptionList = &local_14;
  iVar3 = FUN_005484e0(puVar7,"POLITICSVIEW_POLITICAL_REFORM",0x1d);
  if (iVar3 == -1) {
    iVar3 = FUN_005484e0(puVar7,"POLITICSVIEW_SOCIAL_REFORM",0x1a);
    if (iVar3 == -1) {
      iVar3 = FUN_005484e0(puVar7,"POLITICSVIEW_ECONOMIC_REFORM",0x1c);
      if (iVar3 == -1) {
        iVar3 = FUN_005484e0(puVar7,"POLITICSVIEW_MILITARY_REFORM",0x1c);
        if (iVar3 == -1) {
          ExceptionList = local_14;
          return;
        }
        FUN_009885d0();
        local_c = 6;
        iVar3 = FUN_00975ed0(local_34);
        uVar6 = 0;
        if (iVar3 == 0) {
          iVar3 = FUN_00974850();
        }
        iVar2 = DAT_012588e8;
        iVar5 = FUN_00aae9af(0x4c);
        local_c._0_1_ = 7;
        if (iVar5 != 0) {
          uVar6 = FUN_00591be0(iVar5,*(undefined4 *)(iVar2 + 0xb5c),*(undefined4 *)(iVar2 + 0xb60),
                               *(undefined4 *)(iVar3 + 0x54),iVar3);
        }
        local_c = CONCAT31(local_c._1_3_,6);
        iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar6);
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      if (0xf < *(uint *)(param_1 + 0x28)) {
        puVar7 = (undefined4 *)*puVar7;
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      pcVar4 = (char *)(puVar7 + 7);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(puVar7 + 7,(int)pcVar4 - ((int)puVar7 + 0x1d));
      local_c = 4;
      iVar3 = FUN_00975ed0(local_50);
      if (iVar3 == 0) {
        iVar3 = FUN_00974850();
      }
      iVar2 = DAT_012588e8;
      iVar5 = FUN_00aae9af(0x4c);
      local_c._0_1_ = 5;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_005910d0(iVar5,*(undefined4 *)(iVar2 + 0xb5c),*(undefined4 *)(iVar2 + 0xb60),
                             *(undefined4 *)(iVar3 + 0x54),iVar3);
      }
      local_c = CONCAT31(local_c._1_3_,4);
    }
    else {
      if (0xf < *(uint *)(param_1 + 0x28)) {
        puVar7 = (undefined4 *)*puVar7;
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      pcVar4 = (char *)((int)puVar7 + 0x1a);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350((char *)((int)puVar7 + 0x1a),(int)pcVar4 - ((int)puVar7 + 0x1b));
      local_c = 2;
      iVar3 = FUN_00975ed0(local_50);
      if (iVar3 == 0) {
        iVar3 = FUN_00974850();
      }
      iVar2 = DAT_012588e8;
      iVar5 = FUN_00aae9af(0x4c);
      local_c._0_1_ = 3;
      if (iVar5 == 0) {
        uVar6 = 0;
        local_c = CONCAT31(local_c._1_3_,2);
      }
      else {
        uVar6 = FUN_0058fed0(iVar5,*(undefined4 *)(iVar2 + 0xb5c),*(undefined4 *)(iVar2 + 0xb60),
                             *(undefined4 *)(iVar3 + 0x54),iVar3);
        local_c = CONCAT31(local_c._1_3_,2);
      }
    }
  }
  else {
    if (0xf < *(uint *)(param_1 + 0x28)) {
      puVar7 = (undefined4 *)*puVar7;
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    pcVar4 = (char *)((int)puVar7 + 0x1d);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)((int)puVar7 + 0x1d),(int)pcVar4 - ((int)puVar7 + 0x1e));
    local_c = 0;
    iVar3 = FUN_00975ed0(local_50);
    if (iVar3 == 0) {
      iVar3 = FUN_00974850();
    }
    iVar2 = DAT_012588e8;
    iVar5 = FUN_00aae9af(0x4c);
    local_c._0_1_ = 1;
    if (iVar5 == 0) {
      uVar6 = 0;
      local_c = (uint)local_c._1_3_ << 8;
    }
    else {
      uVar6 = FUN_0058eaf0(iVar5,*(undefined4 *)(iVar2 + 0xb5c),*(undefined4 *)(iVar2 + 0xb60),
                           *(undefined4 *)(iVar3 + 0x54),iVar3);
      local_c = (uint)local_c._1_3_ << 8;
    }
  }
  iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar6);
  if (local_3c < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

