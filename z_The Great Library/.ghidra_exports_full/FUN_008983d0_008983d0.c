// FUN_008983d0 @ 008983d0 body=[[008983d0, 0089843c] [00898440, 008984c4] [008984c8, 008984e8] [008984ec, 00898572] [00898576, 00898594] [00898598, 008985ea] [008985ee, 00898605] [00898609, 0089861d]]


undefined4 FUN_008983d0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  uint in_stack_00000020;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b79331;
  local_10 = ExceptionList;
  local_18 = 0;
  local_8 = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("MODIFY_STOCKPILE_EFFECT");
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_2c);
  local_8._0_1_ = 4;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("GOODS");
  local_8._0_1_ = 5;
  FUN_005659c0(*(undefined4 *)(in_ECX + 0x24));
  local_8._0_1_ = 6;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 7;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 6;
  FUN_009e6810(local_64);
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("VALUE");
  local_14 = &stack0xffffff70;
  local_8._0_1_ = 8;
  FUN_00988970(local_80);
  local_8._0_1_ = 9;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 10;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 9;
  FUN_009e6810(local_64);
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_18 = 1;
  local_8 = CONCAT31(local_8._1_3_,0xb);
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

