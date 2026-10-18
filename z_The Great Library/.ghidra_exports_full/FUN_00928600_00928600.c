// FUN_00928600 @ 00928600 body=[[00928600, 00928704] [00928708, 0092871b]]


undefined4 FUN_00928600(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b65161;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  FUN_009a8ee0(local_2c,param_2);
  local_8 = 1;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 2;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 1;
  FUN_009e6810(in_EDX,&local_14);
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 3;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_009e6810(in_ECX,&local_14);
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_18 = 1;
  local_8 = 4;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

