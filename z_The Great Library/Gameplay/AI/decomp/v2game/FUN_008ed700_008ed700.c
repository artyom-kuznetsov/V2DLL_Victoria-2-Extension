// FUN_008ed700 @ 008ed700 body=[[008ed700, 008ed883] [008ed887, 008ed8b1] [008ed8b5, 008ed8da] [008ed8de, 008ed913] [008ed917, 008ed933] [008ed937, 008ed95b] [008ed95f, 008ed978] [008ed97c, 008edaee] [008edaf2, 008edb1c] [008edb20, 008edb45] [008edb49, 008edb7e] [008edb82, 008edb9e] [008edba2, 008edbc6] [008edbca, 008edbe6] [008edbea, 008edc0f] [008edc13, 008edc28]]


/* WARNING: Removing unreachable block (ram,0x008ed96d) */
/* WARNING: Removing unreachable block (ram,0x008edc04) */
/* WARNING: Removing unreachable block (ram,0x008edbdb) */
/* WARNING: Removing unreachable block (ram,0x008ed953) */
/* WARNING: Removing unreachable block (ram,0x008ed994) */
/* WARNING: Removing unreachable block (ram,0x008edc0b) */
/* WARNING: Removing unreachable block (ram,0x008edbbe) */

undefined4 FUN_008ed700(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint local_1b0;
  uint local_194;
  uint local_178;
  uint local_15c;
  uint local_140;
  uint local_124;
  uint local_108;
  uint local_ec;
  int local_38;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b66ee1;
  local_10 = ExceptionList;
  if (param_3 == '\0') {
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 10;
    FUN_00409350();
    local_8._0_1_ = 0xb;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    iVar2 = *(int *)(in_ECX + 0x1c);
    FUN_00401000();
    iVar1 = FUN_00b31c00();
    __alldiv((longlong)iVar1 * (longlong)iVar2,1000,0);
    FUN_00988a50();
    local_8._0_1_ = 0xd;
    FUN_009a8ee0();
    local_8._0_1_ = 0xe;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 1;
    FUN_00409350();
    local_8._0_1_ = 2;
    FUN_00409350();
    local_8._0_1_ = 3;
    iVar2 = *(int *)(in_ECX + 0x1c);
    FUN_00401000();
    iVar1 = FUN_00b31c00();
    __alldiv((longlong)iVar1 * (longlong)iVar2,1000,0);
    FUN_00988a50();
    local_8._0_1_ = 4;
    FUN_009a8ee0();
    local_8._0_1_ = 5;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

