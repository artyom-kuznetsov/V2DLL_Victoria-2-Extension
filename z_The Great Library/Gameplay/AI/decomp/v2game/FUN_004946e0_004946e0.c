// FUN_004946e0 @ 004946e0 body=[[004946e0, 004947e4] [004947e8, 00494811] [00494815, 00494892] [00494896, 004948c3] [004948c7, 00494957] [0049495b, 00494984] [00494988, 004949fc] [00494a00, 00494a2a] [00494a2e, 00494b6c] [00494b70, 00494b7d] [00494b81, 00494b9d] [00494ba1, 00494bc2] [00494bc6, 00494bef] [00494bf3, 00494c07]]


/* WARNING: Removing unreachable block (ram,0x00494b04) */

undefined4 * FUN_004946e0(undefined4 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 local_150;
  uint local_13c;
  undefined4 local_134;
  uint local_120;
  undefined4 local_118;
  uint local_104;
  undefined4 local_fc;
  uint local_e8;
  undefined4 local_e0;
  uint local_cc;
  undefined4 local_c4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  int local_20;
  int local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  iVar6 = DAT_0125870c;
  puStack_c = &LAB_00b5b6cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar6;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = *(int *)(iVar6 + 0x2abc) + 1;
  param_1[9] = *(int *)(iVar6 + 0x2ac0) + 1;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  local_8 = 1;
  uStack_7 = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  DAT_01258708 = param_1;
  FUN_004367c0();
  local_8 = 2;
  FUN_00436780();
  local_8 = 3;
  local_1c = *(int *)(DAT_012586e0 + 0x5c);
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("/cache/map.bin",0xe);
  local_8 = 4;
  uVar3 = FUN_00988f20(local_70);
  local_8 = 5;
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e0);
  }
  local_8 = 3;
  uVar1 = local_8;
  local_8 = 3;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (local_1c == 1) {
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    FUN_00409350("/cache/map.bin",0xe);
    local_8 = 6;
    uVar3 = FUN_00988f20(local_a8);
    local_8 = 7;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_134);
    }
    local_8 = 3;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a8[0]);
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
  }
  else if (local_1c == 2) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_8 = uVar1;
    FUN_00409350("/cache/map.bin",0xe);
    _local_8 = CONCAT31(uStack_7,8);
    pcVar4 = (char *)FUN_00988f20(local_54);
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar4 = *(char **)pcVar4;
    }
    if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
LAB_00494941:
      local_15 = '\0';
    }
    else {
      iVar6 = PHYSFS_exists(pcVar4);
      local_15 = '\x01';
      if (iVar6 == 0) goto LAB_00494941;
    }
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_fc);
    }
    local_8 = 3;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (local_15 != '\0') {
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      FUN_00409350("/cache/map.bin",0xe);
      local_8 = 9;
      uVar3 = FUN_00988f20(local_8c);
      local_8 = 10;
      FUN_00408ed0(uVar3,0,0xffffffff);
      if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_118);
      }
      local_8 = 3;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c[0]);
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
    }
  }
  local_8 = 3;
  FUN_004a1330(&local_30);
  pcVar4 = (char *)(param_1 + 10);
  _local_8 = CONCAT31(uStack_7,0xb);
  local_15 = '\0';
  pcVar5 = pcVar4;
  if (0xf < (uint)param_1[0xf]) {
    pcVar5 = *(char **)pcVar4;
  }
  local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
  if ((pcVar5 == (char *)0x0) ||
     (local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38), *pcVar5 == '\0')) {
LAB_00494b32:
    local_15 = '\x01';
  }
  else {
    iVar6 = PHYSFS_exists(pcVar5);
    if (iVar6 == 0) goto LAB_00494b32;
    if (0xf < (uint)param_1[0xf]) {
      pcVar4 = *(char **)pcVar4;
    }
    local_38 = PHYSFS_getLastModTime(pcVar4);
    local_1c = 0;
    if (0 < ((int)local_2c - (int)local_30) / 0x1c) {
      local_20 = 0;
      do {
        pcVar4 = (char *)((int)local_30 + local_20);
        if (0xf < *(uint *)(pcVar4 + 0x14)) {
          pcVar4 = *(char **)pcVar4;
        }
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) goto LAB_00494b32;
        iVar6 = PHYSFS_exists(pcVar4);
        if (iVar6 == 0) goto LAB_00494b32;
        puVar7 = (undefined4 *)(local_20 + (int)local_30);
        if (0xf < (uint)puVar7[5]) {
          puVar7 = (undefined4 *)*puVar7;
        }
        lVar8 = PHYSFS_getLastModTime(puVar7);
        if (local_38 < lVar8) goto LAB_00494b32;
        local_1c = local_1c + 1;
        local_20 = local_20 + 0x1c;
      } while (local_1c < ((int)local_2c - (int)local_30) / 0x1c);
    }
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (local_15 == '\0') {
    cVar2 = FUN_004956d0();
    if (cVar2 != '\0') goto LAB_00494b5a;
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  FUN_00494cf0(param_1);
  FUN_004955b0();
LAB_00494b5a:
  puVar7 = local_30;
  if (local_30 != (undefined4 *)0x0) {
    while( true ) {
      if (puVar7 == local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30);
      }
      if (0xf < (uint)puVar7[5]) break;
      puVar7[5] = 0xf;
      puVar7[4] = 0;
      *(undefined1 *)puVar7 = 0;
      puVar7 = puVar7 + 7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar7);
  }
  local_30 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_28 = 0;
  if (local_b0 < 0x10) {
    if (local_13c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_150);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_c4);
}

