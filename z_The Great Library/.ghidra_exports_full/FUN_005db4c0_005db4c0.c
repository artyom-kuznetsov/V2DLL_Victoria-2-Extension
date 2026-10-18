// FUN_005db4c0 @ 005db4c0 body=[[005db4c0, 005db5b3] [005db5b7, 005db5e7] [005db5eb, 005db604] [005db608, 005db6a5] [005db6a9, 005db6d9] [005db6dd, 005db6f6] [005db6fa, 005db797] [005db79b, 005db7cb] [005db7cf, 005db7e8] [005db7ec, 005db876] [005db87a, 005db8aa] [005db8ae, 005db8c5] [005db8c9, 005db8dd]]


/* WARNING: Removing unreachable block (ram,0x005db78f) */
/* WARNING: Removing unreachable block (ram,0x005db86e) */
/* WARNING: Removing unreachable block (ram,0x005db69d) */
/* WARNING: Removing unreachable block (ram,0x005db89a) */
/* WARNING: Removing unreachable block (ram,0x005db7bb) */
/* WARNING: Removing unreachable block (ram,0x005db6c9) */
/* WARNING: Removing unreachable block (ram,0x005db6ee) */
/* WARNING: Removing unreachable block (ram,0x005db7e0) */
/* WARNING: Removing unreachable block (ram,0x005db8bd) */
/* WARNING: Removing unreachable block (ram,0x005db5fc) */

undefined1 * FUN_005db4c0(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  uint local_54;
  int local_2c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b711a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  FUN_00409350();
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 2;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
  local_8._0_1_ = 3;
  iVar1 = *(int *)(param_1 + 8);
  FUN_00401000(0x47c35040);
  iVar2 = FUN_00b31c00();
  __alldiv((longlong)iVar2 * (longlong)iVar1,1000,0);
  FUN_005db300();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  FUN_009adb70();
  if (local_2c == 0) {
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00409350();
    local_8 = 5;
    FUN_009a8ee0();
    local_8._0_1_ = 6;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 7;
    __alldiv((longlong)iVar2 * (longlong)*(int *)(param_1 + 0xc),1000,0);
    FUN_005db300();
    local_8._0_1_ = 8;
    FUN_009adb70();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00409350();
    local_8 = 9;
    FUN_009a8ee0();
    local_8._0_1_ = 10;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0xb;
    __alldiv((longlong)iVar2 * (longlong)*(int *)(param_1 + 0x10),1000,0);
    FUN_005db300();
    local_8._0_1_ = 0xc;
    FUN_009adb70();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00409350();
    local_8 = 0xd;
    FUN_009a8ee0();
    local_8._0_1_ = 0xe;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0xf;
    FUN_005db300();
    local_8 = CONCAT31(local_8._1_3_,0x10);
    FUN_009adb70();
    ExceptionList = local_10;
    return param_2;
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

