// FUN_00721490 @ 00721490 body=[[00721490, 00721525] [00721529, 00721592] [00721596, 00721686] [0072168a, 007216c5] [007216c9, 007216e9] [007216ed, 00721718] [0072171c, 007217f0] [007217f4, 0072182f] [00721833, 00721853] [00721857, 00721940] [00721944, 0072197f] [00721983, 007219a3] [007219a7, 007219d2] [007219d6, 00721ad4] [00721ad8, 00721b28] [00721b2c, 00721b5b] [00721b5f, 00721b8d] [00721b91, 00721ba5]]


void FUN_00721490(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint unaff_EBX;
  uint uVar5;
  uint uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint uStack_100;
  undefined1 auStack_fc [8];
  undefined4 uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  uint uStack_e0;
  int *apiStack_dc [3];
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_98;
  undefined1 auStack_94 [12];
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  uint uStack_70;
  undefined1 local_6c [12];
  int *piStack_60;
  uint local_5c;
  undefined4 local_58;
  uint uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_34;
  uint uStack_30;
  void *pvStack_24;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6dace;
  pvStack_14 = ExceptionList;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("trade_details",0xd);
  local_c = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_6c);
  puStack_10 = (undefined1 *)0xffffffff;
  apiStack_dc[0] = piVar1;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_70);
  }
  local_5c = 0xf;
  piStack_60 = (int *)0x0;
  uStack_70 = uStack_70 & 0xffffff00;
  uStack_100 = 0xf;
  uStack_104 = 0;
  uStack_114 = uStack_114 & 0xffffff00;
  FUN_00409350("sell_stockpile",0xe);
  puStack_10 = (undefined1 *)0x1;
  iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_114);
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EBX);
  }
  uStack_104 = 0xf;
  uStack_108 = 0;
  uVar5 = unaff_EBX & 0xffffff00;
  uStack_c8 = 0xf;
  uStack_cc = 0;
  apiStack_dc[0] = (int *)((uint)apiStack_dc[0] & 0xffffff00);
  if (*(int *)(iVar2 + 0x6c) == 1) {
    FUN_00409350(&DAT_00e11880,4);
    pvStack_14 = (void *)0x2;
    uStack_e8 = 0xf;
    uStack_ec = 0;
    auStack_fc[0] = 0;
    FUN_00409350("sell_stockpile_label",0x14);
    pvStack_14._0_1_ = 3;
    iVar2 = FUN_009a8ee0(&stack0xfffffee8,apiStack_dc);
    pvStack_14._0_1_ = 4;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                         (int)*(undefined8 *)(iVar3 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,5);
    (**(code **)(*piVar1 + 0x3c))(auStack_fc);
    FUN_00408ed0(uVar4,0,0xffffffff);
    FUN_00a5ecc0(uVar4,0);
    if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_c4);
    }
    uStack_b0 = 0xf;
    uStack_b4 = 0;
    uStack_c4 = uStack_c4 & 0xffffff00;
    uStack_18 = CONCAT31(uStack_18._1_3_,6);
    FUN_009adb70();
    if (uVar5 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar5);
    }
    uStack_114 = 0;
    uStack_110 = 0;
    if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_100);
    }
    uStack_18 = 0xffffffff;
    uStack_ec = 0xf;
    uStack_f0 = 0;
    uStack_100 = uStack_100 & 0xffffff00;
    if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_e0);
    }
    uStack_cc = 0xf;
    uStack_d0 = 0;
    uStack_e0 = uStack_e0 & 0xffffff00;
    FUN_00409350("MINIMUM_STOCKPILE_TARGET",0x18);
    uStack_18 = 7;
    uStack_ec = 0xf;
    uStack_f0 = 0;
    uStack_100 = uStack_100 & 0xffffff00;
    FUN_00409350("sell_slidier_desc",0x11);
    uStack_18._0_1_ = 8;
    FUN_009a8ee0(&stack0xfffffee4,&uStack_e0);
    uStack_18._0_1_ = 9;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                         (int)*(undefined8 *)(iVar3 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    uStack_18 = CONCAT31(uStack_18._1_3_,10);
    (**(code **)(*piStack_e4 + 0x3c))(&uStack_100);
    FUN_00408ed0(uVar4,0,0xffffffff);
    FUN_00a5ecc0(uVar4,0);
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_c8);
    }
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    uStack_c8 = uStack_c8 & 0xffffff00;
    uStack_1c = 0xb;
    FUN_009adb70();
    if (iVar2 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar2);
    }
    uStack_114 = 0;
    if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_104);
    }
    uStack_f0 = 0xf;
    uStack_f4 = 0;
    uStack_104 = uStack_104 & 0xffffff00;
    uVar5 = uStack_d0;
  }
  else {
    FUN_00409350(&DAT_00e118b8,3);
    pvStack_14 = (void *)0xc;
    uStack_e8 = 0xf;
    uStack_ec = 0;
    auStack_fc[0] = 0;
    FUN_00409350("sell_stockpile_label",0x14);
    pvStack_14._0_1_ = 0xd;
    FUN_009a8ee0(&stack0xfffffee8,apiStack_dc);
    pvStack_14._0_1_ = 0xe;
    iVar2 = FUN_00475500();
    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar2 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20),
                         (int)*(undefined8 *)(iVar2 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar2 + 0x74) >> 0x20));
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xf);
    (**(code **)(*piVar1 + 0x3c))(auStack_fc);
    FUN_00408ed0(uVar4,0,0xffffffff);
    FUN_00a5ecc0(uVar4,0);
    if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_c4);
    }
    uStack_b0 = 0xf;
    uStack_b4 = 0;
    uStack_c4 = uStack_c4 & 0xffffff00;
    uStack_18 = CONCAT31(uStack_18._1_3_,0x10);
    FUN_009adb70();
    if (uVar5 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar5);
    }
    uStack_114 = 0;
    uStack_110 = 0;
    if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_100);
    }
    uStack_18 = 0xffffffff;
    uStack_ec = 0xf;
    uStack_f0 = 0;
    uStack_100 = uStack_100 & 0xffffff00;
    if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_e0);
    }
    uStack_48 = 0xf;
    uStack_4c = 0;
    local_5c = local_5c & 0xffffff00;
    FUN_00409350("MAXIMUM_STOCKPILE_TARGET",0x18);
    uStack_18 = 0x11;
    uStack_80 = 0xf;
    uStack_84 = 0;
    auStack_94[0] = 0;
    FUN_00409350("sell_slidier_desc",0x11);
    uStack_18._0_1_ = 0x12;
    FUN_009a8ee0(&iStack_a8,&local_5c);
    uStack_18._0_1_ = 0x13;
    iVar2 = FUN_00475500();
    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar2 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20),
                         (int)*(undefined8 *)(iVar2 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar2 + 0x74) >> 0x20));
    uStack_18 = CONCAT31(uStack_18._1_3_,0x14);
    (**(code **)(*piStack_e4 + 0x3c))(auStack_94);
    FUN_00408ed0(uVar4,0,0xffffffff);
    FUN_00a5ecc0(uVar4,0);
    if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_44);
    }
    uStack_30 = 0xf;
    uStack_34 = 0;
    uStack_44 = uStack_44 & 0xffffff00;
    uStack_1c = 0x15;
    FUN_009adb70();
    if (iStack_a8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_a8);
    }
    iStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_98);
    }
    uStack_84 = 0xf;
    uStack_88 = 0;
    uStack_98 = uStack_98 & 0xffffff00;
    piStack_e4 = piStack_60;
    uVar5 = uStack_4c;
  }
  if (0xf < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piStack_e4);
  }
  ExceptionList = pvStack_24;
  return;
}

