// FUN_005c0b00 @ 005c0b00 body=[[005c0b00, 005c0b7a] [005c0b7e, 005c0bd2] [005c0bd6, 005c0ccf] [005c0cd3, 005c0cee] [005c0cf2, 005c0d13] [005c0d17, 005c0d63] [005c0d67, 005c0db5] [005c0db9, 005c0ec2] [005c0ec6, 005c0ee1] [005c0ee5, 005c0f04] [005c0f08, 005c0ff5] [005c0ff9, 005c1014] [005c1018, 005c1036] [005c103a, 005c1081] [005c1085, 005c10a8] [005c10ac, 005c10e7] [005c10eb, 005c10ff]]


undefined1 * FUN_005c0b00(undefined1 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  undefined8 uStack_cc;
  uint *puStack_c4;
  uint *puStack_c0;
  undefined1 local_b0 [4];
  int local_ac;
  undefined4 local_9c;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  undefined1 local_7c [4];
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int *local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b718a7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  puStack_c0 = local_48;
  local_9c = 1;
  puStack_c4 = (uint *)0x5c0b57;
  local_68 = in_ECX;
  uVar1 = (**(code **)(*in_ECX + 0x20))();
  puStack_c4 = (uint *)0xffffffff;
  uStack_cc = (ulonglong)uVar1;
  local_8 = 1;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_34) {
    puStack_c4 = (uint *)local_48[0];
    uStack_cc = CONCAT44(&UNK_005c0b7b,(undefined4)uStack_cc);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_c4 = (uint *)0x1;
  uStack_cc = 0xdee2cc005c0b8c;
  FUN_00448740();
  puStack_c4 = (uint *)0xd;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  uStack_cc = 0xe02998005c0ba9;
  FUN_00409350();
  puStack_c4 = local_64;
  local_8 = 2;
  uStack_cc = CONCAT44(local_b0,0x5c0bc0);
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_50) {
    puStack_c4 = (uint *)local_64[0];
    uStack_cc = CONCAT44(&UNK_005c0bd3,(undefined4)uStack_cc);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_c4 = (uint *)0x4;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  uStack_cc = 0xe029a8005c0c00;
  FUN_00409350();
  local_8._0_1_ = 5;
  puStack_c4 = local_48;
  uStack_cc = CONCAT44(0x5c0c11,(undefined4)uStack_cc);
  uVar2 = (**(code **)(*in_ECX + 0x38))();
  uStack_cc = CONCAT44(uVar2,local_2c);
  local_8._0_1_ = 6;
  puVar3 = (undefined4 *)FUN_009a8ee0();
  local_8._0_1_ = 7;
  uStack_cc = 0x38005c0c2c;
  puVar4 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 8;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = local_b0;
    *puVar4 = &PTR_FUN_00e38ecc;
    uStack_cc = 0xffffffff00000000;
    puVar4[7] = 0xf;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    local_14 = puVar4;
    FUN_00408ed0();
    *puVar4 = &PTR_FUN_00e38f08;
    local_18 = puVar4 + 9;
    *local_18 = *puVar3;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    local_8._0_1_ = 10;
    uStack_cc = CONCAT44(0x5c0c8b,(undefined4)uStack_cc);
    FUN_009a97b0();
  }
  local_8._0_1_ = 7;
  uStack_cc = CONCAT44(&local_14,local_98);
  local_14 = puVar4;
  FUN_009e6810();
  local_8._0_1_ = 0xb;
  uStack_cc = CONCAT44(0x5c0cb8,(undefined4)uStack_cc);
  FUN_009adb70();
  if (local_28 != 0) {
    uStack_cc = CONCAT44(0x5c0cc7,(undefined4)uStack_cc);
    FUN_009e6a80();
    uStack_cc = CONCAT44(local_28,&UNK_005c0cd0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_34) {
    uStack_cc = CONCAT44(local_48[0],&UNK_005c0cef);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_84) {
    uStack_cc = CONCAT44(local_98[0],&UNK_005c0d14);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_cc = CONCAT44(0x5c0d1c,(undefined4)uStack_cc);
  iVar5 = FUN_00475500();
  uStack_cc = *(undefined8 *)(iVar5 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
  uStack_cc = 0xffffffff00000000;
  local_8._0_1_ = 0xc;
  FUN_00448aa0();
  local_8._0_1_ = 4;
  if (0xf < local_34) {
    uStack_cc = CONCAT44(local_48[0],&UNK_005c0d64);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_cc = 0xe00e029b0;
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  FUN_00409350();
  uStack_cc = CONCAT44(local_98,local_7c);
  local_8._0_1_ = 0xd;
  FUN_009a8ee0();
  local_8._0_1_ = 0xf;
  if (0xf < local_84) {
    uStack_cc = CONCAT44(local_98[0],&UNK_005c0db6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_cc = 0x400e029a8;
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x10;
  local_18 = (undefined4 *)&uStack_cc;
  if ((local_68[0x1d] == 0) || (*(char *)(local_68[0x1d] + 0x164) == '\0')) {
    uStack_cc = CONCAT44(2,local_68[0x10]);
  }
  else {
    uStack_cc = 0x200000000;
  }
  uVar2 = FUN_00988a50();
  uStack_cc = CONCAT44(uVar2,local_2c);
  local_8._0_1_ = 0x11;
  puVar3 = (undefined4 *)FUN_009a8ee0();
  local_8._0_1_ = 0x12;
  uStack_cc = 0x38005c0e2b;
  puVar4 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x13;
  local_18 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00e38ecc;
    puVar4[1] = local_7c;
    uStack_cc = 0xffffffff00000000;
    puVar4[7] = 0xf;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    FUN_00408ed0();
    *puVar4 = &PTR_FUN_00e38f08;
    local_14 = puVar4 + 9;
    *local_14 = *puVar3;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    local_8._0_1_ = 0x15;
    uStack_cc = CONCAT44(0x5c0e84,(undefined4)uStack_cc);
    FUN_009a97b0();
    local_14 = puVar4;
  }
  local_8._0_1_ = 0x12;
  uStack_cc = CONCAT44(&local_14,local_64);
  FUN_009e6810();
  local_8._0_1_ = 0x16;
  uStack_cc = CONCAT44(0x5c0eab,(undefined4)uStack_cc);
  FUN_009adb70();
  if (local_28 != 0) {
    uStack_cc = CONCAT44(0x5c0eba,(undefined4)uStack_cc);
    FUN_009e6a80();
    uStack_cc = CONCAT44(local_28,&UNK_005c0ec3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_34) {
    uStack_cc = CONCAT44(local_48[0],&UNK_005c0ee2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xf;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
    uStack_cc = CONCAT44(local_64[0],&UNK_005c0f05);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_cc = 0x300dfad2c;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x17;
  local_18 = (undefined4 *)&uStack_cc;
  uStack_cc = CONCAT44(2,*(undefined4 *)(local_68[0xe] + 0xb4));
  uVar2 = FUN_00988a50();
  uStack_cc = CONCAT44(uVar2,local_2c);
  local_8._0_1_ = 0x18;
  puVar3 = (undefined4 *)FUN_009a8ee0();
  local_8._0_1_ = 0x19;
  uStack_cc = 0x38005c0f5e;
  puVar4 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x1a;
  local_18 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = local_7c;
    *puVar4 = &PTR_FUN_00e38ecc;
    uStack_cc = 0xffffffff00000000;
    puVar4[7] = 0xf;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    FUN_00408ed0();
    *puVar4 = &PTR_FUN_00e38f08;
    local_14 = puVar4 + 9;
    *local_14 = *puVar3;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    local_8._0_1_ = 0x1c;
    uStack_cc = CONCAT44(0x5c0fb7,(undefined4)uStack_cc);
    FUN_009a97b0();
    local_14 = puVar4;
  }
  local_8._0_1_ = 0x19;
  uStack_cc = CONCAT44(&local_14,local_64);
  FUN_009e6810();
  local_8._0_1_ = 0x1d;
  uStack_cc = CONCAT44(0x5c0fde,(undefined4)uStack_cc);
  FUN_009adb70();
  if (local_28 != 0) {
    uStack_cc = CONCAT44(0x5c0fed,(undefined4)uStack_cc);
    FUN_009e6a80();
    uStack_cc = CONCAT44(local_28,&UNK_005c0ff6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_34) {
    uStack_cc = CONCAT44(local_48[0],&UNK_005c1015);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xf;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
    uStack_cc = CONCAT44(local_64[0],&UNK_005c1037);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_cc = CONCAT44(0x5c103f,(undefined4)uStack_cc);
  iVar5 = FUN_00475500();
  uStack_cc = *(undefined8 *)(iVar5 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
  local_8._0_1_ = 0x1e;
  uStack_cc = 0xffffffff00000000;
  FUN_00448aa0();
  if (0xf < local_34) {
    uStack_cc = CONCAT44(local_48[0],&UNK_005c1082);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,0x1f);
  uStack_cc = CONCAT44(0x5c1091,(undefined4)uStack_cc);
  FUN_009adb70();
  if (local_78 != 0) {
    uStack_cc = CONCAT44(0x5c10a0,(undefined4)uStack_cc);
    FUN_009e6a80();
    uStack_cc = CONCAT44(local_78,&UNK_005c10a9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_8 = 0x20;
  uStack_cc = CONCAT44(0x5c10c7,(undefined4)uStack_cc);
  FUN_009adb70();
  if (local_ac != 0) {
    uStack_cc = CONCAT44(0x5c10dc,(undefined4)uStack_cc);
    FUN_009e6a80();
    uStack_cc = CONCAT44(local_ac,&UNK_005c10e8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

