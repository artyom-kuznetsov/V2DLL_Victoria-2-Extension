// FUN_00541bf0 @ 00541bf0 body=[[00541bf0, 00541cf9] [00541cfd, 00541d86] [00541d8a, 00541e2e] [00541e32, 00541e9a] [00541e9e, 00541eb2]]


/* WARNING: Removing unreachable block (ram,0x00541d10) */
/* WARNING: Removing unreachable block (ram,0x00541e41) */
/* WARNING: Removing unreachable block (ram,0x00541d9d) */
/* WARNING: Removing unreachable block (ram,0x00541e92) */
/* WARNING: Removing unreachable block (ram,0x00541e95) */
/* WARNING: Removing unreachable block (ram,0x00541e96) */

void FUN_00541bf0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b73196;
  local_10 = ExceptionList;
  iVar2 = *(int *)(param_1 + 0xa60);
  ExceptionList = &local_10;
  FUN_00401000();
  iVar1 = FUN_00b31c00();
  iVar1 = __alldiv((longlong)iVar1 * (longlong)*(int *)(iVar2 + 0x378));
  if (iVar1 / 1000 < 100) {
    if (*(int *)(iVar2 + 0x378) == 0) {
      FUN_00409350();
      local_8 = 6;
      FUN_009a8ee0();
      local_8._0_1_ = 7;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_009adb70();
      if (local_28 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      FUN_00409350();
      local_8 = 9;
      (**(code **)(*(int *)(param_1 + 0xa48) + 0x24))();
    }
  }
  else if (*(int *)(param_1 + 0x142c) == 0) {
    FUN_00409350();
    local_8 = 3;
    FUN_009a8ee0();
    local_8._0_1_ = 4;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00409350();
    local_8 = 0;
    FUN_009a8ee0();
    local_8._0_1_ = 1;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}

