// FUN_008e2e10 @ 008e2e10 body=[[008e2e10, 008e3065] [008e3069, 008e308e] [008e3092, 008e30b7] [008e30bb, 008e30e0] [008e30e4, 008e3119] [008e311d, 008e3142] [008e3146, 008e316b] [008e316f, 008e3194] [008e3198, 008e32fb] [008e32ff, 008e3324] [008e3328, 008e334d] [008e3351, 008e3376] [008e337a, 008e33a9] [008e33ad, 008e33c9] [008e33cd, 008e33ec] [008e33f0, 008e3406] [008e340a, 008e3567] [008e356b, 008e3590] [008e3594, 008e35b9] [008e35bd, 008e35e2] [008e35e6, 008e3627] [008e362b, 008e364a] [008e364e, 008e377b] [008e377f, 008e37a4] [008e37a8, 008e37cd] [008e37d1, 008e37f6] [008e37fa, 008e3829] [008e382d, 008e3849] [008e384d, 008e386c] [008e3870, 008e3886] [008e388a, 008e38a3] [008e38a7, 008e38bc]]


/* WARNING: Removing unreachable block (ram,0x008e33fe) */
/* WARNING: Removing unreachable block (ram,0x008e33a1) */
/* WARNING: Removing unreachable block (ram,0x008e3189) */
/* WARNING: Removing unreachable block (ram,0x008e310e) */
/* WARNING: Removing unreachable block (ram,0x008e3864) */
/* WARNING: Removing unreachable block (ram,0x008e3642) */
/* WARNING: Removing unreachable block (ram,0x008e387e) */
/* WARNING: Removing unreachable block (ram,0x008e3160) */
/* WARNING: Removing unreachable block (ram,0x008e31b6) */
/* WARNING: Removing unreachable block (ram,0x008e33e4) */
/* WARNING: Removing unreachable block (ram,0x008e3898) */
/* WARNING: Removing unreachable block (ram,0x008e389e) */
/* WARNING: Removing unreachable block (ram,0x008e3821) */

undefined4 FUN_008e2e10(undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  uint local_220;
  uint local_204;
  uint local_1e8;
  uint local_1cc;
  uint local_1b0;
  int local_12c;
  uint local_108;
  uint local_ec;
  uint local_d0;
  uint local_b4;
  uint local_98;
  int local_70;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b664c9;
  local_10 = ExceptionList;
  local_14 = *(int *)(in_ECX + 0x1c);
  local_70 = *(int *)(param_2 + 0xc);
  ExceptionList = &local_10;
  if ((*(char *)(in_ECX + 0x20) != '\0') &&
     (ExceptionList = &local_10, iVar1 = FUN_009c16d0(), iVar1 != 0)) {
    local_14 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x50);
  }
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) != '\0') {
      local_70 = *(int *)(*(int *)(param_2 + 0x24) + 0x30);
    }
  }
  else {
    iVar1 = FUN_008a8dc0();
    local_70 = *(int *)(iVar1 + 4);
  }
  if (local_70 != 0) {
    local_14 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_70 * 4) + 0xe64) + 0x50
                       );
  }
  if ((*(int *)(param_2 + 0xc) == 0) || (local_14 == 0)) {
    FUN_00409350();
    if (param_3 == '\0') {
      local_8 = 0x20;
      FUN_00409350();
      local_8._0_1_ = 0x21;
      FUN_00409350();
      local_8._0_1_ = 0x22;
      FUN_00560aa0();
      local_8._0_1_ = 0x23;
      FUN_00409350();
      local_8._0_1_ = 0x24;
      FUN_009a8ee0();
      local_8._0_1_ = 0x25;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
      local_8._0_1_ = 0x26;
      FUN_00988f20();
      local_8._0_1_ = 0x27;
      FUN_00988f20();
      local_8._0_1_ = 0x28;
      FUN_00988f20();
      local_8._0_1_ = 0x29;
      FUN_00988f20();
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = CONCAT31(local_8._1_3_,0x24);
      FUN_009a9740();
    }
    else {
      local_8 = 0x15;
      FUN_00409350();
      local_8._0_1_ = 0x16;
      FUN_00409350();
      local_8._0_1_ = 0x17;
      FUN_00560aa0();
      local_8._0_1_ = 0x18;
      FUN_00409350();
      local_8._0_1_ = 0x19;
      FUN_009a8ee0();
      local_8._0_1_ = 0x1a;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
      local_8._0_1_ = 0x1b;
      FUN_00988f20();
      local_8._0_1_ = 0x1c;
      FUN_00988f20();
      local_8._0_1_ = 0x1d;
      FUN_00988f20();
      local_8._0_1_ = 0x1e;
      FUN_00988f20();
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = CONCAT31(local_8._1_3_,0x1f);
      FUN_009adb70();
      if (local_12c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if (param_3 == '\0') {
    FUN_00409350();
    local_8 = 0xb;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    FUN_00560aa0();
    local_8._0_1_ = 0xe;
    FUN_00409350();
    local_8._0_1_ = 0xf;
    FUN_009a8ee0();
    local_8._0_1_ = 0x10;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    FUN_00988f20();
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_009a9740();
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00409350();
    local_8 = 1;
    FUN_00409350();
    local_8._0_1_ = 2;
    FUN_00409350();
    local_8._0_1_ = 3;
    FUN_00560aa0();
    local_8._0_1_ = 4;
    FUN_00409350();
    local_8._0_1_ = 5;
    FUN_009a8ee0();
    local_8._0_1_ = 6;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00988f20();
    if (0xf < local_1e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_204) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_009a9740();
    if (0xf < local_220) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

