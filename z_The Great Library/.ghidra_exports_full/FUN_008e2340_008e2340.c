// FUN_008e2340 @ 008e2340 body=[[008e2340, 008e2510] [008e2514, 008e2539] [008e253d, 008e2562] [008e2566, 008e258b] [008e258f, 008e25c4] [008e25c8, 008e25e1] [008e25e5, 008e2609] [008e260d, 008e262c] [008e2630, 008e264c] [008e2650, 008e27d4] [008e27d8, 008e27fd] [008e2801, 008e2826] [008e282a, 008e284f] [008e2853, 008e2888] [008e288c, 008e28a2] [008e28a6, 008e28c7] [008e28cb, 008e28f0] [008e28f4, 008e2919] [008e291d, 008e2942] [008e2946, 008e295b]]


/* WARNING: Removing unreachable block (ram,0x008e2641) */
/* WARNING: Removing unreachable block (ram,0x008e25d6) */
/* WARNING: Removing unreachable block (ram,0x008e290e) */
/* WARNING: Removing unreachable block (ram,0x008e28e5) */
/* WARNING: Removing unreachable block (ram,0x008e2937) */
/* WARNING: Removing unreachable block (ram,0x008e2624) */
/* WARNING: Removing unreachable block (ram,0x008e266e) */
/* WARNING: Removing unreachable block (ram,0x008e293d) */
/* WARNING: Removing unreachable block (ram,0x008e289a) */

undefined4 FUN_008e2340(undefined4 param_1,undefined4 param_2,char param_3)

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
    piVar2 = *(int **)(iVar1 + 0x4c);
  }
  (**(code **)(*piVar2 + 0x18))();
  if (param_3 == '\0') {
    FUN_00409350();
    local_8 = 0xc;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    FUN_00409350();
    local_8._0_1_ = 0xe;
    FUN_00974c50();
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
    FUN_00974c50();
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

