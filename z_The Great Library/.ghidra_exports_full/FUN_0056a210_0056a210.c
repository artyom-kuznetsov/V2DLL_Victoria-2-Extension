// FUN_0056a210 @ 0056a210 body=[[0056a210, 0056a27d] [0056a281, 0056a2ee] [0056a2f2, 0056a309] [0056a30d, 0056a321]]


undefined4 FUN_0056a210(undefined4 param_1)

{
  int iVar1;
  undefined1 local_60 [20];
  uint local_4c;
  uint local_44;
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
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7549b;
  local_10 = ExceptionList;
  local_14 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("_short",6);
  local_8 = 1;
  FUN_00988f20();
  local_8._0_1_ = 3;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  FUN_009a8ee0(local_28,local_60);
  local_8._0_1_ = 4;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_14 = 1;
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
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

