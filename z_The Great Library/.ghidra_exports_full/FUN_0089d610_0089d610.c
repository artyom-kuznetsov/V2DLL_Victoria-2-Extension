// FUN_0089d610 @ 0089d610 body=[[0089d610, 0089d67e] [0089d682, 0089d753] [0089d757, 0089d776] [0089d77a, 0089d862] [0089d866, 0089d887] [0089d88b, 0089d8b2] [0089d8b6, 0089d901] [0089d905, 0089d91c] [0089d920, 0089d934]]


undefined4 FUN_0089d610(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint in_stack_00000020;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [2];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8752b;
  local_10 = ExceptionList;
  local_18 = 0;
  local_8 = 0;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("LOSE_CB",7);
  local_8._0_1_ = 1;
  FUN_009a8ee0(local_30,local_84);
  local_8._0_1_ = 3;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(&DAT_00df7e80,4);
  local_8._0_1_ = 4;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 4;
  if (DAT_0131acac == 0) {
    local_18 = FUN_00aae9af();
    local_8._0_1_ = 5;
    if (local_18 != 0) {
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
  FUN_0090a830(iVar4,local_68);
  local_8._0_1_ = 6;
  local_18 = FUN_00aae9af();
  local_8._0_1_ = 7;
  if (local_18 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_009a9ce0();
  }
  local_8._0_1_ = 6;
  FUN_009e6810(local_4c,&local_18);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_54 = 0xf;
  local_58 = 0;
  uVar1 = local_68[0] >> 8;
  local_68[0] = uVar1 << 8;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = uVar1 << 8;
  FUN_00409350(&DAT_00e156c4,3);
  local_8._0_1_ = 8;
  FUN_0089cb20();
  uVar5 = FUN_0055dd40();
  local_8._0_1_ = 9;
  puVar6 = (undefined4 *)FUN_009a8ee0(local_44,uVar5);
  local_8._0_1_ = 10;
  puVar7 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = &PTR_FUN_00e38ecc;
    puVar7[1] = local_30;
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
    local_8._0_1_ = 0xd;
    FUN_009a97b0();
  }
  local_8._0_1_ = 10;
  param_2 = puVar7;
  FUN_009e6810(local_68,&param_2);
  local_8._0_1_ = 0xe;
  FUN_009adb70();
  if (local_40 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_009adb70();
  if (local_2c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

