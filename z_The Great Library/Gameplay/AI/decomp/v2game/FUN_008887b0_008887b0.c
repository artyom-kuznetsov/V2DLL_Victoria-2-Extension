// FUN_008887b0 @ 008887b0 body=[[008887b0, 00888874] [00888878, 008889af] [008889b3, 008889d4] [008889d8, 00888a02] [00888a06, 00888a2b] [00888a2f, 00888a4e] [00888a52, 00888a6f] [00888a73, 00888abe] [00888ac2, 00888b01] [00888b05, 00888b19]]


/* WARNING: Removing unreachable block (ram,0x00888a64) */

undefined1 * FUN_008887b0(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  uint in_stack_00000020;
  uint local_d4;
  uint local_b8;
  uint local_9c;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b87c26;
  local_10 = ExceptionList;
  local_14 = (undefined4 *)0x0;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    if (*(char *)(in_ECX + 0x1d) == '\0') {
      local_18 = *(undefined4 *)(in_ECX + 0x20);
      local_14 = *(undefined4 **)(in_ECX + 0x24);
      ExceptionList = &local_10;
    }
    else {
      local_18 = param_2[0xb];
      local_14 = (undefined4 *)param_2[0xc];
      ExceptionList = &local_10;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_008a8dc0();
  }
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_14 * 4);
  if ((int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU) < 1) {
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00409350("RELEASE",7);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_2c,local_78);
    local_8._0_1_ = 3;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 4;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00e156c4,3);
    local_8._0_1_ = 5;
    FUN_0055dd40();
    local_8._0_1_ = 6;
    FUN_00988fa0();
    local_8._0_1_ = 7;
    uVar1 = FUN_00988f20();
    local_8._0_1_ = 8;
    puVar2 = (undefined4 *)FUN_009a8ee0(local_40,uVar1);
    local_8._0_1_ = 9;
    puVar3 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 10;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_00e38ecc;
      puVar3[1] = local_2c;
      puVar3[7] = 0xf;
      puVar3[6] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      param_2 = puVar3;
      FUN_00408ed0();
      *puVar3 = &PTR_FUN_00e38f08;
      local_14 = puVar3 + 9;
      *local_14 = *puVar2;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      local_8._0_1_ = 0xc;
      FUN_009a97b0();
    }
    local_8._0_1_ = 9;
    param_2 = puVar3;
    FUN_009e6810(local_5c,&param_2);
    local_8._0_1_ = 0xd;
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

