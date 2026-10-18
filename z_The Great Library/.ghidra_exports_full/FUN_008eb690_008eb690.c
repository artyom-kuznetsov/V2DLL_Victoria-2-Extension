// FUN_008eb690 @ 008eb690 body=[[008eb690, 008eb752] [008eb756, 008eb853] [008eb857, 008eb881] [008eb885, 008eb8a7] [008eb8ab, 008eb8dd] [008eb8e1, 008eb8fc] [008eb900, 008eb91b] [008eb91f, 008eb935] [008eb939, 008eba2c] [008eba30, 008eba57] [008eba5b, 008eba80] [008eba84, 008ebab9] [008ebabd, 008ebad8] [008ebadc, 008ebaf7] [008ebafb, 008ebb11] [008ebb15, 008ebb31] [008ebb35, 008ebb4a]]


undefined4 FUN_008eb690(undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  undefined8 local_108;
  undefined4 local_f4 [5];
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a0;
  undefined1 *local_9c;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b858a0;
  local_10 = ExceptionList;
  local_9c = (undefined1 *)&local_108;
  local_28 = 0;
  local_108 = CONCAT44(1,*(undefined4 *)(in_ECX + 0x1c));
  ExceptionList = &local_10;
  FUN_00988a50();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008eb756;
    local_a0 = *(undefined4 *)(param_2 + 0x2c);
    local_9c = *(undefined1 **)(param_2 + 0x30);
    local_108 = CONCAT44(0x8eb72a,(undefined4)local_108);
    FUN_0055dd40();
    local_8._0_1_ = 3;
  }
  else {
    local_108 = CONCAT44(0x8eb6ee,(undefined4)local_108);
    FUN_008a8dc0();
    local_108 = CONCAT44(0x8eb6f9,(undefined4)local_108);
    FUN_0055dd40();
    local_8._0_1_ = 2;
  }
  local_108 = 0xffffffff00000000;
  FUN_00408ed0();
  local_8._0_1_ = 1;
  if (0xf < local_84) {
    local_108 = CONCAT44(local_98,&UNK_008eb753);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_008eb756:
  local_8._0_1_ = 1;
  local_108 = 0x300dfc7b4;
  if (param_3 == '\0') {
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    local_108 = 0x300df7f68;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    local_108 = 0x1700e2e8dc;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350();
    local_108 = CONCAT44(local_60,local_24);
    local_8._0_1_ = 0xe;
    FUN_009a8ee0();
    local_8._0_1_ = 0xf;
    local_108 = CONCAT44(0x8eb9ac,(undefined4)local_108);
    iVar1 = FUN_00475500();
    local_108 = *(undefined8 *)(iVar1 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0x10;
    local_108 = CONCAT44(local_44,0x8eb9e6);
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    local_108 = CONCAT44(local_f4,0x8eb9fe);
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    local_108 = CONCAT44(local_7c,0x8eba10);
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_84) {
      local_108 = CONCAT44(local_98,&UNK_008eba2d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_c4) {
      local_108 = CONCAT44(local_d8,&UNK_008eba58);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_a8) {
      local_108 = CONCAT44(local_bc,&UNK_008eba81);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x13);
    local_108 = CONCAT44(0x8ebaa2,(undefined4)local_108);
    FUN_009adb70();
    if (local_20 != 0) {
      local_108 = CONCAT44(0x8ebab1,(undefined4)local_108);
      FUN_009e6a80();
      local_108 = CONCAT44(local_20,&UNK_008ebaba);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_4c) {
      local_108 = CONCAT44(local_60[0],&UNK_008ebad9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_30) {
      local_108 = CONCAT44(local_44[0],&UNK_008ebaf8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_68) {
      local_108 = CONCAT44(local_7c[0],&UNK_008ebb12);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c[0] = local_7c[0] & 0xffffff00;
  }
  else {
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    local_108 = 0x300df7f68;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 5;
    local_108 = 0x1700e2e8c4;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350();
    local_108 = CONCAT44(local_7c,local_24);
    local_8._0_1_ = 6;
    FUN_009a8ee0();
    local_8._0_1_ = 7;
    local_108 = CONCAT44(0x8eb7d0,(undefined4)local_108);
    iVar1 = FUN_00475500();
    local_108 = *(undefined8 *)(iVar1 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 8;
    local_108 = CONCAT44(local_44,0x8eb80a);
    FUN_00988f20();
    local_8._0_1_ = 9;
    local_108 = CONCAT44(local_f4,0x8eb822);
    FUN_00988f20();
    local_8._0_1_ = 10;
    local_108 = CONCAT44(local_60,0x8eb834);
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_a8) {
      local_108 = CONCAT44(local_bc,&UNK_008eb854);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_c4) {
      local_108 = CONCAT44(local_d8,&UNK_008eb882);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_84) {
      local_108 = CONCAT44(local_98,&UNK_008eb8a8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xb);
    local_108 = CONCAT44(0x8eb8c6,(undefined4)local_108);
    FUN_009adb70();
    if (local_20 != 0) {
      local_108 = CONCAT44(0x8eb8d5,(undefined4)local_108);
      FUN_009e6a80();
      local_108 = CONCAT44(local_20,&UNK_008eb8de);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_68) {
      local_108 = CONCAT44(local_7c[0],&UNK_008eb8fd);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_30) {
      local_108 = CONCAT44(local_44[0],&UNK_008eb91c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
      local_108 = CONCAT44(local_60[0],&UNK_008eb936);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60[0] = local_60[0] & 0xffffff00;
  }
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_4c = 0xf;
  local_50 = 0;
  local_68 = 0xf;
  local_6c = 0;
  if (0xf < local_e0) {
    local_108 = CONCAT44(local_f4[0],&UNK_008ebb32);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

