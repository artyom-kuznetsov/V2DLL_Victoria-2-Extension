// FUN_008cd1f0 @ 008cd1f0 body=[[008cd1f0, 008cd32f] [008cd333, 008cd35d] [008cd361, 008cd386] [008cd38a, 008cd3bf] [008cd3c3, 008cd3d9] [008cd3dd, 008cd3fb] [008cd3ff, 008cd52c] [008cd530, 008cd55a] [008cd55e, 008cd583] [008cd587, 008cd5bc] [008cd5c0, 008cd5e1] [008cd5e5, 008cd609] [008cd60d, 008cd629] [008cd62d, 008cd642]]


/* WARNING: Removing unreachable block (ram,0x008cd417) */
/* WARNING: Removing unreachable block (ram,0x008cd61e) */
/* WARNING: Removing unreachable block (ram,0x008cd625) */

undefined4 FUN_008cd1f0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  uint local_17c;
  uint local_160;
  uint local_144;
  uint local_128;
  uint local_10c;
  uint local_f0;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b66fab;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == '\0') {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00e2d91c,4);
    local_8 = 9;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    FUN_00409350(&DAT_00e2d918,3);
    local_8._0_1_ = 10;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    FUN_00409350("HAVE_GLOBAL_FLAG",0x10);
    local_8._0_1_ = 0xb;
    FUN_009a8ee0(local_40,local_b0);
    local_8._0_1_ = 0xc;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0xd;
    FUN_00988f20();
    local_8._0_1_ = 0xe;
    FUN_00988f20();
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_17c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x10);
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00e2d91c,4);
    local_8 = 1;
    local_80 = 0xf;
    local_84 = 0;
    local_94 = local_94 & 0xffffff00;
    FUN_00409350(&DAT_00e2d918,3);
    local_8._0_1_ = 2;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00409350("HAVE_NOT_GLOBAL_FLAG",0x14);
    local_8._0_1_ = 3;
    FUN_009a8ee0(local_2c,local_78);
    local_8._0_1_ = 4;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 5;
    FUN_00988f20();
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_160) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

