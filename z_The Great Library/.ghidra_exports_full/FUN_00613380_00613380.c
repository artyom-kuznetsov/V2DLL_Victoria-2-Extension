// FUN_00613380 @ 00613380 body=[[00613380, 0061343a] [0061343e, 00613482] [00613486, 006134dd] [006134e1, 00613598] [0061359c, 00613699] [006136a0, 00613734] [00613738, 00613769] [0061376f, 0061378a] [0061378e, 006137a9] [006137ad, 006137bc] [006137c0, 006137cf] [006137d3, 00613817] [0061381d, 0061385e]]


undefined4 * FUN_00613380(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined **local_d8 [10];
  uint local_b0;
  int local_a8;
  undefined1 *local_9c;
  char *local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b5a3d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = CTextBufferObserverGlue<CConsole>::vftable;
  param_1[5] = param_1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = FUN_00613aa0;
  param_1[0xb] = 100;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0x11] = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00409350();
  local_8 = 2;
  uVar4 = (**(code **)(*param_3 + 0x2c))();
  local_8 = 1;
  param_1[9] = uVar4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00409350();
  local_8 = 3;
  uVar4 = (**(code **)(*(int *)param_1[9] + 0x40))();
  local_8 = 1;
  param_1[10] = uVar4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(*(int *)(param_1[10] + 0x54) + 0xac))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00409350();
  local_8 = 4;
  uVar4 = (**(code **)(*(int *)param_1[9] + 0x7c))();
  local_8 = 1;
  param_1[3] = uVar4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(*(int *)(param_1[10] + 0x54) + 4))();
  FUN_009b6700();
  FUN_009b6700();
  (**(code **)(*(int *)(param_1[9] + 0x18) + 0x38))();
  *(undefined1 *)(param_1 + 0xc) = 0;
  iVar5 = PHYSFS_exists();
  if (iVar5 != 0) {
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 5;
    FUN_00409350(&DAT_00ded94d,0);
    FUN_00992740(local_d8,local_5c,0);
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = (char *)0x0;
    local_94 = 0;
    local_90 = 0;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_64 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffff00;
    _local_8 = CONCAT31(uStack_7,8);
    iVar5 = (*(code *)local_d8[0][0xe])();
    FUN_009d7300();
    if (iVar5 != 0) {
      PHYSFS_read();
    }
    FUN_009d7360();
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    pcVar6 = local_98;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8 = 9;
    FUN_00989510();
    iVar5 = (local_38 - local_3c) / 0x1c;
    if ((iVar5 != 0) && (iVar5 = iVar5 + -1, -1 < iVar5)) {
      iVar9 = iVar5 * 0x1c;
      do {
        local_8 = 10;
        if (*(int *)(local_3c + iVar9 + 0x10) != 0) {
          local_40 = FUN_00989330();
          local_8 = 0xb;
          iVar2 = param_1[0xe];
          puVar7 = (undefined1 *)FUN_00aae9af();
          local_8 = 0xc;
          local_9c = puVar7;
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = (undefined1 *)0x0;
          }
          else {
            *(undefined4 *)(puVar7 + 0x14) = 0xf;
            *(undefined4 *)(puVar7 + 0x10) = 0;
            *puVar7 = 0;
            FUN_00408ed0();
            *(int *)(puVar7 + 0x1c) = iVar2;
            *(undefined4 *)(puVar7 + 0x20) = 0;
            puVar7[0x24] = 0;
          }
          iVar3 = param_1[0xf];
          param_1[0xe] = puVar7;
          param_1[0xf] = iVar3 + 1;
          if (iVar3 == 0) {
            param_1[0xd] = puVar7;
          }
          else {
            *(undefined1 **)(iVar2 + 0x20) = puVar7;
          }
          local_8 = 10;
          if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        iVar5 = iVar5 + -1;
        iVar9 = iVar9 + -0x1c;
      } while (-1 < iVar5);
    }
    local_8 = 10;
    if (local_3c != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_88 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_98 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 1;
    local_d8[0] = &PTR_FUN_00e37dc0;
    if (local_a8 != 0) {
      PHYSFS_close();
      local_a8 = 0;
    }
    local_d8[0] = &PTR_FUN_00e3b540;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  param_1[0x11] = 0xffffffff;
  puVar8 = (undefined4 *)FUN_00aae9af();
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
  }
  param_1[0x12] = puVar8;
  FUN_00423990();
  ExceptionList = local_10;
  return param_1;
}

