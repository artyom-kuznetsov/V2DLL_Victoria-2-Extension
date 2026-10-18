// FUN_00970b70 @ 00970b70 body=[[00970b70, 00970c1e] [00970c22, 00970ca2] [00970ca6, 00970cc1] [00970cc5, 00970cdf] [00970ce3, 00970cf7]]


undefined1 * FUN_00970b70(undefined1 *param_1)

{
  char cVar1;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b78a7b;
  local_10 = ExceptionList;
  local_14 = 0;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_8 = 1;
  FUN_00408ed0(local_60,0,0xffffffff);
  FUN_00970880(local_44);
  local_8._0_1_ = 2;
  cVar1 = FUN_00416db0();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    FUN_00475500();
    FUN_009a9880();
    local_14 = 1;
    local_8._0_1_ = 4;
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (local_4c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

