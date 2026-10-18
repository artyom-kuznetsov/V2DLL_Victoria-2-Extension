// FUN_00882bd0 @ 00882bd0 body=[[00882bd0, 00882c6a] [00882c6e, 00882da7] [00882dab, 00882dc9] [00882dcd, 00882df4] [00882df8, 00882e1d] [00882e21, 00882e40] [00882e44, 00882e5e] [00882e62, 00882fd8] [00882fdc, 00882ffd] [00883001, 0088302b] [0088302f, 0088304e] [00883052, 00883068] [0088306c, 00883089] [0088308d, 008830df] [008830e3, 008830fa] [008830fe, 00883112]]


undefined4 FUN_00882bd0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

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
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  undefined4 *local_7c;
  undefined4 local_78;
  int local_74;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  undefined1 local_54 [4];
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
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
  
  puStack_c = &LAB_00b697e8;
  local_10 = ExceptionList;
  local_78 = 0;
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
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 6;
  (**(code **)(*piVar2 + 0x1c))(local_b4);
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
    puVar6[1] = local_54;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    param_2 = puVar6;
    FUN_00408ed0();
    *puVar6 = &PTR_FUN_00e38f08;
    local_7c = puVar6 + 9;
    *local_7c = *puVar5;
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
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0xf;
  local_88 = 0;
  uVar3 = local_98 >> 8;
  local_98 = uVar3 << 8;
  if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_bc = 0xf;
  local_c0 = 0;
  local_d0 = local_d0 & 0xffffff00;
  if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4[0] = local_b4[0] & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98 = uVar3 << 8;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 0xf;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00e029a8,4);
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  local_8._0_1_ = 0x11;
  pcVar7 = __itoa(*(int *)(local_74 + 0x20) / 1000,local_10c,10);
  pcVar9 = pcVar7;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
  local_8._0_1_ = 0x12;
  FUN_00988fa0();
  local_8._0_1_ = 0x13;
  uVar4 = FUN_00988f20();
  local_8._0_1_ = 0x14;
  puVar5 = (undefined4 *)FUN_009a8ee0(local_24,uVar4);
  local_8._0_1_ = 0x15;
  puVar6 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x16;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_00e38ecc;
    puVar6[1] = local_54;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    param_2 = puVar6;
    FUN_00408ed0();
    *puVar6 = &PTR_FUN_00e38f08;
    local_7c = puVar6 + 9;
    *local_7c = *puVar5;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    local_8._0_1_ = 0x18;
    FUN_009a97b0();
  }
  local_8._0_1_ = 0x15;
  param_2 = puVar6;
  FUN_009e6810(local_40,&param_2);
  local_8._0_1_ = 0x19;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4[0] = local_b4[0] & 0xffffff00;
  if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_bc = 0xf;
  local_c0 = 0;
  local_d0 = local_d0 & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar8 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c),*(undefined8 *)(iVar8 + 0x74));
  local_78 = 1;
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  FUN_009adb70();
  if (local_50 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

