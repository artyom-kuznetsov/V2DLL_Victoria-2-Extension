// FUN_0087c450 @ 0087c450 body=[[0087c450, 0087c5cf] [0087c5d3, 0087c61d] [0087c621, 0087c64b] [0087c64f, 0087c688] [0087c68c, 0087c6b7] [0087c6bb, 0087c7fb] [0087c7ff, 0087c81a] [0087c81e, 0087c83f] [0087c843, 0087c868] [0087c86c, 0087c88b] [0087c88f, 0087c8ac] [0087c8b0, 0087c901] [0087c905, 0087c919]]


undefined4 FUN_0087c450(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  undefined4 *local_b0;
  uint local_ac;
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  undefined1 local_74 [4];
  int local_70;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b69db4;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_009a8ee0();
  local_8 = 1;
  if (*(char *)(in_ECX + 0x20) == '\0') {
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350();
    local_8 = 4;
    local_14 = 4;
    puVar1 = (undefined4 *)FUN_009a8ee0();
    local_8 = 5;
    local_14 = 0xc;
  }
  else {
    local_7c = 0xf;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,2);
    local_14 = 1;
    puVar1 = (undefined4 *)FUN_009a8ee0();
    local_8 = 3;
    local_14 = 3;
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 6;
  puVar2 = (undefined4 *)FUN_00aae9af(0x38);
  local_8._0_1_ = 7;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00e38ecc;
    puVar2[1] = local_74;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    param_3 = puVar2;
    FUN_00408ed0(local_44,0,0xffffffff);
    *puVar2 = &PTR_FUN_00e38f08;
    local_b0 = puVar2 + 9;
    *local_b0 = *puVar1;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    local_8._0_1_ = 9;
    FUN_009a97b0();
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  param_3 = puVar2;
  FUN_009e6810();
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    local_8 = 10;
    FUN_009adb70();
    if (local_a0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a0);
    }
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60);
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    local_8 = 0xb;
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_24);
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
  }
  local_8 = 1;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_7c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90);
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90 = local_90 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xd;
  (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c))
            (local_cc);
  local_8._0_1_ = 0xe;
  FUN_00988fa0();
  local_8._0_1_ = 0xf;
  uVar3 = FUN_00988f20();
  local_8._0_1_ = 0x10;
  puVar1 = (undefined4 *)FUN_009a8ee0(local_28,uVar3);
  local_8._0_1_ = 0x11;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x12;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00e38ecc;
    puVar2[1] = local_74;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    param_3 = puVar2;
    FUN_00408ed0();
    *puVar2 = &PTR_FUN_00e38f08;
    puVar2[9] = *puVar1;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    local_8._0_1_ = 0x14;
    FUN_009a97b0();
  }
  local_8._0_1_ = 0x11;
  param_3 = puVar2;
  FUN_009e6810(local_44,&param_3);
  local_8._0_1_ = 0x15;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac = local_ac & 0xffffff00;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_14 = local_14 | 0x10;
  local_8 = 0x16;
  FUN_009adb70();
  if (local_70 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

