// FUN_008e3b10 @ 008e3b10 body=[[008e3b10, 008e3cdf] [008e3ce3, 008e3d08] [008e3d0c, 008e3d31] [008e3d35, 008e3d5a] [008e3d5e, 008e3d93] [008e3d97, 008e3db0] [008e3db4, 008e3dd8] [008e3ddc, 008e3dfb] [008e3dff, 008e3e1b] [008e3e1f, 008e3fa3] [008e3fa7, 008e3fcc] [008e3fd0, 008e3ff5] [008e3ff9, 008e401e] [008e4022, 008e4057] [008e405b, 008e4071] [008e4075, 008e4096] [008e409a, 008e40bf] [008e40c3, 008e40e8] [008e40ec, 008e4111] [008e4115, 008e412a]]


/* WARNING: Removing unreachable block (ram,0x008e3e10) */
/* WARNING: Removing unreachable block (ram,0x008e3da5) */
/* WARNING: Removing unreachable block (ram,0x008e40dd) */
/* WARNING: Removing unreachable block (ram,0x008e40b4) */
/* WARNING: Removing unreachable block (ram,0x008e4106) */
/* WARNING: Removing unreachable block (ram,0x008e3df3) */
/* WARNING: Removing unreachable block (ram,0x008e3e3d) */
/* WARNING: Removing unreachable block (ram,0x008e410c) */
/* WARNING: Removing unreachable block (ram,0x008e4069) */

undefined4 FUN_008e3b10(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  uint local_220;
  uint local_204;
  uint local_1e8;
  uint local_1cc;
  uint local_1b0;
  uint local_194;
  uint local_178;
  uint local_15c;
  uint local_140;
  uint local_124;
  int local_38;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b662ed;
  local_10 = ExceptionList;
  piVar2 = *(int **)(in_ECX + 0x1c);
  ExceptionList = &local_10;
  if ((*(char *)(in_ECX + 0x20) != '\0') &&
     (ExceptionList = &local_10, iVar1 = FUN_009c16d0(), iVar1 != 0)) {
    piVar2 = *(int **)(iVar1 + 0x50);
  }
  (**(code **)(*piVar2 + 0x18))();
  if (param_3 == '\0') {
    FUN_00409350();
    local_8 = 0xc;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    FUN_00409350();
    local_8._0_1_ = 0xe;
    FUN_00567250();
    local_8._0_1_ = 0xf;
    FUN_00409350();
    local_8._0_1_ = 0x10;
    FUN_009a8ee0();
    local_8._0_1_ = 0x11;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    FUN_00988f20();
    local_8._0_1_ = 0x15;
    FUN_00988f20();
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_220) {
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
    FUN_00567250();
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
    if (0xf < local_204) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

