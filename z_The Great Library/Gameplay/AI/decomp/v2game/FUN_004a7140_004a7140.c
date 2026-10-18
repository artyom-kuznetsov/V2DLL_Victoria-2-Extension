// FUN_004a7140 @ 004a7140 body=[[004a7140, 004a720c] [004a7210, 004a723b] [004a723f, 004a73a5] [004a73a9, 004a73d9] [004a73dd, 004a73f6] [004a73fa, 004a7439] [004a743d, 004a7478] [004a747c, 004a74a6] [004a74aa, 004a74dc] [004a74e0, 004a7554] [004a7558, 004a7573] [004a7577, 004a7591] [004a7595, 004a75aa]]


undefined1 * FUN_004a7140(int param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b76778;
  local_10 = ExceptionList;
  local_14 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar3 = *(int *)(param_1 + 0x7c);
  if ((iVar3 == 0) || (iVar3 == 1)) {
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    ExceptionList = &local_10;
    FUN_00409350("PROJECT_BUILD",0xd);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_28,local_60);
    local_8._0_1_ = 2;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 3;
    FUN_00448aa0();
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    local_8._0_1_ = 4;
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded950,1);
    local_8._0_1_ = 5;
    FUN_00448aa0();
  }
  else {
    if (iVar3 != 2) {
      ExceptionList = &local_10;
      if (iVar3 == 3) {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8._0_1_ = 10;
        FUN_009a8ee0(local_28,local_7c);
        local_8._0_1_ = 0xb;
        iVar3 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
        local_8._0_1_ = 0xc;
        FUN_00448aa0();
        FUN_00408ad0();
        local_8._0_1_ = 10;
        FUN_009a9740();
        local_8._0_1_ = 0;
        FUN_00408ad0();
        FUN_009885d0();
        local_8._0_1_ = 0xd;
        FUN_00448aa0();
        local_8._0_1_ = 0;
        FUN_00408ad0();
      }
      goto LAB_004a743d;
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    ExceptionList = &local_10;
    FUN_00409350("PROJECT_REOPEN",0xe);
    local_8._0_1_ = 6;
    FUN_009a8ee0(local_28,local_60);
    local_8._0_1_ = 7;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 8;
    FUN_00448aa0();
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    local_8._0_1_ = 6;
    FUN_009a9740();
    local_8._0_1_ = 0;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded950,1);
    local_8._0_1_ = 9;
    FUN_00448aa0();
  }
  local_8._0_1_ = 0;
  if (0xf < local_4c) {
    local_8._0_1_ = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_004a743d:
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x70) + 0x18))();
    local_8._0_1_ = 0xe;
    FUN_00448aa0(uVar4,0,0xffffffff);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_7c[0]);
    }
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00408ed0(local_44,0,0xffffffff);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_44[0]);
    }
    ExceptionList = local_10;
    return param_2;
  }
  pcVar2 = (&PTR_s_POP_BUILD_NEW_STATEBUILDING_00f09724)[*(int *)(param_1 + 0x7c)];
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  local_8._0_1_ = 0xf;
  FUN_009a8ee0(local_28,local_60);
  local_8._0_1_ = 0x10;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_8 = CONCAT31(local_8._1_3_,0x11);
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
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

