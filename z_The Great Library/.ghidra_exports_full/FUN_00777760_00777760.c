// FUN_00777760 @ 00777760 body=[[00777760, 007777d5] [007777d9, 00777863] [00777867, 00777979] [0077797d, 00777a7d] [00777a81, 00777aa5] [00777aa9, 00777b4c] [00777b50, 00777b73] [00777b77, 00777c1c] [00777c20, 00777c43] [00777c47, 00777c68] [00777c6c, 00777ca4] [00777ca8, 00777cbe]]


void FUN_00777760(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *local_a4;
  uint local_a0 [3];
  uint uStack_94;
  uint local_90;
  uint local_8c;
  uint uStack_88;
  undefined4 *local_84;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_78;
  uint local_74;
  uint uStack_70;
  int iStack_68;
  undefined1 local_64 [20];
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6c8dd;
  pvStack_14 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  FUN_009a8ee0();
  local_c._0_1_ = 2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 3;
  FUN_009a99f0();
  local_c._0_1_ = 2;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0[0]);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 4;
  iVar4 = (param_1[0xc2] + -43800000) / 0x18;
  iVar5 = 0;
  for (iVar4 = (iVar4 - (int)((float)(int)((double)iVar4 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar4; iVar4 = iVar4 - (&DAT_00f1027c)[iVar5]) {
    iVar5 = iVar5 + 1;
  }
  iVar4 = 0;
  local_84 = (undefined4 *)0x0;
  local_a4 = (undefined4 *)0x0;
  if (1 < iVar5) {
    do {
      local_84 = (undefined4 *)((int)local_84 + (&DAT_00f10280)[iVar4]);
      iVar4 = iVar4 + 2;
    } while (iVar4 < iVar5 + -1);
  }
  FUN_009a99f0();
  local_c._0_1_ = 2;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0[0]);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 5;
  puVar1 = (undefined4 *)FUN_009c5310(param_1 + 0xc2);
  local_c._0_1_ = 6;
  puVar2 = (undefined4 *)FUN_00aae9af(0x38);
  local_c._0_1_ = 7;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00e38ecc;
    puVar2[1] = local_64;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    local_a4 = puVar2;
    FUN_00408ed0(local_a0,0,0xffffffff);
    *puVar2 = &PTR_FUN_00e38f08;
    local_84 = puVar2 + 9;
    *local_84 = *puVar1;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    local_c._0_1_ = 9;
    FUN_009a97b0();
  }
  local_c._0_1_ = 6;
  local_a4 = puVar2;
  FUN_009e6810();
  local_c._0_1_ = 10;
  FUN_009adb70();
  if (local_7c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c);
  }
  local_c._0_1_ = 2;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0[0]);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,0xb);
  (**(code **)(*param_1 + 0x20))(local_80);
  puStack_10._0_1_ = 0xc;
  iVar4 = FUN_00aae9af();
  puStack_10._0_1_ = 0xd;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009a9ce0();
  }
  puStack_10._0_1_ = 0xc;
  FUN_009e6810(&local_a4,&stack0xffffff58);
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 2;
  uStack_70 = 0xf;
  local_74 = 0;
  local_84 = (undefined4 *)((uint)local_84 & 0xffffff00);
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  uStack_94 = 0;
  local_a4 = (undefined4 *)((uint)local_a4 & 0xffffff00);
  FUN_00409350("year_label",10);
  puStack_10._0_1_ = 0xe;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  puStack_10._0_1_ = 0xf;
  FUN_00988fa0();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x10);
  (**(code **)(*(int *)param_1[0x9e] + 0x38))();
  FUN_009e7500();
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_88);
  }
  local_74 = 0xf;
  local_78 = 0;
  uStack_88 = uStack_88 & 0xffffff00;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c);
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  local_3c = local_3c & 0xffffff00;
  if (uStack_94 < 0x10) {
    *(undefined1 *)(param_1 + 0xdd) = 1;
    pvStack_14 = (void *)0x11;
    FUN_009adb70();
    if (iStack_68 == 0) {
      ExceptionList = pvStack_1c;
      return;
    }
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iStack_68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uVar3);
}

