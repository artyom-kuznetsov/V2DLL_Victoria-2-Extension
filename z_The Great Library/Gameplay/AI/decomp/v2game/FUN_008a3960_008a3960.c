// FUN_008a3960 @ 008a3960 body=[[008a3960, 008a39d0] [008a39d4, 008a3ac4] [008a3ac8, 008a3aed] [008a3af1, 008a3b3a] [008a3b40, 008a3b85] [008a3b89, 008a3c00] [008a3c04, 008a3c57] [008a3c5b, 008a3c88] [008a3c8c, 008a3ca3] [008a3ca7, 008a3cff] [008a3d03, 008a3d1a] [008a3d1e, 008a3d32]]


/* WARNING: Removing unreachable block (ram,0x008a3ae2) */
/* WARNING: Removing unreachable block (ram,0x008a39c8) */

undefined1 * FUN_008a3960(undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  uint in_stack_00000020;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b67ee4;
  local_10 = ExceptionList;
  local_30 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8._0_1_ = 2;
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 4;
  if (DAT_0125eadc == 0) {
    local_18 = FUN_00aae9af();
    local_8._0_1_ = 5;
    if (local_18 != 0) {
      FUN_00576fe0();
    }
    local_8._0_1_ = 4;
    FUN_0057ab10();
    uVar3 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar3;
  local_18 = DAT_0125eadc;
  piVar4 = (int *)FUN_005661b0();
  if (piVar4 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350();
    local_30 = 1;
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return param_1;
  }
  FUN_00409350();
  local_8._0_1_ = 6;
  (**(code **)(*piVar4 + 0x18))();
  local_8._0_1_ = 7;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 8;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 7;
  FUN_009e6810();
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00475500();
  FUN_009a9880();
  local_8._0_1_ = 9;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 9;
  local_14 = 1;
  iVar5 = *(int *)(local_18 + 0x3c) - *(int *)(local_18 + 0x38) >> 2;
  if (1 < iVar5) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(local_18 + 0x38) + local_14 * 4) + 0x44);
      FUN_0044bb00();
      local_8._0_1_ = 10;
      FUN_00448aa0();
      local_8._0_1_ = 9;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_00448740();
      uVar2 = *(uint *)(piVar4[6] + iVar1 * 8);
      __alldiv(uVar2 << 0x1e,
               (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2,
               0x1f40000,0);
      FUN_009c7de0(local_4c);
      local_8._0_1_ = 0xb;
      FUN_00448aa0();
      local_8._0_1_ = 9;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_00448740();
      local_14 = local_14 + 1;
      uVar3 = (undefined1)local_8;
    } while (local_14 < iVar5);
  }
  local_8._0_1_ = uVar3;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0();
  local_30 = 1;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

