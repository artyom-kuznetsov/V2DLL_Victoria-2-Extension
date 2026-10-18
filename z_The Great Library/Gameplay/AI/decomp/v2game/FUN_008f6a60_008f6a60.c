// FUN_008f6a60 @ 008f6a60 body=[[008f6a60, 008f6d16] [008f6d1a, 008f6d3f] [008f6d43, 008f6d68] [008f6d6c, 008f6d91] [008f6d95, 008f6dca] [008f6dce, 008f6dea] [008f6dee, 008f6e18] [008f6e1c, 008f6e41] [008f6e45, 008f6e6a] [008f6e6e, 008f6fe5] [008f6fe9, 008f700e] [008f7012, 008f7037] [008f703b, 008f7060] [008f7064, 008f7099] [008f709d, 008f70be] [008f70c2, 008f70e6] [008f70ea, 008f7106] [008f710a, 008f7129] [008f712d, 008f7149] [008f714d, 008f7162]]


/* WARNING: Removing unreachable block (ram,0x008f6e5f) */
/* WARNING: Removing unreachable block (ram,0x008f6e0d) */
/* WARNING: Removing unreachable block (ram,0x008f7121) */
/* WARNING: Removing unreachable block (ram,0x008f70fb) */
/* WARNING: Removing unreachable block (ram,0x008f713e) */
/* WARNING: Removing unreachable block (ram,0x008f6e36) */
/* WARNING: Removing unreachable block (ram,0x008f6e8c) */
/* WARNING: Removing unreachable block (ram,0x008f7144) */
/* WARNING: Removing unreachable block (ram,0x008f70de) */

undefined4 FUN_008f6a60(undefined4 param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint local_23c;
  uint local_220;
  uint local_204;
  uint local_1e8;
  uint local_1cc;
  uint local_1b0;
  uint local_194;
  uint local_178;
  uint local_15c;
  uint local_140;
  int local_44;
  int local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8550d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(char *)(in_ECX + 0x18) != '\0') &&
     (ExceptionList = &local_10, cVar1 = (**(code **)(**(int **)(param_2 + 0x14) + 0x20))(),
     cVar1 == '\0')) {
    iVar2 = FUN_008a8dc0();
    if (*(int *)(iVar2 + 4) == 0) {
      cVar1 = FUN_005dcd20();
      if (cVar1 != '\0') {
        FUN_009c16d0();
      }
    }
    else {
      FUN_008a8dc0();
    }
  }
  if (param_3 == '\0') {
    FUN_00409350();
    local_8 = 0xc;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    FUN_00409350();
    local_8._0_1_ = 0xe;
    FUN_00409350();
    local_8._0_1_ = 0xf;
    FUN_0055dd40();
    local_8._0_1_ = 0x10;
    FUN_009a8ee0();
    local_8._0_1_ = 0x11;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    FUN_00988f20();
    local_8._0_1_ = 0x15;
    FUN_00988f20();
    if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_194) {
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
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_009adb70();
    if (local_44 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_23c) {
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
    FUN_00409350();
    local_8._0_1_ = 4;
    FUN_0055dd40();
    local_8._0_1_ = 5;
    FUN_009a8ee0();
    local_8._0_1_ = 6;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00988f20();
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_009adb70();
    if (local_30 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_220) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

