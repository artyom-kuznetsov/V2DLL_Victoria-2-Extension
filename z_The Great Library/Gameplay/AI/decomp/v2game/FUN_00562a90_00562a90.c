// FUN_00562a90 @ 00562a90 body=[[00562a90, 00562b4c] [00562b50, 00562b6b] [00562b6f, 00562b89] [00562b8d, 00562ba1]]


/* WARNING: Removing unreachable block (ram,0x00562b81) */

undefined4 FUN_00562a90(undefined4 param_1)

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
  puStack_c = &LAB_00b71cbb;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_00409350("_desc",5);
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

