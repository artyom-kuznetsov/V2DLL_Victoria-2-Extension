// FUN_004a22d0 @ 004a22d0 body=[[004a22d0, 004a23a6] [004a23aa, 004a2427] [004a242b, 004a2449] [004a244d, 004a24aa] [004a24ae, 004a24c8] [004a24cc, 004a25c5] [004a25c9, 004a27af] [004a27b3, 004a27dd] [004a27e1, 004a2806] [004a280a, 004a282b] [004a2835, 004a2847]]


void FUN_004a22d0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  int local_1e4 [65];
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  int *local_70;
  undefined4 *local_6c;
  uint local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  int local_5c;
  undefined1 local_58;
  undefined **local_54;
  undefined4 local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  undefined1 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_28;
  uint local_24;
  undefined4 *local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5fe76;
  local_10 = ExceptionList;
  local_68 = 0;
  local_64 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004367c0();
  local_8._0_1_ = 1;
  FUN_00436780();
  local_8._0_1_ = 2;
  iVar5 = *(int *)(DAT_012586e0 + 0x54);
  if (iVar5 == 1) {
    FUN_00408ed0(local_a8,0,0xffffffff);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  FUN_00409350("/colors.txt",0xb);
  local_8._0_1_ = 3;
  FUN_00988f20(local_8c);
  local_8._0_1_ = 5;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (iVar5 != 2) goto LAB_004a24cc;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  FUN_00409350("/colors.txt",0xb);
  local_8 = CONCAT31(local_8._1_3_,6);
  pcVar4 = (char *)FUN_00988f20(&local_38);
  if (0xf < *(uint *)(pcVar4 + 0x14)) {
    pcVar4 = *(char **)pcVar4;
  }
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
LAB_004a2417:
    local_15 = '\0';
  }
  else {
    iVar5 = PHYSFS_exists(pcVar4);
    local_15 = '\x01';
    if (iVar5 == 0) goto LAB_004a2417;
  }
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54);
  }
  local_8._0_1_ = 5;
  uStack_40 = 0xf;
  local_44 = 0;
  local_54 = (undefined **)((uint)local_54 & 0xffffff00);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  if (local_15 != '\0') {
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    FUN_00409350("/colors.txt",0xb);
    local_8._0_1_ = 7;
    uVar6 = FUN_00988f20(&local_38);
    local_8._0_1_ = 8;
    FUN_00408ed0(uVar6,0,0xffffffff);
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54);
    }
    local_8._0_1_ = 5;
    uStack_40 = 0xf;
    local_44 = 0;
    local_54 = (undefined **)((uint)local_54 & 0xffffff00);
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38);
    }
  }
