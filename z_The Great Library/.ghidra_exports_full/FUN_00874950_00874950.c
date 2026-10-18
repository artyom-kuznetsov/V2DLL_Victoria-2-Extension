// FUN_00874950 @ 00874950 body=[[00874950, 00874a3e] [00874a42, 00874a5d] [00874a61, 00874a7c] [00874a80, 00874a96]]


/* WARNING: Removing unreachable block (ram,0x00874a73) */

undefined4 FUN_00874950(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9434d;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00409350();
  local_c = 0;
  FUN_008a88d0();
  local_c._0_1_ = 1;
  uVar1 = FUN_00988f20();
  local_c._0_1_ = 2;
  FUN_00408ed0(uVar1,0,0xffffffff);
  local_c._0_1_ = 3;
  FUN_008adbe0(local_50);
  local_c = CONCAT31(local_c._1_3_,4);
  FUN_00989330();
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (local_20 < 0x10) {
    ExceptionList = local_14;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

