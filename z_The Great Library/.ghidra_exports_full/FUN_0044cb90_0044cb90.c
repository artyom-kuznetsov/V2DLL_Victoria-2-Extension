// FUN_0044cb90 @ 0044cb90 body=[[0044cb90, 0044cc03] [0044cc07, 0044cc74] [0044cc78, 0044ccc2] [0044ccc6, 0044cd82] [0044cd86, 0044cda7] [0044cdab, 0044cdce] [0044cdd2, 0044cdec] [0044cdf0, 0044ce10] [0044ce14, 0044ce28]]


undefined1 * FUN_0044cb90(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_a4;
  undefined1 local_9c [20];
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_64 [4];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b629fb;
  local_10 = ExceptionList;
  local_30 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("desc_",5);
  local_34 = in_ECX + 0x30;
  local_8 = 1;
  FUN_00988f20();
  local_8._0_1_ = 3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_009a8ee0(local_64,local_9c);
  local_8._0_1_ = 4;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_8._0_1_ = 7;
  FUN_009adb70();
  local_8._0_1_ = 6;
  if (local_60 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  cVar1 = FUN_00416db0();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    FUN_00409350("_desc",5);
    local_8._0_1_ = 8;
    uVar3 = FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_009a8ee0(local_24,uVar3);
    local_8._0_1_ = 10;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_30 = 1;
    local_8._0_1_ = 0xb;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (local_88 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