LAB_004a24cc:
  local_8._0_1_ = 5;
  puVar7 = (undefined4 *)FUN_00aae9af(0x360);
  local_8._0_1_ = 9;
  if (puVar7 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    local_1c = puVar7;
    FUN_00409350("UNNAMED_SESSION",0xf);
    local_8 = CONCAT31(local_8._1_3_,10);
    local_68 = 1;
    puVar8 = (undefined4 *)FUN_00aae9af(0x114);
    local_8 = 0xb;
    local_6c = puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      FUN_0098ffc0(local_c4);
      *puVar8 = &PTR_FUN_00e37c3c;
    }
    *puVar7 = &PTR_FUN_00e38524;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
    local_8 = 0xc;
    *(undefined1 *)(puVar7 + 5) = 0;
    puVar7[7] = puVar8;
    puVar7[0xd0] = 0xf;
    puVar7[0xcf] = 0;
    *(undefined1 *)(puVar7 + 0xcb) = 0;
    FUN_00408ed0(&local_38,0,0xffffffff);
    puVar7[0xd2] = 0;
    puVar7[0xd3] = 0;
    puVar7[0xd4] = 0;
    *(undefined1 *)(puVar7 + 0xd6) = 1;
    puVar7[0xd7] = 0;
    local_1c = puVar7;
  }
  local_8 = 5;
  puVar7 = local_64;
  if ((local_68 & 1) != 0) {
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
  }
  while( true ) {
    local_64 = puVar7;
    piVar9 = (int *)local_1c[7];
    if ((char)piVar9[0x44] == '\0') {
      iVar5 = (**(code **)(*piVar9 + 4))();
      piVar9[2] = iVar5;
      if (iVar5 == 0) {
        piVar9[3] = 0x13;
      }
      *(undefined1 *)(piVar9 + 0x44) = 1;
    }
    piVar9 = piVar9 + 3;
    piVar10 = local_1e4;
    for (iVar5 = 0x41; puVar8 = local_1c, iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar10 = piVar10 + 1;
    }
    if (local_1e4[0] == 0x13) break;
    FUN_009a1440(local_1c);
    puVar7 = local_64;
    if (puVar8[8] == 0x55) {
      local_50 = 0x18d;
      local_54 = CColor::vftable;
      local_4c = DAT_00f092fc;
      uStack_48 = DAT_00f092fc;
      local_44 = DAT_00f092fc;
      uStack_40 = DAT_00f092fc;
      local_3c = 1;
      FUN_009b6ea0(puVar8);
      puVar8 = local_60;
      local_60 = (undefined4 *)FUN_00aae9af(0x28);
      if (local_60 == (undefined4 *)0x0) {
        local_60 = (undefined4 *)0x0;
      }
      else {
        local_60[1] = local_50;
        *local_60 = CColor::vftable;
        *(ulonglong *)(local_60 + 2) = CONCAT44(uStack_48,local_4c);
        local_60[4] = local_44;
        local_60[5] = uStack_40;
        *(undefined1 *)(local_60 + 6) = local_3c;
        local_60[7] = puVar8;
        local_60[8] = 0;
        *(undefined1 *)(local_60 + 9) = 0;
      }
      iVar5 = local_5c + 1;
      bVar11 = local_5c != 0;
      puVar7 = local_60;
      local_5c = iVar5;
      if (bVar11) {
        puVar8[8] = local_60;
        puVar7 = local_64;
      }
    }
  }
  (**(code **)*local_1c)(1);
  piVar9 = *(int **)(param_1 + 0x2a88);
  puVar7 = local_64;
  while ((puVar8 = puVar7, *(int **)(param_1 + 0x2a88) <= piVar9 &&
         (piVar9 < *(int **)(param_1 + 0x2a8c)))) {
    iVar5 = *piVar9;
    piVar9 = piVar9 + 1;
    puVar7 = local_64;
    if ((puVar8 != (undefined4 *)0x0) && (puVar7 = puVar8, *(int *)(iVar5 + 0x10) != 0)) {
      local_34 = puVar8[1];
      uVar1 = *(undefined8 *)(puVar8 + 2);
      uVar2 = *(undefined8 *)(puVar8 + 4);
      puVar7 = (undefined4 *)puVar8[8];
      uVar3 = *(undefined1 *)(puVar8 + 6);
      *(undefined4 *)(iVar5 + 0x54) = local_34;
      *(undefined8 *)(iVar5 + 0x58) = uVar1;
      *(undefined1 *)(iVar5 + 0x68) = uVar3;
      *(undefined8 *)(iVar5 + 0x60) = uVar2;
    }
  }
  piVar9 = *(int **)(param_1 + 0x2a78);
  puVar7 = local_64;
  while ((puVar8 = puVar7, piVar10 = piVar9, *(int **)(param_1 + 0x2a78) <= piVar10 &&
         (piVar10 < *(int **)(param_1 + 0x2a7c)))) {
    local_70 = piVar10 + 1;
    piVar9 = local_70;
    puVar7 = local_64;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = puVar8[1];
      uVar3 = *(undefined1 *)(puVar8 + 6);
      uVar1 = *(undefined8 *)(puVar8 + 4);
      iVar5 = *piVar10;
      puVar7 = (undefined4 *)puVar8[8];
      *(undefined8 *)(iVar5 + 0x80) = *(undefined8 *)(puVar8 + 2);
      *(undefined4 *)(iVar5 + 0x7c) = uVar6;
      *(undefined1 *)(iVar5 + 0x90) = uVar3;
      *(undefined8 *)(iVar5 + 0x88) = uVar1;
    }
  }
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c4[0]);
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e0);
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  if (local_94 < 0x10) {
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    if (local_64 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_a8[0]);
}

