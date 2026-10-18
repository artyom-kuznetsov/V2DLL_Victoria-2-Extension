// FUN_0089d990 @ 0089d990 body=[[0089d990, 0089da13] [0089da17, 0089daf1] [0089daf5, 0089db14] [0089db18, 0089dc00] [0089dc04, 0089dc1f] [0089dc23, 0089dc42] [0089dc46, 0089dd22] [0089dd26, 0089dd41] [0089dd45, 0089dd63] [0089dd67, 0089ddb2] [0089ddb6, 0089ddcd] [0089ddd1, 0089dde5]]


undefined4 FUN_0089d990(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint in_stack_00000020;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_64 [4];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [2];
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8735b;
  local_10 = ExceptionList;
  local_18 = (undefined4 *)0x0;
  local_8 = 0;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("REV_LOSE_CB",0xb);
  local_8._0_1_ = 1;
  FUN_009a8ee0(local_64,local_9c);
  local_8._0_1_ = 3;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00df7e80,4);
  local_8._0_1_ = 4;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 4;
  if (DAT_0131acac == 0) {
    local_18 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 5;
    if (local_18 != (undefined4 *)0x0) {
      FUN_0090cca0();
    }
    local_8._0_1_ = 4;
    FUN_0090d9d0();
    uVar3 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar3;
  iVar2 = DAT_0131acac;
  iVar4 = FUN_0090da40();
  if (iVar4 == 0) {
    iVar4 = **(int **)(iVar2 + 0xc);
  }
  FUN_0090a830(iVar4,local_50);
  local_8._0_1_ = 6;
  local_18 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 7;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 6;
  FUN_009e6810(local_34,&local_18);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_3c = 0xf;
  local_40 = 0;
  uVar1 = local_50[0] >> 8;
  local_50[0] = uVar1 << 8;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = uVar1 << 8;
  FUN_00409350("ACTIVE",6);
  local_8._0_1_ = 8;
  FUN_0089cb20();
  uVar5 = FUN_0055dd40();
  local_8._0_1_ = 9;
  puVar6 = (undefined4 *)FUN_009a8ee0(local_2c,uVar5);
  local_8._0_1_ = 10;
  puVar7 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = &PTR_FUN_00e38ecc;
    puVar7[1] = local_64;
    puVar7[7] = 0xf;
    puVar7[6] = 0;
    *(undefined1 *)(puVar7 + 2) = 0;
    local_14 = puVar7;
    FUN_00408ed0();
    *puVar7 = &PTR_FUN_00e38f08;
    local_18 = puVar7 + 9;
    *local_18 = *puVar6;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    local_8._0_1_ = 0xd;
    FUN_009a97b0();
  }
  local_8._0_1_ = 10;
  local_14 = puVar7;
  FUN_009e6810(local_50,&local_14);
  local_8._0_1_ = 0xe;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_6c = 0xf;
  local_70 = 0;
  local_80 = local_80 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("PASSIVE",7);
  local_8._0_1_ = 0xf;
  uVar5 = FUN_0055dd40();
  local_8._0_1_ = 0x10;
  puVar6 = (undefined4 *)FUN_009a8ee0(local_2c,uVar5);
  local_8._0_1_ = 0x11;
  puVar7 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x12;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = local_64;
    *puVar7 = &PTR_FUN_00e38ecc;
    puVar7[7] = 0xf;
    puVar7[6] = 0;
    *(undefined1 *)(puVar7 + 2) = 0;
    param_2 = puVar7;
    FUN_00408ed0();
    *puVar7 = &PTR_FUN_00e38f08;
    local_14 = puVar7 + 9;
    *local_14 = *puVar6;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    local_8._0_1_ = 0x14;
    FUN_009a97b0();
  }
  local_8._0_1_ = 0x11;
  param_2 = puVar7;
  FUN_009e6810(local_50,&param_2);
  local_8._0_1_ = 0x15;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_6c = 0xf;
  local_70 = 0;
  local_80 = local_80 & 0xffffff00;
  if (local_3c < 0x10) {
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_009adb70();
    if (local_60 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

