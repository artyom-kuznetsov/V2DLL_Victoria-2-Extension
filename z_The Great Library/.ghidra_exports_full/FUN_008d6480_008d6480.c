// FUN_008d6480 @ 008d6480 body=[[008d6480, 008d656a] [008d656e, 008d65a7] [008d65ab, 008d65c1] [008d65c5, 008d6695] [008d6699, 008d66d2] [008d66d6, 008d66ec] [008d66f0, 008d670d] [008d6711, 008d6726]]


/* WARNING: Removing unreachable block (ram,0x008d65de) */
/* WARNING: Removing unreachable block (ram,0x008d6702) */
/* WARNING: Removing unreachable block (ram,0x008d6709) */

undefined4 FUN_008d6480(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  uint local_d0;
  uint local_b4;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b659e9;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == '\0') {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 6;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("HAVE_UNITS_IN_BATTLE",0x14);
    local_8._0_1_ = 7;
    FUN_009a8ee0(local_3c,local_58);
    local_8._0_1_ = 8;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 1;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350("HAVE_NO_UNITS_IN_BATTLE",0x17);
    local_8._0_1_ = 2;
    FUN_009a8ee0(local_28,local_74);
    local_8._0_1_ = 3;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 4;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

