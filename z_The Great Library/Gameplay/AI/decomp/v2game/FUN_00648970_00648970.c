// FUN_00648970 @ 00648970 body=[[00648970, 00648a0c] [00648a10, 00648a2b] [00648a2f, 00648a59]]


undefined4 FUN_00648970(undefined4 param_1)

{
  int iVar1;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6ff52;
  local_10 = ExceptionList;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("FE_PLAYER",9);
  local_8 = 0;
  FUN_009a8ee0(local_24,local_40);
  local_8._0_1_ = 1;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 4;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_009f83a0();
  ExceptionList = local_10;
  return param_1;
}

