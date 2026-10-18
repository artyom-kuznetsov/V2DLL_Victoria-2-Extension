// FUN_0091e2f0 @ 0091e2f0 body=[[0091e2f0, 0091e3e2] [0091e3e6, 0091e406] [0091e40f, 0091e4a5] [0091e4a9, 0091e4c5] [0091e4cb, 0091e4fc]]


undefined1 * FUN_0091e2f0(undefined1 *param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b652a4;
  local_14 = ExceptionList;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4);
  if ((*(char *)(iVar1 + 0xcf5) == '\0') && (*(char *)(iVar1 + 0xcf4) == '\0')) {
    if (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4
                                            ) + 0xbe8) + *(int *)(in_ECX + 0x14) * 4) + 0x70) ==
        '\0') {
      ExceptionList = &local_14;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00409350(&DAT_00ded94d,0);
    }
    else {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = (uint)local_34[0]._1_3_ << 8;
      ExceptionList = &local_14;
      FUN_00409350("FIGHTING_WAR_TOGETHER",0x15);
      local_c = 3;
      FUN_009a8ee0(local_48,local_34);
      local_c._0_1_ = 4;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_c = CONCAT31(local_c._1_3_,5);
      FUN_009adb70();
      if (local_44 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (uint)local_34[0]._1_3_ << 8;
    ExceptionList = &local_14;
    FUN_00409350("SUBJECT",7);
    local_c = 0;
    FUN_009a8ee0(local_48,local_34);
    local_c._0_1_ = 1;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_009adb70();
    if (local_44 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

