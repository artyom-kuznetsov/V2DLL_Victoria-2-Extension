// FUN_0060bf70 @ 0060bf70 body=[[0060bf70, 0060c5c9] [0060c5cd, 0060c5e0]]


void FUN_0060bf70(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *unaff_EBX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined8 uVar6;
  int *local_3c;
  void *pvStack_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 uStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b4ca26;
  pvStack_14 = ExceptionList;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_0043a880();
  iVar3 = 0;
  iVar4 = local_24 - local_28 >> 3;
  if (0 < iVar4) {
    local_3c = (int *)(param_1 + 0x110);
    do {
      fVar5 = (float10)(**(code **)(*(int *)(*local_3c + 0x54) + 0x10))();
      if ((float)(fVar5 / (float10)100.0) < 0.0) {
        pvStack_2c = (void *)0xbfe00000;
      }
      else {
        pvStack_2c = (void *)0x3fe00000;
      }
      uVar6 = FUN_00b31c36();
      local_3c = local_3c + 1;
      *(int *)(local_28 + iVar3 * 8) = (int)uVar6;
      *(int *)(local_28 + 4 + iVar3 * 8) = (int)((ulonglong)uVar6 >> 0x20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar3 = FUN_00aae9af(0x54);
  local_c._0_1_ = 1;
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00581c40(iVar3,&local_28);
  }
  local_c = (uint)local_c._1_3_ << 8;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar1);
  FUN_0043a880();
  iVar3 = 0;
  iVar4 = local_28 - (int)pvStack_2c >> 3;
  if (0 < iVar4) {
    unaff_EBX = (int *)(param_1 + 0x120);
    do {
      (**(code **)(*(int *)(*unaff_EBX + 0x54) + 0x10))();
      uVar6 = FUN_00b31c36();
      unaff_EBX = unaff_EBX + 1;
      *(int *)((int)pvStack_2c + iVar3 * 8) = (int)uVar6;
      *(int *)((int)pvStack_2c + iVar3 * 8 + 4) = (int)((ulonglong)uVar6 >> 0x20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar3 = FUN_00aae9af(0x54);
  puStack_10._0_1_ = 2;
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00582060(iVar3,&pvStack_2c);
  }
  puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar1);
  puVar2 = (undefined4 *)FUN_00aae9af(0x50);
  iVar3 = DAT_012588e8;
  pvStack_14._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 300) + 0x54) + 0x10))();
    uVar6 = FUN_00b31c36();
    unaff_EBX = (int *)uVar6;
    puVar2[1] = 0x18d;
    *puVar2 = CCommand::vftable;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    pvStack_14._0_1_ = 4;
    puVar2[0xb] = 0x8bb;
    puVar2[0xc] = 0x8bb;
    *(undefined2 *)(puVar2 + 0xd) = 0xffff;
    FUN_00409350(&DAT_00ded94d,0);
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined2 *)((int)puVar2 + 0x36) = 0;
    puVar2[0xe] = 0;
    *puVar2 = CChangeTariffs::vftable;
    *(undefined8 *)(puVar2 + 0x10) = uVar6;
    puVar2[0x12] = *(undefined4 *)(iVar3 + 0xb5c);
    puVar2[0x13] = *(undefined4 *)(iVar3 + 0xb60);
  }
  pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(puVar2);
  puVar2 = (undefined4 *)FUN_00aae9af(0x58);
  iVar3 = DAT_012588e8;
  uStack_18 = 5;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x130) + 0x54) + 0x10))();
    uVar6 = FUN_00b31c36();
    unaff_EBX = (int *)((ulonglong)uVar6 >> 0x20);
    puVar2[1] = 0x18d;
    *puVar2 = CCommand::vftable;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    uStack_18 = 6;
    puVar2[0xb] = 0x922;
    puVar2[0xc] = 0x922;
    *(undefined2 *)(puVar2 + 0xd) = 0xffff;
    FUN_00409350(&DAT_00ded94d,0);
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined2 *)((int)puVar2 + 0x36) = 0;
    puVar2[0xe] = 0;
    *puVar2 = CChangeTradeCap::vftable;
    *(undefined8 *)(puVar2 + 0x10) = uVar6;
    puVar2[0x12] = 0;
    puVar2[0x13] = *(undefined4 *)(iVar3 + 0xb5c);
    puVar2[0x14] = *(undefined4 *)(iVar3 + 0xb60);
  }
  uStack_18 = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(puVar2);
  puVar2 = (undefined4 *)FUN_00aae9af(0x58);
  iVar3 = DAT_012588e8;
  uStack_1c = 7;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x134) + 0x54) + 0x10))();
    unaff_EBX = (int *)0x0;
    uVar6 = FUN_00b31c36();
    puVar2[1] = 0x18d;
    *puVar2 = CCommand::vftable;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    uStack_1c = 8;
    puVar2[0xb] = 0x922;
    puVar2[0xc] = 0x922;
    *(undefined2 *)(puVar2 + 0xd) = 0xffff;
    FUN_00409350(&DAT_00ded94d,0);
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined2 *)((int)puVar2 + 0x36) = 0;
    puVar2[0xe] = 0;
    *puVar2 = CChangeTradeCap::vftable;
    *(undefined8 *)(puVar2 + 0x10) = uVar6;
    puVar2[0x12] = 1;
    puVar2[0x13] = *(undefined4 *)(iVar3 + 0xb5c);
    puVar2[0x14] = *(undefined4 *)(iVar3 + 0xb60);
  }
  uStack_1c = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(puVar2);
  puVar2 = (undefined4 *)FUN_00aae9af(0x58);
  iVar3 = DAT_012588e8;
  local_20._0_1_ = 9;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    fVar5 = (float10)(**(code **)(*(int *)(*(int *)(param_1 + 0x138) + 0x54) + 0x10))();
    if ((float)(fVar5 / (float10)100.0) < 0.0) {
      unaff_EBX = (int *)0xbfe00000;
    }
    else {
      unaff_EBX = (int *)0x3fe00000;
    }
    uVar6 = FUN_00b31c36();
    uVar1 = (undefined4)uVar6;
    puVar2[1] = 0x18d;
    *puVar2 = CCommand::vftable;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    local_20._0_1_ = 10;
    puVar2[0xb] = 0x922;
    puVar2[0xc] = 0x922;
    *(undefined2 *)(puVar2 + 0xd) = 0xffff;
    FUN_00409350(&DAT_00ded94d,0);
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined2 *)((int)puVar2 + 0x36) = 0;
    puVar2[0xe] = 0;
    *puVar2 = CChangeTradeCap::vftable;
    puVar2[0x10] = uVar1;
    puVar2[0x11] = (int)((ulonglong)uVar6 >> 0x20);
    puVar2[0x12] = 2;
    puVar2[0x13] = *(undefined4 *)(iVar3 + 0xb5c);
    puVar2[0x14] = *(undefined4 *)(iVar3 + 0xb60);
  }
  local_20 = (uint)local_20._1_3_ << 8;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(puVar2);
  if (unaff_EBX != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EBX);
  }
  ExceptionList = pvStack_2c;
  return;
}

