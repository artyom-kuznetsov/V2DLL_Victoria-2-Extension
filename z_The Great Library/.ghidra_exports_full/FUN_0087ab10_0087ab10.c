// FUN_0087ab10 @ 0087ab10 body=[[0087ab10, 0087ac9c] [0087aca0, 0087acbe] [0087acc2, 0087ace1] [0087ace5, 0087ad04] [0087ad08, 0087ad22] [0087ad26, 0087ae61] [0087ae65, 0087aeaf] [0087aeb3, 0087aedd] [0087aee1, 0087af1a] [0087af1e, 0087af46] [0087af4a, 0087b0ba] [0087b0be, 0087b0dc] [0087b0e0, 0087b0ff] [0087b103, 0087b128] [0087b12c, 0087b14b] [0087b14f, 0087b169] [0087b16d, 0087b253] [0087b257, 0087b27b] [0087b27f, 0087b298] [0087b29c, 0087b2b5] [0087b2b9, 0087b2d3] [0087b2d7, 0087b318] [0087b31c, 0087b345] [0087b349, 0087b391] [0087b395, 0087b3a9]]


undefined4 FUN_0087ab10(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  char *pcVar9;
  float10 fVar10;
  uint local_10c [4];
  undefined4 local_fc;
  uint local_f8;
  uint local_f0;
  undefined4 local_e0;
  uint local_dc;
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  undefined1 local_b8 [4];
  int local_b4;
  uint local_a4;
  int local_98;
  undefined4 local_94;
  uint local_90;
  uint local_88 [3];
  int local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6a0f2;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_009a8ee0();
  local_8 = 1;
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4 = local_d4 & 0xffffff00;
  FUN_00409350();
  piVar8 = (int *)(in_ECX + 0x20);
  local_8._0_1_ = 2;
  param_3 = piVar8;
  if ((0 < *piVar8) || (*piVar8 < 0)) {
    FUN_00409350();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 3;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 4;
  fVar10 = (float10)FUN_0040b340((float)*piVar8 / 1000.0);
  local_18 = (undefined4 *)(float)fVar10;
  uVar4 = FUN_00988d00();
  local_8._0_1_ = 5;
  FUN_00988f20(uVar4);
  local_8._0_1_ = 6;
  uVar4 = FUN_00988f20(local_34);
  local_8._0_1_ = 7;
  local_18 = (undefined4 *)FUN_00aae9af(0x40);
  local_8._0_1_ = 8;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_009a9ce0(local_18,local_b8,uVar4);
  }
  local_8._0_1_ = 7;
  FUN_009e6810();
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  uVar2 = local_6c[0] >> 8;
  local_6c[0] = uVar2 << 8;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8._0_1_ = 2;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 2;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  if (*param_3 < 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    local_8._0_1_ = uVar3;
    FUN_00409350();
    local_8 = 0xb;
    local_14 = 4;
    puVar5 = (undefined4 *)FUN_009a8ee0();
    local_8 = 0xc;
    local_14 = 0xc;
  }
  else {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = uVar2 << 8;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,9);
    local_14 = 1;
    puVar5 = (undefined4 *)FUN_009a8ee0();
    local_8 = 10;
    local_14 = 3;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0xd;
  puVar6 = (undefined4 *)FUN_00aae9af(0x38);
  local_8._0_1_ = 0xe;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_00e38ecc;
    puVar6[1] = local_b8;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    local_18 = puVar6;
    FUN_00408ed0(local_34,0,0xffffffff);
    *puVar6 = &PTR_FUN_00e38f08;
    puVar6[9] = *puVar5;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    local_8._0_1_ = 0x10;
    FUN_009a97b0();
  }
  local_8 = CONCAT31(local_8._1_3_,0xd);
  local_18 = puVar6;
  FUN_009e6810();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    local_8 = 0x11;
    FUN_009adb70();
    if (local_98 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_98);
    }
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    local_8 = 0x12;
    FUN_009adb70();
    if (local_7c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_7c);
    }
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
  }
  local_8 = 2;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  param_3 = (int *)((float)*param_3 / 1000.0 - 1.0);
  pcVar9 = "+";
  if ((float)param_3 <= 0.0) {
    pcVar9 = "";
  }
  local_f8 = 0xf;
  local_fc = 0;
  local_10c[0] = local_10c[0] & 0xffffff00;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 0x13;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x14;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x15;
  uVar4 = FUN_00988d00();
  local_8._0_1_ = 0x16;
  FUN_00988f20(local_10c);
  local_8._0_1_ = 0x17;
  FUN_00988f20(uVar4);
  local_8._0_1_ = 0x18;
  uVar4 = FUN_00988f20(local_6c);
  local_8._0_1_ = 0x19;
  param_3 = (int *)FUN_00aae9af(0x40);
  local_8._0_1_ = 0x1a;
  if (param_3 == (int *)0x0) {
    param_3 = (int *)0x0;
  }
  else {
    param_3 = (int *)FUN_009a9ce0(param_3,local_b8,uVar4);
  }
  local_8._0_1_ = 0x19;
  FUN_009e6810();
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f0);
  }
  local_dc = 0xf;
  local_e0 = 0;
  local_f0 = local_f0 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8._0_1_ = 0x13;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1b;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1c;
  (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c))
            (local_88);
  local_8._0_1_ = 0x1d;
  FUN_00988fa0();
  local_8._0_1_ = 0x1e;
  FUN_00988f20();
  local_8._0_1_ = 0x1f;
  param_3 = (int *)FUN_00aae9af();
  local_8._0_1_ = 0x20;
  if (param_3 == (int *)0x0) {
    param_3 = (int *)0x0;
  }
  else {
    param_3 = (int *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x1f;
  FUN_009e6810(local_34,&param_3);
  if (local_dc < 0x10) {
    local_dc = 0xf;
    local_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x13);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (local_58 < 0x10) {
      iVar7 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
      local_14 = local_14 | 0x10;
      if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_f8 = 0xf;
      local_fc = 0;
      local_10c[0] = local_10c[0] & 0xffffff00;
      if (local_c0 < 0x10) {
        local_c0 = 0xf;
        local_c4 = 0;
        local_d4 = local_d4 & 0xffffff00;
        local_8 = 0x21;
        FUN_009adb70();
        if (local_b4 == 0) {
          ExceptionList = local_10;
          return param_1;
        }
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

