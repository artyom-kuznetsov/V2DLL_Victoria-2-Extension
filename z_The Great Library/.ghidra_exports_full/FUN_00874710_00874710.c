// FUN_00874710 @ 00874710 body=[[00874710, 008747cd] [008747d1, 008747ec] [008747f0, 0087480a] [0087480e, 00874823]]


/* WARNING: Removing unreachable block (ram,0x00874802) */

undefined4 FUN_00874710(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_4c;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6a13b;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_00409350("_title",6);
  local_8 = 1;
  uVar1 = FUN_00988f20();
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_28,uVar1);
  local_8._0_1_ = 3;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_14 = 1;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (local_4c < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

