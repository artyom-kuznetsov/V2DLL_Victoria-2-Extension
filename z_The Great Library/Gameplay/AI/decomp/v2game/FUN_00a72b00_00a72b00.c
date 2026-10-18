// FUN_00a72b00 @ 00a72b00 body=[[00a72b00, 00a72cc8] [00a72ccc, 00a72cde]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00a72b00(void)

{
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined *local_18;
  undefined *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48296;
  local_10 = ExceptionList;
  local_14 = &DAT_013f0620;
  _DAT_013f0624 = 0x18d;
  _DAT_013f0620 = &PTR_FUN_00e43180;
  _DAT_013f0628 = 0;
  _DAT_013f062c = 0;
  _DAT_013f0630 = 0;
  local_8 = 0;
  _DAT_013f064c = 0xf;
  _DAT_013f0648 = 0;
  DAT_013f0638 = 0;
  ExceptionList = &local_10;
  FUN_00409350("metaserver",10);
  local_8._0_1_ = 1;
  _DAT_013f0668 = 0xf;
  _DAT_013f0664 = 0;
  DAT_013f0654 = 0;
  FUN_00409350("localhost",9);
  local_8._0_1_ = 2;
  DAT_013f0684 = 0xf;
  _DAT_013f0680 = 0;
  DAT_013f0670 = 0;
  FUN_00409350("diplomacy",9);
  local_8._0_1_ = 3;
  _DAT_013f06a0 = 0xf;
  _DAT_013f069c = 0;
  DAT_013f068c = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 4;
  _DAT_013f06a8 = 0x663;
  _DAT_013f06c0 = 0xf;
  _DAT_013f06bc = 0;
  DAT_013f06ac = 0;
  FUN_00409350(&DAT_00e43114,4);
  local_8._0_1_ = 5;
  _DAT_013f06dc = 0xf;
  _DAT_013f06d8 = 0;
  DAT_013f06c8 = 0;
  FUN_00409350("para25rot",9);
  local_8._0_1_ = 6;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_18 = &DAT_013f06e4;
  _DAT_013f06e8 = 0x18d;
  _DAT_013f06e4 = CVersion::vftable;
  _DAT_013f06ec = 0;
  _DAT_013f070c = 0xf;
  _DAT_013f0708 = 0;
  DAT_013f06f8 = 0;
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_00408ed0(local_34,0,0xffffffff);
  _DAT_013f06f4 = 0;
  _DAT_013f06f0 = 0;
  _DAT_013f06ec = 0;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return &DAT_013f0620;
}

