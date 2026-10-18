// FUN_008a2210 @ 008a2210 body=[[008a2210, 008a22e3] [008a22e7, 008a2317] [008a231b, 008a2331] [008a2335, 008a2350] [008a2354, 008a2405] [008a2409, 008a2439] [008a243d, 008a2453] [008a2457, 008a2472] [008a2476, 008a248c] [008a2490, 008a24a5]]


undefined4 FUN_008a2210(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  uint in_stack_00000020;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b680a5;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 1;
  if (*(char *)(in_ECX + 0x20) == '\0') {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 7;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350("make_free",9);
    local_8._0_1_ = 8;
    FUN_009a8ee0(local_28,local_60);
    local_8._0_1_ = 9;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 10;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_68) {
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
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44[0] = local_44[0] & 0xffffff00;
  }
  else {
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 2;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("make_slave",10);
    local_8._0_1_ = 3;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 4;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 5;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60[0] = local_60[0] & 0xffffff00;
  }
  if (0xf < in_stack_00000020) {
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_30 = 0xf;
    local_34 = 0;
    local_4c = 0xf;
    local_50 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

