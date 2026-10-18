// FUN_0066e3c0 @ 0066e3c0 body=[[0066e3c0, 0066e412] [0066e420, 0066e918] [0066e922, 0066e937]]


int * FUN_0066e3c0(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  short sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  void *pvVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined8 **ppuVar19;
  undefined4 uVar20;
  int local_70;
  int local_6c;
  int local_68;
  float local_34;
  undefined4 uStack_30;
  float local_2c;
  undefined8 *local_28;
  undefined8 *local_24;
  void *local_20;
  undefined1 local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b59ef3;
  pvStack_14 = ExceptionList;
  local_28 = (undefined8 *)0x0;
  local_24 = (undefined8 *)0x0;
  local_20 = (void *)0x0;
  local_1c = 0;
  local_c = 0;
  piVar10 = (int *)*param_2;
  local_70 = 0;
  iVar7 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *piVar10 * 4);
  ExceptionList = &pvStack_14;
  do {
    puVar3 = local_24;
    iVar11 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *piVar10 * 4);
    iVar16 = *(int *)(*(int *)(iVar7 + 0x5c) + 0x34);
    iVar7 = *(int *)(*(int *)(iVar7 + 0x5c) + 0x38);
    iVar17 = *(int *)(iVar11 + 0x5c);
    piVar10 = (int *)piVar10[2];
    local_70 = local_70 + 1;
    iVar14 = *(int *)(iVar17 + 0x34);
    iVar17 = *(int *)(iVar17 + 0x38);
    iVar1 = *(int *)(DAT_0125870c + 0x212c);
    local_68 = iVar16;
    if (*(int *)(iVar1 + 4) + -1 < iVar16) {
      local_68 = *(int *)(iVar1 + 4) + -1;
    }
    iVar15 = iVar7;
    if (iVar7 < 0) {
      iVar15 = 0;
    }
    if (*(int *)(iVar1 + 8) + -1 < iVar15) {
      iVar15 = *(int *)(iVar1 + 8) + -1;
    }
    iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) +
                    (uint)*(ushort *)
                           (*(int *)(iVar1 + 0x18) * iVar15 + *(int *)(iVar1 + 0xc) * local_68 +
                           *(int *)(iVar1 + 0x20)) * 4);
    uVar8 = DAT_00f141d0;
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x2a) == '\0')) {
      uVar8 = 0;
    }
    puVar5 = (undefined8 *)FUN_00aae9af(0x18);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      *puVar5 = CONCAT44(uVar8,(float)iVar16);
      *(float *)(puVar5 + 1) = (float)iVar7;
      *(undefined8 **)((int)puVar5 + 0xc) = puVar3;
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined1 *)((int)puVar5 + 0x14) = 0;
    }
    pvVar13 = (void *)((int)local_20 + 1);
    puVar6 = puVar5;
    if (local_20 != (void *)0x0) {
      *(undefined8 **)(puVar3 + 2) = puVar5;
      puVar6 = local_28;
    }
    local_28 = puVar6;
    puVar3 = local_28;
    local_24 = puVar5;
    local_20 = pvVar13;
    if (local_70 == param_2[2]) {
      iVar1 = *(int *)(DAT_0125870c + 0x212c);
      local_68 = iVar14;
      if (*(int *)(iVar1 + 4) + -1 < iVar14) {
        local_68 = *(int *)(iVar1 + 4) + -1;
      }
      iVar15 = iVar17;
      if (iVar17 < 0) {
        iVar15 = 0;
      }
      if (*(int *)(iVar1 + 8) + -1 < iVar15) {
        iVar15 = *(int *)(iVar1 + 8) + -1;
      }
      iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) +
                      (uint)*(ushort *)
                             (*(int *)(iVar1 + 0x18) * iVar15 + *(int *)(iVar1 + 0xc) * local_68 +
                             *(int *)(iVar1 + 0x20)) * 4);
      uVar8 = DAT_00f141d0;
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x2a) == '\0')) {
        uVar8 = 0;
      }
      puVar6 = (undefined8 *)FUN_00aae9af(0x18);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *puVar6 = CONCAT44(uVar8,(float)iVar14);
        *(float *)(puVar6 + 1) = (float)iVar17;
        *(undefined8 **)((int)puVar6 + 0xc) = puVar5;
        *(undefined4 *)(puVar6 + 2) = 0;
        *(undefined1 *)((int)puVar6 + 0x14) = 0;
      }
      puVar3 = puVar6;
      if (local_20 != (void *)0x0) {
        *(undefined8 **)(puVar5 + 2) = puVar6;
        puVar3 = local_28;
      }
      local_28 = puVar3;
      iVar17 = iVar17 + (int)((float)(iVar17 - iVar7) * DAT_00f14a8c);
      iVar7 = *(int *)(DAT_0125870c + 0x212c);
      iVar14 = (int)((float)(iVar14 - iVar16) * DAT_00f14a8c) + iVar14;
      local_6c = iVar14;
      if (*(int *)(iVar7 + 4) + -1 < iVar14) {
        local_6c = *(int *)(iVar7 + 4) + -1;
      }
      iVar16 = iVar17;
      if (iVar17 < 0) {
        iVar16 = 0;
      }
      if (*(int *)(iVar7 + 8) + -1 < iVar16) {
        iVar16 = *(int *)(iVar7 + 8) + -1;
      }
      iVar7 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) +
                      (uint)*(ushort *)
                             (*(int *)(iVar7 + 0x18) * iVar16 + *(int *)(iVar7 + 0xc) * local_6c +
                             *(int *)(iVar7 + 0x20)) * 4);
      uStack_30 = DAT_00f141d0;
      if ((iVar7 != 0) && (*(char *)(iVar7 + 0x2a) == '\0')) {
        uStack_30 = 0;
      }
      local_34 = (float)iVar14;
      local_2c = (float)iVar17;
      local_24 = puVar6;
      local_20 = (void *)((int)local_20 + 1);
      local_24 = (undefined8 *)FUN_00aae9af(0x18);
      if (local_24 == (undefined8 *)0x0) {
        local_24 = (undefined8 *)0x0;
      }
      else {
        *local_24 = CONCAT44(uStack_30,local_34);
        *(float *)(local_24 + 1) = local_2c;
        *(undefined8 **)((int)local_24 + 0xc) = puVar6;
        *(undefined4 *)(local_24 + 2) = 0;
        *(undefined1 *)((int)local_24 + 0x14) = 0;
      }
      pvVar13 = (void *)((int)local_20 + 1);
      bVar18 = local_20 != (void *)0x0;
      puVar3 = local_24;
      local_20 = pvVar13;
      if (bVar18) {
        *(undefined8 **)(puVar6 + 2) = local_24;
        puVar3 = local_28;
      }
    }
    local_28 = puVar3;
    iVar7 = iVar11;
  } while (piVar10 != (int *)0x0);
  iVar7 = FUN_00aae9af(0x164);
  local_c._0_1_ = 1;
  if (iVar7 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0x40))();
    FUN_005c2ad0(param_3);
    uVar20 = 1;
    ppuVar19 = &local_28;
    uVar8 = (**(code **)(*param_1 + 0x38))(ppuVar19,1);
    piVar10 = param_4;
    uVar9 = (**(code **)(*param_1 + 0x40))(param_4,uVar8);
    piVar10 = (int *)FUN_00817bb0(iVar7,uVar9,piVar10,uVar8,ppuVar19,uVar20);
  }
  local_c = (uint)local_c._1_3_ << 8;
  iVar7 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)*param_2 * 4);
  local_34 = -(float)*(int *)(*(int *)(iVar7 + 0x5c) + 0x34);
  local_2c = -(float)*(int *)(*(int *)(iVar7 + 0x5c) + 0x38);
  uStack_30 = 0xbf051eb8;
  (**(code **)(*piVar10 + 0x84))(&local_34);
  (**(code **)(*piVar10 + 0xb0))();
  (**(code **)(*param_4 + 0x10))(piVar10);
  iVar11 = *(int *)(iVar7 + 0x58);
  iVar16 = (**(code **)(*param_1 + 0x38))();
  if (*(int *)(*(int *)(iVar16 + 0x20d8) + iVar11 * 4) != 0) {
    FUN_00644a70(iVar16,piVar10,1);
  }
  iVar7 = *(int *)(iVar7 + 0x58);
  iVar11 = (**(code **)(*param_1 + 0x38))();
  piVar12 = (int *)(*(int *)(*(int *)(*(int *)(iVar11 + 0x20d8) + iVar7 * 4) + 0xc) + 0x394);
  *piVar12 = *piVar12 + 1;
  piVar12 = (int *)FUN_0098bce0();
  *piVar12 = iVar7;
  iVar7 = *piVar10;
  sVar4 = (**(code **)(iVar7 + 0x68))();
  (**(code **)(iVar7 + 0x5c))(sVar4 + 99);
  pcVar2 = *(code **)(*piVar10 + 0x34);
  piVar10[0x58] = DAT_00f092fc;
  (*pcVar2)();
  if (local_34 == 0.0) {
    ExceptionList = local_20;
    return piVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34);
}

