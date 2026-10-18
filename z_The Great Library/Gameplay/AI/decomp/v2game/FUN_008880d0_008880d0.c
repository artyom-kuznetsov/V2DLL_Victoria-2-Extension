// FUN_008880d0 @ 008880d0 body=[[008880d0, 00888154] [00888158, 0088829b] [0088829f, 008882bd] [008882c1, 008882e8] [008882ec, 00888311] [00888315, 00888472] [00888476, 00888497] [0088849b, 008884c5] [008884c9, 008884eb] [008884ef, 0088850b] [0088850f, 00888529] [0088852d, 0088857f] [00888583, 0088859a] [0088859e, 008885b2]]


undefined4 FUN_008880d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  uint in_stack_00000020;
  uint local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b87d30;
  local_10 = ExceptionList;
  local_7c = 0;
  local_8 = 1;
  local_d8 = 0xf;
  local_dc = 0;
  local_ec[0] = local_ec[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("INHERIT",7);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_5c,local_ec);
  local_8._0_1_ = 4;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 4;
  if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d8 = 0xf;
  local_dc = 0;
  local_ec[0] = local_ec[0] & 0xffffff00;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  if (*(char *)(in_ECX + 0x28) == '\0') {
    local_8._0_1_ = uVar1;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0xf;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00e156c4,3);
    local_8._0_1_ = 0x10;
    if (*(char *)(in_ECX + 0x1c) == '\0') {
      if (*(char *)(in_ECX + 0x1d) == '\0') {
        local_18 = *(undefined4 *)(in_ECX + 0x20);
        local_14 = *(undefined4 **)(in_ECX + 0x24);
      }
      else {
        local_18 = *(undefined4 *)((int)param_2 + 0x2c);
        local_14 = *(undefined4 **)((int)param_2 + 0x30);
      }
    }
    else {
      FUN_008a8dc0();
    }
    FUN_0055dd40();
    local_8._0_1_ = 0x11;
    FUN_00988fa0();
    local_8._0_1_ = 0x12;
    uVar2 = FUN_00988f20();
    local_8._0_1_ = 0x13;
    puVar3 = (undefined4 *)FUN_009a8ee0(local_2c,uVar2);
    local_8._0_1_ = 0x14;
    puVar4 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0x15;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = local_5c;
      *puVar4 = &PTR_FUN_00e38ecc;
      puVar4[7] = 0xf;
      puVar4[6] = 0;
      *(undefined1 *)(puVar4 + 2) = 0;
      param_2 = puVar4;
      FUN_00408ed0();
      *puVar4 = &PTR_FUN_00e38f08;
      local_14 = puVar4 + 9;
      *local_14 = *puVar3;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      local_8._0_1_ = 0x17;
      FUN_009a97b0();
    }
    local_8._0_1_ = 0x14;
    param_2 = puVar4;
    FUN_009e6810(local_48,&param_2);
    local_8 = CONCAT31(local_8._1_3_,0x18);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
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
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = local_98 & 0xffffff00;
  }
  else {
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 5;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00e156c4,3);
    local_8._0_1_ = 6;
    FUN_0055dd40();
    local_8._0_1_ = 7;
    FUN_00988fa0();
    local_8._0_1_ = 8;
    uVar2 = FUN_00988f20();
    local_8._0_1_ = 9;
    puVar3 = (undefined4 *)FUN_009a8ee0(local_2c,uVar2);
    local_8._0_1_ = 10;
    puVar4 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0xb;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = &PTR_FUN_00e38ecc;
      puVar4[1] = local_5c;
      puVar4[7] = 0xf;
      puVar4[6] = 0;
      *(undefined1 *)(puVar4 + 2) = 0;
      param_2 = puVar4;
      FUN_00408ed0();
      *puVar4 = &PTR_FUN_00e38f08;
      local_14 = puVar4 + 9;
      *local_14 = *puVar3;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      local_8._0_1_ = 0xd;
      FUN_009a97b0();
    }
    local_8._0_1_ = 10;
    param_2 = puVar4;
    FUN_009e6810(local_48,&param_2);
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
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = local_d0 & 0xffffff00;
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_84 = 0xf;
  local_88 = 0;
  local_a0 = 0xf;
  local_a4 = 0;
  local_bc = 0xf;
  local_c0 = 0;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_48[0] = local_48[0] & 0xffffff00;
  local_38 = 0;
  local_34 = 0xf;
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar5 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
  local_7c = 1;
  local_8 = CONCAT31(local_8._1_3_,0x19);
  FUN_009adb70();
  if (local_58 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

