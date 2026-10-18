// FUN_00964770 @ 00964770 body=[[00964770, 00964820] [00964824, 00964842] [00964846, 009648b1] [009648b5, 009648d7]]


undefined4 FUN_00964770(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
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
  uint local_8;
  
  puStack_c = &LAB_00ba2a0b;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("POP_INTERNAL_MIGRATION_FACTORS",0x1e);
  local_8 = 1;
  FUN_009a8ee0(local_28,local_44);
  local_8._0_1_ = 2;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_14 = 1;
  local_8._0_1_ = 3;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
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
  FUN_00448740(&DAT_00dee2cc,1);
  FUN_008a8650();
  FUN_008aed50();
  local_8 = 4;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00448740(&DAT_00dee2cc,1);
  ExceptionList = local_10;
  return param_2;
}

