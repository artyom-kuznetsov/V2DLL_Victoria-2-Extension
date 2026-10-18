// FUN_00880750 @ 00880750 body=[[00880750, 008807d7] [008807db, 008808c9] [008808cd, 008808e8] [008808ec, 0088090b] [0088090f, 00880a59] [00880a5d, 00880aa4] [00880aa8, 00880ac9] [00880acd, 00880b12] [00880b16, 00880b47] [00880b4b, 00880c79] [00880c7d, 00880c9e] [00880ca2, 00880cc7] [00880ccb, 00880cea] [00880cee, 00880d0e] [00880d12, 00880d50] [00880d54, 00880d8d] [00880d91, 00880da8] [00880dac, 00880dc0]]


/* WARNING: Removing unreachable block (ram,0x00880d45) */

undefined4 FUN_00880750(undefined4 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  uint in_stack_00000020;
  undefined8 uVar6;
  uint local_d4 [2];
  undefined1 local_cc [4];
  int local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
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
  int local_50;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b69a1a;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 1;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_50 = in_ECX;
  FUN_00409350();
  local_8._0_1_ = 2;
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x18))();
  local_8._0_1_ = 6;
  puVar3 = (undefined4 *)FUN_009a8ee0(local_4c);
  local_8._0_1_ = 7;
  puVar4 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 8;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00e38ecc;
    puVar4[1] = local_64;
    puVar4[7] = 0xf;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    local_18 = puVar4;
    FUN_00408ed0();
    *puVar4 = &PTR_FUN_00e38f08;
    local_1c = puVar4 + 9;
    *local_1c = *puVar3;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    local_8._0_1_ = 10;
    FUN_009a97b0();
  }
  local_8._0_1_ = 7;
  local_18 = puVar4;
  FUN_009e6810(local_38);
  local_8._0_1_ = 0xb;
  FUN_009adb70();
  if (local_48 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 4;
  local_6c = 0xf;
  local_70 = 0;
  uVar1 = local_80 >> 8;
  local_80 = uVar1 << 8;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(local_50 + 0x20) < 0) {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350(&DAT_00e29bb4);
    local_8 = 0xe;
    local_14 = 4;
    puVar3 = (undefined4 *)FUN_009a8ee0(local_4c);
    local_8 = 0xf;
    local_14 = 0xc;
  }
  else {
    local_6c = 0xf;
    local_70 = 0;
    local_80 = uVar1 << 8;
    FUN_00409350(&DAT_00e29bac);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_14 = 1;
    puVar3 = (undefined4 *)FUN_009a8ee0(local_cc);
    local_8 = 0xd;
    local_14 = 3;
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffffff00;
  FUN_00409350("DIRECTION");
  local_8 = 0x10;
  puVar4 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x11;
  local_1c = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = local_64;
    *puVar4 = &PTR_FUN_00e38ecc;
    puVar4[7] = 0xf;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    FUN_00408ed0();
    *puVar4 = &PTR_FUN_00e38f08;
    local_18 = puVar4 + 9;
    *local_18 = *puVar3;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    local_8._0_1_ = 0x13;
    FUN_009a97b0();
    local_18 = puVar4;
  }
  local_8 = CONCAT31(local_8._1_3_,0x10);
  FUN_009e6810(local_b8);
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    local_8 = 0x14;
    FUN_009adb70();
    if (local_48 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    local_8 = 0x15;
    FUN_009adb70();
    if (local_c8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
  }
  local_8 = 4;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00409350(&DAT_00df963c);
  local_8._0_1_ = 0x16;
  if (*(int *)(local_50 + 0x20) < 1) {
    if (-1 < *(int *)(local_50 + 0x20)) goto LAB_00880b9a;
    uVar6 = 0x200df8510;
  }
  else {
    uVar6 = 0x200df8518;
  }
  FUN_00409350(uVar6);
LAB_00880b9a:
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  FUN_00409350("VALUE");
  local_8._0_1_ = 0x17;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514);
  local_1c = (undefined4 *)&stack0xfffffefc;
  local_8._0_1_ = 0x18;
  FUN_00988970(local_d4);
  local_8._0_1_ = 0x19;
  FUN_00988f20();
  local_8._0_1_ = 0x1a;
  FUN_00988f20();
  local_8._0_1_ = 0x1b;
  local_1c = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x1c;
  if (local_1c == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x1b;
  FUN_009e6810(local_9c);
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80 = local_80 & 0xffffff00;
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffffff00;
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4[0] = local_d4[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x16;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar5 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
  local_14 = local_14 | 0x10;
  local_8 = CONCAT31(local_8._1_3_,0x1d);
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

