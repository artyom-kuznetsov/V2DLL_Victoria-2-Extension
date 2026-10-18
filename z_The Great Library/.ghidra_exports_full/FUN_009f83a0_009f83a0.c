// FUN_009f83a0 @ 009f83a0 body=[[009f83a0, 009f849a] [009f849e, 009f84b8]]


undefined4 * FUN_009f83a0(undefined4 *param_1)

{
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49374;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CSessionConfiguration::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00409350("INVALID",7);
  local_8 = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00409350("NO_GAME",7);
  local_8._0_1_ = 1;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 2;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_14 = param_1 + 0x1c;
  param_1[0x1d] = 0x18d;
  *local_14 = CVersion::vftable;
  param_1[0x1e] = 0;
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00408ed0(local_30,0,0xffffffff);
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  ExceptionList = local_10;
  return param_1;
}

