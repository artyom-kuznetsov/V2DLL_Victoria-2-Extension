// FUN_0087dfc0 @ 0087dfc0 body=[[0087dfc0, 0087e05d] [0087e061, 0087e19a] [0087e19e, 0087e1bc] [0087e1c0, 0087e1e4] [0087e1e8, 0087e20d] [0087e211, 0087e230] [0087e234, 0087e24e] [0087e252, 0087e37c] [0087e380, 0087e3a1] [0087e3a5, 0087e3cf] [0087e3d3, 0087e3f5] [0087e3f9, 0087e412] [0087e416, 0087e430] [0087e434, 0087e4ac] [0087e4b0, 0087e5a8] [0087e5ac, 0087e5cd] [0087e5d1, 0087e5fb] [0087e5ff, 0087e61e] [0087e622, 0087e638] [0087e63c, 0087e659] [0087e65d, 0087e6b2] [0087e6b6, 0087e6cd] [0087e6d1, 0087e6e5]]


undefined4 FUN_0087dfc0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint in_stack_00000020;
  char local_10c [32];
  uint local_ec;
  undefined4 local_dc;
  uint local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  undefined1 local_78 [4];
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_64;
  int local_60;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7960f;
  local_10 = ExceptionList;
  local_d0 = 0;
  local_8 = 1;
  piVar2 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)((int)param_2 + 0x10) * 4);
  local_d8 = 0xf;
  local_dc = 0;
  local_ec = local_ec & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8._0_1_ = 2;
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_ec);
  }
  local_d8 = 0xf;
  local_dc = 0;
  local_ec = local_ec & 0xffffff00;
  local_48 = 0xf;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 6;
  (**(code **)(*piVar2 + 0x1c))(local_b0);
  local_8._0_1_ = 7;
  FUN_00988fa0();
  local_8._0_1_ = 8;
  uVar4 = FUN_00988f20();
  local_8._0_1_ = 9;
  puVar5 = (undefined4 *)FUN_009a8ee0(local_24,uVar4);
  local_8._0_1_ = 10;
  puVar6 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_00e38ecc;
    puVar6[1] = local_78;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    param_2 = puVar6;
    FUN_00408ed0();
    *puVar6 = &PTR_FUN_00e38f08;
    local_64 = puVar6 + 9;
    *local_64 = *puVar5;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    local_8._0_1_ = 0xd;
    FUN_009a97b0();
  }
  local_8._0_1_ = 10;
  param_2 = puVar6;
  FUN_009e6810(local_40,&param_2);
  local_8._0_1_ = 0xe;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 0xf;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00df7e80,4);
  local_8._0_1_ = 0x10;
  FUN_004ea790(*(undefined4 *)(local_60 + 0x24),local_94);
  local_8._0_1_ = 0x11;
  FUN_00988fa0();
  local_8._0_1_ = 0x12;
  uVar4 = FUN_00988f20();
  local_8._0_1_ = 0x13;
  puVar5 = (undefined4 *)FUN_009a8ee0(local_24,uVar4);
  local_8._0_1_ = 0x14;
  puVar6 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x15;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_00e38ecc;
    puVar6[1] = local_78;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    param_2 = puVar6;
    FUN_00408ed0();
    *puVar6 = &PTR_FUN_00e38f08;
    local_64 = puVar6 + 9;
    *local_64 = *puVar5;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    local_8._0_1_ = 0x17;
    FUN_009a97b0();
  }
  local_8._0_1_ = 0x14;
  param_2 = puVar6;
  FUN_009e6810(local_40,&param_2);
  local_8._0_1_ = 0x18;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  uVar3 = local_94[0] >> 8;
  local_94[0] = uVar3 << 8;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = uVar3 << 8;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 0x19;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00e029a8,4);
  local_48 = 0xf;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  local_8._0_1_ = 0x1b;
  pcVar7 = __itoa(*(int *)(local_60 + 0x20) / 1000,local_10c,10);
  pcVar9 = pcVar7;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
  local_8._0_1_ = 0x1c;
  FUN_00988fa0();
  local_8._0_1_ = 0x1d;
  uVar4 = FUN_00988f20();
  local_8._0_1_ = 0x1e;
  puVar5 = (undefined4 *)FUN_009a8ee0(local_24,uVar4);
  local_8._0_1_ = 0x1f;
  puVar6 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x20;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_00e38ecc;
    puVar6[1] = local_78;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    param_2 = puVar6;
    FUN_00408ed0();
    *puVar6 = &PTR_FUN_00e38f08;
    local_64 = puVar6 + 9;
    *local_64 = *puVar5;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    local_8._0_1_ = 0x22;
    FUN_009a97b0();
  }
  local_8._0_1_ = 0x1f;
  param_2 = puVar6;
  FUN_009e6810(local_40,&param_2);
  local_8._0_1_ = 0x23;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar8 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c),*(undefined8 *)(iVar8 + 0x74));
  local_d0 = 1;
  local_8 = CONCAT31(local_8._1_3_,0x24);
  FUN_009adb70();
  if (local_74 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

