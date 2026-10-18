// FUN_00562f60 @ 00562f60 body=[[00562f60, 00562fcd] [00562fd1, 00563047] [0056304b, 005630c4] [005630c8, 005630df] [005630e3, 005630f7]]


undefined4 FUN_00562f60(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  undefined4 local_64 [5];
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b72556;
  local_10 = ExceptionList;
  local_14 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("_short",6);
  local_8 = 1;
  FUN_00988f20();
  local_8._0_1_ = 3;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  if (DAT_0131c99c == 0) {
    local_18 = FUN_00aae9af();
    local_8._0_1_ = 4;
    if (local_18 != 0) {
      FUN_009acd20();
    }
    local_8._0_1_ = 3;
    FUN_009ada90();
  }
  iVar1 = FUN_009ad9d0();
  if (iVar1 == 0) {
    (**(code **)(*in_ECX + 0x18))();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    ExceptionList = local_10;
    return param_1;
  }
  FUN_009a8ee0(local_2c,local_64);
  local_8._0_1_ = 5;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_14 = 1;
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

